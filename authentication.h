#pragma once

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include "secure.h"

using namespace std;

void authenticate(){

    string auth_key =" ";
    char choice;
    string username,password;

    vector<string> verification = security();
    username = verification[0];
    password = verification[1];

    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| STUDENT MANAGEMENT SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;

signup:
    if(auth_key == verification[2]){
    cout<<"\n\n\n\t\t\t******Signup******"<<endl;

	cout<<"\t\t\tEnter new username: ";

	cin>>username;

	cout<<"\t\t\tEnter new password: ";

	cin>>password;

	cout<<"\t\t\tYour new id is creating please wait";

	for(int i=0;i<6;i++)

	{

		cout<<".";

		Sleep(500);

	}

	cout<<"\n\t\t\t\tYour id created successfully";

	Sleep(2000);
    }

start:

	system("cls");

	string usrn,pswd;

	cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| STUDENT MANAGEMENT SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;

	cout<<"\n\n\n\t\t\t   LOGIN"<<endl;

	cout<<"\t\t\tEnter username: ";

	cin>>usrn;

	cout<<"\t\t\tEnter password: ";

	cin>>pswd;

	if(!(usrn==username&&pswd==password))
	{
        cout<<"\t\t\tDo you want to signup?"<<endl;
        cout<<"\t\t\tType 'Y' or 'N'  ";
        cin>>choice;
        if(choice == 'N' || choice == 'n')
        {
            goto start;
        }
        else if(choice == 'Y' || choice == 'y')
        {
            system("cls");
            cout<<"\n\n\n\t\t\tEnter authentication key: ";
            cin>>auth_key;
            goto signup;
        }
	}
	system("cls");
}
