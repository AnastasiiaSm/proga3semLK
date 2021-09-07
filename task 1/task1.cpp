#include <iostream>
#include <string>

// Вариант 1.
// Номер варианта – остаток от деления суммы всех букв фамилии на число вариантов.

int vn = 2;

void variant(std::string a) {
	int v = a.size() % vn + 1;
	std::cout << v;
}

int main() {
	setlocale(LC_ALL, "Russian");
	std::string sn;
	
	std::cout << "Введите Вашу фамилию: ";
	std::cin >> sn;
	std::cout << "Ваш вариант: ";
	variant(sn);
	
    return 0;
}
