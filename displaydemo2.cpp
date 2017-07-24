#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<iostream>

using namespace std;

void showdetails()
{
     int f;
std::string id,name,gender,age,type,s;
std::cout<<"Enter the user----";
std::getline(std::cin,s);
fstream fhandle;
fhandle.open("login.csv",ios::in);
while(!fhandle.eof())
 {

   std::getline(fhandle,name,',');

   std::getline(fhandle,id,',');
   std::getline(fhandle,type,',');
   std::getline(fhandle,age,',');
   std::getline(fhandle,gender,'\n');
    if(s==name)
        f=1;


    else
	continue;
  }
fhandle.close();
if(f==1){
std::cout<<"Name   : "<<name<<endl;
std::cout<<"Id     : "<<id<<endl;
std::cout<<"Gender : "<<gender<<endl;
std::cout<<"Age    : "<<age<<endl;
std::cout<<"Type   : "<<type<<endl;}
else{
cout<<"\n\n *********************** User does not exists***********************************\n\n\n";}


}
