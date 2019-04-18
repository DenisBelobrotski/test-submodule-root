#include <iostream>
#include <libtestparser/libtestparser.h>

int main()
{
    std::cout << "Hello from main.cpp!" << std::endl;
    sayHello();
    sayDogName("Charlie");
    std::cout << getDogAge() << std::endl;
    return 0;
}