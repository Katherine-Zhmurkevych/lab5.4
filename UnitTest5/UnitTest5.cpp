#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S0(2, 3);
			Assert::AreEqual(t, 0);
		}

		TEST_METHOD(TestMethod2)
		{
			int t;
			t = S1(1, 5, 1);
			Assert::AreEqual(t, 0);
		}

		TEST_METHOD(TestMethod3)
		{
			int t;
			t = S2(1, 5, 1);
			Assert::AreEqual(t, 0);
		}
		TEST_METHOD(TestMethod4)
		{
			int t;
			t = S3(1, 5, 1, 2.0);
			Assert::AreEqual(t, 2);
		}

		TEST_METHOD(TestMethod5)
		{
			int t;
			t = S4(1, 5, 2, 3.0);
			Assert::AreEqual(t, 3);
		}
	};
}

