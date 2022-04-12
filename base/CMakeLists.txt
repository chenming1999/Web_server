
set(LIB_SRC
    base_src/CountDownLatch.cpp
    base_src/Thread.cpp
)
include_directories(base_include)
add_library(libserver_base ${LIB_SRC})
target_link_libraries(libserver_base pthread rt)

set_target_properties(libserver_base PROPERTIES OUTPUT_NAME "server_base")
