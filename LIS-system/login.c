#include <stdio.h>
#include <string.h>
#include "login.h"
#include "menu.h"
#include "account.h"

int id;
//char password[15]="";
int distinction=2;	//ID�� PASSWORD�� �´°� �Ǻ�
char userlogined[10]="";

void loginAccount(){

	//distinction = 0; //login �� ������ distiction 0���� �ʱ�ȭ ���־�� ��
	printf("--------------------------------------------\n");
	if(strcmp(user,"librarian")==0)
		printf("lib->id(12345)password(master)\n");

	printf("ID:");
	scanf("%d", &id);

	// DB�� ����� �ִ� ID���� �Ǻ��ڵ� �ۼ�. ������ distinction+=1;

	printf("PASSWORD: ");
	scanf("%s", &password);


	if((id==12345) && (strcmp(password,"master"))==0)
		strcpy(userlogined,"librarian");

	//DB�� ����� �ִ� PASSWORD���� �Ǻ��ڵ� �ۼ�. ������ distinction+=1;


	if(distinction==2) {	
		if(strcmp(userlogined,"librarian")==0)			//�л�
			showMenu("func_lb");	
		else if(strcmp(user, "student")==0)			//�缭
			showMenu("func_std");	
	}

	else {
		printf("ID:");
		scanf("%d", &id);

		// DB�� ����� �ִ� ID�� �´°� �Ǻ��ϴ� �ڵ��ۼ�.

		printf("PASSWORD: ");
		scanf("%d", &password);

		//DB�� ����� �ִ� PASSWORD�� �´°� �Ǻ��ϴ� �ڵ��ۼ�.
	}

}