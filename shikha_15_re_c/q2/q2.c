#include<stdio.h>
int main()
{
    FILE *file1 ,*file2;
    char ch;
    file1 = fopen("file.txt1","r");
    if(file1 == NULL)
    {
        printf("error unable to open file1.txt\n");
        return 1;
    }


    file2 = fopen("file.txt2","w");
    if(file2 == NULL)
    {
        printf("error unable to open file");
        return 1;
    }
    while((ch== fgetc(file1)) !=EOF)
    {
        fputc(ch, file2);

    }

    fclose(file1);
    fclose(file2);

    printf("file copying successfully\n");
    return 0;
    
}