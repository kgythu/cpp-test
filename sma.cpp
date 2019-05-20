#include <stdio.h>
/* simple moving average (SMA) */

int main() {

    // Your numbers
    int numbers[] = { 35, 28, 48, 65, 36, 65, 66, 8, 35, 65, 14 };

    // Size of your array
    int size = *( &numbers + 1 ) - numbers;
    // SMA
    int sma[ size ];
    // moving sum
    int sum = 0;
    // Get and print all data
    for( int i = 0; i < size; i++ ) {
        sum += numbers[ i ];
        sma[ i ] = sum / ( i + 1 );
        printf( "Number %02d: %02d - moving sum: %03d - SMA: %02d\n", i, numbers[ i ], sum, sma[ i ] );
    }
    // You have an array (sma) with the simple moving average
    return(0);
}
