#include <stdio.h>
#include <string.h>
#include "login.h"
#include "menu.h"
#include "account.h"

int id;
char password[15]="";
int distinction=2;	//ID와 PASSWORD가 맞는가 판별
char userlogined[10]="";

void loginAccount(){

	//distinction = 0; //login 할 때마다 distiction 0으로 초기화 해주어야 함
	printf("--------------------------------------------\n");
	if(strcmp(user,"librarian")==0)
		printf("lib->id(12345)password(master)\n");

	printf("ID:");
	scanf("%d", &id);

	// DB에 저장돼 있는 ID와의 판별코드 작성. 맞으면 distinction+=1;

	printf("PASSWORD: ");
	scanf("%s", &password);

	if(strcmp(user, "librarian")==0) {
		if((id==12345) && (strcmp(password,"master")==0)) {
			strcpy(userlogined, "librarian");
			printf("librarian으로 로그인 성공\n");
		}
	}
	else if(strcmp(user, "student")==0) {
		while((id!=std_id) || (strcmp(password, std_password)==1)){
			printf("ID 혹은 비밀번호가 틀렸습니다.\n");

			printf("ID:");
			scanf("%d", &id);

			printf("PASSWORD: ");
			scanf("%s", &password);
		}

		if((id==std_id) && (strcmp(password, std_password)==0)) {
			strcpy(userlogined, "student");
			printf("student로 로그인 성공\n");
		}
	}
	//DB에 저장돼 있는 PASSWORD와의 판별코드 작성. 맞으면 distinction+=1;


	if(distinction==2) {	
		if(strcmp(userlogined,"librarian")==0)			//학생
			showMenu("func_lb");	
		else if(strcmp(user, "student")==0)			//사서
			showMenu("func_std");	
	}

	else {
		printf("ID:");
		scanf("%d", &id);

		// DB에 저장돼 있는 ID와 맞는가 판별하는 코드작성.

		printf("PASSWORD: ");
		scanf("%d", &password);

		//DB에 저장돼 있는 PASSWORD와 맞는가 판별하는 코드작성.
	}

}