//find occurence of digit in an array.

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int x;
	cin>>x;
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			c++;
		}
	}
	cout<<" the no "<<x<< " occured "<<c <<" no of times";
	}
