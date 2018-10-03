#include <cstdio>
#include <stdlib.h>

#define N 10000000
#define a 0.492710f
#define S 50000

using namespace std;

int main(){

    printf("Calculating %f * %d (iteration)\n", a, N);

    double sum = 0;

    for(int i = 0; i*S < N; i++){

        for(int j = 0; j < S; j++)
            sum += a;

        double mul = (i+1)*S*a;

        printf("After %d:\tsum: %f\tmul: %f\tdiff: %f\terror: %.2f%%\n",
               (i+1)*S,
               sum, mul,
               mul - sum,
               abs(mul - sum) / mul * 100
        );
    }

    return 0;
}