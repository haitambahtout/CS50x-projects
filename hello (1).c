#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Name
    string name = get_string("What is your name? ");

    //Age
    int age;
    do
    {
        age = get_int("What is your age? ");
    }
    while (age < 1);
    if (age < 18)
    {
        printf("you're still young! lil bro Hahahahahaha\n");
    }
    else
    {
        printf("Ohh! Lil bro became older\n");
    }

    //Hometown
    string hometown = get_string("What is your Hometown? ");

    //Phone Number
    string phonenumber = get_string("What is your Phone Number? ");
    printf("Hello! %s is my friend, my friend's age is %i, from %s, and my friend's phone number is %s\n", name, age, hometown, phonenumber);
}
