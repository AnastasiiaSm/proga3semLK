#include <iostream>
#include <bitset>
#include <string>

/*Задание лекция 3 - Software.


Написать программу, которая:
- умеет читать тектосвый файл, который может быть указан ей в качестве аргумента коммандной строки и содержит названия протоколов (одно на строке)
Пример файла:

BinaryProtocol
HexProtocol 
HexProtocol

- Реализует классы Protocol, BinaryProtocol, HexProtocol
- Классы BinaryProtocol, HexProtocol являются наследниками Protocol
- Класс Protocol определяет виртуальный метод void send(char* buf, int len), который ничего не делает
- Классы BinaryProtocol, HexProtocol переопределяют виртуальный метод void send(char* buf, int len)
- void BinaryProtocol::send(char* buf, int len) - печатает на экран содержимое строки buf в виде бинарного кода (т.е. при помощи "0101 0101 0100 1000")
- void HexProtocol::send(char* buf, int len)    - печатает на экран содержимое строки buf в виде шестнатеричного кода (т.е. так "0xff 0xff")
*/

class Protocol {
public:
	virtual void send(char* buf, int len)
};

class BinaryProtocol : public Protocol {
public:
	void send(char* buf, int len) {
		for (int i = 0; i < len){
			if (buf[i] == 0)
				break;
			int a = 128;
			while(a > 0) {
				std::cout << bool(buf[i]&a)
				a = a >> 1;
			}
			std::cout << " ";
			i = i + 1;
		}
	}
};

class HexProtocol : public Protocol {
public:
	void send(char* buf, int len) {
		for (int i = 0; i < strlen(buf)) {
			if (buf[i] != NULL)
				std::cout << "0x" << hex << (int)(buf[i] & 0xff) << " ";
			i = i + 1;
		}
	}
};
