#include <iostream>
#include <string>



class Figure {

protected:
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int A = 50;
	int B = 60;
	int C = 70;
	int D = 80;
	int sides = 0;
	std::string name = "������";

public:

	Figure() {
	}
	
};

class Triangle : public Figure {
public:
	Triangle() {
		
		name = "�����������";
		sides = 3;
	}
	void printTriangle() {
		std::cout << name << ": " << std::endl;

		std::cout << "�������: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << "����: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << std::endl;
	}
};


class RightTriangle : public Triangle {
public:
	RightTriangle() {
		C = 90;
		name = "������������� �����������";
	}
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle() {
		a = c = 10;
		A = C = 50;
		name = "�������������� �����������";
	}
};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle() {
		a = b = c = 30;
		A = B = C = 60;
		name = "�������������� �����������";
	}
};


class Quadrangle : public Figure {
public:
	Quadrangle() {
		sides = 4;
		name = "���������������";
	}
	void printQuadrangle() {
		std::cout << name << ": " << std::endl;

		std::cout << "�������: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c;
		std::cout << " d = " << d << std::endl;
		std::cout << "����: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C;
		std::cout << " D = " << D << std::endl;
		std::cout << std::endl;
	}

};

class Rectangle : public Quadrangle {
public:
	Rectangle() {
		a = c = 10;
		b = d = 20;
		A = B = C = D = 90;
		name = "�������������";
	}
};

class Square : public Rectangle {
public:

	Square() {
		a = b = c = d = 20;
		name = "�������";
	}
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram() {
		a = c = 20;
		b = d = 30;
		A = C = 30;
		B = D = 40;
		name = "��������������";

	}
};

class Diamond : public Parallelogram {
public:
	Diamond() {
		a = b = c = d = 30;
		name = "����";
	}
};



int main() {



	setlocale(LC_ALL, "Russian");

	Triangle tri;
	tri.printTriangle();
	RightTriangle rt;
	rt.printTriangle();
	IsoscelesTriangle it;
	it.printTriangle();
	EquilateralTriangle et;
	et.printTriangle();
	Quadrangle quadr;
	quadr.printQuadrangle();
	Rectangle rect;
	rect.printQuadrangle();
	Square square;
	square.printQuadrangle();
	Parallelogram paral;
	paral.printQuadrangle();
	Diamond diamond;
	diamond.printQuadrangle();


	return 0;
}