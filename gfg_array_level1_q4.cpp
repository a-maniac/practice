// sort an array

#include<bits/stdc++.h>

using namespace std;

int sorti(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	
	sorti(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
}
