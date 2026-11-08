cmake_minimum_required(VERSION 4.3.0)
project(touch)
add_executable(touch)
target_sources(touch
  PRIVATE
    src/touch.cpp
)
add_executable(echo)
target_sources(echo
  PRIVATE
    src/echo.cpp
)
