#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    float n1,n2,ans;
    char ope;

    printf("enter the calculation(num1 operation num2): ");
    scanf("%f %c %f",&n1,&ope,&n2);

    switch(ope)
    {
        case '+': ans = n1+n2;
        break;
        case '-': ans = n1-n2;
        break;
        case '*': ans = n1*n2;
        break;
        case '/': ans = n1/n2;
        break;
        case '^': ans = pow(n1,n2);
        break;
        /*case 's': ans = sqrt(n2);   //not working properly
        break;*/

        default :printf("you entered number in wrong way");
    }

    printf("%.4f %c %.4f = %.2f",n1,ope,n2,ans);
    return 0;
}



























