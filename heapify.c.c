#include <stdio.h>
#include <stdlib.h>

void heapify(int a[] , int n)
{
    int i , j , k , v, flag=0;
    for(i=n/2; i >=1 ; i--)
    {
        k=i;
        v=a[k];
        while(!flag&&2*k<=n)
        {

            j=2*k;
            if(j<n)
            {
                if(a[j]<a[j+1])
                    j++;
            }
            if(v>=a[j])
                flag=1;
            else
            {
                a[k]=a[j];
                k=j;
            }
        }
        a[k]=v;
        flag=0;
    }
}
int main()
{
    int n = 0, i , a[100] , ch;
    for(;;)
    {
        printf("\n 1.Create heap\n 2.Extract max\n 3.Exit\n Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\n Read no of elements: ");
                    scanf("%d",&n);
                    for(i =1;i<=n;i++)
                    {
                        printf("Elements after heapify: ");
                        scanf("%d",&a[i]);
                    }
                    heapify(a,n);
                    printf("\nElements after heapify: ");
                    for(i =1;i<=n;i++)
                        printf("%d\t",a[i]);
                    break;
            case 2: if(n>=1)
                    {
                        printf("\n Element deleted is %d",a[1]);
                        a[1]=a[n];
                        n=n-1;
                        heapify(a, n);
                        printf("\n Hrapify after extraction: ");
                        for(i =1;i<=n;i++)
                            printf("%d\t",a[i]);
                    }
                    else
                        printf("\n No elements to be deleted");
                    break;
            case 3: exit(0);
            default: printf("\n INvalid choice");
                        exit(0);
        }
    }
    return 0;
}
