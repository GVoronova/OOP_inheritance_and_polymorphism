#include <iostream>



class Figure {

protected:
	int sides = 0;
	std::string name = "������";

public:
	
	Figure() {
	}
	void printFigure() {
		std::cout << name << ": " << sides << std::endl;
	}
};

class Triangle : public Figure {

public:
	Triangle() {
		sides = 3;
		name = "�����������";
	}

};

class Quadrangle : public Figure {
public:
	Quadrangle () {
		sides = 4;
		name = "���������������";
	}	

};

int main() {



	setlocale(LC_ALL, "Russian");

	std::cout << "���������� ������: " << std::endl;
	Figure figure;
	Triangle tri;
	Quadrangle quadr;
	
	figure.printFigure();
	tri.printFigure();
	quadr.printFigure();
	

	return 0;
}