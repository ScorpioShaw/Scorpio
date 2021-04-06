# include <bits/stdc++.h>
using namespace std ;
class Student
{
	public :
		void print ()
		{
			cout << "姓名：" << name << "\t" << "学号：" << card << "\t" << "个人成绩：" << grade << "\t" << "团队成绩：" << t_grade << endl ;		
		}
		
	
		string name ;
		int card ;
		int grade ;
		int t_grade ; 
} ;
class array
{
    public :
	void max_to_min ()
	{
		int stand_g, stand_c ;
		string stand_n ;
		for (int a = 0; a <= 4-2; a++)
		for (int b = a+1; b <= 4-1; b++)
		{
			if (stu[a].grade < stu[b].grade)
			{
				stand_g = stu[a].grade ;
				stu[a].grade = stu[b].grade ;
				stu[b].grade = stand_g ;
				
				stand_n = stu[a].name ;
				stu[a].name = stu[b].name ;
				stu[b].name = stand_n ;
				
				stand_c = stu[a].card ;
				stu[a].card = stu[b].card ;
				stu[b].card = stand_c ;
			}
			if (stu[a].grade == stu[b].grade)
			{
				if (stu[a].card <= stu[b].card)
				{
					stand_g = stu[a].grade ;
				    stu[a].grade = stu[b].grade ;
			      	stu[b].grade = stand_g ;
				
				    stand_n = stu[a].name ;
				    stu[a].name = stu[b].name ;
				    stu[b].name = stand_n ;
				
				    stand_c = stu[a].card ;
			    	stu[a].card = stu[b].card ;
			    	stu[b].card = stand_c ;
				}
			}
		}
	}
	Student stu[4] ;	
} ;

int main ()
{
	while (1)
	{
		array arr ;
		
		 
		cout << "请依次输入4名学生姓名，学号，个人成绩，团队成绩（团队成绩应相同）" << endl ;
		for (int i = 0; i < 4; i++)
		{
			cin >> arr.stu[i].name >> arr.stu[i].card >> arr.stu[i].grade >> arr.stu[i].t_grade ;
		}
		
		arr.max_to_min() ;
		for (int i = 0; i < 4; i++)
		arr.stu[i].print() ;
		
		system ("pause") ;
		
		cout << "\ncycle\n" ;
	}
	
	return 0 ;
 } 

