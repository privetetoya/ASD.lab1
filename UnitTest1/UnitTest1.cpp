#include "pch.h"
#include "CppUnitTest.h"
#include "../AiSD.Lab1/Map.h"
#include "../AiSD.Lab1/List.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab1
{
	TEST_CLASS(UnitTest1)		//TESTS FOR RBTree
	{
	public:
		TEST_METHOD(InsertMethod)
		{
			Map<int, int> Testmap;
			Testmap.insert(1, 1);
			Assert::IsTrue(Testmap.find(1)->color == 0);
			Testmap.insert(3, 3);
			Assert::IsTrue(Testmap.find(1)->color == 0);
			Assert::IsTrue(Testmap.find(3)->color == 1);
		}

		TEST_METHOD(RemoveMethod)
		{
			Map<int, int> Testmap;
			Testmap.insert(1, 1);
			Assert::IsTrue(Testmap.find(1)->color == 0);
			Testmap.insert(3, 3);
			Assert::IsTrue(Testmap.find(1)->color == 0);
			Assert::IsTrue(Testmap.find(3)->color == 1);
			Testmap.remove(3);
			Assert::IsTrue(Testmap.find(1)->color == 0);
			try {
				Testmap.find(3);
			}
			catch (const out_of_range error) {
				Assert::AreEqual("Couldn't find key in the RBTree", error.what());
			}
		}

		TEST_METHOD(FindMethod)
		{
			Map<int, int> Testmap;
			Testmap.insert(1, 1);
			Testmap.insert(3, 3);
			Assert::IsTrue(Testmap.find(1)->value == 1);
			Assert::IsTrue(Testmap.find(3)->value == 3);

		}

		TEST_METHOD(ClearMethod)
		{
			Map<int, int> Testmap;
			Testmap.insert(1, 1);
			Assert::IsTrue(Testmap.find(1)->color == 0);
			Testmap.insert(3, 3);
			Testmap.clear();
			try {
				Testmap.find(1);
			}
			catch (const out_of_range error) {
				Assert::AreEqual("Couldn't find key in the RBTree", error.what());
			}
			try {
				Testmap.find(3);
			}
			catch (const out_of_range error) {
				Assert::AreEqual("Couldn't find key in the RBTree", error.what());
			}
		}

		TEST_METHOD(GetKeysMethod)
		{
			Map<int, int> Testmap;
			Testmap.insert(1, 1);
			List<int> getKeys = Testmap.getKeys();
			Assert::IsTrue(getKeys.getSize() == 1);
		}

		TEST_METHOD(GetValuesMethod)
		{
			Map<int, int> Testmap;
			Testmap.insert(1, 1);
			List<int> getValues = Testmap.getValues();
			Assert::IsTrue(getValues.getSize() == 1);
		}
	};
}
