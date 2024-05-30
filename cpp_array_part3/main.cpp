#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int full_col = 100;
    const int full_row = 100;
    int row, col;
    do
    {
        cout << "Enter the number of rows: ";
        cin >> row;
    } while (row < 1 || row > 100);
    do
    {
        cout << "Enter the number of columns: ";
        cin >> col;
    } while (col < 1 || col > 100);

    int user_input; cout << "First number:"; cin >> user_input;
    int temp = user_input;
    int arr[full_col][full_row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = temp;
            temp++;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}