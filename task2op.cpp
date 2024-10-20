#include<iostream>
using namespace std;
void printStars1(int rowSize);
void printStars2(int rowSize);
 main()
{
    int rowSize;
    cout<<"Enter desired number of rows:";
    cin>>rowSize;
    printStars1(rowSize);
    printStars2(rowSize);
}
void printStars1(int rowSize)
{
    for (int row=1;row<=rowSize;row++)
    {
        for(int col=1;col<=row;col++)
        { 
            cout<<"*";
        }
        cout<<endl;
    }
}
void printStars2(int rowSize)
{
    for (int row=1;row<=rowSize;row++)
    {
        for(int col=rowSize;col>=row;col--)
        { 
            cout<<"*";
        }
        cout<<endl;
    }
}