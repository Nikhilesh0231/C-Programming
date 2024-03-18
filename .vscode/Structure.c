#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Student
{
    int Id;
    int Marks;
    char Fav_char;
    char name[34];
} Veeru, Ripunjay, Ashrut;
// struct Student Veeru, Ripunjay, Ashrut;//global declarartion
void print()
{
    printf("%s", Veeru.name);
}
int main()
{
    // struct Student Veeru, Ripunjay, Ashrut;//local declaration
    Veeru.Id = 23501;
    Ripunjay.Id = 23502;
    Ashrut.Id = 23503;
    Veeru.Marks = 100;
    Ripunjay.Marks = 90;
    Ashrut.Marks = 80;
    Veeru.Fav_char = 'A';
    Ripunjay.Fav_char = 'B';
    Ashrut.Fav_char = 'C';
    strcpy(Veeru.name, "Nikhilesh Tiwari");
    strcpy(Ripunjay.name, " Elder Brother Of Ashrut Shukla "); // once set the garbage value is decarded
                                                               //  printf("Veeru got %d Marks\n", Veeru.Marks);
                                                               // printf("Veeru's name is :%s \n", Veeru.name);

    // printf("Ripunjay got %d Marks\n", Ripunjay.Marks);
    // printf("Ripunjay's name is :%s \n", Ripunjay.name);// it Shows an garbage value Show we have to set the name

    // Quick Quiz:Print All The Information Of A Given Student
    print();
    return 0;
}