#include <iostream>
using namespace std;
class BankAccount
{
private:
    const long long accountNO;
    static int MIN_HIGH_VALUE;
    double accountBalance;

public:
    static int totalNoOfAccounts;
    BankAccount() : accountNO(totalNoOfAccounts + 188888000000)
    {

        totalNoOfAccounts++;
        accountBalance = 0;
    }
    BankAccount(double accountBalance) : accountNO(totalNoOfAccounts + 188888000000)
    {
        totalNoOfAccounts++;
        this->accountBalance = accountBalance;
    }
    void increase()
    {
        totalNoOfAccounts++;
    }
    int getTotalAccounts()
    {
        return totalNoOfAccounts;
    }
    void depositMoney(double money)
    {
        accountBalance += money;
    }
    void withdrawMoney(double money)
    {
        if (accountBalance < money)
        {
            cout << "Insufficient Balance" << endl;
            cout << "Your balance is : " << accountBalance << endl;
        }

        else
        {
            accountBalance -= money;
        }
    }
    void display()
    {
        cout << "Your account no is : " << accountNO << endl;
        cout << "Your account balance is : " << accountBalance << endl;
    }
    bool isHhighValuePerson()
    {
        if (accountBalance >= MIN_HIGH_VALUE)
            return true;
        else
            return false;
    }
};
int BankAccount::totalNoOfAccounts = 0;
int BankAccount::MIN_HIGH_VALUE = 1000;

class Bank : public BankAccount
{
public:
    BankAccount *account[100];

    Bank()
    {
    }
    void addAccount(double money)
    {
        BankAccount *account = new BankAccount(money);
    }

    void displayHighValueAccount()
    {
        for (int i = 0; i < totalNoOfAccounts; i++)
        {
            if ((*account)[i].isHhighValuePerson() == true)
            {
                (*account)[i].display();
            }
        }
    }
};

int main()
{
   Bank b1;
   b1.addAccount(300);
   Bank b2;
   b2.addAccount(1100);
   b2.displayHighValueAccount();


}