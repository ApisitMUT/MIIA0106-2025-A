#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineid;
    string phone;
    // TODO
};

int main() {
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ..
    cin >> s1.id;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
    cin >> s1.nickname;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
    cin >> s1.lineid;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
    cin >> s1.phone; 



    cout << "\n=== Output Student 1 ===\n";
    cout << "ID: " << s1.id << "\n";
    cout << "Nickname: " << s1.nickname << "\n";
    cout << "Line ID: " << s1.lineid << "\n";
    cout << "Phone: " << s1.phone << "\n";


    return 0;
}

