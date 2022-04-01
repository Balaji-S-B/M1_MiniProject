#include<operations.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void searchStudent(struct Student students[], int std_count, char rollno[]){
    int isFound = 0;
    for(int idx=0; idx<std_count; idx++){
        if(!strcmp(students[idx].rollno, rollno)){
            isFound = 1;
            gen_ms(students[idx]);
            gen_ms_mid(students[idx]);
            gen_ms_foot(students[idx].sgpa);
            break;
        }
    }
    if(!isFound){
        printf("No Record Found\n");
    }
}
