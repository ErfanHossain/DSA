/*
->> 2.binary search Algorithm.
*/
#include<iostream>
using namespace std;
int Binary_search(int arr[],int str,int end,int item)
{
    int mid;
    while(str<=end){
    mid=(str+end)/2;
    if(arr[mid]<item)
    {
        str=mid+1;
    }
    else if (arr[mid]>item)
    {
        end=mid-1;
    }
    else if(arr[mid]==item)
    return mid;
    }
    return -1;
    
    
}
int main()
{
    int n;
    cout<<"enter element number : ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" number of arry eliment : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int item;
    cout<<"enter the search item : ";
    cin>>item;
   int result= Binary_search(arr,0,n-1,item);
   if(result ==-1)
   cout<<"item is not founded";
   else
   cout<<"item is founded at index"<<result;
}
