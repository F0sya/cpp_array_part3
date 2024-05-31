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


    int arr[full_col][full_row];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int step_of_move;
    cout << "Enter the step: ";
    cin >> step_of_move;
    int temp[full_col][full_row];
    char direction; cout << "Enter a direction(L,R,U,D):"; cin >> direction;
    switch (direction) {

        case 'L':
            for (size_t i = 0; i < row; i++) {
                for (size_t j = 0; j < step_of_move; j++) {
                    temp[i][j] = arr[i][j];
                }
            }
            cout << "Array after swapping: " << endl;
            for (size_t i = 0; i < row; ++i) {
                for (size_t j = 0; j < col; ++j) {
                    if (j < col - step_of_move) {
                        cout << arr[i][j+step_of_move] << " ";
                    }
                    else {
                        cout << temp[i][j-col+step_of_move] << " ";
                    }
                }
                cout << endl;
            }
          
            break;
        case 'R':

            for (size_t i = 0; i < row; i++) {
                for (size_t j = 0; j < col-step_of_move; j++) {
                    temp[i][j] = arr[i][j];
                }
            }
            cout << "Array after swapping: " << endl;
            for (size_t i = 0; i < row; i++) {
                for (size_t j = 0; j < col; j++) {
                    if (j < step_of_move) {
                        cout << arr[i][j+col-step_of_move] << " ";
                    }
                    else {
                        cout << temp[i][j - step_of_move] << " ";
                    }
                }
                cout << endl;
            }
   

            break;
        case 'U':
            for (size_t i = 0; i < step_of_move; i++) {
                for (size_t j = 0; j < col; j++) {
                    temp[i][j] = arr[i][j];
                }
            }
            cout << "Array after swapping: " << endl;
            for (size_t i = step_of_move; i < row; i++) {
                for (size_t j = 0; j < col; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            for (size_t i = 0; i < step_of_move; i++)
            {
                for (size_t j = 0; j < col; j++)
                {
                    cout << temp[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 'D':
            for (size_t i = row-step_of_move; i < row; i++) {
                for (size_t j = 0; j < col; j++) {
                    temp[i][j] = arr[i][j];
                }
            }
            cout << "Array after swapping: " << endl;

            for (size_t i = row-step_of_move; i < row; i++)
            {
                for (size_t j = 0; j < col; j++)
                {
                    cout << temp[i][j] << " ";
                }
                cout << endl;
            }
            for (size_t i = 0; i < row-step_of_move; i++) {
                for (size_t j = 0; j < col; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            break;
    }

    return 0;
}