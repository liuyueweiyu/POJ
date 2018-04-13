
///	1/1

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double h, t, d, e;

int main()
{
	char first, second;
	cin >> first;

	while (first != 'E') {
		bool flag_h = false, flag_t = false, flag_d = false;
		double a;
		cin >> a;
		switch (first) {
		case 'H': h = a; flag_h = true; break;
		case 'T': t = a; flag_t = true; break;
		case 'D': d = a; flag_d = true; break;
		default:break;
		}
		cin >> second >> a;
		switch (second) {
		case 'H': h = a; flag_h = true; break;
		case 'T': t = a; flag_t = true; break;
		case 'D': d = a; flag_d = true; break;
		default:break;
		}
		if (!flag_h) {
			h = t + 0.5555*(6.11*exp(5417.7530*(1 / 273.16 - 1 / (d + 273.16))) - 10);
		}
		else if (!flag_t) {
			t = h - 0.5555*(6.11*exp(5417.7530*(1 / 273.16 - 1 / (d + 273.16))) - 10);
		}
		else {
			d = 1 / (1 / 273.16 - log(((h - t) / 0.5555 + 10) / 6.11) / 5417.7530) - 273.16;
		}
		printf("T %.1lf D %.1lf H %.1lf\n", t, d, h);
		cin >> first;
	}
	return 0;
}
