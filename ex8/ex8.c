#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
         ' ', 'A', '.', ' ',
         'S', 'h', 'a', 'w', '\0'
    };
    
    printf("size of areas is %ld, num of elements is %ld\n", sizeof(areas), sizeof(areas) / sizeof(int));
    printf("name[10] is %c\n", name[10]); 
    printf("full_name is %s\n", full_name);
    return 0;
}
