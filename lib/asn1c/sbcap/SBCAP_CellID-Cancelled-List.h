/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_CellID_Cancelled_List_H_
#define	_SBCAP_CellID_Cancelled_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBCAP_CellID_Cancelled_Item;

/* SBCAP_CellID-Cancelled-List */
typedef struct SBCAP_CellID_Cancelled_List {
	A_SEQUENCE_OF(struct SBCAP_CellID_Cancelled_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCAP_CellID_Cancelled_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_CellID_Cancelled_List;
extern asn_SET_OF_specifics_t asn_SPC_SBCAP_CellID_Cancelled_List_specs_1;
extern asn_TYPE_member_t asn_MBR_SBCAP_CellID_Cancelled_List_1[1];
extern asn_per_constraints_t asn_PER_type_SBCAP_CellID_Cancelled_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_CellID_Cancelled_List_H_ */
#include <asn_internal.h>
