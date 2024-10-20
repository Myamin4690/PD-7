#include<iostream>
using namespace std;
void numberAmplicationfied(int num);
 main()
{  int num;
cout<<"Enter the number to Amplify:";
cin>>num;
numberAmplicationfied(num);
}
void numberAmplicationfied(int num)
{
    for(int i=1;i<=num; i++){
     if(i%4==0){
   cout<<i*10<<" ";
}
    else
        {cout<<i<<" ";
        }
        }
        
        }
    

    




