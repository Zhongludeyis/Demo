#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k,num2;
	int up;//进位的数
	string a;
	cin>>a;
	n = a.size();
	string b[n];	
	char ch;
	int flag = 0;
	for(i=1;i<=n;i++)
	{	
		up = 0; 
		for(j=n-1;j>=0;j--){
			//先相乘，再进位
			up += (a[j]-'0')*i;
			if(j==0){
				if(up>10) {
					cout<<"No"<<endl; 
					flag = 1; 
					break;
				}
			}
			if(up>=10){
				//分成两位：
				up = up/10;//十位数字 
				num2 = up%10;//个位 
				ch = num2 + '0';
				b[i][j] = ch;
			}else{
				ch = num2 +'0'; 
				b[i][j] = ch;
			}
		}
		if(flag==0){
			//判断是否可旋转得到：
			//找到第一个：
			for(j=0;j<n;j++){
				if(b[0]==a[j]){
					a = j;
				}
			}
			for()
			
		}
	
		
	}
	return 0;
}
