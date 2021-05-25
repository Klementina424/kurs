#include "pch.h"
#include "CppUnitTest.h"
#include "..\Ford_and_Fulkerson_lab\FordFulkerson.h"
#include "..\Ford_and_Fulkerson_lab\main.cpp"
#define TEST_CASE_DIRECTORY GetDirectoryName(__FILE__)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Fordtest
{
	TEST_CLASS(Fordtest)
	{
		string GetDirectoryName(string path) {
			const size_t last_slash_idx = path.rfind('\\');
			if (std::string::npos != last_slash_idx)
			{
				return path.substr(0, last_slash_idx + 1);
			}
			return "";
		}
	public:

		TEST_METHOD(test1)
		{
			string fileName = std::string(TEST_CASE_DIRECTORY) + "test1.txt";
			FordFulkerson test;
			test.inputData(fileName);
			Assert::AreEqual(test.MaxStream(), 7);
		}
		TEST_METHOD(test2)
		{
			string fileName = std::string(TEST_CASE_DIRECTORY) + "test2.txt";
			FordFulkerson test;
			test.inputData(fileName);
			Assert::AreEqual(test.MaxStream(), 2000);
		}
		TEST_METHOD(test3)
		{
			string fileName = std::string(TEST_CASE_DIRECTORY) + "test3.txt";
			FordFulkerson test;
			test.inputData(fileName);
			Assert::AreEqual(test.MaxStream(), 30);
		}
		TEST_METHOD(test4)
		{
			string fileName = std::string(TEST_CASE_DIRECTORY) + "test4.txt";
			FordFulkerson test;
			test.inputData(fileName);
			Assert::AreEqual(test.MaxStream(), 10);
		}
		TEST_METHOD(test5)
		{
			string fileName = std::string(TEST_CASE_DIRECTORY) + "test5.txt";
			FordFulkerson test;
			test.inputData(fileName);
			Assert::AreEqual(test.MaxStream(), 10);
		}
		TEST_METHOD(test6)
		{
			string fileName = std::string(TEST_CASE_DIRECTORY) + "test6.txt";
			FordFulkerson test;
			test.inputData(fileName);
			Assert::AreEqual(test.MaxStream(), 10);
		}
	};
}
