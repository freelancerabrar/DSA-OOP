// DSA : Traversing of an Array Elements
// Date :- 07-01-2022
// Author : Abrar Ahmed
#include <iostream>
using namespace std;
class traverse
{
    private:
        int  *arr, aSize;
    public:
         traverse()
         {
             cout << "Enter the size of the array : ";
             cin >> aSize;
             arr = new int [aSize];
         }
        void read();
        void traverse_arr();
        ~ traverse()
        {
         delete arr;
        }
};
void traverse :: read()
{
    cout << "Enter the elements : ";
        for (int i = 0; i < aSize; i++)
        {
            cin >> arr[i];
        }
}
void traverse :: traverse_arr()
{
    cout << "You Entered : ";
    for (int i = 0; i < aSize; i++)
    {
        cout << arr[i] <<"\t";
    }
}
int main()
{
    traverse a1;
    a1.read();
    a1.traverse_arr();
    return 0;
}