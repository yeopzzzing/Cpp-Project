#include <iostream>
#include <Windows.h> // Sleep 함수 사용
#include "Member.h"

int main(void) {
	Member member;
	char menu_selec;

	while(1) {
		system("cls"); // 콘솔창 클리어
		cout << "1. 계정등록" << endl;
		cout << "2. 계정목록 보기" << endl;
		cout << "0. 종료" << endl;
		cout << endl << "원하시는 메뉴를 입력해 주세요 : ";
		cin >> menu_selec;

		if(menu_selec == '1') {
			system("cls"); // 콘솔창 클리어
			member.get_name_list();
		} else if(menu_selec == '2') {
			system("cls"); // 콘솔창 클리어
			member.show_name_list();
			for(int i = 7; i>0; i--) { // 7초 카운트 다운
				cout << endl << i << "초 후에 메인 메뉴로 돌아갑니다.";
				Sleep(1000);
			}
		} else if(menu_selec == '0') {
			cout << "프로그램을 종료합니다." << endl;
			break;
		} else {
			cout << "에러 : 메뉴를 잘 못 선택하였습니다!!" << endl;
			Sleep(500);
		}
	}
}
