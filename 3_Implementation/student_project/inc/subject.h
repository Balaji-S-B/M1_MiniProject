#ifndef __SUBJECT_H__
#define __SUBJECT_H__

typedef struct Subject
{
    char code[50];
    char name[50];
    char grade[10];
    int grade_point;
    int credit;
}Subject;

#endif