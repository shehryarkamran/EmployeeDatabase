
#include<iostream>
#include"Database.h"

int menu();
void hire(Records::Database &db);
void fire(Records::Database &db);
void promote(Records::Database &db);
void denote(Records::Database &db);


int main() {
	Records::Database emplDatabase;


	
	
	bool exit = false;

	while (!exit) {
		int selection = menu();
			switch (selection) {
				case 1:
					hire(emplDatabase);
					break;
				case 2:
					fire(emplDatabase);
					break;
				case 3:
					promote(emplDatabase);
					break;
				case 4:
					denote(emplDatabase);
					break;
				case 5:
					emplDatabase.displayAll();
					break;
				case 6:
					emplDatabase.displayCurrent();
				case 7:
					emplDatabase.displayFired();
				case 0:
					exit = true;
				default:
					cerr << "Wrong input, terminating!";
			}
	}


	std::cin.get();
	return 0;
}


int menu()

{
	int selection;
	std::cout << "Database for employees " << endl;
	std::cout << " --------------------- " << endl;
	std::cout << "Press 1 to hire an employee " << endl;
	std::cout << "Press 2 to fire an employee " << endl;
	std::cout << "Press 3 to promote an employee " << endl;
	std::cout << "Press 4 to denote an employee " << endl;
	std::cout << "Press 5 to list all employees " << endl;
	std::cout << "Press 6 to list current employees " << endl;
	std::cout << "Press 7 to list former employees " << endl;
	std::cout << "Press 0 to exit current session " << endl;
	std::cout << endl;
	std::cout << "-----> ";
	std::cin >> selection;
	return selection;
}

void hire(Records::Database &db) 

{
	string firstName;
	string lastName;
	int salary;
	cout << "please provide first name for employee " << endl;
	cin >> firstName;
	cout << "please provide last name for employee " << endl;
	cin >> lastName;
	db.createEmployee(firstName, lastName);


}

void fire(Records::Database &db)
{
	int emplNum;
	cout << "Please provide employee number " << endl;
	cin >> emplNum;
	Records::Employee& empl = db.getEmployee(emplNum);
	empl.fire();
	cout << "employee terminated" << endl;
}

void promote(Records::Database &db)
{
	int emplNum;
	int amount;
	cout << "Please provide employee number " << endl;
	cin >> emplNum;
	Records::Employee& empl = db.getEmployee(emplNum);
	cout << "Please provide amount of promotion  " << endl;
	cin >> amount;
	empl.promote(amount);
	cout << "employee promoted" << endl;
}

void denote(Records::Database &db) 
{
	int emplNum;
	int amount;
	cout << "Please provide employee number " << endl;
	cin >> emplNum;
	Records::Employee& empl = db.getEmployee(emplNum);
	cout << "Please provide amount of promotion  " << endl;
	cin >> amount;
	empl.denote(amount);
	cout << "employee denoted" << endl;
}