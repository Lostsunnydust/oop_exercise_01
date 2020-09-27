/**
Реализовать класс Complex для работы с комплексными числами. Обязательно должны быть присутствовать арифметические  операции и операции сравнения модулей.
**/
#include <iostream>
#include <cmath>

class Complex {
private:
    double a;//действительная часть числа
    double b;//мнимая часть числа
public:

    void read() {
        std::cout << "Введите действительную и мнимую часть числа ";
        std::cin >> a >> b;
    }

    Complex add(Complex term) { //сложение
        Complex result;
        result.a = a + term.a;
        result.b = b + term.b;
        if (result.b >= 0) {
            std::cout << "Сумма двух комплексных чисел " << result.a << "+" << result.b << "i" << std::endl;
        }
        else {
            std::cout << "Сумма двух комплексных чисел " << result.a << result.b << "i" << std::endl;
        }
        return result;
    }

    Complex sub(Complex term) { //умножение
        Complex result;
        result.a = a - term.a;
        result.b = b - term.b;
        if (result.b >= 0) {
            std::cout << "Разность двух комплексных чисел " << result.a << "+" << result.b << "i" << std::endl;
        }
        else {
            std::cout << "Разность двух комплексных чисел " << result.a << result.b << "i" << std::endl;
        }
        return result;
    }

    Complex mul(Complex term) {
        Complex result;
        result.a = (a * term.a) - (b * term.b);
        result.b = (a * term.b) + (b * term.a);
        if (result.b >= 0) {
            std::cout << "Результат произведения комплексных чисел " << result.a << "+" << result.b << "i" << std::endl;
        }
        else {
            std::cout << "Результат произведения комплексных чисел " << result.a << result.b << "i" << std::endl;
        }
        return result;

    }

    Complex div(Complex term) {
        Complex result;
        result.a = (a * term.a) + (b * term.b);
        result.b = ((b * term.a) - (a * term.b)) / (term.a * term.a + term.b * term.b);
        if (result.b >= 0) {
            std::cout << "Результат деления комплексных чисел " << result.a << "+" << result.b << "i" << std::endl;
        }
        else {
            std::cout << "Результат деления комплексных чисел " << result.a << result.b << "i" << std::endl;
        }
        return result;
    }

    Complex equ(Complex term) {
        Complex result;
        if ((a == term.a) && (b == term.b)) {
            std::cout << "Два комплексных числа равны " << std::endl;
        }
        else {
            std::cout << "Два комплексных числа не равны " << std::endl;
        }
    }

    void conj() {
        Complex result;
        result.a = a;
        result.b = -b;
        if (result.b > 0) {
            std::cout << "сопряженное число равно " << result.a << "+" << result.b << "i" << std::endl;
        }
        else {
            std::cout << "сопряженное число равно " << result.a << result.b << "i" << std::endl;
        }

    }

    Complex modul(Complex term) {
        Complex result;
        result.a = sqrt(a * a + b * b);
        result.b = sqrt(term.a * term.a + term.b * term.b);
        if (result.a > result.b) {
            std::cout << "Модуль первого числа больше модуля второго" << std::endl;
        }
        else if (result.b > result.a) {
            std::cout << "Модуль второго числа больше модуля первого" << std::endl;
        }
        else {
            std::cout << "Модули двух чисел равны" << std::endl;
        }

    }
};

int main() {
    Complex number1, number2, result;
    number1.read();
    number2.read();
    std::cout << "\n";
    result = number1.add(number2);
    result = number1.sub(number2);
    result = number1.mul(number2);
    result = number1.div(number2);
    result = number1.equ(number2);
    std::cout << "Для первого числа ";
    number1.conj();
    std::cout << "Для второго числа ";
    number2.conj();
    number1.modul(number2);

}

