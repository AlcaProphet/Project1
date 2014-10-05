/************** next Prime number************************************************
************** Generates next prime number on the basis of user input************
************** by Bhavika******************************************************/

# include <stdio.h>
# include <stdbool.h>
 
int nextprime(int);
 
int 
main()
{
    int val=1;
    char input;
    
    do
    {
        
        val=nextprime(val);
        printf("%d\t",val);
         
        printf("Next Prime number? Y or N ");
        scanf(" %c",&input);
         
    } 
    while(input != 'N' && input != 'n');
    return 0;
}


int nextprime(int val)
{
    val++;
    
    int i=2;
    while(i<val)
    {
        if(val%i==0)
        {
           val++;
           i=2;
           continue;
        }
        else
        {
        i++;
        }
    }
    
    return val;
} 
    
    
    
    
    
    
    

