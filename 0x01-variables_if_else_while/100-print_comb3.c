#include <stdio.h>                                                                                                                    
/**                                                                                                                                   
 * main -assign a randoom number to the variable n each time it is executed                                                         
 * and print the last digit of the number stored in the variable n                                                                    
 * Return : always 0                                                                                                                  
 */                                                                                                                                   
int main(void)                                                                                                                        
{                                                                                                                                     
	        int n;                                                                                                                        
		        int ch;                                                                                                                       
			        for (ch = 48; ch <= 57; ch++)                                                                                                 
					        {                                                                                                                             
							                for (n = 49; n <= 57; n++)                                                                                            
										                {                                                                                                                     
													                 if (n > ch)                                                                                                          
																                 {                                                                                                                     
																			                         putchar(ch);                                                                                                  
																						                         putchar(n);                                                                                                   
																									                         if (ch != 56 || n != 57)                                                                                      
																													                         {                                                                                                             
																																	                                 putchar(44);                                                                                          
																																					                                 putchar(32);                                                                                          
																																									                         }                                                                                                             
																												                 }                                                                                                                     
															                                                                                                                                       
															         }                                                                                                                             
									       }                                                                                                                              
				        putchar(10);                                                                                                                  
					        return (0);                                                                                                                   
						                                                                                                                                      
} 

