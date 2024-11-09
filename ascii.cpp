#include <iostream>

using namespace std;

string vertical_axis()
{
  return "|";
}

string vertical_arrow()
{
  return "^";
}

string horizontal_axis()
{
  return "-+";
}

string horizontal_arrow()
{
  return "->";
}

string origin()
{
  return "+";
}

char marker()
{
  return 'X';
}

void vertical_axis_with_marked_position(int xcoord)
{
  cout << vertical_axis();
  for (int j = 0; j < xcoord - 1; j++)
  {
    cout << "  ";
  }
  cout << " " << marker() << endl;
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
      cout << vertical_axis() << endl;
    }
  }
}

void y_axis_with_symbol(int ymax, int ycoord)
{
  for (int i = 0; i < ymax; i++)
  {
    if (i == ymax - ycoord)
    {
      cout << "X" << endl;
    }
    else
    {
      cout << vertical_axis() << endl;
    }
  }
}

void yaxis(int ymax, int xcoord, int ycoord)
{
  cout << vertical_arrow() << endl;
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
    cout << horizontal_axis();
  }
  cout << horizontal_arrow() << endl;
}

void xaxis_with_symbol(int xmax, int xcoord)
{
  for (int i = 0; i < xmax; i++)
  {
    if (i == xcoord - 1)
    {
      cout << "-X";
    }
    else
    {
      cout << horizontal_axis();
    }
  }
  cout << horizontal_arrow() << endl;
}

void xaxis(int xmax, int xcoord, int ycoord)
{
  cout << origin();
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
  cout << endl;
  yaxis(ymax, xcoord, ycoord);
  xaxis(xmax, xcoord, ycoord);
  cout << endl;
}

int main()
{
  ascii_plot(4, 4, 4, 4);
  ascii_plot(5, 5, 3, 1);
  ascii_plot(5, 5, 3, 0);
  ascii_plot(5, 5, 0, 3);

  return 0;
}
