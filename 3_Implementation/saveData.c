#include<operations.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void saveData(FILE *fp, struct Student student){
    fprintf(fp, "%s\n", student.name);
    fprintf(fp, "%s\n", student.rollno);
    fprintf(fp, "%s\n", student.date);
    fprintf(fp, "%d\n", student.sem);
    fprintf(fp, "%d\n", student.total_subjects);
    for(int i=0; i<student.total_subjects; i++){
        fprintf(fp, "%s %s %s %d %d\n", student.subject[i].code, student.subject[i].name, student.subject[i].grade, student.subject[i].grade_point, student.subject[i].credit);
    }
    fprintf(fp, "%.2f\n\n", student.sgpa);
}
