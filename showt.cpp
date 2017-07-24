//This is to print the availabilty of tolls in that route

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;
void showTolls(char st[20][20],char *dest,int p)
{
     char a[20],b;
     int cnt;
     fstream file;
          file.open("toll.csv",ios::in);
     for(int i=0;i<20;i++)
          {
               file.getline(a,10,',');

               if(!strcasecmp(a,dest))
               {
                    while(cnt<p-1)
                    {
                         while(1)
                         {
                              file.get(b);
                              if(b==',')
                              {
                                   cnt++;
                                   break;
                              }
                         }
                      }
                    cout<<"\t\t\t\t\t Tolls----- :  ";
                    while(1)
                    {

                         file.get(b);
                         if(b==',')
                              break;
                         cout<<b;
                    }
                    cout<<"\n";

               }

               while(1)
               {
                    file.get(b);
                    if(b=='\n')
                         break;
                    //cout<<b;
               }
               if(file.eof())
                    exit(0);
          }
          file.close();

}
