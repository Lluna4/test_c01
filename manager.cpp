#include <iostream>
#if !__has_include(<gtest/gtest.h>)
#define NO_GTEST
#endif

int main()
{
    #ifdef NO_GTEST
        std::cout << "No esta gtest instalado en este entorno" << std::endl;
        exit(1);
    #endif
    int status = 0;
    status = system("g++ test.cpp manager.cpp -std=c++17 -Igoogletest/googletest/include -Lgoogletest -lgtest -pthread -o test");
    if (status == 0)
    {
        status = system("./test");
        status = system("rm ./test");
    }
    return status;
}