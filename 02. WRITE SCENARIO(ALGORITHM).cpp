#include<iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void page();
void doty();
void diana();
int main()
{
	page();
}
void page()
{
	int choose;
   		cout << "\t\t\t Data Structure and Algorithm\n\n";
   		cout << "\t\t\t-----------------------------\n";
   		cout << "\t\t\tOptions\n\n";
        cout << "\t\t\t *************************\n\n";
		cout << "\t\t\t [1] Sedorifa's Scenario'\n\n";
		cout << "\t\t\t *************************\n\n";
		cout << "\t\t\t [2] Ladigohon's Scenario'\n\n";
		cout << "\t\t\t *************************\n\n";
		cout << "\t\t\t [3] Exit\n\n";
		cout << "\t\t\t *************************\n";
	    cout << "Enter your choice: ";
	    cin >> choose;
	    
	    switch(choose)
	    {
	    	case 1:
	    		{
	    			doty();
	    			break;
				}
			case 2:
				{
					diana();
	    			break;
				}
				
			case 3:
				{
					system("cls");
					cout << "\n \t\t\tSedorifa, Dorothy P. \n";
					cout << "\t\t\tLadigohon, Diana Rose R. \n";
	    			break;
				}
			default:
				{
					system ("cls");
					cout << "Invalid input" <<endl;
					page();
				}
			
		}
}
void doty()
{
	system("cls");
	string a,b,c,d,e;
	int age;
	int lev;
	cout << "Suppose, you were in a scenario where you ask a user about her personal data. \nIt will be needed in the Portfolio which is your final project. " <<endl;
	cout << "\t\t\t\t *       PERSONAL DATA SHEET         *" << endl;
	cout << "Name:";
	cin >> a;
	cout << "\Age: ";
	cin>> age;
	cout << "Gender:";
	cin >> b;
	cout << "Address: ";
	cin>> c;
	cout << "Year Level:";
	cin>> lev;
	cout << "Course:";
	cin>> d;
	cout << "School: ";
	cin >> e;
	system("cls");
	
	cout << "\t\t\t\t *       PERSONAL DATA SHEET         *" << endl;
	cout << "Name: " << a <<endl;
	cout << "Age: " << age <<endl;;
	cout << "Gender: " << b <<endl;;
	cout << "Address: " << c <<endl;;
	cout << "Year Level: " << lev <<endl;;
	cout << "Course: " << d <<endl;;
	cout << "School: " << e <<endl;;
	system("pause");
	system ("cls");
	page();
}
void diana()
{
	system("cls");
	cout << "You are wondering how much money you spend a day. So, to find out how much you spend today,\nyou calculated it in order to find out how much the expenses is. " << endl;
	int a,b;

	int i, Num_arr[50], sum, num;
	
	cout<< "Enter how many things you bought today: ";
	cin >> num;
	
	cout<< "Enter amount of each things you bought: " <<endl;

	for (i=0; i < num; i++)
	{
		cin>> Num_arr[i];
	}
	
	sum=0;
	for (i=0; i < num; i++)
	{
		sum=sum + Num_arr[i];
	}
	
	cout << "\nTotal amount: " << sum <<endl;
	cout << "So you spend " << sum << " everyday !";
	
	system("pause");
	system ("cls");
	page();
}























