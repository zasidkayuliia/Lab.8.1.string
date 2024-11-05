#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1.string/Lab_08.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Вхідні дані для тесту
			std::string testStr = "abcabc";

			// Очікуваний результат (без змін, оскільки немає пар "aa", "bb" або "cc")
			std::string expected = "abcabc";

			// Викликаємо функцію Change і перевіряємо результат
			Assert::AreEqual(expected.c_str(), Change(testStr).c_str(), L"Test failed: 'abcabc' should remain 'abcabc'");
		}
	};
}
