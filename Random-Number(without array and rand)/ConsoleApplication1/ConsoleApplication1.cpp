	#include "pch.h"
	#include <iostream>
	#include <Windows.h>
	#include <algorithm>
	#include <time.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>

	using namespace std;

	int main()
	{
		srand(unsigned(time(NULL)));
		int arr[22];
		for (int i = 0; i < 22; i++)
		{
			arr[i] = i;
		}
		random_shuffle(begin(arr), end(arr));
		for (int a = 0; a < 22; a++)
		{
			cout << arr[a] << endl;
		}
	}