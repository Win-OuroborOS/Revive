#pragma once

#define REV_MAKESTR(x) #x
#define REV_STRINGIFY(x) REV_MAKESTR(x)

#define REV_MAJOR_VERSION 1
#define REV_MINOR_VERSION 8
#define REV_PATCH_VERSION 2
#define REV_BUILD_NUMBER  3

#define REV_VERSION_STRING REV_STRINGIFY(REV_MAJOR_VERSION.REV_MINOR_VERSION.REV_PATCH_VERSION.REV_BUILD_NUMBER)
#define REV_VERSION_INT (REV_MAJOR_VERSION << 24 | REV_MINOR_VERSION << 16 | REV_PATCH_VERSION << 8 | REV_BUILD_NUMBER)
