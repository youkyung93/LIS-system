#include <stdio.h>
#include "search.h"
#include "menu.h"

char keyword[100]="";
int booknumber;

void searchBook(){	

	printf("�˻��� ������ �̸��� �Է��ϼ��� : ");
	scanf("%s", &keyword);
	
	/*
	//DB �̿�
	
	//while('%'keyword'%' == DB.bookname){
	//	printf("%d . %c",i,DB.bookname)
	//}
	printf("���ϴ� ������ȣ�� �����ϼ��� : ");
	scanf("%d",&booknumber);

	//DB�̿�
	//printf(DB.title); �̷�����
	
	*/
	
	showMenu("func_std");
}