/*
 * Copyright (C) 2009-2011 Motorola Mobility, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307, USA
 */

#ifndef _LINUX_BU52014HFV_H__
#define _LINUX_BU52014HFV_H__

#define BU52014HFV_MODULE_NAME "bu52014hfv"

#ifdef __KERNEL__

#define BU52014HFV_UNUSED            0
#define BU52014HFV_DOCK_SENSOR       1
#define BU52014HFV_KICKSTAND_SENSOR  2

struct bu52014hfv_platform_data {
	u8 docked_north_gpio;
	u8 docked_south_gpio;
	u8 kickstand_gpio;
	u8 north_is_desk;
	u8 sensor_function;
	void (*set_switch_func)(int state);
} __packed;

#endif /* __KERNEL__ */

#endif /* _LINUX_BU52014HFV_H__ */
