#include <iostream>  // Підключаємо бібліотеку для вводу/виводу

int main(){
    double x = 1.0;          // Початкове значення x
    double x_step = 0.5;     // Крок збільшення x
    double x_finish = 4.0;   // Кінцеве значення для x

    // Цикл, який повторюється, поки x <= x_finish
    while(x <= x_finish){
        // Обчислюємо z = |x| + x^3
        // Якщо x < 0, то використовуємо -x, в іншому випадку x
        double z = (x < 0 ? -x : x) + x * x * x;
        
        // Обчислюємо y = z * (sin(x + 2) * sin(x + 2)) / 2 + x
        // Замість функції std::pow використовуємо просто множення для квадрату
        double sin_value = (x + 2);  // Обчислюємо значення для синуса
        double y = z * sin_value * sin_value / 2 + x;  // Обчислюємо y
        
        // Виводимо значення x і y на екран
        std::cout << "when x: " << x << ", then y: " << y << std::endl;

        // Збільшуємо x на крок x_step
        x += x_step;
    }

    return 0;  // Завершуємо програму
}
