#include "replace.h"
#include <string>
#include <iostream>
using namespace std;


Replace::Replace(int key)
{
  this->key = key;

};

string Replace::encrypt( string in)
{
  string ret_string;
  for (auto this_str : in)
  {
    int i = 0;

    if ((this_str > 64) && (this_str<91))
    {
      this_str += key;
      if (this_str > 90) {
        this_str = 65 + this_str % 91 ;
      }
    }
    if ((this_str > 96) && (this_str<120))
    {
      this_str = this_str + key;
      if (this_str > 120) {
        this_str = 97 + this_str % 121;
      }
    }
    ret_string += this_str;
    i++;
  }
  return ret_string;
};


string Replace::decrypt(  string in)
{
  string ret_string;
  for (auto this_str : in)
  {
    int i = 0;

    if ((this_str > 62) && (this_str<91))
    {
      this_str -= key;
      if (this_str < 65) {
        this_str = 90 - key + ((this_str + key) % 64) ;
      }
    }
    if ((this_str > 94) && (this_str<123))
    {
      this_str -= key;
      if (this_str < 97) {
        this_str = 122 - key + ((this_str + key) % 96) ;
      }
    }

    ret_string += this_str;
    i++;
  }
  return ret_string;
};

string Replace::ret()
{
  return this->str;
}
