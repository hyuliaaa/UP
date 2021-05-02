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

int main()
{
    int arr[] = { 1,1,1,2,2,3,3 };
    std::cout << longestSubarrayOfEqualElements(arr, 7);

  
}
