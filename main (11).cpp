#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    
    // создаем массив
    int array[n];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Элемент[" << i << "]: ";
        cin >> array[i];
    }

    // инвертирование элементов массива
    for (int i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }

    cout << endl << "Инвертированный массив: " << endl << "{ ";
    for (int i = 0; i < n; i++) {
        if (i != n-1) {
            cout << array[i] << ", ";
        }
        else { cout << array[i] << " "; }
    }
    cout << "}";
}