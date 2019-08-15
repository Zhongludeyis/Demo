#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//enum weekday{sunday=7,monday=1,tuesday=2,wednesday=3,thurday=4,friday=5,saturday=6 
//}; 
//int getNum(std::string a);
int main(){

	int i,j,T;
	cin>>T;
	int m,n,count;
	int num,c;
	int x,y;
	for(i=0;i<T;i++){
		string a[4];
		num = 0;
		count = 0;
		m = 0;
		n = 0;
		for(j=0;j<4;j++){
			cin>>a[j];
		}
//		m = getNum(a[0]);
//		n = getNum(a[1]);
		if(a[0] == "sunday"){
			m = 7;
		}else if(a[0]=="saturday"){
			m = 6;
		}else if(a[0]=="friday"){
			m = 5;
		}else if(a[0]=="turday"){
			m = 4;
		}else if(a[0]=="wednesday"){
			m = 3;
		}else if(a[0]=="tuesday"){
			m = 2;
		}else if(a[0]=="monday"){
			m = 1;
		}
		if(a[1] == "sunday"){
			n = 7;
		}else if(a[1]=="saturday"){
			n = 6;
		}else if(a[1]=="friday"){
			n = 5;
		}else if(a[1]=="turday"){
			n = 4;
		}else if(a[1]=="wednesday"){
			n = 3;
		}else if(a[1]=="tuesday"){
			n = 2;
		}else if(a[1]=="monday"){
			n = 1;
		}
		if(n>=m){
			count = n-m+1; 
		}else{
			count = 7-m+n+1; 
		}
		//int和string的转化：记住(转化得分开用，不能用同一个变量来多次转化) 
		stringstream ss,aa;
 		ss<<a[2];
		ss>>x;
		aa<<a[3];
		aa>>y;
		for(j=x;j<=y;j++){
			if(j%7==count){
				num += 1;
				c = j;
			}
		}
		if(num==0){
			cout<<"impossible"<<endl;
		}else if(num==1){
			cout<<c<<endl;
		}else{
			cout<<"many"<<endl;
		}
	}
	return 0;
}

//int getNum(std::string a){
//	int m;
//	if(a == "sunday"){
//		m = 7;
//	}else if(a=="saturday"){
//		m = 6;
//	}else if(a=="friday"){
//		m = 5;
//	}else if(a=="turday"){
//		m = 4;
//	}else if(a=="wednesday"){
//		m = 3;
//	}else if(a=="tuesday"){
//		m = 2;
//	}else if(a=="monday"){
//		m = 1;
//	}
//	return m;
//}


//思路
//首先观察输入数据的形式：每个数据之间都有空格，利用字符串数组 
//字符串转int：#include<sstream>  stringstream ss;
//其他遍历判断可能的天数 
