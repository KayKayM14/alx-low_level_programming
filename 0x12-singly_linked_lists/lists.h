#ifndef LISTS_H
#define LISTS_H

size_t print_list(const sigset_t *h);
size_t print_list(const sigset_t *h);
sigset_t *add_node(sigset_t **head, const char *str);
sigset_t *add_node_end(sigset_t **head, const char *str);
void free_list(sigset_t *head);
int _putchar(char c);

#endif
