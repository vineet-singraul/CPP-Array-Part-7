#include <iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50};
int k=1;
for(int i=0;i<k;++i)
{
for(int j=i+1;j<5;++j)
{
if(arr[j]>arr[i])
{
int temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<arr[k-1];


}
