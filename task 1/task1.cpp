#include <iostream>
#include <string>

// ������� 1.
// ����� �������� � ������� �� ������� ����� ���� ���� ������� �� ����� ���������.

int vn = 2;

void variant(std::string a) {
	int v = a.size() % vn + 1;
	std::cout << v;
}

int main() {
	setlocale(LC_ALL, "Russian");
	std::string sn;
	
	std::cout << "������� ���� �������: ";
	std::cin >> sn;
	std::cout << "��� �������: ";
	variant(sn);
	
    return 0;
}
