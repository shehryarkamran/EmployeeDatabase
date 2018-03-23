#pragma once
#include"Employee.h"
#include<iostream>
namespace Records {
	
	Employee::Employee():salary(defaultSalary),
						firstName(""),
						lastName(""),
						emplNumber(-1),
						isHired(false){}
	void Employee::promote(int salIncr) 
	{
		salary += salIncr;
	}

	void Employee::denote(int salDecr) 
	{
		salary -= salDecr;
	}

	void Employee::display() const {
	
		std::cout << "Employee: " << getFirstName() << " " << getLastName() << std::endl;
		std::cout << "Salary: " << salary << std::endl;
		std::cout << "Employee number: " << emplNumber << std::endl;
		std::cout << "Current status: " << (isHired ? "Is hired" : "is not hired") << std::endl;
		}

	void Employee::fire() { isHired = false; }

	void Employee::hire() { isHired = true; }

	int Employee::getSalary() const 
	{
		return salary;
	}
	void Employee::setSalary(int salIn) 
	{
		salary = salIn;
	}

	const std::string& Employee::getFirstName() const
	{
		return firstName;
	}
	void Employee::setFirstName(const std::string& nameIn)
	{
		firstName = nameIn;
	}

	const std::string & Employee::getLastName() const
	{
		return lastName;
	}
	void Employee::setLastName(const std::string& nameIn)
	{
		lastName = nameIn;
	}

	int Employee::getEmpNumb() const
	{
		return emplNumber;
	}
	void Employee::setEmpNumb(int numIn)
	{
		emplNumber = numIn;
	}

	bool Employee::getHired() const { return isHired; }
}