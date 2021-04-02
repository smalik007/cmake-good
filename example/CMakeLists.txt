# variable ${PROJECT_NAME} = whatever you set in project command above
add_executable(${PROJECT_NAME} src/main.cpp) 

# linking is required when using add_library
target_link_libraries(${PROJECT_NAME} PRIVATE
    calculator
)