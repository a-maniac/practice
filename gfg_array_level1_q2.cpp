/* find max and min in an array*/


#include<bits/stdc++.h>

using namespace std;

int maxi(int a[],int n){
	int max1=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max1){
			max1=a[i];
		}
	}
	return max1;
}

int mini(int a[],int n){
	int min1=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min1){
			min1=a[i];
		}
	}
	return min1;
}
int main()
{
	int a[100];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int maximum=maxi(a,n);
	int minimum=mini(a,n);
	
	cout<<"Max"<<maximum<<endl;
	cout<<"Min"<<minimum<<endl;
}
