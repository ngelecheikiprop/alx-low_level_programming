#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *strtow - changes string to words array
  *@str: string to change
  *
  *Return: pointer to array
  *NULL if it fails
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str) {
    int count = 0;
    int is_word = 0;

    while (*str) {
        if (!is_whitespace(*str)) {
            if (!is_word) {
                is_word = 1;
                count++;
            }
        } else {
            is_word = 0;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0) {
        return NULL;
    }

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_idx = 0;
    int word_start = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_whitespace(str[i])) {
            if (word_start == -1) {
                word_start = i;
            }
        } else if (word_start != -1) {
            int word_len = i - word_start;
            words[word_idx] = (char *)malloc((word_len + 1) * sizeof(char));
            if (words[word_idx] == NULL) {
                // Cleanup on failure
                for (int j = 0; j <= word_idx; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        strncpy(words[word_idx], str + word_start, word_len);
        words[word_idx][word_len] = '\0';
        word_idx++;
    }

    words[word_idx] = NULL;
    return words;
}
