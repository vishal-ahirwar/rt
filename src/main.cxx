// Auto Genrated C++ file by aura CLI
// Copyright 2023 Vishal Ahirwar //replace it with your copyright notice!
#include <fmt/color.h>
#include <fmt/core.h>
#include <rtconfig.h>

#include <chrono>
#include <cstdio>
#include <string>

class RT {
 private:
  std::chrono::time_point<std::chrono::high_resolution_clock> _start;
  std::chrono::time_point<std::chrono::high_resolution_clock> _end;
  std::string _msg;

 public:
  RT(const std::string &msg = "");
  ~RT();
};
RT::RT(const std::string &msg) : _msg(msg), _end{} {
  _start = std::chrono::high_resolution_clock::now();
};
RT::~RT() {
  auto _end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed_time{_end - _start};
  printf("Total time taken by %s :  %.2fs\n", _msg.c_str(),
         elapsed_time.count());
};

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("RT %d.%d.%d\n", RT_VERSION_MAJOR, RT_VERSION_MINOR,
           RT_VERSION_PATCH);
    printf("%s\n", RT_COPYRIGHT);
    printf("Usage: rt <command>\n");
    printf("Example: rt g++ main.cc -o app\n");

    return 0;
  }

  RT rt(argv[1]);
  std::string app = argv[1];
  for (int i = 2; i < argc; i++) {
    app += " ";
    app += argv[i];
  };
  system(app.c_str());
  return 0;
};