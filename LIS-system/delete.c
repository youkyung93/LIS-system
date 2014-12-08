#include <stdio.h>
#include "delete.h"
#include "menu.h"

char searchbook[100]="";
int booknumber;

void deleteBook(){

	printf("삭제하고 싶은 책의 이름을 입력하세요 :");
	scanf("%s", &searchbook);
	/*
	//여기에 검색한 단어를 포함하는 책 목록을 DB에서 불러와서 for문으로 책 목록 앞에 번호 붙이기

	printf("원하는 도서의 번호를 입력하세요.");
	scanf("%d", &booknumber);

	//DB에서 해당 책 삭제하는 기능 구현, 만약 booknumber를 벗어나는 값을 입력하면 종료.
	*/
	printf("도서가 삭제되었습니다.");
}