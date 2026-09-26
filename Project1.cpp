// ============================================================
// Student Grade Calculator with Decision Logic
// Chapters Covered: 2 (Variables/Data Types), 3 (I/O & Formatting),
//                    4 (Decision Structures)
// SLO Alignment: SLO3, SLO5, SLO6
// ============================================================


#include <iostream>
#include <iomanip>   // for setprecision (formatting output)
#include <string>


using namespace std;


int main() {
    // ---------------------------------------------------
    // VARIABLE DECLARATIONS (at least 4 required — we use more)
    // ---------------------------------------------------
    string studentName;
    double assignment1, assignment2, assignment3;
    double examScore;
    double assignmentAverage;
    double finalGrade;
    char letterGrade;


    // Weights for weighted grading (Bonus: Weighted Grading)
    // Assignments make up 40% of the final grade, exam makes up 60%
    const double ASSIGNMENT_WEIGHT = 0.40;
    const double EXAM_WEIGHT = 0.60;


    // ---------------------------------------------------
    // INPUT SECTION
    // ---------------------------------------------------
    cout << "===== Student Grade Calculator =====" << endl;


    cout << "Enter student name: ";
    getline(cin, studentName);


    // ----- Input validation loop for Assignment 1 -----
    cout << "Enter score for Assignment 1: ";
    cin >> assignment1;
    while (assignment1 < 0 || assignment1 > 100) {
        cout << "Invalid score. Please enter a value between 0 and 100: ";
        cin >> assignment1;
    }


    // ----- Input validation loop for Assignment 2 -----
    cout << "Enter score for Assignment 2: ";
    cin >> assignment2;
    while (assignment2 < 0 || assignment2 > 100) {
        cout << "Invalid score. Please enter a value between 0 and 100: ";
        cin >> assignment2;
    }


    // ----- Input validation loop for Assignment 3 -----
    cout << "Enter score for Assignment 3: ";
    cin >> assignment3;
    while (assignment3 < 0 || assignment3 > 100) {
        cout << "Invalid score. Please enter a value between 0 and 100: ";
        cin >> assignment3;
    }


    // ----- Input validation loop for Exam Score -----
    cout << "Enter exam score: ";
    cin >> examScore;
    while (examScore < 0 || examScore > 100) {
        cout << "Invalid score. Please enter a value between 0 and 100: ";
        cin >> examScore;
    }


    // ---------------------------------------------------
    // CALCULATIONS
    // ---------------------------------------------------


    // Average of the three assignment scores
    assignmentAverage = (assignment1 + assignment2 + assignment3) / 3.0;


    // Final grade using weighted formula:
    // (assignment average * 40%) + (exam score * 60%)
    finalGrade = (assignmentAverage * ASSIGNMENT_WEIGHT) + (examScore * EXAM_WEIGHT);


    // ---------------------------------------------------
    // DECISION STRUCTURE — Determine letter grade
    // ---------------------------------------------------
    if (finalGrade >= 90) {
        letterGrade = 'A';
    }
    else if (finalGrade >= 80) {
        letterGrade = 'B';
    }
    else if (finalGrade >= 70) {
        letterGrade = 'C';
    }
    else if (finalGrade >= 60) {
        letterGrade = 'D';
    }
    else {
        letterGrade = 'F';
    }


    // ---------------------------------------------------
    // OUTPUT SECTION (formatted to 2 decimal places)
    // ---------------------------------------------------
    cout << fixed << setprecision(2);


    cout << "\n===== Grade Report =====" << endl;
    cout << "Student Name:        " << studentName << endl;
    cout << "Assignment Average:  " << assignmentAverage << endl;
    cout << "Final Numeric Grade: " << finalGrade << endl;
    cout << "Letter Grade:        " << letterGrade << endl;


    return 0;
}