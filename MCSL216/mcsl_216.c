#include <stdio.h>


// int main(){
//     int side;
//     printf("enter the side");
//     scanf("%d", &side);
//     printf("area of square is %d ", side * side);
//     return 0;
    
// }


// calculate area of circle
// int main(){
//    float radius;
//    printf("enter radius");
//    scanf("%f", &radius);
//    printf("area of circle is %f", 3.14 * radius * radius);
//    return 0;
// }


// add two matrix 
int main(){
    int rows, cols;
    printf("enter rows and cols ");
    scanf("%d %d", &rows, &cols);
    if(rows != cols){
        printf("rows and cols should be equal");

    }else{
        printf("number of rows %d and number of cols %d", rows, cols);
    }
    return  0;

}