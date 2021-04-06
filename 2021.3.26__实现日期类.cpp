# include <bits/stdc++.h>
using namespace std ;
int fullYearsTo (int byear, int bmonth, int bday, int nyear, int nmonth, int nday) ;
int daysTo (int byear, int bmonth, int bday, int nyear, int nmonth, int nday) ;
class Date
{
	public :
		void setDate (int y, int m, int d)
		{
			year = y ;
			if (m < 1 || m > 12)
			m = 1 ;
			month = m ;
			day = d ; 
		}
		void setDay (int d) // 检查day的值是否合理 
		{
			if ((year%4==0&&year%100!=0)||year%400==0) // 判断参数年是否为闰年 
			{
				if (month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)
				{
				    if (day < 1||day > 31)
				    day = 1 ;
				}
				if (month == 4||month == 6||month == 9||month == 11)
				{
					if (day < 1||day > 30)
					day = 1 ;
				} 
				if (month == 2)
				{
					if (day < 1||day > 29)
					day = 1 ;
				}
			} 
			else
			{
				if (month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)
				{
				    if (day < 1||day > 31)
				    day = 1 ;
				}
				if (month == 4||month == 6||month == 9||month == 11)
				{
					if (day < 1||day > 30)
					day = 1 ;
				} 
				if (month == 2)
				{
					if (day < 1||day > 28)
					day = 1 ;
				}
			}
		}
		void printFullYear () // 打印 YYYY-MM-DD 
		{
			if (month < 10)
			cout << year <<"-0" << month << "-" << day << endl ;
			if (day < 10)
			cout << year <<"-" << month << "-0" << day << endl ;
			if (month < 10 && day < 10)
			cout << year <<"-0" << month << "-0" << day << endl ;
			if (month > 10 && day > 10)
			cout << year <<"-" << month << "-" << day << endl ;
		}
		void printStandardYear () // 打印 YY-MM-DD 
		{
		    if (month < 10)
			cout << year%100 <<"-0" << month << "-" << day << endl ;
			if (day < 10)
			cout << year%100 <<"-" << month << "-0" << day << endl ;
			if (month < 10 && day < 10)
			cout << year%100 <<"-0" << month << "-0" << day << endl ;
			if (month > 10 && day > 10)
			cout << year%100 <<"-" << month << "-" << day << endl ;
		} 
	
		int year ;
		int month ;
		int day ;	
} ; 
int main ()
{
	while (1)
	{
		Date birthDate ;
		Date now ;
		
		int by, bm, bd, y, m, d ;
		cout << "请输入出生日期（可假定），年月日用空格隔开：" << endl ; 
		cin >> by >> bm >> bd ;
		birthDate.setDate (by, bm, bd) ;
		birthDate.setDay (bd) ;
		birthDate.printFullYear () ;
		birthDate.printStandardYear () ;
		
		cout << "请输入当前日期（可假定），年月日用空格隔开：" << endl ;
		cin >> y >> m >> d ;
		now.setDate (y, m, d) ;
		now.setDay (d) ;
	    now.printFullYear () ;
	    now.printStandardYear () ;
		
		cout << fullYearsTo (birthDate.year, birthDate.month, birthDate.day, now.year, now.month, now.day) << "年" << endl ;
		cout << daysTo (birthDate.year, birthDate.month, birthDate.day, now.year, now.month, now.day) << "天" << endl ;  
		system ("pause") ;
		system ("cls") ;
		 
		cout << "\ncycle\n" ;
	}
	return 0 ;
}
// 计算年 
int fullYearsTo (int byear, int bmonth, int bday, int nyear, int nmonth, int nday)
		{
			if (nmonth >= bmonth)
			return nyear - byear ;
			else
			return nyear - 1 - byear ;
		} 

// 计算天 
int daysTo (int byear, int bmonth, int bday, int nyear, int nmonth, int nday)
	{
		int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0 ;
		for (int i = 1; i < bmonth; i++)
			{
				if (bmonth == 1||bmonth == 3||bmonth == 5||bmonth == 7||bmonth == 8||bmonth == 10||bmonth == 12)
				sum1 += 31 ;
				if (bmonth == 4||bmonth == 6||bmonth == 9||bmonth == 11)
				sum1 += 30 ;
				if (bmonth == 2)
				sum1 += 28 ;
			}
		if ((byear%4==0&&byear%100!=0)||byear%400==0)
		{
			sum1++ ;
		}
		for (int i = 1; i < nmonth; i++)
			{
				if (nmonth == 1||nmonth == 3||nmonth == 5||nmonth == 7||nmonth == 8||nmonth == 10||nmonth == 12)
				sum2 += 31 ;
				if (nmonth == 4||nmonth == 6||nmonth == 9||nmonth == 11)
				sum2 += 30 ;
				if (nmonth == 2)
				sum2 += 28 ;
			}
		if ((nyear%4==0&&nyear%100!=0)||nyear%400==0)
		{
			sum2++ ;
		}
		for (int a = byear; a <= nyear; a++)
		{
			if ((a%4==0&&a%100!=0)||a%400==0)
			sum3 += 366 ;
			else
		    sum3 += 365 ;
		}
		sum = sum3 + sum2 - sum1 ;
		return sum ;
	}
