#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(StackTest)
	{
	public:

		TEST_METHOD(CreatStackTest)
		{
			Assert::AreEqual(1,1)
		}
		
		TEST_METHOD(PushTest)
		{
			CStack TestStack(10);
			int pushval = 10;
			bool result;

			result = TestStack.Push(pushval);
			Assert::AreEqual(result,false)
		}

		TEST_METHOD(PopTest)
		{
			CStack TestStack(10);
			int pushval = 10;
			int popval;
			bool result;

			result = TestStack.Push(pushval);
			result = TestStack.Pop(pushval);
			Assert::AreEqual(result, false);
			Assert::AreEqual(popval, pushval);
		}

		TEST_METHOD(PopEmptyTest)
		{
			CStack TestStack(10);
			int popval;
			bool result;

			result = TestStack.Pop(popval);
			Assert::AreEqual(result, true);
		}

		TEST_METHOD(PushFullTest)
		{
			CStack TestStack(10);
			bool result;

			for (int i = 0; i < 12; i++)
			{
				result = TestStack.Push(i);
				Assert::AreEqual(result, true);
			}
		}



	};
}