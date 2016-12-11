#ifndef __HELLOTEST_H__
#define __HELLOTEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/portability/Stream.h>

template<class HELLOCLASS> 
class HelloTest : public CPPUNIT_NS::TestFixture 
{
protected:
  HELLOCLASS	*m_hello;
  
public:
  HelloTest()
  {
  }

  void setUp() 
  { 
    this->m_hello = new HELLOCLASS; 
  }
  
  void tearDown()
  { 
    delete this->m_hello; 
  }
  
  //Test the subtract function in Hello with a test case
  //that should pass.
  void testSubtract() 
  { 
    CPPUNIT_ASSERT( this->m_hello->subtractFailIfNeg(3, 2) );
  }

  //Test the subtract function in Hello with a test case
  //that should fail.
  void testSubtractShouldFail() 
  { 
    CPPUNIT_NS::stdCOut() << "The following test fails, this is intended:" << "\n";
    CPPUNIT_ASSERT( this->m_hello->subtractFailIfNeg(2, 5) );
  }
};

#endif
