#include<iostream>
using namespace std;
class abstractEmployee{
    virtual void Askforpromotion() = 0;//pure virtual function
};
class Employee: abstractEmployee{
public:
        string Name;
        int Age;
        string Company_name;
        double Id_no;
        int Experience;
        Employee(string name, int age, string company_name, double id_no,int experience){
            Name = name;
            Age = age;
            Company_name = company_name;
            Id_no = id_no;
            Experience = experience;
        }
        void employee_detail(){
            cout << "Name : " << Name << endl;
            cout << "Age : "  << Age << endl;
            cout << "Company Name : " << Company_name << endl;
            cout << "ID No : " << Id_no << endl; 
            cout << "Year Of Experience : " << Experience << endl;
        }
        void Askforpromotion(){
            if(Age>23 && Experience > 5){
                cout << Name<< " " << "you got promotion" << endl;
            }
            else{
                cout << Name <<" "<< "NO promotion"<<endl;
            }
        }
};
int main(){
    Employee employee1 = Employee("Tanu",25,"Netflix", 1234,7);
    employee1.employee_detail();
    Employee employee2 = Employee("Priya",19,"Amazon",6789,2);
    employee2.employee_detail();
    employee1.Askforpromotion();
    employee2.Askforpromotion();
return 0;
}