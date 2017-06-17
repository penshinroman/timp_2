#pragma once
#include <string>

class Replace
{
private:
  std::string str;
  int key;


public:
  Replace( int key,  std::string in);
  std::string encrypt( string in);
  std::string decrypt( string in);

};
