
BEFORE RUNNING GAME READ "DATA FILES" SECTION in README.txt !!!

-------------------------------------------------------------------------------
1. Overview
-------------------------------------------------------------------------------

1. Overview
2. Credit to FreeCNC
3. Introduction
4. Disclaimer
5. Compilation
  5.1. Requirements
  5.2. Compiling with GCC G++
  5.3. Compiling with Visual C++
6. Data files
  6.1. Red Alert Demo

-------------------------------------------------------------------------------
2. Credit
-------------------------------------------------------------------------------
to FreeCNC:
I would like to state here that this project is based on the FreeCNC project
http://freecnc.org/. A great effort to make a gameing engine
for Westwood cnc games.

to FreeRA :
I would like to state here that this project is based on the FreeRA project
http://freera.sourceforge.net/. A great effort to make FreeCNC compatible with 
Red Alert from Westwood.

-------------------------------------------------------------------------------
3. Introduction
-------------------------------------------------------------------------------

This document comes with OpenRedAlert. OpenRedAlert is a game engine rebuild of the game 
red alert 1. To play the game you need the original data (.mix) files form the 
original game. This document describes how to compile OpenRedAlert, how to get the data
files, and how to run the game.

-------------------------------------------------------------------------------
4. Disclaimer
-------------------------------------------------------------------------------

OpenRedAlert is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.  See version two of the GNU General Public License for
more details.

-------------------------------------------------------------------------------
5. Compilation
-------------------------------------------------------------------------------

This section will outline how to successfully compile FreeRA.

5.1. Requirements
==============================
 
  Supported compilers:
  - GCC G++ version 3.3 or newer.
  - A recent verions of Dev C++ .

  Libraries:
  - SDL 1.2.8 or newer.
  - SDL_mixer 1.2.5 or newer.

5.2. Compiling with GCC
=======================

  The only things to do is to get the last version of source at :

http://openredalert.googlecode.com/svn/trunk/ openredalert-read-only

Before make sure that the SDL library and SDL_mixer library is installed.

-------------------------------------------------------------------------------
6. Data Files
-------------------------------------------------------------------------------

  Only two files are needed for red alert:
    * redalert.mix
    * main.mix

  Both files can be found on either Red Alert CD.  Both CDs have the maps for
  both campaigns but only the videos for one.

 Copy the 'data' folder in the folder of OpenRedAlert

6.1. Red Alert Demo
===================

  The demo version work !!!

  The demo version can be downloaded from here:
  ftp://ftp.westwood.com/pub/redalert/previews/demo/ra95demo.zip

  As always, you only need the mix files from the archieve.

6.2 Electronic Arts - Free 2008 version
=======================================

  When RedAlert 3 was launched, EA provide download of original game (2 iso CD) for free
  It's only englsih version, but it's the original archives.

  You can get it at :
  http://www.ea.com/redalert/news-detail.jsp?id=62

