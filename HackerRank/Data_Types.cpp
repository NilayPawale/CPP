//All Data Types
// Input - 3 12345678912345 a 334.23 14049.30493

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&a,&l,&c,&f,&d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",a,l,c,f,d);
    return 0;
}