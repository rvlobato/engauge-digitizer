/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#include "Version.h"

// Every jump in the major version number will need:
// 1) changes to Document class
// 2) at least one version-specific test case in the test subdirectory
// 3) at least one period in the version number (e.g. 13.0 versus 13)
const char *VERSION_NUMBER = "12.9";

QString engaugeWindowTitle()
{
  QString str = QString ("Engauge - %1").arg (VERSION_NUMBER);

  return str;
}
