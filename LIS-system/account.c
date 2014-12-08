#include <stdio.h>
#include "account.h"
#include "menu.h"

int std_id;
char std_password[15]="";	//10자리이내
char std_name[50]="";
char std_department[50]="";

void createAccount() {

	printf("ID: ");
	scanf("%d", &std_id);

	printf("PASSWORD: ");
	scanf("%s", &std_password);

	printf("NAME: ");
	scanf("%s", &std_name);

	printf("DEPARTMENT: ");
	scanf("%s", &std_department);

	showMenu("login_std");

}