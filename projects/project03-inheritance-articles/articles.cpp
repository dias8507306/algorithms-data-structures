#include <iostream>
#include <string>

using namespace std;

class Article {
    string name;
    string author;
public:
    string getName() { return name; }
    void setName(string name) { this->name = name; }
    string getAuthor() { return author; }
    void setAuthor(string author) { this->author = author; }

    Article() {
        name = "No name";
        author = "No author";
        cout << "Article: Default constructor" << endl;
    }

    Article(string _name, string _author) {
        name = _name;
        author = _author;
        cout << "Article: Constructor with param" << endl;
    }

    Article(Article& art) {
        name = art.name;
        author = art.author;
        cout << "Article: Copy constructor" << endl;
    }

    ~Article() {
        cout << "Article: Destructor" << endl;
    }

    void print() {
        cout << "Article -=- Name: " << getName() << " Author: " << getAuthor() << endl;
    }
};

class Scientific : public Article {
    string science;
public:
    string getScience() { return science; }
    void setScience(string science) { this->science = science; }

    Scientific() {
        science = "No science";
        cout << "Scientific: Default constructor" << endl;
    }

    Scientific(string _name, string _author, string _science) : Article(_name, _author) {
        this->science = _science;
        cout << "Scientific: Constructor with param" << endl;
    }

    ~Scientific() {
        cout << "Scientific: Destructor" << endl;
    }

    void print() {
        cout << "Scientific -=- Name: " << getName() << " Author: " << getAuthor() << " Science: " << getScience() << endl;
    }
};

class News : public Article {
    string area;
public:
    string getArea() { return area; }
    void setArea(string area) { this->area = area; }

    News() {
        area = "No area";
        cout << "News: Default constructor" << endl;
    }

    News(string _name, string _author, string area) {
        this->setName(_name);
        this->setAuthor(_author);
        this->area = area;
        cout << "News: Constructor with param" << endl;
    }

    ~News() {
        cout << "News: Destructor" << endl;
    }

    void print() {
        cout << "News -=- Name: " << getName() << " Author: " << getAuthor() << " Area: " << getArea() << endl;
    }
};

int main() {
    cout << " -=-=-=- Step1 -=-=-=- " << endl;

    Article art1;
    Article art2("First article", "Ivanov");

    Scientific sc1;
    Scientific sc2("Biology article", "Petrov", "ecology");

    News n1;
    News n2("Top news", "Sidorov", "Politics");

    cout << " -=-=-=- Step2 -=-=-=- " << endl;

    Article arr1[6];
    arr1[0] = art1;
    arr1[1] = art2;
    arr1[2] = sc1;
    arr1[3] = sc2;
    arr1[4] = n1;
    arr1[5] = n2;

    for (int i = 0; i < 6; i++) {
        arr1[i].print();
    }

    cout << " -=-=-=- Step3 -=-=-=- " << endl;

    Scientific arr2[2];
    arr2[0] = sc1;
    arr2[1] = sc2;

    for (int i = 0; i < 2; i++) {
        arr2[i].print();
    }

    return 0;
}

    
