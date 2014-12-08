1. Compile

Compile은 Visual Studio에서 제공하는 Compiler를 이용한다.

2. Run

- LIS-system 파일의 LIS-system.sln 파일을 Microsoft visual Studio 로 실행한다.
- 디버그 - 디버깅 시작을 클릭하여 프로젝트를 실행한다.
- 프로젝트에는 main.c를 포함하여 각 함수들로 구성된 c파일과 h파일이 포함되어 실행된다.
- 처음 프로그램 실행시 menu.c 파일의 함수가 호출되면서 사용자가 Librarian인지 Student인지 선택한다.
- 사용자가 Librarian을 선택했다면 menu.c 파일의 함수가 호출되며 login과 EXIT 둘 중 하나를 선택한다.
- login을 선택하면 login.c 파일의 함수가 호출되며 로그인하는 화면이 나타난다.
- 화면에 제시된 id와 password를 입력하면 Librarian으로 로그인이 완료된다.
- 사용자가 Student를 선택했다면 menu.c 파일의 함수가 호출되며 create new account, login과 EXIT 중 하나를 선택한다.
- create new account 를 선택하면account.c 파일의 함수가 호출되며 id(5자리 숫자), password(10자리 이내),name, department를 입력한다.
- login 을 선택하면 login.c 파일의 함수가 호출되며 로그인하는 화면이 나타난다.
- id(5자리 숫자)와 password(10자리 이내)를 입력하면 Student로 로그인이 완료된다.
- 계정 정보와 관련된 단계를 마치고 나면, 현재 로그인한 상태에 따라서 다시 menu.c 파일의 함수가 호출된다.
- Librarian으로 로그인을 한 경우에는 add, update, delete와 EXIT 중 하나를 선택한다.
- add를 선택하면 add.c 파일의 함수가 호출되며 책의 정보를 추가하는 화면이 나타난다.
- title, authors, publisher, isbn(숫자), availability(대여가 가능하면 Y or 불가능하면 N), rentingstudent(id) 을 입력한다.
- update를 선택하면 update.c 파일의 함수가 호출되며 책의 정보를 수정하는 화면이 나타난다.
- 수정하려는 책의 제목을 입력하여 검색하며, 입력 시 책의 제목의 일부를 입력해도 된다.
- delete를 선택하면 delete.c 파일의 함수가 호출되며 책의 정보를 삭제하는 화면이 나타난다.
- 삭제하려는 책의 제목을 입력하여 검색하며 입력 시 책의 제목의 일부를 입력해도 된다.
- Student로 로그인 한 경우 search, display rented by me 와 EXIT 중 하나를 선택한다.
- search를 선택하면 search.c 파일의 함수가 호출되며 책을 검색하는 화면이 나타난다.
- 검색하려는 책의 제목을 입력하여 검색하며, 입력 시 책의 제목의 일부를 입력해도 된다.
- display rented by me를 선택하면 display.c 파일의 함수가 호출되며 현재 자신이 대출한 책의 목록을 보여주는 화면이 나타난다.
- 각 단계에서 EXIT를 선택하게 되면 프로그램이 종료된다.
- 사용자 선택에 따라 함수가 호출되고 다시 menu.c 파일의 함수가 호출되는 형식으로 실행이 이루어진다. 
 