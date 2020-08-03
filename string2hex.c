/* convert string to hex 
*  i created this for the purpose of creating bitcoin tx data `op_return`
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  if( argc != 2) {
    printf("usage: %s \"convert this string to hex\"", argv[0] );
    exit(0);
  }

  for (int i=0; i < strlen(argv[1]); i++)
    printf("%2x", argv[1][i]);

  return 0;
}
