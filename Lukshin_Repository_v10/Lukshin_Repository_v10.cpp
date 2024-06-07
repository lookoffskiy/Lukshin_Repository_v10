
#include <iostream>

using namespace std;

int A, B, C;
int EnterNumbers()
{
    std::cout << "Введите A: " << endl;
    std::cin >> A;
    std::cout << "Введите B: " << endl;
    std::cin >> B;
    std::cout << "Введите C: " << endl;
    std::cin >> C;
}
int OstatDel()
{
    int Ost;
    Ost = (A + B) % C;
    return Ost;
}
int CelDel()
{
    int Cel;
    Cel = (A + B) / C;
    return Cel;
}
int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "1. Введите целые числа A, B и C\n";
    std::cout << "2. Найти остаток от деления суммы целых чисел А и В на число С\n";
    std::cout << "3. Найти целую часть от деления суммы целых чисел А и В на число С\n";
    std::cout << "\n";
    std::cout << "Введите номер пункта, который хотели бы выполнить: ";
}
