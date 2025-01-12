#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qfries=0;
    //food items sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Sfries=0;
    //total price of items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_fries=0;

    cout<<"\n\t Quantity of items we have"<<endl;
    cout<<"\n rooms available:"<<endl;
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:"<<endl;
    cin>>Qpasta;
    cout<<"\n Quantity of burger:"<<endl;
    cin>>Qburger;
    cout<<"\n Quantity of noodles:"<<endl;
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:"<<endl;
    cin>>Qshake;
    cout<<"\n Quantity of fries:"<<endl;
    cin>>Qfries;

    m:
    cout<<"\n\t\t Please select from menu options:"<<endl;
    cout<<"\n\n1) rooms";
    cout<<"\n\n2) pasta";
    cout<<"\n\n3) burger";
    cout<<"\n\n4) noodles";
    cout<<"\n\n5) shake";
    cout<<"\n\n6) fries";
    cout<<"\n\n7) Information regarding sales and collection";
    cout<<"\n\n8) exit";

    cout<<"\n\n Please Enter your choice!"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
            cout<<"\nEnter the number of rooms you want:"<<endl;

            cin>>quant;
            if(Qrooms-Srooms>=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+(quant*1200);
                cout<<"\n"<<quant<<"rooms/rooms have been alloted to you!"<<endl;

            }
            else
            {
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel:";
            }
            break;

            case 2:
            cout<<"\nEnter the  pasta Quantity :"<<endl;

            cin>>quant;
            if(Qpasta-Spasta>=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+(quant*250);
                cout<<"\n"<<quant<<"pasta/pasta have been alloted to you!"<<endl;

            }
            else
            {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"pasta remaining in hotel:";
            }
            break;
            case 3:
            cout<<"\nEnter the  burger Quantity :"<<endl;

            cin>>quant;
            if(Qburger-Sburger>=quant)
            {
                Sburger=Sburger+quant;
                Total_burger=Total_burger+(quant*120);
                cout<<"\n"<<quant<<"burger/burger have been alloted to you!"<<endl;

            }
            else
            {
                cout<<"\n\tOnly"<<Qburger-Sburger<<"burger remaining in hotel:";
            }
            break;
            case 4:
            cout<<"\nEnter the noodles Quantity :"<<endl;

            cin>>quant;
            if(Qnoodles-Snoodles>=quant)
            {
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+(quant*140);
                cout<<"\n"<<quant<<"noodles/noodles have been alloted to you!"<<endl;

            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles remaining in hotel:";
            }
            break;
            case 5:
            cout<<"\nEnter the shake Quantity :"<<endl;

            cin>>quant;
            if(Qshake-Sshake>=quant)
            {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+(quant*120);
                cout<<"\n"<<quant<<"shake/shake have been alloted to you!"<<endl;

            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<"shake remaining in hotel:";
            }
            break;

            case 6:
                cout<<"\nEnter the fries Quantity :"<<endl;
                cin>>quant;
                if(Qfries-Sfries>=quant)
                {
                    Sfries=Sfries+quant;
                    Total_fries=Total_fries+(quant*150);
                    cout<<"\n"<<quant<<"shake/shake have been alloted to you!"<<endl;
                }
                else
                {
                    cout<<"\n\tOnly"<<Qfries-Sfries<<"Fries remaining in hotel:";
                }
            case 7:
                    cout<<"\n Details of sales and collection"<<endl;
                    cout<<"\n Number of rooms we had:"<<Qrooms;
                    cout<<"\n Number of rooms we gave for rent:"<<Srooms;
                    cout<<"\n Remaining rooms :"<<Qrooms-Srooms;
                    cout<<"\n Total room collection for the day:"<<Total_rooms;

                    cout<<"\n Number of pasta we had:"<<Qpasta;
                    cout<<"\n Number of pasta we sold:"<<Spasta;
                    cout<<"\n Remaining pasta :"<<Qpasta-Spasta;
                    cout<<"\n Total pasta collection for the day:"<<Total_pasta;

                    cout<<"\n Number of burger we had:"<<Qburger;
                    cout<<"\n Number of burger we sold:"<<Sburger;
                    cout<<"\n Remaining burger :"<<Qburger-Sburger;
                    cout<<"\n Total burger collection for the day:"<<Total_burger;

                    cout<<"\n Number of noodles we had:"<<Qnoodles;
                    cout<<"\n Number of noodles we sold:"<<Snoodles;
                    cout<<"\n Remaining noodles :"<<Qnoodles-Snoodles;
                    cout<<"\n Total noodles collection for the day:"<<Total_noodles;

                    cout<<"\n Number of shake we had:"<<Qshake;
                    cout<<"\n Number of shake we sold:"<<Sshake;
                    cout<<"\n Remaining shake :"<<Qshake-Sshake;
                    cout<<"\n Total shake collection for the day:"<<Total_shake;

                    cout<<"\n Number of fries we had:"<<Qfries;
                    cout<<"\n Number of fries we sold:"<<Sfries;
                    cout<<"\n Remaining fries:"<<Qfries-Sfries;
                    cout<<"\n Total fries collection of the day:"<<Total_fries;

                    cout<<"\n\n\n Total collection of the day:"<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_fries;
                    break;

            case 8:
                    exit(0);

            default:
                    cout<<"Please select the numbers mentioned above!";

    }
    goto m;

}
