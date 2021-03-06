#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"

// kvp是一个结构体，包含两个C风格字符数组指针：key和val，对应键值和值
// 另外包含一个int类型数据used
typedef struct{
    char *key;
    char *val;
    int used;
} kvp;


list *read_data_cfg(char *filename);
int read_option(char *s, list *options);
void option_insert(list *l, char *key, char *val);
char *option_find(list *l, char *key);
char *option_find_str(list *l, char *key, char *def);
int option_find_int(list *l, char *key, int def);
int option_find_int_quiet(list *l, char *key, int def);
float option_find_float(list *l, char *key, float def);
float option_find_float_quiet(list *l, char *key, float def);
void option_unused(list *l);

#endif
