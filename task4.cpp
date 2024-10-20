#include<iostream>
using namespace std;   
void triangular(int num);
int main()
{ int num,dots;
cout<<"Enter number of triangle:";
cin>>num;
triangular(num);
}
void triangular(int num)
{
    // by loops
    // int dots=0;
    // for(int i=1;i<=num;i++){
    //     dots+=i;
    int dots=num*(num+1)/2;
        cout<<"Dots in the triangle:"<<dots;
    }
