#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int if_morse (){

  srand(time (NULL));
int i = rand ()  % 10;
printf ("ifelse\n");
if (i == 0)
 printf("0  -----");
  else if (i == 1)
   printf("1 .----");
    else if (i == 2)
     printf("2 ..---");
      else if (i == 3)
       printf("3 ...--");
        else if (i == 4)
         printf("4 ....-");
          else if (i == 5)
           printf("5 .....");
            else if (i == 6)
             printf("6 -....");
              else if (i == 7)
               printf("7 --...");
                else if (i == 8)
                 printf("8 ---..");
                  else if (i == 9)
                   printf("9 ----.\n");
                   return 0; 
    
}

int switch_morse (){
  srand(time(NULL));
int i = rand ()  % 10;
printf ("\nswitchcase\n");
   switch (i){
case 0:
 printf("0  -----");
 break;
 case 1:
   printf("1 .----");
   break;
    case 2:
     printf("2 ..---");
      break;
      case 3:
       printf("3 ...--");
        break; 
        case 4:
         printf("4 ....-");
          break;
           case 5:
           printf("5 .....");
            case 6:
             printf("6 -....");
               break;
               case 7:
               printf("7 --...");
               break;
                 case 8:
                 printf("8 ---..");
                 break;
                  case 9:
                   printf("9 ----.");
                   break;
   }
    
}


int main()
{
    
   if_morse ();
   switch_morse ();

    return 0;
}
