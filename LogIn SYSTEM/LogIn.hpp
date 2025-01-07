#pragma once
#include <iostream>

using namespace std;

class LogIn
{
    private:
        string enter;
        string US;
        string PAS;

        string username;
        string password;
    public:
    //Cos-Des
    ~LogIn();
    LogIn();

    //set
    void setenter(string enter);
    void setUS(string US);
    void setPAS(string PAS);
    void setusername(string username);
    void setpassword(string password);
    //get
    string getenter();
    string getUS();
    string getPAS();
    string getusername();
    string getpassword();

    //funcions
    void menu();
    void ENTER();
    void checkPAS();
    void auth();
    void error();


};