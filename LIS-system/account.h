#include <stdio.h>
#include "menu.h"

void creatAccount() {

	int std_id;
	char std_password[10];
	char std_name[50];
	char std_department[50];

	printf("ID: ");
	scanf("%d", &std_id);

	printf("PASSWORD: ");
	scanf("%s", &std_password);

	printf("NAME: ");
	scanf("%s", &std_name);

	printf("DEPARTMENT: ");
	scanf("%s", &std_department);
}