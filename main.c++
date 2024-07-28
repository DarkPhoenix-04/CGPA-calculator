#include <iostream>
#include <vector>
using namespace std;

class Course {
public:
    string name;
    double grade;
    int credits;

    Course(string n, double g, int c) : name(n), grade(g), credits(c) {}
};

class Student {
private:
    vector<Course> courses;

public:
    void addCourse(string name, double grade, int credits) {
        courses.push_back(Course(name, grade, credits));
    }

    double calculateCGPA() {
        double totalGradePoints = 0;
        int totalCredits = 0;

        for (const auto& course : courses) {
            totalGradePoints += course.grade * course.credits;
            totalCredits += course.credits;
        }

        if (totalCredits == 0) return 0;

        return totalGradePoints / totalCredits;
    }

    void displayGrades() {
        cout << "Course Grades:\n";
        for (const auto& course : courses) {
            cout << "Course: " << course.name << ", Grade: " << course.grade << ", Credits: " << course.credits << endl;
        }
    }

    int getTotalCredits() {
        int totalCredits = 0;
        for (const auto& course : courses) {
            totalCredits += course.credits;
        }
        return totalCredits;
    }

    double getTotalGradePoints() {
        double totalGradePoints = 0;
        for (const auto& course : courses) {
            totalGradePoints += course.grade * course.credits;
        }
        return totalGradePoints;
    }
};

int main() {
    Student student;
    int numCourses;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; ++i) {
        string name;
        double grade;
        int credits;

        cout << "Enter course name: ";
        cin >> name;
        cout << "Enter grade for " << name << ": ";
        cin >> grade;
        cout << "Enter credits for " << name << ": ";
        cin >> credits;

        student.addCourse(name, grade, credits);
    }

    student.displayGrades();

    double cgpa = student.calculateCGPA();
    int totalCredits = student.getTotalCredits();
    double totalGradePoints = student.getTotalGradePoints();

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
