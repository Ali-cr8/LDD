#include<linux/kernel.h>
#include<linux/init.h> 		//init and exit functions
#include<linux/module.h>	//Definitions of functions and symbols LKM


static int __init sys_init(void){

	pr_info("Test Module \n");

	return 0;

}


static void __exit sys_exit(void){

	pr_info("Module unloaded \n");

}

module_init(sys_init);
module_exit(sys_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("TrustMyBits");
