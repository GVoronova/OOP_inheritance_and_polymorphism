#include <iostream>
#include <string>



class Figure {

protected:
	
	int sides = 0;
	std::string name = "������";

public:

	Figure() {}
	
	virtual void printFigure() {
	}
};

class Triangle : public Figure {
protected:
	int a = 10;
	int b = 20;
	int c = 30;
	int A = 50;
	int B = 60;
	int C = 70;
public:
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		name = "�����������";
		sides = 3;
		
	}

	Triangle() {
		
		name = "�����������";
		sides = 3;
	}

	void printFigure() override {
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
	RightTriangle(int a, int b, int c, int A, int B) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		C = 90;
		name = "������������� �����������";
	}

	RightTriangle() {
		C = 90;
		name = "������������� �����������";
	}
	
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(int a, int b,  int A, int B) {
		this->a = a;
		this->b = b;
		this->A = A;
		this->B = B;
		c = a;
		C = A;
		name = "�������������� �����������";
	}

	IsoscelesTriangle() {
		a = c = 10;
		A = C = 50;
		name = "�������������� �����������";
	}

};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int a) {
		this->a = a;
		b = c = a;
		A = B = C = 60;
		name = "�������������� �����������";
	}

	EquilateralTriangle() {
		a = b = c = 30;
		A = B = C = 60;
		name = "�������������� �����������";
	}
};


class Quadrangle : public Figure {

protected:
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int A = 50;
	int B = 60;
	int C = 70;
	int D = 80;

public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		sides = 4;
		name = "���������������";
	}

	Quadrangle() {
		sides = 4;
		name = "���������������";
	}
	void printFigure() override {
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
	Rectangle(int a, int b) {
		this->a = a;
		this->b = b;
		c = a;
		d = b;
		A = B = C = D = 90;
		name = "�������������";
	}

	Rectangle() {
		a = c = 10;
		b = d = 20;
		A = B = C = D = 90;
		name = "�������������";
	}
};

class Square : public Quadrangle {

public:
	Square(int a) {
		this->a = a;
		b = c = d = a;
		A = B = C = D = 90;
		name = "�������";
	}

	Square() {
		a = b = c = d = 10;
		A = B = C = D = 90;
		name = "�������";
	}
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int a, int b, int A, int B) {
		this->a = a;
		this->b = b;
		this->A = A;
		this->B = B;
		c = a;
		d = b;
		C = A;
		D = B;
		name = "��������������";
	}

	Parallelogram() {
		a = c = 10;
		b = d = 20;
		A = C = 50;
		B = D = 80;
		name = "��������������";
	}
};

class Diamond : public Quadrangle {
public:
	Diamond(int a, int A, int B) {
		this->a = a;
		this->A = A;
		this->B = B;
		b = c = d = a;
		C = A;
		D = B;
		name = "����";
	}
	Diamond() {
		a = b = c = d = 10;
		A = C = 50;
		B = D = 80;
		name = "����";
	}
};

void print_info(Figure* figure) {
	Triangle tri;
	figure = &tri;
	figure->printFigure();

	RightTriangle rt;
	figure = &rt;
	figure->printFigure();

	IsoscelesTriangle it;
	figure = &it;
	figure->printFigure();
	
	EquilateralTriangle et;
	figure = &et;
	figure->printFigure();
	
	Quadrangle quadr;
	figure = &quadr;
	figure->printFigure();

	Rectangle rect;
	figure = &rect;
	figure->printFigure();

	Square square;
	figure = &square;
	figure->printFigure();
	
	Parallelogram paral;
	figure = &paral;
	figure->printFigure();

	Diamond diamond;
	figure = &diamond;
	figure->printFigure();
}


int main() {

	setlocale(LC_ALL, "Russian");
	
	Figure figure;
	print_info(&figure);
	
	return 0;
}