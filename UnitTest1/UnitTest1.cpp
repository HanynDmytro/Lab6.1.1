#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = {32 ,3, 1, -10, 21, 0};
			int S = Sum(A, 6);
			Assert::AreEqual(44, S);
		}
	};
}
