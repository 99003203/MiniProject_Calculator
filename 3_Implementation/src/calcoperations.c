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
                   printf("\n                  4.Log                               ");
                   printf("\n                  5.Back to Main Menu                  ");
                   printf("\n                  Enter your choice                    ");
                   scanf("%d",&c2);
                   break;
                  }   
        case 3  : {
                   printf("\n                   1.Square                            ");
                   printf("\n                   2.Cube                              ");
                   printf("\n                   3.No ^                              ");
                   printf("\n                   4.Exponent                          ");
                   printf("\n                   5.10 ^                              ");
                   printf("\n                   6.Square Root                       ");
                   printf("\n                   7.Back to Main Mneu                 ");
                   printf("\n                   Enter your choice                   ");
                   scanf("%d",&c3);
                   break;
                   }
        default: printf("\n                     Invalid Entry                       ");

    }
        
                           
                            

}
   

int add(int n1,int n2)
{
    int sum=0;
    sum=n1+n2;
    return sum;
}

int sub(int n1,int n2)
{
    int dif=0;
    dif=n1-n2;
    return dif;
}

long int mul(int n1,int n2)
{
    long int pr=0;
    pr=n1*n2;
    return pr;
}

float div(int n1,int n2)
{
    float quo=0;
    quo=(n1/n2);
    return quo;
}

int mod(int n1,int n2)
{
    int rem=0;
    rem=(n1%n2);
    return rem;
}

double sine(double ang)
{
    double ans=sin(ang);
    return ans;

}

double cosi(double ang)
{
    double ans=cos(ang);
    return ans;
}

double tang(double ang)
{
    double ans=tan(ang);
    return ans;
}

double logr(double ang)
{
    double ans=log(ang);
    return ans;
}





int main()
{
        MainMenu();
        return 0;
}
