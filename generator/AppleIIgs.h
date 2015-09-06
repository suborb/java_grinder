/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2014-2015 by Michael Kohn
 *
 */

#ifndef _APPLE_II_GS_H
#define _APPLE_II_GS_H

#include "W65816.h"

class AppleIIgs : public W65816
{
public:
  AppleIIgs();
  virtual ~AppleIIgs();

  virtual int open(const char *filename);
  virtual int appleiigs_plotChar_IC();
  virtual int appleiigs_printChar_C();
  virtual int appleiigs_hiresEnable();
  virtual int appleiigs_hiresPlot_II();
  virtual int appleiigs_hiresRead_I();

private:
};

#endif
