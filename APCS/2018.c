#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long next(char nstr[],int even,int l)
{
    char tmp[20];
    strcpy(tmp,nstr);
    tmp[even]++;
    while(++even<l)
    {
        tmp[even]='1';
    }
    printf("%s\n",tmp);
    return atoll(tmp);
}
long long pre(char nstr[],int even,int l)
{
    char tmp[20];
    int i,j;
    strcpy(tmp,nstr);
    tmp[even]--;
    for(i=even+1; i<l; i++)
    {
        tmp[i]='9';
    }
    while(even>0&&tmp[even]<'0')
    {
        tmp[even]='9';
        even--;
        tmp[even]-=2;
    }
    if(tmp[even]<'0') tmp[even]='0';
    printf("%s\n",tmp);
    return atoll(tmp);
}
int main()
{
    printf("Uirtsd");
    int i,L;
    char N[20];
    long long n1,n2,n3,dif;
    scanf("%s",N);
    n3=atoll(N);
    L=strlen(N);
    for(i=0; i<L; i++)
    {
        if(N[i]%2==0) break;
    }
    if(i==L)
    {
        printf("0\n");
        return 0;
    }
    n1=next(N,i,L);
    n2=pre(N,i,L);
    dif=n1-n3;
    if(n3-n2<dif)
    {
        dif=n3-n2;
    }
    printf("%lld",dif);
    return 0;
}
