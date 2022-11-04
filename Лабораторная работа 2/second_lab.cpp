#include<iostream>

int main() {
    setlocale(LC_ALL, "rus");

    int a;
    while (true) {
        std:: cout << "Введите целое положительное число: ";
        std:: cin >> a;
        if (a > 0) break;
    }
    int sum = 0;
    for (int num = 1; num <= a; num++) {
        sum += num;
    }
    std:: cout << "Сумма всех чисел от 1 до введённого числа: " << sum << '\n';

    int arr[10];
    for (size_t i = 0; i < 10; i++) arr[i] = i * i;

    std:: cout << "Все 10 чисел из массива: ";
    for (size_t i = 0; i < 10; i++) std:: cout << arr[i] << " ";
    std:: cout << '\n';

    std:: cout << "Числа, стоящие на чётных позициях: ";
    for (size_t i = 0; i < 10; i++) {                // заметим, что рациональнее было бы увеличивать i на 2 (i+=2)
        if (i % 2 == 0) std:: cout << arr[i] << " "; // вместо использования условного оператора
    }
    std:: cout << '\n';
    
    sum = 0;
    for (size_t i = 0; i < 10; i++) {                // аналогичная проблема, только здесь
        if (i % 2 == 1) sum += arr[i];               // при том стоило задать изначальное значение i = 1
    }
    std:: cout << "Сумма элементов на нечётных позициях: " << sum;
    return 0;
}
