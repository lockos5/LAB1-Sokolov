#pragma once
#include <string>
using namespace std;
struct cs
{
	private:
		string name;
		int numFac;
		int numWorkFac;
		int eff;
	public:
		cs(string n, int num, int numw, int e);
		cs();
		string GetName() const;
		int GetNumFac() const;
		int GetNumWorkFac() const;
		int GetEff() const;
		void SetName(string st);
		void SetEff(int n);
		bool SetNumWorkFac(bool A);

};

