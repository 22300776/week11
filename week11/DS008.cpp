#include <iostream>
using namespace std;

int main() {
    int output=0;
    string input;
    cin >> input;
    if(input.length() > 20) {
        cout << "20글자 넘어감 !" << endl;
        return 1;
    }

    for(int i=0;i<input.length();i++){
        if(input[i] == 'I'){
            output+=1;
        }
        else if(input[i] == 'V'){
            output+=5;
        }
        else if(input[i] == 'X'){
            output+=10;
        }
        else if(input[i] == 'L'){
            output+=50;
        }
        else if(input[i] == 'C'){
            output+=100;
        }
        else if(input[i] == 'D'){
            output+=500;
        }
        else if(input[i] == 'M'){
            output+=1000;
        }
    }

    for(int i=0;i<input.length();i++){
        if(input[i]=='I'&&input[i+1]=='X'){
            output--;
            output--;
        }

        if(input[i]=='I'&&input[i+1]=='V'){
            output--;
            output--;
        }

        if(input[i]=='X'&&input[i+1]=='L'){
            output-=10;
            output-=10;
        }

        if(input[i]=='X'&&input[i+1]=='C'){
            output-=10;
            output-=10;
        }

        if(input[i]=='C'&&input[i+1]=='M'){
            output-=100;
            output-=100;
        }

        if(input[i]=='C'&&input[i+1]=='D'){
            output-=100;
            output-=100;
        }
    }

    cout << output << endl;
  return 0;
}