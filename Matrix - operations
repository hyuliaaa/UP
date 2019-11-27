#include <iostream>
#include <cstring>
using namespace std;
const int SZ=100;

void inputMatrix(int matr[SZ][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matr[i][j];
        }
    }
}

void outputMatrix(int matr[SZ][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sum(int matr[][SZ],int matrix[][SZ],int C[][SZ],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n ; j++)
        {
            C[i][j]=matr[i][j]+matrix[i][j];
        }
    }
}

void scalarMultiplication(int matrix[][SZ], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            matrix[i][j]=x*matrix[i][j];
        }
    }
}

bool areEqual(int A[][SZ], int B[][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(A[i][j]!=B[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int sumOfMainDiagonalEl(int A[][SZ], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                sum+=A[i][j];
            }
        }
    }
    return sum;
}
int minorSumofEl(int A[][SZ], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j==(n+1)-2)
            {
                sum+=A[i][j];
            }
        }
    }
    return sum;
}

void sumOfEachRow(int A[][SZ], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=0;

        for(int j=0; j<n; j++)
        {
            sum+=A[i][j];
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
    }
}

void sumOfEachColumn(int A[][SZ], int n)
{

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=A[j][i];
        }
        cout<<"Sum of column "<<i<<" is "<<sum<<endl;
    }
}

void interchangeDiagonals(int A[][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                swap(A[i][j], A[i][n-j-1] );
            }
        }
    }
}

bool isUpperTriangularMatrix(int A[][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<i)
            {
                if(A[i][j]!=0)
                    return false;
            }
        }
    }
    return true;
}


bool isLowerTriangularMatrix(int A[][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j)
            {
                if(A[i][j]!=0)
                    return false;
            }
        }
    }
    return true;
}

int sumUpperTrMatrix(int A[][SZ], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j)
            {
                sum+=A[i][j];
            }
        }
    }
    return sum;
}

void transposeMatrix(int A[][SZ],int transpose[][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            transpose[i][j]=A[j][i];
        }

    }
}

bool isIdentity(int A[][SZ], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                if(A[i][j]!=1)
                    return false;
            }
            else
            {
                if(A[i][j]!=0)
                    return false;

            }
        }
    }
    return true;
}

bool isSymmetric(int A[][SZ], int n)
{
    int transpose[SZ][SZ];
    transposeMatrix(A,transpose,n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n ; j++)
        {
            if(A[i][j]!=transpose[i][j])
            {
                return false;
            }
        }
    }
    return true;
}





int main()
{

    int matr[SZ][SZ];
    inputMatrix(matr,3);
    cout<<endl;
    int matrix[SZ][SZ];
    inputMatrix(matrix,2);
    int result[SZ][SZ];

    sum(matr,matrix,result,4);
    outputMatrix(result,4);

//scalarMultiplication(matr,4, 5);
//outputMatrix(matr,4);
// cout<<areEqual(matr,matrix,2);

    cout<<sumOfMainDiagonalEl(matr,2);
    cout<<endl;
    //cout<<minorSumofEl(matr,2);
    // sumOfEachRow(matr, 2);
    // sumOfEachColumn(matr,2);

// interchangeDiagonals(matr,3);
//outputMatrix(matr,3);

//cout<<isUpperTriangularMatrix(matr,3);
//cout<<isIdentity(matr,3);
    cout<<isSymmetric(matr,3);

    return 0;
}
