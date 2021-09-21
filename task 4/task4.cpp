#include <iostream>
#include <bitset>
#include <string>

/*������� ������ 3 - Software.


�������� ���������, �������:
- ����� ������ ��������� ����, ������� ����� ���� ������ �� � �������� ��������� ���������� ������ � �������� �������� ���������� (���� �� ������)
������ �����:

BinaryProtocol
HexProtocol 
HexProtocol

- ��������� ������ Protocol, BinaryProtocol, HexProtocol
- ������ BinaryProtocol, HexProtocol �������� ������������ Protocol
- ����� Protocol ���������� ����������� ����� void send(char* buf, int len), ������� ������ �� ������
- ������ BinaryProtocol, HexProtocol �������������� ����������� ����� void send(char* buf, int len)
- void BinaryProtocol::send(char* buf, int len) - �������� �� ����� ���������� ������ buf � ���� ��������� ���� (�.�. ��� ������ "0101 0101 0100 1000")
- void HexProtocol::send(char* buf, int len)    - �������� �� ����� ���������� ������ buf � ���� ��������������� ���� (�.�. ��� "0xff 0xff")
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
