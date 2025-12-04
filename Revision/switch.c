# include <stdio.h>

// switch example
int main () {
    int rollNo, grade;
    printf("Enter your roll number :");
    scanf("%d", &rollNo);

    switch(rollNo){
        case 1 : printf("Ankur ");
                 scanf("%d", &grade);
        switch(grade){
            case 1 : printf("Maths : A\n");
                     printf("Science : A+\n");      
                     printf("English : B\n");
                     printf("Hindi : C");      
                     break;
        }         
                 break;
        case 2 : printf("Arohi");
         scanf("%d", &grade);
         switch(grade){
            case 1 : printf("Maths : C\n");
                     printf("Science : D\n");      
                     printf("English : C\n");
                     printf("Hindi : E");      
                     break;
        }         
                 break;
        case 3 : printf("yash");
         scanf("%d", &grade);
        switch(grade){
            case 1 : printf("Maths : A\n");
                     printf("Science : E\n");      
                     printf("English : D\n");
                     printf("Hindi : E");      
                     break;
        }       
                 break;
        default : printf("enter valid roll number");                           
    }
}