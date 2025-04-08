#include "ppc_recomp_shared.h"

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

PPC_WEAK_FUNC(sub_832ADF08) {
	__imp__sub_832ADF08(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF18) {
	__imp__sub_832ADF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832ADF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832ADF28) {
	__imp__sub_832ADF28(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF30) {
	__imp__sub_832ADF30(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF40) {
	__imp__sub_832ADF40(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF50) {
	__imp__sub_832ADF50(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF60) {
	__imp__sub_832ADF60(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF70) {
	__imp__sub_832ADF70(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF80) {
	__imp__sub_832ADF80(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADF90) {
	__imp__sub_832ADF90(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADFE8) {
	__imp__sub_832ADFE8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832ADFF8) {
	__imp__sub_832ADFF8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE008) {
	__imp__sub_832AE008(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE018) {
	__imp__sub_832AE018(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE028) {
	__imp__sub_832AE028(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE080) {
	__imp__sub_832AE080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AE094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AE094) {
	__imp__sub_832AE094(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE098) {
	__imp__sub_832AE098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AE0AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AE0AC) {
	__imp__sub_832AE0AC(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE0B0) {
	__imp__sub_832AE0B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE0C0) {
	__imp__sub_832AE0C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE0D0) {
	__imp__sub_832AE0D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE0E0) {
	__imp__sub_832AE0E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE0F0) {
	__imp__sub_832AE0F0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE100) {
	__imp__sub_832AE100(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE110) {
	__imp__sub_832AE110(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE158) {
	__imp__sub_832AE158(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE1A0) {
	__imp__sub_832AE1A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE1E8) {
	__imp__sub_832AE1E8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE230) {
	__imp__sub_832AE230(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE278) {
	__imp__sub_832AE278(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE2C0) {
	__imp__sub_832AE2C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE318) {
	__imp__sub_832AE318(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE328) {
	__imp__sub_832AE328(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE338) {
	__imp__sub_832AE338(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE348) {
	__imp__sub_832AE348(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE358) {
	__imp__sub_832AE358(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE368) {
	__imp__sub_832AE368(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE378) {
	__imp__sub_832AE378(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE388) {
	__imp__sub_832AE388(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE398) {
	__imp__sub_832AE398(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE3A8) {
	__imp__sub_832AE3A8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE3B8) {
	__imp__sub_832AE3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AE3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AE3C8) {
	__imp__sub_832AE3C8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE3D0) {
	__imp__sub_832AE3D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE3E0) {
	__imp__sub_832AE3E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE3F0) {
	__imp__sub_832AE3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AE404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AE404) {
	__imp__sub_832AE404(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE408) {
	__imp__sub_832AE408(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE418) {
	__imp__sub_832AE418(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE428) {
	__imp__sub_832AE428(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE438) {
	__imp__sub_832AE438(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE448) {
	__imp__sub_832AE448(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE498) {
	__imp__sub_832AE498(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE4E8) {
	__imp__sub_832AE4E8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE538) {
	__imp__sub_832AE538(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE588) {
	__imp__sub_832AE588(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE5D8) {
	__imp__sub_832AE5D8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE628) {
	__imp__sub_832AE628(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE688) {
	__imp__sub_832AE688(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE698) {
	__imp__sub_832AE698(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE6A8) {
	__imp__sub_832AE6A8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE6B8) {
	__imp__sub_832AE6B8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE6C8) {
	__imp__sub_832AE6C8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE6D8) {
	__imp__sub_832AE6D8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE6E8) {
	__imp__sub_832AE6E8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE6F8) {
	__imp__sub_832AE6F8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE708) {
	__imp__sub_832AE708(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE718) {
	__imp__sub_832AE718(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE770) {
	__imp__sub_832AE770(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE7C8) {
	__imp__sub_832AE7C8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE820) {
	__imp__sub_832AE820(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE830) {
	__imp__sub_832AE830(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE840) {
	__imp__sub_832AE840(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE850) {
	__imp__sub_832AE850(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE8A8) {
	__imp__sub_832AE8A8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE8B8) {
	__imp__sub_832AE8B8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE8C8) {
	__imp__sub_832AE8C8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE920) {
	__imp__sub_832AE920(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE930) {
	__imp__sub_832AE930(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE940) {
	__imp__sub_832AE940(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE950) {
	__imp__sub_832AE950(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE9A0) {
	__imp__sub_832AE9A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE9B0) {
	__imp__sub_832AE9B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE9C0) {
	__imp__sub_832AE9C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE9D0) {
	__imp__sub_832AE9D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE9E0) {
	__imp__sub_832AE9E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AE9F0) {
	__imp__sub_832AE9F0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA00) {
	__imp__sub_832AEA00(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA10) {
	__imp__sub_832AEA10(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA20) {
	__imp__sub_832AEA20(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA30) {
	__imp__sub_832AEA30(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA40) {
	__imp__sub_832AEA40(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA50) {
	__imp__sub_832AEA50(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA60) {
	__imp__sub_832AEA60(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA70) {
	__imp__sub_832AEA70(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA80) {
	__imp__sub_832AEA80(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEA90) {
	__imp__sub_832AEA90(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEAA0) {
	__imp__sub_832AEAA0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEAB0) {
	__imp__sub_832AEAB0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEAC0) {
	__imp__sub_832AEAC0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEAD0) {
	__imp__sub_832AEAD0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEAE0) {
	__imp__sub_832AEAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEAF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AEAF4) {
	__imp__sub_832AEAF4(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEAF8) {
	__imp__sub_832AEAF8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB08) {
	__imp__sub_832AEB08(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB18) {
	__imp__sub_832AEB18(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB28) {
	__imp__sub_832AEB28(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB38) {
	__imp__sub_832AEB38(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB48) {
	__imp__sub_832AEB48(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB58) {
	__imp__sub_832AEB58(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB68) {
	__imp__sub_832AEB68(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB78) {
	__imp__sub_832AEB78(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB88) {
	__imp__sub_832AEB88(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEB98) {
	__imp__sub_832AEB98(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEBA8) {
	__imp__sub_832AEBA8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEBB8) {
	__imp__sub_832AEBB8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEBC8) {
	__imp__sub_832AEBC8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEBD8) {
	__imp__sub_832AEBD8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEBE8) {
	__imp__sub_832AEBE8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEBF8) {
	__imp__sub_832AEBF8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEC08) {
	__imp__sub_832AEC08(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEC18) {
	__imp__sub_832AEC18(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832AEC28) {
	__imp__sub_832AEC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEC38) {
	__imp__sub_832AEC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22420
	ctx.r3.s64 = ctx.r11.s64 + 22420;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEC48) {
	__imp__sub_832AEC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22424
	ctx.r3.s64 = ctx.r11.s64 + 22424;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEC58) {
	__imp__sub_832AEC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22428
	ctx.r3.s64 = ctx.r11.s64 + 22428;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEC68) {
	__imp__sub_832AEC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEC78) {
	__imp__sub_832AEC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22436
	ctx.r3.s64 = ctx.r11.s64 + 22436;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEC88) {
	__imp__sub_832AEC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEC98) {
	__imp__sub_832AEC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AECA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AECA8) {
	__imp__sub_832AECA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22448
	ctx.r3.s64 = ctx.r11.s64 + 22448;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AECB8) {
	__imp__sub_832AECB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AECC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22452
	ctx.r3.s64 = ctx.r11.s64 + 22452;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AECC8) {
	__imp__sub_832AECC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AECD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22456
	ctx.r3.s64 = ctx.r11.s64 + 22456;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AECD8) {
	__imp__sub_832AECD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AECE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22460
	ctx.r3.s64 = ctx.r11.s64 + 22460;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AECE8) {
	__imp__sub_832AECE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AECF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22464
	ctx.r3.s64 = ctx.r11.s64 + 22464;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AECF8) {
	__imp__sub_832AECF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,22468
	ctx.r3.s64 = ctx.r11.s64 + 22468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AED08) {
	__imp__sub_832AED08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23052
	ctx.r3.s64 = ctx.r11.s64 + 23052;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AED18) {
	__imp__sub_832AED18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23056
	ctx.r3.s64 = ctx.r11.s64 + 23056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AED28) {
	__imp__sub_832AED28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23060
	ctx.r3.s64 = ctx.r11.s64 + 23060;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AED38) {
	__imp__sub_832AED38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23064
	ctx.r3.s64 = ctx.r11.s64 + 23064;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AED48) {
	__imp__sub_832AED48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23068
	ctx.r3.s64 = ctx.r11.s64 + 23068;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AED58) {
	__imp__sub_832AED58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23072
	ctx.r3.s64 = ctx.r11.s64 + 23072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AED68) {
	__imp__sub_832AED68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AED78) {
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
	// addi r31,r11,23076
	ctx.r31.s64 = ctx.r11.s64 + 23076;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832aeda0
	if (ctx.cr6.eq) goto loc_832AEDA0;
	// bl 0x8221be68
	ctx.lr = 0x832AEDA0;
	sub_8221BE68(ctx, base);
loc_832AEDA0:
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

PPC_WEAK_FUNC(sub_832AED78) {
	__imp__sub_832AED78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23092
	ctx.r3.s64 = ctx.r11.s64 + 23092;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEDD0) {
	__imp__sub_832AEDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23096
	ctx.r3.s64 = ctx.r11.s64 + 23096;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEDE0) {
	__imp__sub_832AEDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23100
	ctx.r3.s64 = ctx.r11.s64 + 23100;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEDF0) {
	__imp__sub_832AEDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE00) {
	__imp__sub_832AEE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23108
	ctx.r3.s64 = ctx.r11.s64 + 23108;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE10) {
	__imp__sub_832AEE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE20) {
	__imp__sub_832AEE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23116
	ctx.r3.s64 = ctx.r11.s64 + 23116;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE30) {
	__imp__sub_832AEE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE40) {
	__imp__sub_832AEE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23124
	ctx.r3.s64 = ctx.r11.s64 + 23124;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE50) {
	__imp__sub_832AEE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23128
	ctx.r3.s64 = ctx.r11.s64 + 23128;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE60) {
	__imp__sub_832AEE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23132
	ctx.r3.s64 = ctx.r11.s64 + 23132;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE70) {
	__imp__sub_832AEE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE80) {
	__imp__sub_832AEE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23140
	ctx.r3.s64 = ctx.r11.s64 + 23140;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEE90) {
	__imp__sub_832AEE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEEA0) {
	__imp__sub_832AEEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23148
	ctx.r3.s64 = ctx.r11.s64 + 23148;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEEB0) {
	__imp__sub_832AEEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23152
	ctx.r3.s64 = ctx.r11.s64 + 23152;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEEC0) {
	__imp__sub_832AEEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEED0) {
	__imp__sub_832AEED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEEE0) {
	__imp__sub_832AEEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,23192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEEF0) {
	__imp__sub_832AEEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AEF04) {
	__imp__sub_832AEF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23212
	ctx.r3.s64 = ctx.r11.s64 + 23212;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF08) {
	__imp__sub_832AEF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23216
	ctx.r3.s64 = ctx.r11.s64 + 23216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF18) {
	__imp__sub_832AEF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23332
	ctx.r3.s64 = ctx.r11.s64 + 23332;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF28) {
	__imp__sub_832AEF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AEF38) {
	__imp__sub_832AEF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23376
	ctx.r3.s64 = ctx.r11.s64 + 23376;
	// b 0x8233dd70
	sub_8233DD70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF40) {
	__imp__sub_832AEF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23388
	ctx.r3.s64 = ctx.r11.s64 + 23388;
	// b 0x8233dd70
	sub_8233DD70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF50) {
	__imp__sub_832AEF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23400
	ctx.r3.s64 = ctx.r11.s64 + 23400;
	// b 0x821c6868
	sub_821C6868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF60) {
	__imp__sub_832AEF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23404
	ctx.r3.s64 = ctx.r11.s64 + 23404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF70) {
	__imp__sub_832AEF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23408
	ctx.r3.s64 = ctx.r11.s64 + 23408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF80) {
	__imp__sub_832AEF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23412
	ctx.r3.s64 = ctx.r11.s64 + 23412;
	// b 0x82b3cbc8
	sub_82B3CBC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AEF90) {
	__imp__sub_832AEF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r3,5792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832AEFA0) {
	__imp__sub_832AEFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AEFC0) {
	__imp__sub_832AEFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AEFC8) {
	__imp__sub_832AEFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AEFD0) {
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
	// addi r31,r11,13584
	ctx.r31.s64 = ctx.r11.s64 + 13584;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8233ddd8
	ctx.lr = 0x832AEFF0;
	sub_8233DDD8(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8246c798
	ctx.lr = 0x832AEFF8;
	sub_8246C798(ctx, base);
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

PPC_WEAK_FUNC(sub_832AEFD0) {
	__imp__sub_832AEFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23436
	ctx.r3.s64 = ctx.r11.s64 + 23436;
	// b 0x82b5be58
	sub_82B5BE58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF010) {
	__imp__sub_832AF010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23568
	ctx.r3.s64 = ctx.r11.s64 + 23568;
	// b 0x823b0aa8
	sub_823B0AA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF020) {
	__imp__sub_832AF020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF030) {
	__imp__sub_832AF030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23608
	ctx.r3.s64 = ctx.r11.s64 + 23608;
	// b 0x82b5d780
	sub_82B5D780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF038) {
	__imp__sub_832AF038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23620
	ctx.r3.s64 = ctx.r11.s64 + 23620;
	// b 0x82b5dec8
	sub_82B5DEC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF048) {
	__imp__sub_832AF048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,-20680
	ctx.r3.s64 = ctx.r11.s64 + -20680;
	// b 0x82a1dee8
	sub_82A1DEE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF058) {
	__imp__sub_832AF058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// b 0x82b5e178
	sub_82B5E178(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF068) {
	__imp__sub_832AF068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23644
	ctx.r3.s64 = ctx.r11.s64 + 23644;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF078) {
	__imp__sub_832AF078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF088) {
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
	// addi r30,r31,-20628
	ctx.r30.s64 = ctx.r31.s64 + -20628;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-20628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20628, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF0B8;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-20628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20628, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF0CC;
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

PPC_WEAK_FUNC(sub_832AF088) {
	__imp__sub_832AF088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF0E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,-20620
	ctx.r30.s64 = ctx.r31.s64 + -20620;
	// addi r11,r11,5216
	ctx.r11.s64 = ctx.r11.s64 + 5216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-20620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20620, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF118;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-20620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20620, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF12C;
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

PPC_WEAK_FUNC(sub_832AF0E8) {
	__imp__sub_832AF0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF148) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r30,r31,-20612
	ctx.r30.s64 = ctx.r31.s64 + -20612;
	// addi r11,r11,-24272
	ctx.r11.s64 = ctx.r11.s64 + -24272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-20612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20612, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF178;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-20612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20612, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF18C;
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

PPC_WEAK_FUNC(sub_832AF148) {
	__imp__sub_832AF148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23652
	ctx.r3.s64 = ctx.r11.s64 + 23652;
	// b 0x82b65078
	sub_82B65078(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF1A8) {
	__imp__sub_832AF1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF1B8) {
	__imp__sub_832AF1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,-20604
	ctx.r3.s64 = ctx.r11.s64 + -20604;
	// b 0x82be5050
	sub_82BE5050(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF1C0) {
	__imp__sub_832AF1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// b 0x823fb0e8
	sub_823FB0E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF1D0) {
	__imp__sub_832AF1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23700
	ctx.r3.s64 = ctx.r11.s64 + 23700;
	// b 0x823fb0e8
	sub_823FB0E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF1E0) {
	__imp__sub_832AF1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x823fb0e8
	sub_823FB0E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF1F0) {
	__imp__sub_832AF1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23724
	ctx.r3.s64 = ctx.r11.s64 + 23724;
	// b 0x823fb0e8
	sub_823FB0E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF200) {
	__imp__sub_832AF200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF210) {
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
	// lis r30,-31950
	ctx.r30.s64 = -2093875200;
	// addi r31,r30,-20584
	ctx.r31.s64 = ctx.r30.s64 + -20584;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82b5bcc0
	ctx.lr = 0x832AF234;
	sub_82B5BCC0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221be68
	ctx.lr = 0x832AF23C;
	sub_8221BE68(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,14884
	ctx.r10.s64 = ctx.r10.s64 + 14884;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,-20584(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20584, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832AF210) {
	__imp__sub_832AF210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF268) {
	__imp__sub_832AF268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF270) {
	__imp__sub_832AF270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF278) {
	__imp__sub_832AF278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// b 0x826a4978
	sub_826A4978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF280) {
	__imp__sub_832AF280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23868
	ctx.r3.s64 = ctx.r11.s64 + 23868;
	// b 0x826a4978
	sub_826A4978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF290) {
	__imp__sub_832AF290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,23880
	ctx.r3.s64 = ctx.r11.s64 + 23880;
	// b 0x82b6a018
	sub_82B6A018(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF2A0) {
	__imp__sub_832AF2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF2B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF2B0) {
	__imp__sub_832AF2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832AF2C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r11,r11,23928
	ctx.r11.s64 = ctx.r11.s64 + 23928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,7532
	ctx.r29.s64 = ctx.r11.s64 + 7532;
loc_832AF2E0:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af300
	if (ctx.cr6.eq) goto loc_832AF300;
	// bl 0x821fc1f0
	ctx.lr = 0x832AF2F8;
	sub_821FC1F0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_832AF300:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x832af2e0
	if (!ctx.cr0.lt) goto loc_832AF2E0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF2B8) {
	__imp__sub_832AF2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF310) {
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
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-20516
	ctx.r31.s64 = ctx.r11.s64 + -20516;
	// addi r11,r10,7532
	ctx.r11.s64 = ctx.r10.s64 + 7532;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af354
	if (ctx.cr6.eq) goto loc_832AF354;
	// bl 0x821fc1f0
	ctx.lr = 0x832AF344;
	sub_821FC1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_832AF354:
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

PPC_WEAK_FUNC(sub_832AF310) {
	__imp__sub_832AF310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF368) {
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
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r11,r11,23992
	ctx.r11.s64 = ctx.r11.s64 + 23992;
	// addi r31,r11,608
	ctx.r31.s64 = ctx.r11.s64 + 608;
loc_832AF38C:
	// addi r31,r31,-76
	ctx.r31.s64 = ctx.r31.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68c48
	ctx.lr = 0x832AF398;
	sub_82B68C48(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832af38c
	if (!ctx.cr0.lt) goto loc_832AF38C;
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

PPC_WEAK_FUNC(sub_832AF368) {
	__imp__sub_832AF368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF3B8) {
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
	// addi r30,r31,-20504
	ctx.r30.s64 = ctx.r31.s64 + -20504;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-20504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20504, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF3E8;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-20504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20504, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AF3FC;
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

PPC_WEAK_FUNC(sub_832AF3B8) {
	__imp__sub_832AF3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF418) {
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
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-20496
	ctx.r31.s64 = ctx.r11.s64 + -20496;
	// addi r11,r10,7532
	ctx.r11.s64 = ctx.r10.s64 + 7532;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af45c
	if (ctx.cr6.eq) goto loc_832AF45C;
	// bl 0x821fc1f0
	ctx.lr = 0x832AF44C;
	sub_821FC1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_832AF45C:
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

PPC_WEAK_FUNC(sub_832AF418) {
	__imp__sub_832AF418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF470) {
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
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-20484
	ctx.r31.s64 = ctx.r11.s64 + -20484;
	// addi r11,r10,7532
	ctx.r11.s64 = ctx.r10.s64 + 7532;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af4b4
	if (ctx.cr6.eq) goto loc_832AF4B4;
	// bl 0x821fc1f0
	ctx.lr = 0x832AF4A4;
	sub_821FC1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_832AF4B4:
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

PPC_WEAK_FUNC(sub_832AF470) {
	__imp__sub_832AF470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,24600
	ctx.r3.s64 = ctx.r11.s64 + 24600;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF4C8) {
	__imp__sub_832AF4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,24604
	ctx.r3.s64 = ctx.r11.s64 + 24604;
	// b 0x82b6beb0
	sub_82B6BEB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF4D8) {
	__imp__sub_832AF4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF4E8) {
	__imp__sub_832AF4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,24644
	ctx.r3.s64 = ctx.r11.s64 + 24644;
	// b 0x82b6d7c8
	sub_82B6D7C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF4F0) {
	__imp__sub_832AF4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,8320
	ctx.r3.s64 = ctx.r11.s64 + 8320;
	// b 0x8246d1f0
	sub_8246D1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF500) {
	__imp__sub_832AF500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// b 0x82b7e5f8
	sub_82B7E5F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF510) {
	__imp__sub_832AF510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-9320
	ctx.r3.s64 = ctx.r11.s64 + -9320;
	// b 0x823fb150
	sub_823FB150(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF520) {
	__imp__sub_832AF520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-9308
	ctx.r3.s64 = ctx.r11.s64 + -9308;
	// b 0x823fb150
	sub_823FB150(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF530) {
	__imp__sub_832AF530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-9296
	ctx.r3.s64 = ctx.r11.s64 + -9296;
	// b 0x82b7e7a8
	sub_82B7E7A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF540) {
	__imp__sub_832AF540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF550) {
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
	// addi r31,r11,-9280
	ctx.r31.s64 = ctx.r11.s64 + -9280;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af578
	if (ctx.cr6.eq) goto loc_832AF578;
	// bl 0x8221be68
	ctx.lr = 0x832AF578;
	sub_8221BE68(ctx, base);
loc_832AF578:
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

PPC_WEAK_FUNC(sub_832AF550) {
	__imp__sub_832AF550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-9264
	ctx.r3.s64 = ctx.r11.s64 + -9264;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF5A8) {
	__imp__sub_832AF5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF5B8) {
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
	// addi r31,r11,-9260
	ctx.r31.s64 = ctx.r11.s64 + -9260;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af5e0
	if (ctx.cr6.eq) goto loc_832AF5E0;
	// bl 0x8221be68
	ctx.lr = 0x832AF5E0;
	sub_8221BE68(ctx, base);
loc_832AF5E0:
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

PPC_WEAK_FUNC(sub_832AF5B8) {
	__imp__sub_832AF5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r11,-20452
	ctx.r11.s64 = ctx.r11.s64 + -20452;
	// addi r9,r10,-28868
	ctx.r9.s64 = ctx.r10.s64 + -28868;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832af640
	if (ctx.cr6.eq) goto loc_832AF640;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82b55128
	sub_82B55128(ctx, base);
	return;
loc_832AF640:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82b52500
	sub_82B52500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF610) {
	__imp__sub_832AF610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF648) {
	__imp__sub_832AF648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF650) {
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
	// addi r31,r11,-9244
	ctx.r31.s64 = ctx.r11.s64 + -9244;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af678
	if (ctx.cr6.eq) goto loc_832AF678;
	// bl 0x8221be68
	ctx.lr = 0x832AF678;
	sub_8221BE68(ctx, base);
loc_832AF678:
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

PPC_WEAK_FUNC(sub_832AF650) {
	__imp__sub_832AF650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF6A8) {
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
	// addi r31,r11,-9228
	ctx.r31.s64 = ctx.r11.s64 + -9228;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af6d0
	if (ctx.cr6.eq) goto loc_832AF6D0;
	// bl 0x8221be68
	ctx.lr = 0x832AF6D0;
	sub_8221BE68(ctx, base);
loc_832AF6D0:
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

PPC_WEAK_FUNC(sub_832AF6A8) {
	__imp__sub_832AF6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF700) {
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
	// addi r31,r11,-9212
	ctx.r31.s64 = ctx.r11.s64 + -9212;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af728
	if (ctx.cr6.eq) goto loc_832AF728;
	// bl 0x8221be68
	ctx.lr = 0x832AF728;
	sub_8221BE68(ctx, base);
loc_832AF728:
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

PPC_WEAK_FUNC(sub_832AF700) {
	__imp__sub_832AF700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF758) {
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
	// addi r31,r11,-9196
	ctx.r31.s64 = ctx.r11.s64 + -9196;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af780
	if (ctx.cr6.eq) goto loc_832AF780;
	// bl 0x8221be68
	ctx.lr = 0x832AF780;
	sub_8221BE68(ctx, base);
loc_832AF780:
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

PPC_WEAK_FUNC(sub_832AF758) {
	__imp__sub_832AF758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-9180
	ctx.r3.s64 = ctx.r11.s64 + -9180;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF7B0) {
	__imp__sub_832AF7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF7C0) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-9176
	ctx.r11.s64 = ctx.r11.s64 + -9176;
	// addi r31,r11,200
	ctx.r31.s64 = ctx.r11.s64 + 200;
loc_832AF7E4:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af7f8
	if (ctx.cr6.eq) goto loc_832AF7F8;
	// bl 0x821fc1f0
	ctx.lr = 0x832AF7F8;
	sub_821FC1F0(ctx, base);
loc_832AF7F8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832af7e4
	if (!ctx.cr0.lt) goto loc_832AF7E4;
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

PPC_WEAK_FUNC(sub_832AF7C0) {
	__imp__sub_832AF7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF818) {
	__imp__sub_832AF818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832AF830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-8968
	ctx.r11.s64 = ctx.r11.s64 + -8968;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,1080
	ctx.r31.s64 = ctx.r11.s64 + 1080;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832AF850:
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832AF85C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832AF860:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af860
	if (!ctx.cr0.eq) goto loc_832AF860;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832af850
	if (!ctx.cr0.lt) goto loc_832AF850;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF828) {
	__imp__sub_832AF828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r11,-20388
	ctx.r11.s64 = ctx.r11.s64 + -20388;
	// addi r9,r10,-28868
	ctx.r9.s64 = ctx.r10.s64 + -28868;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832af8c0
	if (ctx.cr6.eq) goto loc_832AF8C0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82b55128
	sub_82B55128(ctx, base);
	return;
loc_832AF8C0:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82b52500
	sub_82B52500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF890) {
	__imp__sub_832AF890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF8C8) {
	__imp__sub_832AF8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7888
	ctx.r3.s64 = ctx.r11.s64 + -7888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF8D0) {
	__imp__sub_832AF8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7884
	ctx.r3.s64 = ctx.r11.s64 + -7884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF8E0) {
	__imp__sub_832AF8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7880
	ctx.r3.s64 = ctx.r11.s64 + -7880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF8F0) {
	__imp__sub_832AF8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7876
	ctx.r3.s64 = ctx.r11.s64 + -7876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF900) {
	__imp__sub_832AF900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF910) {
	__imp__sub_832AF910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7868
	ctx.r3.s64 = ctx.r11.s64 + -7868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF920) {
	__imp__sub_832AF920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7864
	ctx.r3.s64 = ctx.r11.s64 + -7864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF930) {
	__imp__sub_832AF930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7860
	ctx.r3.s64 = ctx.r11.s64 + -7860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF940) {
	__imp__sub_832AF940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7856
	ctx.r3.s64 = ctx.r11.s64 + -7856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF950) {
	__imp__sub_832AF950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7852
	ctx.r3.s64 = ctx.r11.s64 + -7852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF960) {
	__imp__sub_832AF960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF970) {
	__imp__sub_832AF970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7844
	ctx.r3.s64 = ctx.r11.s64 + -7844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF980) {
	__imp__sub_832AF980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7840
	ctx.r3.s64 = ctx.r11.s64 + -7840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF990) {
	__imp__sub_832AF990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7836
	ctx.r3.s64 = ctx.r11.s64 + -7836;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF9A0) {
	__imp__sub_832AF9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF9B0) {
	__imp__sub_832AF9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7764
	ctx.r3.s64 = ctx.r11.s64 + -7764;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF9C0) {
	__imp__sub_832AF9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7728
	ctx.r3.s64 = ctx.r11.s64 + -7728;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF9D0) {
	__imp__sub_832AF9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-5536
	ctx.r3.s64 = ctx.r11.s64 + -5536;
	// b 0x82ba8d90
	sub_82BA8D90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AF9E0) {
	__imp__sub_832AF9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AF9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,28560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28560);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,28560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28560, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AF9F0) {
	__imp__sub_832AF9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AFA08) {
	__imp__sub_832AFA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x82be4090
	sub_82BE4090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFA10) {
	__imp__sub_832AFA10(ctx, base);
}

