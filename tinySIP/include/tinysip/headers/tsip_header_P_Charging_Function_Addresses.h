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

/**@file tsip_header_P_Charging_Function_Addresses.h
 * @brief SIP header 'P-Charging-Function-Addresses'.
 *
 * @author Mamadou Diop <diopmamadou(at)doubango.org>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */
#ifndef _TSIP_HEADER_P_CHARGING_FUNCTION_ADDRESSES_H_
#define _TSIP_HEADER_P_CHARGING_FUNCTION_ADDRESSES_H_

#include "tinySIP_config.h"
#include "tinySIP/headers/tsip_header.h"

TSIP_BEGIN_DECLS

////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// @brief	SIP header 'P-Charging-Function-Addresses' as per RFC 3455.
///
/// @par ABNF: P-Charging-Function-Addresses = P-Charging-Addr
/// P-Charging-Addr	= 	"P-Charging-Function-Addresses" HCOLON charge-addr-params *( SEMI charge-addr-params )
/// charge-addr-params	= 	ccf / ecf / generic-param
/// ccf	= 	"ccf" EQUAL gen-value
/// ecf	= 	"ecf" EQUAL gen-value
/// 	
////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct tsip_header_P_Charging_Function_Addresses_s
{	
	TSIP_DECLARE_HEADER;
	char* ccf;
	char* ecf;
}
tsip_header_P_Charging_Function_Addresses_t;

typedef tsk_list_t tsip_header_P_Charging_Function_Addressess_L_t;

TINYSIP_API tsip_header_P_Charging_Function_Addresses_t* tsip_header_P_Charging_Function_Addresses_create();

TINYSIP_API tsip_header_P_Charging_Function_Addressess_L_t *tsip_header_P_Charging_Function_Addresses_parse(const char *data, size_t size);

TINYSIP_GEXTERN const tsk_object_def_t *tsip_header_P_Charging_Function_Addresses_def_t;

TSIP_END_DECLS

#endif /* _TSIP_HEADER_P_CHARGING_FUNCTION_ADDRESSES_H_ */
