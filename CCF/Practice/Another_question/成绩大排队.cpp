#include<bits/stdc++.h>
using namespace std;
struct Student{
	char name[20];
	char num[20];
	int score;
};
int main(){
	int n,i;
	cin>>n; 
	//定义动态结构体数组 
	Student *stu;
	stu = (struct Student*)malloc(sizeof(struct Student)*n);
	string max_name,max_num,min_name,min_num,temp1,temp2;
	int max_score,min_score;
	for(i=0;i<n;i++){
		cin>>stu[i].name;
		cin>>stu[i].num;
		cin>>stu[i].score;
	}
	max_name = stu[0].name;
	max_num = stu[0].num;
	max_score = stu[0].score;
	min_name = stu[0].name;
	min_num = stu[0].num;
	min_score = stu[0].score;
	for(i=1;i<n;i++){
		if(max_score<stu[i].score){
			max_score = stu[i].score;
			max_name = stu[i].name;
			max_num = stu[i].num; 
		}
		if(min_score>stu[i].score){
			min_score = stu[i].score;
			min_name = stu[i].name;
			min_num = stu[i].num;
		}
	}
	cout<<max_name<<" "<<max_num<<endl;
	cout<<min_name<<" "<<min_num<<endl;
	return 0;
	//找到最大、最小成绩：
	
}
//思路：定义动态数组！！！ 
