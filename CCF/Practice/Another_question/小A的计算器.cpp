#include<bits/stdc++.h>
using namespace std;
//char change(int bang);
int main(){
	int N,i,k;
	int num1;
	int num2;
	int mul1; 
	int mul2; 
	int sum;
	int left;
	string s1,s2;
	cin>>N;
	for(i=0;i<N;i++){
		cin>>s1;
		cin>>s2; 
		num1 = 0;
		num2 = 0;
		mul1 = 1; 
		mul2 = 1; 
		sum = 0;
		for(int j=s1.size()-1;j>=0;j--){
			num1 += (s1[j]-'a')*mul1;
			mul1 = mul1*26;
		}
		for(int j=s2.size()-1;j>=0;j--){
			num2 += (s2[j]-'a')*mul2; 
			mul2 *= 26;
		}
		sum = num1 + num2;
		//转化成26进制：
		char a;
		k = 0;
		char b[10];
		while(sum){
			left = sum%26;
			sum = sum/26;
			a = left +'a';
			b[k++] = a;
			
		}
//		char c[k];
//		for(int j=0;j<strlen(b)-1;j++){
//			c[j] = b[k];
//		}
		for(int j=k-1;j>=0;j--){
			cout<<b[j];
		}
		cout<<endl;
	}		
}

//思路: 当出现换行符会出问题时，转换成scanf输入(cin亦可)
//某一进制转十进制----十进制转某一进制！！！ 
