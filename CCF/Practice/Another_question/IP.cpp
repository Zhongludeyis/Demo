#include<bits/stdc++.h>
using namespace std;
int change(int x); 
int main(){
	unsigned int T,i;
	cin>>T; 
	int a,b,c,d;
	int num1,num2,num3,num4; 
	char dot1,dot2,dot3;
	for(i=0;i<T;i++){
//		getline(cin,a);
//		for(j=0;j<a.size();j++){		
//		}
		cin>>a>>dot1>>b>>dot2>>c>>dot3>>d;
		//µ÷ÓÃ³ÌÐò£º
		num1 = change(a);
		num2 = change(b);
		num3 = change(c);
		num4 = change(d);
		cout<<num1+num2+num3+num4<<endl;
	}
	return 0;
}
int change(int x){
	int i,j,num=0;
	int a[8]; 
	j = 0; 
	while(x){
		i = x%2;
		x = x/2;
		a[j] = i;
		j++;
	}
	for(i=0;i<j;i++){
		if(a[i]==1){
			num += 1;
		} 
	} 
	return num;
}

