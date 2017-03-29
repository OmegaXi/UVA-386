#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>

using namespace std;

main()
{
	int count=0;
	for(int a=6;a<=200;a++)
	{
		for(int b=2;b<a;b++)
		{
			for(int c=b+1;c<a;c++)
			{
				int d=a*a*a-b*b*b-c*c*c;
				if(c*c*c>d)
					continue;
				int r=(int)pow(d+0.1, 1.0/3);
				if(r*r*r==d)
					printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,r);
			}
		}
	}
	return 0;
}
