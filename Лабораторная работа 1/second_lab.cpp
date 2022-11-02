#include<iostream>
#include<string>

#define GetStringVal(variable) std:: cout << #variable << " = " << variable << '\n'

int main() {                                                                
    setlocale(LC_ALL, "rus");                                              

    int tmp = 150;
    float ftmp = 15.933;
    short small = 250;
    GetStringVal(tmp);
    GetStringVal(ftmp);
    GetStringVal(small);

    short day = 11;
    std:: string month = "Ноябрь";
    int year = 2003;
    std:: cout << "Моя дата рождения: " << day << " " << month << " " << year << " года\n";

    const float tmpf2 = 2.3;
    const std:: string winstr = "WINDOWS";
    std:: cout << tmpf2 << " " << winstr << '\n';
    return 0;                                                         
}                                                                     