#include<bits/stdc++.h>
using namespace std;
int atoi(string s)  
{  
    int i;  
    int n = 0;  
    for (i = 1; s[i] >= '0' && s[i] <= '9'; ++i)  
    {  
        n = 10 * n + (s[i] - '0');  
    }  
    return n;  
} 
int main(){
	long long int N,A,B,C;
	unsigned int i; 
	while(scanf("%lld%lld%lld%lld",&N,&A,&B,&C)!=EOF){
		string s[N];
		for(i=0;i<N;i++){
			cin>>s[i];
		}
		//标记L和Y的位置：
		int location1 = 0,location2 = 0; 
		//开始走
		while(1){//直到跳出循环
			//L先走:
			C = (A*C+B)%6+1;
			//现在判断是否超过N-1或到达N-1格；
			if((location1+C)==N-1){//Lele赢 
				cout<<"Lele"<<endl;
				break;
			}else if((location1+C)>N-1){//超过终点返回 
				location1 = N-1-(location1+C-(N-1));
				while(s[location1]!="N"){//继续跳 
					location1 = atoi(s[location1]);//取G后面的位数,并转化为整数 	
				}
			}else if((location1+C)<N-1){//未超过终点 
				location1 +=C;
				while(s[location1]!="N"){
					//继续跳
					location1 = atoi(s[location1]);//取G后面的位数,并转化为整数
				}
			}
			//Y后走:
			C = (A*C+B)%6+1;
			if((location2+C)==N-1){//Lele赢 
				cout<<"Yueyue"<<endl;
				break;
			}else if((location2+C)>N-1){//超过终点返回 
				location2 = N-1-(location2+C-(N-1));
				while(s[location2]!="N"){//继续跳 
					location2 = atoi(s[location2]);//取G后面的位数,并转化为整数 	 
				}
			}else if((location2+C)<N-1){//未超过终点 
				location2 +=C;
				while(s[location2]!="N"){
					//继续跳
					location2 = atoi(s[location2]);//取G后面的位数,并转化为整数
				}
				
			}
		}
	}
	return 0;
}
//思路：判断GX：将字符串转化为整型的问题atoi()方法记住！！！; 
//while(....!=EOF)的使用;
