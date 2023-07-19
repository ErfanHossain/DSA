/*
**1. Linear Search Algorithm
*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,a[1000];
    cout<<"Enter index Number for array : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int item,d=0;
    cout<<"Enter search item : ";
    cin>>item;
    for(i=0; i<n; i++)
    {
        if(a[i]==item){
            d=1;
        cout<<"item is found : "<<i;
    }
    }
    if(d==0)
        cout<<"Item is not found";
    return 0;
}
