from abc import ABC, abstractmethod

# Abstract Base Class
class BankAccount(ABC):
    def __init__(self, amount, rate, years):
        self.amount = amount
        self.rate = rate
        self.years = years

    @abstractmethod
    def calculate_interest(self):
        pass

    @abstractmethod
    def account_details(self):
        pass


# Savings Account (SA)
class SavingsAccount(BankAccount):
    def calculate_interest(self):
        return self.amount * (self.rate/100) * self.years

    def account_details(self):
        return f"SBI Savings Account | Amount: {self.amount}, Rate: {self.rate}%, Years: {self.years}"


# Current Account (CA)
class CurrentAccount(BankAccount):
    def calculate_interest(self):
        return 0  # Current accounts usually don’t earn interest

    def account_details(self):
        return f"SBI Current Account | Amount: {self.amount}, No interest applied"


# Fixed Deposit (FD)
class FixedDeposit(BankAccount):
    def calculate_interest(self):
        return self.amount * ((1 + self.rate/100) ** self.years - 1)

    def account_details(self):
        return f"SBI Fixed Deposit | Amount: {self.amount}, Rate: {self.rate}%, Years: {self.years}"


# NRI Account
class NRIAccount(BankAccount):
    def calculate_interest(self):
        return self.amount * (self.rate/100) * self.years + 500  # Bonus for NRI

    def account_details(self):
        return f"SBI NRI Account | Amount: {self.amount}, Rate: {self.rate}%, Years: {self.years}"


# --- Testing the accounts ---
sv = SavingsAccount(10000, 2, 2)
# ca = CurrentAccount(20000, 0, 1)
# fd = FixedDeposit(50000, 6, 3)
# nri = NRIAccount(30000, 5, 2)

print(sv.account_details(), "| Interest:", sv.calculate_interest())
# print(ca.account_details(), "| Interest:", ca.calculate_interest())
# print(fd.account_details(), "| Interest:", fd.calculate_interest())
# print(nri.account_details(), "| Interest:", nri.calculate_interest())
