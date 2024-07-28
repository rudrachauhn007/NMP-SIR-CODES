// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
#include <stdio.h>
#include <stdlib.h>
struct student {
    char first[50];
    char second[50];
    float marks;
};
struct empl
{
    char first[50];
    char second[50];
    float sal;
};
void input_stu(struct student *s)
{
    printf ("ENTER THE NAME OF STUDENT : ");
    scanf ("%s",(*s).first);
    printf ("ENTER THE LAST NAME: ");
    scanf ("%s",(*s).second);
    printf ("ENTER THE MARKS/CGPA : ");
    scanf ("%f",&(*s).marks);
    printf ("\n_________________________\n");
}
void input_empl(struct empl *s)
{
    printf ("ENTER THE NAME OF EMPLOYEE : ");
    scanf ("%s",(*s).first);
    printf ("ENTER THE LAST NAME: ");
    scanf ("%s",(*s).second);
    printf ("ENTER THE salary : ");
    scanf ("%f",&(*s).sal);
    printf ("\n_________________________\n");
}
void output_stu(struct student *s)
{
    printf ("ENTER THE NAME OF STUDENT : ");
    printf ("%s\n",s->first);
    printf ("ENTER THE LAST NAME: ");
    printf ("%s\n",s->second);
    printf ("ENTER THE MARKS/CGPA : ");
    printf ("%f\n",s->marks);
    printf ("\n_________________________\n");
}
void output_empl(struct empl *s)
{
    printf ("ENTER THE NAME OF EMPLOYEE : ");
    printf ("%s\n",s->first);
    printf ("ENTER THE LAST NAME: ");
    printf ("%s\n",s->second);
    printf ("ENTER THE MARKS/CGPA : ");
    printf ("%f\n",s->sal);
    printf ("\n_________________________\n");
}
int main ()
{
    int n;
    printf ("ENTER THE NUMBER OF THE STUDENTS AND THE EMPLOYEE : ");
    scanf ("%d",&n);
    struct student *ptr = (struct student*) malloc(n*sizeof(struct student));
    struct empl *ptr2= (struct empl*) malloc(n*sizeof (struct  empl));
    for (int i=0;i<n;i++)
    {
        printf ("ENTER THE RECORDS FOR THE STUDENT AND EMPLOYEE : %d %d\n",i+1,i+1);
        input_stu(ptr+i);
        input_empl(ptr+i);
    }
    
}