/*
 * Copyright (c) 2017 Petr Vorel <pvorel@suse.cz>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LAPI_IN_H__
#define LAPI_IN_H__

#include <netinet/in.h>

#ifndef IPPROTO_DCCP
#define IPPROTO_DCCP		33
#endif

#ifndef IPPROTO_UDPLITE
# define IPPROTO_UDPLITE	136 /* UDP-Lite (RFC 3828) */
#endif

#ifndef IP_BIND_ADDRESS_NO_PORT
# define IP_BIND_ADDRESS_NO_PORT	24
#endif

#endif	/* LAPI_IN_H__ */
