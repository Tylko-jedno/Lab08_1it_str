#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08_1it_str/Lab08_1it_str.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
    TEST_CLASS(UnitTestProject)
    {
    public:

        // Тест для функції Count
        TEST_METHOD(TestCount)
        {
            string str1 = "abc+def=gh-ijk";
            Assert::AreEqual(3, Count(str1)); // Три символи '+', '-', '='
        }

        TEST_METHOD(TestChange)
        {
            string str1 = "abc+def=gh-ijk";
            string expected1 = "abc**def**gh**ijk";
            Assert::AreEqual(expected1, Change(str1));
        }
    };
}
