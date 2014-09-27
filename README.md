/****************************************************************************
 * fibonacci.c
 * using recursion
 * 
 * Generates fibonacci series upto the number as mentioned in the arguement
 *
 * by Bhavika
 ***************************************************************************/

# include <stdio.h>
# include <stdlib.h>
 

//function prototype 
int fabrecur(int);

int 
main(int argc, char* argv[])
{
    if (argc!= 2)
    {
      printf("Usage: %s and an integer arguement \n");
      return 1;
    }
    
     
    if(!atoi(argv[1]))
    {
      printf("Usage: %s should be integer\n",argv[1]);
      return 1;
    }
    
    for (int i=0;i<atoi(argv[1]);i++)
    {
      printf("%d\t",fabrecur(i)) ;
    }
    return 0;

}


int fabrecur(int n)
{
    if(n==0)
    {
      return 0;
    } 
    if(n==1)
    {
      return 1;
    }
    else
    {
      return fabrecur(n-1)+fabrecur(n-2);
    }
} 
