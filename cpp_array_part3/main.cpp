#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int matrix_first_rows = 5;
    const int matrix_first_col = 10;
    const int matrix_second_col = 5;


    int first_matrix[matrix_first_rows][matrix_first_col];
    int second_matrix[matrix_first_rows][matrix_first_col];
    for (int i = 0; i < matrix_first_rows; i++)
    {
        for (int j = 0; j < matrix_first_col; j++)
        {
            first_matrix[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < matrix_first_rows; i++) {
        for (int j = 0; j < matrix_first_col; j=j+2) {
            int temp = first_matrix[i][j] + first_matrix[i][j + 1];
            second_matrix[i][j] = temp;
        }
    }
    cout << "First matrix:" << endl;
    for (int i = 0; i < matrix_first_rows; i++)
    {
        for (int j = 0; j < matrix_first_col; j++)
        {
            cout << first_matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Second Matrix: " << endl;
    for (int i = 0; i < matrix_first_rows; i++)
    {
        for (int j = 0; j < matrix_first_col; j = j+2)
        {
            cout << second_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}