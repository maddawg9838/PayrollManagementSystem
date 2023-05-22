#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void LogIn();
void ValidateLogIn();
void Employees();
void Add();
void Edit();
void Delete();
void Formation();

int main()
{

  
}

void Add()
{
    string addType;
    bool invalid;

    class Employee
    {
        public :
        int ID;
        string name, title, address, salaryType, comments;
        double salary;

    };

    Employee employee;

    cout << "Will you be entering a new employees information manually or through a file?" << endl;
    cin >> addType;

    if (addType == "manually")
    {
        cout << "Employee ID: ";
        cin >> employee.ID;
        cout << "Employee Name: ";
        cin >> employee.name;
        cout << "Employee Title: ";
        cin >> employee.title;
        cout << "Employee Address: ";
        cin >> employee.address;
        cout << "Is the employee's salary hourly or annually?" << endl;
        cin >> employee.salaryType;
        cout << "Employee Salary: ";
        cin >> employee.salary;
    }
    else if (addType == "file")
    {

    }
    else
    {
        invalid = true;
        while(invalid == true)
        {
            cout << "Please enter 'manually' or 'file' for the method of adding an employee. " << endl;
            cin >> addType;
        }
    }
}




