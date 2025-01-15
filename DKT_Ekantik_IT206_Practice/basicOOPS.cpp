#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int rno;
    float cpi;
    vector<int> mks;
};

int main() {
    Student s1;
    s1.name = "Akshar"; 
    s1.rno = 51;
    s1.cpi = 9.58;
    s1.mks={91, 99, 98, 94, 93};

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.cpi<<"\nMarks: ";
    for (auto it:s1.mks) {
        cout<<it<<" ";
    }
}