#include <boost/test/unit_test.hpp>
#include <test_qt4/Dummy.hpp>

using namespace test_qt4;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    test_qt4::DummyClass dummy;
    dummy.welcome();
}
