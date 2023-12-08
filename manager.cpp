#include <iostream>
#include <libgen.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int status = 0;
    char *dir = dirname(argv[0]);
    chdir(dir);
    system("ls");
    status = system("g++ -std=c++17 test.cpp -o test");
    if (status == 0)
    {
        status = system("./test");
        status = system("rm ./test");
    }
    return status;
}