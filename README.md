#include <iostream>
#include <cmath>
#include <stdexcept>

// Определение постоянной Pi
const double PI = 3.14159265358979323846;

// Главная функция для работы с алгебраическими операциями
void algebraAndTrigonometryCalculator() {
    std::cout << "Алгебра и тригонометрия\n";
    std::cout << "1. Алгебраические функции\n";
    std::cout << "2. Тригонометрические функции\n";
    std::cout << "0. Назад\n";
    std::cout << "Ваш выбор: ";
    int choice;
    std::cin >> choice;

    switch(choice) {
        case 1: {
            std::cout << "Алгебраические функции\n";
            std::cout << "1. Корень квадратный\n";
            std::cout << "2. Возведение в степень\n";
            std::cout << "3. Факториал\n";
            std::cout << "0. Назад\n";
            std::cout << "Ваш выбор: ";
            int subchoice;
            std::cin >> subchoice;

            switch(subchoice) {
                case 1: {
                    double number;
                    std::cout << "Число: ";
                    std::cin >> number;
                    if (number < 0) {
                        std::cout << "Ошибка: нельзя извлечь корень из отрицательного числа.\n";
                    } else {
                        std::cout << "Корень квадратный: " << sqrt(number) << "\n";
                    }
                    break;
                }
                case 2: {
                    double base, exponent;
                    std::cout << "Основание: ";
                    std::cin >> base;
                    std::cout << "Показатель степени: ";
                    std::cin >> exponent;
                    std::cout << "Результат возведения в степень: " << pow(base, exponent) << "\n";
                    break;
                }
                case 3: {
                    unsigned long long factorialResult = 1;
                    int number;
                    std::cout << "Число для факториала: ";
                    std::cin >> number;
                    if (number < 0) {
                        std::cout << "Ошибка: факториал определен только для неотрицательных целых чисел.\n";
                    } else {
                        for(int i = 1; i <= number; ++i) {
                            factorialResult *= i;
                        }
                        std::cout << "Факториал: " << factorialResult << "\n";
                    }
                    break;
                }
                case 0: return;
                default: std::cout << "Некорректный выбор\n";
            }
            break;
        }
        case 2: {
            std::cout << "Тригонометрические функции\n";
            std::cout << "1. Синус\n";
            std::cout << "2. Косинус\n";
            std::cout << "3. Тангенс\n";
            std::cout << "4. Котангенс\n";
            std::cout << "5. Секанс\n";
            std::cout << "6. Косеканс\n";
            std::cout << "0. Назад\n";
            std::cout << "Ваш выбор: ";
            int subchoice;
            std::cin >> subchoice;

            switch(subchoice) {
                case 1: {
                    double angleDegrees;
                    std::cout << "Угол в градусах: ";
                    std::cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;  // Преобразуем градусы в радианы
                    std::cout << "Синус угла: " << sin(angleRadians) << "\n";
                    break;
                }
                case 2: {
                    double angleDegrees;
                    std::cout << "Угол в градусах: ";
                    std::cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    std::cout << "Косинус угла: " << cos(angleRadians) << "\n";
                    break;
                }
                case 3: {
                    double angleDegrees;
                    std::cout << "Угол в градусах: ";
                    std::cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    std::cout << "Тангенс угла: " << tan(angleRadians) << "\n";
                    break;
                }
                case 4: {
                    double angleDegrees;
                    std::cout << "Угол в градусах: ";
                    std::cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    double tangentValue = tan(angleRadians);
                    if (abs(tangentValue) > 1e-10) {
                        std::cout << "Котангенс угла: " << 1 / tangentValue << "\n";
                    } else {
                        std::cout << "Ошибка: невозможно вычислить котангенс угла с нулевым тангенсом.\n";
                    }
                    break;
                }
                case 5: {
                    double angleDegrees;
                    std::cout << "Угол в градусах: ";
                    std::cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    double cosineValue = cos(angleRadians);
                    if (abs(cosineValue) > 1e-10) {
                        std::cout << "Секанс угла: " << 1 / cosineValue << "\n";
                    } else {
                        std::cout << "Ошибка: невозможно вычислить секанс угла с нулевым косинусом.\n";
                    }
                    break;
                }
                case 6: {
                    double angleDegrees;
                    std::cout << "Угол в градусах: ";
                    std::cin >> angleDegrees;
                    double angleRadians = angleDegrees * PI / 180.;
                    double sineValue = sin(angleRadians);
                    if (abs(sineValue) > 1e-10) {
                        std::cout << "Косеканс угла: " << 1 / sineValue << "\n";
                    } else {
                        std::cout << "Ошибка: невозможно вычислить косеканс угла с нулевым синусом.\n";
                    }
                    break;
                }
                case 0: return;
                default: std::cout << "Некорректный выбор\n";
            }
            break;
        }
        case 0: return;
        default: std::cout << "Некорректный выбор\n";
    }
}

// Главный метод программы
int main() {
    algebraAndTrigonometryCalculator();
    return 0;
}
