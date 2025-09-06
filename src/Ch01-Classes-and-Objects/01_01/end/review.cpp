#include "review.h"

Review::Review(unsigned int r, const std::string &t, const std::string &txt)
{
  rating = r;
  title = t;
  text = txt;
}

Review::~Review()
{
  std::cout << "Review object is being deleted;" << std::endl;
}

void Review::displayDetails() const
{
  std::cout << "Rating " << rating << "/5\n";
  std::cout << "Title: " << title << "\n";
  std::cout << "Text: " << text << std::endl;
}
