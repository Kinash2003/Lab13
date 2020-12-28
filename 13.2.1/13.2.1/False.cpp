//False.cpp
#include <stdio.h>
#include <conio.h>

#include "False.h"
#include "var.h"

#define RESULT_SECOND(x, y, z) (MIN((x * y + y * z), SQR(z * x + y * z)))
#define PRINTR(w) puts ("Result :"); \
		printf (#w"=%f\n",(float)w)
#define SQR(x) ((x) * (x))
#define MIN(x, y) (((x) > (y)) ? (x) : (y))

using namespace nsVar;

void nsFalse::False()
{
	w = RESULT_SECOND(x, y, z);
	PRINTR(w);
}
