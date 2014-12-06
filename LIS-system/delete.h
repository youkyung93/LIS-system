#include <stdio.h>

void deleteBook();

void deleteBook(){
	char searchbook[100] = {0,};
	char *searchbook;

	int booknumber;
	
	printf("원하는 도서의 이름을 입력하세요.");
	scanf("%c", searchbook);

	//여기에 검색한 단어를 포함하는 책 목록을 DB에서 불러와서 for문으로 책 목록 앞에 번호 붙이기

	printf("원하는 도서의 번호를 입력하세요.");
	scanf("%d", &booknumber);

	//DB에서 해당 책 삭제하는 기능 구현, 만약 booknumber를 벗어나는 값을 입력하면 종료.

	printf("도서가 삭제되었습니다.");
}