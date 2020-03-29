#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

static int __init hello_init(void){
	printk(KERN_EMERG "Hello, init\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_EMERG "hello,exit\n");
}

module_init(hello_init);
module_exit(hello_exit);

MOUDLE_LICENSE("GPL");
MOUDLE_AUTHOR("Gah0");
MOUDLE_DESCRIPTION("Say Hello");
MOUDLE_VERSION("0.0.1");