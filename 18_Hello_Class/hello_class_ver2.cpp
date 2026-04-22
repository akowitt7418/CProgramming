#include <iostream>
#include <string>

class Hello {
    public:
        // No arg constructor
        Hello() : size(0), messages(nullptr) {
        std::cout << "No arg constructor for " << this << std::endl;
        }

        // Constructor with Arguments
        Hello(int n) : size(n) {
            std::cout << "Argument constructor for " << this << std::endl;
            messages = new std::string[size];
            for (int i = 0; i < size; i++) {
                messages[i] = (i % 2) ? "Welcome!" : "Not welcome";
            }
        }

        // Destructior
        ~Hello() {
            std::cout << "Destructor for " << this << std::endl;
            delete[] messages;
        }

        void bye() const {
            std::cout << "Bye!!!\n";
        }
    private:
            std::string* messages;
            int size;

};


int main() {
    Hello* hi = new Hello(); // Create Hello Object Dynamically
    hi->bye(); // Call Bye Method Dynamically
    
    Hello* hi2 = new Hello(10); // Create Hello Object Dynamically with Arguments



    // Deallocate Memory
    delete hi;
    delete hi2;

    Hello hi3(20);
    Hello hi4 = hi3; 
    
    return 0;
}