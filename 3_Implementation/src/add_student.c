#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "add_student.h"

int returnGradePoint(char grade[]){
    if (!strcmp(grade, "O"))
    {
        return 10;
    }
    else if (!strcmp(grade, "A"))
    {
        return 9;
    }
    else if (!strcmp(grade, "B"))
    {
        return 8;
    }
    else if (!strcmp(grade, "C"))
    {
        return 7;
    }
    else if (!strcmp(grade, "D"))
    {
        return 6;
    }
    else if (!strcmp(grade, "E"))
    {
        return 5;
    }
    else
    {
        return 0;
    }
}


int addStudent(Student *student){
    FILE *fp;
    fp = fopen("student.bin", "ab+");
    if(fp == NULL){
        return -1;
    }

    for(int i=0; i<student->total_subjects; i++){
        student->subject[i].grade_point = returnGradePoint(student->subject[i].grade);
    }
    fwrite(student, sizeof(struct Student), 1, fp);
    fclose(fp);
    return 0;
}

void getStudentData(){
    Student student;
    printf("\nEnter the Name: ");
    fgets(student.name, 50, stdin);
    student.name[strlen(student.name) - 1] = 0;

    printf("\nEnter the Roll no.: ");
    fgets(student.rollno, 50, stdin);
    student.rollno[strlen(student.rollno) - 1] = 0;


    strcpy(student.date, __DATE__);

    printf("\nEnter the Semester: ");
    scanf("%d", &student.sem);

    printf("\nEnter the Number of subjects: ");
    scanf("%d", &student.total_subjects);
    fgetc(stdin);

    double value=0, tot_credit=0;
    for(int i=0; i<student.total_subjects; i++){
        printf("\n\n");

        printf("Enter the Subject code: ");
        fgets(student.subject[i].code, 20, stdin);
        student.subject[i].code[strlen(student.subject[i].code) - 1] = 0;

        printf("Enter the Subject Name: ");
        fgets(student.subject[i].name, 20, stdin);
        student.subject[i].name[strlen(student.subject[i].name) - 1] = 0;

        printf("Please enter the Grade(in Caps): ");
        fgets(student.subject[i].grade, 10, stdin);
        student.subject[i].grade[strlen(student.subject[i].grade) - 1] = 0;
        
        printf("Please enter the Credit points: ");
        scanf("%d", &student.subject[i].credit);
        fgetc(stdin);                

        student.subject[i].grade_point = returnGradePoint(student.subject[i].grade);

        value += student.subject[i].credit * student.subject[i].grade_point;
        tot_credit += student.subject[i].credit;
    }
    student.sgpa = (double)value / tot_credit;
    addStudent(&student);
}