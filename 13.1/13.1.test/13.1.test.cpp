#include "pch.h"
#include "CppUnitTest.h"
#include "../13.1/dod.h"
#include "../13.1/var.h"
#include "../13.1/var.cpp"
#include "../13.1/dod.cpp"
using namespace nsDod;
using namespace nsVar;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My131test
{
	TEST_CLASS(My131test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 0;
			n = 0;
			a = 0;

			dod();
			Assert::AreEqual(a, 0.0);
		}
	};
}
