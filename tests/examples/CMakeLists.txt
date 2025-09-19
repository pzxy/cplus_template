aux_source_directory(./ src)
add_executable(examples ${src} )
# if you don't  write the main.cpp, you must add gtest_main, otherwise an error occurred
target_link_libraries(examples PRIVATE demo gtest gtest_main)

# 将测试可执行文件注册到 CTest
add_test(NAME box_test COMMAND examples)