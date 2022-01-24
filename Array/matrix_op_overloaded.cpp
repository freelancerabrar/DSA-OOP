#include<iostream>
using namespace std;

class Matrix
{
    private:
        int rows,cols, **mat;
    public:
        Matrix();
        Matrix operator+(Matrix m);
        Matrix operator-(Matrix m);
        Matrix operator^(Matrix m);
        void read();
        void display();
};
 void Matrix::read()
 {
           
            cout <<"\nEnter the elements of the Matrix a["<<rows<<"]["<<cols<<"] ::\n\n";
        
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                {
                    cout<<"Matrix["<<i+1<<"]["<<j+1<<"] = ";
                    cin>>mat[i][j];
                }
            }


        }

Matrix :: Matrix()
{
     cout<<"Enter the size of row: \n";
            cin>>rows;
            cout<<"Enter the size of the col\n";
            cin >>cols;
            mat=new int *[rows];
            for(int i=0;i<rows;i++)
            {
                mat[i]= new int [cols];
            }

}

Matrix Matrix :: operator+(Matrix m)
{
    Matrix result;

    cout<<"The sum of the Entered matrix is :\n\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            result.mat[i][j]= mat[i][j] + m.mat[i][j];
        }
    }
    return result;
}
void Matrix::display()
{
    cout<<"\n-----------------Result------------------\n";
    for(int i=0;i<rows;i++)    
    {    
        for( int j=0;j<cols;j++)    
        {    
            cout<<mat[i][j]<<"\t";  
        }    
        cout<<"\n";    
    }
    cout<<"\n-----------------End of Result------------------\n";
}
Matrix Matrix:: operator-(Matrix m)
{

   Matrix result;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            result.mat[i][j]= this->mat[i][j] - m.mat[i][j];
        }
    }
    return result;
}
Matrix Matrix :: operator^(Matrix m)
{
    Matrix result;

    for(int i=0; i<m.rows; i++)
    {
        for(int j=0; j<m.cols; j++)
        {
            for(int k; k<cols; k++)
            {
                result.mat[i][j] += mat[i][k] * m.mat[k][j];
            }
        }
    }
    return result;
}
int main ()
{
    Matrix a1,a2,a3;
    a1.read();
    a2.read();
    int f;
    while(1)
    {
        cout<<"\n 1: ADD\n 2: Sub\n 3:Multi\n 4:Exit\n Enter your choice::";
        cin>>f;
        switch(f)
        {
            case 1: a3=a1+a2;
               a3.display();
                    break;
            case 2: a3=a1-a2;
               a3.display();
                    break;
            case 3: a3=a1^a2;
              a3.display();
                    break;
            case 4: exit(0);
            default: cout<<"\n Enter Proper Choice\n";
        }
    }
    return 0;
}
