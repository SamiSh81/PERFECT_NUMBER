// L5-4-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Read_Postive_Number(string msg)
{
    int number;
	do
	{
		cout << msg << endl;
		cin >> number;

	} while (number<=0);
	return number;
}
bool IsPerfcktNumber(int number)
{
	int count = 1;
	int sum=0;

	do
	{
		if (number % count == 0)
			sum += count;
		count++;
	} while (count<number);
	return sum == number;
}
void Print_Result_IsPerfcktNumber(int number)
{
	if (IsPerfcktNumber(number))
		cout << "THE NUMBER IS PERFCKT" <<"\n";
	else
		cout << "THE NUMBER IS NOT PERFCKT" << endl;
}
int main()
{
	Print_Result_IsPerfcktNumber(Read_Postive_Number("ENTER THE POSTIVE NUMBER: "));
}