#include<bits/stdc++.h>
using namespace std;
int type(int year);
int main(){
	char week[7][10] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thurday","Friday"};
	int months[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int days,i,j,num;
	int weekday;
	while(cin>>days&&days!=-1){
		weekday = days%7;
		for(i=2000;days>=type(i);i++){
			days -= type(i);
		}
		if(i%4==0&&i%100!=0||i%400==0){
			num = 1;
		}else{
			num = 0;
		}
		for(j=0;days>=months[num][j];j++){
			days -= months[num][j];
		}
		//ֱ����printf
//		printf("%d-%0d-%0d %s",i,j+1,days+1,weekday);
		printf("%d-%02d-%02d %s\n",i,j+1,days+1,week[weekday]);
		//�жϺ���cout
	}	
//	for(i=2000;days>=0;i++){
//		days -= 
//	}
	
}
int type(int year){
	if(year%4==0&&year%100!=0||year%400==0){
		year = 366;
	}else{
		year = 365;
	}
	return year;
}
//
////����������week[][],months[][],year���жϣ�
////������forѭ�� 






//#include "stdio.h"
//char week[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
//int year[2]={365,366};
//int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
//int type(int m)
//{
//	//�жϵ�m���Ƿ�������,���򷵻�1,���򷵻�0
//	if (m % 4 != 0 || (m % 100 == 0 && m % 400 != 0))
//		return 0;
//	else return 1;
//}
// 
//int main(int argc, char const *argv[])
//{
//	int days,dayofweek;//days��ʾ���������,dayofweek��ʾ���ڼ�
//	int i = 0,j = 0;
//	while(scanf("%d",&days) && days != -1)
//	{
//		dayofweek = days % 7;
//		for(i = 2000;days >= year[type(i)]; i++)
//			days -= year[type(i)];
//		for(j = 0;days >= month[type(i)][j]; j++)
//			days -= month[type(i)][j];
//		printf("%d-%02d-%02d %s\n",i,j+1,days+1,week[dayofweek] );
//	}
//	return 0;
//}
