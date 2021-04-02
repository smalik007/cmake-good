cmake_minimum_required(VERSION "3.18.2")
project(cmake-good)

add_subdirectory(Calculator)
add_subdirectory(example)

# you can either add hpp and cpp files in add_executable like below
# add_executable(cmake-good main.cpp Calculator.cpp)

# Alternatively you can use add_library command and link the library to target output binary
# This way you can generate a static/shared libraries for your source code, you can use these libraries to directly deploy
# add_library(
#     # calculator    # library name, by default it will generate a static libcalculator.a , for libcalculator.so add SHARED/STATIC(by defualt) after space
#     calculator SHARED
#     src/Calculator.hpp
#     src/Calculator.cpp
# )


# variable ${PROJECT_NAME} = whatever you set in project command above
# add_executable(${PROJECT_NAME} src/main.cpp) 

# # linking is required when using add_library
# target_link_libraries(${PROJECT_NAME} PRIVATE
#     calculator
# )