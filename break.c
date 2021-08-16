#include<stdio.h>
int main()
{
     int c=0;
     printf("choose 1 for pizza , 2 for burger , 3 for pasta , 4 for french fries , 5 for sandwich : \n");
     printf("enter choice : ");
     scanf("%d",&c);
     switch(c)
     {
          case 1:
          printf("Food Item - Pizza\n");
          printf("Price - Rs 239");
          break;
          case 2:
          printf("Food Item - Burger\n");
          printf("Price - Rs 129");
          break;
          case 3:
          printf("Food Item - Pasta\n");
          printf("Price - Rs 179");
          break;
          case 4:
          printf("Food Item - French Fries\n");
          printf("Price - Rs 99");
          break;
          case 5:
          printf("Food Item - Sandwich\n");
          printf("Price - Rs 149");
          break;
          default:
          printf("Invalid Choice");
     }
     }
