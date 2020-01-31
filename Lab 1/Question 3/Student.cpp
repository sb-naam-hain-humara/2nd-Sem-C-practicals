//Write a program to check which students have failed...

#include <iostream>

using namespace std;

class Student
{
    public:
    int rno;
    string name;
    float mark1, mark2, mark3;
};

int main()
{
    Student stud[25];
    int f;
    for (int i = 0; i<25; i++)
    {
        cout << "Enter roll no., name and marks of student"<<i + 1<<": ";
        cin >> stud[i].rno >> stud[i].name >> stud[i].mark1 >> stud[i].mark2 >> stud[i].mark3;
    }
    cout << "Details of students who failed: \nRoll No.\tName\tMarks 1\tMarks 2\tMarks 3 \n";
    for (int i = 0; i<25; i++)
    {
        f = 0;
        if(stud[i].mark1 < 35)
            f++;
        if(stud[i].mark2 < 35)
            f++;
        if(stud[i].mark3 < 35)
            f++;

        if(f > 1)
        {
            cout << stud[i].rno<<"\t"<<"\t"<<stud[i].name<<"\t"<<stud[i].mark1<<"\t"<<stud[i].mark2<<"\t"<<stud[i].mark3<<"\n";
        }

    }
    return 0;
}
