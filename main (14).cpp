#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Введите размер квадратной матрицы: ";
    cin >> n;
    
    if (n > 5) {
        cout << "Матрица не должна превыщать 5 x 5.";
        return 1;
    }
    
    // создаем матрицу
    int matrix[n][n];
    
    cout << endl << "Введите элементы матрицы." << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Элемент[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << endl << "Матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // сумма чисел на главной и побочной диагоналях
    int sumg = 0, sump = 0;
    
    for (int i = 0; i < n; i++) {
        sumg += matrix[i][i];
        sump += matrix[i][n-1-i];
    }
    
    cout << "Сумма чисел на главной диагонали: " << sumg << endl;
    cout << "Сумма чисел на побочной диагонали: " << sump;
}