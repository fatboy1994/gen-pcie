#ifndef GPD_UTIL_H
#define GPD_UTIL_H

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/stddef.h>
#include <linux/pci.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/aer.h>

// TODO: Replace ret with errcodes from <linux/errno.h>

#include "gpd_config.h"

#define GPD_LOG(string...) printk(KERN_NOTICE "GPD: %s", string)
#define GPD_ERR(string...) printk(KERN_ERR "GPD: %s", string)

static const char gpd_name[] = "GenericPCIeDriver";

#endif