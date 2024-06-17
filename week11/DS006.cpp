#include <iostream>
#include <iomanip>

using namespace std;

// 과목 구조체 정의
struct Sub {
    string name;
    int cred;
    int score;
    string grade;
    double gp;  // grade point
};

// 등급과 평점을 계산하는 함수
void calcGrade(Sub &sub) {
    if (sub.score >= 95) {
        sub.grade = "A+";
        sub.gp = 4.5;
    } else if (sub.score >= 90) {
        sub.grade = "A0";
        sub.gp = 4.0;
    } else if (sub.score >= 85) {
        sub.grade = "B+";
        sub.gp = 3.5;
    } else if (sub.score >= 80) {
        sub.grade = "B0";
        sub.gp = 3.0;
    } else if (sub.score >= 75) {
        sub.grade = "C+";
        sub.gp = 2.5;
    } else if (sub.score >= 70) {
        sub.grade = "C0";
        sub.gp = 2.0;
    } else if (sub.score >= 65) {
        sub.grade = "D+";
        sub.gp = 1.5;
    } else if (sub.score >= 60) {
        sub.grade = "D0";
        sub.gp = 1.0;
    } else {
        sub.grade = "F";
        sub.gp = 0.0;
    }
}

void calcGPA(Sub subs[], int n, int &totalCred, double &gpa) {
    double totalGP = 0.0;
    totalCred = 0;

    for (int i = 0; i < n; i++) {
        totalCred += subs[i].cred;
        totalGP += subs[i].cred * subs[i].gp;
    }

    gpa = totalGP / totalCred;
}

int main() {
    const int NUM_SUBS = 3;
    Sub subs[NUM_SUBS];
    int totalCred;
    double gpa;

    for (int i = 0; i < NUM_SUBS; i++) {
        cin >> subs[i].name >> subs[i].cred >> subs[i].score;
        calcGrade(subs[i]);
    }

    calcGPA(subs, NUM_SUBS, totalCred, gpa);

    cout << fixed << setprecision(2); 
    for (int i = 0; i < NUM_SUBS; i++) {
        cout << subs[i].name << " (" << subs[i].cred << ") " << subs[i].grade << " " << subs[i].gp << endl;
    }

    cout << "Total Credits: " << totalCred << ", GPA: " << gpa << endl;

    return 0;
}
