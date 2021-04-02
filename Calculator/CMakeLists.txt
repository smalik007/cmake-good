# Alternatively you can use add_library command and link the library to target output binary
# This way you can generate a static/shared libraries for your source code, you can use these libraries to directly deploy
add_library(
    # calculator    # library name, by default it will generate a static libcalculator.a , for libcalculator.so add SHARED/STATIC(by defualt) after space
    calculator SHARED
    src/Calculator.hpp
    src/Calculator.cpp
)

# any CMAKE including this will also include the src files relative to current source dir (shared as public)
target_include_directories(calculator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# we can add compile time definitions here, here we can define it as 
# PUBLIC : any one who consume this library has access to the definition also
# PRIVARE : only the library code has access to the definition 
# INTERFACE : works complements to PRIVATE, in that case only the consumer would have access to definition not the library code itself
# These definition holds true any where you use these tags for different reasons not specific to definition only.
target_compile_definitions(calculator PUBLIC CALCULATOR_VERSION="1.0.0")
