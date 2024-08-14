#include<iostream>
#include<string>
using namespace std;

class College {
private:
    string cName;
    int cId;

protected:
    void setCName(string n) {
        cName = n;
    }
    void setCId(int i) {
        cId = i;
    }
    string getCName() {
        return cName;
    }
    int getCId() {
        return cId;
    }

public:
    College(string n, int i) {
        setCName(n);
        setCId(i);
    }
    void displayCollegeInfo() {
        cout << "College Name: " << getCName() << endl;
        cout << "College ID: " << getCId() << endl;
    }
};

class Class : public College {
private:
    string className;
    int classId;

protected:
    void setClassName(string n) {
        className = n;
    }
    void setClassId(int i) {
        classId = i;
    }
    string getClassName() {
        return className;
    }
    int getClassId() {
        return classId;
    }

public:
    Class(string cn, int ci, string n, int i) : College(cn, ci) {
        setClassName(n);
        setClassId(i);
    }
    void displayClassInfo() {
        displayCollegeInfo();
        cout << "Class Name: " << getClassName() << endl;
        cout << "Class ID: " << getClassId() << endl;
    }
};

int main() {
    Class c("ABC College", 1, "CSE", 101);
    c.displayClassInfo();
    return 0;
}