#include<iostream>
using namespace std;
class Activate_Mpesa
{
public:
    Activate_Mpesa()
    {
        int wekesha,choice,password1,password2,password3;
        int activate,pin1,pin2,pin3;
        cout<<"1.Wezesha"<<endl;
        cout<<"2.Activate"<<endl;
        cout<<"Choose Any Of The above:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:

            case 2:

                cout<<"Enter 0000 as the pin"<<endl;
                cin>>pin1;
                if(pin1==0000)
                {
                    cout<<"Enter a new pin"<<endl;
                    cin>>pin2;
                    if(pin2>=1000&&pin2<=9999)
                    {
                        cout<<"Re-enter your new pin again"<<endl;
                        cin>>pin3;
                        if(pin2==pin3)
                        {
                            cout<<"Congratulations for successfully opening an  mpesa account"<<endl;
                            cout<<"Keep your device on to receive the menu display updates"<<endl;
                        }
                        else
                        {
                            cout<<"Sorry but your pins do not match"<<endl;
                            cout<<"Ensure the two pins match"<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Invalid pin" <<endl;
                        cout<<"Make it a 4 digits pin"<<endl;
                    }
                }
                else
                {
                    cout<<"Invalid Pin"<<endl;
                }
                break;
            default:
                cout<<"INVALID CHOICE"<<endl;

        }
    }
};
int main()
{
    Activate_Mpesa activate;
    return 0;
}
