/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int i,x, v,n,w;
  n=0;
  w=0;
  int status=0;
  int pause=0;
  char t[256];
  strcpy(t,s);
  v=strlen(t)-1;
  
  
 /* for(i=0;t[i]!='\0';i++)
  {
  	if(s[i]==32)
  	{
  		pause++;	
	}
	if(pause==3)
	{
		v=i;
		t[i]='\0';
	}
  }
  t[i]=32;
  v=i-1;
  i=0;
*/
  
   for(i=v;t[i]!=32;i--)
  {
    
  } 
  x=i+1;
  i=0;
 
  for(i=x;i!=v;i++)
  {
    s[n]=t[i];
    n++;
  } 
  for(i=0;i<=n-1;i++)
  {
  	if(status==0)
  	{
  		
  		status++;
  		
	}
	else
	{
	
  	if(s[i]>='a' || s[i]<='z')
  	{
  		s[i]=s[i]-32;
  		
	}
	}
  }
  s[n]=',';
  n++;
  s[n]=32;
  n++;
  i=0;
  for(i=n;i!=v+1;i++)
  {
  	s[i]=t[w];
  	w++;
  }
  i=0;
  

}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
