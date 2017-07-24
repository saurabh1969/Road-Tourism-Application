#include<iostream>
#include<stdlib.h>
#include<cstring>
#include <conio.h>


using namespace std;

namespace Classes
{
    class PasswordA

       {
           private :
                       std::string newpass,opt,q,pass;
		             int ctr;

           public :
                    PasswordA()
                    {
                    	 ctr=0;
                    }

int check()
{
     string pass ="";
   char ch;
   cout << "\n\t\tEnter Password(..Max 13 Characters..)-------------";
   cout<<"\n\tWrong Password will Lead to Termination......";
   ch = _getch();
   while(ch != 13)
     {//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
     }
   if(pass == "user_1234"){
      return 1;
   }else{
      exit(0);
   }
}




                     void change()
                     {
                        char opt;
						system("cls");
                        cout<<"Are you sure you want to change the password ?(y|n) : \t " ;
                        cin>>opt;
                        if(opt=='Y'||opt=='y')
                          {
                             cout<<"Enter old password  \n";
                             cin.ignore(256, '\n');
                             cin>>q;
                             if(q==pass)
                              {
                                 cout<<"Enter new password and password length shouldn't be greater than 13 characters: \n";
                                 cin>>newpass;
                                 if(newpass.length()!=13)
                                 {
                                   ctr++;
                                   cout<<"You have violated the criteria of password length\n Re-enter the new password";
                                   if(ctr>5)
                                    {
                                      cout<<"You have enterd the password incorrect 5 time \n Change Aborted \n";
                                      exit(0);
                                     }
                                    else
                                      change();
                                  }
                                 else
                                    {
                                      pass=newpass;
                                      system("cls");
                                      cout<<"\n Password Changed succesfully";
                                     }
                               }
                              else
                             {
                                system("cls");
                                cout<<"You haven't entered the old password correctly.Retry.... \n";
                                ctr++;
                                 if(ctr>5)
                                    {
                                      cout<<"You have enterd the old password incorrectly 5 times \n Change Aborted \n";
                                      exit(0);
                                     }
                                 else
                                      change();
                                  }
                             }
                         else
                            exit(0);

                     }



            };

}

