#include <stdio.h>
#include <stdarg.h>

void tong(int sum, ...){
    double flag = 0.0;
    va_list ptr_double, ptr_int;
    va_start(ptr_double, sum);
    for (int i = 0; i < sum; i++){
        flag = flag + va_arg(ptr_double, double); 
    }
    va_end(ptr_double);

    va_start(ptr_int, sum); 
    for (int i = 0; i < sum; i++){
        flag = flag + va_arg(ptr_int, int);
    }
    va_end(ptr_int);
    printf("Tong = %f",flag);
}
int main(){
    tong(5,8.5,5.0,1,2,3);
    return 0;
}
