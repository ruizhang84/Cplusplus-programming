#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/* *********
 INPUT
 3 LiLei 14
 2 HanMeimei 14
 1 LinTao 15
 
 OUTPUT
 1 LinTao 15
 2 HanMeimei 14
 3 LiLei 14
 ********** */

class Student
{
public:
    int id;
    string name, grade;
    Student(){};
    Student(int id, string name, string grade);
    bool operator < (const Student & s) const;
};

istream & operator >> (istream & in, Student & s);
ostream & operator << (ostream & out, Student & s);


Student::Student(int id, string name, string grade):id(id),name(name),grade(grade){}
istream & operator >> (istream & in, Student & s){
    in >> s.id >> s.name >> s.grade;
    return in;
}

ostream & operator << (ostream & out, Student & s){
    out << s.id << " " << s.name << " " << s.grade <<endl;
    return out;
}

bool Student::operator < (const Student & s) const{
    if (id > s.id)
        return false;
    return true;
}



int main()
{
    vector<Student> sv;
    Student temp;

    while (cin >> temp)
    {
    
        sv.push_back(temp);
    }
    sort(sv.begin(), sv.end());
    for (int i = 0; i < sv.size(); ++i)
        cout << sv[i];
    return 0;
}