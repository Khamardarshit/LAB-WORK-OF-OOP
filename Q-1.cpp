#include <iostream>
using namespace std;

class Employee_record{
    public:

    int emp_id;
    string emp_name;
    string emp_city;
    int emp_age;
    string emp_role;
    int emp_salary;
    int emp_experience;
    string emp_company_name;
};

int main(){
    Employee_record ram;

    ram.emp_id = 01;
    ram.emp_name ="Ram";
    ram.emp_age = 35;
    ram.emp_city ="surat";
    ram.emp_role = "accountant";
    ram.emp_salary = 35000 ;
    ram.emp_experience =10 ;
    ram.emp_company_name = "TCS";

    cout << "Employee record:\n";
    cout << "ID: " << ram.emp_id << endl;
    cout << "Name: " << ram.emp_name << endl;
    cout << "city: " << ram.emp_city << endl;
    cout << "Age: " << ram.emp_age << endl;
    cout << "Role: " << ram.emp_role << endl;
    cout << "Salary: " << ram.emp_salary << endl;
    cout << "Experience: " << ram.emp_experience << endl;
    cout << "Company: " << ram.emp_company_name << endl;
    
    Employee_record shyam ;

    shyam.emp_id = 02;
    shyam.emp_name ="shyam";
    shyam.emp_city ="pune";
    shyam.emp_age = 45;
    shyam.emp_role = "audit";
    shyam.emp_salary = 55000 ;
    shyam.emp_experience =15 ;
    shyam.emp_company_name = "KPMG";

    cout << "Employee record:\n";
    cout << "ID: " << shyam.emp_id << endl;
    cout << "Name: " << shyam.emp_name << endl;
    cout << "city: " << shyam.emp_city << endl;
    cout << "Age: " << shyam.emp_age << endl;
    cout << "Role: " << shyam.emp_role << endl;
    cout << "Salary: " << shyam.emp_salary << endl;
    cout << "Experience: " << shyam.emp_experience << endl;
    cout << "Company: " << shyam.emp_company_name << endl;
    
    Employee_record Krishna ;

    Krishna.emp_id = 03;
    Krishna.emp_name ="Krishna";
    Krishna.emp_age = 55;
    Krishna.emp_city ="Mumbai";
    Krishna.emp_role = "audit";
    Krishna.emp_salary = 75000 ;
    Krishna.emp_experience =25 ;
    Krishna.emp_company_name = "Deloitte";

    cout << "Employee record:\n";
    cout << "ID: " << Krishna.emp_id << endl;
    cout << "Name: " << Krishna.emp_name << endl;
    cout << "city: " << Krishna.emp_city << endl;
    cout << "Age: " << Krishna.emp_age << endl;
    cout << "Role: " << Krishna.emp_role << endl;
    cout << "Salary: " << Krishna.emp_salary << endl;
    cout << "Experience: " << Krishna.emp_experience << endl;
    cout << "Company: " << Krishna.emp_company_name << endl;

    Employee_record Ganpati ;

    Ganpati.emp_id = 04;
    Ganpati.emp_name ="Ganpati";
    Ganpati.emp_age = 58;
    Ganpati.emp_city ="Delhi";
    Ganpati.emp_role = "Fun manger";
    Ganpati.emp_salary = 115000 ;
    Ganpati.emp_experience =25 ;
    Ganpati.emp_company_name = "HDFC AMC";

    cout << "Employee record:\n";
    cout << "ID: " << Ganpati.emp_id << endl;
    cout << "Name: " << Ganpati.emp_name << endl;
    cout << "city: " << Ganpati.emp_city << endl;
    cout << "Age: " << Ganpati.emp_age << endl;
    cout << "Role: " << Ganpati.emp_role << endl;
    cout << "Salary: " << Ganpati.emp_salary << endl;
    cout << "Experience: " << Ganpati.emp_experience << endl;
    cout << "Company: " << Ganpati.emp_company_name << endl;

    Employee_record Vishnu ;

    Vishnu.emp_id = 05;
    Vishnu.emp_name ="Vishnu";
    Vishnu.emp_age = 38;
    Vishnu.emp_city = "Bhopal";
    Vishnu.emp_role = "Fun manger";
    Vishnu.emp_salary = 95000 ;
    Vishnu.emp_experience =25 ;
    Vishnu.emp_company_name = "SBI AMC";

    cout << "Employee record:\n";
    cout << "ID: " << Vishnu.emp_id << endl;
    cout << "Name: " << Vishnu.emp_name << endl;
    cout << "city: " << Vishnu.emp_city << endl;
    cout << "Age: " << Vishnu.emp_age << endl;
    cout << "Role: " << Vishnu.emp_role << endl;
    cout << "Salary: " << Vishnu.emp_salary << endl;
    cout << "Experience: " << Vishnu.emp_experience << endl;
    cout << "Company: " << Vishnu.emp_company_name << endl;

    return 0;
    
};