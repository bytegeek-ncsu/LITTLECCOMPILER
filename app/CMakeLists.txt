add_executable(${EXECUTABLE_NAME} main.c)

#add target and Linking Library

target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME_1})