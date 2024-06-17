#include <iostream>
#include <string>
using namespace std;

// 공통 접두사를 찾는 함수
string findCommonPrefix(const string* strs, int n) {
    if (n == 0) return "?";
    string prefix = strs[0];

    for (int i = 1; i < n; ++i) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "?";
        }
    }
    return prefix;
}

int main() {
    const int numStrings = 3;
    string* inputs = new string[numStrings]; // 동적 배열 할당

    cout << "Enter " << numStrings << " words: " << endl;
    for (int i = 0; i < numStrings; ++i) {
        cin >> inputs[i];
    }

    string result = findCommonPrefix(inputs, numStrings);
    cout << "Common prefix: " << result << endl;

    delete[] inputs; // 동적 배열 해제

    return 0;
}
