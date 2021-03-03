#include <iostream>
#include "struct/student.h"
#include <map>
#include <algorithm>
#include <string>

using namespace std;
Student createStudent(string name, int group, int mathMark, int physMark, int histMark, int progrMark);
vector<Student> createStudents();

int main() {
    //create 10 students
    vector<Student> students = createStudents();
    //print students
    cout << students << endl;

    vector<Student> dvoechniki;
    for (auto& student : students) {
        auto exams = student.exams;
        for (auto& exam : exams) {
            if (exam.second == 2) { //found 2
                dvoechniki.push_back(student);
                break;
            }
        }
    }

    std::sort(dvoechniki.begin(), dvoechniki.end(), std::greater<>()); //sortirovka po vozrastaniyu "greater"
    cout << "Dvoechniki" << endl;
    cout << dvoechniki << endl;

    if (dvoechniki.empty()) {
        cout << "Not found";
    }
    else {
        unsigned int randomDvoechnik = rand() % dvoechniki.size();
        auto expelledStudent = dvoechniki.at(randomDvoechnik);
        cout << "Expulsion" << endl;
        cout << expelledStudent;
    }

    return 0;
}

Student createStudent(string name, int group, int mathMark, int physMark, int histMark, int progrMark) {
    Student result;
    result.name = std::move(name);
    result.group = group;
    result.exams.insert(pair<Subject, int>(Math, mathMark));
    result.exams.insert(pair<Subject, int>(Physics, physMark));
    result.exams.insert(pair<Subject, int>(History, histMark));
    result.exams.insert(pair<Subject, int>(Programming, progrMark));
    return result;
}

vector<Student> createStudents() {
    //create 10 students
    vector<Student> students;
    Student fakeStudent = createStudent("Smith W", 3, 5, 4, 3, 5);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Meier S", 3, 2, 4, 3, 5);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Newell G", 3, 3, 5, 2, 5);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Korbov A", 5, 5, 4, 3, 5);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Carlsen S", 3, 3, 2, 2, 5);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Smith S", 3, 3, 4, 3, 3);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Meier M", 3, 5, 5, 5, 5);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Molyneux P", 4, 3, 5, 3, 5);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Wilson S", 4, 4, 4, 4, 4);
    students.push_back(fakeStudent);
    fakeStudent = createStudent("Addinkton F", 5, 5, 5, 5, 5);
    students.push_back(fakeStudent);
    return students;
}

static char const* DELIMITER = "+---------------------+-------+------+------+------+------+";
static char const* HEADER = "| Name                | Group | Math | Phys | Hist | Prog |";

//system out student single line
void printStudentLine(ostream& os, const Student& student) {
    auto exams = student.exams;
    auto name = student.name;
    name.resize(20, ' '); //makes name length 20
    os << "| " << name << "| " << student.group << "     | "
        << exams.find(Math)->second << "    | "
        << exams.find(Physics)->second << "    | "
        << exams.find(History)->second << "    | "
        << exams.find(Programming)->second << "    |";
}

//system out one student
std::ostream& operator<<(ostream& os, const Student& student) {
    os << DELIMITER << endl;
    os << HEADER << endl;
    os << DELIMITER << endl;
    printStudentLine(os, student);
    os << endl << DELIMITER << endl;
    return os;
}

//system out vector of students
std::ostream& operator<<(ostream& os, const vector<Student>& students) {
    os << DELIMITER << endl;
    os << HEADER << endl;
    os << DELIMITER << endl;
    for (const auto& student : students) {
        printStudentLine(os, student);
        os << endl << DELIMITER << endl;
    }
    return os;
}


bool Student::operator > (const Student& other) const {
    return this->name > other.name;
}