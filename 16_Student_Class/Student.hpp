#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student {
    public:

        Student(const std::string& n, double g);

        static int getTotalStudents();

        static void setGraduationRequirement(double newGPA);

        bool canGraduate();

        void print() const;

        

    private:
        std::string name;
        double gpa;
        static int total_students;
        static int next_id;
        std::string id;
    
        
};

#endif