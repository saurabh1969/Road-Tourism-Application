#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<cstring>
#include"delete(1).cpp"
#include"pass.cpp"
#include"displaydemo2.cpp"


using namespace std;

class Admin
{

    public:

              std::string name;
             void adinterface();

             void password();
   };
void adinterface()
{
    std::string names,id,age,category,gender;
     std::string nametobechecked;

     int choices;
     char chs='y';
     char answer;
     system("cls");
     cout<<"\t\t**********************WELCOME ADMINISTRATOR*****************************************\n\n\n";

     while(chs!='N'||'n')
     {

             cout<<"\t1)Create a New User \n\n";
             cout<<"\t2)Accessing an Existing User  \n\n";
             cout<<"\t3)Delete User \n\n";
             cout<<"\t4)Change the current password \n\n";
             cout<<"\t5)No of Existing Users & Logged in Info \n \n";
             cout<<"\t6)Exit  \n\n";
             cout<<"\tEnter Your Choice : ------>>> ";
             cin>>choices;
             char answer='y';
             switch(choices)
             {
                case 1: {

                          system("cls");
                          cout<<"Creating New user \n";  //completed
                          ofstream fo;
                          fo.open("login.csv",ios::app);
                          while( answer=='y')
                          {
                            cout<<"Entering details of people whose record is to be inserted \n";
                            std::cout<<"Enter Name\n";
                            std::cin>>names;
                    std::cout<<"Enter Id \n";
                    std::cin>>id;
                    std::cout<<"Enter Category(A|U)? \n";
                    std::cin>>category;
                    std::cout<<"Enter Age \n";
                    std::cin>>age;
                    std::cout<<"Enter gender \n";
                    std::cin>>gender; // calling the function to input the files
                            fo<<names<<","<<id<<","<<category<<","<<age<<","<<gender<<",\n";
                            cout<<"Do you want to enter any details further?(y|n) \n";
                            cin>>answer;
                            }

                          fo.close();
                          }
                          break;


        case 2:{
                          system("cls");
                          cout<<"\tEnter the name of the existing user whose details you want to view";//completed
                          std::getline(std::cin,nametobechecked);
                          cout<<"\n\tAccessing the details...................";

                          showdetails();
                          }

                         break;
                case 3:{
                          system("cls");
                          cout<<"\tEnter the Name of the user to be deleted";
                          std::getline(cin,nametobechecked);
                          cout<<"\tDeleting Existing User...................";
                          del();
                          }
                          break;



                case 4:  { char ans;
				          system("cls");
                          cout<<"\n\tAre you sure you want to change the current password(Y/N) ?";//completed
                          cin>>ans;
                          if(ans=='Y'||'y')
                            {
                               Classes::PasswordA a;
                                a.change();
                             }

                          else
                             exit(0);
                          break;


                }
                          break;


                 case 5 :
                      {system("cls");
                         cout<<"*******************************************************************************************************\n";
                         cout<<"The Number of times user's have logged into the app :\t \t";
                         std::cout<<"ptr";
                         break;}

                 case 6:{
                          system("cls");
                          try{

                              throw 0;

                              }
                          catch(...)
                          {


                          cout<<"Thank You for using \n You have exited administrator interface \n";
                          exit(0);
                          }
                 }
                          break;

                default:
                        system("cls");
                        cout<<"The choice you selected is invalid \n";
                        cout<<"Do you want to retry? \n";
                        cin>>chs;

             }
       }
}
