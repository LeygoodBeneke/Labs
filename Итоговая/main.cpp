#include <bits/stdc++.h>
#include "BTreeBody.h"

void readme() {
	std:: cout << "+----------------------------------------------------------------+\n";
	std:: cout << "| 1 - Добавить число в последовательность                        |\n";
	std:: cout << "| 2 - вывести текущее дерево                                     |\n";
	std:: cout << "| 3 - удалить элемент дерева                                     |\n";
	std:: cout << "| 4 - Найти индекс элмента в дереве (-1 - элемента в дереве нет) |\n";
	std:: cout << "| 5 - Завершить работу программы                                 |\n";
	std:: cout << "| 6 - Справка                                                    |\n";
	std:: cout << "+----------------------------------------------------------------+\n";
}

int main() {
	setlocale (LC_ALL,"Russian");
	BTree* no = new BTree();
	int n; std:: cout << "Введите количество чисел последовательности: ";
	std:: cin >> n;
	std:: cout << "Введите последовательность чисел: ";
	for (int i = 0; i < n; i++) {
		int x; std:: cin >> x;
		no->add(x);
	}
	readme();
	int x = 1;
	while (x != 5) {
		std:: cout << "Введите команду:" << '\n';
		std:: cin >> x;
		if (x > 6 || x < 1) {
			std:: cout << x << " - Неверная команда. Поробуйте ещё раз\n";
			continue;
		}
		if (x == 5) return 0;
		if (x == 1) {
			std:: cout << "Введите число: ";
			int y; std:: cin >> y;
			no->add(y);
		}
		if (x == 2) {
			std:: cout << "Текущее дерево: ";
			no->print();
			std:: cout << '\n';
		}
		if (x == 3) {
			std:: cout << "Введите число: ";
			int y; std:: cin >> y;
			no->del(y);
		}
		if (x == 4) {
			std:: cout << "Введите число: ";
			int y; std:: cin >> y;
			no->search(y);
		}
		if (x == 6) { readme(); }
	}
}