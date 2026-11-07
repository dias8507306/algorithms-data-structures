#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

//====== class Student =================
class Student {
private:
    char name[30];
    char daymon[6];
    int year;
    char adr[30], fac[20];
    int kurs;
public:
    Student();
    Student* in(int k);
    char* getfac();
    int getkurs();
    void show();
};

Student::Student() {}

Student* Student::in(int k)
{
    Student* spis = new Student[k];
    ifstream inf;
    inf.open("students.txt");
    for (int i = 0; i < k; i++) {
        inf >> spis[i].name;
        inf >> spis[i].daymon;
        inf >> spis[i].year;
        inf >> spis[i].adr;
        inf >> spis[i].fac;
        inf >> spis[i].kurs;
    }
    return spis;
}

void Student::show()
{
    cout << "Name :" << name << endl;
    cout << "Was born :" << daymon << '.' << year << endl;
    cout << "Address :" << adr << endl;
    cout << "Fac :" << fac << endl;
    cout << "Kurs :" << kurs << endl;
}

char* Student::getfac() { return fac; }
int Student::getkurs() { return kurs; }

void spisfac(Student spis[], int n)
{
    char fac[20];
    cout << "Input faculty:"; cin >> fac;
    for (int i = 0; i < n; i++)
        if (strcmp(spis[i].getfac(), fac) == 0)spis[i].show();
}

void spisfackurs(Student spis[], int n)
{
    int i, k;
    char fac[20];
    cout << "Input faculty:"; cin >> fac;
    cout << "Input the course:"; cin >> k;
    for (i = 0; i < n; i++)
        if ((strcmp(spis[i].getfac(), fac) == 0) && (spis[i].getkurs() == k))
            spis[i].show();
}

//========= main ==============
int main()
{
    ifstream inf;
    inf.open("students.txt");
    Student ss;
    int n;
    cout << "Input a number of students: ";
    cin >> n;
    Student* spis;
    spis = ss.in(n);
    for (int i = 0; i < n; i++) {
        cout << "==============================" << endl;
        spis[i].show();
    }
    spisfac(spis, n);
    spisfackurs(spis, n);
    delete[] spis;
    cout << "press any key!";
    cin.get();
    return EXIT_SUCCESS;
}
