#include <stdlib.h>

int is_space(char c) {
	    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
	    int count = 0;
	        int i = 0;

		    while (str[i] != '\0') {
			            if (!is_space(str[i])) {
					                count++;
							            while (str[i] && !is_space(str[i]))
									                    i++;
								            } else {
										                i++;
												        }
				        }
		        return count;
}

char *copy_word(char *str) {
	    int i = 0;
	        char *word;
		    int len = 0;

		        while (str[len] && !is_space(str[len]))
				        len++;

			    word = (char *)malloc(sizeof(char) * (len + 1));
			        if (word == NULL)
					        return NULL;

				    for (i = 0; i < len; i++)
					            word[i] = str[i];
				        word[len] = '\0';

					    return word;
}

char **strtow(char *str) {
	    char **words;
	        int word_count;
		    int i = 0;
		        int j = 0;

			    if (str == NULL || *str == '\0')
				            return NULL;

			        word_count = count_words(str);
				    words = (char **)malloc(sizeof(char *) * (word_count + 1));
				        if (words == NULL)
						        return NULL;

					    while (str[i] != '\0') {
						            if (!is_space(str[i])) {
								                words[j] = copy_word(str + i);
										            if (words[j] == NULL) {
												                    for (i = 0; i < j; i++)
															                        free(words[i]);
														                    free(words);
																                    return NULL;
																		                }
											                j++;
													            while (str[i] && !is_space(str[i]))
															                    i++;
														            } else {
																                i++;
																		        }
							        }
					        words[j] = NULL;
						    return words;
}

