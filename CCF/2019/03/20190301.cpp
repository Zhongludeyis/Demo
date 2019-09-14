#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,j;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	long long int max,min,total;
	double mid;
	if(a[0]>=a[n-1]){
		max = a[0];
		min = a[n-1];
	}else{
		max = a[n-1];
		min = a[0];
	} 
	//中间数：
	cout<<max<<" ";
	if(n%2!=0){
		cout<<a[(n-1)/2];
	}else{
		//
		total = a[(n-1)/2]+a[n/2];
		if(total%2==0){
			cout<<total/2<<" ";
		}else{
			mid = double(a[(n-1)/2]+a[n/2])/2;
			printf("%.1f ",mid);
		}	
	}
	cout<<min<<" ";
	//循环
	return 0;	 
} 
