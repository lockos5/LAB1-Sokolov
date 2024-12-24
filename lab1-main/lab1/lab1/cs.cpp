#include "cs.h"

cs::cs(string n, int num, int numw, int e)
{
	name = n;
	numFac = num;
	numWorkFac = numw;
	eff = e;
}

cs::cs()
{
	name = "Test";
	numFac = 10;
	numWorkFac = 2;
	eff = false;
}

string cs::GetName() const
{
	return this->name;
}

int cs::GetNumFac() const
{
	return this->numFac;
}

int cs::GetNumWorkFac() const
{
	return this->numWorkFac;
}

int cs::GetEff() const
{
	return this->eff;
}

void cs::SetName(string st)
{
	name = st;
}

void cs::SetEff(int n)
{
	eff = n;
}

bool cs::SetNumWorkFac(bool A)
{
	if (A) {
		if ((numWorkFac+1) > numFac) {
			return false;
		}
		else {
			numWorkFac++;
			return true;
		}
	}
	else {
		if ((numWorkFac-1) < 0) {
			return false;
		}
		else {
			numWorkFac=numWorkFac-1;
			return true;
		}
	}
}


