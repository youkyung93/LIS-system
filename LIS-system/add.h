#include<stdio.h>

char title[30];
char authors[30];
char publisher[20];
int isbn;	
char availabiliy[2];	//'Y' or 'N'
char rentingstudent[5];	// but, 처음이니까 null

void addBook(){

	//DB에 넣는 소스들로 바꾸기.

	printf("Title: ");	//근데 srs에는 ':' 이게 없어. 사용?
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


	//showmenu();	//librarian's menu보여주기.


}