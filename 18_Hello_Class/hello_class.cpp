#include <iostream>

class Hello {
    public:
        // No arg constructor
        Hello() {
            std::cout << "No arg constructor for " << this << std::endl;
        }

        void bye() const {
            std::cout << "Bye!!!\n";
        }
    private:

};


int main() {
    Hello* hi = new Hello(); // Create Hello Object Dynamically
    hi->bye(); // Call Bye Method Dynamically
    
    // Deallocate Memory
    delete hi;
    
    return 0;
}