//To display the name of Hospital

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<cstring>

using namespace std;
void showHospital()
{
     int l=0;
string place,temp,s;
cin.ignore(256, '\n');
cout<<"Enter the Place----";
getline(cin,place);
fstream fhandle;
fhandle.open("hosp.csv",ios::in);


 while(fhandle)
  {

	getline(fhandle,s,',');

	getline(fhandle,temp,'\n');
        if(s==place)
         {
	   l=1;
	    }
        else
	   continue;
      }
fhandle.close();
if(l==1)
     cout<<"\n"<<temp<<endl<<endl;
else
     cout<<"\n\n*********** Wrong Entry *********\n\n";


}



