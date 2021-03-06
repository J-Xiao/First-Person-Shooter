// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
//#include <iostream>
//#include <string>

// TODO: reference additional headers your program requires here
#include <iostream>
#include <fstream>

// header files
#include <gl\GL.h>
#include <gl\GLU.h>

// lib connections
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "kernel32.lib")

#define RAND_COORD(x)   ((float)rand()/RAND_MAX * (x))