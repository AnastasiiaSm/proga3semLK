#include <iostream>

/*
Для класса Image реализовать:


class Image {
  int* img;
  int mx,int my;
public:
  Image(int tmx, int tmy):mx(tmx),my(tmy){
    img = new int[mx*my]();
  }
  vitual ~Image(); // Реализовать
  int get(int x,int y) {
    return img[y*my+x];
  } // Добавить обработку ошибок при помощи исключений - выбрасывать целочисленное исключение при выходе за границы массива
  int set(int x,int y,int color) { // Добавить обработку ошибок при помощи исключений  - выбрасывать целочисленное исключение при выходе за границы массива
    img[y*my+x]=color;
  }
  friend bool operator ==(Image &arrInt, Image &arrInt2 ); // Реализовать  // Реализовать  для варианта 3
};

2. Реализовать перегрузку одной из операций
3. Реализовать функцию main и показать использование класса Image
*/

class Image {
	int* img;
	int mx,int my;
public:
	Image(int tmx, int tmy):mx(tmx),my(tmy) {
		img = new int[mx*my];
	}
	vitual ~Image() {
		delete[] img;
}
	int get(int x,int y) {
		try{
			if (mx * my < y * my + x)
				throw 132;
			if ((mx < x && my < y) || mx < x || my < y)
				throw 101;
		}
		catch (int error)
    	{
        	std::cout << "OSHIBKA: " << error << std::endl;
        	exit(1);
    	}
		return img[y*my+x];
	}
	int set(int x,int y,int color) {
		try {
			if (mx * my < y*my + x)
				throw 123;
			if (color > 255 || color < -1)
				throw 111;
		}
		catch (int error)
    	{
        	std::cout << "OSHIBKA: " << error << std::endl;
        	exit(1);
    	}
		img[y*my+x]=color;
	}
	friend bool operator ==(Image &arrInt, Image &arrInt2 ) {
		return (arrInt.mx == arrInt2.mx && arrInt.my == arrInt2.my);
	}
	void show() {
		for (int i = 0; i < my; i++){
			for (int j = 0; j < mx; j++)
				std::cout << img[i * mx + j] << " ";
			std::cout << endl;
		}
	}
};

int main() {
	Image a(1, 1);
	img.set(1, 0, 0);
    img.set(1, 0, 5);
    img.set(1, 1, 10);
    img.set(1, 2, 10);
    return 0;
}
