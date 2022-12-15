#include<iostream>
using namespace std;
class Employee{
public:
        string Name;
        int Age;
        string Company_name;
        double Id_no;
        void employee_detail(){
            cout << "Name : " << Name << endl;
            cout << "Age : "  << Age << endl;
            cout << "Company Name : " << Company_name << endl;
            cout << "ID No : " << Id_no << endl; 
        }
};
int main(){
    Employee employee1;
    employee1.Name = "Alia";
    employee1.Age = 28;
    employee1.Company_name = "Tesla";
    employee1.Id_no = 123476;
    employee1.employee_detail();
    return 0;
}