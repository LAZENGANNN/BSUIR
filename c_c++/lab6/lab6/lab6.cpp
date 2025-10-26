#include <iostream>

using namespace std;

//Определить количество различных значений матрицы, т.е.повторяющиеся элементы считать один раз.

int main() {
    int rows = 3;
    int cols = 4;

    cout << "rows: ";
    cin >> rows;

    cout << "columns: ";
    cin >> cols;

    int** matrix = new int* [rows];

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    srand(time(0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            
            matrix[i][j] = rand() % 21 - 10;
        }
    }

    int size = rows * cols;
    int* uniqueElements = new int[size] {0};
    bool isUnuque = true;
    int uniqueCounter = 0;

    cout << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "\t" << matrix[i][j] << "\t";

            for (int f = 0; f < size; ++f) {
                if (matrix[i][j] == uniqueElements[f]) {
                    isUnuque = false;
                }
            }

            if (isUnuque) {
                uniqueElements[uniqueCounter] = matrix[i][j];
                uniqueCounter++;
            }

            isUnuque = true;
        }
        cout << endl;
    }

    cout << endl << uniqueCounter << " unique elements";

}
