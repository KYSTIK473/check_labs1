add_library(changeLib change.h change.cpp)

add_executable(la1_main 
    main.cpp
)

target_link_libraries(la1_main changeLib)
