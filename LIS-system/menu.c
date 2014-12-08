#include <stdio.h>
#include <string.h>
#include "menu.h"	//�ڱ����� �ش��ϴ� ������ϵ� �ִ� ���� ����
#include "account.h"
#include "add.h"
#include "delete.h"
#include "display.h"
#include "login.h"
#include "search.h"
#include "search.h"
#include "update.h"

#define EXIT return

int menunum = 0;	//������ �޴��� ��ȣ
char user[10]="";		//librarian���� student���� ����

void showMenu(char menu[50]){	//�޴��� �����ִ� �Լ�

	if(strcmp(menu,"select_user")==0) {
		printf("1.LIBRARIAN\n");
		printf("2.STUDENT\n");
		printf("����� ����: ");
		scanf("%d", &menunum);

		if(menunum == 1) {
			strcpy(user,"librarian");
			showMenu("login_lb");	//LIBRARIAN
		}
		else if(menunum == 2) {
			strcpy(user,"student");
			showMenu("login_std");	//STUDENT
		}
	}
	else if(strcmp(menu,"login_lb")==0) {
		printf("--------------------------------------------\n");
		printf("1.LOGIN\n");
		printf("2.EXIT\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			loginAccount();	//LOGIN
		else if(menunum == 2)
			EXIT;	//EXIT
	}

	else if(strcmp(menu,"login_std")==0) {
		printf("--------------------------------------------\n");
		printf("1.CREATE NEW ACCOUNT\n");
		printf("2.LOGIN\n");
		printf("3.EXIT\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			createAccount();	//CREATE NEW ACCOUNT
		else if(menunum == 2)
			loginAccount();	//LOGIN
		else if(menunum == 3)
			EXIT;	//EXIT
	}

	else if(strcmp(menu,"func_lb")==0) {
		printf("--------------------------------------------\n");
		printf("1.ADD\n");
		printf("2.UPDATE\n");
		printf("3.DELETE\n");
		printf("4.EXIT\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			addBook();	//ADD
		else if(menunum == 2)
			updateBook();	//UPDATE
		else if(menunum == 3)
			deleteBook();	//DELETE
		else if(menunum == 4)
			EXIT;	//EXIT
	}

	else if(strcmp(menu,"func_std")==0) {
		printf("--------------------------------------------\n");
		printf("1.SEARCH\n");
		printf("2.DISPLAY RENTED BY ME\n");
		printf("3.EXIT\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			searchBook();	//SEARCH
		else if(menunum == 2)
			displayBook();	//DISPLAY RENTED BY ME
		else if(menunum == 3)
			EXIT;	//EXIT
	}
}