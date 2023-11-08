#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x92997ed8, "_printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1171558e, "gpio_to_desc" },
	{ 0x7419044a, "gpiod_set_raw_value" },
	{ 0xbc7eea38, "gpiod_direction_output_raw" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa91f4045, "__class_create" },
	{ 0x65e8d5d2, "device_create" },
	{ 0xb8999609, "cdev_init" },
	{ 0x4b8165c6, "cdev_add" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6f5d2137, "device_destroy" },
	{ 0x11d1d8fb, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe7c77c5f, "cdev_del" },
	{ 0x3557a220, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A2A344E9965C25315E4D0E9");
