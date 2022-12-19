#include<iostream>
using namespace std;
class Employee{
    private:
            string Name;
            int Age;
            string Company_name;
            double Id_no;
    public:
    //to access the private member we need to use setter and getter method
            void SetName(string name){  //setter
                Name = name;
            }
            string getName(){
                return Name; //getter
            }
            void SetAge(int age){
                Age = age;
            }
            int getAge(){
                return Age;
            }
            void SetCompany_name(string companyname){
                Company_name = companyname;
            }
            string getCompany_name(){
                return Company_name;
            }
            void SetId_no(double id){
                Id_no = id;
            }
            double getId_no(){
                return Id_no;
            }

};
int main(){
    Employee employee1;
    employee1.SetAge(26);
    employee1.SetName("Tanu");
    employee1.SetCompany_name("Netflix");

    cout << "Name : " <<employee1.getName()<<" "<< "Age : "<<employee1.getAge()<< " " << "Company_name : "<<employee1.getCompany_name() << endl;
    return 0;
}   