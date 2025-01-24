#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Введите строку: ";
    getline(cin, str);
    int cnt = 0;
    
    for (int i=0; i< str.size(); i++) {
        if ((i == 0) && (str[i] != ' ')) {
            cnt +=1;
        }
        if ((i >= 1) && (str[i-1] == ' ')) {
            cnt += 1;
        } 
    }
    
    cout << cnt;
}
