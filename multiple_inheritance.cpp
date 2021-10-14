#include <iostream>
#include <string.h>

using namespace std;

class student {
    protected:
        int roll;
        string sname;
        string branch;
        string institute;
        float cgpa;
    public:
        student() {
            cout<<"Constructor called for class student"<<endl;
        }
        void getStudentData() {
            cout<<"Roll: ";
            cin>>roll;
            cout<<"Name: ";
            cin>>sname;
            cout<<"Branch: ";
            cin>>branch;
            cout<<"Institute: ";
            cin>>institute;
            cout<<"CGPA: ";
            cin>>cgpa;
        }
        virtual void printData() {
            cout<<endl<<"Class student"<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<sname<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"Institute: "<<institute<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
        }
        ~student() {
            cout<<"Destructor called for class student"<<endl;
        }
};

class employee {
    protected:
        int empid;
        string ename;
        string organization;
        float salary;
    public:
        employee() {
            cout<<"Constructor called for class employee"<<endl;
        }
        void getEmployeeData() {
            cout<<"Employee ID: ";
            cin>>empid;
            cout<<"Name: ";
            cin>>ename;
            cout<<"Organization: ";
            cin>>organization;
            cout<<"Salary: ";
            cin>>salary;
        }
        virtual void printData() {
            cout<<endl<<"Class employee"<<endl;
            cout<<"Employee ID: "<<empid<<endl;
            cout<<"Name: "<<ename<<endl;
            cout<<"Organization: "<<organization<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
        ~employee() {
            cout<<"Destructor called for class employee"<<endl;
        }
};

class workingStudent : public student, public employee {
    public:
        workingStudent() {
            cout<<"Constructor called for class workingStudent"<<endl;
        }
        void printData() {
            cout<<endl<<"Class workingStudent"<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<ename<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"Institute: "<<institute<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
            cout<<"Employee ID: "<<empid<<endl;
            cout<<"Organization: "<<organization<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
        ~workingStudent() {
            cout<<"Destructor called for class workingStudent"<<endl;
        }
};

int main() {
    workingStudent ws;
    ws.getStudentData();
    ws.getEmployeeData();
    ws.printData();
    ws.student :: printData();
    ws.employee :: printData();
    return 0;
}
