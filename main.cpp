#include <iostream>
#include <fstream>
#include <string>


using namespace std;

// Function Prototypes
void LogIn();
void ValidateLogIn(string, string, int);
void Employees();
void Add();
void Edit();
void Delete();
void Formation();

int main()
{
  LogIn();

}

/*
void LogIn()
{
  string username, password;
  int tries = 0;
  
  cout << "Please enter your username and password" << endl;
  cout << "Username: ";
  getline (cin, username);
  cout << endl;
  cout << "Password: ";
  getline (cin, password);
  
  tries++;
  ValidateLogIn(username, password, tries);
  
  if (
}

void ValidateLogIn(string username, string password, int tries)
{
  
  const maxAttempts = 10;
  
  if (matchUsername == true && matchPassword == true)
  {
    return;
  }
  else if (matchUsername == true && matchPassword == false)
  {
    
    LogIn();
  }
  else if (matchUsername == false && matchPassword == true)
  {
    
    LogIn();
  }
  else
  {
    LogIn();
    if (tries = 0; tries = maxAttempts; tries++;)
    {
      cout << "You have reached the maximum amount of tries" << endl;
      return;
    }
  }
}

*/

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
      /*
      ofstream filename;
      filename.open("EmployeeInformation.txt");
      
      if (filename)
      {
       ifstream >> ID >> name >> title >> address >> salaryType >> salary;
      }
      else
      {
        cout << "File could not be opened properly";
      }
      
       filename.close();
      */
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




