//o display the name of Temple

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<cstring>

using namespace std;
void showTemple()
{
     int k=0;
string place,temp,s;
cin.ignore(256, '\n');
cout<<"Enter the Place----";
getline(cin,place);
     fstream fhandle;
          fhandle.open("temple.csv",ios::in);


                    while(fhandle)
	            	{

			getline(fhandle,s,',');
               getline(fhandle,temp,'\n');
			if(s==place)
			    {
				k=1;
			     }
			else
			continue;
                 }
              fhandle.close();

if(k==1)
cout<<"\n"<<temp<<endl<<endl;
else
     cout<<"\n\n*********** Wrong Entry *********\n\n";



		}








