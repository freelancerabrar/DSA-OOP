// DSA : Insertion
// Date :- 21-01-2022
// Author : Abrar Ahmed
#include <iostream>
using namespace std;
class insertion
{
    private:
        int  *arr, capacity,aSize;
    public:
         insertion()
         {
             cout << "Enter the Capacity of the array : ";
             cin >> capacity;
             arr = new int [capacity];
             cout << "Enter The Size of the Array: "<<endl;
	     cin >>aSize;
         }
        void read();
        void traverse_arr();
        void insert();
        int getSize() { return aSize; }
        int getcapacity() { return capacity; }
        ~ insertion()
        {
         delete arr;
        }
};
void insertion :: read()
{
	 cout << "Enter the elements : "<<endl;
         for (int i = 0; i < aSize; i++)
         {
            cin >> arr[i];
         }
}
void insertion :: traverse_arr()
{
    cout << "You Entered : ";
    for (int i = 0; i < aSize; i++)
    {
        cout << arr[i] <<"\t";
    }
}
void insertion :: insert()
{
	int num, pos;
	if(aSize >= capacity)
	{
		cout << "Array Is Full : No insertion Possible" <<endl;
	}
	else
	{
		cout << "Enter the Number to be inserted" <<endl;
		cin >> num;
		cout << "Enter the position " <<endl;
		cin >>pos;
		for(int i=aSize-1; i >=pos-1; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[pos-1] = num;
		aSize++;
	}
}
int main()
{
    insertion a1;
    if(a1.getSize() >= a1.getcapacity())
    {
    	cout << "You over the max capacity" <<endl;
    }
    else
    {
    	a1.read();
    	a1.traverse_arr();
    	a1.insert();
    	a1.traverse_arr();
    }
    return 0;
    	
}
