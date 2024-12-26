cmake_minimum_required(VERSION 3.29)
project(mig)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(sketch_nov6a)

add_executable(mig
    sketch_nov6a/sketch_nov6a.ino
        sketch_nov6a/sketch_nov6a.ino)
