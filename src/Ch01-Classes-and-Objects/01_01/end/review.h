#ifndef REVIEW_H
#define REVIEW_H

#include <iostream>

class Review
{
public:
  Review(unsigned int r, const std::string& t, const std::string& txt);
  void displayDetails() const;
  ~Review();
private:
  unsigned int rating;
  std::string title;
  std::string text;
};

#endif