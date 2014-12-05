#include <stdio.h>

#define EXIT 4

void showmenu();	//메뉴를 보여주는 함수

void showmenu() {
	char menu[50];	//실행할 메뉴의 이름
	int menunum;	//선택할 메뉴의 번호

	if(menu == "select_user") {
		printf("1.LIBRARIAN\n");
		printf("2.STUDENT\n");
		printf("사용자 선택: ");
		scanf("%d", menunum);

		if(menunum == 1)
			;	//LIBRARIAN
		else if(menunum == 2)
			;	//STUDENT
	}
	else if(menu == "login_lb") {
		printf("1.LOGIN\n");
		printf("2.EXIT\n");
		printf("CHOOSE THE MENU: ");
		scanf("%d", menunum);

		if(menunum == 1)
			;	//LOGIN
		else if(menunum == 2)
			EXIT;	//EXIT
	}

	else if(menu == "login_std") {
		printf("1.CREATE NEW ACCOUNT\n");
		printf("2.LOGIN\n");
		printf("3.EXIT\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", menunum);

		if(menunum == 1)
			;	//CREATE NEW ACCOUNT
		else if(menunum == 2)
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
		scanf("%d", menunum);

		if(menunum == 1)
			;	//ADD
		else if(menunum == 2)
			;	//UPDATE
		else if(menunum == 3)
			;	//DELETE
		else if(menunum == 4)
			EXIT;	//EXIT
	}

	else if(menu == "func_std") {
		printf("1.SEARCH\n");
		printf("2.DISPLAY RENTED BY ME\n");
		printf("3.EXIT\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", menunum);

		if(menunum == 1)
			;	//SEARCH
		else if(menunum == 2)
			;	//DISPLAY RENTED BY ME
		else if(menunum == 3)
			EXIT;	//EXIT
	}


}