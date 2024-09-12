aux_source_directory(./src xdemo)

add_library(xdemo STATIC ${xdemo})

#add_dependencies(xdemo xdata xcommon)
#target_link_libraries(xdemo PRIVATE xdata xcommon)