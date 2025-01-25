#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cout << "Введите размеры матрицы." << endl << "Количество строк: ";
    cin >> x;
    cout << "Количество столбцов: ";
    cin >> y;
    
    int matrix[x][y];
    
    cout << "Введите элементы матрицы." << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "Матрица:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    int turnmatrix[y][x];
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            turnmatrix[j][x-1-i] = matrix[i][j];
        }
    }

    cout << "Матрица после поворота на 90 градусов по часовой стрелке:" << endl;
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << turnmatrix[i][j] << "\t";
        }
        cout << endl;
    }
}
