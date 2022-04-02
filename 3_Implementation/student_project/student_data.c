#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "students.h"

int main(void)
{
    int opt;
	printf("\t================ GRADE SHEET ================");
    printf("\n");
    printf("\nSelect your option");
    printf("\n1. Generation of Grade sheet");
    printf("\n2. Display total Grade sheets");
    printf("\n3. Search Grade sheet");
    printf("\n4. Exit");
    printf("\n");
    printf("\n\t================ GRADE SHEET ================");
    printf("\n");
    printf("Enter an option and continue\t");
    scanf("%d", &opt);
    fgetc(stdin);

	while(opt != 4){
		switch (opt)
		{
		case 1:
			getStudentData();
			break;
		
		case 2:
			displayStudent();
			break;

		case 3:
			char rollNo[50];
			printf("\nEnter the Roll no.: ");
            fgets(rollNo, 50, stdin);
            rollNo[strlen(rollNo) - 1] = 0;
			searchStudent(rollNo);
		}
		printf("Enter an option and continue\t");
		scanf("%d", &opt);
		fgetc(stdin);

	}
	return 0;
}