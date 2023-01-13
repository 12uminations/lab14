#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[],int N,double y[6]){
    double ari ,std,har =0;
    double geo =1;
    double max,min =x[0];
    for(int i=0;i<N;i++){
        ari += x[i];
        std += pow(x[i],2);
        geo *= x[i];
        har += 1/x[i];
        if(x[i]>max) max=x[i];
        if(x[i]<min) min=x[i];
    }
    noR=(std/N)-pow((ari/N),2);
    y[0] = ari/N;
    y[1] = pow(noR,0.5);
    y[2] = pow(geo,1/6.0);
    y[3] = N/har;
    y[4] = max;
    y[5] = min;
}