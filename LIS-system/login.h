#include <stdio.h>

char id[5];
int password;
//int distinction;	//ID�� PASSWORD�� �´°� �Ǻ�

void loginAccount(){

	printf("ID:");
	scanf("%c", &id);

	// DB�� ����� �ִ� ID���� �Ǻ��ڵ� �ۼ�. ������ distinction+=1;

	printf("PASSWORD: ");
	scanf("%d", &password);

	//DB�� ����� �ִ� PASSWORD���� �Ǻ��ڵ� �ۼ�. ������ distinction+=1;

	/*
	if(distinction==2){
	if(student)
	menu = "func_std";
	showmenu();	//��...
	else
	menu = "func_lb";
	showmenu();	//��...
	}
	else
	{
	printf("ID:");
	scanf("%c", &id);

	// DB�� ����� �ִ� ID�� �´°� �Ǻ��ϴ� �ڵ��ۼ�.

	printf("PASSWORD: ");
	scanf("%d", &password);

	//DB�� ����� �ִ� PASSWORD�� �´°� �Ǻ��ϴ� �ڵ��ۼ�.

	}
	*/
}