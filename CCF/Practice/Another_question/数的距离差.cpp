#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int max,min,number,count;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	min = a[0];
	max = a[n-1];
	number = abs(abs(a[0]-max)-(a[0]-min));
	count = 0;
	for(i=0;i<n;i++){
		if(number>abs(abs(a[i]-max)-(a[i]-min))){
			number = abs(abs(a[i]-max)-(a[i]-min));
			count = i;
		}else if(number==abs(abs(a[i]-max)-(a[i]-min))){
			if(a[count]>a[i]){
				count = i;
			}else{
				continue;
			}
		}
	}
	cout<<a[count];
	return 0;
}
