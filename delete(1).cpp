#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<stdio.h>

using namespace std;

int del()
{
    char name[20];
    fstream file, file2;

    file.open("login.csv",ios::in);
    ofstream file1("temp.csv");
    file1.close();
    file2.open("temp.csv",ios::in|ios::out);
    char str[20][20][20];
    char temp[20][20][20];
    int r=0,i;
    while(file)
    {
        for(i=0;i<3;i++)
            file.getline(str[r][i],19,',');
        file.getline(str[r][i],19,'\n');
        r++;
    }
    cout<<"Registered Users are----:\n\n "<<endl;
    for(i=1;i<20;i++)
        cout<<"\t"<<str[i][0]<<"\n";
    cout<<"\nEnter the User name You want to remove:------- ";
    cin>>name;
    r=0;
    int j;
    for(i=0;i<20;i++)
    {
        if(strcmp(name,str[i][0]))
        {
            for(j=0;j<3;j++)
            file2<<str[i][j]<<",";
            file2<<str[i][j]<<"\n";
        }
    }

    file.close();
        file2.close();

    //delete the original file and rename the temp file to the original
    remove("login.csv");
    rename("temp.csv","login.csv");
r=0;
file2.open("login.csv");
while(file2)
    {
        for(i=0;i<3;i++)
            file2.getline(temp[r][i],19,',');
        file2.getline(temp[r][i],19,'\n');
        r++;
    }
    cout<<"The Registered Users are------->>>>\n : ";
    for(i=1;i<20;i++)
        cout<<"\t"<<temp[i][0]<<"\n ";

return 0;

}
