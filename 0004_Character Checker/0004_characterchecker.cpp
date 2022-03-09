#include <stdio.h>

int main(void)
{
    char in_str[10001];
    int note_char;
    int check_cs;

    scanf("%s", &in_str);

    if ((in_str[0] >= 'A') && (in_str[0] <= 'Z'))
        note_char = 2;
    else if((in_str[0] >= 'a') && (in_str[0] <= 'z'))
        note_char = 1;

    for(int i = 1; in_str[i] != '\0'; i++)
    {
        if ((in_str[i] >= 'A') && (in_str[i] <= 'Z'))
            check_cs = 2;
        else if((in_str[i] >= 'a') && (in_str[i] <= 'z'))
            check_cs = 1;

        if (note_char != check_cs)
        {
            note_char = 0; 
            break;
        }
    }

    if (note_char == 2)
        printf("All Capital Letter");
    else if (note_char == 1)
        printf("All Small Letter");
    else
        printf("Mix");

        return 0;
}