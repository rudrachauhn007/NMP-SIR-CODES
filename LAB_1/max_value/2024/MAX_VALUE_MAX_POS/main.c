// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
#include <stdio.h>
void max_of_arr (int a[],int length, int *max, int *max_index)
{
    *max=a[0];
    *max_index=0;
    for (int i=0;i<length;i++)
    {
        if (a[i]> *max)
        {
            *max=a[i];
            *max_index=i;
        }
    }
}
int main ()
{
    int n;
    printf ("ENTER THE NUMBER OF THE ELEMENTS : ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("ENTER THE ELEMENT OF %d : ",i+1);
        scanf ("%d",&arr[i]);
    }
    int max,position;
    max_of_arr (arr,n,&max,&position);
    printf ("THE MAX ELEMENT IS : %d\n",max);
    printf ("THE INDEX NUMBER IS : %d", position+1);
}