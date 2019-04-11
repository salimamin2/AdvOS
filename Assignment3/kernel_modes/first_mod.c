#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Muhammad Kamran Nishat");
MODULE_DESCRIPTION("First Linux module.");
MODULE_VERSION("0.01");

static int __init first_mod_init(void) {
 printk(KERN_INFO "Hello, PAF-KIET!\n");
 return 0;
}

static void __exit first_mod_exit(void) {
 printk(KERN_INFO "Goodbye, PAF-KIET!\n");
}

module_init(first_mod_init);
module_exit(first_mod_exit);