#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    double value;

    cout << "Выберите единицу измерения для перевода:\n";
    cout << "1. Сажени в метры\n";
    cout << "2. Дюймы в сантиметры\n";
    cout << "3. Футы в метры\n";
    cout << "4. Драхмы в граммы\n";
    cout << "5. Унции в граммы\n";
    cout << "6. Фунты в килограммы\n";
    cout << "7. Аршины в метры\n";
    cout << "8. Золотники в граммы\n";
    cout << "9. Дюймы в миллиметры\n";

    cin >> choice;

    cout << "Введите значение для перевода: ";
    cin >> value;

    switch (choice) {
    case 1:
        cout << value << " сажень = " << value * 2.1366 << " метров\n";
        break;
    case 2:
        cout << value << " дюйм = " << value * 2.5 << " сантиметров\n";
        break;
    case 3:
        cout << value << " фут = " << value * 0.3048 << " метров\n";
        break;
    case 4:
        cout << value << " драхма = " << value * 3.7325 << " граммов\n";
        break;
    case 5:
        cout << value << " унция = " << value * 29.86 << " граммов\n";
        break;
    case 6:
        cout << value << " фунт = " << value * 0.40951 << " килограммов\n";
        break;
    case 7:
        cout << value << " аршин = " << value * 0.7112 << " метров\n";
        break;
    case 8:
        cout << value << " золотник = " << value * 4.2657 << " граммов\n";
        break;
    case 9:
        cout << value << " дюйм = " << value * 25.3995 << " миллиметров\n";
        break;
    default:
        cout << "Неверный выбор единицы измерения.\n";
        break;
    }

    return 0;
}