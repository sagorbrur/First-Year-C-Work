#include<stdio.h>

int main()
{
int a = 60;

printf("\nNumber is Shifted By 1 Bit  : %d",a >> 1);
printf("\nNumber is Shifted By 2 Bits : %d",a >> 2);
printf("\nNumber is Shifted By 3 Bits : %d",a >> 3);
printf("\nNumber is Shifted By 1 Bit  : %d",a >> 4);
printf("\nNumber is Shifted By 2 Bits : %d",a >> 5);
printf("\nNumber is Shifted By 3 Bits : %d",a >> 6);

printf("\nNumber is Shifted By 1 Bit  : %d",a << 1);
printf("\nNumber is Shifted By 2 Bits : %d",a << 2);
printf("\nNumber is Shifted By 3 Bits : %d",a << 3);
printf("\nNumber is Shifted By 1 Bit  : %d",a << 4);
printf("\nNumber is Shifted By 2 Bits : %d",a << 5);
printf("\nNumber is Shifted By 3 Bits : %d",a << 6);

return(0);
}
