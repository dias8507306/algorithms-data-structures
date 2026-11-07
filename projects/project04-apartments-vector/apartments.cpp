#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class House {
public:
    string address;
    int floor;
    int rooms;
    double area;

    House(string addr, int fl, int rm, double ar) : address(addr), floor(fl), rooms(rm), area(ar) {}

    void show() const {
        cout << "Address: " << address << ", Floor: " << floor
            << ", Rooms: " << rooms << ", Area: " << area << " m²" << endl;
    }
};

int main() {
    vector<House> houses;
    int n;
    cout << "Enter number of apartments: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string address;
        int floor, rooms;
        double area;

        cout << "Enter address: ";
        cin >> ws;
        getline(cin, address);
        cout << "Enter floor: ";
        cin >> floor;
        cout << "Enter number of rooms: ";
        cin >> rooms;
        cout << "Enter area: ";
        cin >> area;

        houses.push_back(House(address, floor, rooms, area));
    }

    cout << "\nAll apartments:" << endl;
    for (auto& house : houses) {
        house.show();
    }

    int roomCount;
    cout << "Enter room count to filter: ";
    cin >> roomCount;

    cout << "\nApartments with " << roomCount << " rooms:" << endl;
    vector<House> roomFiltered;
    copy_if(houses.begin(), houses.end(), back_inserter(roomFiltered), [roomCount](const House& h) {
        return h.rooms == roomCount;
        });
    for (auto& house : roomFiltered) house.show();

    int minFloor, maxFloor;
    cout << "Enter min and max floor: ";
    cin >> minFloor >> maxFloor;

    cout << "\n" << roomCount << "-room apartments on floors " << minFloor << "-" << maxFloor << ":" << endl;
    vector<House> floorFiltered;
    copy_if(houses.begin(), houses.end(), back_inserter(floorFiltered), [roomCount, minFloor, maxFloor](const House& h) {
        return h.rooms == roomCount && h.floor >= minFloor && h.floor <= maxFloor;
        });
    for (auto& house : floorFiltered) house.show();

    double minArea;
    cout << "Enter minimum area: ";
    cin >> minArea;

    cout << "\nApartments with an area greater than " << minArea << " m²:" << endl;
    vector<House> areaFiltered;
    copy_if(houses.begin(), houses.end(), back_inserter(areaFiltered), [minArea](const House& h) {
        return h.area > minArea;
        });
    for (auto& house : areaFiltered) house.show();

    return 0;
}
