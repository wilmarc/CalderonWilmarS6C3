#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
float dx=(2.0/80);
int nx=80;
int nt=3;
int c=1;
float dt=dx/(2*c);
float upre[nx];
float ufut[nx];
float x[nx];
x[0]=0.0;
for (int k=1;k<nx;k++){
	x[k]=x[k-1]+dx;
}
	for (int i=0;i<nt;i++){
		for (int j=0;j<nx;j++){
		upre[0]=1.0;
		
		if (i==0){
			if(x[j]>=0.75 && x[j]<=1.25){
				upre[j]=2.0;
			}		
			else{
				upre[j]=1.0;
			}
			}
		else{
			ufut[j]=(-1.0*c)*(dt/dx)*(upre[j]-upre[j-1])+upre[j];
		}

		}
		for (int j=0;j<nx;j++){
		upre[j]=ufut[j];		
		cout << j <<" " << upre[j] <<endl;
		}
}
return 0;
}


