//============================================================================
// Name        : is_alpha.cpp
// Author      : http://www.cplusplus.com/reference/locale/isalpha/
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// isalpha example (C++)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::isalpha

int main ()
{
  std::locale loc;
  std::string str="C++";

  for (std::string::iterator it=str.begin(); it!=str.end(); ++it)
  {
    if (std::isalpha(*it,loc))
      std::cout << "character " << *it << " is alphabetic\n";
    else
      std::cout << "character " << *it << " is not alphabetic\n";
  }
  return 0;
}
