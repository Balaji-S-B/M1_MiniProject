#include<operations.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readData(FILE *fp, struct Student students[]){
    int idx=0;
    char line[200];

    while(fgets(line, 200, fp)){
        line[strlen(line) - 1] = 0;
        strcpy(students[idx].name, line);

        fgets(line, 200, fp);
        line[strlen(line) - 1] = 0;
        strcpy(students[idx].rollno, line);

        fgets(line, 200, fp);
        line[strlen(line) - 1] = 0;
        strcpy(students[idx].date, line);

        fscanf(fp, "%d", &students[idx].sem);
        fscanf(fp, "%d", &students[idx].total_subjects);

        for (int i = 0; i < students[idx].total_subjects; i++)
        {
            fscanf(fp, "%s", students[idx].subject[i].code);
            fscanf(fp, "%s", students[idx].subject[i].name);
            fscanf(fp, "%s", students[idx].subject[i].grade);
            fscanf(fp, "%d", &students[idx].subject[i].grade_point);
            fscanf(fp, "%d", &students[idx].subject[i].credit);

        }
        fgets(line, 200, fp);

        fgets(line, 200, fp);

        students[idx].sgpa = (double)atof(line);

        fgets(line, 200, fp);
        idx++;
    }
    return idx;
}
