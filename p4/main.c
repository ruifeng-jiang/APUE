#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;

    if (argc != 2)
        printf("usage: ls directory_name");
    
    if ((dp = opendir(argv[1])) == NULL)
        printf("can't open %s\n", argv[1]);
    while((dirp = readdir(dp)) != NULL)
        // printf("%d\n", dirp);
        printf("%s\n", dirp->d_name);

    closedir(dp);
    

    return 0;
}
