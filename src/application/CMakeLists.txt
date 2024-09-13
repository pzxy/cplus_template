aux_source_directory(./ src)
add_executable(awesome ${src})
#add_library(awesome demo1 demo2)
target_link_libraries(
        awesome
        PRIVATE
        demo1
        demo2
)