#include<stdio.h>
#include"main.h"
#include"struct.h"


/*********************************************************************************************
                                TASCREENER 1

*This is the main function. All functions are called into this function.
 *********************************************************************************************/
int main()
{  
    
	candle *head=NULL;

    FILE * fp=NULL;  // gest memeory allocation at some location 

    selectChoice(&fp);
    

    
   loadStockData(&fp, &head);
   printStockList(head);
   showMovingAverage(head);
   freeLinkedList(head);


    return 0;
}

