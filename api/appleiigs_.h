/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 */

#ifndef _APPLEIIGS_H
#define _APPLEIIGS_H

#include "Generator.h"
#include "JavaClass.h"

int appleiigs(JavaClass *java_class, Generator *generator, char *method_name);
int appleiigs(JavaClass *java_class, Generator *generator, char *method_name, int const_val);

#endif

