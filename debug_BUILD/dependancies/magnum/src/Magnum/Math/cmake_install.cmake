# Install script for directory: /home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./include/Magnum/Math" TYPE FILE FILES
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Angle.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Bezier.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/BoolVector.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Color.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Complex.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Constants.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/ConfigurationValue.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/CubicHermite.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Distance.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Dual.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/DualComplex.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/DualQuaternion.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Frustum.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Functions.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/FunctionsBatch.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Half.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Intersection.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Math.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/TypeTraits.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Matrix.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Matrix3.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Matrix4.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Quaternion.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Packing.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/PackingBatch.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Range.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/RectangularMatrix.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/StrictWeakOrdering.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Swizzle.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Tags.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Unit.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Vector.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Vector2.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Vector3.h"
    "/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/dependancies/magnum/src/Magnum/Math/Vector4.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/smallville7123/AndroidCompositor/app/src/main/jni/GLIS/debug_BUILD/dependancies/magnum/src/Magnum/Math/Algorithms/cmake_install.cmake")

endif()

