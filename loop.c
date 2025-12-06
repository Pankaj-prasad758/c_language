# include <stdio.h>

int main() {
    int num = 1;

    // for(int i = 10 ; i >= 1 ; i--){
    //   printf("%d\n", i);
    // }

    // int i = 1;
    // while(i <= 5){
    //   printf("rocky\n");
    //   i++;
    // }

    // int value;
    // int sum = 0;
    // printf("Enter the value :");
    // scanf("%d", &value);

    // for(int i = 0, j = value ; i <= value && j >= 1; i++, j--){
    //     sum = sum + i;
    //     printf("%d \n",j);
    // }
    // printf("sum is %d \n ",sum);

    // for(int i = value; i >= 1; i--){
    //     printf("%d\n", i);
    // }


    //creating table using while loop 
    int table;
    printf("Enter Number :");
    scanf("%d", &table);
     int i = 1;
    while(i <= 10){
      i++;

      printf("%d\n", table * i);

    }
}