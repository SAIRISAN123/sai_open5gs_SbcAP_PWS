/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_CellId_Broadcast_List_Item_H_
#define	_SBCAP_CellId_Broadcast_List_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SBCAP_EUTRAN-CGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBCAP_ProtocolExtensionContainer;

/* SBCAP_CellId-Broadcast-List-Item */
typedef struct SBCAP_CellId_Broadcast_List_Item {
	SBCAP_EUTRAN_CGI_t	 eCGI;
	struct SBCAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCAP_CellId_Broadcast_List_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_CellId_Broadcast_List_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_SBCAP_CellId_Broadcast_List_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_SBCAP_CellId_Broadcast_List_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_CellId_Broadcast_List_Item_H_ */
#include <asn_internal.h>
