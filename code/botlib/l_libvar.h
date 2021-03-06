/*
===========================================================================
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of Spearmint Source Code.

Spearmint Source Code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 3 of the License,
or (at your option) any later version.

Spearmint Source Code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Spearmint Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, Spearmint Source Code is also subject to certain additional terms.
You should have received a copy of these additional terms immediately following
the terms and conditions of the GNU General Public License.  If not, please
request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional
terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc.,
Suite 120, Rockville, Maryland 20850 USA.
===========================================================================
*/

/*****************************************************************************
 * name:		l_libvar.h
 *
 * desc:		botlib vars
 *
 * $Archive: /source/code/botlib/l_libvar.h $
 *
 *****************************************************************************/

//library variable
typedef struct libvar_s
{
	char		*name;
	char		*string;
	int		flags;
	qboolean	modified;	// set each time the cvar is changed
	float		value;
	struct	libvar_s *next;
} libvar_t;

//removes all library variables
void LibVarDeAllocAll(void);
//gets the library variable with the given name
libvar_t *LibVarGet(const char *var_name);
//gets the string of the library variable with the given name
char *LibVarGetString(const char *var_name);
//gets the value of the library variable with the given name
float LibVarGetValue(const char *var_name);
//creates the library variable if not existing already and returns it
libvar_t *LibVar(const char *var_name, const char *value);
//creates the library variable if not existing already and returns the value
float LibVarValue(const char *var_name, const char *value);
//creates the library variable if not existing already and returns the value string
char *LibVarString(const char *var_name, const char *value);
//sets the library variable
void LibVarSet(const char *var_name, const char *value);
//returns true if the library variable has been modified
qboolean LibVarChanged(const char *var_name);
//sets the library variable to unmodified
void LibVarSetNotModified(const char *var_name);

