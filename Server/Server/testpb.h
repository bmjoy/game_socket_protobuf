#ifndef __testpb__
#define __testpb__

#include <fstream>
#include <iostream>
#include "game.pb.h"

using namespace std;

class testpb
{
public:
	testpb();
	~testpb();

	void serial();
	void deserial();
};

#endif // ! __testpb__



