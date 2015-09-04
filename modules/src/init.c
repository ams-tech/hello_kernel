/***********************************
    hello_kernel - Hello world from kernel space
    Copyright (C) <2015>  <pseudo-design>
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
***********************************/

#include <linux/module.h> /* Module init and exit */
#include <linux/kernel.h> /* printk */

int __init hello_init(void);
void __exit hello_exit(void);

module_init(hello_init);
module_exit(hello_exit);

int __init hello_init(void)
{
	printk(KERN_EMERG "Hello kernel!  Our module has started.\r\n");
	return 0;
}

void __exit hello_exit(void)
{
	printk(KERN_EMERG "Goodbye kernel!  Our module has exited.\r\n");
}
