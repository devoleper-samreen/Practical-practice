#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    string course;

    Student(string name, int age, string course){
        this.name = name;
        this.age = age;
        this.course = course;
    }

    virtual void display(){
        cout << "Student Information:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
}

class WorkingStudent: public Student{
    public:
    string companyName;
    float salary;

    public:
    WorkingStudent(string name, int age, string course, string companyName, float salary){
        this.name = name;
        this.age = age;
        this.course = course;
        this.companyName = companyName;
        this.salary = salary;

    }

    void display override(){
        cout << "Working Student Information:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Salary: " << salary << endl;
    }

}

int main(){
    WorkingStudent workingStudent( "John", 25, "B.Tech", "Google", 100000);

    workingStudent.display();

    return 0;
}
