#include<iostream>
using namespace std;   
 bool isPrime(int number);
int main()
{ int number;
cout<<"Enter number:";
cin>>number;
 int p=isPrime(number);
 cout<<p;
}
 bool isPrime(int number)
{
  if(number<=1){
 return 0;
 }
   for (int i = 2; i * i <= number; i++) {
        if (number % i == 0){ 
            return false;
        }
   }
   return 1;
}

