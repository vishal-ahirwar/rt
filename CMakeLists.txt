
#Auto Genrated CMake file by aura CLI
#None
cmake_minimum_required(VERSION 3.6...3.31)
project(rt VERSION 1.0.0 LANGUAGES CXX)
include(cmake/config.cmake)
#@find Warning: Do not remove this line
find_package(fmt REQUIRED)

file(GLOB SOURCES "src/*.cxx")
add_executable(${PROJECT_NAME} ${SOURCES})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
#@link Warning: Do not remove this line
target_link_libraries(${PROJECT_NAME} fmt::fmt)


include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VENDOR ${COMPANY})
include(CPack)