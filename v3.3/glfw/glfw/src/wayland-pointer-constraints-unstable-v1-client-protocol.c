/* Generated by wayland-scanner */

/*
 * Copyright © 2014      Jonas Ådahl
 * Copyright © 2015      Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface wl_pointer_interface;
extern const struct wl_interface wl_region_interface;
extern const struct wl_interface wl_surface_interface;
extern const struct wl_interface zwp_confined_pointer_v1_interface;
extern const struct wl_interface zwp_locked_pointer_v1_interface;

static const struct wl_interface *wl_pc_types[] = {
	NULL,
	NULL,
	&zwp_locked_pointer_v1_interface,
	&wl_surface_interface,
	&wl_pointer_interface,
	&wl_region_interface,
	NULL,
	&zwp_confined_pointer_v1_interface,
	&wl_surface_interface,
	&wl_pointer_interface,
	&wl_region_interface,
	NULL,
	&wl_region_interface,
	&wl_region_interface,
};

static const struct wl_message zwp_pointer_constraints_v1_requests[] = {
	{ "destroy", "", wl_pc_types + 0 },
	{ "lock_pointer", "noo?ou", wl_pc_types + 2 },
	{ "confine_pointer", "noo?ou", wl_pc_types + 7 },
};

WL_EXPORT const struct wl_interface zwp_pointer_constraints_v1_interface = {
	"zwp_pointer_constraints_v1", 1,
	3, zwp_pointer_constraints_v1_requests,
	0, NULL,
};

static const struct wl_message zwp_locked_pointer_v1_requests[] = {
	{ "destroy", "", wl_pc_types + 0 },
	{ "set_cursor_position_hint", "ff", wl_pc_types + 0 },
	{ "set_region", "?o", wl_pc_types + 12 },
};

static const struct wl_message zwp_locked_pointer_v1_events[] = {
	{ "locked", "", wl_pc_types + 0 },
	{ "unlocked", "", wl_pc_types + 0 },
};

WL_EXPORT const struct wl_interface zwp_locked_pointer_v1_interface = {
	"zwp_locked_pointer_v1", 1,
	3, zwp_locked_pointer_v1_requests,
	2, zwp_locked_pointer_v1_events,
};

static const struct wl_message zwp_confined_pointer_v1_requests[] = {
	{ "destroy", "", wl_pc_types + 0 },
	{ "set_region", "?o", wl_pc_types + 13 },
};

static const struct wl_message zwp_confined_pointer_v1_events[] = {
	{ "confined", "", wl_pc_types + 0 },
	{ "unconfined", "", wl_pc_types + 0 },
};

WL_EXPORT const struct wl_interface zwp_confined_pointer_v1_interface = {
	"zwp_confined_pointer_v1", 1,
	2, zwp_confined_pointer_v1_requests,
	2, zwp_confined_pointer_v1_events,
};

