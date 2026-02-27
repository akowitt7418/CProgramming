# include "Car.hpp"

int main() {
    // Create Car object
    Car ferrari;

    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2024);
    ferrari.setMPG(14.2);
    ferrari.print_info();

    return 0;
}

/*
    1. Implement get methods
    2. Create a constructor with arguments
    3. Add mileage property (odometer value)
    4. Add fuel capacity property (tank capacity)
    5. Add fuel level property (current fuel level)
    6. void refuel(double gallons);
        add fuel to tank
    7. void drive(double distance);
        can you cover some distance given the MPG and the current fuel level and how much fuel will you have left
*/