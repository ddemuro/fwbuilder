#ifndef INC_PIXCfgParserTokenTypes_hpp_
#define INC_PIXCfgParserTokenTypes_hpp_

/* $ANTLR 2.7.7 (20090306): "pix.g" -> "PIXCfgParserTokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

#ifdef __cplusplus
struct CUSTOM_API PIXCfgParserTokenTypes {
#endif
	enum {
		EOF_ = 1,
		NEWLINE = 4,
		QUIT = 5,
		IP = 6,
		COMMUNITY_LIST = 7,
		NAMES = 8,
		NAME = 9,
		IPV4 = 10,
		IPV6 = 11,
		WORD = 12,
		AH = 13,
		EIGRP = 14,
		ESP = 15,
		GRE = 16,
		IGMP = 17,
		IGRP = 18,
		IPINIP = 19,
		IPSEC = 20,
		NOS = 21,
		OSPF = 22,
		PCP = 23,
		PIM = 24,
		PPTP = 25,
		SNP = 26,
		OBJECT = 27,
		NETWORK = 28,
		NAT = 29,
		DESCRIPTION = 30,
		HOST = 31,
		RANGE = 32,
		SUBNET = 33,
		SERVICE = 34,
		ICMP = 35,
		INT_CONST = 36,
		ICMP6 = 37,
		TCP = 38,
		UDP = 39,
		SOURCE = 40,
		DESTINATION = 41,
		OBJECT_GROUP = 42,
		GROUP_OBJECT = 43,
		NETWORK_OBJECT = 44,
		PROTOCOL = 45,
		PROTOCOL_OBJECT = 46,
		ICMP_OBJECT = 47,
		ICMP_TYPE = 48,
		TCP_UDP = 49,
		SERVICE_OBJECT = 50,
		PORT_OBJECT = 51,
		CRYPTO = 52,
		NO = 53,
		CERTIFICATE = 54,
		PIX_WORD = 55,
		ASA_WORD = 56,
		VERSION_WORD = 57,
		NUMBER = 58,
		HOSTNAME = 59,
		STRING = 60,
		ACCESS_LIST = 61,
		PERMIT = 62,
		DENY = 63,
		P_EQ = 64,
		P_GT = 65,
		P_LT = 66,
		P_NEQ = 67,
		ANY = 68,
		LOG = 69,
		LOG_INPUT = 70,
		INTERVAL = 71,
		ESTABLISHED = 72,
		FRAGMENTS = 73,
		TIME_RANGE = 74,
		CONTROLLER = 75,
		INTRFACE = 76,
		LINE_COMMENT = 77,
		EXIT = 78,
		VLAN = 79,
		SPEED = 80,
		DUPLEX = 81,
		DDNS = 82,
		FORWARD = 83,
		DELAY = 84,
		HOLD_TIME = 85,
		IPV6_C = 86,
		MAC_ADDRESS = 87,
		MULTICAST = 88,
		PPPOE = 89,
		RIP = 90,
		NAMEIF = 91,
		SEC_LEVEL = 92,
		SHUTDOWN = 93,
		ADDRESS = 94,
		DHCP = 95,
		STANDBY = 96,
		SWITCHPORT = 97,
		ACCESS = 98,
		REMARK = 99,
		ACCESS_GROUP = 100,
		COLON_COMMENT = 101,
		SECONDARY = 102,
		SETROUTE = 103,
		EXTENDED = 104,
		STANDARD = 105,
		Whitespace = 106,
		HEX_CONST = 107,
		NEG_INT_CONST = 108,
		DIGIT = 109,
		HEXDIGIT = 110,
		PIPE_CHAR = 111,
		NUMBER_SIGN = 112,
		PERCENT = 113,
		AMPERSAND = 114,
		APOSTROPHE = 115,
		OPENING_PAREN = 116,
		CLOSING_PAREN = 117,
		STAR = 118,
		PLUS = 119,
		COMMA = 120,
		MINUS = 121,
		DOT = 122,
		SLASH = 123,
		COLON = 124,
		SEMICOLON = 125,
		LESS_THAN = 126,
		EQUALS = 127,
		GREATER_THAN = 128,
		QUESTION = 129,
		COMMERCIAL_AT = 130,
		OPENING_SQUARE = 131,
		CLOSING_SQUARE = 132,
		CARET = 133,
		UNDERLINE = 134,
		OPENING_BRACE = 135,
		CLOSING_BRACE = 136,
		TILDE = 137,
		EXLAMATION = 138,
		NULL_TREE_LOOKAHEAD = 3
	};
#ifdef __cplusplus
};
#endif
#endif /*INC_PIXCfgParserTokenTypes_hpp_*/
