# include <iostream>
# include <string>

class A {
    public:
    std::string msg1 = "message one!"; // fine
    
//    private:
    std::string msg2 = "message two!"; // no access

    protected:
    std::string msg3 = "message three!"; // fine (protected)
};

class B : public A {
    public:
    void method() const {
        std::cout << msg1 << std::endl;
        std::cout << msg2 << std::endl;
        std::cout << msg3 << std::endl;
    }
};


int main() {
    B b;
    b.method();

    std::cout << b.msg1; // fine
    // std::cout << b.msg2; // no access
    // std::cout << b.msg3; // no access

    return 0;
}

