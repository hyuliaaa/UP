#include <iostream>


using namespace std;
const int SZ=100;

int main()
{
    int n;
    cin>>n;

    int arr[SZ];

    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    bool isHacksaw=true;
    bool changeCondition=true;

    for(int i=1; i<n-1 ; i+=2)
    {
        if(!(arr[i-1] < arr[i] && arr[i] >arr[i+1]))
        {
            isHacksaw=false;
            break;
        }

    }
        if(isHacksaw)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }


        return 0;
    }
