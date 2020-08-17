#include <cassert>
#include <sstream>
#include <stdexcept>

// #include <libbrot/version.hpp>

int main ()
{
  using namespace std;
  using namespace brot;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
