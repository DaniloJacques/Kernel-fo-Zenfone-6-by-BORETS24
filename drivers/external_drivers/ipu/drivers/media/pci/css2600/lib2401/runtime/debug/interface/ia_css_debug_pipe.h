/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef _IA_CSS_DEBUG_PIPE_H_
#define _IA_CSS_DEBUG_PIPE_H_

/*! \file */

#include <ia_css_frame_public.h>
#include <ia_css_stream_public.h>
#include "ia_css_pipeline.h"

/**
 * @brief Internal debug support for constructing a pipe graph.
 *
 * @return	None
 */
extern void ia_css_debug_pipe_graph_dump_prologue(void);

/**
 * @brief Internal debug support for constructing a pipe graph.
 *
 * @return	None
 */
extern void ia_css_debug_pipe_graph_dump_epilogue(void);

/**
 * @brief Internal debug support for constructing a pipe graph.
 * @param[in]	stage		Pipeline stage.
 * @param[in]	id		Pipe id.
 *
 * @return	None
 */
extern void ia_css_debug_pipe_graph_dump_stage(
		struct ia_css_pipeline_stage *stage,
		enum ia_css_pipe_id id);

/**
 * @brief Internal debug support for constructing a pipe graph.
 * @param[in]	cc_frame	Output frame of SP raw copy.
 *
 * @return	None
 */
extern void ia_css_debug_pipe_graph_dump_sp_raw_copy(
		struct ia_css_frame *cc_frame);


/**
 * @brief Internal debug support for constructing a pipe graph.
 * @param[in]	stream_config	info about sensor and input formatter.
 *
 * @return	None
 */
extern void ia_css_debug_pipe_graph_dump_stream_config(
		const struct ia_css_stream_config *stream_config);

#endif /* _IA_CSS_DEBUG_PIPE_H_ */
