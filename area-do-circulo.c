#include <stdio.h>
#include <math.h>
int main(){
    
    double R;
    double n = 3.14159;
    
    printf("R = ");
    scanf("%lf",&R);
    
    double A = n * pow(R,2);
    
    printf("A = %.4lf",A);
    
    return 0;
}
