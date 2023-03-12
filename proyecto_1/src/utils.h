#ifndef __utils_H__
#define __utils_H__

#define USAGE "USAGE: ./simutransusb -s <archivo> [-c <archivo>] [-t <num>]\n"

#define MAX_BUFFER 200
#include "schedule_list.h"
#include "service_list.h"
#include "stop_list.h"

svc_node *ul_svc_charac(char filename[]);
void print_svc_list(svc_node *list);
void read_input(int argc, char *argv[]); 
void check_opt_arg(char* optarg);
stop_node *ul_charac_ld_sys(char filename[]);
void print_charac_ld_sys(stop_node *list);

#endif
