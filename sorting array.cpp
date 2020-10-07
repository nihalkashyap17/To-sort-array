#include <iostream>
using namespace std;

#define MAX 100

int main()
{
	//array declaration
	int arr[MAX];
	int n,j;
	int temp;
	
	cout<<"Enter the total number of element ";
	cin>>n;
	
	if(n<0 || n>MAX)
	{
		cout<<"Input valid range!!!"<<endl;
		return -1;
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element ["<<i+1<<"] ";
		cin>>arr[i];
	}
	
	cout<<"Unsorted Array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"Sorted elements in accending order:"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	
	
	return 0;
	
}
