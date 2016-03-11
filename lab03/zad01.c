#include<stdio.h>
#include<float.h>
#include<limits.h>

int main()
{

printf("|typ        |       wartosc min   |          wartosc max|       ziarno| precyzja|we/wy|\n");
printf("|-----------|---------------------|---------------------|-------------|---------|-----|\n");
printf("|short      | %20i| %20i|             |         | i   |\n",SHRT_MIN,SHRT_MAX);	
printf("|int        | %20d| %20d|             |         | d   |\n",SHRT_MIN,SHRT_MAX);	
printf("|long       | %20li| %20li|             |         | li  |\n",LONG_MIN,LONG_MAX);
printf("|long long  | %20lli| %20lli|             |         | lli |\n",LLONG_MIN,LLONG_MAX);
printf("|float      | %20e| %20e| %e|        %i| lli |\n",FLT_MIN,FLT_MAX,FLT_EPSILON,FLT_DIG);
printf("|double     | %20e| %20e| %e|       %i| lli |\n",DBL_MIN,DBL_MAX,DBL_EPSILON,DBL_DIG);
printf("|long double| %20Le| %20Le| %Le|       %i| Le  |\n",LDBL_MIN,LDBL_MAX,LDBL_EPSILON,LDBL_DIG);

	

}
