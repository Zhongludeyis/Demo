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
		if(request[0]=='V'){//����Visit 
			b.push(URL);
			URL = request.substr(6);// �������� 
			cout<<URL<<endl;
			//ǰ���ջ���
			while(!f.empty()){
				f.pop();
			}
		}else if(request[0]=='B'){//���� 
			
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
//˼·��
//ѧϰ�ַ����ķ�����substr(); ���ַ�����ֵ���ӵ�n���Ժ�ֵ�� 
