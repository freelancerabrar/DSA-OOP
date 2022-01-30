// DSA : Insertion
// Date :- 21-01-2022
// Author : Abrar Ahmed
#include <iostream>
using namespace std;
class insertion
{
    private:
        int  *arr,aSize;
    public:
         insertion()
         {
             cout << "Enter The Size of the Array: "<<endl;
	     cin >>aSize;
	     arr = new int [aSize];
         }
        void read();
        void traverse_arr();
        void insert();
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
		int num,pos;
		cout << "Enter the Number to be inserted" <<endl;
		cin >> num;
		cout << "Enter the position " <<endl;
		cin >>pos;
		for (int i = pos; i < aSize-1; i++)  // For loop for deleting the position
        	arr[i] = arr[i + 1];                  // Deleting position
    		aSize--;
		for(int i=aSize-1; i >= pos; i--)     // for loop for inserting element
		{
			arr[i+1] = arr[i];
		}
		arr[pos] = num;
		aSize++;
}
int main()
{
    	insertion a1;
    	a1.read();
    	a1.traverse_arr();
    	a1.insert();
    	a1.traverse_arr();
    return 0;  	
}
