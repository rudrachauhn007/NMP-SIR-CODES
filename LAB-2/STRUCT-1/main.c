// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[20];
    int marks[4];

};
struct student input(struct student s)
{
    printf ("ENTER THE NAME WITHOUT SPACES : ");
    scanf ("%s",s.name);
    for (int i=0;i<4;i++)
    {
        printf ("ENTER YOU MARKS BETWEEN 1 TO 100 OF THE YEAR %d :",i+1);
       scanf ("%d",&s.marks[i]);
        while (s.marks[i] < 0 || s.marks[i] >100)
       {
         printf ("ENTER THE VALID NUMBER BETWEEN 1 TO 100 of the year %d : ",i+1);
         scanf ("%d",&s.marks[i]);
       }

    }
    printf ("-------------------------------------------------\n");

    return s;
};
void output (struct student s)
{
    printf ("THE NAME OF THE STUDENT IS %s\n",s.name);
    for (int i=0;i<4;i++)
    {
        printf ("THE STUDENTS MARKS ARE : %d\n",s.marks[i]);
    }
    printf ("--------------------------------------------------\n");
};
int check (struct student s)
{
    int ans=0;
    for (int i=0;i<4;i++)
    {
        ans += s.marks[i];
    }
    if ((ans)/4 >60)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main ()
{
    int n;
    printf ("ENTER THE NUMBER OF THE STUDENTS YOU WAN TO ENTER :");
    scanf ("%d",&n);
    struct student *s=(struct student*) malloc(n*sizeof(struct student));
    for (int i=0;i<n;i++)
    {
        s[i]=input(s[i]);
    }

    int cnt=0;
    for (int i=0;i<n;i++)
    {
        int checking = check (s[i]);
        if (checking==1)
        {
            output(s[i]);
            cnt++;
        }

    }
    printf ("THE NUMBER OF THE STUDENTS ELIGIBLE FOR THE SCHOLARSHIP Are %d\n",cnt);
    free (s);
    s=NULL;

}
