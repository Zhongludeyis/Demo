//#include<bits/stdc++.h>
//using namespace std;
//string weekend(int x);
//int main(){
//	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//	int a,i;
//	int year;
//	int count,days;
//	string weekday;
//	while(cin>>a){
//		if(a==-1){
//			break;
//		}
//		//星期几
//		weekday = weekend(a%7);
//		year = 2000;
//		//算年份： 
//		while(a>0){
//			
//			if(year%400==0||(year%100!=0&&year%4==0)){
//				days = 366;
//			}else{
//				days = 365;
//			}
//			a = a - days;
//			year += 1;
//		}
//		if(a==0){
//			year = year;
//		}else{
//			a = a + days;//不到365 加回来
//			year -= 1;
//		}
//		//算月份：
//		i = 0;
//		while(a>0){
//			if(year%400==0||(year%100!=0&&year%4==0)){
//				months[1] = 29; 
//			}else{
//				months[1] = 28;
//			}
//			a = a - months[i];
//			i +=1;
//		}
//		//天数 
//		if(a==0){
//			i = i+1;
//			a = 1;//第一天 
//		}else{
//			a += months[i-1]+1;//不到那个月份结束，加回来
////			cout<<a<<endl;
//		}
//		cout<<year<<"-";
//		if(i>9){
//			cout<<i<<"-";
//		}else{
//			cout<<"0"<<i<<"-";
//		}
//		if(a>9){
//			cout<<a<<" ";
//		}else{
//			cout<<"0"<<a<<" ";
//		}
//		cout<<weekday<<endl;	
//	}
//	return 0;
//}
//string weekend(int x){
//	string a;
//	if(x==1){
//		a = "Sunday";
//	}else if(x==2){
//		a = "Monday";
//	}else if(x==3){
//		a = "Tuesday";
//	}else if(x==4){
//		a = "Wednesday";
//	}else if(x==5){
//		a = "Thurday";
//	}else if(x==6){
//		a = "Friday";
//	}else{
//		a = "Saturday";
//	}
//	return a;
//}
//
//
//
//
//

