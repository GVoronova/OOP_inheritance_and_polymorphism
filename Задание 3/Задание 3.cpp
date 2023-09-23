#include <iostream>
#include <string>



class Figure {

protected:
	
	int sides = 0;
	std::string name = "Фигура";
	

public:

	Figure() {
	}
	virtual bool check() {

		if (sides == 0) {
			return true;
		} return false;
	}

	virtual void print_info() {
		
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
		name = "Треугольник";
		sides = 3;
	}

	Triangle() {

		name = "Треугольник";
		sides = 3;
	}
	
	bool check() override {
		if (sides == 3 && A + B + C == 180) {
			return true;
		} return false;
	}

	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (check() == 1) {
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
	RightTriangle(int a, int b, int c, int A, int B) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		C = 90;
		name = "Прямоугольный треугольник";
	}

	RightTriangle() {
		C = 90;
		name = "Прямоугольный треугольник";
	}

	bool check() override {
		if (Triangle::check() == true) {
			if (C == 90) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(int a, int b, int A, int B) {
		this->a = a;
		this->b = b;
		this->A = A;
		this->B = B;
		c = a;
		C = A;
		name = "Равнобедренный треугольник";
	}

	IsoscelesTriangle() {
		a = c = 10;
		A = C = 50;
		name = "Равнобедренный треугольник";
	}

	bool check() override {
		if (Triangle::check() == true) {
			if (a == c && A == C) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	
};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int a) {
		this->a = a;
		b = c = a;
		A = B = C = 60;
		name = "Равносторонний треугольник";
	}

	EquilateralTriangle() {
		a = b = c = 30;
		A = B = C = 60;
		name = "Равносторонний треугольник";
	}
	bool check() override {
		if (Triangle::check() == true) {
			if (a == b && a == c && A == B && A == C) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
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
		name = "Четырехугольник";
	}

	Quadrangle() {
		sides = 4;
		name = "Четырехугольник";
	}

	bool check() override {
		
		if (sides == 4 && A + B + C + D == 360) {
			return true;
		}
		 return false;
	}
	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (check() == 1) {
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
	Rectangle(int a, int b) {
		this->a = a;
		this->b = b;
		c = a;
		d = b;
		A = B = C = D = 90;
		name = "Прямоугольник";
	}

	Rectangle() {
		a = c = 10;
		b = d = 20;
		A = B = C = D = 90;
		name = "Прямоугольник";
	}

	bool check() override {
		if (Quadrangle::check() == true) {
			if (a == c && b == d && (A == 90 && B == 90 && C == 90 && D == 90)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}

	}
};

class Square : public Quadrangle {
public:
	Square(int a) {
		this->a = a;
		b = c = d = a;
		A = B = C = D = 90;
		name = "Квадрат";
	}

	Square() {
		a = b = c = d = 10;
		A = B = C = D = 90;
		name = "Квадрат";
	}

	bool check() override {
		if (Quadrangle::check() == true) {
			if (a == b && a == c && a == d) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
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
		name = "Параллелограмм";
	}

	Parallelogram() {
		a = c = 10;
		b = d = 20;
		A = C = 50;
		B = D = 80;
		name = "Параллелограмм";
	}

	bool check() override {
		if (Quadrangle::check() == true) {
			if (a == c && b == d && A == C && B == D) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
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
		name = "Ромб";
	}
	Diamond() {
		a = b = c = d = 10;
		A = C = 50;
		B = D = 80;
		name = "Ромб";
	}
	bool check() override {
		if (Quadrangle::check() == true) {
			if (a == b && a == c && a == d) {
				return true;
			} 
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
};

void print_info(Figure* figure, Triangle tri, RightTriangle rt, 
	IsoscelesTriangle it, EquilateralTriangle et, Quadrangle quadr, Rectangle rect, Square square, Parallelogram paral, Diamond diamond, Figure figure_base) {
	
	
	figure_base.check();
	figure_base.print_info();

	figure = &tri;
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
}

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
	Figure figure;
	Figure figure_base;

	print_info(&figure, tri, rt, it, et, quadr, rect, square, paral, diamond, figure_base);


	return 0;
}