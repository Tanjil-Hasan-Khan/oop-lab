#include "bits/stdc++.h"
using namespace std;

class Student {
private: 
    string firstName;
    string lastName;
    string ID;
    int birth_year;
    string course;
    double marks;
public:
    void setDetails (string f, string l, string id, int year, string c, int score) {
        firstName = f;
        lastName = l;
        ID = id;
        birth_year = year;
        course = c;
        marks = score;
    } 
    int displayAge () {
        int age;
        age = 2023 - birth_year;
        return age;
    }
    float displayGPA () {
        if (marks >= 80) return 4.00;
        if (marks > 74 and marks < 80) return 3.75;
        if (marks > 69 and marks < 75) return 3.50;
        if (marks > 64 and marks < 70) return 3.25;
        if (marks > 59 and marks < 65) return 3.00;
        if (marks > 54 and marks < 60) return 2.75;
        if (marks > 49 and marks < 55) return 2.50;
        if (marks > 44 and marks < 50) return 2.25;
        if (marks > 39 and marks < 45) return 2.00;
        return 0.00;
    }
    void willGraduate () {
        if (marks > 39) cout << "will graduate successfully\n";
        else cout << "wont graduate\n"; 
    } 
    float updatedGPA () {
        marks = marks + (0.1 * marks);
        if (marks >= 80) return 4.00;
        if (marks > 74 and marks < 80) return 3.75;
        if (marks > 69 and marks < 75) return 3.50;
        if (marks > 64 and marks < 70) return 3.25;
        if (marks > 59 and marks < 65) return 3.00;
        if (marks > 54 and marks < 60) return 2.75;
        if (marks > 49 and marks < 55) return 2.50;
        if (marks > 44 and marks < 50) return 2.25;
        if (marks > 39 and marks < 45) return 2.00;
        return 0.00;
    }
    void printTranscript () {
        cout << "Full name of Student: " << firstName << ' ' << lastName << '\n';
        cout << "Student ID: " << ID << '\n';
        cout << "Age: " << displayAge() << '\n';
        cout << "GPA: " << updatedGPA() << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    Student s1;
    s1.setDetails("Tanjil", "Hasan", "210041246", 2002, "OOP", 75);
    cout << "Age : " << s1.displayAge() << '\n';
    cout << "GPA: " << s1.displayGPA() << '\n';
    s1.willGraduate();
    s1.updatedGPA();
    s1.printTranscript();
}