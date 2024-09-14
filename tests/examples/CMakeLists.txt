aux_source_directory(./ src)
add_executable(examples ${src} )
# if you don't  write the main.cpp, you must add gtest_main, otherwise an error occurred
target_link_libraries(examples PRIVATE demo1 gtest gtest_main)