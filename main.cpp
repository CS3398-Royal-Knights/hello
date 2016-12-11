#include <TestCase.h>
#include "Hello.h"
#include "HelloTest.h"

#include <libintl.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Create a new test to test the case where a > b
    CppUnit::Test *helloTest = 
        new CppUnit::TestCaller<HelloTest<Hello> >(
            "testSubtractShouldFail", &HelloTest::testSubtractShouldFail);
    helloTest->run();

    return 1;
}

