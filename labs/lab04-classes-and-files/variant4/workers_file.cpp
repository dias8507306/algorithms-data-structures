#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Worker {
public:
    std::string surname;
    std::string initials;
    std::string position;
    int yearsWorked;
    double salary;

    Worker(std::string s, std::string i, std::string p, int y, double sal)
        : surname(s), initials(i), position(p), yearsWorked(y), salary(sal) {
    }
};

void saveWorkersToFile(const std::vector<Worker>& workers, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return;
    }
    for (const auto& w : workers) {
        outFile << w.surname << " " << w.initials << " " << w.position << " "
            << w.yearsWorked << " " << w.salary << std::endl;
    }
    outFile.close();
}

std::vector<Worker> loadWorkersFromFile(const std::string& filename) {
    std::vector<Worker> workers;
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return workers;
    }
    std::string surname, initials, position;
    int yearsWorked;
    double salary;
    while (inFile >> surname >> initials >> position >> yearsWorked >> salary) {
        workers.emplace_back(surname, initials, position, yearsWorked, salary);
    }
    inFile.close();
    return workers;
}

void printWorkersByExperience(const std::vector<Worker>& workers, int minYears) {
    std::cout << "\nEmployees with more than " << minYears << " years of experience:" << std::endl;
    for (const auto& w : workers) {
        if (w.yearsWorked > minYears) {
            std::cout << w.surname << " " << w.initials << " - " << w.position << "\n";
        }
    }
}

void printWorkersBySalary(const std::vector<Worker>& workers, double minSalary) {
    std::cout << "\nEmployees with salary greater than " << minSalary << ":" << std::endl;
    for (const auto& w : workers) {
        if (w.salary > minSalary) {
            std::cout << w.surname << " " << w.initials << " - " << w.position << " (" << w.salary << ")\n";
        }
    }
}

void printWorkersByPosition(const std::vector<Worker>& workers, const std::string& targetPosition) {
    std::cout << "\nEmployees with position: " << targetPosition << std::endl;
    for (const auto& w : workers) {
        if (w.position == targetPosition) {
            std::cout << w.surname << " " << w.initials << " - " << w.yearsWorked << " years\n";
        }
    }
}

int main() {
    std::vector<Worker> workers = {
        {"Kazakov", "A.B.", "Engineer", 10, 200000},
        {"Ibrayev", "S.T.", "Technician", 5, 150000},
        {"Mukashev", "M.N.", "Manager", 12, 300000},
        {"Sadykova", "L.K.", "Engineer", 7, 220000},
        {"Omarov", "D.E.", "Technician", 15, 180000}
    };

    std::string filename = "workers.txt";
    saveWorkersToFile(workers, filename);
    std::cout << "Worker data saved to " << filename << std::endl;

    workers = loadWorkersFromFile(filename);
    std::cout << "Worker data loaded from " << filename << std::endl;

    int minYears;
    double minSalary;
    std::string targetPosition;

    std::cout << "Enter minimum years of experience: ";
    std::cin >> minYears;
    printWorkersByExperience(workers, minYears);

    std::cout << "\nEnter minimum salary: ";
    std::cin >> minSalary;
    printWorkersBySalary(workers, minSalary);

    std::cout << "\nEnter position to search: ";
    std::cin >> targetPosition;
    printWorkersByPosition(workers, targetPosition);

    return 0;
}
