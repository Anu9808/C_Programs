#include <stdio.h>
int compare ( char string [], int begin2, int length )
{
int i1=0;
int i2=begin2;
for ( i1=0; i1<length; i1++, i2++ ){
if ( string [i1] != string [i2] ){
return 0;
}
}
return 1;
}
int main()
{
int i;
char string[100];
int string_length;
int prefix_length;
int max_prefix_length=0;

gets(string);
for ( i=0; string[i] != '\0'; i++ ){
;
}
string_length=i;

for ( prefix_length=1; prefix_length<string_length-1; prefix_length++ ){
for ( i=1; i < string_length-prefix_length+1; i++){
if ( compare ( string, i, prefix_length ) == 1 ){
max_prefix_length = prefix_length;
}
}
}

if ( max_prefix_length == 0 ){
printf ( "NO" );
}else{
for ( i=0; i<max_prefix_length; i++ ){
putchar ( string[i] );
}
}
return 0;
}
