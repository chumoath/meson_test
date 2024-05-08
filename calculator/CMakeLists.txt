CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
PROJECT(BMCx VERSION 1.0 LANGUAGES CXX C)

INCLUDE_DIRECTORIES(/usr/lib/x86_64-linux-gnu/glib-2.0/include)
INCLUDE_DIRECTORIES(/usr/include/glib-2.0)
INCLUDE_DIRECTORIES(/usr/include)

SET(INCLUDE_LIST
	${CMAKE_SOURCE_DIR}/cmake-build-debug
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/3.22.1
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/3.22.1/CompilerIdC
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/3.22.1/CompilerIdCXX
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/app
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/lib
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/lib/add
	${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/lib/sub
	${CMAKE_SOURCE_DIR}/cmake-build-debug/Testing
	${CMAKE_SOURCE_DIR}/cmake-build-debug/Testing/Temporary
	${CMAKE_SOURCE_DIR}/configs
	${CMAKE_SOURCE_DIR}/configs/algos
	${CMAKE_SOURCE_DIR}/inc
	${CMAKE_SOURCE_DIR}/scripts
	${CMAKE_SOURCE_DIR}/src
	${CMAKE_SOURCE_DIR}/src/app
	${CMAKE_SOURCE_DIR}/src/lib
	${CMAKE_SOURCE_DIR}/src/lib/algos
	${CMAKE_SOURCE_DIR}/src/lib/algos/inc
	${CMAKE_SOURCE_DIR}/src/lib/algos/src
	${CMAKE_SOURCE_DIR}/src/lib/algos/src/add
	${CMAKE_SOURCE_DIR}/src/lib/algos/src/sub
)
INCLUDE_DIRECTORIES(${INCLUDE_LIST})

AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/3.22.1 SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/3.22.1/CompilerIdC SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/3.22.1/CompilerIdCXX SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/app SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/lib SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/lib/add SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/CMakeFiles/BMCx.dir/src/lib/sub SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/Testing SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/cmake-build-debug/Testing/Temporary SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/configs SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/configs/algos SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/inc SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/scripts SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src/app SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src/lib SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src/lib/algos SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src/lib/algos/inc SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src/lib/algos/src SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src/lib/algos/src/add SRC_LIST)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src/lib/algos/src/sub SRC_LIST)
ADD_LIBRARY(BMCx SHARED ${SRC_LIST})
