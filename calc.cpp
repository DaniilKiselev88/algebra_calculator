#include <iostream>
#include <cmath>

using namespace std;

// Определение постоянной Pi
const double PI = 3.14159265358979323846;

// Главная функция для работы с алгебраическими операциями
void Calculator() {
    cout << "Алгебра и тригонометрия\n";
    cout << "1. Алгебраические функции\n";
    cout << "2. Тригонометрические функции\n";
    cout << "0. Назад\n";
    cout << "Ваш выбор: ";
    int choice;
    cin >> choice;

    switch(choice) {
        case 1: {
            cout << "Алгебраические функции\n";
            cout << "1. Корень квадратный\n";
            cout << "2. Возведение в степень\n";
            cout << "3. Факториал\n";
            cout << "0. Назад\n";
            cout << "Ваш выбор: ";
            int subchoice;
            cin >> subchoice;

            switch(subchoice) {
                case 1: {
                    double number;
                    cout << "Число: ";
                    cin >> number;
                    if (number < 0) {
                        cout << "Ошибка: нельзя извлечь корень из отрицательного числа.\n";
                    } else {
                        cout << "Корень квадратный: " << sqrt(number) << "\n";
                    }
                    break;
                }
                case 2: {
                    double base, exponent;
                    cout << "Основание: ";
                    cin >> base;
                    cout << "Показатель степени: ";
                    cin >> exponent;
                    cout << "Результат возведения в степень: " << pow(base, exponent) << "\n";
                    break;
                }
                case 3: {
                    unsigned long long factorialResult = 1;
                    int number;
                    cout << "Число для факториала: ";
                    cin >> number;
                    if (number < 0) {
                        cout << "Ошибка: факториал определен только для неотрицательных целых чисел.\n";
                    } else {
                        for(int i = 1; i <= number; ++i) {
                            factorialResult *= i;
                        }
                        cout << "Факториал: " << factorialResult << "\n";
                    }
                    break;
                }
                case 0: return;
                default: cout << "Некорректный выбор\n";
            }
            break;
        }
        case 2: {
            cout << "Тригонометрические функции\n";
            cout << "1. Синус\n";
            cout << "2. Косинус\n";
            cout << "3. Тангенс\n";
            cout << "4. Котангенс\n";
            cout << "5. Секанс\n";
            cout << "6. Косеканс\n";
            cout << "0. Назад\n";
            cout << "Ваш выбор: ";
            int subchoice;
            cin >> subchoice;

            switch(subchoice) {
                case 1: {
                    double angleDegrees;
                    cout << "Угол в градусах: ";
                    cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;  // Преобразуем градусы в радианы
                    cout << "Синус угла: " << sin(angleRadians) << "\n";
                    break;
                }
                case 2: {
                    double angleDegrees;
                    cout << "Угол в градусах: ";
                    cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    cout << "Косинус угла: " << cos(angleRadians) << "\n";
                    break;
                }
                case 3: {
                    double angleDegrees;
                    cout << "Угол в градусах: ";
                    cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    cout << "Тангенс угла: " << tan(angleRadians) << "\n";
                    break;
                }
                case 4: {
                    double angleDegrees;
                    cout << "Угол в градусах: ";
                    cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    double tangentValue = tan(angleRadians);
                    if (abs(tangentValue) > 1e-10) {
                        cout << "Котангенс угла: " << 1 / tangentValue << "\n";
                    } else {
                        cout << "Ошибка: невозможно вычислить котангенс угла с нулевым тангенсом.\n";
                    }
                    break;
                }
                case 5: {
                    double angleDegrees;
                    cout << "Угол в градусах: ";
                    cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    double cosineValue = cos(angleRadians);
                    if (abs(cosineValue) > 1e-10) {
                        cout << "Секанс угла: " << 1 / cosineValue << "\n";
                    } else {
                        cout << "Ошибка: невозможно вычислить секанс угла с нулевым косинусом.\n";
                    }
                    break;
                }
                case 6: {
                    double angleDegrees;
                    cout << "Угол в градусах: ";
                    cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    double sineValue = sin(angleRadians);
                    if (abs(sineValue) > 1e-10) {
                        cout << "Косеканс угла: " << 1 / sineValue << "\n";
                    } else {
                        cout << "Ошибка: невозможно вычислить косеканс угла с нулевым синусом.\n";
                    }
                    break;
                }
                case 0: return;
                default: cout << "Некорректный выбор\n";
            }
            break;
        }
        case 0: return;
        default: cout << "Некорректный выбор\n";
    }
}

// Главный метод программы
int main() {
    Calculator();
    return 0;
}