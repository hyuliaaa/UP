#include <iostream>
using namespace std;
const int SZ=100;




int main()
{

  char arr[SZ];
  cin.getline(arr,SZ);
  int H[26]={0};


  for(int i=0; arr[i]; i++)
  {
      H[arr[i]-97]+=1;

  }

  for(int i=0; i<26; i++)
  {
      if(H[i]>1)
      {
          cout<<(char)(i+97)<<" : "<<H[i]<<" times"<<endl;
      }
  }




    return 0;
}
