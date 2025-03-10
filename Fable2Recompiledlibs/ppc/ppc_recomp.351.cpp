#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832ADCB0"))) PPC_WEAK_FUNC(sub_832ADCB0);
PPC_FUNC_IMPL(__imp__sub_832ADCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,19456
	ctx.r31.s64 = ctx.r11.s64 + 19456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8bc88
	ctx.lr = 0x832ADCD0;
	sub_82A8BC88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832ADCD8;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADCF4"))) PPC_WEAK_FUNC(sub_832ADCF4);
PPC_FUNC_IMPL(__imp__sub_832ADCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADCF8"))) PPC_WEAK_FUNC(sub_832ADCF8);
PPC_FUNC_IMPL(__imp__sub_832ADCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADD04"))) PPC_WEAK_FUNC(sub_832ADD04);
PPC_FUNC_IMPL(__imp__sub_832ADD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADD08"))) PPC_WEAK_FUNC(sub_832ADD08);
PPC_FUNC_IMPL(__imp__sub_832ADD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19492
	ctx.r3.s64 = ctx.r11.s64 + 19492;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADD14"))) PPC_WEAK_FUNC(sub_832ADD14);
PPC_FUNC_IMPL(__imp__sub_832ADD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADD18"))) PPC_WEAK_FUNC(sub_832ADD18);
PPC_FUNC_IMPL(__imp__sub_832ADD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19648);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832add44
	if (ctx.cr6.eq) goto loc_832ADD44;
	// bl 0x82b84288
	ctx.lr = 0x832ADD3C;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19648, ctx.r11.u32);
loc_832ADD44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADD58"))) PPC_WEAK_FUNC(sub_832ADD58);
PPC_FUNC_IMPL(__imp__sub_832ADD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lwz r3,-21616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832add84
	if (ctx.cr6.eq) goto loc_832ADD84;
	// bl 0x82b84288
	ctx.lr = 0x832ADD7C;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21616, ctx.r11.u32);
loc_832ADD84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADD98"))) PPC_WEAK_FUNC(sub_832ADD98);
PPC_FUNC_IMPL(__imp__sub_832ADD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832addc4
	if (ctx.cr6.eq) goto loc_832ADDC4;
	// bl 0x82b84288
	ctx.lr = 0x832ADDBC;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19660, ctx.r11.u32);
loc_832ADDC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADDD8"))) PPC_WEAK_FUNC(sub_832ADDD8);
PPC_FUNC_IMPL(__imp__sub_832ADDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lwz r3,-21604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ade04
	if (ctx.cr6.eq) goto loc_832ADE04;
	// bl 0x82b84288
	ctx.lr = 0x832ADDFC;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21604, ctx.r11.u32);
loc_832ADE04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADE18"))) PPC_WEAK_FUNC(sub_832ADE18);
PPC_FUNC_IMPL(__imp__sub_832ADE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ade44
	if (ctx.cr6.eq) goto loc_832ADE44;
	// bl 0x82b84288
	ctx.lr = 0x832ADE3C;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19672, ctx.r11.u32);
loc_832ADE44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADE58"))) PPC_WEAK_FUNC(sub_832ADE58);
PPC_FUNC_IMPL(__imp__sub_832ADE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,19684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADE6C"))) PPC_WEAK_FUNC(sub_832ADE6C);
PPC_FUNC_IMPL(__imp__sub_832ADE6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADE70"))) PPC_WEAK_FUNC(sub_832ADE70);
PPC_FUNC_IMPL(__imp__sub_832ADE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,-21592
	ctx.r3.s64 = ctx.r31.s64 + -21592;
	// addi r11,r11,26596
	ctx.r11.s64 = ctx.r11.s64 + 26596;
	// stw r11,-21592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21592, ctx.r11.u32);
	// bl 0x82be4d50
	ctx.lr = 0x832ADE98;
	sub_82BE4D50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-21592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21592, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADEB8"))) PPC_WEAK_FUNC(sub_832ADEB8);
PPC_FUNC_IMPL(__imp__sub_832ADEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19704
	ctx.r3.s64 = ctx.r11.s64 + 19704;
	// b 0x82a8dd30
	sub_82A8DD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADEC4"))) PPC_WEAK_FUNC(sub_832ADEC4);
PPC_FUNC_IMPL(__imp__sub_832ADEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADEC8"))) PPC_WEAK_FUNC(sub_832ADEC8);
PPC_FUNC_IMPL(__imp__sub_832ADEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19716
	ctx.r3.s64 = ctx.r11.s64 + 19716;
	// b 0x82a8dee0
	sub_82A8DEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADED4"))) PPC_WEAK_FUNC(sub_832ADED4);
PPC_FUNC_IMPL(__imp__sub_832ADED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADED8"))) PPC_WEAK_FUNC(sub_832ADED8);
PPC_FUNC_IMPL(__imp__sub_832ADED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// b 0x82a8e090
	sub_82A8E090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADEE4"))) PPC_WEAK_FUNC(sub_832ADEE4);
PPC_FUNC_IMPL(__imp__sub_832ADEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADEE8"))) PPC_WEAK_FUNC(sub_832ADEE8);
PPC_FUNC_IMPL(__imp__sub_832ADEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19740
	ctx.r3.s64 = ctx.r11.s64 + 19740;
	// b 0x82a8e240
	sub_82A8E240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADEF4"))) PPC_WEAK_FUNC(sub_832ADEF4);
PPC_FUNC_IMPL(__imp__sub_832ADEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADEF8"))) PPC_WEAK_FUNC(sub_832ADEF8);
PPC_FUNC_IMPL(__imp__sub_832ADEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19752
	ctx.r3.s64 = ctx.r11.s64 + 19752;
	// b 0x82a8e3f0
	sub_82A8E3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF04"))) PPC_WEAK_FUNC(sub_832ADF04);
PPC_FUNC_IMPL(__imp__sub_832ADF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF08"))) PPC_WEAK_FUNC(sub_832ADF08);
PPC_FUNC_IMPL(__imp__sub_832ADF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19764
	ctx.r3.s64 = ctx.r11.s64 + 19764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF14"))) PPC_WEAK_FUNC(sub_832ADF14);
PPC_FUNC_IMPL(__imp__sub_832ADF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF18"))) PPC_WEAK_FUNC(sub_832ADF18);
PPC_FUNC_IMPL(__imp__sub_832ADF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19768
	ctx.r3.s64 = ctx.r11.s64 + 19768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF24"))) PPC_WEAK_FUNC(sub_832ADF24);
PPC_FUNC_IMPL(__imp__sub_832ADF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF28"))) PPC_WEAK_FUNC(sub_832ADF28);
PPC_FUNC_IMPL(__imp__sub_832ADF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADF2C"))) PPC_WEAK_FUNC(sub_832ADF2C);
PPC_FUNC_IMPL(__imp__sub_832ADF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF30"))) PPC_WEAK_FUNC(sub_832ADF30);
PPC_FUNC_IMPL(__imp__sub_832ADF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF3C"))) PPC_WEAK_FUNC(sub_832ADF3C);
PPC_FUNC_IMPL(__imp__sub_832ADF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF40"))) PPC_WEAK_FUNC(sub_832ADF40);
PPC_FUNC_IMPL(__imp__sub_832ADF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20020
	ctx.r3.s64 = ctx.r11.s64 + 20020;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF4C"))) PPC_WEAK_FUNC(sub_832ADF4C);
PPC_FUNC_IMPL(__imp__sub_832ADF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF50"))) PPC_WEAK_FUNC(sub_832ADF50);
PPC_FUNC_IMPL(__imp__sub_832ADF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// b 0x82275238
	sub_82275238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF5C"))) PPC_WEAK_FUNC(sub_832ADF5C);
PPC_FUNC_IMPL(__imp__sub_832ADF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF60"))) PPC_WEAK_FUNC(sub_832ADF60);
PPC_FUNC_IMPL(__imp__sub_832ADF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20980
	ctx.r3.s64 = ctx.r11.s64 + 20980;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF6C"))) PPC_WEAK_FUNC(sub_832ADF6C);
PPC_FUNC_IMPL(__imp__sub_832ADF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF70"))) PPC_WEAK_FUNC(sub_832ADF70);
PPC_FUNC_IMPL(__imp__sub_832ADF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF7C"))) PPC_WEAK_FUNC(sub_832ADF7C);
PPC_FUNC_IMPL(__imp__sub_832ADF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF80"))) PPC_WEAK_FUNC(sub_832ADF80);
PPC_FUNC_IMPL(__imp__sub_832ADF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21060
	ctx.r3.s64 = ctx.r11.s64 + 21060;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF8C"))) PPC_WEAK_FUNC(sub_832ADF8C);
PPC_FUNC_IMPL(__imp__sub_832ADF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF90"))) PPC_WEAK_FUNC(sub_832ADF90);
PPC_FUNC_IMPL(__imp__sub_832ADF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21064
	ctx.r31.s64 = ctx.r11.s64 + 21064;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832adfb8
	if (ctx.cr6.eq) goto loc_832ADFB8;
	// bl 0x8221be68
	ctx.lr = 0x832ADFB8;
	sub_8221BE68(ctx, base);
loc_832ADFB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADFE4"))) PPC_WEAK_FUNC(sub_832ADFE4);
PPC_FUNC_IMPL(__imp__sub_832ADFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADFE8"))) PPC_WEAK_FUNC(sub_832ADFE8);
PPC_FUNC_IMPL(__imp__sub_832ADFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADFF4"))) PPC_WEAK_FUNC(sub_832ADFF4);
PPC_FUNC_IMPL(__imp__sub_832ADFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADFF8"))) PPC_WEAK_FUNC(sub_832ADFF8);
PPC_FUNC_IMPL(__imp__sub_832ADFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21084
	ctx.r3.s64 = ctx.r11.s64 + 21084;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE004"))) PPC_WEAK_FUNC(sub_832AE004);
PPC_FUNC_IMPL(__imp__sub_832AE004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE008"))) PPC_WEAK_FUNC(sub_832AE008);
PPC_FUNC_IMPL(__imp__sub_832AE008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE014"))) PPC_WEAK_FUNC(sub_832AE014);
PPC_FUNC_IMPL(__imp__sub_832AE014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE018"))) PPC_WEAK_FUNC(sub_832AE018);
PPC_FUNC_IMPL(__imp__sub_832AE018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21092
	ctx.r3.s64 = ctx.r11.s64 + 21092;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE024"))) PPC_WEAK_FUNC(sub_832AE024);
PPC_FUNC_IMPL(__imp__sub_832AE024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE028"))) PPC_WEAK_FUNC(sub_832AE028);
PPC_FUNC_IMPL(__imp__sub_832AE028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,21096
	ctx.r11.s64 = ctx.r11.s64 + 21096;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_832AE04C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae060
	if (ctx.cr6.eq) goto loc_832AE060;
	// bl 0x821fc1f0
	ctx.lr = 0x832AE060;
	sub_821FC1F0(ctx, base);
loc_832AE060:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae04c
	if (!ctx.cr0.lt) goto loc_832AE04C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE080"))) PPC_WEAK_FUNC(sub_832AE080);
PPC_FUNC_IMPL(__imp__sub_832AE080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,21176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE094"))) PPC_WEAK_FUNC(sub_832AE094);
PPC_FUNC_IMPL(__imp__sub_832AE094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE098"))) PPC_WEAK_FUNC(sub_832AE098);
PPC_FUNC_IMPL(__imp__sub_832AE098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,21196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0AC"))) PPC_WEAK_FUNC(sub_832AE0AC);
PPC_FUNC_IMPL(__imp__sub_832AE0AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE0B0"))) PPC_WEAK_FUNC(sub_832AE0B0);
PPC_FUNC_IMPL(__imp__sub_832AE0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21216
	ctx.r3.s64 = ctx.r11.s64 + 21216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0BC"))) PPC_WEAK_FUNC(sub_832AE0BC);
PPC_FUNC_IMPL(__imp__sub_832AE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0C0"))) PPC_WEAK_FUNC(sub_832AE0C0);
PPC_FUNC_IMPL(__imp__sub_832AE0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21220
	ctx.r3.s64 = ctx.r11.s64 + 21220;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0CC"))) PPC_WEAK_FUNC(sub_832AE0CC);
PPC_FUNC_IMPL(__imp__sub_832AE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0D0"))) PPC_WEAK_FUNC(sub_832AE0D0);
PPC_FUNC_IMPL(__imp__sub_832AE0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0DC"))) PPC_WEAK_FUNC(sub_832AE0DC);
PPC_FUNC_IMPL(__imp__sub_832AE0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0E0"))) PPC_WEAK_FUNC(sub_832AE0E0);
PPC_FUNC_IMPL(__imp__sub_832AE0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21228
	ctx.r3.s64 = ctx.r11.s64 + 21228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0EC"))) PPC_WEAK_FUNC(sub_832AE0EC);
PPC_FUNC_IMPL(__imp__sub_832AE0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0F0"))) PPC_WEAK_FUNC(sub_832AE0F0);
PPC_FUNC_IMPL(__imp__sub_832AE0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21232
	ctx.r3.s64 = ctx.r11.s64 + 21232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0FC"))) PPC_WEAK_FUNC(sub_832AE0FC);
PPC_FUNC_IMPL(__imp__sub_832AE0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE100"))) PPC_WEAK_FUNC(sub_832AE100);
PPC_FUNC_IMPL(__imp__sub_832AE100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21236
	ctx.r3.s64 = ctx.r11.s64 + 21236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE10C"))) PPC_WEAK_FUNC(sub_832AE10C);
PPC_FUNC_IMPL(__imp__sub_832AE10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE110"))) PPC_WEAK_FUNC(sub_832AE110);
PPC_FUNC_IMPL(__imp__sub_832AE110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21240
	ctx.r31.s64 = ctx.r11.s64 + 21240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bcc8
	ctx.lr = 0x832AE130;
	sub_8217BCC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE138;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE154"))) PPC_WEAK_FUNC(sub_832AE154);
PPC_FUNC_IMPL(__imp__sub_832AE154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE158"))) PPC_WEAK_FUNC(sub_832AE158);
PPC_FUNC_IMPL(__imp__sub_832AE158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21252
	ctx.r31.s64 = ctx.r11.s64 + 21252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bf20
	ctx.lr = 0x832AE178;
	sub_8217BF20(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE180;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE19C"))) PPC_WEAK_FUNC(sub_832AE19C);
PPC_FUNC_IMPL(__imp__sub_832AE19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE1A0"))) PPC_WEAK_FUNC(sub_832AE1A0);
PPC_FUNC_IMPL(__imp__sub_832AE1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21264
	ctx.r31.s64 = ctx.r11.s64 + 21264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bdb8
	ctx.lr = 0x832AE1C0;
	sub_8217BDB8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE1C8;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE1E4"))) PPC_WEAK_FUNC(sub_832AE1E4);
PPC_FUNC_IMPL(__imp__sub_832AE1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE1E8"))) PPC_WEAK_FUNC(sub_832AE1E8);
PPC_FUNC_IMPL(__imp__sub_832AE1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21276
	ctx.r31.s64 = ctx.r11.s64 + 21276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bea8
	ctx.lr = 0x832AE208;
	sub_8217BEA8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE210;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE22C"))) PPC_WEAK_FUNC(sub_832AE22C);
PPC_FUNC_IMPL(__imp__sub_832AE22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE230"))) PPC_WEAK_FUNC(sub_832AE230);
PPC_FUNC_IMPL(__imp__sub_832AE230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21288
	ctx.r31.s64 = ctx.r11.s64 + 21288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bd40
	ctx.lr = 0x832AE250;
	sub_8217BD40(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE258;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE274"))) PPC_WEAK_FUNC(sub_832AE274);
PPC_FUNC_IMPL(__imp__sub_832AE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE278"))) PPC_WEAK_FUNC(sub_832AE278);
PPC_FUNC_IMPL(__imp__sub_832AE278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21300
	ctx.r31.s64 = ctx.r11.s64 + 21300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217be30
	ctx.lr = 0x832AE298;
	sub_8217BE30(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE2A0;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE2BC"))) PPC_WEAK_FUNC(sub_832AE2BC);
PPC_FUNC_IMPL(__imp__sub_832AE2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE2C0"))) PPC_WEAK_FUNC(sub_832AE2C0);
PPC_FUNC_IMPL(__imp__sub_832AE2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31926
	ctx.r30.s64 = -2092302336;
	// lwz r31,21312(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21312);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832ae2f4
	if (ctx.cr6.eq) goto loc_832AE2F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d940
	ctx.lr = 0x832AE2EC;
	sub_8233D940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x832AE2F4;
	sub_8221BE68(ctx, base);
loc_832AE2F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21312, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE314"))) PPC_WEAK_FUNC(sub_832AE314);
PPC_FUNC_IMPL(__imp__sub_832AE314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE318"))) PPC_WEAK_FUNC(sub_832AE318);
PPC_FUNC_IMPL(__imp__sub_832AE318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21316
	ctx.r3.s64 = ctx.r11.s64 + 21316;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE324"))) PPC_WEAK_FUNC(sub_832AE324);
PPC_FUNC_IMPL(__imp__sub_832AE324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE328"))) PPC_WEAK_FUNC(sub_832AE328);
PPC_FUNC_IMPL(__imp__sub_832AE328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE334"))) PPC_WEAK_FUNC(sub_832AE334);
PPC_FUNC_IMPL(__imp__sub_832AE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE338"))) PPC_WEAK_FUNC(sub_832AE338);
PPC_FUNC_IMPL(__imp__sub_832AE338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21324
	ctx.r3.s64 = ctx.r11.s64 + 21324;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE344"))) PPC_WEAK_FUNC(sub_832AE344);
PPC_FUNC_IMPL(__imp__sub_832AE344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE348"))) PPC_WEAK_FUNC(sub_832AE348);
PPC_FUNC_IMPL(__imp__sub_832AE348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE354"))) PPC_WEAK_FUNC(sub_832AE354);
PPC_FUNC_IMPL(__imp__sub_832AE354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE358"))) PPC_WEAK_FUNC(sub_832AE358);
PPC_FUNC_IMPL(__imp__sub_832AE358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21332
	ctx.r3.s64 = ctx.r11.s64 + 21332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE364"))) PPC_WEAK_FUNC(sub_832AE364);
PPC_FUNC_IMPL(__imp__sub_832AE364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE368"))) PPC_WEAK_FUNC(sub_832AE368);
PPC_FUNC_IMPL(__imp__sub_832AE368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE374"))) PPC_WEAK_FUNC(sub_832AE374);
PPC_FUNC_IMPL(__imp__sub_832AE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE378"))) PPC_WEAK_FUNC(sub_832AE378);
PPC_FUNC_IMPL(__imp__sub_832AE378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21340
	ctx.r3.s64 = ctx.r11.s64 + 21340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE384"))) PPC_WEAK_FUNC(sub_832AE384);
PPC_FUNC_IMPL(__imp__sub_832AE384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE388"))) PPC_WEAK_FUNC(sub_832AE388);
PPC_FUNC_IMPL(__imp__sub_832AE388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE394"))) PPC_WEAK_FUNC(sub_832AE394);
PPC_FUNC_IMPL(__imp__sub_832AE394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE398"))) PPC_WEAK_FUNC(sub_832AE398);
PPC_FUNC_IMPL(__imp__sub_832AE398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21348
	ctx.r3.s64 = ctx.r11.s64 + 21348;
	// b 0x82aa36f8
	sub_82AA36F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3A4"))) PPC_WEAK_FUNC(sub_832AE3A4);
PPC_FUNC_IMPL(__imp__sub_832AE3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3A8"))) PPC_WEAK_FUNC(sub_832AE3A8);
PPC_FUNC_IMPL(__imp__sub_832AE3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21364
	ctx.r3.s64 = ctx.r11.s64 + 21364;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3B4"))) PPC_WEAK_FUNC(sub_832AE3B4);
PPC_FUNC_IMPL(__imp__sub_832AE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3B8"))) PPC_WEAK_FUNC(sub_832AE3B8);
PPC_FUNC_IMPL(__imp__sub_832AE3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3C4"))) PPC_WEAK_FUNC(sub_832AE3C4);
PPC_FUNC_IMPL(__imp__sub_832AE3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3C8"))) PPC_WEAK_FUNC(sub_832AE3C8);
PPC_FUNC_IMPL(__imp__sub_832AE3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE3CC"))) PPC_WEAK_FUNC(sub_832AE3CC);
PPC_FUNC_IMPL(__imp__sub_832AE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3D0"))) PPC_WEAK_FUNC(sub_832AE3D0);
PPC_FUNC_IMPL(__imp__sub_832AE3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21408
	ctx.r3.s64 = ctx.r11.s64 + 21408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3DC"))) PPC_WEAK_FUNC(sub_832AE3DC);
PPC_FUNC_IMPL(__imp__sub_832AE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3E0"))) PPC_WEAK_FUNC(sub_832AE3E0);
PPC_FUNC_IMPL(__imp__sub_832AE3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21412
	ctx.r3.s64 = ctx.r11.s64 + 21412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3EC"))) PPC_WEAK_FUNC(sub_832AE3EC);
PPC_FUNC_IMPL(__imp__sub_832AE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3F0"))) PPC_WEAK_FUNC(sub_832AE3F0);
PPC_FUNC_IMPL(__imp__sub_832AE3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,21416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE404"))) PPC_WEAK_FUNC(sub_832AE404);
PPC_FUNC_IMPL(__imp__sub_832AE404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE408"))) PPC_WEAK_FUNC(sub_832AE408);
PPC_FUNC_IMPL(__imp__sub_832AE408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21436
	ctx.r3.s64 = ctx.r11.s64 + 21436;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE414"))) PPC_WEAK_FUNC(sub_832AE414);
PPC_FUNC_IMPL(__imp__sub_832AE414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE418"))) PPC_WEAK_FUNC(sub_832AE418);
PPC_FUNC_IMPL(__imp__sub_832AE418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE424"))) PPC_WEAK_FUNC(sub_832AE424);
PPC_FUNC_IMPL(__imp__sub_832AE424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE428"))) PPC_WEAK_FUNC(sub_832AE428);
PPC_FUNC_IMPL(__imp__sub_832AE428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21444
	ctx.r3.s64 = ctx.r11.s64 + 21444;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE434"))) PPC_WEAK_FUNC(sub_832AE434);
PPC_FUNC_IMPL(__imp__sub_832AE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE438"))) PPC_WEAK_FUNC(sub_832AE438);
PPC_FUNC_IMPL(__imp__sub_832AE438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE444"))) PPC_WEAK_FUNC(sub_832AE444);
PPC_FUNC_IMPL(__imp__sub_832AE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE448"))) PPC_WEAK_FUNC(sub_832AE448);
PPC_FUNC_IMPL(__imp__sub_832AE448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21452
	ctx.r11.s64 = ctx.r11.s64 + 21452;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE46C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE478;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae46c
	if (!ctx.cr0.lt) goto loc_832AE46C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE498"))) PPC_WEAK_FUNC(sub_832AE498);
PPC_FUNC_IMPL(__imp__sub_832AE498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21468
	ctx.r11.s64 = ctx.r11.s64 + 21468;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE4BC:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE4C8;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae4bc
	if (!ctx.cr0.lt) goto loc_832AE4BC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE4E8"))) PPC_WEAK_FUNC(sub_832AE4E8);
PPC_FUNC_IMPL(__imp__sub_832AE4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21484
	ctx.r11.s64 = ctx.r11.s64 + 21484;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE50C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE518;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae50c
	if (!ctx.cr0.lt) goto loc_832AE50C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE538"))) PPC_WEAK_FUNC(sub_832AE538);
PPC_FUNC_IMPL(__imp__sub_832AE538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21500
	ctx.r11.s64 = ctx.r11.s64 + 21500;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE55C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE568;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae55c
	if (!ctx.cr0.lt) goto loc_832AE55C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE588"))) PPC_WEAK_FUNC(sub_832AE588);
PPC_FUNC_IMPL(__imp__sub_832AE588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21516
	ctx.r11.s64 = ctx.r11.s64 + 21516;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE5AC:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE5B8;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae5ac
	if (!ctx.cr0.lt) goto loc_832AE5AC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE5D8"))) PPC_WEAK_FUNC(sub_832AE5D8);
PPC_FUNC_IMPL(__imp__sub_832AE5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21532
	ctx.r11.s64 = ctx.r11.s64 + 21532;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE5FC:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE608;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae5fc
	if (!ctx.cr0.lt) goto loc_832AE5FC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE628"))) PPC_WEAK_FUNC(sub_832AE628);
PPC_FUNC_IMPL(__imp__sub_832AE628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,-21524
	ctx.r30.s64 = ctx.r31.s64 + -21524;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-21524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21524, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AE658;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-21524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21524, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AE66C;
	sub_821FBED8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE684"))) PPC_WEAK_FUNC(sub_832AE684);
PPC_FUNC_IMPL(__imp__sub_832AE684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE688"))) PPC_WEAK_FUNC(sub_832AE688);
PPC_FUNC_IMPL(__imp__sub_832AE688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21548
	ctx.r3.s64 = ctx.r11.s64 + 21548;
	// b 0x82aa7b20
	sub_82AA7B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE694"))) PPC_WEAK_FUNC(sub_832AE694);
PPC_FUNC_IMPL(__imp__sub_832AE694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE698"))) PPC_WEAK_FUNC(sub_832AE698);
PPC_FUNC_IMPL(__imp__sub_832AE698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6A4"))) PPC_WEAK_FUNC(sub_832AE6A4);
PPC_FUNC_IMPL(__imp__sub_832AE6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6A8"))) PPC_WEAK_FUNC(sub_832AE6A8);
PPC_FUNC_IMPL(__imp__sub_832AE6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21560
	ctx.r3.s64 = ctx.r11.s64 + 21560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6B4"))) PPC_WEAK_FUNC(sub_832AE6B4);
PPC_FUNC_IMPL(__imp__sub_832AE6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6B8"))) PPC_WEAK_FUNC(sub_832AE6B8);
PPC_FUNC_IMPL(__imp__sub_832AE6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21564
	ctx.r3.s64 = ctx.r11.s64 + 21564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6C4"))) PPC_WEAK_FUNC(sub_832AE6C4);
PPC_FUNC_IMPL(__imp__sub_832AE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6C8"))) PPC_WEAK_FUNC(sub_832AE6C8);
PPC_FUNC_IMPL(__imp__sub_832AE6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21568
	ctx.r3.s64 = ctx.r11.s64 + 21568;
	// b 0x82aa8c38
	sub_82AA8C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6D4"))) PPC_WEAK_FUNC(sub_832AE6D4);
PPC_FUNC_IMPL(__imp__sub_832AE6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6D8"))) PPC_WEAK_FUNC(sub_832AE6D8);
PPC_FUNC_IMPL(__imp__sub_832AE6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21580
	ctx.r3.s64 = ctx.r11.s64 + 21580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6E4"))) PPC_WEAK_FUNC(sub_832AE6E4);
PPC_FUNC_IMPL(__imp__sub_832AE6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6E8"))) PPC_WEAK_FUNC(sub_832AE6E8);
PPC_FUNC_IMPL(__imp__sub_832AE6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21584
	ctx.r3.s64 = ctx.r11.s64 + 21584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6F4"))) PPC_WEAK_FUNC(sub_832AE6F4);
PPC_FUNC_IMPL(__imp__sub_832AE6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6F8"))) PPC_WEAK_FUNC(sub_832AE6F8);
PPC_FUNC_IMPL(__imp__sub_832AE6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21588
	ctx.r3.s64 = ctx.r11.s64 + 21588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE704"))) PPC_WEAK_FUNC(sub_832AE704);
PPC_FUNC_IMPL(__imp__sub_832AE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE708"))) PPC_WEAK_FUNC(sub_832AE708);
PPC_FUNC_IMPL(__imp__sub_832AE708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21592
	ctx.r3.s64 = ctx.r11.s64 + 21592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE714"))) PPC_WEAK_FUNC(sub_832AE714);
PPC_FUNC_IMPL(__imp__sub_832AE714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE718"))) PPC_WEAK_FUNC(sub_832AE718);
PPC_FUNC_IMPL(__imp__sub_832AE718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21596
	ctx.r31.s64 = ctx.r11.s64 + 21596;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae740
	if (ctx.cr6.eq) goto loc_832AE740;
	// bl 0x8221be68
	ctx.lr = 0x832AE740;
	sub_8221BE68(ctx, base);
loc_832AE740:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE76C"))) PPC_WEAK_FUNC(sub_832AE76C);
PPC_FUNC_IMPL(__imp__sub_832AE76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE770"))) PPC_WEAK_FUNC(sub_832AE770);
PPC_FUNC_IMPL(__imp__sub_832AE770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21612
	ctx.r31.s64 = ctx.r11.s64 + 21612;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae798
	if (ctx.cr6.eq) goto loc_832AE798;
	// bl 0x8221be68
	ctx.lr = 0x832AE798;
	sub_8221BE68(ctx, base);
loc_832AE798:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE7C4"))) PPC_WEAK_FUNC(sub_832AE7C4);
PPC_FUNC_IMPL(__imp__sub_832AE7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE7C8"))) PPC_WEAK_FUNC(sub_832AE7C8);
PPC_FUNC_IMPL(__imp__sub_832AE7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r31,r11,7976
	ctx.r31.s64 = ctx.r11.s64 + 7976;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae7f0
	if (ctx.cr6.eq) goto loc_832AE7F0;
	// bl 0x8221be68
	ctx.lr = 0x832AE7F0;
	sub_8221BE68(ctx, base);
loc_832AE7F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE81C"))) PPC_WEAK_FUNC(sub_832AE81C);
PPC_FUNC_IMPL(__imp__sub_832AE81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE820"))) PPC_WEAK_FUNC(sub_832AE820);
PPC_FUNC_IMPL(__imp__sub_832AE820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// b 0x82aac270
	sub_82AAC270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE82C"))) PPC_WEAK_FUNC(sub_832AE82C);
PPC_FUNC_IMPL(__imp__sub_832AE82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE830"))) PPC_WEAK_FUNC(sub_832AE830);
PPC_FUNC_IMPL(__imp__sub_832AE830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21628
	ctx.r3.s64 = ctx.r11.s64 + 21628;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE83C"))) PPC_WEAK_FUNC(sub_832AE83C);
PPC_FUNC_IMPL(__imp__sub_832AE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE840"))) PPC_WEAK_FUNC(sub_832AE840);
PPC_FUNC_IMPL(__imp__sub_832AE840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21632
	ctx.r3.s64 = ctx.r11.s64 + 21632;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE84C"))) PPC_WEAK_FUNC(sub_832AE84C);
PPC_FUNC_IMPL(__imp__sub_832AE84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE850"))) PPC_WEAK_FUNC(sub_832AE850);
PPC_FUNC_IMPL(__imp__sub_832AE850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r31,r11,5796
	ctx.r31.s64 = ctx.r11.s64 + 5796;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae878
	if (ctx.cr6.eq) goto loc_832AE878;
	// bl 0x8221be68
	ctx.lr = 0x832AE878;
	sub_8221BE68(ctx, base);
loc_832AE878:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE8A4"))) PPC_WEAK_FUNC(sub_832AE8A4);
PPC_FUNC_IMPL(__imp__sub_832AE8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8A8"))) PPC_WEAK_FUNC(sub_832AE8A8);
PPC_FUNC_IMPL(__imp__sub_832AE8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21636
	ctx.r3.s64 = ctx.r11.s64 + 21636;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8B4"))) PPC_WEAK_FUNC(sub_832AE8B4);
PPC_FUNC_IMPL(__imp__sub_832AE8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8B8"))) PPC_WEAK_FUNC(sub_832AE8B8);
PPC_FUNC_IMPL(__imp__sub_832AE8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21640
	ctx.r3.s64 = ctx.r11.s64 + 21640;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8C4"))) PPC_WEAK_FUNC(sub_832AE8C4);
PPC_FUNC_IMPL(__imp__sub_832AE8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8C8"))) PPC_WEAK_FUNC(sub_832AE8C8);
PPC_FUNC_IMPL(__imp__sub_832AE8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21644
	ctx.r31.s64 = ctx.r11.s64 + 21644;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae8f0
	if (ctx.cr6.eq) goto loc_832AE8F0;
	// bl 0x8221be68
	ctx.lr = 0x832AE8F0;
	sub_8221BE68(ctx, base);
loc_832AE8F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE91C"))) PPC_WEAK_FUNC(sub_832AE91C);
PPC_FUNC_IMPL(__imp__sub_832AE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE920"))) PPC_WEAK_FUNC(sub_832AE920);
PPC_FUNC_IMPL(__imp__sub_832AE920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// b 0x82ab0b80
	sub_82AB0B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE92C"))) PPC_WEAK_FUNC(sub_832AE92C);
PPC_FUNC_IMPL(__imp__sub_832AE92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE930"))) PPC_WEAK_FUNC(sub_832AE930);
PPC_FUNC_IMPL(__imp__sub_832AE930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE93C"))) PPC_WEAK_FUNC(sub_832AE93C);
PPC_FUNC_IMPL(__imp__sub_832AE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE940"))) PPC_WEAK_FUNC(sub_832AE940);
PPC_FUNC_IMPL(__imp__sub_832AE940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21780
	ctx.r3.s64 = ctx.r11.s64 + 21780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE94C"))) PPC_WEAK_FUNC(sub_832AE94C);
PPC_FUNC_IMPL(__imp__sub_832AE94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE950"))) PPC_WEAK_FUNC(sub_832AE950);
PPC_FUNC_IMPL(__imp__sub_832AE950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,21784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae984
	if (ctx.cr6.eq) goto loc_832AE984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AE984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AE984:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21784, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE9A0"))) PPC_WEAK_FUNC(sub_832AE9A0);
PPC_FUNC_IMPL(__imp__sub_832AE9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21788
	ctx.r3.s64 = ctx.r11.s64 + 21788;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9AC"))) PPC_WEAK_FUNC(sub_832AE9AC);
PPC_FUNC_IMPL(__imp__sub_832AE9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9B0"))) PPC_WEAK_FUNC(sub_832AE9B0);
PPC_FUNC_IMPL(__imp__sub_832AE9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21792
	ctx.r3.s64 = ctx.r11.s64 + 21792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9BC"))) PPC_WEAK_FUNC(sub_832AE9BC);
PPC_FUNC_IMPL(__imp__sub_832AE9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9C0"))) PPC_WEAK_FUNC(sub_832AE9C0);
PPC_FUNC_IMPL(__imp__sub_832AE9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21796
	ctx.r3.s64 = ctx.r11.s64 + 21796;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9CC"))) PPC_WEAK_FUNC(sub_832AE9CC);
PPC_FUNC_IMPL(__imp__sub_832AE9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9D0"))) PPC_WEAK_FUNC(sub_832AE9D0);
PPC_FUNC_IMPL(__imp__sub_832AE9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9DC"))) PPC_WEAK_FUNC(sub_832AE9DC);
PPC_FUNC_IMPL(__imp__sub_832AE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9E0"))) PPC_WEAK_FUNC(sub_832AE9E0);
PPC_FUNC_IMPL(__imp__sub_832AE9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21836
	ctx.r3.s64 = ctx.r11.s64 + 21836;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9EC"))) PPC_WEAK_FUNC(sub_832AE9EC);
PPC_FUNC_IMPL(__imp__sub_832AE9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9F0"))) PPC_WEAK_FUNC(sub_832AE9F0);
PPC_FUNC_IMPL(__imp__sub_832AE9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9FC"))) PPC_WEAK_FUNC(sub_832AE9FC);
PPC_FUNC_IMPL(__imp__sub_832AE9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA00"))) PPC_WEAK_FUNC(sub_832AEA00);
PPC_FUNC_IMPL(__imp__sub_832AEA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21876
	ctx.r3.s64 = ctx.r11.s64 + 21876;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA0C"))) PPC_WEAK_FUNC(sub_832AEA0C);
PPC_FUNC_IMPL(__imp__sub_832AEA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA10"))) PPC_WEAK_FUNC(sub_832AEA10);
PPC_FUNC_IMPL(__imp__sub_832AEA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21896
	ctx.r3.s64 = ctx.r11.s64 + 21896;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA1C"))) PPC_WEAK_FUNC(sub_832AEA1C);
PPC_FUNC_IMPL(__imp__sub_832AEA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA20"))) PPC_WEAK_FUNC(sub_832AEA20);
PPC_FUNC_IMPL(__imp__sub_832AEA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21916
	ctx.r3.s64 = ctx.r11.s64 + 21916;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA2C"))) PPC_WEAK_FUNC(sub_832AEA2C);
PPC_FUNC_IMPL(__imp__sub_832AEA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA30"))) PPC_WEAK_FUNC(sub_832AEA30);
PPC_FUNC_IMPL(__imp__sub_832AEA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA3C"))) PPC_WEAK_FUNC(sub_832AEA3C);
PPC_FUNC_IMPL(__imp__sub_832AEA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA40"))) PPC_WEAK_FUNC(sub_832AEA40);
PPC_FUNC_IMPL(__imp__sub_832AEA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21956
	ctx.r3.s64 = ctx.r11.s64 + 21956;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA4C"))) PPC_WEAK_FUNC(sub_832AEA4C);
PPC_FUNC_IMPL(__imp__sub_832AEA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA50"))) PPC_WEAK_FUNC(sub_832AEA50);
PPC_FUNC_IMPL(__imp__sub_832AEA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21960
	ctx.r3.s64 = ctx.r11.s64 + 21960;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA5C"))) PPC_WEAK_FUNC(sub_832AEA5C);
PPC_FUNC_IMPL(__imp__sub_832AEA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA60"))) PPC_WEAK_FUNC(sub_832AEA60);
PPC_FUNC_IMPL(__imp__sub_832AEA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21964
	ctx.r3.s64 = ctx.r11.s64 + 21964;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA6C"))) PPC_WEAK_FUNC(sub_832AEA6C);
PPC_FUNC_IMPL(__imp__sub_832AEA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA70"))) PPC_WEAK_FUNC(sub_832AEA70);
PPC_FUNC_IMPL(__imp__sub_832AEA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21968
	ctx.r3.s64 = ctx.r11.s64 + 21968;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA7C"))) PPC_WEAK_FUNC(sub_832AEA7C);
PPC_FUNC_IMPL(__imp__sub_832AEA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA80"))) PPC_WEAK_FUNC(sub_832AEA80);
PPC_FUNC_IMPL(__imp__sub_832AEA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21972
	ctx.r3.s64 = ctx.r11.s64 + 21972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA8C"))) PPC_WEAK_FUNC(sub_832AEA8C);
PPC_FUNC_IMPL(__imp__sub_832AEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA90"))) PPC_WEAK_FUNC(sub_832AEA90);
PPC_FUNC_IMPL(__imp__sub_832AEA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA9C"))) PPC_WEAK_FUNC(sub_832AEA9C);
PPC_FUNC_IMPL(__imp__sub_832AEA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEAA0"))) PPC_WEAK_FUNC(sub_832AEAA0);
PPC_FUNC_IMPL(__imp__sub_832AEAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22048
	ctx.r3.s64 = ctx.r11.s64 + 22048;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEAAC"))) PPC_WEAK_FUNC(sub_832AEAAC);
PPC_FUNC_IMPL(__imp__sub_832AEAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEAB0"))) PPC_WEAK_FUNC(sub_832AEAB0);
PPC_FUNC_IMPL(__imp__sub_832AEAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22052
	ctx.r3.s64 = ctx.r11.s64 + 22052;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEABC"))) PPC_WEAK_FUNC(sub_832AEABC);
PPC_FUNC_IMPL(__imp__sub_832AEABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEAC0"))) PPC_WEAK_FUNC(sub_832AEAC0);
PPC_FUNC_IMPL(__imp__sub_832AEAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22056
	ctx.r3.s64 = ctx.r11.s64 + 22056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEACC"))) PPC_WEAK_FUNC(sub_832AEACC);
PPC_FUNC_IMPL(__imp__sub_832AEACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEAD0"))) PPC_WEAK_FUNC(sub_832AEAD0);
PPC_FUNC_IMPL(__imp__sub_832AEAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22060
	ctx.r3.s64 = ctx.r11.s64 + 22060;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEADC"))) PPC_WEAK_FUNC(sub_832AEADC);
PPC_FUNC_IMPL(__imp__sub_832AEADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEAE0"))) PPC_WEAK_FUNC(sub_832AEAE0);
PPC_FUNC_IMPL(__imp__sub_832AEAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lwz r3,-11784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEAF4"))) PPC_WEAK_FUNC(sub_832AEAF4);
PPC_FUNC_IMPL(__imp__sub_832AEAF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AEAF8"))) PPC_WEAK_FUNC(sub_832AEAF8);
PPC_FUNC_IMPL(__imp__sub_832AEAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB04"))) PPC_WEAK_FUNC(sub_832AEB04);
PPC_FUNC_IMPL(__imp__sub_832AEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB08"))) PPC_WEAK_FUNC(sub_832AEB08);
PPC_FUNC_IMPL(__imp__sub_832AEB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22276
	ctx.r3.s64 = ctx.r11.s64 + 22276;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB14"))) PPC_WEAK_FUNC(sub_832AEB14);
PPC_FUNC_IMPL(__imp__sub_832AEB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB18"))) PPC_WEAK_FUNC(sub_832AEB18);
PPC_FUNC_IMPL(__imp__sub_832AEB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB24"))) PPC_WEAK_FUNC(sub_832AEB24);
PPC_FUNC_IMPL(__imp__sub_832AEB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB28"))) PPC_WEAK_FUNC(sub_832AEB28);
PPC_FUNC_IMPL(__imp__sub_832AEB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22284
	ctx.r3.s64 = ctx.r11.s64 + 22284;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB34"))) PPC_WEAK_FUNC(sub_832AEB34);
PPC_FUNC_IMPL(__imp__sub_832AEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB38"))) PPC_WEAK_FUNC(sub_832AEB38);
PPC_FUNC_IMPL(__imp__sub_832AEB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB44"))) PPC_WEAK_FUNC(sub_832AEB44);
PPC_FUNC_IMPL(__imp__sub_832AEB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB48"))) PPC_WEAK_FUNC(sub_832AEB48);
PPC_FUNC_IMPL(__imp__sub_832AEB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22292
	ctx.r3.s64 = ctx.r11.s64 + 22292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB54"))) PPC_WEAK_FUNC(sub_832AEB54);
PPC_FUNC_IMPL(__imp__sub_832AEB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB58"))) PPC_WEAK_FUNC(sub_832AEB58);
PPC_FUNC_IMPL(__imp__sub_832AEB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB64"))) PPC_WEAK_FUNC(sub_832AEB64);
PPC_FUNC_IMPL(__imp__sub_832AEB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB68"))) PPC_WEAK_FUNC(sub_832AEB68);
PPC_FUNC_IMPL(__imp__sub_832AEB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22300
	ctx.r3.s64 = ctx.r11.s64 + 22300;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB74"))) PPC_WEAK_FUNC(sub_832AEB74);
PPC_FUNC_IMPL(__imp__sub_832AEB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB78"))) PPC_WEAK_FUNC(sub_832AEB78);
PPC_FUNC_IMPL(__imp__sub_832AEB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB84"))) PPC_WEAK_FUNC(sub_832AEB84);
PPC_FUNC_IMPL(__imp__sub_832AEB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB88"))) PPC_WEAK_FUNC(sub_832AEB88);
PPC_FUNC_IMPL(__imp__sub_832AEB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22308
	ctx.r3.s64 = ctx.r11.s64 + 22308;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEB94"))) PPC_WEAK_FUNC(sub_832AEB94);
PPC_FUNC_IMPL(__imp__sub_832AEB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEB98"))) PPC_WEAK_FUNC(sub_832AEB98);
PPC_FUNC_IMPL(__imp__sub_832AEB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22312
	ctx.r3.s64 = ctx.r11.s64 + 22312;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEBA4"))) PPC_WEAK_FUNC(sub_832AEBA4);
PPC_FUNC_IMPL(__imp__sub_832AEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEBA8"))) PPC_WEAK_FUNC(sub_832AEBA8);
PPC_FUNC_IMPL(__imp__sub_832AEBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22316
	ctx.r3.s64 = ctx.r11.s64 + 22316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEBB4"))) PPC_WEAK_FUNC(sub_832AEBB4);
PPC_FUNC_IMPL(__imp__sub_832AEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEBB8"))) PPC_WEAK_FUNC(sub_832AEBB8);
PPC_FUNC_IMPL(__imp__sub_832AEBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEBC4"))) PPC_WEAK_FUNC(sub_832AEBC4);
PPC_FUNC_IMPL(__imp__sub_832AEBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEBC8"))) PPC_WEAK_FUNC(sub_832AEBC8);
PPC_FUNC_IMPL(__imp__sub_832AEBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22324
	ctx.r3.s64 = ctx.r11.s64 + 22324;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEBD4"))) PPC_WEAK_FUNC(sub_832AEBD4);
PPC_FUNC_IMPL(__imp__sub_832AEBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEBD8"))) PPC_WEAK_FUNC(sub_832AEBD8);
PPC_FUNC_IMPL(__imp__sub_832AEBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEBE4"))) PPC_WEAK_FUNC(sub_832AEBE4);
PPC_FUNC_IMPL(__imp__sub_832AEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEBE8"))) PPC_WEAK_FUNC(sub_832AEBE8);
PPC_FUNC_IMPL(__imp__sub_832AEBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22332
	ctx.r3.s64 = ctx.r11.s64 + 22332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEBF4"))) PPC_WEAK_FUNC(sub_832AEBF4);
PPC_FUNC_IMPL(__imp__sub_832AEBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEBF8"))) PPC_WEAK_FUNC(sub_832AEBF8);
PPC_FUNC_IMPL(__imp__sub_832AEBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22400
	ctx.r3.s64 = ctx.r11.s64 + 22400;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEC04"))) PPC_WEAK_FUNC(sub_832AEC04);
PPC_FUNC_IMPL(__imp__sub_832AEC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEC08"))) PPC_WEAK_FUNC(sub_832AEC08);
PPC_FUNC_IMPL(__imp__sub_832AEC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22404
	ctx.r3.s64 = ctx.r11.s64 + 22404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEC14"))) PPC_WEAK_FUNC(sub_832AEC14);
PPC_FUNC_IMPL(__imp__sub_832AEC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEC18"))) PPC_WEAK_FUNC(sub_832AEC18);
PPC_FUNC_IMPL(__imp__sub_832AEC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22408
	ctx.r3.s64 = ctx.r11.s64 + 22408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEC24"))) PPC_WEAK_FUNC(sub_832AEC24);
PPC_FUNC_IMPL(__imp__sub_832AEC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEC28"))) PPC_WEAK_FUNC(sub_832AEC28);
PPC_FUNC_IMPL(__imp__sub_832AEC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22412
	ctx.r3.s64 = ctx.r11.s64 + 22412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEC34"))) PPC_WEAK_FUNC(sub_832AEC34);
PPC_FUNC_IMPL(__imp__sub_832AEC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

