#include<stdio.h>
enum days{
    MON=1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};
int main(){
enum days today=MON;
switch(today){
case 1:
    printf("its Monday");
    break;
case 2:
    printf("its Tuesday");
    break;
case 3:
    printf("its Wednesday");
    break;
case 4:
    printf("its Thusday");
    break;
case 5:
    printf("its Friday");
    break;
case 6:
    printf("its Saturday");
    break;
case 7:
    printf("its Sunday");
    break;
}
}
