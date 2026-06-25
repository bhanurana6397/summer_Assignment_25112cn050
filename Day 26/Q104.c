#include<stdio.h>

int main() {
    int c=0;
    char A;
    printf("=========================\n");
    printf("   Three question quiz\n");
    printf("=========================\n");
    printf("\nWhat is the true miniature model or representation of the Earth called?\n");
    printf("a) Map\nb) Globe\nc) Sketch\nd) Atlas\n");
    scanf(" %c",&A);
    if(A=='b'){
        printf("Correct answer");
        c++;
    }
    else{
        printf("Wrong answer\nOption 'b' is correct\n");
    }
    printf("\nWhich imaginary line divides the Earth into the Northern and Southern Hemispheres?\n");
    printf("a) Equator\nb) Axis\nc) Tropics\nd) Meridian\n");
    scanf(" %c",&A);
    if(A=='a'){
        printf("Correct answer");
        c++;
    }
    else{
        printf("Wrong answer\nOption 'a' is correct\n");
    }
    printf("\nWhat is the movement of the Earth around the Sun on its fixed orbit called?\n");
    printf("a) Rotation\nb) Spinning\nc) Revolution\nd) Tilt\n");
    scanf(" %c",&A);
    if(A=='c'){
        printf("Correct answer");
        c++;
    }
    else{
        printf("Wrong answer\nOption 'c' is correct\n");
    }
    printf("\nQuestion attempt : 3\nCorrect answer   : %d\n",c);
    return 0;
}