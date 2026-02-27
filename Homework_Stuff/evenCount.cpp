# include <iostream>

int evenCount(unsigned int value);

int main() {
    std::cout << "Enter the number ";
    int value;
    std::cin >> value;
    std::cout << "The number of even digits is " << evenCount(value) << std::endl;

}

int evenCount(unsigned int value) {
    if (value < 10) {
        return (value % 2 == 0);
    }
    return (value % 2 == 0) + evenCount(value / 10);

}
    