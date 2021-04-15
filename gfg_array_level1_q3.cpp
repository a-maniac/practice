// reverse an array without using a temp array

#include<bits/stdc++.h>

using namespace std;
int reversearray(int a[], int n){
	int i=0;
	int j=n-1;
	while(i<j){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
}

int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	reversearray(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
