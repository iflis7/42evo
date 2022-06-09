

#include "../include/push_swap.h"


// #define Size 4 
  





int main()
{
   char *str = "1 3 25 69 98 23 24 87 95 21 34 57 01 1 7 5 6 3 2 7 4 5 2 1 32 56 98 78 245 659";
   int *tab =  get_numbers(str);
   printf("Res::::: %d\n", tab[1]);
   while(*tab)
        printf("Res:: %d\n", *tab++);


   return 0;
}
















































// int Top=-1, inp_array[Size];
// void Push();
// void Pop();
// void show();
  
// int main()
// {
//     int choice;   
//     while(1)    
//     {
//         printf("\nOperations performed by Stack");
//         printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
//         printf("\n\nEnter the choice:");
//         scanf("%d",&choice); 
//         switch(choice)
//         {
//             case 1: Push();
//                     break;
//             case 2: Pop();
//                     break;
//             case 3: show();
//                     break;
//             case 4: exit(0);
//             default: printf("\nInvalid choice!!");
//         }
//     }
// }
  
// void Push()
// {
//     int x;  
//     if(Top==Size-1)
//         printf("\nOverflow!!");
//     else
//     {
//         printf("\nEnter element to be inserted to the stack:");
//         scanf("%d",&x);
//         Top=Top+1;
//         inp_array[Top]=x;
//         printf("\nelement inserted to the stack: %d", x);
//     }
// }
  
// void Pop()
// {
//     if(Top==-1)
//         printf("\nUnderflow!!");
//     else
//     {
//         printf("\nPopped element:  %d",inp_array[Top]);
//         Top=Top-1;
//     }
// }
  
// void show()
// {
//     if(Top==-1)
//         printf("\nUnderflow!!");
//     else
//     {
//         printf("\nElements present in the stack: \n");
//         for(int i=Top; i>=0 ; --i )
//             printf("%d\n",inp_array[i]);
//     }
// }

