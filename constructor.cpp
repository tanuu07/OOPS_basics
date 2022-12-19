#include<iostream>
using namespace std;
class Employee{
public:
        string Name;
        int Age;
        string Company_name;
        double Id_no;
        Employee(string name, int age, string company_name, double id_no){
            Name = name;
            Age = age;
            Company_name = company_name;
            Id_no = id_no;
        }
        void employee_detail(){
            cout << "Name : " << Name << endl;
            cout << "Age : "  << Age << endl;
            cout << "Company Name : " << Company_name << endl;
            cout << "ID No : " << Id_no << endl; 
        }
};
int main(){
    Employee employee1 = Employee("Alia", 25 ,"Tesla", 123456);
    employee1.employee_detail();
    Employee employee2 = Employee("Tanu",18,"Netflix",23460);
    employee2.employee_detail();
    
    return 0;
}
