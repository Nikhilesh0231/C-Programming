#include <stdio.h>
#include <conio.h>
#include <string.h>
union Student
{
    int Id;
    int Marks;
    char Fav_char;
    char name[34];
};
int main()
{
    union Student s1;
    s1.Id = 23501;
    s1.Marks = 500;
    s1.Fav_char = 'v';
    strcpy(s1.name, "Nikhilesh");

    printf(" The Id is %d\n", s1.Id);
    printf(" The Name is %s\n", s1.name);
    printf(" The Fav_Char is %c\n", s1.Fav_char);
    printf(" The Marks is %d\n", s1.Marks);
    return 0;
}
// here only the name member execute correct and remaining were coruppted due to union use Shared memory
// and shows heighest member of the union and last member will execute