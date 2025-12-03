# include <stdio.h>

// int main() {
//     // && and || logical operator quick practice question
//     int isSunday = 12;
//     int isRaining = 1;

//     // printf("%d \n", isSunday && isRaining);
//     printf("%d \n", isSunday || isRaining);
// }

// int main(){
//     int x;
//     printf("Enter your number : ");
//     scanf("%d", &x);
//     printf("%d", x > 9 && x < 100);
// }

// int main(){
//     int age;
//     printf("Enter your Age to check you are adult or not :");
//     scanf("%d",&age);
    
//     if(age >= 18){
//         printf("You are adult\n");
//     }else if(age > 13 && age < 18){
//    printf("teenager");
//     }
//     else{
//         printf("child");
//     }

    // age >= 18 ? printf("adult") : printf("child");
//         return 0;
// }


// int main() {
//     int day;
//     printf("Enter day from ( 1-7)");
//     scanf("%d", &day);
//     int month;
//     printf("Enter month from (1-12)");
//     scanf("%d",&month);

//     switch(day){
//         case 1 : printf("monday\n");
//                 break;
//         case 2 : printf("tuesday\n");
//                 break;
//         case 3 : printf("Wednesday\n");
//                  switch(month)
//        { case 1 : printf("January\n");
                
//                 break;
//         case 2 : printf("febuary\n");
                
//                 break;
//         case 3 : printf("March\n");
                
//                 break;}
//         case 4 : printf("thursday\n");
//                 break;
//         case 5 : printf("friday\n");
//                 break;
//         case 6 : printf("saturday\n");
//                 break;
//         case 7 : printf("sunday\n");
//                 break;
//         default : printf("enter valid day");
//     }

//     return 0;
// }

// int main() {
//     int marks;

//     printf("Enter your mark :");
//     scanf("%d", &marks);

//     if(marks >= 0 && marks <= 30){
//         printf("fail!!!");
//     }
//     else if(marks <= 60 && marks <= 100){
//         printf("grade one");
//     }
//     else{
//         printf("not valid marks");
//     }
// }

int main() {
    int marks;
    printf("Enter Marks");
    scanf("%d", &marks);

    if(marks < 30){
        printf("you got C");
    }else if(marks >= 30 && marks < 70){
        printf("you got B");
    }else if(marks >=70 && marks < 90){
        printf("you got A");
    }else if(marks >= 90 && marks <= 100){
        printf("you got A+");
    }else{
        printf("fail");
    }
}