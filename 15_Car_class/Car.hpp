# include <string>
# include <iostream>

class Car {
public:
    // No-arg constructor
    Car();

    // Get methods
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;

    // Set functions
    void setMake(const std::string& new_make);
    void setModel(const std::string& new_Model);
    void setYear(const int new_Year);
    void setMPG(const double new_mpg);

    // Class methods
    void print_info();


private:
    std::string make;
    std::string model;
    int year;
    double mpg;

};


