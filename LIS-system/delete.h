#include <stdio.h>

char searchbook[100] = {0,};
int booknumber;

void deleteBook(){

	printf("���ϴ� ������ �̸��� �Է��ϼ���.");
	scanf("%c", searchbook);

	//���⿡ �˻��� �ܾ �����ϴ� å ����� DB���� �ҷ��ͼ� for������ å ��� �տ� ��ȣ ���̱�

	printf("���ϴ� ������ ��ȣ�� �Է��ϼ���.");
	scanf("%d", &booknumber);

	//DB���� �ش� å �����ϴ� ��� ����, ���� booknumber�� ����� ���� �Է��ϸ� ����.

	printf("������ �����Ǿ����ϴ�.");

	showmenu("dd");
}