#include "computer.h"



bool computer::operator ==( const computer& objln)
{
	if(data1 ==objln.data1 && data2 == objln.data2 && data3 == objln.data3)
		return true;
	else
		return false;
}
