#include <iostream>

/*
1. Íàïèñàòü êëàññ äëÿ ðàáîòû ñî ñòðîêàìè

class FooString {
   char* buf;
public:
   FooString(char* tbuf);
   ~FooString();
   void show ();                    

   bool compare(char* str);              // Âàðèàíò 3 - true – åñëè ñòðîêè ðàâíû

2. Äëÿ ìåòîäà ïî âàðèàíòó íàïèñàòü ìîäóëüíûé òåñòû, ïðîâåðÿþùèå åãî ðàáîòó
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
//íåò äèíàì. âûäåë. ïàìÿòè
	delete[] buf;
}

void FooString::show() {
	int i=0;
	while (buf[i] != '\0') {
		std::cout << buf[i];
		++i;
   	}
	std::cout << std::endl;
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
	char t[2] = "ab";
	FooString str($a[0]);
	if (t.compare('ab0') ) {
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
