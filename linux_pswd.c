
// This program used to hide user password like linux system

#include <stdio.h>
#include <unistd.h>

int main()
{
        char *pass;

        pass = getpass("Enter the password : ");

        printf("Password : %s",pass);
}