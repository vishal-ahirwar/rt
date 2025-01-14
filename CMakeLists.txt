
#Auto Genrated CMake file by aura CLI
#Copyright 2023 Vishal Ahirwar. #replace with your copyright notice.
cmake_minimum_required(VERSION 3.6...3.31)
project(rt VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")
set(COMPANY "Vishal Ahirwar")
string(TIMESTAMP CURRENT_YEAR "%Y")
set(COPYRIGHT "Copyright(c) ${CURRENT_YEAR} Vishal Ahirwar")
include_directories(src ${CMAKE_BINARY_DIR})
configure_file(rtconfig.h.in rtconfig.h)
#@find
set(SOURCE ./src/main.cc)#add your additional source file here!
add_executable(${PROJECT_NAME} ${SOURCE})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
#@link

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VENDOR ${COMPANY})
include(CPack)