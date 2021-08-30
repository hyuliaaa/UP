// zad123.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int longestSubarrayOfEqualElements(int arr[], int n)
{
    int maxElement = 1;
    int counter = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            counter++;
            if (counter >= maxElement)
            {
                maxElement = counter;
            }
            
           
        }
        else
        {
            counter = 1;
        }
    }
    return maxElement;
}



void subseq(int A[], int n)
{
    if (n < 0)
    {
        return;
    }
    if (A[0] % 2 == 1)
    {
        bool isEven = true;
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0)
            {
                if (isEven == false)
                {
                    std::cout << A[i] << " ";
                    isEven = true;
                }
            }
            else
            {
                if (isEven == true)
                {
                    std::cout << A[i] << " ";
                    isEven = false;
                }
            }
        }
    }
    else
    {
        bool isEven = false;
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0)
            {
                if (isEven == false)
                {
                    std::cout << A[i] << " ";
                    isEven = true;
                }
            }
            else
            {
                if (isEven == true)
                {
                    std::cout << A[i] << " ";
                    isEven = false;
                }
            }
        }
    }
}

int main()
{
    int arr[] = { 1,1,1,2,2,3,3 };
    int A[] = { 5,6,6,7 };
    int B[] = { 2,2,3,3,4 };
    int c[];
    subseq(c, 5);
   // std::cout << longestSubarrayOfEqualElements(arr, 7);

  
}

