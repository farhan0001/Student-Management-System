#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> security()
{
    string uname, pswrd, auth;
    vector<string> v;
    uname="farhan";
    pswrd="123456";
    auth="2022";
    v.push_back(uname);
    v.push_back(pswrd);
    v.push_back(auth);

    return v;
}
