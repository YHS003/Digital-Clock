#include <stdio.h>
#include <windows.h>

unsigned char Hours = 0;
unsigned char Minuits = 0;
unsigned char Seconds = 0;

int main()
{
    printf("Set Time: ");
    scanf("%i%i%i", &Hours, &Minuits, &Seconds);
    if((12 < Hours) || (59 < Minuits) || (59 < Seconds))
    {
        printf("ERROR..!!");
    }
    else
    {
        while(1)
        {
            Seconds++;

            if(59 < Seconds)
            {
                Seconds = 0;
                Minuits++;
            }
            if(59 < Minuits)
            {
                Minuits = 0;
                Hours++;
            }
            if(12 < Hours)
            {
                Hours = 1;

            }

            printf("Clock: ");
            printf("%i:%i:%i\n", Hours, Minuits, Seconds);

            Sleep(1000);
            system("cls");
        }
    }
}