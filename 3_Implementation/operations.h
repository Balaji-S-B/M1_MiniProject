#ifndef __OPERATIONS_H__
#define __OPERATIONS_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct  Subject
{
    char code[50];
    char name[50];
    char grade[10];
    int grade_point;
    int credit;
};

struct Student
{
    char name[50];
    char rollno[50];
    char date[50];
    int sem;
    int total_subjects;
    double sgpa;
    struct Subject subject[50];
};

int returnGradePoint(char grade[]);
void gen_ms(struct Student student);
void gen_ms_mid(struct Student student);

void gen_ms_foot(double sgpa);
void saveData(FILE *fp, struct Student student);

int readData(FILE *fp, struct Student students[]);

void displayAllStudents(struct Student students[], int std_count);

void searchStudent(struct Student students[], int std_count, char rollno[]);
#endif
