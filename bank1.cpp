#include<iostream>
using namespace std;
class bank
{
    int bal=0,dep,with;
public:
    bank(int);
    void deposit(int);
    void withdraw(int);
    int showbal();
};
bank::bank(int amt)
{
    bal=amt;
}
void bank::deposit(int dep)
    {
    
        bal+=dep;
    }
void bank::withdraw(int with)
    {
      
        bal-=with;
    }
int bank::showbal()
    {
        return bal;
    }
int main()
{
    int n,dep,with;
    bank v(100000);
    
    cout<<"\n\n _______if you enter deposit amt  :: enter 1________";
    cout<<"\n _______if you enter withdraw amt :: enter 2________";
    cout<<"\n _______if you show your balance  :: enter 9________";
    cout<<"\n ===================================================";
    cout<<"\n -------if you want to exit       :: enter 0--------";
    do
    {
    cout<<"\n enter n:";
    cin>>n;
    switch(n)
    {
        case 0:

            break;

        case 1:
            cout<<"\n deposit amt:";
            cin>>dep;
            v.deposit(dep);
            break;

        case 2:
            cout<<"\n withdraw  amt:";
            cin>>with;
            v.withdraw(with);
            break;

        case 9:
            cout<<"\n balance is:"<< v.showbal();
            break;

        default:
            cout<<"\n wrong choise";
            break;
    }
    } while (n!=0);
}