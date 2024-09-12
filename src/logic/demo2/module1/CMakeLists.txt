aux_source_directory(./src module1)

add_library(module1 STATIC ${module1})

add_dependencies(module1 module2)
target_link_libraries(module1 PRIVATE module2)