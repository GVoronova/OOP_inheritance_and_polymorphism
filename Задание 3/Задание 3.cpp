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
	std::string name = "Фигура";
	bool checking = 0;

public:

	Figure() {
	}
	virtual bool check() {

		if (sides == 0) {
			checking = 1;
		} 
		return checking;
	}

	virtual void print_info() {
		
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		if (sides = 4) {
		std::cout << " d = " << d << std::endl;
		}
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		if (sides = 4) {
		std::cout << " D = " << D << std::endl;

		}
		std::cout << std::endl;
	}
};

class Triangle : public Figure {
public:
	Triangle() {
		name = "Треугольник";
		sides = 3;
	}
	
	bool check() override {
		checking = 0;
		if (sides == 3 && A + B + C == 180) {
			checking = 1;
		}
		return checking;
	}

	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << std::endl;
	}
};


class RightTriangle : public Triangle {
public:
	RightTriangle() {
		C = 90;
		name = "Прямоугольный треугольник";
	}
	bool check() override {
		checking = 0;
		if (C == 90) {
			checking = 1;
			Triangle::check();
		}
		else {
			checking = 0;
		} 
		return checking;
	}

	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << std::endl;
	}
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle() {
		a = c = 10;
		A = C = 50;
		name = "Равнобедренный треугольник";
	}
	bool check() override {
		checking = 0;
		if (a == c && A == C) {
			checking = 1;
			Triangle::check();
		}
		else {
			checking = 0;
		} 
		
		return checking;
	}
	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << std::endl;
	}
};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle() {
		a = b = c = 30;
		A = B = C = 60;
		name = "Равносторонний треугольник";
	}
	bool check() override {
		checking = 0;
		if ((a = b = c) && (A = B = C)) {
			checking = 1;
			Triangle::check();
		}
		return checking;

	}

	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << std::endl;
	}
};


class Quadrangle : public Figure {
public:
	Quadrangle() {
		sides = 4;
		name = "Четырехугольник";
	}
	bool check() override {
		checking = 0;
		if (sides == 4 && A + B + C + D == 360) {
			checking = 1;
		}
		 return checking;
	}
	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << " d = " << d << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
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
		name = "Прямоугольник";
	}
	bool check() override {
		checking = 0;
		if (a == c && b == d && (A = B = C = D = 90)) {
			checking = 1;
			Quadrangle::check();
		}
		else {
			checking = 0;
		} return checking;
	}
	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << " d = " << d << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << " D = " << D << std::endl;
		std::cout << std::endl;
	}
};

class Square : public Rectangle {
public:

	Square() {
		a = b = c = d = 20;
		name = "Квадрат";
	}
	bool check() override {
		checking = 0;
		if (a = b = c = d = 20) {
			checking = 1;
			Quadrangle::check();
		}
		else {
			checking = 0;
		} return checking;
	}
	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << " d = " << d << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << " D = " << D << std::endl;
		std::cout << std::endl;
	}
	
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram() {
		a = c = 20;
		b = d = 30;
		A = C = 30;
		B = D = 40;
		name = "Параллелограмм";

	}
	bool check() override {
		checking = 0;
		if (a == c && b == d && A == C && B == D) {
			checking = 1;
			Quadrangle::check();
		}
		else {
			checking = 0;
		} return checking;
	}
	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << " d = " << d << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << " D = " << D << std::endl;
		std::cout << std::endl;
	}
};

class Diamond : public Parallelogram {
public:
	Diamond() {
		a = b = c = d = 30;
		name = "Ромб";
	}
	bool check() override {
		checking = 0;
		if (a = b = c = d) {
			checking = 1;
			Quadrangle::check();
		}
		else {
			checking = 0;
		} return checking;
	}
	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (checking == 1) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны: a = " << a;
		std::cout << " b = " << b;
		std::cout << " c = " << c << std::endl;
		std::cout << " d = " << d << std::endl;
		std::cout << "Углы: A = " << A;
		std::cout << " B = " << B;
		std::cout << " C = " << C << std::endl;
		std::cout << " D = " << D << std::endl;
		std::cout << std::endl;
	}
};



int main() {

	setlocale(LC_ALL, "Russian");

	Triangle tri;
	RightTriangle rt;
	IsoscelesTriangle it;
	EquilateralTriangle et;
	Quadrangle quadr;
	Rectangle rect;
	Square square;
	Parallelogram paral;
	Diamond diamond;
	
	Figure figure_base;
	figure_base.check();
	figure_base.print_info();
	
	Figure* figure = &tri;
	figure->check();
	figure->print_info();

	figure = &rt;
	figure->check();
	figure->print_info();
	
	figure = &it;
	figure->check();
	figure->print_info();

	figure = &et;
	figure->check();
	figure->print_info();

	figure = &quadr;
	figure->check();
	figure->print_info();

	figure = &rect;
	figure->check();
	figure->print_info();

	figure = &square;
	figure->check();
	figure->print_info();

	figure = &paral;
	figure->check();
	figure->print_info();
	
	figure = &diamond;
	figure->check();
	figure->print_info();


	return 0;
}