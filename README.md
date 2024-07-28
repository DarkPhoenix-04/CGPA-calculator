# CGPA-calculator
This C++ program is designed to calculate a student's Cumulative Grade Point Average (CGPA) based on the grades and credits of the courses they have taken. The program consists of two main classes: Course and Student, and it includes the necessary logic to handle user input, compute grades, and display results.

#Steps of how to write the code 

1. Initialization: The program initializes a Student object and collects course information from the user.
2. Data Entry: The user inputs the name, grade, and credits for each course.
3. Computation: The program calculates the total grade points and total credits, and then computes the CGPA.
4. Output: The program displays the individual course details, total credits, total grade points, and the final CGPA.


#Components and Workflow:

1. Course Class:
   Purpose: Represents an individual course.
   
   Attributes:
    name: The name of the course (string).
    grade: The grade received in the course (double).
    credits: The number of credits the course is worth (int).
   Constructor: Initializes the attributes with given values.

2. Student Class:
   Purpose: Manages a list of courses and provides methods to calculate the CGPA.
   
   Attributes:
   courses: A vector that stores Course objects.
   
   Methods:
   addCourse: Adds a new course to the courses vector.
   calculateCGPA: Computes the CGPA by summing the grade points and dividing by the total credits.
   displayGrades: Prints the details of each course (name, grade, and credits).
   getTotalCredits: Returns the total number of credits taken.
   getTotalGradePoints: Returns the total grade points accumulated.

3. Main Function:
   Purpose: Gathers input from the user, adds courses to the student, and displays the calculated results.
   
   Workflow:
   Prompts the user to enter the number of courses.
   In a loop, prompts the user to enter the name, grade, and credits for each course, and adds the course to the Student object.
   Calls displayGrades to show the details of all courses.
   Computes and displays the total credits, total grade points, and CGPA by calling the respective methods of the Student class.
