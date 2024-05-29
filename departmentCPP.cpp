#include <iostream>
#include <string>
using namespace std;

int main() {
    int departmentID;
    int age;
    char grade;
    char gender;
    string sentence;

    // Get input from the user
    cout << "Enter your department ID: ";
    cin >> departmentID;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;
    cout << "Enter your gender (M for male, F for female): ";
    cin >> gender;

    // Build the sentence
    sentence = "Your department ID is " + to_string(departmentID) + ", your age is " + to_string(age) + ", your grade is " + grade + ", and your gender is ";
    if (gender == 'M') {
        sentence += "male.";
    } else if (gender == 'F') {
        sentence += "female.";
    } else {
        sentence += "unknown.";
    }

    // Print the sentence
    cout << sentence << endl;

    return 0;
}