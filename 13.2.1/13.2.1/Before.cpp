//Before.cpp
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "var.h"
#include "Before.h"

#define PRINTI(w) puts("Control output"); \
		printf(#w"=%d\n",w)

using namespace nsVar;

void nsBefore::Before()
{
	puts("Input 3 integer numbers");

	scanf("%d", &x);
	PRINTI(x);

	scanf("%d", &y);
	PRINTI(y);

	scanf("%d", &z);
	PRINTI(z);
}
