#include<stdio.h>

char title[30];
char authors[30];
char publisher[20];
int isbn;	
char availabiliy[2];	//'Y' or 'N'
char rentingstudent[5];	// but, ó���̴ϱ� null

void addBook(){

	//DB�� �ִ� �ҽ���� �ٲٱ�.

	printf("Title: ");	//�ٵ� srs���� ':' �̰� ����. ���?
	scanf("%c", &title);
	printf("Authors: ");
	scanf("%c", &authors);
	printf("Publisher: ");
	scanf("%c", &publisher);
	printf("ISBN: ");
	scanf("%c", &isbn);
	printf("Availabiliy");
	scanf("%c", &availabiliy);
	printf("Rentingstudent: ");
	scanf("%c", &rentingstudent);


	//showmenu();	//librarian's menu�����ֱ�.


}