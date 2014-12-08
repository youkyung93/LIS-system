#include <stdio.h>
#include "add.h"
#include "menu.h"

char title[50]="";
char authors[50]="";
char publisher[50]="";
int isbn;	
char availability;	//"available" or "unavailable"
char rentingstudent[30]="";	// but, 처음이니까 null

void addBook(){

	//DB에 넣는 소스들로 바꾸기.
	printf("-------------------------------------------\n");
	printf("Title: ");	//근데 srs에는 ':' 이게 없어. 사용?
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


	showMenu("func_lb");	//librarian's menu보여주기.


}