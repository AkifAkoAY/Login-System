#include "LogIn.hpp"
//Des-Cos
LogIn::~LogIn()
{}
LogIn::LogIn()
{
    this->setUS("asd");
    this->setPAS("1234");
}


//set
void LogIn::setenter(string enter)
{
    this->enter = enter;
}
void LogIn::setUS(string US)
{
    this->US = US;
}
void LogIn::setPAS(string PAS)
{
    this->PAS = PAS;
}
void LogIn::setusername(string username)
{
    this->username = username;
}
void LogIn::setpassword(string password)
{
    this->password = password;
}
//get
string LogIn::getenter()
{
    return(this->enter);
}
string LogIn::getUS()
{
    return(this->US);
}
string LogIn::getPAS()
{
    return(this->PAS);
}
string LogIn::getusername()
{
    return(this->username);
}
string LogIn::getpassword()
{
    return(this->password);
}
//funcions

void LogIn::menu()
{
    cout << "Enter the UserName :";
    cin >> this->username;
    cout << "Enter the Password :";
    cin >> this->password;
}
void LogIn::auth()
{
    cout << "Auth !" << endl;
}
void LogIn::error()
{
    cout << "Error !" << endl;
}
void LogIn::checkPAS()
{
    if(this->getPAS() == this->getpassword())
    {
        auth();
    }
    else
    {
        error();
    }
}
void LogIn::ENTER()
{
    if(this->getUS() == this->getusername())
    {
        checkPAS();
    }
    else
    {
        error();
    }
}