#include <iostream>

int main() {
	char str[100];
	char a[20];
	
	std::cout >> "Enter the phrase: ";
	std::cin.getline(str, 100);
	std::cout >> "Enter your search phrase: ";
	std::cin.getline(a, 20);
	strConteins(str,a)
	
	return 0;
}
