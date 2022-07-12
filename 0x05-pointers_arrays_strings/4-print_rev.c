#include "main.h"

/**
* print_rev -> printing a string in reverse way
* @s: the string to be printed in reverse
* REturn: always 0
*/

vint main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
