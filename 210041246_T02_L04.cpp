#include "bits/stdc++.h"
using namespace std;

class Student{
private:
  string firstName;
  string lastName;
  string studentID;
  int birthYear;
  string course;
  int obtainedMark;
  
public:
  static int totalStudents;
  Student (string first = "", string last = "", string id = "", int year = 0) {
    firstName = first;
    lastName = last;
    studentID = id;
    birthYear = year;
    totalStudents++;
  }
  void enrollInCourse (string courseName) {
    course = courseName;
  }
  string generateEmail () {
    string email;
    email = firstName + lastName + '@' + "iut-dhaka.edu";
    transform(email.begin(), email.end(), email.begin(), ::tolower);
    return email;
  } 
  int obtainedobtainedMark(string courseName, int marks) {
    obtainedMark = marks;
    return obtainedMark;
  }
  double setGPAForEachCourse() {
    if (obtainedMark >= 80) return 4.00;
    if (obtainedMark > 74 and obtainedMark < 80) return 3.75;
    if (obtainedMark > 69 and obtainedMark < 75) return 3.50;
    if (obtainedMark > 64 and obtainedMark < 70) return 3.25;
    if (obtainedMark > 59 and obtainedMark < 65) return 3.00;
    if (obtainedMark > 54 and obtainedMark < 60) return 2.75;
    if (obtainedMark > 49 and obtainedMark < 55) return 2.50;
    if (obtainedMark > 44 and obtainedMark < 50) return 2.25;
    if (obtainedMark > 39 and obtainedMark < 45) return 2.00;
    return 0.00;
  }
  void willGraduate () {
    if (setGPAForEachCourse() < 2) cout << "Wont graduate\n";
    else cout << "Will graduate\n";
  }
  bool applyForScholarship() {
    if (setGPAForEachCourse() > 3.8) return true;
    return false;
  }
  void participateInInternship(string company) {
    if (setGPAForEachCourse() > 3) cout << "Will get Internship at: " << company << '\n';
    else cout << "Wont get Internship at: " << company << '\n';
  }
  void printAcademicRecord() {
    cout << "Full Name: " << firstName << ' ' << lastName << '\n';
    cout << "Student ID: " << studentID << '\n';
    cout << "Enrolled Courses: " << course << '\n';
    cout << "Graduation Status: ";
    willGraduate();
    cout << "Scholarship Status: ";
    applyForScholarship() ? cout << "Yes\n" : cout << "No\n"; 
    cout << "Internship Status: ";
    participateInInternship("Samsung");
  }
  ~Student() {
    totalStudents--;
  }
};
int Student :: totalStudents = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << Student :: totalStudents << endl;
  Student s1("Shufan", "Shahi", "210", 2002);
  s1.enrollInCourse ("CSE 4301");
  s1.obtainedobtainedMark("CSE 4301", 89);
  s1.printAcademicRecord();
  cout << s1.generateEmail();
  cout << endl;
  cout << Student :: totalStudents << endl;
  Student s2("Tanjil", "Hasan", "246", 2003);
  s2.enrollInCourse ("CSE 4301");
  s2.obtainedobtainedMark("CSE 4301", 90);
  s2.printAcademicRecord();
  cout << s2.generateEmail();
  cout << endl;
  cout << Student :: totalStudents << endl;
  Student s3("Afra", "Anika", "206", 2002);
  s3.enrollInCourse ("CSE 4301");
  s3.obtainedobtainedMark("CSE 4301", 91);
  s3.printAcademicRecord();
  cout << s3.generateEmail();
  cout << endl;
}