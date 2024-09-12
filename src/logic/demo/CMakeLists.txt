aux_source_directory(./src demo)

add_library(demo STATIC ${demo})
#add_dependencies(demo xdata xcommon)
#target_link_libraries(demo PRIVATE xdata xcommon)