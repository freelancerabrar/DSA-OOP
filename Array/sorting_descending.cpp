// DSA : Sorting Descending orderly
// Date :- 07-01-2022
// Author : Abrar Ahmed
#include <iostream>
using namespace std;
class sort
{
    private:
        int  *arr, aSize;
    public:
         sort()
         {
             cout << "Enter the size of the array : ";
             cin >> aSize;
             arr = new int [aSize];
         }
        void read();
        void traverse_arr();
        void sort_descending();
        ~ sort()
        {
         delete arr;
        }
};
void sort :: read()
{
    cout << "Enter the elements : ";
        for (int i = 0; i < aSize; i++)
        {
            cin >> arr[i];
        }
}
void sort :: traverse_arr()
{
    cout << "You Entered : ";
    for (int i = 0; i < aSize; i++)
    {
        cout << arr[i] <<"\t";
    }
}
void sort :: sort_descending()
{
    int i, j, u = aSize-1, l = 0;
    i = u;
    while (i >= l)
    {
        j = l;
        while (j < i)
        {
            if (arr[j] < arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
            j = j+1;
        }
        i = i-1;
    }
}
int main()
{
    sort a1;
    a1.read();
    a1.traverse_arr();
    a1.sort_descending();
    a1.traverse_arr();
    return 0;
}