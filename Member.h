#include <iostream>

#define NAME_STORE_MAX 255 // 계정 리스트 최대
#define SMS_STORE_MAX 255  // 쪽지 리스트 최대
#define SMS_INPUT_MAX 255  // 쪽지 입력 최대

using namespace std;

class Member {
private:
	int counter;
protected:
	char name_list[NAME_STORE_MAX][10];
public:
	Member(void);
	void get_name_list(void);
	void show_name_list(void);
};

Member::Member(void) {
	counter = 0;
}

void Member::get_name_list(void) {
	system("cls"); // 콘솔창 클리어
	cout << "등록하실 계정명을 입력하세요 : ";
	cin >> name_list[counter];

	counter++;
}

void Member::show_name_list(void) {
	for(int i = 0; i < counter; i++)
		cout << name_list[i] << endl;
}
