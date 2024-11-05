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
			// ����� ��� ��� �����
			std::string testStr = "abcabc";

			// ���������� ��������� (��� ���, ������� ���� ��� "aa", "bb" ��� "cc")
			std::string expected = "abcabc";

			// ��������� ������� Change � ���������� ���������
			Assert::AreEqual(expected.c_str(), Change(testStr).c_str(), L"Test failed: 'abcabc' should remain 'abcabc'");
		}
	};
}
