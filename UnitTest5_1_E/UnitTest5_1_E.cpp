#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop5.1E\oop5.1E\Money.cpp"
#include "D:\Student\oop5.1E\oop5.1E\MyException.cpp"
#include "D:\Student\oop5.1E\oop5.1E\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51E
{
	TEST_CLASS(UnitTest51E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money sum1(1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0),
				sum2(2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0);
			double t = sum1 / sum2;
			Assert::AreEqual(t, 2.0);
		}
		TEST_METHOD(TestMethod2)
		{
			Money a;
			double s = a.Divide(20, 2);
			Assert::AreEqual(s, 10.0);
		}
	};
}
