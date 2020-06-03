
#include <stdio.h>
#include <stdlib.h>

struct Point
{
   int x1, y1;
};
struct Line
{
   struct Point firstEndPoint;
   struct Point secondEndPoint;
};

void mainShortestLineCalculator(){
    int n = 0;
    int x_square = 0;
    int y_square = 0;
    double distance = 0;
    double highest_length = 0;
    double lowest_length = 0;
    int lowest_init_flag = 0;

    printf("Enter number of lines: ");
    scanf("%d",&n);
    struct Line LineArr[n];

    for(int i=0; i<n; i++){
        printf("Enter first end point of line %d: ", i+1);
        scanf("%d%d", &LineArr[i].firstEndPoint.x1, &LineArr[i].firstEndPoint.y1);

        printf("Enter second end point of line %d: ", i+1);
        scanf("%d%d", &LineArr[i].secondEndPoint.x1, &LineArr[i].secondEndPoint.y1);

        //Distance
        x_square = (LineArr[i].secondEndPoint.x1 - LineArr[i].firstEndPoint.x1) * (LineArr[i].secondEndPoint.x1 - LineArr[i].firstEndPoint.x1);
        y_square = (LineArr[i].secondEndPoint.y1 - LineArr[i].firstEndPoint.y1) * (LineArr[i].secondEndPoint.y1 - LineArr[i].firstEndPoint.y1);
        distance = sqrt(x_square + y_square);

        //highest
        if(distance > highest_length){
            highest_length = distance;
        }
        //lowest
        if(lowest_init_flag == 0){
            lowest_length = distance;
            lowest_init_flag = 1;
        }
        else{
            if(distance < lowest_length){
                lowest_length = distance;
            }
        }
    }
    printf("Highest length of a line is: %lf\n", highest_length);
    printf("Lowest length of a line is: %lf\n", lowest_length);
}
