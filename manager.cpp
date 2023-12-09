#include <iostream>
#include <libgen.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int status = 0;
    char *dir = dirname(argv[0]);
    char *buf = (char *)malloc(1024 * sizeof(char));
    sprintf(buf, "cp %s/test.cpp ./test.cpp", dir);
    system(buf);
    free(buf);
    status = system("g++ -std=c++17 test.cpp -o test");
    if (status == 0)
    {
        status = system("./test");
        status = system("rm ./test");
        status = system("rm test.cpp");
    }
    return status;
}