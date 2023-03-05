#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class representing a single student
class Student {
private:
    string name;
    int rollNumber;
    int marks;

public:
    // Constructor to initialize the student
    Student(string n, int r, int m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    // Getter methods to access the student's information
    string getName() {
        return name;
    }

    int getRollNumber() {
        return rollNumber;
    }

    int getMarks() {
        return marks;
    }
};

// Class representing a student management system
class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // Method to add a new student to the system
    void addStudent(Student s) {
        students.push_back(s);
        cout << "Student added successfully." << endl;
    }

    // Method to print the details of all students in the system
    void printAllStudents() {
        if (students.size() == 0) {
            cout << "No students found." << endl;
            return;
        }
        cout << "Name\tRoll Number\tMarks" << endl;
        for (int i = 0; i < students.size(); i++) {
            cout << students[i].getName() << "\t" << students[i].getRollNumber() << "\t\t" << students[i].getMarks() << endl;
        }
    }

    // Method to search for a student by roll number
    void searchStudent(int rollNumber) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getRollNumber() == rollNumber) {
                cout << "Name: " << students[i].getName() << endl;
                cout << "Roll Number: " << students[i].getRollNumber() << endl;
                cout << "Marks: " << students[i].getMarks() << endl;
                return;
            }
        }
        cout << "Student not found." << endl;
    }
};

// Main method to test the student management system
int main() {
    StudentManagementSystem sms;

    // Add some students to the system
    sms.addStudent(Student("John", 101, 85));
    sms.addStudent(Student("Jane", 102, 90));
    sms.addStudent(Student("Bob", 103, 75));

    // Print all students in the system
    sms.printAllStudents();

    // Search for a student by roll number
    sms.searchStudent(102);
    sms.searchStudent(104);

    return 0;
}
