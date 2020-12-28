//13.2.1
#define Z 2

#include "var.h"
#include "Before.h"
#include "False.h"
#include "true.h"
#include "Repeat.h"

using namespace nsVar;
using namespace nsBefore;
using namespace nsFalse;
using namespace nsTrue;
using namespace nsRepeat;

void main()
{
	do
	{
		Before();
#if (Z > 3) 
		True();
#else
		False();
#endif
		Repeat();
	} while (ch == 'y');
}




