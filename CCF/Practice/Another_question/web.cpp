#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<string>f;
	stack<string>b;
	string request;
	unsigned int i,j;
	string URL = "http://www.game.org/";
	do{
		getline(cin,request);
		if(request[0]=='V'){//请求Visit 
			b.push(URL);
			URL = request.substr(6);// ！！！！ 
			cout<<URL<<endl;
			//前向堆栈清空
			while(!f.empty()){
				f.pop();
			}
		}else if(request[0]=='B'){//后退 
			
			if(b.empty()){
				cout<<"Ignored"<<endl;
			}else{
				f.push(URL);
				URL = b.top();
				b.pop();
				cout<<URL<<endl;
			}
			
		}else if(request[0]=='F'){
			
			if(f.empty()){
				cout<<"Ignored"<<endl; 
			}else{
				b.push(URL);
				URL = f.top();
				f.pop();
				cout<<URL<<endl;
			}
		}
	}while(request[0]!='Q');
	
	return 0;
}
//思路：
//学习字符串的方法：substr(); 子字符串赋值：从第n个以后赋值。 
