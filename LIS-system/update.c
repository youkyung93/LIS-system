#include <stdio.h>
#include "update.h"
#include "menu.h"

char bookname[100]="";
char choice = 'Y';
int booknumber = 0;
int bookinfonum = 0;

void updateBook(){

	printf("�����ϰ� ���� å�� �̸��� �Է��ϼ���: ");
	scanf("%s", &bookname);

	//DB���� å ����� �������� �Լ�. ������ �� å ��� �տ� ��ȣ�� �ٿ�����. �̶� å�� �̸��� ������ �̸��� ��������.
	/*
	printf("���ϴ� ������ ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &booknumber);
	
	//���⿡�� �ش� å�� ������ �����ȴ�. �̶� �� ������ �տ� ��ȣ�� �پ��ִ�.
	printf("� ������ �����Ͻðڽ��ϱ�? ");
	scanf("%d", &bookinfonum);

	if(choice =='Y'){
		puts("�ٸ� ������ �����Ͻðڽ��ϱ�? (Y/N)");
		fflush(stdin);
		choice =  getchar();

		//if()  ���� ��Ÿ�� ��ȣ�� ����� �ʴ´ٸ�
		printf("å�� ������ ���������� ���� �Ǿ����ϴ�.");
		//else ���� ��Ÿ�� ��ȣ�� ����� ���ڸ� �Է��Ѵٸ�
		printf("���ϴ� å�� ��ȣ�� �ٽ� �Է����ּ��� : ");
		scanf("%d", &booknumber);
	}
	else
		;
		*/
}