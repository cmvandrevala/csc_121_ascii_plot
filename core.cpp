#include <iostream>

#include "symbols.hpp"

void vertical_axis_with_marked_position(int xcoord)
{
  std::cout << vertical_axis();
  for (int j = 0; j < xcoord - 1; j++)
  {
    std::cout << "  ";
  }
  std::cout << " " << marker() << std::endl;
}

void y_axis_without_symbol(int ymax, int xcoord, int ycoord)
{
  for (int i = 0; i < ymax; i++)
  {
    if (i == ymax - ycoord)
    {
      vertical_axis_with_marked_position(xcoord);
    }
    else
    {
      std::cout << vertical_axis() << std::endl;
    }
  }
}

void y_axis_with_symbol(int ymax, int ycoord)
{
  for (int i = 0; i < ymax; i++)
  {
    if (i == ymax - ycoord)
    {
      std::cout << "X" << std::endl;
    }
    else
    {
      std::cout << vertical_axis() << std::endl;
    }
  }
}

void yaxis(int ymax, int xcoord, int ycoord)
{
  std::cout << vertical_arrow() << std::endl;
  if (xcoord != 0)
  {
    y_axis_without_symbol(ymax, xcoord, ycoord);
  }
  else
  {
    y_axis_with_symbol(ymax, ycoord);
  }
}

void xaxis_without_symbol(int xmax)
{
  for (int i = 0; i < xmax; i++)
  {
    std::cout << horizontal_axis();
  }
  std::cout << horizontal_arrow() << std::endl;
}

void xaxis_with_symbol(int xmax, int xcoord)
{
  for (int i = 0; i < xmax; i++)
  {
    if (i == xcoord - 1)
    {
      std::cout << "-X";
    }
    else
    {
      std::cout << horizontal_axis();
    }
  }
  std::cout << horizontal_arrow() << std::endl;
}

void xaxis(int xmax, int xcoord, int ycoord)
{
  std::cout << origin();
  if (ycoord != 0)
  {
    xaxis_without_symbol(xmax);
  }
  else
  {
    xaxis_with_symbol(xmax, xcoord);
  }
}

void ascii_plot(int xmax, int ymax, int xcoord, int ycoord)
{
  std::cout << std::endl;
  yaxis(ymax, xcoord, ycoord);
  xaxis(xmax, xcoord, ycoord);
  std::cout << std::endl;
}
