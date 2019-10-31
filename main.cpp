#include <iostream>
#include <vector>
using namespace std;
vector<bool> numberToLCDisplay[10];

void printNumber(int digit, int size);
void digitTopBottomMiddle(bool wantToPrint, int size);
void digitBody(bool wantToPrintLeft, bool wantToPrintRight, int size);


void printNumber(string num, int size){

    for (int i = 0; i < num.size(); ++i){
        digitTopBottomMiddle(numberToLCDisplay[int(num[i])-'0'][0], size);
        if(i < num.size()-1)
            cout << " ";
    }
    cout << endl;

    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < num.size(); ++i){
            digitBody(numberToLCDisplay[int(num[i])-'0'][1],numberToLCDisplay[int(num[i])-'0'][2], size);
            if(i < num.size()-1)
                cout << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < num.size(); ++i){
        digitTopBottomMiddle(numberToLCDisplay[int(num[i])-'0'][3], size);
        if(i < num.size()-1)
            cout << " ";
    }
    cout << endl;

    for (int k = 0; k < size; ++k) {
        for (int i = 0; i < num.size(); ++i){
            digitBody(numberToLCDisplay[int(num[i])-'0'][4],numberToLCDisplay[int(num[i])-'0'][5], size);
            if(i < num.size()-1)
                cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < num.size(); ++i){
        digitTopBottomMiddle(numberToLCDisplay[int(num[i])-'0'][6], size);
        if(i < num.size()-1)
            cout << " ";
    }

    cout << endl;
}

void digitBody(bool wantToPrintLeft, bool wantToPrintRight, int size) {
    if(wantToPrintLeft)
        cout << "|";
    else
        cout << " ";
    for (int j = 0; j < size; ++j) {cout << " ";};
    if(wantToPrintRight)
        cout << "|";
    else
        cout << " ";
}

void digitTopBottomMiddle(bool wantToPrint, int size) {
    cout << " ";
    if(wantToPrint)
        for (int i = 0; i < size; ++i) {cout << "-";}
    else
        for (int i = 0; i < size; ++i) {cout << " ";}
    cout << " ";
}


int main() {
    numberToLCDisplay[0] = {true,true,true,false,true,true,true};
    numberToLCDisplay[1] = {false,false,true,false,false,true,false};
    numberToLCDisplay[2] = {true,false,true,true,true,false,true};
    numberToLCDisplay[3] = {true,false,true,true,false,true,true};
    numberToLCDisplay[4] = {false,true,true,true,false,true,false};
    numberToLCDisplay[5] = {true,true,false,true,false,true,true};
    numberToLCDisplay[6] = {true,true,false,true,true,true,true};
    numberToLCDisplay[7] = {true,false,true,false,false,true,false};
    numberToLCDisplay[8] = {true,true,true,true,true,true,true};
    numberToLCDisplay[9] = {true,true,true,true,false,true,true};

    int size;
    string number;

    while(cin >> size >> number){
        if(size != 0){
            printNumber(number, size);
            cout << endl;
        }
    }

    return 0;
}