#include <stdio.h>
int main() {
float myArray[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1,
2.2, 2.3 } };
float sum =0;

for(int i = 0; i<3; i++){
    for(int j=0; j<4; j++)
        sum = sum+myArray[i][j];
    }

    printf("%f",sum/9);
}


//Task5

#include <stdio.h>
#include 
main() {
int arrayData[3][3];
FILE *input;
input = fopen("input.txt",'r')
for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 3; b++) {
                fscanf_s(input, "%d", &arrayData[a][b]);
        }

}
float max = -100;
int maxi, maxj;
for(int i = 0; i<3; i++){
    for(int j=0; j<4; j++)
        if (arrayData[i][j]>max) 
        {
            max = arrayData[i][j];
            maxi = i;
            maxj = j;
        }
    }
// Open the file
// Read the data from the file into arrayData
// Find the largest value, print it, and it’s indices

    printf("max value: %f and i = %d; j= %d", max,maxi, maxj);
}
