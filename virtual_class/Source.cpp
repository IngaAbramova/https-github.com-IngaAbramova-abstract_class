#include <iostream>
#include <cstring>
//Абстрактный класс - фигура
class Figure
{
	//Чисто виртуальные функции
public:
	//Площадь
	virtual double getSquare() = 0;
	//Периметр
	virtual double getPerimeter() = 0;
	
};
//Класс - прямоугольник
class Rectangle : public Figure
{
private:
	//Ширина
	double width;
	//Высота
	double height;
public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}
	//Вычисление площади
	double getSquare() override
	{
		return width * height;
	}
	//Вычисление периметра
	double getPerimeter() override
	{
		return width * 2 + height * 2;
	}
	
};
//Класс - круг
class Circle : public Figure
{
private:
	//Рдиус
	double radius;
public:
	//Конструктор
	Circle(double r) 
	{
		radius = r;
	}
	//Вычисление площади
	double getSquare() override
	{
		return radius * radius * 3.14;
	}
	//Вычисление периметра
	double getPerimeter() override
	{
		return 2 * 3.14 * radius;
	}
	
};

int main()
{
	setlocale(LC_ALL, "Russian");
	//Создание объектов класса
	Rectangle rect(30, 50);
	Circle circle(30);

	std::cout << "Площадь прямоугольника: " << rect.getSquare() << std::endl;
	std::cout << "Периметр круга: " << circle.getPerimeter() << std::endl;
	system("pause");
	return 0;
}