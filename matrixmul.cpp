#include<iostream>
using namespace std;

int main()
{
    int mat1[5][5],mat2[5][5],mat3[5][5];
    int r1,c1,r2,c2;
    cout<<"Enter the rows and columns of matrix 1\n";
    cin>>r1>>c1;
    cout<<"Enter the rows and columns of matrix 2\n";
    cin>>r2>>c2;
    if (r1 != c2)
    {
        cout<<"Matrix cannot be multiplied\n";
        return 0;
    }
    cout<<"Enter elements in matrix 1\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {    
            cout<<"Enter ("<<i<<","<<j<<") : ";
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter elements in matrix 2\n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {    
            cout<<"Enter ("<<i<<","<<j<<") : ";
            cin>>mat2[i][j];
        }
    }
    //multiplication of matrices
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mat3[i][j] = 0;
            for(int k=0;k<c1;k++)
            {                
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout<<"Multiplication of matrix 1 and matrix 2 is \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}