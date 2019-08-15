#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	//输入字符串(带有空格) 
	getline(cin,a);
	int i,num;
	int b[10];
	//初始化数字：各个数出现次数的记录 
	for(i=0;i<10;i++){
		b[i] = 0;
	}
	//判断每个字符 
	for(i=0;i<a.size();i++){
		//转化成数字num 
		num = a[i]-'0';
		//判断 
		if(num==0){
			cout<<"(Zero)";
			b[num] +=1;
		}else if(num==1){
			cout<<"(One)";
			b[num] +=1;		
		}else if(num==2){
			cout<<"(Two)";
			b[num] +=1;
		}else if(num==3){
			cout<<"(Three)";
			b[num] +=1;
		}else if(num==4){
			cout<<"(Four)";
			b[num] +=1;
		}else if(num==5){
			cout<<"(Five)";
			b[num] +=1;
		}else if(num==6){
			cout<<"(Six)";
			b[num] +=1;
		}else if(num==7){
			cout<<"(Seven)";
			b[num] +=1;
		}else if(num==8){
			cout<<"(Eight)";
			b[num] +=1;
		}else if(num==9){
			cout<<"(Nine)";
			b[num] +=1;
		}else{
			cout<<a[i];
		}
	}
	cout<<endl;
	for(i=0;i<10;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

//思路：
//带空格的字符串输入方法：关键 
//getline(cin,a) 或是 cin.get(a,个数) cin.getline(a,个数)  
//cin的string遇到" "或"\n"就返回
//1.输入字符串
//2. 初始化数字：各个数出现次数的记录 
//3.判断每个字符 
