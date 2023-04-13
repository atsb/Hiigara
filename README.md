# Hiigara
Hiigara is a port of Homeworld that focuses on accuracy to the original across many operating systems.

Hiigara is forked from Garden of Kadesh, a web assembly focused port.  Hiigara is heavily modified to be a desktop focused port.

Both ports originate from the original HomeworldSDL project that has since been abandoned.

# Data

The Homeworld data is needed.  Either the latest 1.5 release or the remaster, both are supported and you won't need the 'plug.tga' relic icon as I have removed it (this icon isn't in the remaster data).

Linux users, place the data in the same directory as your binary.
macOS users, place the data in the 'Resources' directory inside the App Bundle.

# Building

Linux users should perform

1. ./configure
2. Enter the tools directory and build biggie using the scripts
3. Enter the Linux directory and execute the bootstrap script
4. Use the Makefile that is then created in the root directory

macOS users should perform

1. Open the provided xcode project
2. Build the project

NOTE: macOS users, I strongly advise you to have macports and to have sdl2 development libs installed in /opt/local/include and /opt/local/lib.  This is the location that is hardcoded in kas2c, biggie and in the xcode project.  Having a universal SDL2.framework in your Library/Frameworks directory is also a pre-requisite to building.

Enjoy using Hiigara as much as I did porting it.