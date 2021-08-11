import <iostream>;

import brot;

using namespace std;

int main (int argc, char* argv[])
{

  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }

  brot::say_hello (cout, argv[1]);
}
