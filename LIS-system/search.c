#include <stdio.h>
#include "search.h"
#include "menu.h"

char keyword[100]="";
int booknumber;

void searchBook(){	

	printf("검색할 도서의 이름을 입력하세요 : ");
	scanf("%s", &keyword);
	
	/*
	//DB 이용
	
	//while('%'keyword'%' == DB.bookname){
	//	printf("%d . %c",i,DB.bookname)
	//}
	printf("원하는 도서번호를 선택하세요 : ");
	scanf("%d",&booknumber);

	//DB이용
	//printf(DB.title); 이런형식
	
	*/
	
	showMenu("func_std");
}