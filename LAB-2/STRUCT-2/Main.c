// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
#include <stdio.h>
#include <stdlib.h>
struct empl
{
    char name[20];
    int id;
    char dep[40];
    int salary;
    int exp;
};
void input (struct empl *s)
{
    printf ("ENTER THE NAME OF EMPLOYEE : ");
    scanf ("%s",(*s).name);
    printf ("ENTER THE ID OF THE EMPLOYEE : ");
    scanf ("%d",&(*s).id);
    printf ("ENTER THE DEPARTMENT OF THE EMPLOYEE : ");
    scanf ("%s",(*s).dep);
    printf ("ENTER THE SALARY OF THE EMPLOYEE : ");
    scanf ("%d",&(*s).salary);
    printf ("ENTER THE EXPERINECE OF THE EMPLOYEE : ");
    scanf ("%d",&(*s).exp);
    printf ("--------------------------------------------\n");

}
void output (struct empl *s)
{
    printf ("THE NAME OF EMPLOYEE : %s\n",s->name);
    printf ("ID OF THE EMPLOYEE : %d \n",s->id);
    printf ("THE DEPARTMENT OF THE EMPLOYEE :%s \n",s->dep);
    printf ("ENTER THE SALARY OF THE EMPLOYEE : %d\n",s->salary);
    printf ("ENTER THE EXPERINECE OF THE EMPLOYEE : %d\n",s->exp);
    printf ("-----------------------------------------------\n");

}
void max_el (struct empl *s,int length, int *max_sal,int *max_exp)
{
    *max_sal=0;
    *max_exp=0;
    for (int i=0;i<length;i++)
    {

        if (s[i].salary > *max_sal)
        {
            *max_sal = s[i].salary;
        }
        if (s[i].exp > *max_exp)
        {
            *max_exp = s[i].exp;
        }
    }
}
int main ()
{
    int n;
    printf ("ENTER THE NUMBER OF THE EMPLOYEES : ");
    scanf ("%d",&n);
    struct empl *ptr = (struct empl*) malloc (n*sizeof(struct empl));
    for (int i=0;i<n;i++)
    {
        input (ptr+i);

    }
    int ma_exp,ma_sal;
    max_el(ptr,n,&ma_sal,&ma_exp);
    printf ("---------------------------------------------------\n");
    printf ("FOLLOWING ARE THE EMPLOYEES WITH THE MAX SALARY");
    for (int i=0;i<n;i++)
    {
        if (ma_sal == (ptr+i)->salary )
        {
            output (ptr+i);
        }

    }
    printf ("\n--------------------------------------------------\n");
    printf ("FOLLOWING ARE THE EMPLOYEES WITH THE MAX EXPERIENCE\n");
     for (int i=0;i<n;i++)
    {
        if (ma_exp == (ptr+i)->exp )
        {
            output (ptr+i);
        }

    }
    free(ptr);
    ptr=NULL;

}
