#include<bits/stdc++.h>
using namespace std;
int main(){
	float Q;
	int N;
	while(cin>>Q>>N&&N!=0){
		int m;
		float sum = 0;
		for(int i=0;i<N;i++){
			cin>>m;
			char type;
			char s;
			float price;
			int flag = 1;
			float count = 0;
			float count_sum = 0;
			for(int j=0;j<m;j++){
				cin>>type>>s>>price;
				count_sum += price;
				if(type!='A'&&type!='B'&&type!='C'){
					flag = 0;//这张票不可加
					break; 
				}
				if(price>600){
					flag = 0;
					break;
				}
				if(count_sum>1000){
					flag = 0;
					break;
				}
				count += price;
			}
			if(flag==0){
				continue;
			}else if(flag==1){
				if(sum+count<=Q){
					sum += count;	
				}
			}
		}
		printf("%.2f\n",sum);
		//cout<<sum<<endl;
		
	}
	return 0;
}
