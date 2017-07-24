#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<iostream>

using namespace std;

void showdetails()
{
std::string id,name,gender,age,type,s;
std::cout<<"Enter the user----";
std::getline(std::cin,s);
fstream fhandle;
fhandle.open("login.csv",ios::in);
while(fhandle)
 {


   std::getline(fhandle,name,',');
   if(s==name)
   {
   std::getline(fhandle,id,',');
   std::getline(fhandle,type,',');
   std::getline(fhandle,age,',');
   std::getline(fhandle,gender,'\n');
   break;
   }
   else
   {
     name="DOESNOT EXIST";
     id="DoestNOT ";
     gender="Dosenot exist";
     age="doesnot exist";
     type="doestnot exist";
	continue;
  }
 }
fhandle.close();
std::cout<<"Name   : "<<name<<endl;
std::cout<<"Id     : "<<id<<endl;
std::cout<<"Gender : "<<gender<<endl;
std::cout<<"Age    : "<<age<<endl;
std::cout<<"Type   : "<<type<<endl;


}
