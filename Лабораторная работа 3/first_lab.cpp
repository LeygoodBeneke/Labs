#include <iostream>

int main() {
    int a = 1011;
    int* pointer = &a;
    std:: cout << pointer << " " << *pointer << '\n';
    *pointer = 2000;
    std:: cout << a << '\n';

    int arr[3] = {3, 2, 1};
    for (int i = 0; i < 3; i++) std:: cout << *(arr + i) << " ";
    std:: cout << '\n';

    int b = 5;
    int* const second_pointer = &b;
    // second_pointer = &a <- ошибка!
    *second_pointer = 6;
    std:: cout << b << '\n';
    return 0;
}