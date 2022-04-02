#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "subject.h"

typedef struct Student
{
    char name[50];
    char rollno[50];
    char date[50];
    int sem;
    int total_subjects;
    double sgpa;
    Subject subject[50];
}Student;

#endif