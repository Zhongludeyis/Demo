#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,i,j,temp1;
	cin>>N;
	char a,b,temp2;
	char m[3] = {'B','C','J'};
	char n[3] = {'B','C','J'};
	int jia[3],yi[3];//统计各种出的次数:B C J
	int count[3];
	for(i=0;i<3;i++){
		count[i] = 0;
		jia[2] = 0;
		yi[2] = 0;
	}
	
	//统计各自赢的次数：
	for(i=0;i<N;i++){
		cin>>a>>b;
		if((a=='C'&&b=='J')||(a=='B'&&b=='C')||(a=='J'&&b=='B')){//a赢 
			count[0] += 1;
			if(a=='C'){
				jia[1] += 1;
			}else if(a=='B'){
				jia[0] += 1;
			}else if(a=='J'){
				jia[2] += 1;
			}
		}else if((a=='J'&&b=='J')||(a=='B'&&b=='B')||(a=='C'&&b=='C')){//平 
			count[1] += 1;
		}else if((a=='J'&&b=='C')||(a=='C'&&b=='B')||(a=='B'&&b=='J')){//a负 
			count[2] += 1;
			if(b=='C'){
				yi[1] += 1;
			}else if(b=='B'){
				yi[0] += 1;
			}else if(b=='J'){
				yi[2] += 1;
			}
		}
		
	}
	//找jia中最大的数：
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(jia[i]<jia[j]){
				temp1 = jia[i];
				jia[i] = jia[j];
				jia[j] = temp1;
				temp2 = m[i];
				m[i] = m[j];
				m[j] = temp2;
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(jia[i]<yi[j]){
				temp1 = yi[i];
				yi[i] = yi[j];
				yi[j] = temp1;
				temp2 = n[i];
				n[i] = n[j];
				n[j] = temp2;
			}
		}
	}
	for(i=0;i<3;i++){
		cout<<count[i]<<" ";
	}
	cout<<endl;
	for(i=2;i>=0;i--){
		cout<<count[i]<<" ";
	}
	cout<<endl;
	cout<<m[0]<<' '<<n[0];
	return 0;
}
