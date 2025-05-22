#include <iostream>
#include <cmath>      // Для функций floor и round
#include <iomanip>    // Для управления выводом 
using namespace std;

// Объявления функций
void enterRealNumber();       // Ввести вещественное число x
void enterNaturalNumber();    // Ввести натуральное число y
void roundX();                // Округлить x до y разрядов
void discardIntegerPart();    // Отбросить целую часть от x

// Глобальные переменные для хранения x и y
double x = 0.0;
int y = 0;

int main() {
    int choice;

    do {
        cout << "\nМеню:\n";
        cout << "1. Ввести вещественное число x\n";
        cout << "2. Ввести натуральное число y\n";
        cout << "3. Округлить x до y знаков после запятой\n";
        cout << "4. Отбросить целую часть от x\n";
        cout << "5. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enterRealNumber();
                break;
            case 2:
                enterNaturalNumber();
                break;
            case 3:
                roundX();
                break;
            case 4:
                discardIntegerPart();
                break;
            case 5:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 5);

    return 0;
}

// Определения функций (пока пустые)
void enterRealNumber() {

}

void enterNaturalNumber() {

}

void roundX() {
    double factor = pow(10, y);
    double rounded = round(x * factor) / factor;
    cout << fixed << setprecision(y);
    cout << "x, округлённый до " << y << " знаков после запятой: " << rounded << endl;
}

void discardIntegerPart() {
    
}