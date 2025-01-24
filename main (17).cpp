#include <iostream>
using namespace std;

int main() {
    
    int N;
    cout << "Введите год: ";
    cin >> N;
    
    if ((N % 4 == 0 && N % 100 != 0) || (N % 400 == 0)) {
        cout << "Год является високосным.";
    }
    else {
        cout << "Год не является високосным.";
    }
}