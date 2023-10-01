#include <stdio.h>
#include <stdbool.h>
#define N 4
int main(void)
{
  char arr[N]; 
  int i = 0; 
  char ch; 
  bool is_palindrome = true; 

  printf("Enter a message: "); 
  ch = getchar(); 
  while (ch != '\n' && i < N)
  {
    arr[i] = ch; 
    i++; 
    ch = getchar();
  }

  int n = i;
  for (i = 0; i < n / 2; i++) 
  {
    if (arr[i] != arr[n - i - 1])
    {
      is_palindrome = false; 
      break; 
    }
  }

  if (is_palindrome) 
    printf("Palindrome\n"); 
  else
    printf("Not a palindrome\n");

  return 0;
}
