#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int rno;
    float cpi;
    // vector<int> mks;
    Student() { // Default constructor

    }

    Student(string n, int r, float c) { // Custom constructor
        name = n;
        rno = r;
        cpi = c;
    }

    Student(string n, int r) { // Custom constructor
        name = n;
        rno = r;
    }
};

int main() {
    Student s1;
    s1.name = "Akshar";
    s1.rno = 51;
    s1.cpi = 9.58;
    // s1.mks={91, 99, 98, 94, 93};

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.cpi<<endl;

    // cout<<"Marks: ";
    // for (auto it:s1.mks) {
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    Student s2("Bheem", 52, 8.94);
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.cpi<<endl;

    Student s3("Chetan", 53);
    s3.cpi = 9.02;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.cpi<<endl;

    Student s4=s1; // Copy Constructor
    s4.name="Dhruv";
    s4.rno = 54;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.cpi<<endl;

    Student s5(s1); // One of other constructor with object as argument; system default
    s5.rno=55;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.cpi<<endl;
}