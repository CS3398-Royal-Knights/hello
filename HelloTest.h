#ifndef __HELLOTEST_H__
#define __HELLOTEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/portability/Stream.h>

template<class HELLOCLASS> 
class HelloTest : public CPPUNIT_NS::TestFixture 
{
  CPPUNIT_TEST_SUITE( HelloTest );
  CPPUNIT_TEST( testReturnMyInput );
  CPPUNIT_TEST( testReturnMyInputShouldFail );
  CPPUNIT_TEST_SUITE_END();
protected:
  HELLOCLASS	*m_hello;
  
public:
  HelloTest()
  {
  }

  int countTestCases () const
  { 
    return 1; 
  }
  
  void setUp() 
  { 
    this->m_hello = new HELLOCLASS; 
  }
  
  void tearDown()
  { 
    delete this->m_hello; 
  }
  
  void testReturnMyInput() 
  { 
    CPPUNIT_ASSERT( this->m_hello->retMyInput(true) );//Should pass because we pass in true
  }

  void testReturnMyInputShouldFail() 
  { 
    CPPUNIT_NS::stdCOut() << "The following test fails, this is intended:" << "\n";
    CPPUNIT_ASSERT( this->m_hello->retMyInput(false) );//Should fail because we're passing in false
  }
};

#endif
