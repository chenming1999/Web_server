set(SRCS
    src/Channel.cpp
    src/Epoll.cpp
    src/EventLoop.cpp
    src/EventLoopThread.cpp
    src/EventLoopThreadPool.cpp
    src/HttpData.cpp
    src/Main.cpp
    src/Server.cpp
    #ThreadPool.cpp
    src/Timer.cpp
    src/Util.cpp
)
include_directories(base/base_include)
include_directories(include)


add_executable(WebServer ${SRCS})
target_link_libraries(WebServer libserver_base)


add_subdirectory(base)
add_subdirectory(tests)