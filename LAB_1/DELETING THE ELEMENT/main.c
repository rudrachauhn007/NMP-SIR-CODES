// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
#include <stdio.h>
#include <stdlib.h>
void DELETE(int arr[],int *n, int index)
{
    for (int i=index;i<*n;i++)
    {
        arr[i]=arr[i+1];
    }
    (*n)--;
}

int main ()
{
    int n;
    printf ("ENTER THE ELEMENTS YOU WANT TO ENTER : ");
    scanf ("%d",&n);
    int *arr= malloc (n*sizeof(int));
    for (int i=0;i<n;i++)
    {
        printf ("ENTER THE ELEMENT NUMBER-%d : ",i+1);
        scanf ("%d",&arr[i]);
    }
    int num;
    printf ("ENTER THE ELEMENT YOU WANT TO DELETE : ");
    scanf ("%d",&num);
    int flag=0;
    int index;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==num)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if (flag==1)
    {
    
        DELETE (arr,&n,index);
        printf ("%d\n",n);
        for (int i=0;i<n;i++)
           {
            printf ("THE ELEMENTS AT %d is %d\n",i+1,arr[i]);
          }
     *arr=realloc(arr,sizeof(int)*n);
    }
    else 
    {
        printf ("ENTRED NUMBER IS NOT IN THE ARRAY !!");
    }
    
}