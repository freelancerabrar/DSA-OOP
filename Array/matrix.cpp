// 2D Array- Operations-
// 1.Dynamically 2d array Creation.
// 2. Linear Search in 2d Array
// 3.Equal Checking
// 4.Addition
// 5.Multiplication
// Date :- 19-01-2022
// Author : Abrar Ahmed
#include <iostream>
using namespace std;
class matrix
{
private:
    int **arr, row, col, **arr2, **sum, **mult, col1, row1;

public:
    matrix()
    {
        cout << "Enter the number of rows of Matrix 1" << endl;
        cin >> row;
        cout << "Enter the number of columns of Matrix 1" << endl;
        cin >> col;
        arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
        cout << "Enter the number of rows of 2nd Matrix" << endl;
        cin >> row1;
        cout << "Enter the number of columns of 2nd Matrix" << endl;
        cin >> col1;
        arr2 = new int *[row1];
        for (int i = 0; i < row1; i++)
        {
            arr2[i] = new int[col1];
        }

        sum = new int *[row];
        for (int i = 0; i < row; i++)
            sum[i] = new int[col];

        mult = new int *[row1];
        for (int i = 0; i < row1; i++)
        {
            mult[i] = new int[col1];
        }
    }
    void read();
    void traverse_arr();
    void linear_search();
    void equal_check();
    void addition();
    void multiplication();
    ~matrix()
    {
        delete arr;
    }
};
void matrix ::read()
{
    cout << "Enter the Value of the matrix 1 : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the Value of the matrix 2 : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }
}
void matrix ::traverse_arr()
{
    cout << "You Entered at array1: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "You Entered at array2: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
}
void matrix ::linear_search()
{
    int key, count = 0;
    cout << "Enter the Key Element : ";
    cin >> key;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (key == arr[i][j])
            {
                cout << key << " is found at Array[" << i << "]"
                     << "[" << j << "]" << endl;
                count = 1;
            }
        }
    }
    if (count == 1)
        cout << "Search is Successful " << endl;
    else
        cout << "Not Found" << endl;
}
void matrix ::equal_check()
{
    int flag = 0;
    // check if order of matrices are same
    // if not same order then check each corresponding elements
    if (row != row1 || col != col1)
    {
        cout << "\nMatrices are of different order,hence not equal";
        flag = 1;
    }
    else
    {
        //check equality of each corresponding elements
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] != arr2[i][j])
                {
                    // inequality spotted
                    cout << "\nMatrices are not equal. Element mismatch at "
                         << "  Array[" << i << "]"
                         << "[" << j << "]" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
    }
    if (flag == 0)
        cout << "\nMatrices are equal";
}

void matrix::addition()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            sum[i][j] = arr[i][j] + arr2[i][j];
    }
    cout << "Addition of two matrix is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
}

void matrix::multiplication()
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            mult[i][j] = 0;
        }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            for (int k = 0; k < col; k++)
            {
                mult[i][j] += arr[i][k] * arr2[k][j];
            }
    }
    cout << "Multiplication of two matrix is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mult[i][j] << "\t";
        }
        cout << endl;
    }
}
    int main()
    {
        matrix a1;
        a1.read();
        int f;
        //let's have some fun!
        while (1)
        {
            cout << "\n 1: Display\n 2: Linear Search in Matrix1\n 3:Equal Checking\n 4:Addition\n 5:Multiplication\n 6:Exit\n Enter your choice::";
            cin >> f;
            switch (f)
            {
            case 1:
                a1.traverse_arr();
                break;
            case 2:
                a1.linear_search();
                break;
            case 3:
                a1.equal_check();
                break;
            case 4:
                a1.addition();
                break;
            case 5:
                a1.multiplication();
                break;
            case 6:
                exit(0);
            default:
                cout << "\n Enter Proper Choice\n";
            }
        }
        return 0;
    }