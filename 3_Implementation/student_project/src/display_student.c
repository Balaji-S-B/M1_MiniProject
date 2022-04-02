#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "display_student.h"
#include "utility.h"

int displayStudent(){
    Student student;
    FILE *ft;
    ft = fopen("student.bin", "rb");
    if(ft == NULL){
        return -1;
    }
    int count=0;
    printf("-------------student data------------------\n");
    while(fread(&student, sizeof(student), 1, ft) == 1){
        gen_ms(student);
        gen_ms_mid(student);
        gen_ms_foot(student.sgpa);
        count++;
    }
    fclose(ft);
    return count;
}