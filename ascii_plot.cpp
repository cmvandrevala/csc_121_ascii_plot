#include <iostream>

#include "core.hpp"
#include "symbols.hpp"

int main()
{
  ascii_plot(4, 4, 4, 4);
  ascii_plot(5, 5, 3, 1);
  ascii_plot(5, 5, 3, 0);
  ascii_plot(5, 5, 0, 3);

  return 0;
}
