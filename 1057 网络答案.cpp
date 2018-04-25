#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    int a[100000];
    while(scanf("%s",s)!=EOF)
    {
        int n=strlen(s),k,QWQ=0;
        memset(a,0,sizeof a);
        for(int i=n-1;i>=0;i--)a[n-i-1]=s[i]-'0';
        a[0]+=1;
        p:for(int i=0;i<n;i++)
        {
            if(a[i]>=10)a[i+1]+=a[i]/10;
            a[i]%=10;
        }
        if(a[n])n++;
        k=n-1;
        while(a[k]==0)k--;
        n=k+1;
        int flag=0;
        for(int i=0,j=n-1;j>=i;i++,j--)
        {
            if(i==j)
            {
                if(flag==1&&QWQ!=-1){a[i]++;QWQ=-1;goto p;}
            }
            else if(j==i+1)
            {
                if(flag==1)
                {
                    if(QWQ==-1)
                    {
                        if(a[i]>a[j])a[i]=a[j];
                        else a[j]=a[i];
                    }
                    if(a[j]>a[i])a[i]=a[j];
                    else if(a[i]>a[j]){a[j]++,a[i]=a[j];goto p;}
                    else if(QWQ!=-1&&a[i]==a[j]){a[i]++;QWQ=-1;goto p;}
                }
                else if(flag==-1)
                {
                    if(a[i]>a[j]){a[j]++,a[i]=a[j];goto p;}
                    else a[i]=a[j];
                }
                else
                {
                    if(a[i]>a[j])a[j]=a[i];
                    else a[i]=a[j];
                }
            }
            else
            {
                if(a[i]>a[j])a[i]=a[j],flag=1;
                if(a[i]<a[j])a[i]=a[j],flag=-1;
            }
        }
        for(int i=n-1;i>=0;i--)printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
