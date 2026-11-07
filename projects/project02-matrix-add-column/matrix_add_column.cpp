#include <cstdlib>  // rand() функциясы үшін
#include <iostream> // енгізу/шығару үшін
using namespace std;

// Кестені (матрицаны) динамикалық түрде құру функциясы
int** form_matr(int n, int m) {
    int** matr = new int* [n];  // n жолға көрсеткіштер массиві
    for (int i = 0; i < n; i++) {
        matr[i] = new int[m];  // Әр жолға m баған үшін жады бөлу
    }
    return matr;  // Кестенің көрсеткішін қайтарамыз
}

// Матрицаны кездейсоқ сандармен толтыру функциясы
void zapolnen(int** matr, int n, int m) {
    for (int i = 0; i < n; i++) {  // Әр жолға өтеміз
        for (int j = 0; j < m; j++) {  // Әр бағанға өтеміз
            matr[i][j] = rand() % 10;  // 0-ден 9-ға дейін кездейсоқ сан жазамыз
        }
    }
}

// Матрицаны экранға шығару функциясы
void printArray(int** matr, int n, int m) {
    for (int i = 0; i < n; i++) {  // Әр жолға өтеміз
        for (int j = 0; j < m; j++) {  // Әр бағанға өтеміз
            cout << matr[i][j] << " ";  // Элементті шығарамыз
        }
        cout << "\n";  // Жол аяқталған соң жаңа жолға көшеміз
    }
}

// Жадыны босату функциясы
void dell(int** matr, int n) {
    for (int i = 0; i < n; i++) {  // Әр жолға өтеміз
        delete[] matr[i];  // Әр жол үшін динамикалық жадыны жоямыз
    }
    delete[] matr;  // Жолдардың өзін жоямыз
}

// Матрицаға жаңа баған қосу функциясы
int** addColumn(int** matr, int n, int& m) {
    for (int i = 0; i < n; i++) {  // Әр жолды өңдейміз
        int* newRow = new int[m + 1];  // Жаңа баған қосылған жаңа жол құрамыз
        for (int j = 0; j < m; j++) {  // Ескі бағандарды жаңа массивке көшіреміз
            newRow[j] = matr[i][j];
        }
        newRow[m] = rand() % 10;  // Соңғы бағанға жаңа кездейсоқ мән жазамыз

        delete[] matr[i];  // Ескі жолдың жадысын босатамыз
        matr[i] = newRow;  // Жаңа жолды орнатамыз
    }
    m++;  // Бағандар санын арттырамыз
    return matr;  // Өзгертілген матрицаны қайтарамыз
}

int main() {
    int n, m;
    cout << "\nEnter n="; // Пайдаланушыдан жол санын енгізуді сұраймыз
    cin >> n;
    cout << "\nEnter m="; // Пайдаланушыдан баған санын енгізуді сұраймыз
    cin >> m;

    int** matr = form_matr(n, m);  // Матрицаны құрамыз
    zapolnen(matr, n, m);  // Матрицаны кездейсоқ мәндермен толтырамыз
    cout << "Original Matrix:\n";
    printArray(matr, n, m);  // Бастапқы матрицаны шығарамыз

    // Жаңа баған қосу
    matr = addColumn(matr, n, m);

    cout << "Matrix After Adding Column:\n";
    printArray(matr, n, m);  // Баған қосылғаннан кейінгі матрицаны шығарамыз

    dell(matr, n);  // Жадыны тазалаймыз
    return 0;
}