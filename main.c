#include<stdio.h>

void main()
{
    for (int r = 1; r <= 10; r++)
    {
        for (int c = 1; c <= 41; c++)
        {
            
            if ((c==1||c==8||c==13||c==22||c==36||c==15||c==29) || ((r==1||r==10)&&c<=6) || ((r==1||r==10)&&c>=8&&c<=13)||(r==1&&c>=15&&c<=20)||(r==5&&((c>=15&&c<=18)||(c>=22&&c<=25))) || (r==1&&c>=22&&c<=27) || ((r==1||r==10)&&((c>=29&&c<=34)||(c>=36&&c<=41))) || (r==5&&((c>=29&&c<=32)||(c>=36&&39))))
                printf("##",r);
            else
                printf("  ");
          

        }
        printf("\n");
    }
}