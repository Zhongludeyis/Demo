#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int M1,M2,R1,R2,R3;
	unsigned int i;
	string code;

	while(scanf("%lld%lld",&M1,&M2)!=EOF){
		R1 = R2 = R3 = 0; 
		cin>>code;
		for(i=0;i<code.size();i++){
			if(code[i]=='A'){
				R1 = M1;
			}else if(code[i]=='B'){
				R2 = M2;
			}else if(code[i]=='C'){
				M1 = R3; 
			}else if(code[i]=='D'){
				M2 = R3; 
			}else if(code[i]=='E'){
				R3 = R1 + R2;
			}else if(code[i]=='F'){
				R3 = R1-R2; 
			}
		}	
s
		cout<<M1<<","<<M2<<endl;
	}
//	while(!(cin>>M1>>M2)){
//		R1 = R2 = R3 = 0; 
//		cin>>code;
//		for(i=0;i<code.size();i++){
//			if(code[i]=='A'){
//				R1 = M1;
//			}else if(code[i]=='B'){
//				R2 = M2;
//			}else if(code[i]=='C'){
//				M1 = R3; 
//			}else if(code[i]=='D'){
//				M2 = R3; 
//			}else if(code[i]=='E'){
//				R3 = R1 + R2;
//			}else if(code[i]=='F'){
//				R3 = R1-R2; 
//			}
//		}	
//
//		cout<<M1<<","<<M2<<endl;
//	}
	return 0;
	 
}
//思路：
//确保用EOF退出 
//对于两个输入的cin还是不好判断
//利用scanf()!=EOF  !!! 
