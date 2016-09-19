#pragma once
#include <string>
#include <iostream>

using namespace std;

// no classes added yet
// It's not a serious approch towards your work!

class President
{
	string name;
	bool latinos;

public:
	explicit President(string name):
		name(name),
		latinos(false)
	{
	}

	const string& getName() const
	{
		return name;
	}

	bool isLatinos() const
	{
		return latinos;
	}
};

void makeAmericaGreatAgain(President president);
