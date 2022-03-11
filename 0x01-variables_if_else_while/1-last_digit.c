#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main(void)
{
		int n;
			int v;

				srand(time(0));
					n = rand() - RAND_MAX / 2;
						v = n % 10;
							printf("Last digit of %d is %d ", n, v);
								if (v > 5)
										{
													printf("and is greater than 5\n");
														}
									else if (v != 0 && v < 6)
											{
														printf("and is less than 6 and not 0\n");
															}
										else
												{
															printf("and is 0\n");
																}
											return (0);
}
