/*
Programming Studio DS009
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findRoom(int persons[5]); 
void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc);

int main(){
	string mnames[10]; // names of all male students (max. 10)
	string wnames[10]; // names of all female students (max. 10)
	int mroom[10];		// room numbers assigned all male students
	int wroom[10];		// room numbers assigned all female students
	int person[2][5]={0};   // number of persons assgined to all rooms (two floors & each five rooms) 
	int mcount=0, wcount=0; // number of all persons (male, female)
	int menu;

	srand(time(0));
	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 프로그램" << endl;
	cout << "===========================================" << endl;
	while(1){
		cout << "메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ";
		cin >> menu;
		if(menu==0) break;
		else if(menu==1) {
			if(mcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> mnames[mcount];
			int roomno = findRoom(person[0]);
			mroom[mcount] = 100+roomno;
			cout <<  mnames[mcount] << " 학생 " << mroom[mcount] << "호실 배정되었습니다." << endl;
			mcount++;
		}
		else if(menu==2) {
			if(wcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> wnames[wcount];
			int roomno = findRoom(person[1]);
			wroom[wcount] = 200+roomno;
			cout <<  wnames[wcount] << " 학생 " << wroom[wcount] << "호실 배정되었습니다." << endl;
			wcount++;
		}
	}

	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 결과는 다음과 같습니다." << endl;
	cout << "===========================================" << endl;
	printReport(mnames, mroom, mcount, wnames, wroom, wcount);

	return 0;
}

int findRoom(int persons[5]){
// 이 곳에 생각 정리와 코드 구현
	int room = -1;
    int attempts = 0;

    // 초기화
    srand(time(0));

    while (attempts < 10) { // 무한 루프를 방지하기 위한 시도 횟수 제한
        int randRoom = rand() % 5; // 0~4 사이의 랜덤 숫자 생성

        if (persons[randRoom] < 2) {
            persons[randRoom]++; // 방에 사람 추가
            room = randRoom + 1; // 방 번호는 1부터 시작
            break;
        }

        attempts++;
    }

    return room;

	
}

void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc){
// 이 곳에 생각 정리와 코드 구현
cout << "남학생 명단 (" << mc << "명)" << endl;
    for (int i = 0; i < mc; i++) {
        cout << i + 1 << ". " << mn[i] << " [" << mr[i] << "호]" << endl;
    }

    cout << "여학생 명단 (" << wc << "명)" << endl;
    for (int i = 0; i < wc; i++) {
        cout << i + 1 << ". " << wn[i] << " [" << wr[i] << "호]" << endl;
    }

    cout << "호실별 배정 명단" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "101호 : ";
        for (int j = 0; j < mc; j++) {
            if (mr[j] == 101 + i) {
                cout << mn[j] << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "201호 : ";
        for (int j = 0; j < wc; j++) {
            if (wr[j] == 201 + i) {
                cout << wn[j] << " ";
            }
        }
        cout << endl;
    }

}