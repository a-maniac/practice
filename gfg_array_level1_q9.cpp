// keep negative no in left in an array

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c=0;
	for(int i=0;i<n;i++){
		
		if(a[i]<0){
			int temp=a[c];
			a[c]=a[i];
			a[i]=temp;
			c++;
		}
	
}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
