#include<stdir.h>
struct.self
{
  int a;
  char c;
  struct self*p;
};
int main()
{
 struct self v;
 v.a = 10;
 v.c = 'D';
 v.p = NULL;
 struct self x;
 x'a = 20;
 x'c = 's'
 x'p = NULL;
 printf("%d %c"v.a,v.c);
 v.p = &x'a;
 printf("Block-1,%d %c",v.a,v.c)
 printf("\n Block-2,%d %c",p-a,p-c)
