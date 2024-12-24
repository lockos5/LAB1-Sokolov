#pragma once
#include <string>
using namespace std;
struct pipe
{
	private:
		string name;
		int length;
		int diameter;
		bool inRepair;
	public:
		pipe(string n, int l, int d, bool rep);  // ��������� �����������
		pipe();
		// ��������� 4 ������� ��� ������ �����:
		string GetName() const;
		int GetLength() const;
		int GetDiameter() const;
		bool GetInRepair() const;
		void SetInRepair(bool s);
		void SetName(string st);
};

