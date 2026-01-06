#include <iostream>
#include <string>
using namespace std;

struct Student {

    string id;
    string nickname;
    string lineid;
   
   
    };
struct Phone {
	string mobile;
	string home;
};
struct parent {
    string name;
    string 	Relationship;
};
struct contact {
    string mobileparent;
    string homeparent;
};
void swapStudent(Student& a)
{
    cout << "Enter ID: ";
    cin >> a.id;
    cout << "Enter Nickname: ";
    cin >> a.nickname;
    cout << "Enter Line ID: ";
    cin >> a.lineid;
   
}
void phoneSwap(Phone& b)
{
    	 cout << " ==========Phone Information============\n";
    cout << "Enter number mobile: ";
    cin >> b.mobile;
    cout << "Enter number home: ";
    cin >> b.home;
}
    void parentSwap(parent& c)
	{
        cout << "========= my Parent=========== \n";
		cout << "Enter name: ";
		cin >> c.name;
		cout << "Enter Relationship: ";
		cin >> c.Relationship;
	}
    void contactSwap(contact& d)
    {
        cout << "===========Contact Parent Information=========\n";
        cout << "Enter number mobile parent: ";
        cin >> d.mobileparent;
        cout << "Enter number home parent: ";
        cin >> d.homeparent;
    }
   



    int main() 
    {
        Student a;
        swapStudent(a);
        Phone b;
        phoneSwap(b);
        parent c;
        parentSwap(c);
        contact d;
        contactSwap(d);
    }
    

    