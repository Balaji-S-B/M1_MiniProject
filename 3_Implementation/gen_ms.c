#include<operations.h>

void gen_ms(struct Student student)
{
    printf("\n\n");
    printf("\n -----------------------------------------------------------------------------");
    printf("\n");
    printf("\t  ABC College of Technology");
    printf("\n -----------------------------------------------------------------------------");
    printf("\n Name:%s                       \t  Roll no.:%s", student.name, student.rollno);
    printf("\n Date:%s                 \t  Semester:%d", student.date, student.sem);
    printf("\n------------------------------------------------------------------------------");
    printf("\n");
    printf("SUBJECT CODE \t");
    printf("SUBJECT NAME \t");
    printf("GRADE \t");
    printf("GRADE POINT \t");
    printf("TOTAL CREDITS \t");
    printf("\n------------------------------------------------------------------------------");
    printf("\n\n");
}
