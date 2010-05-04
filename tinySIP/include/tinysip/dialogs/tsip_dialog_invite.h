/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tsip_dialog_invite.h
 * @brief SIP dialog INVITE.
 *
 * @author Mamadou Diop <diopmamadou(at)doubango.org>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */
#ifndef TINYSIP_DIALOG_INVITE_H
#define TINYSIP_DIALOG_INVITE_H

#include "tinySIP_config.h"
#include "tinysip/dialogs/tsip_dialog.h"

#include "tinysip/media/tsip_msession.h"


TSIP_BEGIN_DECLS

#define TSIP_DIALOG_INVITE(self)							((tsip_dialog_invite_t*)(self))

typedef struct tsip_dialog_invite
{
	TSIP_DECLARE_DIALOG;

	uint32_t rseq;
	
	tsip_msession_t* session; /**< Media session Manager. */
}
tsip_dialog_invite_t;

tsip_dialog_invite_t* tsip_dialog_invite_create(const tsip_ssession_handle_t* ss);

int tsip_dialog_invite_start(tsip_dialog_invite_t *self);

TINYSIP_GEXTERN const tsk_object_def_t *tsip_dialog_invite_def_t;

TSIP_END_DECLS

#endif /* TINYSIP_DIALOG_INVITE_H */