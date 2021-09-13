#include <iostream>

/*
1. Ќаписать класс дл€ работы со строками

class FooString {
   char* buf;
public:
   FooString(char* tbuf);
   ~FooString();
   void show ();                    

   bool compare(char* str);              // ¬ариант 3 - true Ц если строки равны

2. ƒл€ метода по варианту написать модульный тесты, провер€ющие его работу
*/

class FooString {
	char* buf;
public:
	FooString(char* tbuf);
	~FooString();
	void show ();   
	bool compare(char* str);
};

FooString::FooString(char* abuf) {
	this->buf = abuf;
}

FooString::~FooString() {
//нет динам. выдел. пам€ти
}

void FooString::show() {
	int i=0;
	while (buf[i] != '\0') {
		std::cout << buf[i];
		++i;
   }
}

bool FooString::compare(char* str){
	int i=0;
	while (buf[i] != '\0' || str[i] != '\0') {
	if (buf[i] != str[i]) {
		return false;
	}
		++i;
   }
	return true;
}

void tests() {
	FooString t('a');
	if (t.compare('a0') ) {
		std::cout << "no errors";
	}
	else {
		std::cout << "error"; 
   }
}

int main() {
	char a[97];
	char b[97];
	std::cin >> a >> b;
	FooString c(a);
	std::cout << t.compare(b);
	return 0;
}
