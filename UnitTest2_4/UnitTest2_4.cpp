#include "pch.h"
#include "CppUnitTest.h"
#include "../oop2_4/Matrix.h"
#include "D:\Student\oop2_4\oop2_4\Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest24
{
	TEST_CLASS(UnitTest24)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix a;
			int t;
			t = a.Norma(1000, 7);
			Assert::AreEqual(t, 993);
		}
	};
}
