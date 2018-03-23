#include"Database.h"

namespace Records{
	
	Database::Database() :nextDatabEmplNumb(firstEmplNumb)
	{
	
	}
	Employee& Database::createEmployee(const std::string& firstName, const std::string& lastName)
	{
		Employee emp;
		emp.setFirstName(firstName);
		emp.setLastName(lastName);
		emp.hire();
		emp.setEmpNumb(nextDatabEmplNumb++);
		mEmployees.push_back(emp);
		return mEmployees[mEmployees.size() - 1];
	}
	Employee& Database::getEmployee(const std::string& firstName, const std::string& lastName)
	{
		for (auto & empl : mEmployees) {
			if ((empl.getFirstName() == firstName) && (empl.getLastName() == lastName))
			{
				return empl;
			}
		}throw runtime_error("No Employee found!");
	}
	Employee& Database::getEmployee(int idIn) 
	{
		for (auto & empl : mEmployees) {
			if (empl.getEmpNumb() == idIn)
			{
				return empl;
			}
		}throw runtime_error("No Employee found!");
	}

	void Database::displayAll() const
	{
		for (auto & empl : mEmployees) 
		{
			empl.display();
		
		}
	}
	void Database::displayCurrent() const
	{
		for (auto & empl : mEmployees)
		{if(empl.getHired()==true)
			empl.display();

		}
	}
	void Database::displayFired() const
	{
		for (auto & empl : mEmployees)
		{
			if (empl.getHired() == false)
				empl.display();

		}
	}

}