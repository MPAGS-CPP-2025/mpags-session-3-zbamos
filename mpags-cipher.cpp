#include <iostream>
int main()
{
    // This is a comment
    /* This comment
    is Mulitline! */
    constexpr int a{4};          // bad!
    constexpr double b{1.2*a}; 
    double c{3.4};

    //a = 43;
    //b = 2.2;

    c = a*b;

    std::cout << c << std::endl;
   
    std::string msg {"Hello"};

    std::cout << msg[4] <<  "\n";

    return 0;
}
