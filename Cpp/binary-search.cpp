/*
->> 2.binary search Algorithm.
*/
#include <iostream>
using namespace std;
int bainarysearch(int a[],int n,int item)
{
    int first=1;
    int last=n;
    while(first<=last){
        int mid=(first+last)/2;
    if(a[mid]== item)
        return mid;
    else if(a[mid]>item)
    {
        last=mid-1;
    }
    else
        first=mid+1;
}
    return -1;
}
main()
{
    int n;
    cout<<"Enter index Number for array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Number"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int item;
    cout<<"Enter search item : ";
    cin>>item;
    int a=bainarysearch(arr,n,item);
    if(a!=-1){
        cout<<"item is found at Locetion :"<<a<<endl;
    }

    if(a==-1)
        cout<<"item is not found";
        return 0;
}
