#include "CppUnitTest.h"
#include <string>
#include "classes.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace Testclasses
{
	TEST_CLASS(Testclasses)
	{
	public:
		
		TEST_METHOD(Test_Person_get)
		{
			Person alice("Alice", 20);

			Assert::AreEqual(string("Alice"), alice.get_name());
			Assert::AreEqual(20, alice.get_age());
		}
	};

	TEST_CLASS(Test_Abstract_Class)
	{
	public:

		string draw_shape(Shape& shape)
		{
			return shape.draw();
		}

		TEST_METHOD(Test_Shape_draw)
		{
			Square square;
			Circle circle;

			Assert::AreEqual(string("Å†"), draw_shape(square));
			Assert::AreEqual(string("ÅZ"), draw_shape(circle));
		}
	};
}
