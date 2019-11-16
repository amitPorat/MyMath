#include "myMath.h"

double Exp(int x){
	int flag = 0;
		if (x<0){
			flag=1;
			x*=-1;
		}
	double ans = e;
	int i = 1;
	if (x==0){
		return 1;
	}
	while (i < x){
		ans = ans*e;
		i++;
	}
	if (flag ==1){
				ans = 1/ans;
			}
	return ans;
}

double Pow(double x, int y){
	int flag = 0;
		if (y<0){
			flag=1;
			y*=-1;
		}
	double ans = x;
	int i = 1;
	if (y==0){
			return 1;
		}
	while (i < y){
		ans = ans*x;
		i++;
	}
	if (flag ==1){
				ans = 1/ans;
			}
	return ans;
}
