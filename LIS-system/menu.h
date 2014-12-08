#include <stdio.h>

#define EXIT return

//char menu[50];	//실행할 메뉴의 이름
int menunum = 0;	//선택할 메뉴의 번호

void showmenu(char menu[50]){	//메뉴를 보여주는 함수

	if(menu == "select_user") {
		printf("1.LIBRARIAN\n");
		printf("2.STUDENT\n");
		printf("사용자 선택: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			showmenu("login_lb");	//LIBRARIAN
		else if(menunum == 2)
			showmenu("login_std");	//STUDENT
	}
	else if(menu == "login_lb") {
		printf("1.LOGIN\n");
		printf("2.EXIT\n");
		printf("CHOOSE THE MENU: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			//loginAccount()
			;	//LOGIN
		else if(menunum == 2)
			EXIT;	//EXIT
	}

	else if(menu == "login_std") {
		printf("1.CREATE NEW ACCOUNT\n");
		printf("2.LOGIN\n");
		printf("3.EXIT\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			//creatAccount()
			;	//CREATE NEW ACCOUNT
		else if(menunum == 2)
			//loginAccount()
			;	//LOGIN
		else if(menunum == 3)
			EXIT;	//EXIT
	}

	else if(menu == "func_lb") {
		printf("1.ADD\n");
		printf("2.UPDATE\n");
		printf("3.DELETE\n");
		printf("4.EXIT\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			//addBook()
			;	//ADD
		else if(menunum == 2)
			//updateBook()
			;	//UPDATE
		else if(menunum == 3)
			//deleteBook()
			;	//DELETE
		else if(menunum == 4)
			EXIT;	//EXIT
	}

	else if(menu == "func_std") {
		printf("1.SEARCH\n");
		printf("2.DISPLAY RENTED BY ME\n");
		printf("3.EXIT\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &menunum);

		if(menunum == 1)
			//searchBook()
			;	//SEARCH
		else if(menunum == 2)
			//displayBook()
			;	//DISPLAY RENTED BY ME
		else if(menunum == 3)
			EXIT;	//EXIT
	}
}