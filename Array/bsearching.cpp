// DSA : Searching- Binary_Search
// Date :- 10-01-2022
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
        void binary_search();
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
void search :: binary_search()
{
    int key,m,l,u;
    cout << "Enter the Key Element : ";
    cin >> key;
    l = 0;
    u = aSize-1;
    while(l<=u)
    {
        m = (l+u)/2;
        if (arr[m]==key)
        {
            cout <<key <<" Found at index " << m;
            break;
        }
        else if(arr[m] > key)
            u = m-1;
        else
            l = m+1;
    }
    if (l>u)
    {
        cout << "Not Found";
    }
}
int main()
{
    search a1;
    a1.read();
    a1.traverse_arr();
    a1.binary_search();
    return 0;
}