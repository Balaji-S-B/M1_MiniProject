#include<operations.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
