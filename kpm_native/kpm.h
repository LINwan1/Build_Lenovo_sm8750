#ifndef __SUKISU_KPM_H
#define __SUKISU_KPM_H

#include <linux/types.h>

/* a13d71f6 ioctl 入口（4 参数） */
int sukisu_handle_kpm(unsigned long control_code, unsigned long arg1,
		      unsigned long arg2, unsigned long result_code);
int sukisu_is_kpm_control_code(unsigned long control_code);
int do_kpm(void __user *arg);

/* 743ddce9f7 原生加载器导出的接口 */
long sukisu_kpm_load_module_path(const char *path, const char *args, void *reserved);
long sukisu_kpm_unload_module(const char *name, void *reserved);
int sukisu_kpm_num(void);
int sukisu_kpm_info(const char *name, char __user *out);
int sukisu_kpm_list(char __user *out, unsigned int bufferSize);

#endif
