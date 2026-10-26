#include<stdio.h>
int main()
{
    int user_ID,password;
    printf("Enter user ID: ");
    scanf("%d",&user_ID);
    if(user_ID==101)
    {
        printf("Enter password:");
        scanf("%d",&password);
        if(password==4321)
            printf("login successful");
        else
            printf("incorrect password");
    }
    else
        printf("user not found");
    return 0;
}