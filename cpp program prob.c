#include <stdio.h>
#include <math.h>

 int main(int argc, const char*argv[]) {
    int significative = 8;
    int base = 2;
    int result = 1;
for (int i = 0; i < significative; i++) {
    result *= base;
}
printf("%d powerd by %d is %d \n", base, significative,result);



/*
    int number;
    printf("Input a number, please\n");
    scanf("%d", &number);
    int d = 0;
    int i = 1;
    while (i <= number){
        if (number % i++ == 0)
            d++;
            else
            continue;
        if (d == 3) break;
        }
        printf("%d", i);
        printf("The entered number %d is %s a simple \n", number, (d == 2) ? "" : "not ");
*/




/*
     int input;
     do {
        printf("Enter a divider for 100 (remember, that you can't by zero)\n");
        scanf("%d", &input);
        } while (input == 0);

        printf("100 / %d = %d \n", input, 100 / input);
        printf("and the remainder will be %d, by the way", 100 % input);
  */
   /*
    int a = 12;
    int b = 20;
    int even = 0;
    while (a < b) {
        if (a % 2 == 0)
            even++;
            a++;
}
 printf("There are %d even number in sequence \n", even);
*/




 /*char answer;
  printf("Do you want me to salute you?");
  scanf("%c", &answer);
  if (answer =='y') {
    printf("Hello, user!");
  } else if (answer =='n'){
  printf("I didn't want to salute you anyway!");
  } else {
  printf("I can't understand your input!");
  }
  */

 /* int a = 10;
  int b = 8;
  a = (a > b) ? b : 0;
 printf("%d", a);
 */

 /*
 printf("\n");
 int x;
 printf("Enter the number: ");
  scanf("%d", &x);
 if (( x >= 0) && (x <= 10)) {
    printf("X Fits!");
    }
 */
 /*
int a = 15;
int b = 11;
a = a << 1;
printf("a = %d, b = %d", a, b);
*/
/*
printf("\n");
int x = -1;
if ((x>=0) && (x <=10)) {
    printf("X Fits");

}
*/

 return 0;
 }
