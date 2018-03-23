#pragma once
#include<string>

namespace Records {
	const int defaultSalary = 10000;
	
	
	class Employee {

	private:
		int salary;
		std::string firstName;
		std::string lastName;
		int emplNumber;
		bool isHired;

	
	public:
		//default ctor
		Employee();
		
		//getters-setters for salary
		int getSalary() const;
		void setSalary(int);

		//getters-setters for firstName
		const std::string & getFirstName() const;
		void setFirstName(const std::string&);
		
		//getters-setters for lastName
		const std::string & getLastName() const;
		void setLastName(const std::string&);

		//getters-setters for emplNumber
		int getEmpNumb() const;
		void setEmpNumb(int);

		//is hired or is not hired
		bool getHired() const;

		//Functionality functions
		void promote(int);
		void denote(int);
		void hire();
		void fire();
		void display() const;



	};

}