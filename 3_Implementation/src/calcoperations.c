#include<stdio.h>
#include<math.h>
int c1=0,c2=0,c3=0;
void MainMenu()
{
    int sel=0;
    printf("\n****************************************************************************************");
    printf("\n                                      Main Menu                                         ");
    printf("\n****************************************************************************************");
    printf("\n                              Welcome to Scientific Calculator                         ");
    printf("\n                                      1.Arithmetic                                      ");
    printf("\n                                      2.Trignometric                                    ");
    printf("\n                                      3.Additional Operations                           ");
    printf("\n                                      Enter your choice                                 ");
    scanf("%d",&sel);
    system("clear");
    switch (sel)
    {
        case 1  : { printf("\n                1.Addition                            ");
                    printf("\n                2.Subtraction                         ");
                    printf("\n                3.Multipication                       ");
                    printf("\n                4.Division                            ");
                    printf("\n                5.Modulus                             ");
                    printf("\n                6.Back to Main Menu                   ");
                    printf("\n                Enter your choice                     ");
                    scanf("%d",&c1);
                    break;
                  }            
        case 2  : {printf("\n                  1.Sine                               ");
                   printf("\n                  2.Cosine                             ");
                   printf("\n                  3.Tangent                            ");
                   printf("\n                  4.Cotangent                          ");
                   printf("\n                  5.Back to Main Menu                  ");
                   printf("\n                  Enter your choice                    ");
                   scanf("%d",&c2);
                   break;
                  }   
        case 3  : {printf("\n                   1.Log                               ");
                   printf("\n                   2.Square                            ");
                   printf("\n                   3.Cube                              ");
                   printf("\n                   4.No ^                              ");
                   printf("\n                   5.Exponent                          ");
                   printf("\n                   6.10 ^                              ");
                   printf("\n                   7.Square Root                       ");
                   printf("\n                   8.Back to Main Mneu                 ");
                   printf("\n                   Enter your choice                   ");
                   scanf("%d",&c3);
                   break;
                   }
        default: printf("\n                     Invalid Entry                       ");

    }
        
                            switch(c1){
                                case 1:
                            }
                            

}
   



int main()
{
        MainMenu();
        return 0;
}
