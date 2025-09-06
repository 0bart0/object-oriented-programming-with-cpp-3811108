#include <iostream>

class Review
{
public:
  void displayDetails() const
  {
    std::cout << "Rating " << rating << "/5\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Text: " << text << std::endl;
  }

private:
  unsigned int rating;
  std::string title;
  std::string text;
};