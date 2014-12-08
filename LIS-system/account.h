#include <stdio.h>
#include "menu.h"

int std_id;
char std_password[10];
char std_name[50];
char std_department[50];

void creatAccount() {

	printf("ID: ");
	scanf("%d", &std_id);

	printf("PASSWORD: ");
	scanf("%s", &std_password);

	printf("NAME: ");
	scanf("%s", &std_name);

	printf("DEPARTMENT: ");
	scanf("%s", &std_department);

	showmenu("select_user");

}