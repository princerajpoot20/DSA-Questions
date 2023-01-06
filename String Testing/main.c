#include<stdio.h>
//using namespace std;
int hms_to_secs(int hours,int minutes,int seconds)
{
    long totalseconds;
    totalseconds=hours*3600+minutes*60+seconds;
    return(totalseconds);
}
int main()
{
    int hrs,min,sec;
    printf("Enter hours minutes and seconds:\n");
    
    scanf("%d:%d:%d",&hrs,&min,&sec);
    //cin>>hrs>>mins>>secs;
    long time=hms_to_secs(hrs,min,sec);
    printf("%ld",time);
}
