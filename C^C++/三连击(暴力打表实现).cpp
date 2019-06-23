//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1008" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	FILE *fp = NULL;
	for(int a=1;a<10;a++)
	{
		for(int b=1;b<10;b++)
		{
			for(int c=1;c<10;c++)
			{
				for(int d=1;d<10;d++)
				{
					for(int e=1;e<10;e++)
					{
						for(int f=1;f<10;f++)
						{
							for(int g=1;g<10;g++)
							{
								for(int h=1;h<10;h++)
								{
									for(int i=1;i<10;i++)
									{
										if((a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i)&&(b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i)&&(c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i)&&(d!=e&&d!=f&&d!=g&&d!=h&&d!=i)&&(e!=f&&e!=g&&e!=h&&e!=i)&&(f!=g&&f!=h&&f!=i)&&(g!=h&&g!=i)&&(h!=i))
											if((a*100+b*10+c)*2==(d*100+e*10+f)&&(a*100+b*10+c)*3==(g*100+h*10+i))
											{
												fp = fopen("D:\\test.txt", "a");
												fprintf(fp,"%d%d%d %d%d%d %d%d%d\n",a,b,c,d,e,f,g,h,i);
												fclose(fp);
											}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
