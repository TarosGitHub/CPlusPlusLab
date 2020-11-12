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
}
