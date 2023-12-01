// Binary search code occurrence  code // 
#include<iostream>
using namespace std;
int main()
{
int arr[]={1,1,2,3,3,3,5,5,6,7,7,8};
int n = sizeof(arr)/sizeof(arr[0]);
int target;
cout<<"Enter a target";
cin>>target;
int lo=0;
int hi=n-1;
int idx=-1;
bool flag=false;
while(lo<=hi)
{
	int mid=(lo+hi)/2;
	if(arr[mid]==target){
	flag=true;
	idx=mid;
	break;
}
else if(arr[mid]>target)hi=mid-1;
else lo=mid+1;	
}
if(flag==true)cout<<idx;
else cout<<-1;
}
