#include<stdio.h>
#include<stdlib.h>

void main() {
   int arr[30], element, n, i, location,choice,position;
 while(1)
 {
   printf("\nEnter no of elements :");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);}
   printf("\n1 for insertion of array");
   printf("\n2 for deletion of array");
   printf("\n3 to exit the program");
   printf("\n enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
   printf("\nEnter the element to be inserted :");
   scanf("%d", &element);

   printf("\nEnter the location");
   scanf("%d", &location);

   //Create space at the specified location
   for (i = n; i >= location; i--) {
      arr[i] = arr[i - 1];
   }

   n++;
   arr[location - 1] = element;

   //Print out the result of insertion
   for (i = 0; i < n; i++)
      printf("\n %d", arr[i]);
      break;
 case 2:

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < n - 1; i++)
         arr[i] = arr[i+1];

      printf("Resultant array:\n");

      for (i = 0; i< n - 1; i++)
         printf("%d\n", arr[i]);
   }
   break;
case 3:
      exit(0);



}
   }
}
