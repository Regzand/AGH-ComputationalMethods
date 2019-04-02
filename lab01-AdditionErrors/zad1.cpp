#include <cstdio>
#include <stdlib.h>

#define N 1000000000
#define a 0.492710f

using namespace std;

int main(){

    printf("Calculating %f * %d (iteration)\n", a, N);

    float sum = 0;
    for(int i = 0; i < N; i++)
        sum += a;

    printf("Calculated as sum:\t%f\n", sum);
    printf("Calculated as mul:\t%f\n", N*a);
    printf("Difference:\t\t%f\n", abs(sum - N*a));
    printf("Error:\t\t\t%.2f%%\n", abs(sum - N*a)/(N*a)*100);

    return 0;
}
