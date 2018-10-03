#include <cstdio>
#include <stdlib.h>

#define N 1000000000
#define a 0.492710f

using namespace std;

int main(){

    printf("Calculating %f * %d (Kahan)\n", a, N);

    // algorytm Kahana
    float sum = a;
    float c = 0.0;
    for(int i = 1; i < N; i++){
        float y = a - c;
        float t = sum + y;
        c = (t - sum) - y;
        sum = t;
    }

    printf("Calculated as sum:\t%f\n", sum);
    printf("Calculated as mul:\t%f\n", N*a);
    printf("Difference:\t\t%f\n", abs(sum - N*a));
    printf("Error:\t\t\t%.2f%%\n", abs(sum - N*a)/(N*a)*100);

    return 0;
}
