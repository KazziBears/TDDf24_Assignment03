#include "CppUnitTest.h"

extern "C" {
#include "../Project1/rpstools.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace rpstoolsTests
{
	TEST_CLASS(FunctionTests)
	{
	public:
		
		TEST_METHOD(CheckResultsTestA)
		{
			//Arrange
			char* player01 = "ROCK";
			char* player02 = "SCISSORS";
			int expected = 1;

			//Act
			int actual = CheckResults(player01, player02);

			//Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
