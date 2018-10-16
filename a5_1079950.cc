 #include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
		struct student{
		string ID;
		string Name;
		string gender;
		int age;
		double score;
		char grade;
	}s[5];
	
	
	double total_scores=0;
	int total_age=0;
	int count_male;
	int count_female;
	double average_score=0;
	double average_age=0;
	int num_students;
	num_students=5;
	double my_score;
	
	
	for(int i=0; i<5; i++)
	{
		cout<<"Please enter your ID :";
		cin>>s[i].ID;
		cout<<"\n Enter your Name :";
		cin>>s[i].Name;
		cout<<"\n Enter your age :";
		cin>>s[i].age;
		cout<<"\n Enter your gender :";
		cin>>s[i].gender;
		cout<<"Enter your score :";
		cin>>s[i].score;
		if(s[i].score>80&&s[i].score<=100)
		{
			s[i].grade='A';
		}
		else if(s[i].score='B')
		
		return 0;
}
}
