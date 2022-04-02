#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"


void gen_ms(Student student)
{
    printf("\n\n");
    printf("\t  ABC College of Technology");
    printf("\n\t ------------------");
    printf("\n Name:%s \t  Roll no.:%s", student.name, student.rollno);
    printf("\n Date:%s \t  Semester:%d", student.date, student.sem);
    printf("\n----------------------------------------------");
    printf("SUBJECT CODE \t\t");
    printf("SUBJECT NAME \t\t");
    printf("GRADE \t\t");
    printf("GRADE POINT \t\t");
    printf("TOTAL CREDITS \t\t");
    printf("----------------------------------------------");
    printf("\n\n");
}
void gen_ms_mid(Student student)
{
    printf("\n                                            ");
    for(int i=0; i<student.total_subjects; i++){
        struct Subject sub = student.subject[i];
        printf("%s\t\t", sub.code);
        printf("%s\t\t", sub.name);
        printf("%s\t\t", sub.grade);
        printf("%d\t\t", sub.grade_point);
        printf("%d\t\t", sub.credit);
        printf("\n");
    }
}

void gen_ms_foot(double sgpa)
{
    printf("\n");
    printf("----------------------------------------------\n");
    printf("SGPA:%.2f\n", sgpa);
    printf("----------------------------------------------\n");
}
