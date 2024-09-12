aux_source_directory(./ src)
add_executable(awesome ${src})

target_link_libraries(
        awesome
        PRIVATE
        demo1
        demo2
)