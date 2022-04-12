//
// Created by zsf on 2022/3/12.
//

#include "EventLoop.h"
#include "Server.h"


int main(int argc, char *argv[]) {
  int threadNum = 4;
  int port = 9010;

// STL库在多线程上应用
#ifndef _PTHREADS
  LOG << "_PTHREADS is not defined !";
#endif
  EventLoop mainReact;
  Server myHTTPServer(&mainReact, threadNum, port);
  myHTTPServer.start();
  mainReact.loop();
  return 0;
}
