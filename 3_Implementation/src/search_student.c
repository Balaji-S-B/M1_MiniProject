#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "search_student.h"
#include "utility.h"

int searchStudent(const char rollno[]){
    Student student;
    FILE *ft;
    ft = fopen("student.bin", "rb");
    if(ft == NULL){
        return -1;
    }
    int isFound = 0;
    while(fread(&student, sizeof(student), 1, ft) == 1){
        if(!strcmp(student.rollno, rollno)){
            gen_ms(student);
            gen_ms_mid(student);
            gen_ms_foot(student.sgpa);
            isFound = 1;
            break;
        }
    }
    fclose(ft);
    return isFound;
}