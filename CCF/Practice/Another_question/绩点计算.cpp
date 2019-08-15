#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int a[n];
	int b[n];
	float score,count,sum,total; 
	count = 0.0;
	sum = 0.0;
	score = 0.0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	for(i=0;i<n;i++){
		if(b[i]<60){
			score = 0.0;
		}else if(b[i]>=60&&b[i]<=63){
			score = 1.0;
		}else if(b[i]>=64&&b[i]<=67){
			score = 1.5;
		}else if(b[i]>=68&&b[i]<=71){
			score = 2.0;
		}else if(b[i]>=72&&b[i]<=74){
			score = 2.3;
		}else if(b[i]>=75&&b[i]<=77){
			score = 2.7;
		}else if(b[i]>=78&&b[i]<=81){
			score = 3.0;
		}else if(b[i]>=82&&b[i]<=84){
			score = 3.3;
		}else if(b[i]>=85&&b[i]<=89){
			score = 3.7;
		}else if(b[i]>=90&&b[i]<=100){
			score = 4.0;
		}
		sum += a[i];
		count += score*a[i];
	}
//	cout<<sum<<" "<<count<<endl;
	total = count/sum;
	printf("%.2f",total);
	return 0;
}
