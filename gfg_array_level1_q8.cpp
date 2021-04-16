//find the range and coefficients in an array

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int mini=a[0]; int maxi=a[0];
	
	for(int i=1;i<n;i++){
		if(a[i]<mini){
			mini=a[i];
		}
	}
	
		for(int i=1;i<n;i++){
		if(a[i]>maxi){
			maxi=a[i];
		}
	}
	

	cout<<"max "<<maxi<<"mini "<<mini<<endl;
	
	int range= maxi-mini;
	
	float coeff=float (maxi-mini)/(maxi+mini);
	
	cout<<"range "<<range <<" coeff"<<coeff;
}
