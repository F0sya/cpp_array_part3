#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int full_col = 100;
    const int full_row = 100;
    float row, col, sum = 0;
    float average = 0;
    do
    {
        cout << "Enter the number of columns: ";
        cin >> row;
    } while (row < 1 || row > 100);
    do
    {
        cout << "Enter the number of row: ";
        cin >> col;
    } while (col < 1 || col > 100);

    int arr[full_col][full_row];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
            sum += arr[i][j];
        }
    }

    average = sum / (col * row);
    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Summary:" << sum << endl
        << "Average:" << average << endl
        << "Min:" << min << endl
        << "Max:" << max << endl;

    return 0;


}