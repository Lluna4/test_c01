#include <iostream>

int main()
{
    int status = 0;
    system("ls");
    status = system("g++ -std=c++17 test.cpp -o test");
    if (status == 0)
    {
        status = system("./test");
        status = system("rm ./test");
    }
    return status;
}