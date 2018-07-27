cmake_minimum_required(VERSION 3.10)
project(lesson13 C)

set(CMAKE_C_STANDARD 11)
include_directories(../includes)
set(INC ../includes/)

add_executable(lesson13 struct.c ${INC}mio.c ${INC}mio.h)
add_executable(apostasi apostasi.c  ${INC}mio.c ${INC}mio.h)


add_executable(domes domes.c ${INC}mio.c ${INC}mio.h records.c records.h)
