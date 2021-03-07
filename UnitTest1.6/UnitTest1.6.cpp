#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.6/Rational.h"
#include "../lab 1.6/Rational.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational::Pair c;
			c.SetA(2);
			int test = c.GetA();
			Assert::AreEqual(test, 2);
		}
	};
}
