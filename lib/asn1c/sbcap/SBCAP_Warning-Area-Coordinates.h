/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_Warning_Area_Coordinates_H_
#define	_SBCAP_Warning_Area_Coordinates_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SBCAP_Warning-Area-Coordinates */
typedef OCTET_STRING_t	 SBCAP_Warning_Area_Coordinates_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SBCAP_Warning_Area_Coordinates_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_Warning_Area_Coordinates;
asn_struct_free_f SBCAP_Warning_Area_Coordinates_free;
asn_struct_print_f SBCAP_Warning_Area_Coordinates_print;
asn_constr_check_f SBCAP_Warning_Area_Coordinates_constraint;
per_type_decoder_f SBCAP_Warning_Area_Coordinates_decode_aper;
per_type_encoder_f SBCAP_Warning_Area_Coordinates_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_Warning_Area_Coordinates_H_ */
#include <asn_internal.h>
