#include "Rational.h"
#include <iostream>
#include <math.h>

using namespace std;
void Rational::SetA(int value)
{
	if (value > 0)
		pair.SetA(value);
	else
		pair.SetA(0);
}

void Rational::SetB(int value)
{
	if (value > 0)
		pair.SetB(value);
	else
		pair.SetB(0);
}


void Rational::Init(int a, int b)
{

	SetA(a);
	SetB(b);

}

void Rational::Read()
{
	double A, B;

	cout << "a = "; cin >> A;
	cout << "b = "; cin >> B;

}

void Rational::Display() const
{
	pair.Display();
}
Rational Rational::minus(Rational a, Rational b)
{
	pair.SetA(a.GetA() * b.GetB() - a.GetB() * b.GetA());
	pair.SetB(a.GetB() * b.GetB());
	cout << "minus = " << endl;
	return *this;
}
Rational Rational::plus(Rational a, Rational b)
{
	pair.SetA(a.GetA() * b.GetB() + a.GetB() * b.GetA());
	pair.SetB(a.GetB() * b.GetB());
	cout << "plus = " << endl;
	return *this;
}
Rational Rational::div(Rational a, Rational b)
{
	pair.SetA(a.GetA() * b.GetB());
	pair.SetB(a.GetB() * b.GetA());
	cout << "div = " << endl;
	return *this;
}
void Rational::Pair::SetA(int value)
{
	first = value;
}

void Rational::Pair::SetB(int value)
{
	second = value;
}
bool Rational::Pair::Init(int first1, int second1)
{
	if ((-100 <= first <= 100) && (-100 <= second <= 100))
	{
		first = first1;
		second = second1;
		return true;
	}
	else
		return false;
}

void Rational::Pair::Read()
{
	int a, b;
	do
	{
		cout << " enter a = "; cin >> a;
		cout << "enter b = "; cin >> b;
	} while (!(Init(a, b)));
}
Rational::Pair Rational::Pair::minus(Pair a, Pair b)
{
	Pair tmp;
	tmp.first = a.first - b.first;
	tmp.second = a.second - b.second;
	cout << "Minus = " << endl;
	return tmp;

}
Rational::Pair Rational::Pair::multiply(Pair a, Pair b)
{
	Pair tmp;
	tmp.first = a.first * b.first;
	tmp.second = a.second * b.second;
	cout << "Multiply = " << endl;
	return tmp;

}
void Rational::Pair::Display() const
{
	cout << "a = " << first << endl;
	cout << "b = " << second << endl;
}

bool Rational::Pair::equal(Pair a, Pair b)
{

	if (a.first == b.first && a.second == b.second)
		return true;
	else
		return false;
}

