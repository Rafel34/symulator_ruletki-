#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    int bet;
    srand(time(NULL));
    int wybor;
    int pieniodze=1000;

    while(wybor==4||pieniodze>0)
    {


        cout<<"masz : "<<pieniodze<<"$"<<endl;


        unsigned int wylosowana = ( rand() % 36 );
        cout<<"1.POSTAW NA CZERWONE"<<endl;
        cout<<"2.POSTAW NA CZARNE"<<endl;
        cout<<"3.POSTAW NA 0"<<endl;
        cout<<"4.Wyjdz"<<endl;
        cin>>wybor;

        if(wybor==4)

            return 0;

        if(cin.fail())
            do
            {
                cin.clear();
                cin.sync();
                cout<<"niepoprawne dane sprobuj jeszcze raz : ";
                cin>>wybor;
                if(wybor==4);

                    return 0;
            }
            while(!cin.good());

        if(cin.good()&&((wybor<4)&&(wybor>=1)))

        {




            cout<<"ile chcesz postawic : ";
            cin>>bet;

        }
        if((bet>0)&&(bet<=pieniodze))
        {
            pieniodze-=bet;

            switch(wybor)
            {
            case 1:
                if((wylosowana>0)&&(wylosowana<19))
                {
                    cout<<"wylosowana liczba to : "<<wylosowana<<" wygrales!"<<endl;
                    bet*=2;
                    pieniodze+=bet;
                }
                else
                {
                    cout<<"wylosowana liczba to : "<<wylosowana<<" przegrales!"<<endl;
                }

                break;
            case 2:
                if((wylosowana>18)&&(wylosowana<37))
                {
                    cout<<"wylosowana liczba to : "<<wylosowana<<" wygrales!"<<endl;
                    bet*=2;
                    pieniodze+=bet;
                }
                else
                {
                    cout<<"wylosowana liczba to : "<<wylosowana<<" przegrales!"<<endl;
                }
                break;
            case 3:
                if(wylosowana==0)
                {
                    cout<<"wylosowana liczba to : "<<wylosowana<<" wygrales!"<<endl;
                    bet*=36;
                    pieniodze+=bet;
                }
                else
                    cout<<"wylosowana liczba to : "<<wylosowana<<" przegrales!"<<endl;

                break;
            case 4:
                return 0;
                break;

            default:

                return 0;

            }
        }
        else
        {

            cout<<"niepoprawne dane ! ";
            Sleep(2000);
            return 0;
        }


    }
    cout<<"Koniec gry !";
    Sleep(2000);

}
