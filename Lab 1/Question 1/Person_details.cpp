/*Write a program to create "person" class to enter name, age, address*/

#include <bits/stdc++.h>

using namespace std;

class Person
{
    string name;
    int age;
    string add;

    public:
        void getdata();
        void display();
};

void Person::getdata()
{
    cout << "Enter Address: ";
    getline(cin, add);
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;


}

void Person::display()
{
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
    cout<<"\nAddress: "<<add;
}

int main()
{
    Person p;
    p.getdata();
    p.display();
    return 0;
}
