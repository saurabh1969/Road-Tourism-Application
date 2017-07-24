#include<iostream>
#include<cstdlib>
#include"userlogin.cpp"
#include"showHos.cpp"
#include"showTemp.cpp"

using namespace std;

class user
{
    public:
             void usinterface();
             void userdisp();
             void showdd();
             void showt();



};

void usinterface()
{
     char chas,pam;
     int choices,sh;
     system("cls");
     cout<<"\t**********************   WELCOME USER  *****************************************\n\n";

     while(chas!='N'||'n')
     {
              cout<<"###########   User Window  ########\n\n";
             cout<<"\t1)Route Tracing \n\n";
             cout<<"\t2)Places of Importance \n\n";
             cout<<"\t3)Exit \n \n";
             cout<<"Enter Your Choice -------->>>>";
             cin>>choices;
             switch(choices)
             {
                case 1 :  system("cls");
                          cout<<"\t \t  Route Tracing \n\n\n";
                          userdisp();
                          break;


                case 2:
                     system("cls");
                        cout<<"***************************  IMPORTANT PLACES  *********************\n\n"; //completed

                          cout<<"Choose from the following places \n ";
                          cout<<"2)BBSR-Bhubaneswar \n";
                          cout<<"3)CTC-Cuttack \n";
                          cout<<"4)RKL-Rourkela \n";
                          cout<<"5)BAM-Bhrampur \n";
                          cout<<"6)SBP-Sambalpur\n";
                          cout<<"7)Puri  \n";
                          cout<<"8)BLS-Balesore  \n";
                          cout<<"9)BDK-Bhadrak \n";
                          cout<<"10)Baripada \n";
                          cout<<"11)BLGR-Balangir \n";
                          cout<<"12)JHSG-Jharsuguda \n";
                          cout<<"13)Bargarh \n";
                          cout<<"14)Sunabeda \n";
                          cout<<"15)Rayagada \n";
                          cout<<"16)BWIP \n";
                          cout<<"17)Paradip \n";
                          cout<<"18)Barbil \n";
                          cout<<"19)KDJR \n";
                          cout<<"20)Koraput \n\n\n";
                          while(pam=='y'|'Y')
                          {
                            cout<<"Enter what you want to search for ?\n";
                            cout<<"1)  HOSPITALS NEARBY \n\n";
                            cout<<"2)  TEMPLES NEARBY    \n\n";
                            cout<<"3)  EXIT   \n\n ";
                            cin>>sh;
                            switch(sh)
                            {
                               case 1: showHospital();
                                       break;
                               case 2: showTemple();
                                       break;
                               case 3:
                                       cout<<"Preparing to Exit \n";
                                       exit(0);
                               default:
                                    cout<<"\n**********Invalid Choice*****************\n\n\n";
                               }
                            cout<<"Do you want to search again ?(y|n)";
                            cin>>pam;
                          }

                         break;

                case 3: system("cls");
                        cout<<"You have opted to exit the user interface .Are you sure(y|Y) \n";
                        cin>>chas;
                        if(chas!='y'||'Y')
                        exit(0);
                        break;
               default: cout<<"Invalid Choice";
         }
   }
 }



