#ifndef PRACTICE_4_STUDENT_H
#define PRACTICE_4_STUDENT_H

#include <map>
#include <vector>

enum Subject {
    Math, Physics, History, Programming
};

struct Student {
public:
    std::string name;
    int group;
    std::map<Subject, int> exams;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);

    friend std::ostream& operator<<(std::ostream& os, const std::vector<Student>& students);

    bool operator > (const Student& other) const;
};

#endif