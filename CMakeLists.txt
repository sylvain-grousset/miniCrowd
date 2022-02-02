cmake_minimum_required(VERSION 3.13)
project(MiniCrowd)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -Wextra")


add_executable(miniCrowd main.cpp AllegroManager.cpp AllegroManager.h Entity.cpp Entity.h EntitiesManager.cpp EntitiesManager.h Rectangle.cpp Rectangle.h Amie.cpp Amie.h)

if(UNIX)
   find_library(LIBALLEGRO allegro)
   find_library(LIBALLEGRO_PRIMITIVES allegro_primitives)
   target_link_libraries(miniCrowd ${LIBALLEGRO} ${LIBALLEGRO_PRIMITIVES})
endif(UNIX)

# Attempt at configuring Allegro for MinGW, not tested...
if(MINGW)
   # À mettre à jour en fonction de où vous avez installé Allegro
   include_directories( "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/include" )
   link_directories("C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/lib" )
   target_link_libraries(miniCrowd liballegro.dll.a liballegro_primitives.dll.a)
endif(MINGW)


