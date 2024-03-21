#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	    va_list args;
	        int i = 0;
		    char c;
		        int num;
			    float f;
			        char *str;
				    int first = 1;

				    va_start(args, format);

				        while (format && format[i])
						    {
							            if (format[i] == 'c')
									            {
											                if (!first)
														                printf(", ");
													            c = va_arg(args, int);
														                printf("%c", c);
																            first = 0;
																	            }
								            else if (format[i] == 'i')
										            {
												                if (!first)
															                printf(", ");
														            num = va_arg(args, int);
															                printf("%d", num);
																	            first = 0;
																		            }
									            else if (format[i] == 'f')
											            {
													                if (!first)
																                printf(", ");
															            f = (float)va_arg(args, double);

																    printf("%f", f);
																                first = 0;
																		        }
										            else if (format[i] == 's')
												            {
														                if (!first)
																	                printf(", ");
																            str = va_arg(args, char *);
																	                if (str == NULL)
																				                printf("(nil)");
																			            else
																					                    printf("%s", str);
																				                first = 0;
																						        }
											            i++;
												        }

					    printf("\n");

					        va_end(args);
}
