#include<operations.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void gen_ms_mid(struct Student student)
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
