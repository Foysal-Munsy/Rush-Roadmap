#include <bits/stdc++.h>
using namespace std;

class atm
{
private:
    long int account_no;
    string name, mobile_no;
    int pin;
    double balance;

public:
    void setData(long int x_acnt_no, string x_name, int x_pin, double x_balance, string x_mbl)
    {
        account_no = x_acnt_no;
        name = x_name;
        pin = x_pin;
        balance = x_balance;
        mobile_no = x_mbl;
    }

    long int getAccountNum()
    {
        return account_no;
    }
    string getName()
    {
        return name;
    }
    int getPin()
    {
        return pin;
    }
    double getBalance()
    {
        return balance;
    }
    string getMobileNum()
    {
        return mobile_no;
    }

    void cashWithdraw(int in_amount)
    {
        if (in_amount > 0 && in_amount < balance)
        {
            balance -= in_amount;
            cout << "Please collect your cash\n";
            cout << '\n';
            cout << "Your remaining balance: " << balance;
            cout << '\n';
            cout << '\n';
            cin.get();
        }
        else
        {
            cout << "Invalid or Insufficient balance\n";
            cout << '\n';
            cin.get();
        }
    }
    void setMobile(string prev, string current)
    {
        if (prev == mobile_no)
        {
            mobile_no = current;
            cout << "Succesfully updated your mobile number\n";
            cout << '\n';
            cin.get();
        }
        else
        {
            cout << "Your Prev mobile no is incorrect!!\n";
            cout << '\n';
        }
    }
};
int main()
{

    int option = 0, pin_input = 0;
    long int acnt_no_input = 0;

    system("cls");

    atm user1;
    user1.setData(22472251, "Foysal Munsy", 1234, 25000.89, "0173161426"); // Deafult User Data
    do
    {
        system("cls");
        cout << '\n';
        cout << "**Welcome To ATM**\n";
        cout << '\n';
        cout << "Enter you account no: ";
        cin >> acnt_no_input;
        cout << '\n';
        cout << '\n';
        cout << "Enter you pin no: ";
        cin >> pin_input;
        cout << '\n';
        cout << '\n';

        if (acnt_no_input == user1.getAccountNum() && pin_input == user1.getPin())
        {
            do
            {
                int amount = 0;
                string prev_mbl, new_mbl;
                system("cls");
                cout << "Select any option from the below:\n";
                cout << '\n';
                cout << "1. Check Balance\n";
                cout << '\n';
                cout << "2. Cash Withdraw\n";
                cout << '\n';
                cout << "3. Show User Details\n";
                cout << '\n';
                cout << "4. Update Mobile Number\n";
                cout << '\n';
                cout << "5. Exit\n";
                cout << '\n';
                cin >> option; // user choice
                cout << '\n';
                cout << '\n';

                switch (option)
                {
                case 1:
                    cout << "Your balance is: " << user1.getBalance();
                    cout << '\n';
                    cout << '\n';
                    break;
                case 2:
                    cout << "Enter the withdrawal amount: ";
                    cin >> amount;
                    user1.cashWithdraw(amount); // calling cash withdraw function
                    cout << '\n';
                    cout << '\n';
                    break;
                case 3:
                    cout << "Your details are:\n";
                    cout << '\n';
                    cout << "Name: " << user1.getName() << '\n';
                    cout << '\n';
                    cout << "Account No: " << user1.getAccountNum() << '\n';
                    cout << '\n';
                    cout << "Balance: " << user1.getBalance() << '\n';
                    cout << '\n';
                    cout << "Pin: " << user1.getPin() << '\n';
                    cout << '\n';
                    cout << "Mobile No: " << user1.getMobileNum() << '\n';
                    cout << '\n';

                    cin.get(); // _getch() or cin.get() is holding the screen
                    break;
                case 4:
                    cout << "Enter your previous mobile no: ";
                    cin >> prev_mbl;
                    cout << '\n';
                    cout << "Enter new mobile no: ";
                    cin >> new_mbl;
                    cout << '\n';
                    cout << '\n';
                    user1.setMobile(prev_mbl, new_mbl);
                    break;
                case 5:
                    exit(false); // exit the application

                default:
                    cout << "Enter Valid Information/n";
                    cout << '\n';
                    break;
                }
            } while (true);
        }
        else
        {
            cout << "User Details are Invalid !!! ";
            cout << '\n';
            cout << '\n';
            cin.get();
        }
    } while (true);

    return 0;
}
