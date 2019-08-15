#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,j;
	long long int P1,P2,P3,T1,T2;
	cin>>n>>P1>>P2>>P3>>T1>>T2;
	long long int l[n],r[n],invert[n-1],total;
	total = 0; 
	for(i=0;i<n;i++){
		cin>>l[i]>>r[i];
		total += (r[i]-l[i])*P1;
	}
	j = 0;
	for(i=1;i<n;i++){
		invert[j++] = l[i]-r[i-1];
	}
	for(i=0;i<j;i++){
		if(invert[i]<=T1){
			total += invert[i]*P1;//不到T1又开始使用电脑 
		}else if(invert[i]>T1&&invert[i]<(T1+T2)){
			total += T1*P1+(invert[i]-T1)*P2;//不到T2 
		}else if(invert[i]>=T1+T2){
			total += T1*P1+T2*P2+(invert[i]-T1-T2)*P3; 
		}
	} 
	
////	cout<<total<<endl;
//	for(i=1;i<n;i++){
//		cin>>l2>>r2;
//		//算第某个区间
//		pause = l2-r1; 
//		if(pause<=T1){
//			total += pause*P1;//不到T1又开始使用电脑 
//		}else if(pause>T1&&pause<(T1+T2)){
//			total += T1*P1+(pause-T1)*P2;//不到T2 
//		}else if(pause>=T1+T2){
//			total += T1*P1+T2*P2+(pause-T1-T2)*P3; 
//		}
//		total += (r2-l2)*P1;
//		
//	}
	cout<<total;
	return 0;
}
