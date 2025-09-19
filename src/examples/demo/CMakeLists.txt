aux_source_directory(./ src)

add_library(demo ${src})
#add_dependencies(demo spdlog::spdlog_header_only))
target_link_libraries(demo
    PRIVATE
    spdlog::spdlog_header_only
)
