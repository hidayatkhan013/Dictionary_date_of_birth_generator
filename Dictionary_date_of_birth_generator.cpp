#include <fstream>
#include <iostream>
#include <string> 
using namespace std;

int main()
{

	int days, months, years;
	ofstream outfile;
	int start_y, end_y;
	cout << "Enter start year : ";
	cin >> start_y;
	cout << "\nEnter End year : ";
	cin >> end_y;
	outfile.open(("Dictionary.txt"));
	for (years = start_y; years <= end_y; years++)
	{
		for (months = 1; months <= 12; months++)
		{
			for (days = 01; days <= 31; days++)
			{

				if (months == 2 && years % 4 == 0 && days > 29)
				{
					break;
				}
				else if (months == 2 && years % 4 != 0 && days > 28)
				{
					break;
				}
				else if (months == 4 && days > 30)
				{
					break;
				}
				else if (months == 6 && days > 30)
				{
					break;
				}
				else if (months == 9 && days > 30)
				{
					break;
				}
				else if (months == 11 && days > 30)
				{
					break;
				}

				cout << days << "-" << months << "-" << years << endl;
				outfile << days << "-" << months << "-" << years << endl;
			}
		}
	}

	outfile.close();

	return 0;
}
