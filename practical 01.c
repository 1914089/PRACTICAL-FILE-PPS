
        int main () {

           int n[10]; /* n is an array of 10 integer */
           int i, j;

           /* initialise elements of array */
           for ( i = 0; i < 10; i++ ) {
              n[i] = i + 100; /* set element at location i to i + 100 */
           }

           /* output each array element's value */
           for (j = 0; j < 10; j++ ) {
              printf( "Element[%d] = %d\n", j, n[j] );
           }

           return 0;
        }

