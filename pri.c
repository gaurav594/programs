#include<stdio.h>
int main()
{
char str[20];
scanf("%s",str);
  int j = 0;
  int i;
 int state = 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        /* If state is ONE, then do NOT copy the current character to output if
           one of the following conditions is true
           ...a) Current character is 'b' (We need to remove 'b')
           ...b) Current character is 'a' (Next character may be 'c') */
        if (state == 1 && str[i] != 'a' && str[i] != 'b')
        {
            str[j] = str[i];
            j++;
        }
 
        // If state is TWO and current character is not 'c' (otherwise
        // we ignore both previous and current characters)
        if (state == 2 && str[i] != 'c')
        {
            // First copy the previous 'a'
            str[j] = 'a';
            j++;
 
            // Then copy the current character if it is not 'a' and 'b'
            if (str[i] != 'a' && str[i] != 'b')
            {
                str[j] = str[i];
                j++;
            }
        }
 
        // Change state according to current character
        state = (str[i] == 'a')? 2: 1;
    }
 
    // If last character was 'a', copy it to output
    if (state == 2)
    {
        str[j] = 'a';
        j++;
    }
 
    // Set the string terminator
    str[j] = '\0';
puts(str);
return 0;
}