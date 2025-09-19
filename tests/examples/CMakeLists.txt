aux_source_directory(./ src)
add_executable(examples ${src} )
# vcpkg的包必须用全路径从包名字开始，比如这里GTest::，如果是系统和项目中包，可以直接用名字。
target_link_libraries(examples PRIVATE demo GTest::gtest GTest::gtest_main)

# 将测试可执行文件注册到 CTest
add_test(NAME box_test COMMAND examples)