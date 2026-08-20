#include <cpp-base64/cpp-base64.h>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace cpp_base64
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
