// Auto Genrated C++ file by aura CLI
// Copyright 2023 Vishal Ahirwar //replace it with your copyright notice!
#include <cstdio>
#include <rtconfig.h>
#include <chrono>
#include <string>
class RT
{
private:
    clock_t _start;
    std::string _msg;

public:
    RT(const std::string &msg = "");
    ~RT();
};
RT::RT(const std::string &msg) : _msg(msg)
{
    _start = clock();
};
RT::~RT()
{
    auto _end = clock();
    printf("Total time taken by %s :  %.4fs\n", _msg.c_str(), (double)(_end - _start) / CLOCKS_PER_SEC);
};

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("RT %d.%d.%d\n", RT_VERSION_MAJOR, RT_VERSION_MINOR, RT_VERSION_PATCH);
        printf("%s\n", RT_COPYRIGHT);
        printf("Usage: rt <command>\n");
        printf("Example: rt g++ main.cc -o app\n");

        return 0;
    }

    RT rt(argv[1]);
    std::string app = argv[1];
    for (int i = 2; i < argc; i++)
    {
        app += " ";
        app += argv[i];
    };
    system(app.c_str());
    return 0;
};