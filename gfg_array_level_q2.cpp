// find the kth largest no in an array

#include<bits/stdc++.h>

using namespace std;

int sorti(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	sorti(a,n);
	
	cout<<"kth largest no is "<<a[k-1];
}
