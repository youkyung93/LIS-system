#include <stdio.h>

void deleteBook();

void deleteBook(){
	char searchbook[100] = {0,};
	char *searchbook;

	int booknumber;
	
	printf("���ϴ� ������ �̸��� �Է��ϼ���.");
	scanf("%c", searchbook);

	//���⿡ �˻��� �ܾ �����ϴ� å ����� DB���� �ҷ��ͼ� �տ� ��ȣ�� ���̴� �Լ� ����

	printf("���ϴ� ������ ��ȣ�� �Է��ϼ���.");
	scanf("%d", &booknumber);

	//DB���� �ش� å �����ϴ� ��� ����

	printf("������ �����Ǿ����ϴ�.");
}