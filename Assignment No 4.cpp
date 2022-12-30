#include<iostream>
using namespace std;
int main()
{
	//Muhammad Khalid BSCS Section D roll no 04
	
	cout<<"Assignment 1st Part "<<endl;
	
	int sum=0;
	int arr[10],j;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter your Number :";
		cin>>arr[i];
	}
	for(j=0;j<10;j++)
	{
		if(j==3 || j==5)
		continue;
		sum=sum+arr[j];
	}
	cout<<"sum of 10 values with skip index 3 and 5 is = "<<sum<<endl;
	cout<<"  "<<endl;
	cout<<"Assignment 2nd Part "<<endl;
	
	for(int i=1;i<=10;i++)
	{cout<<"Enter your Number : ";
	cin>>arr[i];
	}
	cout<<"Your Numbers in reverse order :"<<endl;
	for(int i=10;i>=1;i--){
		cout<<"Reverse order :";
		cout<<arr[i]<<endl;
	}
	
	
}
