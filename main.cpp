#include <unistd.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    /*
      Checking "argc" on quantity parameters and
      call command "top" by exec with parameter [deleay] = 10 sec.
    */
    if(argc == 1)
    {
        execl("/usr/bin/top", "top", "d 10", 0);
    }else {
        /*
           Throw error massage: if many passing arguments.
        */
        printf("my_top: unknow option ");
         printf("%s\n",argv[1]);
    }

    return 0;
}
