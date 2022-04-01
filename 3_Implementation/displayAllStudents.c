#include<operations.h>

void displayAllStudents(struct Student students[], int std_count){
    for(int idx=0; idx<std_count; idx++){
        gen_ms(students[idx]);
        gen_ms_mid(students[idx]);
        gen_ms_foot(students[idx].sgpa);
    }
}
