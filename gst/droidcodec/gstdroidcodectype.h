/*
 * gst-droid
 *
 * Copyright (C) 2014 Mohammed Sameer <msameer@foolab.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_DROID_CODEC_TYPE_H__
#define __GST_DROID_CODEC_TYPE_H__

#include <gst/gst.h>

G_BEGIN_DECLS

typedef enum {
  GST_DROID_CODEC_DECODER,
  GST_DROID_CODEC_ENCODER,
} GstDroidCodecTypeType;

const gchar *gst_droid_codec_type_from_caps (GstCaps * caps);
GstCaps *gst_droid_codec_type_all_caps (GstDroidCodecTypeType type);

G_END_DECLS

#endif /* __GST_DROID_CODEC_TYPE_H__ */
