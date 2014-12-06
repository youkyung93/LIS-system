#include <stdio.h>

void updateBook();

void updateBook(){
	char searchbook[100]= {0,};
	char *searchbook;
	char choice = 'Y';

	int booknumber = 0;
	int bookinfonum = 0;

	printf("수정하고 싶은 책의 이름을 입력하세요 : ");
	scanf("%c", searchbook);

	//DB에서 책 목록을 꺼내오는 함수. 꺼내올 때 책 목록 앞에 번호가 붙여진다. 이때 책의 이름과 저자의 이름만 보여진다.

	printf("원하는 도서의 번호를 입력하세요 : ");
	scanf("%d", &booknumber);
	
	//여기에서 해당 책의 정보가 나열된다. 이때 각 정보들 앞에 번호가 붙어있다.
	printf("어떤 정보를 수정하시겠습니까? ");
	scanf("%d", &bookinfonum);
	
	if(choice =='Y'){
		puts("다른 정보도 수정하시겠습니까? (Y/N)");
		fflush(stdin);
		choice =  getchar();

		//if()  위에 나타난 번호를 벗어나지 않는다면
			printf("책의 정보가 성공적으로 수정 되었습니다.");
		//else 위에 나타난 번호를 벗어나는 숫자를 입력한다면
			printf("원하는 책의 번호를 다시 입력해주세요 : ");
			scanf("%d", &booknumber);
	}
	else

		showmenu(); //���menu������ �𸣰����� librarian�� ����� ��� �� �ִ� menu�� �̵��ϵ��� �Ѵ�. 
}
