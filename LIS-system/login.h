#include <stdio.h>
#include "menu.h"	//student's menu or librarian's menu불러줘야됨.

void loginAccount();

void loginAccount(){
	char id[5];
	char *id;

	int password;

	//int distinction;	//ID와 PASSWORD가 맞는가 판별

	printf("ID:");
	scanf("%c", &id);

	// DB에 저장돼 있는 ID와의 판별코드 작성. 맞으면 distinction+=1;

	printf("PASSWORD: ");
	scanf("%d", &password);
	
	//DB에 저장돼 있는 PASSWORD와의 판별코드 작성. 맞으면 distinction+=1;
	
	/*
	if(distinction==2){
		if(student)
			menu = "func_std";
			showmenu();	//흠...
		else
			menu = "func_lb";
			showmenu();	//흠...
	}
	else
	{
		printf("ID:");
		scanf("%c", &id);

		// DB에 저장돼 있는 ID와 맞는가 판별하는 코드작성.
		
		printf("PASSWORD: ");
		scanf("%d", &password);

		//DB에 저장돼 있는 PASSWORD와 맞는가 판별하는 코드작성.
		
	}
	*/
}