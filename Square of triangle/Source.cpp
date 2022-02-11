#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    double x_a, y_a, x_b, y_b, x_c, y_c;
    std::cout << "Введите координату Х для точки А: \n";
    std::cin >> x_a;
    std::cout << "Введите координату Y для точки А: \n";
    std::cin >> y_a;
    std::cout << "Введите координату Х для точки B: \n";
    std::cin >> x_b;
    std::cout << "Введите координату Y для точки B: \n";
    std::cin >> y_b;
    std::cout << "Введите координату Х для точки C: \n";
    std::cin >> x_c;
    std::cout << "Введите координату Y для точки C: \n";
    std::cin >> y_c;

    double len_a, len_b, len_c;
    len_a = sqrt(pow((x_b - x_c), 2) + pow((y_b - y_c), 2));
    len_b = sqrt(pow((x_a - x_c), 2) + pow((y_a - y_c), 2));
    len_c = sqrt(pow((x_b - x_a), 2) + pow((y_b - y_a), 2));

    double p = (len_a + len_b + len_c) / 2;

    double S = sqrt(p * (p - len_a) * (p - len_b) * (p - len_c));

    std::cout << "Площадь вашего треугольника равна " << S << "\n";
    std::cout << "Всем общий";

    system("pause");
    return 0;
}