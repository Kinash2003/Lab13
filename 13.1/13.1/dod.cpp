// dod.cpp
#include "var.h" 
#include "dod.h"

using namespace nsVar;

void nsDod::dod() {
	R = x * x * ((2. * n - 1) / (2. * n + 1));
	a *= R;
}