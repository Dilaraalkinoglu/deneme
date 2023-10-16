#include <iostream>
#include <fstream>
using namespace std;



int main() {
    ifstream inputFile("input.txt");

    if (!inputFile) {
        cerr << "Dosya acilamadi" << endl;
        return 1;
    }

    int n;
    inputFile >> n;

    int sum = 0;
    int product = 1;
    int maxNumber;
    

    for (int i = 0; i < n; i++) {
        int num;
        inputFile >> num;

        sum += num;
        product *= num;

        if (i == 0 || num > maxNumber) {
            maxNumber = num;
        }
    }

    inputFile.close();

    double average = static_cast<double>(sum) / n;

    cout << "Toplam: " << sum << endl;
    cout << "Carpim: " << product << endl;
    cout << "Ortalama: " << average << endl;
    cout << "En buyuk sayi: " << maxNumber << endl;

    return 0;
}
