#include <stdio.h>
#include "add.h"
#include "menu.h"

char title[50]="";
char authors[50]="";
char publisher[50]="";
int isbn;	
char availability;	//"available" or "unavailable"
char rentingstudent[30]="";	// but, ó���̴ϱ� null

void addBook(){

	//DB�� �ִ� �ҽ���� �ٲٱ�.
	printf("-------------------------------------------\n");
	printf("Title: ");	//�ٵ� srs���� ':' �̰� ����. ���?
	scanf("%s", &title);
	printf("Authors: ");
	scanf("%s", &authors);
	printf("Publisher: ");
	scanf("%s", &publisher);
	printf("ISBN: ");
	scanf("%d", &isbn);
	printf("Availability(Y/N): ");
	fflush(stdin);
	scanf("%c", &availability);
	printf("Rentingstudent: ");
	scanf("%s", &rentingstudent);


	showMenu("func_lb");	//librarian's menu�����ֱ�.


}