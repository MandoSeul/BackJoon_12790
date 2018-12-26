// 20181225.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cstdio>
#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int main(void) {
	unsigned int Tcase = 0;
	int hp_set, mp_set, att_set, heal_set;
	int hp_th, mp_th, att_th, heal_th;


	int total[1000];
	int hp_to, mp_to, att_to, heal_to;

	cin >> Tcase;
	int i = Tcase;
	while (Tcase--) {

		cin >> hp_set >> mp_set >> att_set >> heal_set >> hp_th >> mp_th >> att_th >> heal_th;

		hp_to = hp_set + hp_th;
		mp_to = mp_set + mp_th;
		att_to = att_set + att_th;
		heal_to = heal_set + heal_th;

		if (hp_to<1) hp_to = 1;
		if (mp_to<1) mp_to = 1;
		if (att_to<0) att_to = 0;

		total[Tcase] = (1 * hp_to) + (5 * mp_to) + (2 * att_to) + (2 * heal_to);

	}
	for (i=i-1; i >= 0; i--) cout << total[i] << endl;;
	return 0;
}



