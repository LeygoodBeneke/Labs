#include <iostream>
#define SUM(a, b) a + b
using namespace std;

void func(int a) {
    static int tmp = 0;
    cout << SUM(a, tmp) << '\n';
    tmp = a;
}