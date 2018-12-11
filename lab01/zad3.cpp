#include <cstdio>
#include <stdlib.h>

#define N 1000000000
#define a 0.492710f

using namespace std;

float sum_rec(int n, float number){
    if(n == 0) return 0;
    if(n == 1) return number;
    return sum_rec(n/2, number) + sum_rec(n - n/2, number);
}

int main(){

    printf("Calculating %f * %d (recursive)\n", a, N);

    float sum = sum_rec(N, a);

    printf("Calculated as sum:\t%f\n", sum);
    printf("Calculated as mul:\t%f\n", N*a);
    printf("Difference:\t\t%f\n", abs(sum - N*a));
    printf("Error:\t\t\t%.2f%%\n", abs(sum - N*a)/(N*a)*100);

    return 0;
}
