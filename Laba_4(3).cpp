#include <iostream>
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    double сумма_вклада;
    double годы;

    cout << "Введите начальную сумму вклада в рублях: ";
    cin >> сумма_вклада;

    cout << "Введите количество лет: ";
    cin >> годы;

    double процентная_ставка = 0.03; 

    double конечная_сумма = сумма_вклада * pow(1 + процентная_ставка, годы);

    cout << "Конечная сумма через " << годы << " лет будет: " << конечная_сумма << " рублей" << std::endl;

    return 0;
}