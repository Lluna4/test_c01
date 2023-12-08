#include <iostream>
#include <libgen.h>
#include <unistd.h>
#include <format>

int main(int argc, char *argv[])
{
    int status = 0;
    char *dir = dirname(argv[0]);
    system(std::format("cp {}/test.cpp ./test.cpp", dir).c_str());
    status = system("g++ -std=c++17 test.cpp -o test");
    if (status == 0)
    {
        status = system("./test");
        status = system("rm ./test");
        status = system("rm test.cpp");
    }
    return status;
}