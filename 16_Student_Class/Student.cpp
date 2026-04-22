# include <string>
# include <iostream>
# include "Student.hpp"


// Initialize the static data member (Required)
int Student::total_students = 0;
int Student::next_id = 1000;

Student::Student(const std::string& n, double g) : name(n), gpa(g) {
    total_students++;
    id = "U0000" + std::to_string(next_id++);
    next_id += 5;
}

int Student::getTotalStudents() {
    return total_students;
}

bool Student::canGraduate() {
    return gpa >= 3.0;
}

void Student::print() const {
    std::cout << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Can graduate: " << (canGraduate() ? "YES" : "NO") << std::endl;
    std::cout << std::endl;
    
}

