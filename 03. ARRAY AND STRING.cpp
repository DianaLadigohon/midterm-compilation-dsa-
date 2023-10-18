#include <iostream>
using namespace std;

void page();
string names[5];
		string age[5];
		string address[5];
		string gender[5];
int main()
{
	page();
}
void page()
{

	system("cls");
	int choose;
   		cout << "Menu\n\n";
   		cout << "-----------------------------\n";
   		cout << "Options\n";
        cout << "*************************\n";
		cout << "[1] Insert\n";
		cout << "*************************\n";
		cout << "[2] Display\n";
		cout << "*************************\n";
		cout << "[3] Exit\n";
	
	    cout << "Enter your choice: ";
	    cin >> choose;
	    
	    switch(choose)
	    {
	    	case 1:
	    		system("cls");
	
		int i;
		for (i=0; i < 5; i++)
			{
			cout << "Enter Name: ";
			cin>> names[i];
			cout << "Enter Age: ";
			cin>> age[i];
			cout << "Enter Address: ";
			cin>> address[i];
			cout << "Enter Gender: ";
			cin>> gender[i];
			cout <<endl;
			}
			system("pause");
			system ("cls");
			page();
	    		
	    		break;
	    	case 2:
	    		system("cls");
	    		int choice;
				cout << "Enter Index: {0,1,2,3,4} " ;
				cin >> choice;
	
				switch (choice)
				{
		
		case 0:
			{

				cout << "Name: " << names[0] << endl;
				cout << "Age: " << age[0] << endl;
				cout << "Address: " << address[0] << endl;
				cout << "Gender: " << gender[0] << endl;
				break;
		case 1:
			{
				
				cout << "Name: " << names[1] << endl;
				cout << "Age: " << age[1] << endl;
				cout << "Address: " << address[1] << endl;
				cout << "Gender: " << gender[1] << endl;
				break;
			
		case 2:
			{
				
				cout << "Name: " << names[2] << endl;
				cout << "Age: " << age[2] << endl;
				cout << "Address: " << address[2] << endl;
				cout << "Gender: " << gender[2] << endl;
				break;
		case 3:
			{
			
				cout << "Name: " << names[3] << endl;
				cout << "Age: " << age[3] << endl;
				cout << "Address: " << address[3] << endl;
				cout << "Gender: " << gender[3] << endl;
				break;
		
		case 4:
			{
		
				cout << "Name: " << names[4] << endl;
				cout << "Age: " << age[4] << endl;
				cout << "Address: " << address[4] << endl;
				cout << "Gender: " << gender[4] << endl;
				break;
	
						
	
}
					
				}
				   
				    	
			}
		}
	}
}
}
}




