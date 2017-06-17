#include <iostream>
#include <cstring>
#include "replace.h"

using namespace std;
int main(int argc, char ** argv)
{
  if (argc < 4) {
      cout << "Error! Use like: main.exe /e (/d) key text on Windows and ./main.bin -e (-d) key text on Linux"<<endl;
      return 1;
  }
  Replace main_replace(atof(argv[2]),string(argv[3]));

  if (!strcmp(argv[1], "encrypt") || !strcmp(argv[1], "/e") || !strcmp(argv[1], "-e"))
  {
    cout << main_replace.encrypt() << endl;
  } else if (!strcmp(argv[1], "decrypt") || !strcmp(argv[1], "/d") || !strcmp(argv[1], "-d") )
  {
    cout << main_replace.decrypt() << endl;
  }
  else
  {
    cout << "Error! Use like: main.exe /e (/d) key text on Windows and ./main.bin -e (-d) key text on Linux"<<endl;
  }
  return 0;
}
