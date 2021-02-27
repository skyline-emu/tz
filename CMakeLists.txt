cmake_minimum_required(VERSION 3.1)

project(
  tzcode
  VERSION 2021.1
  LANGUAGES C)

add_library(tzcode strftime.c asctime.c localtime.c)
target_include_directories(tzcode PUBLIC include)
target_compile_options(tzcode PRIVATE -DHORIZON_COMPAT -DRESERVE_STD_EXT_IDS -DTHREAD_SAFE)
