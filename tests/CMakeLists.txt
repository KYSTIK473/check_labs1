find_package(GTest REQUIRED)

add_executable(la1_tests test.cpp)

target_link_libraries(la1_tests changeLib GTest::gtest_main)

add_test(NAME la1_tests COMMAND la1_tests)