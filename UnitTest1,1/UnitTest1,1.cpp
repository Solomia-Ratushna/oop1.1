#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/FloatPower.h"
#include "../lab1.1/FloatPower.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FloatPower a, b;
			a.Init(2, 3);
			b.Init(0.5, -2);
			double res1, res2;
			res1 = a.power();
			res2 = b.power();
			Assert::AreEqual(res1, 8.0);
			Assert::AreEqual(res2, 4.0);
		}
	};
}
