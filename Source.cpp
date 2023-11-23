#include<iostream>
#include<string>
using namespace std;
int main()
{
	float salary;
	float increament, bonus;
	cout << " salary system \n";
	cout << "\n Enter your salary :$";
	cin >> salary;

	int rating;
	cout << "\nEnter your ratings out of 10 :";
	cin >> rating;

	increament = salary * .05;
	bonus = salary * .02;

	int start_year = 1;
	int user_years;
	cout << "\nEnter number of years for which you want the increamented salary :";
	cin >> user_years;

	while (start_year<= user_years)
	{
	    salary = salary + increament;
     
		if (rating >= 7)
		{
	    salary = salary + bonus;
		
		}

		cout << "\nsalary after "<<start_year<<"years  is  :$" << salary << endl;
		start_year++;
	}


	return 0;

}