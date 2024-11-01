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
		TEST_METHOD(CheckResultsTestB) {
			//Arrange
			char* player01 = "PAPER";
			char* player02 = "SCISSORS";
			int expected = 2;

			//Act
			int actual = CheckResults(player01, player02);

			//Assert
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(CheckResultsTestC) {
			//Arrange
			char* player01 = "SCISSORS";
			char* player02 = "SCISSORS";
			int expected = 3;

			//Act
			int actual = CheckResults(player01, player02);

			//Assert
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(CheckResultsTestD) {
			//Arrange
			char* player01 = "other";
			char* player02 = "result";
			int expected = 4;

			//Act
			int actual = CheckResults(player01, player02);

			//Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
