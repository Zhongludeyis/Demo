#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	unsigned int i;
//	while(cin>>a){
//		stack<char> s1;
//		int num1 = 0;
//		for(i=0;i<a.length();i++){
//			if(s1.empty()){//ջΪ�գ���ջ 
//				s1.push(a[i]);
//				num1++;
//				continue;
//			}
//			if(s1.top()=='('&&a[i]==')'){
//				s1.pop();
//				num1--;
//			}else if(a[i]=='('){
//				s1.push(a[i]);
//				num1++;
//			}else if(a[i]=='B'){//�������B
//				break;
//			}
//		}
//		cout<<num1<<endl;
//	}

	while(cin>>a){
		int k= 0;
		for(i=0;i<a.size();i++){
			if(a[i]=='('){
				k++;
			}else if(a[i]==')'){
				k--;
			}else if(a[i]=='B'){
				break;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}

//˼·: ���Ϊint��while(cin>>a&&a!=EOF);���Ϊstring��while(cin>>a).
