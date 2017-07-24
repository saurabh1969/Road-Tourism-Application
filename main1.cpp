#include<cstdlib>
#include<cstring>
#include<iostream>
#include"admin2.cpp"
#include"user1.cpp"

using namespace std;

class Details
  {
     public:
             std::string names,id,age,category,gender;
             Details()
             {
                static int ptr;
                ptr=ptr++;
              }
             void enteringdetails()
              {
                    std::cout<<"Enter Name\n";
                    std::cin>>names;
                    std::cout<<"Enter Id \n";
                    std::cin>>id;
                    std::cout<<"Enter Category(A|U)? \n";
                    std::cin>>category;
                    std::cout<<"Enter Age \n";
                    std::cin>>age;
                    std::cout<<"Enter gender \n";
                    std::cin>>gender;


                 }
             friend void counter()
             {

              }



      };
int ptr =0;

class interface:virtual public Admin ,virtual public user
{
};

int main()
{
     system("cls");
     interface j,ne;
     char ch='y';
	 int choice;
     cout<<"*************************************************************\n\n";
     cout<<"\t\tWelcome to Road Transport System\n\n";
     cout<<"**************************************************************\n\n";

     while(ch!='N'||'n')
     {

             cout<<"\t1) Login as User \n\n";
             cout<<"\t2) Login as Admin \n\n";
             cout<<"\t3)Exit the system \n\n";
             cout<<"\tEnter your choice -------->>>>>>";
             cin>>choice;
             switch(choice)
             {
                case 1 :  usinterface();
                          break;

                case 2 : {
                          Classes::PasswordA a;

                          int returnval=a.check();
                          if(returnval==1)
                          {
                            adinterface();
                          }
                        }
                         break;

                case 3: cout<<"Thank You for using \n \t\tBye!! \n ";
                          exit(0);

                default:
                       cout<<"\tThe choice you selected is invalid \n";
                        cout<<"\tDo you want to retry? \n";
                        cin>>ch;

             }
       }
}
