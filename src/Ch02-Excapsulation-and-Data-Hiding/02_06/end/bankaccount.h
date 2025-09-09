// bankaccount.h
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount
{
public:
  BankAccount(const std::string &number, float initialBalance);
  void deposit(float amount);
  void withdraw(float amount);
  void displayBalance() const; // Should update accessCount

private:
  // TODO: Add friend declaration

  // TODO: Mark appropriate member as mutable
  friend class Auditor;
  std::string accountNumber;
  float accountBalance;
  mutable unsigned int transactionCount = 0;
};

#endif