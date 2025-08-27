#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    double salary;
    public:
    Employee(string n, double s){
        name=n;
        salary=s;
    }
    void displayInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main () {
    Employee e1("Alice", 50000);
    e1.displayInfo();
    return 0;
}