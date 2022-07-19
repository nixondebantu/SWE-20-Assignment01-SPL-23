/*
Name=Nixon Deb Antu
Registration no. = 2020831023
Efficiency using standard deviation
*/
#include<stdio.h>
#include<math.h>
struct player
{
    char name[25];
    int run[5];
};

int main()
{
    int i,j,k=0;
    float min,avg,sqr,dif,temp;
    struct player play[5]={{"Tamim Iqbal",34,50,33,46,4},
                            {"Najmul Hossain Shanto",1,20,37,26,42},
                            {"Litton Kumer Das",50,32,1,49,5},
                            {"Shakib Al Hasan",5,68,29,8,16},
                            {"Mohammad Mahmudullah",26,41,22,11,8}};

    for(i=0;i<5;i++)
    {
        for(j=0,avg=0,sqr=0;j<5;j++)
        {
            avg+=play[i].run[j];
            sqr+=pow(play[i].run[j],2);
        }
        avg=pow((avg/5),2);
        sqr/=5;
        dif=sqrt(sqr-avg);
        if(i==1)    min=dif;
        else if(min>dif)
        {
            min=dif;
            k=i;
        }
    }
    printf("The most efficient batsman is %s.",play[k].name);
    return 0;
}
