#include <stdio.h>
#include <stdlib.h>

int main()
{
   int variant;
   printf("vvedite nomer lab: \n");
   scanf("%d", &variant);
   if (variant == 1) {
        lab1();
}
else if (variant == 2){
    lab2();
}
else if (variant == 3){
    lab3();
}
else if (variant == 4){
    lab4();
}
else if (variant == 5){
    lab5();
}
else if (variant == 6){
    lab6();
}
else if (variant == 7){
    lab7();
}
else {
    printf("takoi net");
}
system ("pause");
return 0;
}
