#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Bos kezek kuru
    queue<int> q;
    // Kezekke elementterdi ornalastyru
    q.push(3);
    q.push(5);
    q.push(4);
    q.push(2);
    cout << "Arbir kelesi engizilgen element kezek sonyna ornalasty" << endl;
    cout << "Kezek elementteri" << endl;
    queue<int> temp(q);
    // q kezeginin elementterin köru ushin q tiziminin köshirmesi bolatyn temp zhumys kezegin kurdyk
    // temp kezeginin elementterin shygaryu
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    // Kezek bos bolgansha kezekten elementterdi shygaryu
    cout << "Kezek elementter kezek basynan bastap shygaryladi" << endl;
    while (!q.empty()) {
        cout << q.front() << " elementti shygarylady" << endl;
        q.pop();
    }
    cout << endl;
    return 0;
}