#include <iostream>

void add_five(int& num)
{
    num += 5;
}

int main() {

    int a = 10;
    // Create a reference variable
    int& a_ref = a;

    a += 10;
    std::cout << a << " " << a_ref << std::endl;

    a *= 10;
    std::cout << a << " " << a_ref << std::endl;
    int b = 1;
    a_ref = b;

    add_five(a);
    std::cout << a << " " << a_ref << std::endl;

    return 0;

}


