#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_11_3/lab_11_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ofstream f("test.dat", ios::binary);
			Student student;
			student.avarage = 200.0;
			f.write((char*)&goods, sizeof(Goods));
			f.close();
			ifstream file("test.dat", ios::binary);
			bool x = FiltrPrice("test.dat", 10.0, 1000.0);
			Assert::AreEqual(x, true);
			f.close();
		}
	};
}
