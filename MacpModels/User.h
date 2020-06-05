#pragma once
#include <string>
#include "pch.h"

class User
{
public:
	User(std::string username, std::string password);

private:
	std::string username;
	std::string password;
	std::string login();
};