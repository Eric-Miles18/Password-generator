#include "Generator.h"
#include <ctime>
#include <cstdlib>
#include <string>

std::string GeneratePassword(int length, std::string& password)
{
    std::string alphanum = "0123456789-!@#$%^&*_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int alphanumSize = sizeof(alphanum);
    //std::string* generated;

    srand(time(0));

    for (int i = 0; i < length; i++)
    {
        password += alphanum[rand() % alphanumSize];
    }

    return password;
}
