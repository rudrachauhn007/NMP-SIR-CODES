// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha;|
#include <stdio.h>
void insert (int arr[],int new_number,int length)
{
    int i;
    for (i=length;i>=0;i--)
    {
        if (new_number < arr[i])
        {
            arr[i+1]=arr[i];
        }
        else {
            break;
        }
    }
    arr[i+1]=new_number;
}
int main ()
{
    int n;
    printf ("ENTER THE NUMBER OF ELEMENTS : ");
    scanf ("%d",&n);
    int arr[n+1];
    for (int i=0;i<n;i++)
    {
        printf ("ENTER THE ELEMENT %d : ", i+1);
        scanf ("%d",&arr[i]);
    }
    int add;
    printf ("ENTER THE ELEMENT YOU WANT TO ADD : ");
    scanf ("%d",&add);
    insert (arr,add,n);
     for (int i=0;i<=n;i++)
    {
        printf ("ENTER THE ELEMENT %d : ",i+1);
        printf ("%d\n",arr[i]);
    }

}