#include<iostream>
#include<iomanip>

int main() {
    setlocale(LC_ALL, "rus");

    double first, second;
    std:: cin >> first >> second;
    std:: cout << "Среднее арифметическое двух введённых чисел: " << (first + second) / 2;

    std:: cout << '\n' << "Введите знак операции: +, -, * или /:";
    char c; std:: cin >> c;

    double answer;
    bool error = false;
    // if (c == '*') answer = first * second;                    <- условный оператор
    // else if (c == '+') answer = first + second;
    // else if (c == '-') answer = first - second;
    // else if (c == '/') answer = first / second;
    // else error = true;

    switch (c) {
        case '+': answer = first + second; break;             // <- switch-case
        case '-': answer = first - second; break;
        case '*': answer = first * second; break;
        case '/': answer = first / second; break;
        default: error = true;
    }

    if (error == false) std:: cout << first << " " << c << " " << second << " = " << answer;
    else std:: cout << "Неправильный формат ввода\n";
    return 0;
}
