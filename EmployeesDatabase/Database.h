#pragma once
#include<vector>
#include"Employee.h"
using namespace std;
namespace Records {
	const int firstEmplNumb = 1000;
	
	
	class Database {
private:
	vector<Employee> mEmployees;
	int nextDatabEmplNumb;

	public:
	Database();
	Employee& createEmployee(const std::string&,const std::string&);
	Employee& getEmployee(const std::string&, const std::string&);
	Employee& getEmployee(int);

	void displayAll() const;
	void displayCurrent() const;
	void displayFired() const;



	};


}
