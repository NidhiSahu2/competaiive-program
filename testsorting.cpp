#include<iostream>
using namespace std;
int main()
{
int arr[6]={10,8,2,3,1,4};
for(int i=0; i<5; i++)
{
	int index=i;
	for(int j=i+1; j<6; j++)
	{
		index = j;
		if(arr[i]>arr[index])
		swap( arr[i],arr[index]);
		
	}
}
	for(int i=0; i<6; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
	
	
	
}
