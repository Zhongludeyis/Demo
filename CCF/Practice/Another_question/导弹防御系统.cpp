#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	int a[k];
	int b[k];
	for(int i=0;i<k;i++){
		cin>>a[i];
		b[i] = 1;
	}
	int num =0;
//	for(int i=1;i<k;i++){
//		for(int j=0;j<i;j++){
//			if(a[i]<=a[j]){
//				if(b[j]>=b[i]){
//					b[i] = b[j]+1;
//				}
//			}
//		}
//	}
	for(int i=1;i<k;i++){
		int choose[i];
		for(int m=0;m<i;m++){
			choose[m] = 0;
		}
		for(int j=0;j<i;j++){
			if(a[j]>=a[i]){
				if(b[j]>=b[i]){
					choose[j] = b[j]+1;
				}else{
					choose[j] = b[i];
				}
			}else{
				choose[j] = b[i];
			}
		}
		//每次去找序列中最大的choose[i]
		int max = choose[0];
		for(int j=1;j<i;j++){
			if(max<choose[j]){
				max = choose[j];
			}
		}
		b[i] = max;
	}
	for(int i=0;i<k;i++){
		if(num<b[i]){
			num = b[i];
		}
	}
	cout<<num<<endl;
	return 0;
}
//思路：
//每次都要找前面最长的序列加1
