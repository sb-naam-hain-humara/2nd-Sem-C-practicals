//Another program with students, this time with some methods takedata() and showdata()...

#include <iostream>

using namespace std;

class Student
{
    int adm_no;
    string name;
    int marks1, marks2;
    int tot_marks;
public:
    void takedata(int x,string n,int y,int z)
    {
        adm_no=x;
        name=n;
        marks1=y;
        marks2=z;
        tot_marks = y+z;
    }
    void showdata()
    {
        cout<<"admission no.: "<<adm_no<<endl<<"name: "<<name<<endl<<"marks1: "<<marks1<<"\nmarks2: "<<marks2<<"\ntotal marks: "<<tot_marks;
    }
};

int main()
{
    Student a;
    int x;
    string n;
    int y;
    int z;
    cout<<"Enter admission no. of student: ";
    cin >> x;
    cout<<"Enter Name of student: ";
    cin >> n;
    cout<<"Enter Marks in first subject of student: ";
    cin >> y;
    cout<<"Enter marks in 2nd subject of student: ";
    cin >> z;
    a.takedata(x, n, y, z);
    a.showdata();
    return 0;
}
