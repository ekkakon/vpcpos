
Debian
====================
This directory contains files used to package voltpotcoind/voltpotcoin-qt
for Debian-based Linux systems. If you compile voltpotcoind/voltpotcoin-qt yourself, there are some useful files here.

## voltpotcoin: URI support ##


voltpotcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install voltpotcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your voltpotcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/voltpotcoin128.png` to `/usr/share/pixmaps`

voltpotcoin-qt.protocol (KDE)

