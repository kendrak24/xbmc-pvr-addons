#pragma once
/*
 *      Copyright (C) 2005-2009 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#ifndef __WINDOWS__
#include <time.h>
#endif

inline int daytime(time_t *time)
{
  struct tm* ptm = localtime(time);
  int retval = ptm->tm_sec + ptm->tm_min * 60 + ptm->tm_hour * 3600;
  return retval;
}

inline int weekday(time_t *time)
{
  struct tm* ptm = localtime(time);
  int retval = ptm->tm_wday;
  return retval;
}
