#include "review.h"

void Review::displayDetails() const
{
  std::cout << "Rating " << rating << "/5\n";
  std::cout << "Title: " << title << "\n";
  std::cout << "Text: " << text << std::endl;
}
