if (WITH_TESTS)
    # 由于gtest被vcpkg管理了，因此这里并不需要开启了。
    # add_subdirectory(googletest)
    # include_directories(SYSTEM googletest/googletest/include/)
    # include_directories(SYSTEM googletest/googlemock/include/)
endif ()