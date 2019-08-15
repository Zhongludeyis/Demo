#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,temp1,temp2;
	cin>>n;
	string number[n];
	string tag; 
	int num[n][2];
	for(i=0;i<n;i++){
		cin>>number[i]>>num[i][0]>>num[i][1]; 
	}
	//考虑月份： 
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i][0]>num[j][0]){
				//如果i>j 
				temp1 = num[i][0];
				num[i][0] = num[j][0];
				num[j][0] = temp1; 
				
				temp2 = num[i][1];
				num[i][1] = num[j][1];
				num[j][1] = temp2;
				
				tag = number[i];
				number[i] = number[j];
				number[j] = tag;
				
			}else if(num[i][0]==num[j][0]){
				
				if(num[i][1]>num[j][1]){
					//转换 
					temp1 = num[i][0];
					num[i][0] = num[j][0];
					num[j][0] = temp1; 
					
					temp2 = num[i][1];
					num[i][1] = num[j][1];
					num[j][1] = temp2;
				
					tag = number[i];
					number[i] = number[j];
					number[j] = tag;
				}
			}else{
				continue;
			}
		}
	}
		
	//输出：
	cout<<num[0][0]<<" "<<num[0][1]<<" "<<number[0];
	for(i=1;i<n;i++){
		if(num[i-1][0]==num[i][0]&&num[i-1][1]==num[i][1]){
			cout<<" "<<number[i];
		}else{
			cout<<endl;
			cout<<num[i][0]<<" "<<num[i][1]<<" "<<number[i];
		}
	}
	return 0;
}
