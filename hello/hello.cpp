#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;

    u_int x = 2;

    for(u_int i = 0; i < 32; i++)
    {
        x *= 2;
        std::cout << x << std::endl;
    }

    return 0;
}