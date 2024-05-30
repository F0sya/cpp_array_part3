#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int full_col = 100;
    const int full_row = 100;
    int row, col, sum = 0;
    do
    {
        cout << "Enter the number of column: ";
        cin >> col;
    } while (col < 1 || col > 100);
    do
    {
        cout << "Enter the number of row: ";
        cin >> row;
    } while (row < 1 || row > 100);

    int arr[full_col][full_row];
    int sum_row[full_row], sum_col[full_col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10;
            sum_row[i] = 0;
            sum_col[j] = 0;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum_col[j] += arr[i][j];
            sum_row[i] += arr[i][j];
            sum += arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "| " << sum_row[i] << endl;
    }
    for (int i = 0; i < col; i++) {
        cout << "----";
    }
    cout << endl;
    for (int j = 0; j < col; j++) {
        cout << sum_col[j] << " ";
    }
    cout << "| " << sum << endl; 
    return 0;
}