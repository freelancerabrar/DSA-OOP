// DSA : Searching- Linear_Search
// Date :- 07-01-2022
// Author : Abrar Ahmed
#include <iostream>
using namespace std;
class search
{
    private:
        int  *arr, aSize, key;
    public:
         search()
         {
             cout << "Enter the size of the array : ";
             cin >> aSize;
             arr = new int [aSize];
         }
        void read();
        void traverse_arr();
        void linear_search();
        ~ search()
        {
         delete arr;
        }
};
void search :: read()
{
    cout << "Enter the elements : ";
        for (int i = 0; i < aSize; i++)
        {
            cin >> arr[i];
        }
}
void search :: traverse_arr()
{
    cout << "You Entered : ";
    for (int i = 0; i < aSize; i++)
    {
        cout << arr[i] <<"\t";
    }
}
void search :: linear_search()
{
    int key, count;
    cout << "Enter the Key Element : ";
    cin >> key;
    for (int i = 0; i < aSize; i++)
    {
        if (key == arr[i])
        {
            cout << key << " is found at index " << i << endl ;
            count = 1;
        }
    }
    if (count == 1)
        cout << "Search is Successful ";
    else
        cout << "Not Found";
}
int main()
{
    search a1;
    a1.read();
    a1.traverse_arr();
    a1.linear_search();
    return 0;
}