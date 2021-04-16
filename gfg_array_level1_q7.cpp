//sort an array of 0s 1s and 2s in one pass

#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int sorti(int a[], int n){
int lo=0;
int hi=n-1;
int mid=0;
while(mid<=hi){
switch(a[mid]){
	case 0:
		swap(&a[lo++], &a[mid++]);
		break;
		
	case 1:
		mid++;
		break;
	case 2:
		swap(&a[mid],&a[hi--]);
		break;
}		
}

}

int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sorti(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
