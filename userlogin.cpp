//This is userlogin page.


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include"showd.cpp"
#include"showt.cpp"
#include"stime.cpp"

using namespace std;

     void userdisp()
     {
          char pickUp[10];
          char destination[10];
          char str[20][20],a[20],b;
          int pos,cnt=0;

          fstream file;
          file.open("distance.csv",ios::in);

          int i=0,k=0;

          for(i=0;i<19;i++)
               file.getline(str[i],1000,',');
          file.getline(str[19],1000,'\n');


          cout<<"\t\t\tEnter the Source----";
          cin>>pickUp;



          for(i=0;i<20;i++)
          {
               if(!strcasecmp(str[i],pickUp))
               {
                    pos=i;
                    break;
               }


         }
         cout<<"\n\n\t\t\t Enter the destination---";
          cin>>destination;



          showdd(str,destination,pos);
          showtime(str,destination,pos);
          showTolls(str,destination,pos);





          file.close();

          }

