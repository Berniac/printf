#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
        char *t;
        int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list ptr, char *buf, unsigned int ibuf);
int print_str(va_list ptr, char *buf, unsigned int ibuf);
int print_int(va_list ptr, char *buf, unsigned int ibuf);
int print_bnr(va_list ptr, char *buf, unsigned int ibuf);
int print_unt(va_list ptr, char *buf, unsigned int ibuf);
int print_oct(va_list ptr, char *buf, unsigned int ibuf);ptr
int print_hex(va_list ptr, char *buf, unsigned int ibuf);
int print_upx(va_list ptr, char *buf, unsigned int ibuf);
int print_usr(va_list ptr, char *buf, unsigned int ibuf);
int print_add(va_list ptr, char *buf, unsigned int ibuf);
int print_rev(va_list ptr, char *buf, unsigned int ibuf);
int print_rot(va_list ptr, char *buf, unsigned int ibuf);
int prinlint(va_list ptr, char *buf, unsigned int ibuf);
int prinlunt(va_list ptr, char *buf, unsigned int ibuf);
int prinloct(va_list ptr, char *buf, unsigned int ibuf);
int prinlhex(va_list ptr, char *buf, unsigned int ibuf);
int prinlupx(va_list ptr, char *buf, unsigned int ibuf);
int prinhint(va_list ptr, char *buf, unsigned int ibuf);
int prinhunt(va_list ptr, char *buf, unsigned int ibuf);
int prinhoct(va_list ptr, char *buf, unsigned int ibuf);
int prinhhex(va_list ptr, char *buf, unsigned int ibuf);
int prinhupx(va_list ptr, char *buf, unsigned int ibuf);
int prinpint(va_list ptr, char *buf, unsigned int ibuf);
int prinnoct(va_list ptr, char *buf, unsigned int ibuf);
int prinnhex(va_list ptr, char *buf, unsigned int ibuf);
int prinnupx(va_list ptr, char *buf, unsigned int ibuf);
int prinsint(va_list ptr, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
