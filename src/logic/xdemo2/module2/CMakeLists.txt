aux_source_directory(./src module2)

add_library(module2 STATIC ${module2})

#add_dependencies(module2 xdata xcommon)
#target_link_libraries(module2 PRIVATE xdata xcommon)