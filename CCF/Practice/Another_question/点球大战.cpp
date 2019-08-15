#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	while((cin>>n)&&n!=0){
		cin.ignore();
		string a[n];
		for(i=0;i<n;i++){
			getline(cin,a[i]);
		}
		//创建两个数组：
		int x[(n+1)/2];
		int y[(n+1)/2];
		for(i=0;i<(n+1)/2;i++){
			x[i] = 2;
			y[i] = 2;
		}
		int num1 = 0;
		int num2 = 0;
		string::size_type position;
		for(i=0;i<n;i++){
			if(i%2==0){//第一队 
				position = a[i].find("no good");
				if(position==string::npos){//没找到no good; 
					x[num1++] = 1; 
				}else{
					x[num1++] = 0;
				}
			}else{//第二队 
				position = a[i].find("no good");
				if(position==string::npos){
					y[num2++] = 1; 
				}else{
					y[num2++] = 0;
				}
			}
		}
		//输出：
		for(i=0;i<num1;i++){
			cout<<i+1<<" ";
		}
		cout<<"Score"<<endl;
		int count1 = 0; 
		for(i=0;i<num1;i++){
			if(x[i]==0){
				cout<<"X"<<" ";
			}else if(x[i]==1){
				count1++;
				cout<<"O"<<" ";
			}
		}
		cout<<count1<<endl;
		int count2 = 0;
		for(i=0;i<num1;i++){
			if(y[i]==0){
				cout<<"X"<<" ";
			}else if(y[i]==1){
				count2++;
				cout<<"O"<<" ";
			}else if(y[i]==2){
				cout<<"-"<<" ";
			}
		}
		cout<<count2<<endl;	
	}
	return 0;	
}
//思路：
//string::size_type position
//string.find()
