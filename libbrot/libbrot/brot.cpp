module; // Note: non-interface modules units are not yet supported by MSVC, it triggers a bug where
#include <ostream>
#include <stdexcept>

module brot; // Note: non-interface modules units are not yet supported by MSVC, it triggers a bug where

using namespace std;

namespace brot
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
