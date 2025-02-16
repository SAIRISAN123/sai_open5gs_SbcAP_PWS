/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "SBCAP_Global-GNB-ID.h"

#include "SBCAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_SBCAP_Global_GNB_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SBCAP_Global_GNB_ID, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_PLMNidentity,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"pLMNidentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SBCAP_Global_GNB_ID, gNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SBCAP_GNB_ID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gNB-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct SBCAP_Global_GNB_ID, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_ProtocolExtensionContainer_1453P25,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SBCAP_Global_GNB_ID_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_SBCAP_Global_GNB_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SBCAP_Global_GNB_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SBCAP_Global_GNB_ID_specs_1 = {
	sizeof(struct SBCAP_Global_GNB_ID),
	offsetof(struct SBCAP_Global_GNB_ID, _asn_ctx),
	asn_MAP_SBCAP_Global_GNB_ID_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SBCAP_Global_GNB_ID_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SBCAP_Global_GNB_ID = {
	"Global-GNB-ID",
	"Global-GNB-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_SBCAP_Global_GNB_ID_tags_1,
	sizeof(asn_DEF_SBCAP_Global_GNB_ID_tags_1)
		/sizeof(asn_DEF_SBCAP_Global_GNB_ID_tags_1[0]), /* 1 */
	asn_DEF_SBCAP_Global_GNB_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_SBCAP_Global_GNB_ID_tags_1)
		/sizeof(asn_DEF_SBCAP_Global_GNB_ID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SBCAP_Global_GNB_ID_1,
	3,	/* Elements count */
	&asn_SPC_SBCAP_Global_GNB_ID_specs_1	/* Additional specs */
};

