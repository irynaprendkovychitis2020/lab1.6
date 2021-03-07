#pragma once
class Rational
{
public:
	class Pair
	{
	private:
		int first;
		int second;
	public:
		double GetA() const { return first; }
		double GetB() const { return second; }

		void SetA(int value);
		void SetB(int value);

		bool Init(int first, int second);
		void Display() const;
		void Read();

		bool equal(Pair a, Pair b);
		Pair minus(Pair a, Pair b);
		Pair multiply(Pair a, Pair b);
	};
	Pair pair;

public:
	double GetA() const { return pair.GetA(); }
	double GetB() const { return pair.GetB(); }

	void SetA(int value);
	void SetB(int value);

	void Init(int a, int b);
	void Display() const;
	void Read();
	Rational minus(Rational a, Rational b);
	Rational plus(Rational a, Rational b);
	Rational div(Rational a, Rational b);
};

