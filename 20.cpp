#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int x, cnt=0;
    cout << "Введите число: ";
    cin >> x;
    
    for (int i = 1; i <= abs(x); i++) {
        if (x % i == 0) {
            cnt += 1;
        }
    }
    
    if (cnt == 2) {
        cout << "Число является простым.";
    }
    else {
        cout << "Число не является простым.";
    }
}
