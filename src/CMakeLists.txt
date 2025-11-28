add_subdirectory(MyLib)
add_subdirectory(helpers)

target_link_libraries(${LIBRARY_NAME} PUBLIC ${LIBRARY_NAME_1})