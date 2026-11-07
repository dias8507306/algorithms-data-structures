#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    char name[30];
    char daymon[6];
    int year;
    char adr[30], fac[20];
    int kurs;
public:
    Student();
    char* getfac();
    int getkurs();
    void show();
};

Student::Student()
{
    cout << "Input name:"; cin >> name;
    cout << "Input date of born\n";
    cout << "Day.mon:"; cin >> daymon;
    cout << "Year:"; cin >> year;
    cout << "Input adr:"; cin >> adr;
    cout << "Input fac:"; cin >> fac;
    cout << "Input kurs:"; cin >> kurs;
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
void spisfac(Student spis[], int n) //список студентов заданного факультета
{
    char fac[20];
    cout << "Input faculty:"; cin >> fac;
    for (int i = 0; i < n; i++)
        if (strcmp(spis[i].getfac(), fac) == 0) spis[i].show();
}

void spisfackurs(Student spis[], int n) // список студентов заданного факультета и курса
{
    int i, k;
    char fac[20];
    cout << "Input faculty: "; cin >> fac;
    cout << "Input the course: "; cin >> k;
    for (i = 0; i < n; i++)
        if ((strcmp(spis[i].getfac(), fac) == 0) && (spis[i].getkurs() == k))
            spis[i].show();
}

//======== main ==============
int main()
{
    Student* spis;
    int n;
    cout << "Input a number of students: ";
    cin >> n;
    spis = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "==============================\n";
        spis[i].show();
    }
    spisfac(spis, n);
    spisfackurs(spis, n);
    delete[] spis;
    cout << "Press any key!";
    cin.get();
    return EXIT_SUCCESS;
}
