#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B4DCB4"))) PPC_WEAK_FUNC(sub_82B4DCB4);
PPC_FUNC_IMPL(__imp__sub_82B4DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4DCB8"))) PPC_WEAK_FUNC(sub_82B4DCB8);
PPC_FUNC_IMPL(__imp__sub_82B4DCB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// ld r30,24(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, ctx.xer);
	// ble cr6,0x82b4dcfc
	if (!ctx.cr6.gt) goto loc_82B4DCFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82b4dd14
	goto loc_82B4DD14;
loc_82B4DCFC:
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B4DD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B4DD14:
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

__attribute__((alias("__imp__sub_82B4DD2C"))) PPC_WEAK_FUNC(sub_82B4DD2C);
PPC_FUNC_IMPL(__imp__sub_82B4DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4DD30"))) PPC_WEAK_FUNC(sub_82B4DD30);
PPC_FUNC_IMPL(__imp__sub_82B4DD30) {
	PPC_FUNC_PROLOGUE();
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x82b4dd58
	if (!ctx.cr6.gt) goto loc_82B4DD58;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82B4DD58:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4DD6C"))) PPC_WEAK_FUNC(sub_82B4DD6C);
PPC_FUNC_IMPL(__imp__sub_82B4DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4DD70"))) PPC_WEAK_FUNC(sub_82B4DD70);
PPC_FUNC_IMPL(__imp__sub_82B4DD70) {
	PPC_FUNC_PROLOGUE();
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4DD80"))) PPC_WEAK_FUNC(sub_82B4DD80);
PPC_FUNC_IMPL(__imp__sub_82B4DD80) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4DDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B4DDC0"))) PPC_WEAK_FUNC(sub_82B4DDC0);
PPC_FUNC_IMPL(__imp__sub_82B4DDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82b38380
	sub_82B38380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4DDD4"))) PPC_WEAK_FUNC(sub_82B4DDD4);
PPC_FUNC_IMPL(__imp__sub_82B4DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4DDD8"))) PPC_WEAK_FUNC(sub_82B4DDD8);
PPC_FUNC_IMPL(__imp__sub_82B4DDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82B4DDE0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82b4de04
	if (!ctx.cr6.eq) goto loc_82B4DE04;
	// lis r31,16384
	ctx.r31.s64 = 1073741824;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// b 0x82b4de0c
	goto loc_82B4DE0C;
loc_82B4DE04:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82B4DE0C:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82b4de18
	if (!ctx.cr6.lt) goto loc_82B4DE18;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82B4DE18:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r8,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r11.s64;
	// li r29,8192
	ctx.r29.s64 = 8192;
	// slw r28,r9,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82b4de3c
	if (!ctx.cr6.eq) goto loc_82B4DE3C;
	// lis r29,8192
	ctx.r29.s64 = 536870912;
	// ori r29,r29,8192
	ctx.r29.u64 = ctx.r29.u64 | 8192;
loc_82B4DE3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b4de48
	if (!ctx.cr6.eq) goto loc_82B4DE48;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B4DE48:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82b4def8
	if (!ctx.cr6.lt) goto loc_82B4DEF8;
loc_82B4DE50:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc0ca0
	ctx.lr = 0x82B4DE64;
	sub_82CC0CA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b4de84
	if (!ctx.cr6.eq) goto loc_82B4DE84;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82b4de50
	if (ctx.cr6.lt) goto loc_82B4DE50;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82B4DE84:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b4deac
	if (ctx.cr6.lt) goto loc_82B4DEAC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82b4deac
	if (ctx.cr6.gt) goto loc_82B4DEAC;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
loc_82B4DEAC:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc0ca0
	ctx.lr = 0x82B4DEBC;
	sub_82CC0CA0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b4defc
	if (!ctx.cr6.eq) goto loc_82B4DEFC;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbbbb0
	ctx.lr = 0x82B4DEE4;
	sub_82CBBBB0(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x82cc0cf0
	ctx.lr = 0x82B4DEF8;
	sub_82CC0CF0(ctx, base);
loc_82B4DEF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4DEFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82B4DF04"))) PPC_WEAK_FUNC(sub_82B4DF04);
PPC_FUNC_IMPL(__imp__sub_82B4DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4DF08"))) PPC_WEAK_FUNC(sub_82B4DF08);
PPC_FUNC_IMPL(__imp__sub_82B4DF08) {
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
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lwz r11,13664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13664);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b4df68
	if (!ctx.cr6.eq) goto loc_82B4DF68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// stw r11,13664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13664, ctx.r11.u32);
	// addi r31,r9,13584
	ctx.r31.s64 = ctx.r9.s64 + 13584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b4df88
	ctx.lr = 0x82B4DF44;
	sub_82B4DF88(ctx, base);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// addi r3,r8,-4144
	ctx.r3.s64 = ctx.r8.s64 + -4144;
	// bl 0x82ca3700
	ctx.lr = 0x82B4DF50;
	sub_82CA3700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82B4DF68:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,13584
	ctx.r3.s64 = ctx.r11.s64 + 13584;
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

__attribute__((alias("__imp__sub_82B4DF84"))) PPC_WEAK_FUNC(sub_82B4DF84);
PPC_FUNC_IMPL(__imp__sub_82B4DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4DF88"))) PPC_WEAK_FUNC(sub_82B4DF88);
PPC_FUNC_IMPL(__imp__sub_82B4DF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B4DF90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r31,r11,13584
	ctx.r31.s64 = ctx.r11.s64 + 13584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b258c
	ctx.lr = 0x82B4DFA4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x82B4DFAC;
	sub_8221F388(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4dfbc
	if (ctx.cr6.eq) goto loc_82B4DFBC;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82B4DFBC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b4dfc8
	if (ctx.cr0.eq) goto loc_82B4DFC8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B4DFC8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b4dfd4
	if (ctx.cr0.eq) goto loc_82B4DFD4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B4DFD4:
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r30,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r30.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stb r29,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r29.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x82B4E010;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4e01c
	if (ctx.cr6.eq) goto loc_82B4E01C;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82B4E01C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b4e028
	if (ctx.cr0.eq) goto loc_82B4E028;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B4E028:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b4e034
	if (ctx.cr0.eq) goto loc_82B4E034;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B4E034:
	// stb r29,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r29.u8);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r30,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r30.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r9,48
	ctx.r9.s64 = 3145728;
	// stb r29,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r29.u8);
	// lis r8,240
	ctx.r8.s64 = 15728640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,5472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5472);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stfd f0,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f0.u64);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B4E094"))) PPC_WEAK_FUNC(sub_82B4E094);
PPC_FUNC_IMPL(__imp__sub_82B4E094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4E098"))) PPC_WEAK_FUNC(sub_82B4E098);
PPC_FUNC_IMPL(__imp__sub_82B4E098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B4E0A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82200688
	ctx.lr = 0x82B4E0BC;
	sub_82200688(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	ctx.lr = 0x82B4E0C4;
	sub_8221EB58(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f0,28352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28352);
	// lfd f13,28360(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28360);
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fdiv f9,f10,f13
	ctx.f9.f64 = ctx.f10.f64 / ctx.f13.f64;
	// stfd f9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f9.u64);
	// bl 0x82b4f058
	ctx.lr = 0x82B4E0FC;
	sub_82B4F058(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B4E110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
loc_82B4E114:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stwcx. r6,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b4e114
	if (!ctx.cr0.eq) goto loc_82B4E114;
	// addi r27,r31,76
	ctx.r27.s64 = ctx.r31.s64 + 76;
loc_82B4E134:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stwcx. r10,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b4e134
	if (!ctx.cr0.eq) goto loc_82B4E134;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823660d0
	ctx.lr = 0x82B4E16C;
	sub_823660D0(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82B4E184:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b4e198
	if (ctx.cr6.eq) goto loc_82B4E198;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b4e19c
	if (ctx.cr6.eq) goto loc_82B4E19C;
loc_82B4E198:
	// twi 31,r0,22
loc_82B4E19C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b4e210
	if (ctx.cr6.eq) goto loc_82B4E210;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b4e1b0
	if (!ctx.cr6.eq) goto loc_82B4E1B0;
	// twi 31,r0,22
loc_82B4E1B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b4e1c0
	if (!ctx.cr6.eq) goto loc_82B4E1C0;
	// twi 31,r0,22
loc_82B4E1C0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b4e1e8
	if (!ctx.cr6.eq) goto loc_82B4E1E8;
	// twi 31,r0,22
loc_82B4E1E8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b4e1f8
	if (ctx.cr6.eq) goto loc_82B4E1F8;
	// twi 31,r0,22
loc_82B4E1F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8273f9d8
	ctx.lr = 0x82B4E204;
	sub_8273F9D8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b4e184
	goto loc_82B4E184;
loc_82B4E210:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b4e220
	if (ctx.cr6.eq) goto loc_82B4E220;
	// twi 31,r0,22
loc_82B4E220:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b4e234
	if (ctx.cr6.eq) goto loc_82B4E234;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x832b226c
	ctx.lr = 0x82B4E234;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B4E234:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B4E23C"))) PPC_WEAK_FUNC(sub_82B4E23C);
PPC_FUNC_IMPL(__imp__sub_82B4E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4E240"))) PPC_WEAK_FUNC(sub_82B4E240);
PPC_FUNC_IMPL(__imp__sub_82B4E240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82B4E248;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82200688
	ctx.lr = 0x82B4E268;
	sub_82200688(ctx, base);
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r31,r26,40
	ctx.r31.s64 = ctx.r26.s64 + 40;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b4e2a8
	if (!ctx.cr6.eq) goto loc_82B4E2A8;
loc_82B4E280:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82b4e294
	if (!ctx.cr6.lt) goto loc_82B4E294;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82b4e29c
	goto loc_82B4E29C;
loc_82B4E294:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B4E29C:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b4e280
	if (ctx.cr6.eq) goto loc_82B4E280;
loc_82B4E2A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b4e2d0
	if (ctx.cr6.eq) goto loc_82B4E2D0;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b4e2d0
	if (ctx.cr6.lt) goto loc_82B4E2D0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82b4e2dc
	goto loc_82B4E2DC;
loc_82B4E2D0:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82B4E2DC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B4E2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4e314
	if (ctx.cr6.eq) goto loc_82B4E314;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b4e318
	if (ctx.cr6.eq) goto loc_82B4E318;
loc_82B4E314:
	// twi 31,r0,22
loc_82B4E318:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b4e354
	if (ctx.cr6.eq) goto loc_82B4E354;
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// addi r8,r26,72
	ctx.r8.s64 = ctx.r26.s64 + 72;
loc_82B4E32C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b4e32c
	if (!ctx.cr0.eq) goto loc_82B4E32C;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b4f198
	ctx.lr = 0x82B4E354;
	sub_82B4F198(ctx, base);
loc_82B4E354:
	// addi r30,r26,28
	ctx.r30.s64 = ctx.r26.s64 + 28;
	// lwz r31,32(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825cb448
	ctx.lr = 0x82B4E36C;
	sub_825CB448(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4e380
	if (ctx.cr6.eq) goto loc_82B4E380;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b4e384
	if (ctx.cr6.eq) goto loc_82B4E384;
loc_82B4E380:
	// twi 31,r0,22
loc_82B4E384:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82b4e394
	if (!ctx.cr6.eq) goto loc_82B4E394;
	// twi 31,r0,22
loc_82B4E394:
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825cb448
	ctx.lr = 0x82B4E3A4;
	sub_825CB448(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b4e3b4
	if (!ctx.cr6.eq) goto loc_82B4E3B4;
	// twi 31,r0,22
loc_82B4E3B4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b4e3c8
	if (!ctx.cr6.eq) goto loc_82B4E3C8;
	// twi 31,r0,22
loc_82B4E3C8:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b4e3d8
	if (ctx.cr6.eq) goto loc_82B4E3D8;
	// twi 31,r0,22
loc_82B4E3D8:
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825cb448
	ctx.lr = 0x82B4E3E8;
	sub_825CB448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8246ffc8
	ctx.lr = 0x82B4E3FC;
	sub_8246FFC8(ctx, base);
	// addi r27,r26,76
	ctx.r27.s64 = ctx.r26.s64 + 76;
	// neg r7,r29
	ctx.r7.s64 = -ctx.r29.s64;
loc_82B4E404:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b4e404
	if (!ctx.cr0.eq) goto loc_82B4E404;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82B4E438:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4e44c
	if (ctx.cr6.eq) goto loc_82B4E44C;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b4e450
	if (ctx.cr6.eq) goto loc_82B4E450;
loc_82B4E44C:
	// twi 31,r0,22
loc_82B4E450:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b4e4c4
	if (ctx.cr6.eq) goto loc_82B4E4C4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b4e464
	if (!ctx.cr6.eq) goto loc_82B4E464;
	// twi 31,r0,22
loc_82B4E464:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b4e474
	if (!ctx.cr6.eq) goto loc_82B4E474;
	// twi 31,r0,22
loc_82B4E474:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b4e49c
	if (!ctx.cr6.eq) goto loc_82B4E49C;
	// twi 31,r0,22
loc_82B4E49C:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b4e4ac
	if (ctx.cr6.eq) goto loc_82B4E4AC;
	// twi 31,r0,22
loc_82B4E4AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8273f9d8
	ctx.lr = 0x82B4E4B8;
	sub_8273F9D8(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b4e438
	goto loc_82B4E438;
loc_82B4E4C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b4e4d4
	if (ctx.cr6.eq) goto loc_82B4E4D4;
	// twi 31,r0,22
loc_82B4E4D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82b4e4e4
	if (!ctx.cr6.lt) goto loc_82B4E4E4;
	// twi 31,r0,22
loc_82B4E4E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b4e508
	ctx.lr = 0x82B4E4EC;
	sub_82B4E508(ctx, base);
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b4e500
	if (ctx.cr6.eq) goto loc_82B4E500;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x832b226c
	ctx.lr = 0x82B4E500;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B4E500:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82B4E508"))) PPC_WEAK_FUNC(sub_82B4E508);
PPC_FUNC_IMPL(__imp__sub_82B4E508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B4E510;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x8221eb58
	ctx.lr = 0x82B4E534;
	sub_8221EB58(ctx, base);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lwz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfd f0,28352(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28352);
	// lfd f13,28360(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28360);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - ctx.f0.f64;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// fdiv f31,f10,f13
	ctx.f31.f64 = ctx.f10.f64 / ctx.f13.f64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82B4E56C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4e580
	if (ctx.cr6.eq) goto loc_82B4E580;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b4e584
	if (ctx.cr6.eq) goto loc_82B4E584;
loc_82B4E580:
	// twi 31,r0,22
loc_82B4E584:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b4e658
	if (ctx.cr6.eq) goto loc_82B4E658;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b4e598
	if (!ctx.cr6.eq) goto loc_82B4E598;
	// twi 31,r0,22
loc_82B4E598:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b4e5a8
	if (!ctx.cr6.eq) goto loc_82B4E5A8;
	// twi 31,r0,22
loc_82B4E5A8:
	// lfd f0,24(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// fsub f13,f31,f0
	ctx.f13.f64 = ctx.f31.f64 - ctx.f0.f64;
	// lfd f12,56(r29)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82b4e644
	if (!ctx.cr6.gt) goto loc_82B4E644;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b4e5c8
	if (!ctx.cr6.eq) goto loc_82B4E5C8;
	// twi 31,r0,22
loc_82B4E5C8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4e628
	if (ctx.cr6.eq) goto loc_82B4E628;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82b4e61c
	if (!ctx.cr6.lt) goto loc_82B4E61C;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82a962b0
	ctx.lr = 0x82B4E610;
	sub_82A962B0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b4e56c
	goto loc_82B4E56C;
loc_82B4E61C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b4e628
	if (!ctx.cr6.gt) goto loc_82B4E628;
	// twi 31,r0,22
loc_82B4E628:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8238eb88
	ctx.lr = 0x82B4E644;
	sub_8238EB88(ctx, base);
loc_82B4E644:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a962b0
	ctx.lr = 0x82B4E64C;
	sub_82A962B0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b4e56c
	goto loc_82B4E56C;
loc_82B4E658:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b4e66c
	if (!ctx.cr6.gt) goto loc_82B4E66C;
	// twi 31,r0,22
loc_82B4E66C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82B4E670:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b4e67c
	if (!ctx.cr6.gt) goto loc_82B4E67C;
	// twi 31,r0,22
loc_82B4E67C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b4e6f0
	if (ctx.cr6.eq) goto loc_82B4E6F0;
	// blt cr6,0x82b4e68c
	if (ctx.cr6.lt) goto loc_82B4E68C;
	// twi 31,r0,22
loc_82B4E68C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r29,72
	ctx.r9.s64 = ctx.r29.s64 + 72;
	// neg r6,r3
	ctx.r6.s64 = -ctx.r3.s64;
loc_82B4E6AC:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b4e6ac
	if (!ctx.cr0.eq) goto loc_82B4E6AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b4f198
	ctx.lr = 0x82B4E6D4;
	sub_82B4F198(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b4e6e4
	if (ctx.cr6.lt) goto loc_82B4E6E4;
	// twi 31,r0,22
loc_82B4E6E4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82b4e670
	goto loc_82B4E670;
loc_82B4E6F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4e6fc
	if (ctx.cr6.eq) goto loc_82B4E6FC;
	// bl 0x8221be68
	ctx.lr = 0x82B4E6FC;
	sub_8221BE68(ctx, base);
loc_82B4E6FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B4E708"))) PPC_WEAK_FUNC(sub_82B4E708);
PPC_FUNC_IMPL(__imp__sub_82B4E708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82B4E710;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B4E75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b4ea34
	if (ctx.cr6.eq) goto loc_82B4EA34;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4ea34
	if (ctx.cr6.eq) goto loc_82B4EA34;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b4e890
	if (ctx.cr6.eq) goto loc_82B4E890;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8221f388
	ctx.lr = 0x82B4E7A8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4e91c
	if (ctx.cr6.eq) goto loc_82B4E91C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r11,-28476
	ctx.r8.s64 = ctx.r11.s64 + -28476;
	// addi r7,r10,10788
	ctx.r7.s64 = ctx.r10.s64 + 10788;
	// addi r6,r9,-25228
	ctx.r6.s64 = ctx.r9.s64 + -25228;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// beq cr6,0x82b4e7fc
	if (ctx.cr6.eq) goto loc_82B4E7FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4E7FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4E810:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822f54c8
	ctx.lr = 0x82B4E81C;
	sub_822F54C8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b4e82c
	if (!ctx.cr6.eq) goto loc_82B4E82C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B4E82C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822f54c8
	ctx.lr = 0x82B4E834;
	sub_822F54C8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4e850
	if (ctx.cr6.eq) goto loc_82B4E850;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4E850:
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b4e924
	if (!ctx.cr6.eq) goto loc_82B4E924;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4e87c
	if (ctx.cr6.eq) goto loc_82B4E87C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4E87C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4ea54
	if (ctx.cr6.eq) goto loc_82B4EA54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b4ea48
	goto loc_82B4EA48;
loc_82B4E890:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	ctx.lr = 0x82B4E898;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4e91c
	if (ctx.cr6.eq) goto loc_82B4E91C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r11,-28476
	ctx.r8.s64 = ctx.r11.s64 + -28476;
	// addi r7,r10,-28432
	ctx.r7.s64 = ctx.r10.s64 + -28432;
	// addi r6,r9,-28384
	ctx.r6.s64 = ctx.r9.s64 + -28384;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x82b4e8f4
	if (ctx.cr6.eq) goto loc_82B4E8F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4E8F4:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b4e914
	if (ctx.cr6.eq) goto loc_82B4E914;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4E914:
	// stb r28,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r28.u8);
	// b 0x82b4e7fc
	goto loc_82B4E7FC;
loc_82B4E91C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82b4e810
	goto loc_82B4E810;
loc_82B4E924:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b4e944
	if (ctx.cr6.eq) goto loc_82B4E944;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82b4e9dc
	goto loc_82B4E9DC;
loc_82B4E944:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b44788
	ctx.lr = 0x82B4E94C;
	sub_82B44788(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82b4e9d0
	if (!ctx.cr6.lt) goto loc_82B4E9D0;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4e9a8
	if (ctx.cr6.eq) goto loc_82B4E9A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4E9A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4ea54
	if (ctx.cr6.eq) goto loc_82B4EA54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b4ea48
	goto loc_82B4EA48;
loc_82B4E9D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82B4E9DC:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4E9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f5478
	ctx.lr = 0x82B4E9F0;
	sub_822F5478(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4ea0c
	if (ctx.cr6.eq) goto loc_82B4EA0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4EA0C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4ea54
	if (ctx.cr6.eq) goto loc_82B4EA54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b4ea48
	goto loc_82B4EA48;
loc_82B4EA34:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// beq cr6,0x82b4ea58
	if (ctx.cr6.eq) goto loc_82B4EA58;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82B4EA48:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4EA54:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B4EA58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4ea70
	if (ctx.cr6.eq) goto loc_82B4EA70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4EA70:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82B4EA7C"))) PPC_WEAK_FUNC(sub_82B4EA7C);
PPC_FUNC_IMPL(__imp__sub_82B4EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EA80"))) PPC_WEAK_FUNC(sub_82B4EA80);
PPC_FUNC_IMPL(__imp__sub_82B4EA80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b4ead0
	ctx.lr = 0x82B4EAA0;
	sub_82B4EAD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4eab8
	if (ctx.cr6.eq) goto loc_82B4EAB8;
	// bl 0x8221be68
	ctx.lr = 0x82B4EAB4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B4EAB8:
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

__attribute__((alias("__imp__sub_82B4EAD0"))) PPC_WEAK_FUNC(sub_82B4EAD0);
PPC_FUNC_IMPL(__imp__sub_82B4EAD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-28432
	ctx.r9.s64 = ctx.r11.s64 + -28432;
	// addi r8,r10,-28384
	ctx.r8.s64 = ctx.r10.s64 + -28384;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B4EB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82B4EB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4eb70
	if (ctx.cr6.eq) goto loc_82B4EB70;
	// bl 0x8221be68
	ctx.lr = 0x82B4EB34;
	sub_8221BE68(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82b4eb70
	if (!ctx.cr6.eq) goto loc_82B4EB70;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b4eb70
	if (ctx.cr6.eq) goto loc_82B4EB70;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r10,-29300
	ctx.r3.s64 = ctx.r10.s64 + -29300;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B4EB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4EB70:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4eb88
	if (ctx.cr6.eq) goto loc_82B4EB88;
	// bl 0x82b4df08
	ctx.lr = 0x82B4EB80;
	sub_82B4DF08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b4e240
	ctx.lr = 0x82B4EB88;
	sub_82B4E240(ctx, base);
loc_82B4EB88:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4eba4
	if (ctx.cr6.eq) goto loc_82B4EBA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4EBA4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4ebc0
	if (ctx.cr6.eq) goto loc_82B4EBC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4EBC0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-28340
	ctx.r9.s64 = ctx.r11.s64 + -28340;
	// addi r8,r10,-28292
	ctx.r8.s64 = ctx.r10.s64 + -28292;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B4EBEC"))) PPC_WEAK_FUNC(sub_82B4EBEC);
PPC_FUNC_IMPL(__imp__sub_82B4EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EBF0"))) PPC_WEAK_FUNC(sub_82B4EBF0);
PPC_FUNC_IMPL(__imp__sub_82B4EBF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4EC04"))) PPC_WEAK_FUNC(sub_82B4EC04);
PPC_FUNC_IMPL(__imp__sub_82B4EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EC08"))) PPC_WEAK_FUNC(sub_82B4EC08);
PPC_FUNC_IMPL(__imp__sub_82B4EC08) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x82b4ec50
	if (!ctx.cr6.lt) goto loc_82B4EC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82b4ec5c
	goto loc_82B4EC5C;
loc_82B4EC50:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82B4EC5C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B4EC78"))) PPC_WEAK_FUNC(sub_82B4EC78);
PPC_FUNC_IMPL(__imp__sub_82B4EC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4EC8C"))) PPC_WEAK_FUNC(sub_82B4EC8C);
PPC_FUNC_IMPL(__imp__sub_82B4EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EC90"))) PPC_WEAK_FUNC(sub_82B4EC90);
PPC_FUNC_IMPL(__imp__sub_82B4EC90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4ECA4"))) PPC_WEAK_FUNC(sub_82B4ECA4);
PPC_FUNC_IMPL(__imp__sub_82B4ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4ECA8"))) PPC_WEAK_FUNC(sub_82B4ECA8);
PPC_FUNC_IMPL(__imp__sub_82B4ECA8) {
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
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4ECD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B4ECE8"))) PPC_WEAK_FUNC(sub_82B4ECE8);
PPC_FUNC_IMPL(__imp__sub_82B4ECE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4ECFC"))) PPC_WEAK_FUNC(sub_82B4ECFC);
PPC_FUNC_IMPL(__imp__sub_82B4ECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4ED00"))) PPC_WEAK_FUNC(sub_82B4ED00);
PPC_FUNC_IMPL(__imp__sub_82B4ED00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B4ED08;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4ED24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b4eddc
	if (ctx.cr6.eq) goto loc_82B4EDDC;
	// bl 0x82b4df08
	ctx.lr = 0x82B4ED3C;
	sub_82B4DF08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82B4ED50;
	sub_82200688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b4e508
	ctx.lr = 0x82B4ED58;
	sub_82B4E508(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b4ed84
	if (!ctx.cr6.gt) goto loc_82B4ED84;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b4ed7c
	if (ctx.cr6.eq) goto loc_82B4ED7C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82B4ED7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B4ED7C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b4edc4
	goto loc_82B4EDC4;
loc_82B4ED84:
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// ble cr6,0x82b4edb0
	if (!ctx.cr6.gt) goto loc_82B4EDB0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b4ed7c
	if (ctx.cr6.eq) goto loc_82B4ED7C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82B4EDA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b4edc4
	goto loc_82B4EDC4;
loc_82B4EDB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b4edc0
	if (ctx.cr6.eq) goto loc_82B4EDC0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82B4EDC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B4EDC0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B4EDC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b4eddc
	if (!ctx.cr6.eq) goto loc_82B4EDDC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B4EDDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221f388
	ctx.lr = 0x82B4EDE4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x82b4edfc
	if (!ctx.cr6.eq) goto loc_82B4EDFC;
	// li r3,-514
	ctx.r3.s64 = -514;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B4EDFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B4EE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82b4ee40
	if (!ctx.cr6.lt) goto loc_82B4EE40;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8221be68
	ctx.lr = 0x82B4EE30;
	sub_8221BE68(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B4EE40:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82b4ee98
	if (!ctx.cr6.eq) goto loc_82B4EE98;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b4ee98
	if (ctx.cr6.eq) goto loc_82B4EE98;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,-28504
	ctx.r3.s64 = ctx.r9.s64 + -28504;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B4EE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4EE98:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4EEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b4eed0
	if (ctx.cr6.eq) goto loc_82B4EED0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82b4eed0
	if (ctx.cr6.lt) goto loc_82B4EED0;
	// bl 0x82b4df08
	ctx.lr = 0x82B4EEC8;
	sub_82B4DF08(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82b4e098
	ctx.lr = 0x82B4EED0;
	sub_82B4E098(ctx, base);
loc_82B4EED0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B4EEDC"))) PPC_WEAK_FUNC(sub_82B4EEDC);
PPC_FUNC_IMPL(__imp__sub_82B4EEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EEE0"))) PPC_WEAK_FUNC(sub_82B4EEE0);
PPC_FUNC_IMPL(__imp__sub_82B4EEE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4EEF4"))) PPC_WEAK_FUNC(sub_82B4EEF4);
PPC_FUNC_IMPL(__imp__sub_82B4EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EEF8"))) PPC_WEAK_FUNC(sub_82B4EEF8);
PPC_FUNC_IMPL(__imp__sub_82B4EEF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4EF0C"))) PPC_WEAK_FUNC(sub_82B4EF0C);
PPC_FUNC_IMPL(__imp__sub_82B4EF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EF10"))) PPC_WEAK_FUNC(sub_82B4EF10);
PPC_FUNC_IMPL(__imp__sub_82B4EF10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4EF24"))) PPC_WEAK_FUNC(sub_82B4EF24);
PPC_FUNC_IMPL(__imp__sub_82B4EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EF28"))) PPC_WEAK_FUNC(sub_82B4EF28);
PPC_FUNC_IMPL(__imp__sub_82B4EF28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4EF3C"))) PPC_WEAK_FUNC(sub_82B4EF3C);
PPC_FUNC_IMPL(__imp__sub_82B4EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4EF40"))) PPC_WEAK_FUNC(sub_82B4EF40);
PPC_FUNC_IMPL(__imp__sub_82B4EF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,32256
	ctx.r10.s64 = ctx.r10.s64 + 32256;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82B4EF5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b4ef7c
	if (!ctx.cr0.eq) goto loc_82B4EF7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82b4ef5c
	if (!ctx.cr6.eq) goto loc_82B4EF5C;
loc_82B4EF7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b4efbc
	if (ctx.cr6.eq) goto loc_82B4EFBC;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-28248
	ctx.r10.s64 = ctx.r10.s64 + -28248;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82B4EF94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b4efb4
	if (!ctx.cr0.eq) goto loc_82B4EFB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82b4ef94
	if (!ctx.cr6.eq) goto loc_82B4EF94;
loc_82B4EFB4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82b4efc4
	if (!ctx.cr6.eq) goto loc_82B4EFC4;
loc_82B4EFBC:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// b 0x82b4f010
	goto loc_82B4F010;
loc_82B4EFC4:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-28232
	ctx.r10.s64 = ctx.r10.s64 + -28232;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82B4EFD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b4eff4
	if (!ctx.cr0.eq) goto loc_82B4EFF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82b4efd4
	if (!ctx.cr6.eq) goto loc_82B4EFD4;
loc_82B4EFF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82b4f038
	if (!ctx.cr6.eq) goto loc_82B4F038;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82b4f00c
	if (!ctx.cr6.eq) goto loc_82B4F00C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B4F00C:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82B4F010:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B4F038:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4F058"))) PPC_WEAK_FUNC(sub_82B4F058);
PPC_FUNC_IMPL(__imp__sub_82B4F058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82B4F060;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b4f0c4
	if (!ctx.cr6.eq) goto loc_82B4F0C4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82B4F090:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b4f0b4
	if (ctx.cr6.eq) goto loc_82B4F0B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b4f0b8
	goto loc_82B4F0B8;
loc_82B4F0B4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82B4F0B8:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b4f090
	if (ctx.cr6.eq) goto loc_82B4F090;
loc_82B4F0C4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4f128
	if (ctx.cr6.eq) goto loc_82B4F128;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b4f124
	if (!ctx.cr6.eq) goto loc_82B4F124;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823003c8
	ctx.lr = 0x82B4F100;
	sub_823003C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82B4F124:
	// bl 0x828836e8
	ctx.lr = 0x82B4F128;
	sub_828836E8(ctx, base);
loc_82B4F128:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b4f178
	if (!ctx.cr6.lt) goto loc_82B4F178;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823003c8
	ctx.lr = 0x82B4F154;
	sub_823003C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82B4F178:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82B4F194"))) PPC_WEAK_FUNC(sub_82B4F194);
PPC_FUNC_IMPL(__imp__sub_82B4F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F198"))) PPC_WEAK_FUNC(sub_82B4F198);
PPC_FUNC_IMPL(__imp__sub_82B4F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B4F1A0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b4f1e8
	if (!ctx.cr6.eq) goto loc_82B4F1E8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82B4F1C0:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82b4f1d8
	if (!ctx.cr6.lt) goto loc_82B4F1D8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b4f1dc
	goto loc_82B4F1DC;
loc_82B4F1D8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82B4F1DC:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b4f1c0
	if (ctx.cr6.eq) goto loc_82B4F1C0;
loc_82B4F1E8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b4f234
	if (!ctx.cr6.eq) goto loc_82B4F234;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82B4F20C:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82b4f220
	if (!ctx.cr6.lt) goto loc_82B4F220;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82b4f228
	goto loc_82B4F228;
loc_82B4F220:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B4F228:
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b4f20c
	if (ctx.cr6.eq) goto loc_82B4F20C;
loc_82B4F234:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
loc_82B4F248:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4f25c
	if (ctx.cr6.eq) goto loc_82B4F25C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b4f260
	if (ctx.cr6.eq) goto loc_82B4F260;
loc_82B4F25C:
	// twi 31,r0,22
loc_82B4F260:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b4f27c
	if (ctx.cr6.eq) goto loc_82B4F27C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a962b0
	ctx.lr = 0x82B4F278;
	sub_82A962B0(ctx, base);
	// b 0x82b4f248
	goto loc_82B4F248;
loc_82B4F27C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e468
	ctx.lr = 0x82B4F290;
	sub_8233E468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B4F29C"))) PPC_WEAK_FUNC(sub_82B4F29C);
PPC_FUNC_IMPL(__imp__sub_82B4F29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F2A0"))) PPC_WEAK_FUNC(sub_82B4F2A0);
PPC_FUNC_IMPL(__imp__sub_82B4F2A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-28340
	ctx.r9.s64 = ctx.r11.s64 + -28340;
	// addi r8,r10,-28292
	ctx.r8.s64 = ctx.r10.s64 + -28292;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b4f2e0
	if (ctx.cr6.eq) goto loc_82B4F2E0;
	// bl 0x8221be68
	ctx.lr = 0x82B4F2DC;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B4F2E0:
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

__attribute__((alias("__imp__sub_82B4F2F4"))) PPC_WEAK_FUNC(sub_82B4F2F4);
PPC_FUNC_IMPL(__imp__sub_82B4F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F2F8"))) PPC_WEAK_FUNC(sub_82B4F2F8);
PPC_FUNC_IMPL(__imp__sub_82B4F2F8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b4f344
	if (!ctx.cr6.eq) goto loc_82B4F344;
loc_82B4F320:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82b4f2f8
	ctx.lr = 0x82B4F32C;
	sub_82B4F2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x82B4F338;
	sub_8221BE68(ctx, base);
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4f320
	if (ctx.cr6.eq) goto loc_82B4F320;
loc_82B4F344:
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

__attribute__((alias("__imp__sub_82B4F35C"))) PPC_WEAK_FUNC(sub_82B4F35C);
PPC_FUNC_IMPL(__imp__sub_82B4F35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F360"))) PPC_WEAK_FUNC(sub_82B4F360);
PPC_FUNC_IMPL(__imp__sub_82B4F360) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82b4ef40
	sub_82B4EF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4F368"))) PPC_WEAK_FUNC(sub_82B4F368);
PPC_FUNC_IMPL(__imp__sub_82B4F368) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822cbeb8
	sub_822CBEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4F370"))) PPC_WEAK_FUNC(sub_82B4F370);
PPC_FUNC_IMPL(__imp__sub_82B4F370) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822c72e0
	sub_822C72E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4F378"))) PPC_WEAK_FUNC(sub_82B4F378);
PPC_FUNC_IMPL(__imp__sub_82B4F378) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4F38C"))) PPC_WEAK_FUNC(sub_82B4F38C);
PPC_FUNC_IMPL(__imp__sub_82B4F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F390"))) PPC_WEAK_FUNC(sub_82B4F390);
PPC_FUNC_IMPL(__imp__sub_82B4F390) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b4f3d8
	if (ctx.cr6.eq) goto loc_82B4F3D8;
	// bl 0x8221ee38
	ctx.lr = 0x82B4F3B8;
	sub_8221EE38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b4f428
	if (!ctx.cr6.eq) goto loc_82B4F428;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82b4f42c
	goto loc_82B4F42C;
loc_82B4F3D8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B4F3DC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b4f3dc
	if (!ctx.cr0.eq) goto loc_82B4F3DC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b4f428
	if (!ctx.cr6.eq) goto loc_82B4F428;
	// lwsync 
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4f414
	if (ctx.cr6.eq) goto loc_82B4F414;
	// twi 31,r0,22
loc_82B4F414:
	// bl 0x8221ee38
	ctx.lr = 0x82B4F418;
	sub_8221EE38(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x82b4f42c
	goto loc_82B4F42C;
loc_82B4F428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4F42C:
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

__attribute__((alias("__imp__sub_82B4F444"))) PPC_WEAK_FUNC(sub_82B4F444);
PPC_FUNC_IMPL(__imp__sub_82B4F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F448"))) PPC_WEAK_FUNC(sub_82B4F448);
PPC_FUNC_IMPL(__imp__sub_82B4F448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-13805
	ctx.r3.s64 = ctx.r11.s64 + -13805;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4F454"))) PPC_WEAK_FUNC(sub_82B4F454);
PPC_FUNC_IMPL(__imp__sub_82B4F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F458"))) PPC_WEAK_FUNC(sub_82B4F458);
PPC_FUNC_IMPL(__imp__sub_82B4F458) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3c68
	sub_82CA3C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4F45C"))) PPC_WEAK_FUNC(sub_82B4F45C);
PPC_FUNC_IMPL(__imp__sub_82B4F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F460"))) PPC_WEAK_FUNC(sub_82B4F460);
PPC_FUNC_IMPL(__imp__sub_82B4F460) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca8570
	sub_82CA8570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4F464"))) PPC_WEAK_FUNC(sub_82B4F464);
PPC_FUNC_IMPL(__imp__sub_82B4F464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F468"))) PPC_WEAK_FUNC(sub_82B4F468);
PPC_FUNC_IMPL(__imp__sub_82B4F468) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4F46C"))) PPC_WEAK_FUNC(sub_82B4F46C);
PPC_FUNC_IMPL(__imp__sub_82B4F46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F470"))) PPC_WEAK_FUNC(sub_82B4F470);
PPC_FUNC_IMPL(__imp__sub_82B4F470) {
	PPC_FUNC_PROLOGUE();
	// b 0x82caacd0
	sub_82CAACD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4F474"))) PPC_WEAK_FUNC(sub_82B4F474);
PPC_FUNC_IMPL(__imp__sub_82B4F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F478"))) PPC_WEAK_FUNC(sub_82B4F478);
PPC_FUNC_IMPL(__imp__sub_82B4F478) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b4f4c8
	ctx.lr = 0x82B4F498;
	sub_82B4F4C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4f4b0
	if (ctx.cr6.eq) goto loc_82B4F4B0;
	// bl 0x8221be68
	ctx.lr = 0x82B4F4AC;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B4F4B0:
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

__attribute__((alias("__imp__sub_82B4F4C8"))) PPC_WEAK_FUNC(sub_82B4F4C8);
PPC_FUNC_IMPL(__imp__sub_82B4F4C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-28180
	ctx.r10.s64 = ctx.r11.s64 + -28180;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cbbf60
	ctx.lr = 0x82B4F4F0;
	sub_82CBBF60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82b4f50c
	if (ctx.cr6.eq) goto loc_82B4F50C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b4f50c
	if (ctx.cr6.eq) goto loc_82B4F50C;
	// bl 0x82cbbf60
	ctx.lr = 0x82B4F50C;
	sub_82CBBF60(ctx, base);
loc_82B4F50C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82b4f54c
	if (!ctx.cr6.eq) goto loc_82B4F54C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b4f54c
	if (ctx.cr6.eq) goto loc_82B4F54C;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,-28216
	ctx.r3.s64 = ctx.r10.s64 + -28216;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B4F54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4F54C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4f568
	if (ctx.cr6.eq) goto loc_82B4F568;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4F568:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4f584
	if (ctx.cr6.eq) goto loc_82B4F584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4F584:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-12508
	ctx.r10.s64 = ctx.r11.s64 + -12508;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82B4F5A4"))) PPC_WEAK_FUNC(sub_82B4F5A4);
PPC_FUNC_IMPL(__imp__sub_82B4F5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F5A8"))) PPC_WEAK_FUNC(sub_82B4F5A8);
PPC_FUNC_IMPL(__imp__sub_82B4F5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b4f65c
	if (ctx.cr6.eq) goto loc_82B4F65C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B4F5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4f65c
	if (ctx.cr6.eq) goto loc_82B4F65C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82b4f644
	if (!ctx.cr6.eq) goto loc_82B4F644;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4f630
	if (ctx.cr6.eq) goto loc_82B4F630;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4F630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B4F644:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4f65c
	if (ctx.cr6.eq) goto loc_82B4F65C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4F65C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4F674"))) PPC_WEAK_FUNC(sub_82B4F674);
PPC_FUNC_IMPL(__imp__sub_82B4F674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F678"))) PPC_WEAK_FUNC(sub_82B4F678);
PPC_FUNC_IMPL(__imp__sub_82B4F678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82B4F680;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpld cr6,r9,r3
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r3.u64, ctx.xer);
	// ble cr6,0x82b4f6dc
	if (!ctx.cr6.gt) goto loc_82B4F6DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82B4F6DC:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82b4f6ec
	if (ctx.cr6.eq) goto loc_82B4F6EC;
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
loc_82B4F6EC:
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8221f388
	ctx.lr = 0x82B4F6F4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4f784
	if (ctx.cr6.eq) goto loc_82B4F784;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b56448
	ctx.lr = 0x82B4F718;
	sub_82B56448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4f784
	if (ctx.cr6.eq) goto loc_82B4F784;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82b4f794
	if (ctx.cr6.eq) goto loc_82B4F794;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B4F758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366210
	ctx.lr = 0x82B4F764;
	sub_82366210(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B4F778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82B4F784:
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82B4F794:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4F7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366210
	ctx.lr = 0x82B4F7B8;
	sub_82366210(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B4F7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82B4F7D8"))) PPC_WEAK_FUNC(sub_82B4F7D8);
PPC_FUNC_IMPL(__imp__sub_82B4F7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82B4F7E0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b4f850
	if (ctx.cr6.eq) goto loc_82B4F850;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r10,-28196
	ctx.r10.s64 = ctx.r10.s64 + -28196;
loc_82B4F810:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82b4f810
	if (!ctx.cr6.eq) goto loc_82B4F810;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbc4b8
	ctx.lr = 0x82B4F83C;
	sub_82CBC4B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82b4f860
	if (!ctx.cr6.eq) goto loc_82B4F860;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82cbbf60
	ctx.lr = 0x82B4F850;
	sub_82CBBF60(ctx, base);
loc_82B4F850:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B4F860:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x82b4f924
	if (ctx.cr6.eq) goto loc_82B4F924;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r28,64
	ctx.r28.s64 = 4194304;
loc_82B4F878:
	// rldicl r10,r30,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// blt cr6,0x82b4f8a0
	if (ctx.cr6.lt) goto loc_82B4F8A0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82B4F8A0:
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cc0760
	ctx.lr = 0x82B4F8B8;
	sub_82CC0760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b4f910
	if (!ctx.cr6.eq) goto loc_82B4F910;
	// bl 0x82cc0758
	ctx.lr = 0x82B4F8C4;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82b4f93c
	if (!ctx.cr6.eq) goto loc_82B4F93C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82cc13b8
	ctx.lr = 0x82B4F8E0;
	sub_82CC13B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b4f910
	if (!ctx.cr6.eq) goto loc_82B4F910;
loc_82B4F8E8:
	// bl 0x82cc0758
	ctx.lr = 0x82B4F8EC;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// bne cr6,0x82b4f93c
	if (!ctx.cr6.eq) goto loc_82B4F93C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82cc13b8
	ctx.lr = 0x82B4F908;
	sub_82CC13B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b4f8e8
	if (ctx.cr6.eq) goto loc_82B4F8E8;
loc_82B4F910:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x82b4f878
	if (!ctx.cr0.eq) goto loc_82B4F878;
loc_82B4F924:
	// std r25,40(r26)
	PPC_STORE_U64(ctx.r26.u32 + 40, ctx.r25.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbbf60
	ctx.lr = 0x82B4F930;
	sub_82CBBF60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B4F93C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbbf60
	ctx.lr = 0x82B4F944;
	sub_82CBBF60(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82B4F954"))) PPC_WEAK_FUNC(sub_82B4F954);
PPC_FUNC_IMPL(__imp__sub_82B4F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F958"))) PPC_WEAK_FUNC(sub_82B4F958);
PPC_FUNC_IMPL(__imp__sub_82B4F958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82b4f98c
	if (!ctx.cr6.eq) goto loc_82B4F98C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cc1460
	ctx.lr = 0x82B4F984;
	sub_82CC1460(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_82B4F98C:
	// ld r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4F9A4"))) PPC_WEAK_FUNC(sub_82B4F9A4);
PPC_FUNC_IMPL(__imp__sub_82B4F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4F9A8"))) PPC_WEAK_FUNC(sub_82B4F9A8);
PPC_FUNC_IMPL(__imp__sub_82B4F9A8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82b4f9dc
	if (!ctx.cr6.eq) goto loc_82B4F9DC;
loc_82B4F9D0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82b4fa18
	goto loc_82B4FA18;
loc_82B4F9DC:
	// rldicl r11,r31,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r31,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// bl 0x82cc0fc0
	ctx.lr = 0x82B4F9F4;
	sub_82CC0FC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82b4fa08
	if (!ctx.cr6.eq) goto loc_82B4FA08;
	// bl 0x82cc0758
	ctx.lr = 0x82B4FA00;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b4f9d0
	if (!ctx.cr6.eq) goto loc_82B4F9D0;
loc_82B4FA08:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82cc14d0
	ctx.lr = 0x82B4FA10;
	sub_82CC14D0(ctx, base);
	// std r31,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4FA18:
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

__attribute__((alias("__imp__sub_82B4FA30"))) PPC_WEAK_FUNC(sub_82B4FA30);
PPC_FUNC_IMPL(__imp__sub_82B4FA30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82b4fa64
	if (ctx.cr6.eq) goto loc_82B4FA64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4FA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4FA64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B4FA7C"))) PPC_WEAK_FUNC(sub_82B4FA7C);
PPC_FUNC_IMPL(__imp__sub_82B4FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4FA80"))) PPC_WEAK_FUNC(sub_82B4FA80);
PPC_FUNC_IMPL(__imp__sub_82B4FA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B4FA88;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b4fab0
	if (!ctx.cr6.eq) goto loc_82B4FAB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B4FAB0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	ctx.lr = 0x82B4FAB8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4fb1c
	if (ctx.cr6.eq) goto loc_82B4FB1C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-28136
	ctx.r10.s64 = ctx.r11.s64 + -28136;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B4FAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// sth r29,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r29.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822f6380
	ctx.lr = 0x82B4FB14;
	sub_822F6380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82b4fb20
	goto loc_82B4FB20;
loc_82B4FB1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4FB20:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4fb3c
	if (ctx.cr6.eq) goto loc_82B4FB3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4FB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4FB3C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B4FB48"))) PPC_WEAK_FUNC(sub_82B4FB48);
PPC_FUNC_IMPL(__imp__sub_82B4FB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B4FB50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82b4fb74
	if (ctx.cr6.lt) goto loc_82B4FB74;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x82B4FB74;
	sub_8221BE68(ctx, base);
loc_82B4FB74:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4fba4
	if (ctx.cr6.eq) goto loc_82B4FBA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4FBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4FBA4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// addi r9,r11,-28100
	ctx.r9.s64 = ctx.r11.s64 + -28100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82b4fbc8
	if (ctx.cr6.eq) goto loc_82B4FBC8;
	// bl 0x8221be68
	ctx.lr = 0x82B4FBC4;
	sub_8221BE68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B4FBC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B4FBD0"))) PPC_WEAK_FUNC(sub_82B4FBD0);
PPC_FUNC_IMPL(__imp__sub_82B4FBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B4FBD8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823725e8
	ctx.lr = 0x82B4FBF8;
	sub_823725E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B4FC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82b4fc28
	if (ctx.cr6.lt) goto loc_82B4FC28;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8221be68
	ctx.lr = 0x82B4FC28;
	sub_8221BE68(ctx, base);
loc_82B4FC28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B4FC34"))) PPC_WEAK_FUNC(sub_82B4FC34);
PPC_FUNC_IMPL(__imp__sub_82B4FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4FC38"))) PPC_WEAK_FUNC(sub_82B4FC38);
PPC_FUNC_IMPL(__imp__sub_82B4FC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B4FC40;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82372510
	ctx.lr = 0x82B4FC60;
	sub_82372510(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B4FC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82b4fc90
	if (ctx.cr6.lt) goto loc_82B4FC90;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8221be68
	ctx.lr = 0x82B4FC90;
	sub_8221BE68(ctx, base);
loc_82B4FC90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B4FC9C"))) PPC_WEAK_FUNC(sub_82B4FC9C);
PPC_FUNC_IMPL(__imp__sub_82B4FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4FCA0"))) PPC_WEAK_FUNC(sub_82B4FCA0);
PPC_FUNC_IMPL(__imp__sub_82B4FCA0) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82B4FCB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b4fcb4
	if (!ctx.cr0.eq) goto loc_82B4FCB4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82b4fcf8
	if (!ctx.cr6.eq) goto loc_82B4FCF8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4fcf8
	if (ctx.cr6.eq) goto loc_82B4FCF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4FCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4FCF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B4FD10"))) PPC_WEAK_FUNC(sub_82B4FD10);
PPC_FUNC_IMPL(__imp__sub_82B4FD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,32256
	ctx.r10.s64 = ctx.r10.s64 + 32256;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82B4FD2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b4fd4c
	if (!ctx.cr0.eq) goto loc_82B4FD4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82b4fd2c
	if (!ctx.cr6.eq) goto loc_82B4FD2C;
loc_82B4FD4C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b4fd8c
	if (ctx.cr6.eq) goto loc_82B4FD8C;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-28064
	ctx.r10.s64 = ctx.r10.s64 + -28064;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82B4FD64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b4fd84
	if (!ctx.cr0.eq) goto loc_82B4FD84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82b4fd64
	if (!ctx.cr6.eq) goto loc_82B4FD64;
loc_82B4FD84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82b4fdb4
	if (!ctx.cr6.eq) goto loc_82B4FDB4;
loc_82B4FD8C:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4FDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B4FDB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4FDD4"))) PPC_WEAK_FUNC(sub_82B4FDD4);
PPC_FUNC_IMPL(__imp__sub_82B4FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4FDD8"))) PPC_WEAK_FUNC(sub_82B4FDD8);
PPC_FUNC_IMPL(__imp__sub_82B4FDD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-28100
	ctx.r9.s64 = ctx.r11.s64 + -28100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82b4fe0c
	if (ctx.cr6.eq) goto loc_82B4FE0C;
	// bl 0x8221be68
	ctx.lr = 0x82B4FE08;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B4FE0C:
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

__attribute__((alias("__imp__sub_82B4FE20"))) PPC_WEAK_FUNC(sub_82B4FE20);
PPC_FUNC_IMPL(__imp__sub_82B4FE20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82179920
	sub_82179920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4FE24"))) PPC_WEAK_FUNC(sub_82B4FE24);
PPC_FUNC_IMPL(__imp__sub_82B4FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4FE28"))) PPC_WEAK_FUNC(sub_82B4FE28);
PPC_FUNC_IMPL(__imp__sub_82B4FE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca2c60
	sub_82CA2C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4FE2C"))) PPC_WEAK_FUNC(sub_82B4FE2C);
PPC_FUNC_IMPL(__imp__sub_82B4FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B4FE30"))) PPC_WEAK_FUNC(sub_82B4FE30);
PPC_FUNC_IMPL(__imp__sub_82B4FE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B4FE38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x82B4FE4C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b4feb4
	if (ctx.cr6.eq) goto loc_82B4FEB4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r11,-28476
	ctx.r8.s64 = ctx.r11.s64 + -28476;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-28048
	ctx.r7.s64 = ctx.r10.s64 + -28048;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r6,r9,-28000
	ctx.r6.s64 = ctx.r9.s64 + -28000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82b507b8
	ctx.lr = 0x82B4FEAC;
	sub_82B507B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82b4feb8
	goto loc_82B4FEB8;
loc_82B4FEB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4FEB8:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4fed4
	if (ctx.cr6.eq) goto loc_82B4FED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4FED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4FED4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B4FEE0"))) PPC_WEAK_FUNC(sub_82B4FEE0);
PPC_FUNC_IMPL(__imp__sub_82B4FEE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b4ff30
	ctx.lr = 0x82B4FF00;
	sub_82B4FF30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b4ff18
	if (ctx.cr6.eq) goto loc_82B4FF18;
	// bl 0x8221be68
	ctx.lr = 0x82B4FF14;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B4FF18:
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

__attribute__((alias("__imp__sub_82B4FF30"))) PPC_WEAK_FUNC(sub_82B4FF30);
PPC_FUNC_IMPL(__imp__sub_82B4FF30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-28048
	ctx.r9.s64 = ctx.r11.s64 + -28048;
	// addi r8,r10,-28000
	ctx.r8.s64 = ctx.r10.s64 + -28000;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b4ff7c
	if (ctx.cr6.eq) goto loc_82B4FF7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4FF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B4FF7C:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b4ffa0
	if (ctx.cr6.eq) goto loc_82B4FFA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82b50980
	ctx.lr = 0x82B4FF98;
	sub_82B50980(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x82B4FFA0;
	sub_8221BE68(ctx, base);
loc_82B4FFA0:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28340
	ctx.r8.s64 = ctx.r10.s64 + -28340;
	// addi r7,r9,-28292
	ctx.r7.s64 = ctx.r9.s64 + -28292;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82B4FFE0"))) PPC_WEAK_FUNC(sub_82B4FFE0);
PPC_FUNC_IMPL(__imp__sub_82B4FFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B4FFE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b501a4
	if (ctx.cr6.eq) goto loc_82B501A4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5009c
	if (ctx.cr6.eq) goto loc_82B5009C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b5009c
	if (ctx.cr0.eq) goto loc_82B5009C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b50034
	if (!ctx.cr6.eq) goto loc_82B50034;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b50040
	goto loc_82B50040;
loc_82B50034:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
loc_82B50040:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b50064
	if (ctx.cr6.eq) goto loc_82B50064;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b50068
	if (ctx.cr6.lt) goto loc_82B50068;
loc_82B50064:
	// twi 31,r0,22
loc_82B50068:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B50084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B5009C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5009C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B500B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B500D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b500f4
	if (ctx.cr6.eq) goto loc_82B500F4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B500F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B500F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b50108
	if (!ctx.cr6.eq) goto loc_82B50108;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b50114
	goto loc_82B50114;
loc_82B50108:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_82B50114:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b50164
	if (ctx.cr6.eq) goto loc_82B50164;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b50164
	if (!ctx.cr6.lt) goto loc_82B50164;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b50148
	if (ctx.cr6.eq) goto loc_82B50148;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50148;
	sub_82B50D78(ctx, base);
loc_82B50148:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82b501b0
	ctx.lr = 0x82B50158;
	sub_82B501B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B50164:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b50174
	if (!ctx.cr6.gt) goto loc_82B50174;
	// twi 31,r0,22
loc_82B50174:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82b508a0
	ctx.lr = 0x82B50190;
	sub_82B508A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b501b0
	ctx.lr = 0x82B50198;
	sub_82B501B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B501A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B501B0"))) PPC_WEAK_FUNC(sub_82B501B0);
PPC_FUNC_IMPL(__imp__sub_82B501B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b501e0
	if (ctx.cr6.eq) goto loc_82B501E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B501E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B501E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b501fc
	if (ctx.cr6.eq) goto loc_82B501FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B501FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B501FC:
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

__attribute__((alias("__imp__sub_82B50210"))) PPC_WEAK_FUNC(sub_82B50210);
PPC_FUNC_IMPL(__imp__sub_82B50210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B50218;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b50234
	if (!ctx.cr6.gt) goto loc_82B50234;
	// twi 31,r0,22
loc_82B50234:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B50238:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b5024c
	if (!ctx.cr6.gt) goto loc_82B5024C;
	// twi 31,r0,22
loc_82B5024C:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b50258
	if (ctx.cr6.eq) goto loc_82B50258;
	// twi 31,r0,22
loc_82B50258:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b502b4
	if (ctx.cr6.eq) goto loc_82B502B4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b5026c
	if (ctx.cr6.lt) goto loc_82B5026C;
	// twi 31,r0,22
loc_82B5026C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82b50298
	if (ctx.cr6.lt) goto loc_82B50298;
	// beq cr6,0x82b5029c
	if (ctx.cr6.eq) goto loc_82B5029C;
	// li r3,-259
	ctx.r3.s64 = -259;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B50298:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82B5029C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b502ac
	if (ctx.cr6.lt) goto loc_82B502AC;
	// twi 31,r0,22
loc_82B502AC:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82b50238
	goto loc_82B50238;
loc_82B502B4:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B502C4"))) PPC_WEAK_FUNC(sub_82B502C4);
PPC_FUNC_IMPL(__imp__sub_82B502C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B502C8"))) PPC_WEAK_FUNC(sub_82B502C8);
PPC_FUNC_IMPL(__imp__sub_82B502C8) {
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
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b502f4
	if (!ctx.cr6.gt) goto loc_82B502F4;
	// twi 31,r0,22
loc_82B502F4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b50308
	if (!ctx.cr6.gt) goto loc_82B50308;
	// twi 31,r0,22
loc_82B50308:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b50314
	if (ctx.cr6.eq) goto loc_82B50314;
	// twi 31,r0,22
loc_82B50314:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b50364
	if (ctx.cr6.eq) goto loc_82B50364;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50328
	if (ctx.cr6.lt) goto loc_82B50328;
	// twi 31,r0,22
loc_82B50328:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5033C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82b5035c
	if (!ctx.cr6.eq) goto loc_82B5035C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50354
	if (ctx.cr6.lt) goto loc_82B50354;
	// twi 31,r0,22
loc_82B50354:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82b502f4
	goto loc_82B502F4;
loc_82B5035C:
	// li r3,-259
	ctx.r3.s64 = -259;
	// b 0x82b50368
	goto loc_82B50368;
loc_82B50364:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B50368:
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

__attribute__((alias("__imp__sub_82B50380"))) PPC_WEAK_FUNC(sub_82B50380);
PPC_FUNC_IMPL(__imp__sub_82B50380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B50394"))) PPC_WEAK_FUNC(sub_82B50394);
PPC_FUNC_IMPL(__imp__sub_82B50394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B50398"))) PPC_WEAK_FUNC(sub_82B50398);
PPC_FUNC_IMPL(__imp__sub_82B50398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B503A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b50438
	if (ctx.cr6.eq) goto loc_82B50438;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b503cc
	if (!ctx.cr6.gt) goto loc_82B503CC;
	// twi 31,r0,22
loc_82B503CC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b503e0
	if (!ctx.cr6.gt) goto loc_82B503E0;
	// twi 31,r0,22
loc_82B503E0:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b503ec
	if (ctx.cr6.eq) goto loc_82B503EC;
	// twi 31,r0,22
loc_82B503EC:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b50438
	if (ctx.cr6.eq) goto loc_82B50438;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50400
	if (ctx.cr6.lt) goto loc_82B50400;
	// twi 31,r0,22
loc_82B50400:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82b5043c
	if (ctx.cr6.lt) goto loc_82B5043C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50430
	if (ctx.cr6.lt) goto loc_82B50430;
	// twi 31,r0,22
loc_82B50430:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82b503cc
	goto loc_82B503CC;
loc_82B50438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B5043C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B50444"))) PPC_WEAK_FUNC(sub_82B50444);
PPC_FUNC_IMPL(__imp__sub_82B50444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B50448"))) PPC_WEAK_FUNC(sub_82B50448);
PPC_FUNC_IMPL(__imp__sub_82B50448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B50450;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b5046c
	if (!ctx.cr6.gt) goto loc_82B5046C;
	// twi 31,r0,22
loc_82B5046C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B50470:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b50484
	if (!ctx.cr6.gt) goto loc_82B50484;
	// twi 31,r0,22
loc_82B50484:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b50490
	if (ctx.cr6.eq) goto loc_82B50490;
	// twi 31,r0,22
loc_82B50490:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b504ec
	if (ctx.cr6.eq) goto loc_82B504EC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b504a4
	if (ctx.cr6.lt) goto loc_82B504A4;
	// twi 31,r0,22
loc_82B504A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B504B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82b504d0
	if (ctx.cr6.lt) goto loc_82B504D0;
	// beq cr6,0x82b504d4
	if (ctx.cr6.eq) goto loc_82B504D4;
	// li r3,-259
	ctx.r3.s64 = -259;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B504D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82B504D4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b504e4
	if (ctx.cr6.lt) goto loc_82B504E4;
	// twi 31,r0,22
loc_82B504E4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82b50470
	goto loc_82B50470;
loc_82B504EC:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B504FC"))) PPC_WEAK_FUNC(sub_82B504FC);
PPC_FUNC_IMPL(__imp__sub_82B504FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B50500"))) PPC_WEAK_FUNC(sub_82B50500);
PPC_FUNC_IMPL(__imp__sub_82B50500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B50508;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b50528
	if (!ctx.cr6.gt) goto loc_82B50528;
	// twi 31,r0,22
loc_82B50528:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b5053c
	if (!ctx.cr6.gt) goto loc_82B5053C;
	// twi 31,r0,22
loc_82B5053C:
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b50548
	if (ctx.cr6.eq) goto loc_82B50548;
	// twi 31,r0,22
loc_82B50548:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b5069c
	if (ctx.cr6.eq) goto loc_82B5069C;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b5055c
	if (ctx.cr6.lt) goto loc_82B5055C;
	// twi 31,r0,22
loc_82B5055C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r9.u32);
loc_82B5057C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b50590
	if (!ctx.cr6.gt) goto loc_82B50590;
	// twi 31,r0,22
loc_82B50590:
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b5059c
	if (ctx.cr6.eq) goto loc_82B5059C;
	// twi 31,r0,22
loc_82B5059C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b5069c
	if (ctx.cr6.eq) goto loc_82B5069C;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b505d8
	if (ctx.cr6.eq) goto loc_82B505D8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b505c0
	if (ctx.cr6.lt) goto loc_82B505C0;
	// twi 31,r0,22
loc_82B505C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B505D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b505f8
	goto loc_82B505F8;
loc_82B505D8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b505e4
	if (ctx.cr6.lt) goto loc_82B505E4;
	// twi 31,r0,22
loc_82B505E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B505F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B505F8:
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5062c
	if (ctx.cr6.eq) goto loc_82B5062C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50624
	if (ctx.cr6.lt) goto loc_82B50624;
	// twi 31,r0,22
loc_82B50624:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// b 0x82b5057c
	goto loc_82B5057C;
loc_82B5062C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b50640
	if (!ctx.cr6.gt) goto loc_82B50640;
	// twi 31,r0,22
loc_82B50640:
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b5064c
	if (ctx.cr6.eq) goto loc_82B5064C;
	// twi 31,r0,22
loc_82B5064C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b50690
	if (ctx.cr6.eq) goto loc_82B50690;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50664
	if (ctx.cr6.lt) goto loc_82B50664;
	// twi 31,r0,22
loc_82B50664:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82b50688
	if (ctx.cr6.gt) goto loc_82B50688;
	// twi 31,r0,22
loc_82B50688:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// b 0x82b5062c
	goto loc_82B5062C;
loc_82B50690:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B5069C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B506A8"))) PPC_WEAK_FUNC(sub_82B506A8);
PPC_FUNC_IMPL(__imp__sub_82B506A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x822f54c8
	ctx.lr = 0x82B506BC;
	sub_822F54C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B506D0"))) PPC_WEAK_FUNC(sub_82B506D0);
PPC_FUNC_IMPL(__imp__sub_82B506D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B506D8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b506f8
	if (!ctx.cr6.gt) goto loc_82B506F8;
	// twi 31,r0,22
loc_82B506F8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B506FC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b50710
	if (!ctx.cr6.gt) goto loc_82B50710;
	// twi 31,r0,22
loc_82B50710:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b5071c
	if (ctx.cr6.eq) goto loc_82B5071C;
	// twi 31,r0,22
loc_82B5071C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b507a8
	if (ctx.cr6.eq) goto loc_82B507A8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// blt cr6,0x82b50738
	if (ctx.cr6.lt) goto loc_82B50738;
	// twi 31,r0,22
loc_82B50738:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82b50798
	if (ctx.cr6.lt) goto loc_82B50798;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50768
	if (ctx.cr6.lt) goto loc_82B50768;
	// twi 31,r0,22
loc_82B50768:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5077C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b50790
	if (ctx.cr6.lt) goto loc_82B50790;
	// twi 31,r0,22
loc_82B50790:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82b506fc
	goto loc_82B506FC;
loc_82B50798:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B507A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B507B4"))) PPC_WEAK_FUNC(sub_82B507B4);
PPC_FUNC_IMPL(__imp__sub_82B507B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B507B8"))) PPC_WEAK_FUNC(sub_82B507B8);
PPC_FUNC_IMPL(__imp__sub_82B507B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B507C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b507e8
	if (ctx.cr6.eq) goto loc_82B507E8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82b50898
	if (!ctx.cr6.lt) goto loc_82B50898;
loc_82B507E8:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a87220
	ctx.lr = 0x82B507F4;
	sub_82A87220(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82b50810
	if (!ctx.cr6.gt) goto loc_82B50810;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82B50810:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b50844
	if (ctx.cr6.eq) goto loc_82B50844;
	// subf r29,r27,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
loc_82B50820:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b50834
	if (ctx.cr6.eq) goto loc_82B50834;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50834;
	sub_82B50D78(ctx, base);
loc_82B50834:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82b50820
	if (!ctx.cr6.eq) goto loc_82B50820;
loc_82B50844:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b50858
	if (!ctx.cr6.eq) goto loc_82B50858;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82b50864
	goto loc_82B50864;
loc_82B50858:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r31,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
loc_82B50864:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b50880
	if (ctx.cr6.eq) goto loc_82B50880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82b50980
	ctx.lr = 0x82B50878;
	sub_82B50980(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x82B50880;
	sub_8221BE68(ctx, base);
loc_82B50880:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r10,r27,40
	ctx.r10.s64 = ctx.r27.s64 + 40;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_82B50898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B508A0"))) PPC_WEAK_FUNC(sub_82B508A0);
PPC_FUNC_IMPL(__imp__sub_82B508A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B508A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b508d8
	if (ctx.cr6.eq) goto loc_82B508D8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b508e0
	if (!ctx.cr0.eq) goto loc_82B508E0;
loc_82B508D8:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b50910
	goto loc_82B50910;
loc_82B508E0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b508ec
	if (!ctx.cr6.gt) goto loc_82B508EC;
	// twi 31,r0,22
loc_82B508EC:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b50900
	if (ctx.cr6.eq) goto loc_82B50900;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b50904
	if (ctx.cr6.eq) goto loc_82B50904;
loc_82B50900:
	// twi 31,r0,22
loc_82B50904:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 3;
loc_82B50910:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b50a00
	ctx.lr = 0x82B5091C;
	sub_82B50A00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b50930
	if (!ctx.cr6.gt) goto loc_82B50930;
	// twi 31,r0,22
loc_82B50930:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82b50960
	if (ctx.cr6.gt) goto loc_82B50960;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b50964
	if (!ctx.cr6.lt) goto loc_82B50964;
loc_82B50960:
	// twi 31,r0,22
loc_82B50964:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B5097C"))) PPC_WEAK_FUNC(sub_82B5097C);
PPC_FUNC_IMPL(__imp__sub_82B5097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B50980"))) PPC_WEAK_FUNC(sub_82B50980);
PPC_FUNC_IMPL(__imp__sub_82B50980) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b509e8
	if (ctx.cr6.eq) goto loc_82B509E8;
loc_82B509A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b509c0
	if (ctx.cr6.eq) goto loc_82B509C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B509C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B509C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b509dc
	if (ctx.cr6.eq) goto loc_82B509DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B509DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B509DC:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82b509a4
	if (!ctx.cr6.eq) goto loc_82B509A4;
loc_82B509E8:
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

__attribute__((alias("__imp__sub_82B50A00"))) PPC_WEAK_FUNC(sub_82B50A00);
PPC_FUNC_IMPL(__imp__sub_82B50A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82B50A08;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b50d78
	ctx.lr = 0x82B50A20;
	sub_82B50D78(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b50a34
	if (!ctx.cr6.eq) goto loc_82B50A34;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b50a40
	goto loc_82B50A40;
loc_82B50A34:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_82B50A40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b50a50
	if (!ctx.cr6.eq) goto loc_82B50A50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b50a5c
	goto loc_82B50A5C;
loc_82B50A50:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
loc_82B50A5C:
	// lis r8,8191
	ctx.r8.s64 = 536805376;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x82b50a84
	if (!ctx.cr6.lt) goto loc_82B50A84;
	// bl 0x82684b38
	ctx.lr = 0x82B50A74;
	sub_82684B38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b501b0
	ctx.lr = 0x82B50A7C;
	sub_82B501B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B50A84:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b50a94
	if (!ctx.cr6.eq) goto loc_82B50A94;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b50aa0
	goto loc_82B50AA0;
loc_82B50A94:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
loc_82B50AA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b50c14
	if (!ctx.cr6.lt) goto loc_82B50C14;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b50ac4
	if (ctx.cr6.lt) goto loc_82B50AC4;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82B50AC4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b50ad4
	if (!ctx.cr6.eq) goto loc_82B50AD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b50ae0
	goto loc_82B50AE0;
loc_82B50AD4:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
loc_82B50AE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b50b0c
	if (!ctx.cr6.lt) goto loc_82B50B0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b50afc
	if (!ctx.cr6.eq) goto loc_82B50AFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b50b08
	goto loc_82B50B08;
loc_82B50AFC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
loc_82B50B08:
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_82B50B0C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a87220
	ctx.lr = 0x82B50B18;
	sub_82A87220(ctx, base);
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82b50b54
	if (ctx.cr6.eq) goto loc_82B50B54;
loc_82B50B30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b50b44
	if (ctx.cr6.eq) goto loc_82B50B44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50B44;
	sub_82B50D78(ctx, base);
loc_82B50B44:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b50b30
	if (!ctx.cr6.eq) goto loc_82B50B30;
loc_82B50B54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b50b68
	if (ctx.cr6.eq) goto loc_82B50B68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50B68;
	sub_82B50D78(ctx, base);
loc_82B50B68:
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b50ba8
	if (ctx.cr6.eq) goto loc_82B50BA8;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
loc_82B50B84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b50b98
	if (ctx.cr6.eq) goto loc_82B50B98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50B98;
	sub_82B50D78(ctx, base);
loc_82B50B98:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82b50b84
	if (!ctx.cr6.eq) goto loc_82B50B84;
loc_82B50BA8:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b50bbc
	if (!ctx.cr6.eq) goto loc_82B50BBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b50bc8
	goto loc_82B50BC8;
loc_82B50BBC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
loc_82B50BC8:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b50be8
	if (ctx.cr6.eq) goto loc_82B50BE8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x82b50980
	ctx.lr = 0x82B50BE0;
	sub_82B50980(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x82B50BE8;
	sub_8221BE68(ctx, base);
loc_82B50BE8:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// bl 0x82b501b0
	ctx.lr = 0x82B50C0C;
	sub_82B501B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B50C14:
	// lwz r27,188(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82b50cdc
	if (!ctx.cr6.lt) goto loc_82B50CDC;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b50c60
	if (ctx.cr6.eq) goto loc_82B50C60;
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
loc_82B50C3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b50c50
	if (ctx.cr6.eq) goto loc_82B50C50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50C50;
	sub_82B50D78(ctx, base);
loc_82B50C50:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82b50c3c
	if (!ctx.cr6.eq) goto loc_82B50C3C;
loc_82B50C60:
	// lwz r30,8(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// subfic r31,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r31.s64 = 1 - ctx.r10.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b50c98
	if (ctx.cr6.eq) goto loc_82B50C98;
loc_82B50C78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b50c8c
	if (ctx.cr6.eq) goto loc_82B50C8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50C8C;
	sub_82B50D78(ctx, base);
loc_82B50C8C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82b50c78
	if (!ctx.cr0.eq) goto loc_82B50C78;
loc_82B50C98:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b50d64
	if (ctx.cr6.eq) goto loc_82B50D64;
loc_82B50CB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b50df0
	ctx.lr = 0x82B50CC0;
	sub_82B50DF0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82b50cb4
	if (!ctx.cr6.eq) goto loc_82B50CB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b501b0
	ctx.lr = 0x82B50CD4;
	sub_82B501B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B50CDC:
	// addi r31,r28,-8
	ctx.r31.s64 = ctx.r28.s64 + -8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b50d14
	if (ctx.cr6.eq) goto loc_82B50D14;
loc_82B50CF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b50d04
	if (ctx.cr6.eq) goto loc_82B50D04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b50d78
	ctx.lr = 0x82B50D04;
	sub_82B50D78(ctx, base);
loc_82B50D04:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82b50cf0
	if (!ctx.cr6.eq) goto loc_82B50CF0;
loc_82B50D14:
	// stw r30,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b50d3c
	if (ctx.cr6.eq) goto loc_82B50D3C;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82B50D24:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82b50df0
	ctx.lr = 0x82B50D34;
	sub_82B50DF0(ctx, base);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82b50d24
	if (!ctx.cr6.eq) goto loc_82B50D24;
loc_82B50D3C:
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b50d64
	if (ctx.cr6.eq) goto loc_82B50D64;
loc_82B50D4C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b50df0
	ctx.lr = 0x82B50D58;
	sub_82B50DF0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82b50d4c
	if (!ctx.cr6.eq) goto loc_82B50D4C;
loc_82B50D64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b501b0
	ctx.lr = 0x82B50D6C;
	sub_82B501B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82B50D74"))) PPC_WEAK_FUNC(sub_82B50D74);
PPC_FUNC_IMPL(__imp__sub_82B50D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B50D78"))) PPC_WEAK_FUNC(sub_82B50D78);
PPC_FUNC_IMPL(__imp__sub_82B50D78) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82b50db4
	if (ctx.cr6.eq) goto loc_82B50DB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B50DB4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82b50dd4
	if (ctx.cr6.eq) goto loc_82B50DD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B50DD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B50DF0"))) PPC_WEAK_FUNC(sub_82B50DF0);
PPC_FUNC_IMPL(__imp__sub_82B50DF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8260c130
	ctx.lr = 0x82B50E10;
	sub_8260C130(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b50e2c
	if (ctx.cr6.eq) goto loc_82B50E2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B50E2C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b50e48
	if (ctx.cr6.eq) goto loc_82B50E48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B50E48:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B50E6C"))) PPC_WEAK_FUNC(sub_82B50E6C);
PPC_FUNC_IMPL(__imp__sub_82B50E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B50E70"))) PPC_WEAK_FUNC(sub_82B50E70);
PPC_FUNC_IMPL(__imp__sub_82B50E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82B50E78;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r11,-28476
	ctx.r8.s64 = ctx.r11.s64 + -28476;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r7,r10,30536
	ctx.r7.s64 = ctx.r10.s64 + 30536;
	// addi r6,r9,-27956
	ctx.r6.s64 = ctx.r9.s64 + -27956;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// beq cr6,0x82b50ee4
	if (ctx.cr6.eq) goto loc_82B50EE4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B50EE4:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// beq cr6,0x82b50f08
	if (ctx.cr6.eq) goto loc_82B50F08;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B50F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B50F08:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// bl 0x832b258c
	ctx.lr = 0x82B50F2C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b50f74
	if (!ctx.cr6.eq) goto loc_82B50F74;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b50f58
	if (ctx.cr6.eq) goto loc_82B50F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b51380
	ctx.lr = 0x82B50F4C;
	sub_82B51380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82B50F58:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b44360
	ctx.lr = 0x82B50F64;
	sub_82B44360(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_82B50F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82B50F80"))) PPC_WEAK_FUNC(sub_82B50F80);
PPC_FUNC_IMPL(__imp__sub_82B50F80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b50fd0
	ctx.lr = 0x82B50FA0;
	sub_82B50FD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b50fb8
	if (ctx.cr6.eq) goto loc_82B50FB8;
	// bl 0x8221be68
	ctx.lr = 0x82B50FB4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B50FB8:
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

__attribute__((alias("__imp__sub_82B50FD0"))) PPC_WEAK_FUNC(sub_82B50FD0);
PPC_FUNC_IMPL(__imp__sub_82B50FD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,30536
	ctx.r9.s64 = ctx.r11.s64 + 30536;
	// addi r8,r10,-27956
	ctx.r8.s64 = ctx.r10.s64 + -27956;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51018
	if (ctx.cr6.eq) goto loc_82B51018;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B51018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B51018:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51034
	if (ctx.cr6.eq) goto loc_82B51034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B51034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B51034:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51050
	if (ctx.cr6.eq) goto loc_82B51050;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B51050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B51050:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-28340
	ctx.r9.s64 = ctx.r11.s64 + -28340;
	// addi r8,r10,-28292
	ctx.r8.s64 = ctx.r10.s64 + -28292;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B5107C"))) PPC_WEAK_FUNC(sub_82B5107C);
PPC_FUNC_IMPL(__imp__sub_82B5107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51080"))) PPC_WEAK_FUNC(sub_82B51080);
PPC_FUNC_IMPL(__imp__sub_82B51080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B51088;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82B510A0;
	sub_82200688(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82b51140
	if (ctx.cr6.eq) goto loc_82B51140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B510C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b510e0
	if (ctx.cr6.eq) goto loc_82B510E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B510DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B510E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82b51120
	if (ctx.cr6.eq) goto loc_82B51120;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82b51114
	if (ctx.cr6.eq) goto loc_82B51114;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51108
	if (ctx.cr6.eq) goto loc_82B51108;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B51108;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B51108:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B51114:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c6f8e8
	ctx.lr = 0x82B5111C;
	sub_82C6F8E8(ctx, base);
	// b 0x82b51144
	goto loc_82B51144;
loc_82B51120:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51134
	if (ctx.cr6.eq) goto loc_82B51134;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B51134;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B51134:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B51140:
	// lbz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_82B51144:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5115c
	if (ctx.cr6.eq) goto loc_82B5115C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B51158;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B5115C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b51380
	ctx.lr = 0x82B51164;
	sub_82B51380(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5117c
	if (ctx.cr6.eq) goto loc_82B5117C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B5117C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B5117C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B51188"))) PPC_WEAK_FUNC(sub_82B51188);
PPC_FUNC_IMPL(__imp__sub_82B51188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B51190;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82B511A8;
	sub_82200688(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82b51228
	if (ctx.cr6.eq) goto loc_82B51228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B511CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B511E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b511fc
	if (ctx.cr6.eq) goto loc_82B511FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B511F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B511FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82b5122c
	if (!ctx.cr6.lt) goto loc_82B5122C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5121c
	if (ctx.cr6.eq) goto loc_82B5121C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B5121C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B5121C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B51228:
	// lbz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_82B5122C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51244
	if (ctx.cr6.eq) goto loc_82B51244;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B51240;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B51244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b51380
	ctx.lr = 0x82B5124C;
	sub_82B51380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b51270
	if (!ctx.cr6.eq) goto loc_82B51270;
loc_82B51254:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbc678
	ctx.lr = 0x82B51260;
	sub_82CBC678(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b51380
	ctx.lr = 0x82B51268;
	sub_82B51380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b51254
	if (ctx.cr6.eq) goto loc_82B51254;
loc_82B51270:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B51284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b5129c
	if (ctx.cr6.eq) goto loc_82B5129C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82B5129C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B5129C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B512A8"))) PPC_WEAK_FUNC(sub_82B512A8);
PPC_FUNC_IMPL(__imp__sub_82B512A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b512d4
	if (ctx.cr6.eq) goto loc_82B512D4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82B512D4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B512E0"))) PPC_WEAK_FUNC(sub_82B512E0);
PPC_FUNC_IMPL(__imp__sub_82B512E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B512F4"))) PPC_WEAK_FUNC(sub_82B512F4);
PPC_FUNC_IMPL(__imp__sub_82B512F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B512F8"))) PPC_WEAK_FUNC(sub_82B512F8);
PPC_FUNC_IMPL(__imp__sub_82B512F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B5130C"))) PPC_WEAK_FUNC(sub_82B5130C);
PPC_FUNC_IMPL(__imp__sub_82B5130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51310"))) PPC_WEAK_FUNC(sub_82B51310);
PPC_FUNC_IMPL(__imp__sub_82B51310) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b51328
	if (!ctx.cr6.eq) goto loc_82B51328;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82B51328:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51338"))) PPC_WEAK_FUNC(sub_82B51338);
PPC_FUNC_IMPL(__imp__sub_82B51338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x822f54c8
	ctx.lr = 0x82B5134C;
	sub_822F54C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51360"))) PPC_WEAK_FUNC(sub_82B51360);
PPC_FUNC_IMPL(__imp__sub_82B51360) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5137C"))) PPC_WEAK_FUNC(sub_82B5137C);
PPC_FUNC_IMPL(__imp__sub_82B5137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51380"))) PPC_WEAK_FUNC(sub_82B51380);
PPC_FUNC_IMPL(__imp__sub_82B51380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b5143c
	if (ctx.cr6.eq) goto loc_82B5143C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b513c4
	if (!ctx.cr6.eq) goto loc_82B513C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B513C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82b44360
	ctx.lr = 0x82B513D0;
	sub_82B44360(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b51454
	if (ctx.cr6.eq) goto loc_82B51454;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r7,28708
	ctx.r6.s64 = ctx.r7.s64 + 28708;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B51410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// beq cr6,0x82b5143c
	if (ctx.cr6.eq) goto loc_82B5143C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5143C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5143C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B51454:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51474"))) PPC_WEAK_FUNC(sub_82B51474);
PPC_FUNC_IMPL(__imp__sub_82B51474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51478"))) PPC_WEAK_FUNC(sub_82B51478);
PPC_FUNC_IMPL(__imp__sub_82B51478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B51480;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51690
	if (ctx.cr6.eq) goto loc_82B51690;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x82b51690
	if (!ctx.cr6.eq) goto loc_82B51690;
	// cmplwi cr6,r10,56
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56, ctx.xer);
	// bne cr6,0x82b51690
	if (!ctx.cr6.eq) goto loc_82B51690;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b514bc
	if (!ctx.cr6.eq) goto loc_82B514BC;
loc_82B514B0:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B514BC:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b514e0
	if (!ctx.cr6.eq) goto loc_82B514E0;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// addi r10,r11,29736
	ctx.r10.s64 = ctx.r11.s64 + 29736;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
loc_82B514E0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b514f8
	if (!ctx.cr6.eq) goto loc_82B514F8;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r10,r11,29744
	ctx.r10.s64 = ctx.r11.s64 + 29744;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
loc_82B514F8:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82b51508
	if (!ctx.cr6.eq) goto loc_82B51508;
	// li r28,6
	ctx.r28.s64 = 6;
	// b 0x82b51518
	goto loc_82B51518;
loc_82B51508:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82b514b0
	if (ctx.cr6.lt) goto loc_82B514B0;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bgt cr6,0x82b514b0
	if (ctx.cr6.gt) goto loc_82B514B0;
loc_82B51518:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,5824
	ctx.r5.s64 = 5824;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B51530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b51684
	if (ctx.cr6.eq) goto loc_82B51684;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r11,32767
	ctx.r11.s64 = 32767;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B51594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B515B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B515CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,16384
	ctx.r10.s64 = 16384;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,5788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5788, ctx.r10.u32);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B515F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// beq cr6,0x82b51668
	if (ctx.cr6.eq) goto loc_82B51668;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b51668
	if (ctx.cr6.eq) goto loc_82B51668;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b51668
	if (ctx.cr6.eq) goto loc_82B51668;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51668
	if (ctx.cr6.eq) goto loc_82B51668;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,5796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5796, ctx.r10.u32);
	// stw r9,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r8,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r8.u8);
	// bl 0x82b516a0
	ctx.lr = 0x82B51660;
	sub_82B516A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B51668:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r10,666
	ctx.r10.s64 = 666;
	// addi r9,r11,-24696
	ctx.r9.s64 = ctx.r11.s64 + -24696;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// bl 0x82b52500
	ctx.lr = 0x82B51684;
	sub_82B52500(ctx, base);
loc_82B51684:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B51690:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B5169C"))) PPC_WEAK_FUNC(sub_82B5169C);
PPC_FUNC_IMPL(__imp__sub_82B5169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B516A0"))) PPC_WEAK_FUNC(sub_82B516A0);
PPC_FUNC_IMPL(__imp__sub_82B516A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B516A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51834
	if (ctx.cr6.eq) goto loc_82B51834;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b51834
	if (ctx.cr6.eq) goto loc_82B51834;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51834
	if (ctx.cr6.eq) goto loc_82B51834;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51834
	if (ctx.cr6.eq) goto loc_82B51834;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82b51710
	if (!ctx.cr6.lt) goto loc_82B51710;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82B51710:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r5,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r7,r4,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// addi r11,r9,28688
	ctx.r11.s64 = ctx.r9.s64 + 28688;
	// addi r6,r10,113
	ctx.r6.s64 = ctx.r10.s64 + 113;
	// xori r5,r7,1
	ctx.r5.u64 = ctx.r7.u64 ^ 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// addi r9,r31,2440
	ctx.r9.s64 = ctx.r31.s64 + 2440;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r7,r31,2684
	ctx.r7.s64 = ctx.r31.s64 + 2684;
	// stw r4,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r4.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2840, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2852, ctx.r9.u32);
	// stw r10,2860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2860, ctx.r10.u32);
	// stw r7,2864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2864, ctx.r7.u32);
	// stw r11,2872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2872, ctx.r11.u32);
	// sth r30,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r30.u16);
	// stw r30,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r30.u32);
	// stw r6,5812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5812, ctx.r6.u32);
	// bl 0x82b57af0
	ctx.lr = 0x82B51790;
	sub_82B57AF0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// sth r30,-2(r8)
	PPC_STORE_U16(ctx.r8.u32 + -2, ctx.r30.u16);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3190
	ctx.lr = 0x82B517C8;
	sub_82CA3190(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r6,-29656
	ctx.r11.s64 = ctx.r6.s64 + -29656;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r7,r10,r4
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// lhzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// lhzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B51834:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B51840"))) PPC_WEAK_FUNC(sub_82B51840);
PPC_FUNC_IMPL(__imp__sub_82B51840) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b51870
	if (!ctx.cr6.gt) goto loc_82B51870;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82B51870:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b518e4
	if (ctx.cr6.eq) goto loc_82B518E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ca2c60
	ctx.lr = 0x82B51888;
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r6,r30,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b518e4
	if (!ctx.cr6.eq) goto loc_82B518E4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82B518E4:
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

__attribute__((alias("__imp__sub_82B518FC"))) PPC_WEAK_FUNC(sub_82B518FC);
PPC_FUNC_IMPL(__imp__sub_82B518FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51900"))) PPC_WEAK_FUNC(sub_82B51900);
PPC_FUNC_IMPL(__imp__sub_82B51900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82B51908;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b524f0
	if (ctx.cr6.eq) goto loc_82B524F0;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b524f0
	if (ctx.cr6.eq) goto loc_82B524F0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bgt cr6,0x82b524f0
	if (ctx.cr6.gt) goto loc_82B524F0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82b524f0
	if (ctx.cr6.lt) goto loc_82B524F0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b524e4
	if (ctx.cr6.eq) goto loc_82B524E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b5195c
	if (!ctx.cr6.eq) goto loc_82B5195C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b524e4
	if (!ctx.cr6.eq) goto loc_82B524E4;
loc_82B5195C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// bne cr6,0x82b51970
	if (!ctx.cr6.eq) goto loc_82B51970;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bne cr6,0x82b524e4
	if (!ctx.cr6.eq) goto loc_82B524E4;
loc_82B51970:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b51994
	if (!ctx.cr6.eq) goto loc_82B51994;
loc_82B5197C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B51994:
	// lwz r26,40(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,113
	ctx.r27.s64 = 113;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// bne cr6,0x82b51e08
	if (!ctx.cr6.eq) goto loc_82B51E08;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82b51cb8
	if (!ctx.cr6.eq) goto loc_82B51CB8;
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,139
	ctx.r9.s64 = 139;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r7,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bne cr6,0x82b51ae0
	if (!ctx.cr6.eq) goto loc_82B51AE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r28,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r28,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r28,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r28,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82b51a90
	if (!ctx.cr6.eq) goto loc_82B51A90;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82b51aac
	goto loc_82B51AAC;
loc_82B51A90:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x82b51aa8
	if (!ctx.cr6.lt) goto loc_82B51AA8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bge cr6,0x82b51aac
	if (!ctx.cr6.lt) goto loc_82B51AAC;
loc_82B51AA8:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82B51AAC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,11
	ctx.r7.s64 = 11;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r7,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u8);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// b 0x82b51e08
	goto loc_82B51E08;
loc_82B51AE0:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r4,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// subfe r7,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r5.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r5,r3
	ctx.r5.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stbx r3,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r4,6(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// stbx r4,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u8);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82b51bd8
	if (!ctx.cr6.eq) goto loc_82B51BD8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82b51bf4
	goto loc_82B51BF4;
loc_82B51BD8:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x82b51bf0
	if (!ctx.cr6.lt) goto loc_82B51BF0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bge cr6,0x82b51bf4
	if (!ctx.cr6.lt) goto loc_82B51BF4;
loc_82B51BF0:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82B51BF4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r5,12(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51c68
	if (ctx.cr6.eq) goto loc_82B51C68;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r11,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r6,22(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 22);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
loc_82B51C68:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b51ca8
	if (ctx.cr6.eq) goto loc_82B51CA8;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b51ca0
	if (!ctx.cr6.eq) goto loc_82B51CA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82b51e08
	goto loc_82B51E08;
loc_82B51CA0:
	// bl 0x82b57760
	ctx.lr = 0x82B51CA4;
	sub_82B57760(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B51CA8:
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82b51e08
	goto loc_82B51E08;
loc_82B51CB8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r9,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// bge cr6,0x82b51d08
	if (!ctx.cr6.lt) goto loc_82B51D08;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82b51d08
	if (ctx.cr6.lt) goto loc_82B51D08;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82b51cf0
	if (!ctx.cr6.lt) goto loc_82B51CF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b51d0c
	goto loc_82B51D0C;
loc_82B51CF0:
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82b51d0c
	goto loc_82B51D0C;
loc_82B51D08:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B51D0C:
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51d24
	if (ctx.cr6.eq) goto loc_82B51D24;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
loc_82B51D24:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r6,2114
	ctx.r6.s64 = 138543104;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// ori r3,r6,4229
	ctx.r3.u64 = ctx.r6.u64 | 4229;
	// mulhwu r11,r4,r3
	ctx.r11.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r6,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stbx r8,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r8.u8);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r6,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b51e00
	if (ctx.cr6.eq) goto loc_82B51E00;
	// lhz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lhz r4,50(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 50);
	// rlwinm r3,r4,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// stbx r3,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r4,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
loc_82B51E00:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_82B51E08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// bne cr6,0x82b51f44
	if (!ctx.cr6.eq) goto loc_82B51F44;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b51f3c
	if (ctx.cr6.eq) goto loc_82B51F3C;
	// lhz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b51ee4
	if (!ctx.cr6.lt) goto loc_82B51EE4;
loc_82B51E38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b51ea0
	if (!ctx.cr6.eq) goto loc_82B51EA0;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b51e84
	if (ctx.cr6.eq) goto loc_82B51E84;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b51e84
	if (!ctx.cr6.gt) goto loc_82B51E84;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add. r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b51e7c
	if (!ctx.cr0.eq) goto loc_82B51E7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82b51e80
	goto loc_82B51E80;
loc_82B51E7C:
	// bl 0x82b57760
	ctx.lr = 0x82B51E80;
	sub_82B57760(ctx, base);
loc_82B51E80:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B51E84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b51840
	ctx.lr = 0x82B51E8C;
	sub_82B51840(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b51ee4
	if (ctx.cr6.eq) goto loc_82B51EE4;
loc_82B51EA0:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lbzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lhz r8,22(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82b51e38
	if (ctx.cr6.lt) goto loc_82B51E38;
loc_82B51EE4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b51f24
	if (ctx.cr6.eq) goto loc_82B51F24;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b51f24
	if (!ctx.cr6.gt) goto loc_82B51F24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b51f1c
	if (!ctx.cr0.eq) goto loc_82B51F1C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82b51f20
	goto loc_82B51F20;
loc_82B51F1C:
	// bl 0x82b57760
	ctx.lr = 0x82B51F20;
	sub_82B57760(ctx, base);
loc_82B51F20:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B51F24:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b51f44
	if (!ctx.cr6.eq) goto loc_82B51F44;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_82B51F3C:
	// li r11,73
	ctx.r11.s64 = 73;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82B51F44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// bne cr6,0x82b5205c
	if (!ctx.cr6.eq) goto loc_82B5205C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b52054
	if (ctx.cr6.eq) goto loc_82B52054;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82B51F64:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b51fcc
	if (!ctx.cr6.eq) goto loc_82B51FCC;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b51fb0
	if (ctx.cr6.eq) goto loc_82B51FB0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b51fb0
	if (!ctx.cr6.gt) goto loc_82B51FB0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add. r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b51fa8
	if (!ctx.cr0.eq) goto loc_82B51FA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82b51fac
	goto loc_82B51FAC;
loc_82B51FA8:
	// bl 0x82b57760
	ctx.lr = 0x82B51FAC;
	sub_82B57760(ctx, base);
loc_82B51FAC:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B51FB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b51840
	ctx.lr = 0x82B51FB8;
	sub_82B51840(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b52004
	if (ctx.cr6.eq) goto loc_82B52004;
loc_82B51FCC:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lwz r5,28(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lbzx r29,r5,r9
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stbx r29,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne cr6,0x82b51f64
	if (!ctx.cr6.eq) goto loc_82B51F64;
	// b 0x82b52008
	goto loc_82B52008;
loc_82B52004:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B52008:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b52048
	if (ctx.cr6.eq) goto loc_82B52048;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b52048
	if (!ctx.cr6.gt) goto loc_82B52048;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b52040
	if (!ctx.cr0.eq) goto loc_82B52040;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82b52044
	goto loc_82B52044;
loc_82B52040:
	// bl 0x82b57760
	ctx.lr = 0x82B52044;
	sub_82B57760(ctx, base);
loc_82B52044:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B52048:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82b5205c
	if (!ctx.cr6.eq) goto loc_82B5205C;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_82B52054:
	// li r11,91
	ctx.r11.s64 = 91;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82B5205C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82b52170
	if (!ctx.cr6.eq) goto loc_82B52170;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b52168
	if (ctx.cr6.eq) goto loc_82B52168;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82B5207C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b520e4
	if (!ctx.cr6.eq) goto loc_82B520E4;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b520c8
	if (ctx.cr6.eq) goto loc_82B520C8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b520c8
	if (!ctx.cr6.gt) goto loc_82B520C8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add. r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b520c0
	if (!ctx.cr0.eq) goto loc_82B520C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82b520c4
	goto loc_82B520C4;
loc_82B520C0:
	// bl 0x82b57760
	ctx.lr = 0x82B520C4;
	sub_82B57760(ctx, base);
loc_82B520C4:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B520C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b51840
	ctx.lr = 0x82B520D0;
	sub_82B51840(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b5211c
	if (ctx.cr6.eq) goto loc_82B5211C;
loc_82B520E4:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lwz r5,36(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lbzx r29,r5,r9
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stbx r29,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne cr6,0x82b5207c
	if (!ctx.cr6.eq) goto loc_82B5207C;
	// b 0x82b52120
	goto loc_82B52120;
loc_82B5211C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B52120:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b52160
	if (ctx.cr6.eq) goto loc_82B52160;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b52160
	if (!ctx.cr6.gt) goto loc_82B52160;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b52158
	if (!ctx.cr0.eq) goto loc_82B52158;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82b5215c
	goto loc_82B5215C;
loc_82B52158:
	// bl 0x82b57760
	ctx.lr = 0x82B5215C;
	sub_82B57760(ctx, base);
loc_82B5215C:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B52160:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82b52170
	if (!ctx.cr6.eq) goto loc_82B52170;
loc_82B52168:
	// li r11,103
	ctx.r11.s64 = 103;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82B52170:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x82b521f4
	if (!ctx.cr6.eq) goto loc_82B521F4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b521f0
	if (ctx.cr6.eq) goto loc_82B521F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b521a8
	if (!ctx.cr6.gt) goto loc_82B521A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b51840
	ctx.lr = 0x82B521A8;
	sub_82B51840(ctx, base);
loc_82B521A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82b521f4
	if (ctx.cr6.gt) goto loc_82B521F4;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r6,50(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
loc_82B521F0:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_82B521F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b52228
	if (ctx.cr6.eq) goto loc_82B52228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b51840
	ctx.lr = 0x82B52208;
	sub_82B51840(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b52244
	if (!ctx.cr6.eq) goto loc_82B52244;
loc_82B52214:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B52228:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b52244
	if (!ctx.cr6.eq) goto loc_82B52244;
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82b52244
	if (ctx.cr6.gt) goto loc_82B52244;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bne cr6,0x82b5197c
	if (!ctx.cr6.eq) goto loc_82B5197C;
loc_82B52244:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// bne cr6,0x82b5225c
	if (!ctx.cr6.eq) goto loc_82B5225C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b5197c
	if (!ctx.cr6.eq) goto loc_82B5197C;
loc_82B5225C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b52284
	if (!ctx.cr6.eq) goto loc_82B52284;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b52284
	if (!ctx.cr6.eq) goto loc_82B52284;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82b52350
	if (ctx.cr6.eq) goto loc_82B52350;
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// beq cr6,0x82b52350
	if (ctx.cr6.eq) goto loc_82B52350;
loc_82B52284:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-29656
	ctx.r10.s64 = ctx.r10.s64 + -29656;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B522B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82b522c4
	if (ctx.cr6.eq) goto loc_82B522C4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82b522cc
	if (!ctx.cr6.eq) goto loc_82B522CC;
loc_82B522C4:
	// li r11,666
	ctx.r11.s64 = 666;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82B522CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b524c4
	if (ctx.cr6.eq) goto loc_82B524C4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82b524c4
	if (ctx.cr6.eq) goto loc_82B524C4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82b52350
	if (!ctx.cr6.eq) goto loc_82B52350;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b522f8
	if (!ctx.cr6.eq) goto loc_82B522F8;
	// bl 0x82b58d10
	ctx.lr = 0x82B522F4;
	sub_82B58D10(ctx, base);
	// b 0x82b5233c
	goto loc_82B5233C;
loc_82B522F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b58bd0
	ctx.lr = 0x82B52308;
	sub_82B58BD0(ctx, base);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// bne cr6,0x82b5233c
	if (!ctx.cr6.eq) goto loc_82B5233C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r28,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r28.u16);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3190
	ctx.lr = 0x82B5233C;
	sub_82CA3190(ctx, base);
loc_82B5233C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b51840
	ctx.lr = 0x82B52344;
	sub_82B51840(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b52214
	if (ctx.cr6.eq) goto loc_82B52214;
loc_82B52350:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bne cr6,0x82b524d8
	if (!ctx.cr6.eq) goto loc_82B524D8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82b52370
	if (ctx.cr6.gt) goto loc_82B52370;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B52370:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bne cr6,0x82b52434
	if (!ctx.cr6.eq) goto loc_82B52434;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r6,50(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r4,49(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stbx r4,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r3,9(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stbx r3,r4,r11
	PPC_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r3.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x82b52488
	goto loc_82B52488;
loc_82B52434:
	// lhz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r7,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lhz r4,50(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 50);
	// rlwinm r3,r4,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// stbx r3,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r4,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u8);
loc_82B52488:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B5249C;
	sub_82B51840(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b524b0
	if (!ctx.cr6.gt) goto loc_82B524B0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82B524B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B524C4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b524d8
	if (!ctx.cr6.eq) goto loc_82B524D8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82B524D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B524E4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-24664
	ctx.r10.s64 = ctx.r11.s64 + -24664;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
loc_82B524F0:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82B524FC"))) PPC_WEAK_FUNC(sub_82B524FC);
PPC_FUNC_IMPL(__imp__sub_82B524FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B52500"))) PPC_WEAK_FUNC(sub_82B52500);
PPC_FUNC_IMPL(__imp__sub_82B52500) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b52610
	if (ctx.cr6.eq) goto loc_82B52610;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b52610
	if (ctx.cr6.eq) goto loc_82B52610;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,42
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 42, ctx.xer);
	// beq cr6,0x82b52568
	if (ctx.cr6.eq) goto loc_82B52568;
	// cmpwi cr6,r30,69
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 69, ctx.xer);
	// beq cr6,0x82b52568
	if (ctx.cr6.eq) goto loc_82B52568;
	// cmpwi cr6,r30,73
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 73, ctx.xer);
	// beq cr6,0x82b52568
	if (ctx.cr6.eq) goto loc_82B52568;
	// cmpwi cr6,r30,91
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 91, ctx.xer);
	// beq cr6,0x82b52568
	if (ctx.cr6.eq) goto loc_82B52568;
	// cmpwi cr6,r30,103
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 103, ctx.xer);
	// beq cr6,0x82b52568
	if (ctx.cr6.eq) goto loc_82B52568;
	// cmpwi cr6,r30,113
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 113, ctx.xer);
	// beq cr6,0x82b52568
	if (ctx.cr6.eq) goto loc_82B52568;
	// cmpwi cr6,r30,666
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 666, ctx.xer);
	// bne cr6,0x82b52610
	if (!ctx.cr6.eq) goto loc_82B52610;
loc_82B52568:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b52584
	if (ctx.cr6.eq) goto loc_82B52584;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B52584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B52584:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b525a4
	if (ctx.cr6.eq) goto loc_82B525A4;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B525A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B525A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b525c4
	if (ctx.cr6.eq) goto loc_82B525C4;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B525C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B525C4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b525e4
	if (ctx.cr6.eq) goto loc_82B525E4;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B525E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B525E4:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B525F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,113
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 113, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne cr6,0x82b52614
	if (!ctx.cr6.eq) goto loc_82B52614;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82b52614
	goto loc_82B52614;
loc_82B52610:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82B52614:
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

__attribute__((alias("__imp__sub_82B5262C"))) PPC_WEAK_FUNC(sub_82B5262C);
PPC_FUNC_IMPL(__imp__sub_82B5262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B52630"))) PPC_WEAK_FUNC(sub_82B52630);
PPC_FUNC_IMPL(__imp__sub_82B52630) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82B52638;
	sub_82CA2BD4(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r8,44(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// lwz r11,108(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// lwz r30,56(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r5,r8,-262
	ctx.r5.s64 = ctx.r8.s64 + -262;
	// lwz r9,120(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// lwz r25,124(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 124);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r27,144(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82b52674
	if (!ctx.cr6.gt) goto loc_82B52674;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r26,r11,262
	ctx.r26.s64 = ctx.r11.s64 + 262;
	// b 0x82b52678
	goto loc_82B52678;
loc_82B52674:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82B52678:
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r8,140(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// lwz r29,64(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// addi r5,r10,258
	ctx.r5.s64 = ctx.r10.s64 + 258;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// lwz r28,52(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lbzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// blt cr6,0x82b526a0
	if (ctx.cr6.lt) goto loc_82B526A0;
	// rlwinm r25,r25,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
loc_82B526A0:
	// lwz r3,116(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82b526b0
	if (!ctx.cr6.gt) goto loc_82B526B0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82B526B0:
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// clrlwi r24,r8,24
	ctx.r24.u64 = ctx.r8.u32 & 0xFF;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r23,r11,r6
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527fc
	if (!ctx.cr6.eq) goto loc_82B527FC;
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// clrlwi r24,r31,24
	ctx.r24.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527fc
	if (!ctx.cr6.eq) goto loc_82B527FC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527fc
	if (!ctx.cr6.eq) goto loc_82B527FC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r24,1(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527fc
	if (!ctx.cr6.eq) goto loc_82B527FC;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
loc_82B52704:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82b527cc
	if (!ctx.cr6.eq) goto loc_82B527CC;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82b52704
	if (ctx.cr6.lt) goto loc_82B52704;
loc_82B527CC:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r10,r5,-258
	ctx.r10.s64 = ctx.r5.s64 + -258;
	// addi r11,r11,258
	ctx.r11.s64 = ctx.r11.s64 + 258;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82b527fc
	if (!ctx.cr6.gt) goto loc_82B527FC;
	// stw r4,112(r7)
	PPC_STORE_U32(ctx.r7.u32 + 112, ctx.r4.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82b52818
	if (!ctx.cr6.lt) goto loc_82B52818;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r31,-1(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
loc_82B527FC:
	// and r11,r28,r4
	ctx.r11.u64 = ctx.r28.u64 & ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r9,r29
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82b52818
	if (!ctx.cr6.gt) goto loc_82B52818;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82b526b0
	if (!ctx.cr0.eq) goto loc_82B526B0;
loc_82B52818:
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82b52824
	if (ctx.cr6.gt) goto loc_82B52824;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82B52824:
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82B52828"))) PPC_WEAK_FUNC(sub_82B52828);
PPC_FUNC_IMPL(__imp__sub_82B52828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,258
	ctx.r9.s64 = ctx.r11.s64 + 258;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b52958
	if (!ctx.cr6.eq) goto loc_82B52958;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b52958
	if (!ctx.cr6.eq) goto loc_82B52958;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82B52864:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b5292c
	if (!ctx.cr6.eq) goto loc_82B5292C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b52864
	if (ctx.cr6.lt) goto loc_82B52864;
loc_82B5292C:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,258
	ctx.r11.s64 = ctx.r11.s64 + 258;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82b52958
	if (ctx.cr6.lt) goto loc_82B52958;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b52950
	if (!ctx.cr6.gt) goto loc_82B52950;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B52950:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82B52958:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B52960"))) PPC_WEAK_FUNC(sub_82B52960);
PPC_FUNC_IMPL(__imp__sub_82B52960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82B52968;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_82B52974:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r6,r11,-262
	ctx.r6.s64 = ctx.r11.s64 + -262;
	// subf r26,r8,r7
	ctx.r26.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82b52a3c
	if (ctx.cr6.lt) goto loc_82B52A3C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B529AC;
	sub_82CA2C60(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r28,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subf r4,r28,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r28.s64;
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r6,r28,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
loc_82B529E0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// bge cr6,0x82b529f8
	if (!ctx.cr6.lt) goto loc_82B529F8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B529F8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bne 0x82b529e0
	if (!ctx.cr0.eq) goto loc_82B529E0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B52A14:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// bge cr6,0x82b52a2c
	if (!ctx.cr6.lt) goto loc_82B52A2C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B52A2C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bne 0x82b52a14
	if (!ctx.cr0.eq) goto loc_82B52A14;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
loc_82B52A3C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b52b64
	if (ctx.cr6.eq) goto loc_82B52B64;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82b52a74
	if (!ctx.cr6.gt) goto loc_82B52A74;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82B52A74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b52a84
	if (!ctx.cr6.eq) goto loc_82B52A84;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b52b08
	goto loc_82B52B08;
loc_82B52A84:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b52ab0
	if (!ctx.cr6.eq) goto loc_82B52AB0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82b57438
	ctx.lr = 0x82B52AAC;
	sub_82B57438(ctx, base);
	// b 0x82b52ad8
	goto loc_82B52AD8;
loc_82B52AB0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82b52adc
	if (!ctx.cr6.eq) goto loc_82B52ADC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b52ad0
	if (!ctx.cr6.eq) goto loc_82B52AD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b52ad8
	goto loc_82B52AD8;
loc_82B52AD0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82b57760
	ctx.lr = 0x82B52AD8;
	sub_82B57760(ctx, base);
loc_82B52AD8:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82B52ADC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B52AEC;
	sub_82CA2C60(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
loc_82B52B08:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82b52b4c
	if (ctx.cr6.lt) goto loc_82B52B4C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// slw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82B52B4C:
	// cmplwi cr6,r10,262
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 262, ctx.xer);
	// bge cr6,0x82b52b64
	if (!ctx.cr6.lt) goto loc_82B52B64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b52974
	if (!ctx.cr6.eq) goto loc_82B52974;
loc_82B52B64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82B52B6C"))) PPC_WEAK_FUNC(sub_82B52B6C);
PPC_FUNC_IMPL(__imp__sub_82B52B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B52B70"))) PPC_WEAK_FUNC(sub_82B52B70);
PPC_FUNC_IMPL(__imp__sub_82B52B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B52B78;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,0
	ctx.r30.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bge cr6,0x82b52ba0
	if (!ctx.cr6.lt) goto loc_82B52BA0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82B52BA0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B52BA4:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82b52bc4
	if (ctx.cr6.gt) goto loc_82B52BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b52960
	ctx.lr = 0x82B52BB8;
	sub_82B52960(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b52cb0
	if (ctx.cr6.eq) goto loc_82B52CB0;
loc_82B52BC4:
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b52bf0
	if (ctx.cr6.eq) goto loc_82B52BF0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b52c44
	if (ctx.cr6.lt) goto loc_82B52C44;
loc_82B52BF0:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// blt cr6,0x82b52c10
	if (ctx.cr6.lt) goto loc_82B52C10;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b52c14
	goto loc_82B52C14;
loc_82B52C10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B52C14:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b58f70
	ctx.lr = 0x82B52C24;
	sub_82B58F70(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B52C34;
	sub_82B51840(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b52ca4
	if (ctx.cr6.eq) goto loc_82B52CA4;
loc_82B52C44:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r8,r10,-262
	ctx.r8.s64 = ctx.r10.s64 + -262;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82b52ba4
	if (ctx.cr6.lt) goto loc_82B52BA4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b52c74
	if (ctx.cr6.lt) goto loc_82B52C74;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b52c78
	goto loc_82B52C78;
loc_82B52C74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B52C78:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b58f70
	ctx.lr = 0x82B52C84;
	sub_82B58F70(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B52C94;
	sub_82B51840(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b52ba4
	if (!ctx.cr6.eq) goto loc_82B52BA4;
loc_82B52CA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B52CA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B52CB0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82b52ca4
	if (ctx.cr6.eq) goto loc_82B52CA4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b52cd0
	if (ctx.cr6.lt) goto loc_82B52CD0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b52cd4
	goto loc_82B52CD4;
loc_82B52CD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B52CD4:
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82b58f70
	ctx.lr = 0x82B52CF0;
	sub_82B58F70(ctx, base);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B52D00;
	sub_82B51840(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82b52d24
	if (!ctx.cr6.eq) goto loc_82B52D24;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B52D24:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82b52ca8
	if (ctx.cr6.eq) goto loc_82B52CA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B52D3C"))) PPC_WEAK_FUNC(sub_82B52D3C);
PPC_FUNC_IMPL(__imp__sub_82B52D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B52D40"))) PPC_WEAK_FUNC(sub_82B52D40);
PPC_FUNC_IMPL(__imp__sub_82B52D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82B52D48;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,26640
	ctx.r26.s64 = ctx.r11.s64 + 26640;
	// addi r27,r10,27152
	ctx.r27.s64 = ctx.r10.s64 + 27152;
loc_82B52D74:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82b52da4
	if (!ctx.cr6.lt) goto loc_82B52DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b52960
	ctx.lr = 0x82B52D88;
	sub_82B52960(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82b52d9c
	if (!ctx.cr6.lt) goto loc_82B52D9C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82b53124
	if (ctx.cr6.eq) goto loc_82B53124;
loc_82B52D9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53130
	if (ctx.cr6.eq) goto loc_82B53130;
loc_82B52DA4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b52e20
	if (ctx.cr6.lt) goto loc_82B52E20;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// xor r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lhzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// sthx r4,r7,r8
	PPC_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u16);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// and r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// sthx r8,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u16);
loc_82B52E20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b52e84
	if (ctx.cr6.eq) goto loc_82B52E84;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r9,r11,-262
	ctx.r9.s64 = ctx.r11.s64 + -262;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82b52e84
	if (ctx.cr6.gt) goto loc_82B52E84;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82b52e64
	if (ctx.cr6.eq) goto loc_82B52E64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82b52e6c
	if (ctx.cr6.eq) goto loc_82B52E6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b52630
	ctx.lr = 0x82B52E60;
	sub_82B52630(ctx, base);
	// b 0x82b52e80
	goto loc_82B52E80;
loc_82B52E64:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82b52e84
	if (!ctx.cr6.eq) goto loc_82B52E84;
loc_82B52E6C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82b52e84
	if (!ctx.cr6.eq) goto loc_82B52E84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b52828
	ctx.lr = 0x82B52E80;
	sub_82B52828(ctx, base);
loc_82B52E80:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_82B52E84:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b53050
	if (ctx.cr6.lt) goto loc_82B53050;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r9,r11,253
	ctx.r9.s64 = ctx.r11.s64 + 253;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// subf r3,r8,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r5,5796(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sthx r11,r6,r5
	PPC_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,5792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r8,5784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// stbx r4,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r7.u32);
	// lbzx r11,r4,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// addi r6,r11,294
	ctx.r6.s64 = ctx.r11.s64 + 294;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sthx r5,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// bge cr6,0x82b52f04
	if (!ctx.cr6.lt) goto loc_82B52F04;
	// lbzx r11,r9,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// b 0x82b52f10
	goto loc_82B52F10;
loc_82B52F04:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = ctx.r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82B52F10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,610
	ctx.r11.s64 = ctx.r11.s64 + 610;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r8,5792(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,5788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// bgt cr6,0x82b53008
	if (ctx.cr6.gt) goto loc_82B53008;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82b53008
	if (ctx.cr6.lt) goto loc_82B53008;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B52F6C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// slw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lbz r6,2(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// xor r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// and r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 & ctx.r4.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// sthx r5,r3,r7
	PPC_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r5.u16);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// and r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r3,r7
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// sthx r10,r11,r4
	PPC_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bne 0x82b52f6c
	if (!ctx.cr0.eq) goto loc_82B52F6C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x82b530cc
	goto loc_82B530CC;
loc_82B53008:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// slw r4,r6,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// b 0x82b530cc
	goto loc_82B530CC;
loc_82B53050:
	// lwz r11,5792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,5796(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// lbzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// sthx r29,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r29.u16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r4,r11,37
	ctx.r4.s64 = ctx.r11.s64 + 37;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,5792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r5,5784(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// stbx r6,r5,r3
	PPC_STORE_U8(ctx.r5.u32 + ctx.r3.u32, ctx.r6.u8);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// lwz r7,5792(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,5788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82B530CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b52d74
	if (ctx.cr6.eq) goto loc_82B52D74;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b530ec
	if (ctx.cr6.lt) goto loc_82B530EC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b530f0
	goto loc_82B530F0;
loc_82B530EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B530F0:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82b58f70
	ctx.lr = 0x82B53104;
	sub_82B58F70(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B53114;
	sub_82B51840(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b52d74
	if (!ctx.cr6.eq) goto loc_82B52D74;
loc_82B53124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B53128:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B53130:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b53148
	if (ctx.cr6.lt) goto loc_82B53148;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b5314c
	goto loc_82B5314C;
loc_82B53148:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B5314C:
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82b58f70
	ctx.lr = 0x82B53168;
	sub_82B58F70(ctx, base);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B53178;
	sub_82B51840(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82b5319c
	if (!ctx.cr6.eq) goto loc_82B5319C;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B5319C:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82b53128
	if (ctx.cr6.eq) goto loc_82B53128;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82B531B4"))) PPC_WEAK_FUNC(sub_82B531B4);
PPC_FUNC_IMPL(__imp__sub_82B531B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B531B8"))) PPC_WEAK_FUNC(sub_82B531B8);
PPC_FUNC_IMPL(__imp__sub_82B531B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82B531C0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r25,r11,26640
	ctx.r25.s64 = ctx.r11.s64 + 26640;
	// addi r27,r10,27152
	ctx.r27.s64 = ctx.r10.s64 + 27152;
loc_82B531F4:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82b53224
	if (!ctx.cr6.lt) goto loc_82B53224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b52960
	ctx.lr = 0x82B53208;
	sub_82B52960(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82b5321c
	if (!ctx.cr6.lt) goto loc_82B5321C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b53554
	if (ctx.cr6.eq) goto loc_82B53554;
loc_82B5321C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53658
	if (ctx.cr6.eq) goto loc_82B53658;
loc_82B53224:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b532a0
	if (ctx.cr6.lt) goto loc_82B532A0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// xor r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lhzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// sthx r4,r7,r8
	PPC_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u16);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// and r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r4,r10
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// sthx r8,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u16);
loc_82B532A0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x82b53360
	if (ctx.cr6.eq) goto loc_82B53360;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b53360
	if (!ctx.cr6.lt) goto loc_82B53360;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r9,r11,-262
	ctx.r9.s64 = ctx.r11.s64 + -262;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82b53360
	if (ctx.cr6.gt) goto loc_82B53360;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82b53308
	if (ctx.cr6.eq) goto loc_82B53308;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82b53310
	if (ctx.cr6.eq) goto loc_82B53310;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b52630
	ctx.lr = 0x82B53304;
	sub_82B52630(ctx, base);
	// b 0x82b53324
	goto loc_82B53324;
loc_82B53308:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82b53328
	if (!ctx.cr6.eq) goto loc_82B53328;
loc_82B53310:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82b53328
	if (!ctx.cr6.eq) goto loc_82B53328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b52828
	ctx.lr = 0x82B53324;
	sub_82B52828(ctx, base);
loc_82B53324:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_82B53328:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82b53360
	if (ctx.cr6.gt) goto loc_82B53360;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82b5335c
	if (ctx.cr6.eq) goto loc_82B5335C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82b53360
	if (!ctx.cr6.eq) goto loc_82B53360;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,4096
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4096, ctx.xer);
	// ble cr6,0x82b53360
	if (!ctx.cr6.gt) goto loc_82B53360;
loc_82B5335C:
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
loc_82B53360:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b53560
	if (ctx.cr6.lt) goto loc_82B53560;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b53560
	if (ctx.cr6.gt) goto loc_82B53560;
	// addi r10,r11,253
	ctx.r10.s64 = ctx.r11.s64 + 253;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,5792(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,5796(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r6,r30
	ctx.r3.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// sthx r10,r4,r5
	PPC_STORE_U16(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u16);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r6,5792(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r5,5784(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stbx r7,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u8);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r4.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lbzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// addi r3,r11,294
	ctx.r3.s64 = ctx.r11.s64 + 294;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// bge cr6,0x82b533fc
	if (!ctx.cr6.lt) goto loc_82B533FC;
	// lbzx r11,r9,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// b 0x82b53408
	goto loc_82B53408;
loc_82B533FC:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r25,256
	ctx.r10.s64 = ctx.r25.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82B53408:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,610
	ctx.r11.s64 = ctx.r11.s64 + 610;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r6,5792(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r10,5788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
loc_82B53454:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82b534dc
	if (ctx.cr6.gt) goto loc_82B534DC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// slw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r7,2(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 & ctx.r4.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// sthx r5,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// and r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 & ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r4,r3
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// sthx r7,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u16);
loc_82B534DC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bne 0x82b53454
	if (!ctx.cr0.eq) goto loc_82B53454;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// beq cr6,0x82b531f4
	if (ctx.cr6.eq) goto loc_82B531F4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b53520
	if (ctx.cr6.lt) goto loc_82B53520;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82b53524
	goto loc_82B53524;
loc_82B53520:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82B53524:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b58f70
	ctx.lr = 0x82B53534;
	sub_82B58F70(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B53544;
	sub_82B51840(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_82B53550:
	// bne cr6,0x82b531f4
	if (!ctx.cr6.eq) goto loc_82B531F4;
loc_82B53554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B53558:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82B53560:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b53638
	if (ctx.cr6.eq) goto loc_82B53638;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,5792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,5796(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,-1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// sthx r28,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r28.u16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r4,5792(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r3,r11,37
	ctx.r3.s64 = ctx.r11.s64 + 37;
	// stbx r5,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r9.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// lwz r6,5792(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r11,5788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82b53610
	if (!ctx.cr6.eq) goto loc_82B53610;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b535e8
	if (ctx.cr6.lt) goto loc_82B535E8;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b535ec
	goto loc_82B535EC;
loc_82B535E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82B535EC:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82b58f70
	ctx.lr = 0x82B53600;
	sub_82B58F70(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B53610;
	sub_82B51840(ctx, base);
loc_82B53610:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// b 0x82b53550
	goto loc_82B53550;
loc_82B53638:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// b 0x82b531f4
	goto loc_82B531F4;
loc_82B53658:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b536b8
	if (ctx.cr6.eq) goto loc_82B536B8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,5792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,5796(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,-1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// sthx r28,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r28.u16);
	// lwz r4,5792(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r3,r11,37
	ctx.r3.s64 = ctx.r11.s64 + 37;
	// stbx r5,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r9.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
loc_82B536B8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b536d0
	if (ctx.cr6.lt) goto loc_82B536D0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b536d4
	goto loc_82B536D4;
loc_82B536D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82B536D4:
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82b58f70
	ctx.lr = 0x82B536F0;
	sub_82B58F70(ctx, base);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// bl 0x82b51840
	ctx.lr = 0x82B53700;
	sub_82B51840(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82b53724
	if (!ctx.cr6.eq) goto loc_82B53724;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82B53724:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82b53558
	if (ctx.cr6.eq) goto loc_82B53558;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82B5373C"))) PPC_WEAK_FUNC(sub_82B5373C);
PPC_FUNC_IMPL(__imp__sub_82B5373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B53740"))) PPC_WEAK_FUNC(sub_82B53740);
PPC_FUNC_IMPL(__imp__sub_82B53740) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b537b8
	if (ctx.cr6.eq) goto loc_82B537B8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b537b8
	if (ctx.cr6.eq) goto loc_82B537B8;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,1328
	ctx.r9.s64 = ctx.r11.s64 + 1328;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// ori r6,r8,32768
	ctx.r6.u64 = ctx.r8.u64 | 32768;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
loc_82B537B8:
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B537C0"))) PPC_WEAK_FUNC(sub_82B537C0);
PPC_FUNC_IMPL(__imp__sub_82B537C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B537C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b538d4
	if (ctx.cr6.eq) goto loc_82B538D4;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x82b538d4
	if (!ctx.cr6.eq) goto loc_82B538D4;
	// cmpwi cr6,r6,56
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 56, ctx.xer);
	// bne cr6,0x82b538d4
	if (!ctx.cr6.eq) goto loc_82B538D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b53804
	if (!ctx.cr6.eq) goto loc_82B53804;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B53804:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b53828
	if (!ctx.cr6.eq) goto loc_82B53828;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r10,r11,29736
	ctx.r10.s64 = ctx.r11.s64 + 29736;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82B53828:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b53840
	if (!ctx.cr6.eq) goto loc_82B53840;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r10,r11,29744
	ctx.r10.s64 = ctx.r11.s64 + 29744;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_82B53840:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,9520
	ctx.r5.s64 = 9520;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B53858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b53870
	if (!ctx.cr6.eq) goto loc_82B53870;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B53870:
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 48, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bge cr6,0x82b5388c
	if (!ctx.cr6.lt) goto loc_82B5388C;
	// clrlwi r30,r30,28
	ctx.r30.u64 = ctx.r30.u32 & 0xF;
loc_82B5388C:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82b538b4
	if (ctx.cr6.lt) goto loc_82B538B4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x82b538b4
	if (ctx.cr6.gt) goto loc_82B538B4;
	// stw r30,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r29.u32);
	// bl 0x82b53740
	ctx.lr = 0x82B538AC;
	sub_82B53740(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B538B4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B538C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82B538D4:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B538E0"))) PPC_WEAK_FUNC(sub_82B538E0);
PPC_FUNC_IMPL(__imp__sub_82B538E0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82b537c0
	sub_82B537C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B538F0"))) PPC_WEAK_FUNC(sub_82B538F0);
PPC_FUNC_IMPL(__imp__sub_82B538F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B538F8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5394c
	if (!ctx.cr6.eq) goto loc_82B5394C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// slw r4,r30,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B53934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5394c
	if (!ctx.cr6.eq) goto loc_82B5394C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B5394C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b53970
	if (!ctx.cr6.eq) goto loc_82B53970;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82B53970:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r30,r11,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82b539a8
	if (ctx.cr6.lt) goto loc_82B539A8;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B53990;
	sub_82CA2C60(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B539A8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r29,r11,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82b539bc
	if (!ctx.cr6.gt) goto loc_82B539BC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82B539BC:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r4,r30,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r30.s64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B539D0;
	sub_82CA2C60(ctx, base);
	// subf. r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82b53a04
	if (ctx.cr0.eq) goto loc_82B53A04;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r4,r30,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B539EC;
	sub_82CA2C60(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B53A04:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b53a20
	if (!ctx.cr6.eq) goto loc_82B53A20;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
loc_82B53A20:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b53a34
	if (!ctx.cr6.lt) goto loc_82B53A34;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82B53A34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B53A40"))) PPC_WEAK_FUNC(sub_82B53A40);
PPC_FUNC_IMPL(__imp__sub_82B53A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82B53A48;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82b54fb4
	if (ctx.cr6.eq) goto loc_82B54FB4;
	// lwz r29,28(r14)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b54fb4
	if (ctx.cr6.eq) goto loc_82B54FB4;
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54fb4
	if (ctx.cr6.eq) goto loc_82B54FB4;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b53a8c
	if (!ctx.cr6.eq) goto loc_82B53A8C;
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54fb4
	if (!ctx.cr6.eq) goto loc_82B54FB4;
loc_82B53A8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82b53aa0
	if (!ctx.cr6.eq) goto loc_82B53AA0;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82B53AA0:
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r27,4(r14)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r16,0(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,0(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r16,28
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 28, ctx.xer);
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// bgt cr6,0x82b54fb4
	if (ctx.cr6.gt) goto loc_82B54FB4;
	// lis r25,-32240
	ctx.r25.s64 = -2112880640;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r25,r25,-25736
	ctx.r25.s64 = ctx.r25.s64 + -25736;
	// addi r11,r11,-25864
	ctx.r11.s64 = ctx.r11.s64 + -25864;
	// lis r22,-32240
	ctx.r22.s64 = -2112880640;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lis r19,-32240
	ctx.r19.s64 = -2112880640;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r26,-32240
	ctx.r26.s64 = -2112880640;
	// lis r20,-32240
	ctx.r20.s64 = -2112880640;
	// addi r25,r22,-25576
	ctx.r25.s64 = ctx.r22.s64 + -25576;
	// addi r19,r19,-25644
	ctx.r19.s64 = ctx.r19.s64 + -25644;
	// addi r11,r26,-25488
	ctx.r11.s64 = ctx.r26.s64 + -25488;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r22,r20,-25624
	ctx.r22.s64 = ctx.r20.s64 + -25624;
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lis r17,-32240
	ctx.r17.s64 = -2112880640;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r24,-32240
	ctx.r24.s64 = -2112880640;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r17,r17,-25696
	ctx.r17.s64 = ctx.r17.s64 + -25696;
	// lwz r19,88(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r24,-25524
	ctx.r24.s64 = ctx.r24.s64 + -25524;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// lis r21,-32240
	ctx.r21.s64 = -2112880640;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// lis r18,-32240
	ctx.r18.s64 = -2112880640;
	// addi r24,r21,-25596
	ctx.r24.s64 = ctx.r21.s64 + -25596;
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r23,-32240
	ctx.r23.s64 = -2112880640;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r24,r18,-25672
	ctx.r24.s64 = ctx.r18.s64 + -25672;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r23,r23,-25556
	ctx.r23.s64 = ctx.r23.s64 + -25556;
	// addi r10,r10,-27912
	ctx.r10.s64 = ctx.r10.s64 + -27912;
	// addi r9,r9,-25296
	ctx.r9.s64 = ctx.r9.s64 + -25296;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r8,r8,-25328
	ctx.r8.s64 = ctx.r8.s64 + -25328;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r7,r7,-25352
	ctx.r7.s64 = ctx.r7.s64 + -25352;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// addi r6,r6,-25380
	ctx.r6.s64 = ctx.r6.s64 + -25380;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r5,r5,-25404
	ctx.r5.s64 = ctx.r5.s64 + -25404;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r4,r4,-25432
	ctx.r4.s64 = ctx.r4.s64 + -25432;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r3,r3,-25460
	ctx.r3.s64 = ctx.r3.s64 + -25460;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// li r15,1
	ctx.r15.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r22,27
	ctx.r22.s64 = 27;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r25,18
	ctx.r25.s64 = 18;
loc_82B53C00:
	// lis r12,-32075
	ctx.r12.s64 = -2102067200;
	// addi r12,r12,15384
	ctx.r12.s64 = ctx.r12.s64 + 15384;
	// rlwinm r0,r16,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r21,15500(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 15500);
	// lwz r21,15852(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 15852);
	// lwz r21,15984(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 15984);
	// lwz r21,16068(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16068);
	// lwz r21,16164(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16164);
	// lwz r21,16284(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16284);
	// lwz r21,16492(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16492);
	// lwz r21,16704(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16704);
	// lwz r21,16912(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16912);
	// lwz r21,17076(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17076);
	// lwz r21,17180(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17180);
	// lwz r21,17224(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17224);
	// lwz r21,17236(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17236);
	// lwz r21,17500(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17500);
	// lwz r21,17608(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17608);
	// lwz r21,17700(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17700);
	// lwz r21,17836(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17836);
	// lwz r21,18112(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 18112);
	// lwz r21,18900(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 18900);
	// lwz r21,19384(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 19384);
	// lwz r21,19488(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 19488);
	// lwz r21,19840(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 19840);
	// lwz r21,19976(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 19976);
	// lwz r21,20144(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20144);
	// lwz r21,20176(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20176);
	// lwz r21,20296(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20296);
	// lwz r21,20468(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20468);
	// lwz r21,20476(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20476);
	// lwz r21,20764(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20764);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b53ca4
	if (!ctx.cr6.eq) goto loc_82B53CA4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B53CA4:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82b53cd4
	if (!ctx.cr6.lt) goto loc_82B53CD4;
loc_82B53CAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b53cac
	if (ctx.cr6.lt) goto loc_82B53CAC;
loc_82B53CD4:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b53d0c
	if (ctx.cr6.eq) goto loc_82B53D0C;
	// cmplwi cr6,r30,35615
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 35615, ctx.xer);
	// bne cr6,0x82b53d0c
	if (!ctx.cr6.eq) goto loc_82B53D0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b57748
	ctx.lr = 0x82B53CF8;
	sub_82B57748(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r15,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r15.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B53D0C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r23,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53d24
	if (ctx.cr6.eq) goto loc_82B53D24;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_82B53D24:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b53de4
	if (ctx.cr6.eq) goto loc_82B53DE4;
	// rlwinm r10,r30,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r30,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// lis r9,2114
	ctx.r9.s64 = 138543104;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r9,4229
	ctx.r7.u64 = ctx.r9.u64 | 4229;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mulhwu r11,r6,r7
	ctx.r11.u64 = (uint64_t(ctx.r6.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r4,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf. r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b53de4
	if (!ctx.cr0.eq) goto loc_82B53DE4;
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82b53d84
	if (ctx.cr6.eq) goto loc_82B53D84;
	// stw r24,24(r14)
	PPC_STORE_U32(ctx.r14.u32 + 24, ctx.r24.u32);
	// b 0x82b54fa4
	goto loc_82B54FA4;
loc_82B53D84:
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b53da8
	if (!ctx.cr6.gt) goto loc_82B53DA8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B53DA8:
	// slw r11,r15,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b57438
	ctx.lr = 0x82B53DC0;
	sub_82B57438(ctx, base);
	// not r10,r30
	ctx.r10.u64 = ~ctx.r30.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r3.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// rlwimi r9,r10,24,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B53DE4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82b54fa0
	goto loc_82B54FA0;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82b53e1c
	if (!ctx.cr6.lt) goto loc_82B53E1C;
loc_82B53DF4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b53df4
	if (ctx.cr6.lt) goto loc_82B53DF4;
loc_82B53E1C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82b53e34
	if (ctx.cr6.eq) goto loc_82B53E34;
	// stw r24,24(r14)
	PPC_STORE_U32(ctx.r14.u32 + 24, ctx.r24.u32);
	// b 0x82b54fa4
	goto loc_82B54FA4;
loc_82B53E34:
	// rlwinm r11,r30,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b53e48
	if (ctx.cr6.eq) goto loc_82B53E48;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B53E48:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53e5c
	if (ctx.cr6.eq) goto loc_82B53E5C;
	// rlwinm r10,r30,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0x1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82B53E5C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82b53e78
	goto loc_82B53E78;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x82b53ea0
	if (!ctx.cr6.lt) goto loc_82B53EA0;
loc_82B53E78:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82b53e78
	if (ctx.cr6.lt) goto loc_82B53E78;
loc_82B53EA0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53eb0
	if (ctx.cr6.eq) goto loc_82B53EB0;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82B53EB0:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82b53ecc
	goto loc_82B53ECC;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82b53ef4
	if (!ctx.cr6.lt) goto loc_82B53EF4;
loc_82B53ECC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b53ecc
	if (ctx.cr6.lt) goto loc_82B53ECC;
loc_82B53EF4:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53f14
	if (ctx.cr6.eq) goto loc_82B53F14;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r9,r30,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
loc_82B53F14:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b53f84
	if (ctx.cr6.eq) goto loc_82B53F84;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82b53f64
	if (!ctx.cr6.lt) goto loc_82B53F64;
loc_82B53F3C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b53f3c
	if (ctx.cr6.lt) goto loc_82B53F3C;
loc_82B53F64:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r30,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53f78
	if (ctx.cr6.eq) goto loc_82B53F78;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
loc_82B53F78:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x82b53f94
	goto loc_82B53F94;
loc_82B53F84:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b53f94
	if (ctx.cr6.eq) goto loc_82B53F94;
	// stw r23,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r23.u32);
loc_82B53F94:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b54060
	if (ctx.cr6.eq) goto loc_82B54060;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82b53fc0
	if (!ctx.cr6.gt) goto loc_82B53FC0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82B53FC0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b54054
	if (ctx.cr6.eq) goto loc_82B54054;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5400c
	if (ctx.cr6.eq) goto loc_82B5400C;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b5400c
	if (ctx.cr6.eq) goto loc_82B5400C;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r6,r26,r11
	ctx.r6.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82b54000
	if (ctx.cr6.gt) goto loc_82B54000;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82B54000:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B5400C;
	sub_82CA2C60(ctx, base);
loc_82B5400C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b54040
	if (ctx.cr6.eq) goto loc_82B54040;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b54030
	if (!ctx.cr6.eq) goto loc_82B54030;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82b5403c
	goto loc_82B5403C;
loc_82B54030:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b57760
	ctx.lr = 0x82B5403C;
	sub_82B57760(ctx, base);
loc_82B5403C:
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_82B54040:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
loc_82B54054:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b55000
	if (!ctx.cr6.eq) goto loc_82B55000;
loc_82B54060:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r23,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b54124
	if (ctx.cr6.eq) goto loc_82B54124;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82B54088:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lbzx r25,r26,r28
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b540c8
	if (ctx.cr6.eq) goto loc_82B540C8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b540c8
	if (ctx.cr6.eq) goto loc_82B540C8;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82b540c8
	if (!ctx.cr6.lt) goto loc_82B540C8;
	// stbx r25,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
loc_82B540C8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b540d8
	if (ctx.cr6.eq) goto loc_82B540D8;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82b54088
	if (ctx.cr6.lt) goto loc_82B54088;
loc_82B540D8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b5410c
	if (ctx.cr6.eq) goto loc_82B5410C;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b540fc
	if (!ctx.cr6.eq) goto loc_82B540FC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82b54108
	goto loc_82B54108;
loc_82B540FC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b57760
	ctx.lr = 0x82B54108;
	sub_82B57760(ctx, base);
loc_82B54108:
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_82B5410C:
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82b55000
	if (!ctx.cr6.eq) goto loc_82B55000;
	// li r25,18
	ctx.r25.s64 = 18;
	// b 0x82b54134
	goto loc_82B54134;
loc_82B54124:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54134
	if (ctx.cr6.eq) goto loc_82B54134;
	// stw r23,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
loc_82B54134:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r23,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b541f8
	if (ctx.cr6.eq) goto loc_82B541F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82B5415C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lbzx r25,r26,r28
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5419c
	if (ctx.cr6.eq) goto loc_82B5419C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b5419c
	if (ctx.cr6.eq) goto loc_82B5419C;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82b5419c
	if (!ctx.cr6.lt) goto loc_82B5419C;
	// stbx r25,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
loc_82B5419C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b541ac
	if (ctx.cr6.eq) goto loc_82B541AC;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82b5415c
	if (ctx.cr6.lt) goto loc_82B5415C;
loc_82B541AC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b541e0
	if (ctx.cr6.eq) goto loc_82B541E0;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b541d0
	if (!ctx.cr6.eq) goto loc_82B541D0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82b541dc
	goto loc_82B541DC;
loc_82B541D0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b57760
	ctx.lr = 0x82B541DC;
	sub_82B57760(ctx, base);
loc_82B541DC:
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_82B541E0:
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82b55000
	if (!ctx.cr6.eq) goto loc_82B55000;
	// li r25,18
	ctx.r25.s64 = 18;
	// b 0x82b54208
	goto loc_82B54208;
loc_82B541F8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54208
	if (ctx.cr6.eq) goto loc_82B54208;
	// stw r23,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r23.u32);
loc_82B54208:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b5426c
	if (ctx.cr6.eq) goto loc_82B5426C;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82b54250
	if (!ctx.cr6.lt) goto loc_82B54250;
loc_82B54228:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b54228
	if (ctx.cr6.lt) goto loc_82B54228;
loc_82B54250:
	// lhz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b54264
	if (ctx.cr6.eq) goto loc_82B54264;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B54264:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82B5426C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54290
	if (ctx.cr6.eq) goto loc_82B54290;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// srawi r9,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 9;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r15,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r15.u32);
loc_82B54290:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b57748
	ctx.lr = 0x82B542A0;
	sub_82B57748(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x82b542e4
	if (!ctx.cr6.lt) goto loc_82B542E4;
loc_82B542BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82b542bc
	if (ctx.cr6.lt) goto loc_82B542BC;
loc_82B542E4:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r30,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,10
	ctx.r8.s64 = 10;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r11,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r11.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b54fc0
	if (ctx.cr6.eq) goto loc_82B54FC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b57438
	ctx.lr = 0x82B54338;
	sub_82B57438(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b54378
	if (ctx.cr6.eq) goto loc_82B54378;
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// li r10,24
	ctx.r10.s64 = 24;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B54378:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x82b543a8
	if (!ctx.cr6.lt) goto loc_82B543A8;
loc_82B54380:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82b54380
	if (ctx.cr6.lt) goto loc_82B54380;
loc_82B543A8:
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82b54450
	if (ctx.cr6.gt) goto loc_82B54450;
	// lis r12,-32075
	ctx.r12.s64 = -2102067200;
	// addi r12,r12,17372
	ctx.r12.s64 = ctx.r12.s64 + 17372;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82B543EC;
	case 1:
		goto loc_82B54400;
	case 2:
		goto loc_82B54430;
	case 3:
		goto loc_82B54444;
	default:
		__builtin_unreachable();
	}
	// lwz r21,17388(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17388);
	// lwz r21,17408(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17408);
	// lwz r21,17456(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17456);
	// lwz r21,17476(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17476);
loc_82B543EC:
	// li r11,13
	ctx.r11.s64 = 13;
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B54400:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r8,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r8.u32);
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r6,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r6.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stw r7,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r7.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B54430:
	// li r11,15
	ctx.r11.s64 = 15;
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B54444:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,24(r14)
	PPC_STORE_U32(ctx.r14.u32 + 24, ctx.r11.u32);
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_82B54450:
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x82b54fa8
	goto loc_82B54FA8;
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x82b54498
	if (!ctx.cr6.lt) goto loc_82B54498;
loc_82B54470:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82b54470
	if (ctx.cr6.lt) goto loc_82B54470;
loc_82B54498:
	// not r10,r30
	ctx.r10.u64 = ~ctx.r30.u64;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b544b4
	if (ctx.cr6.eq) goto loc_82B544B4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B544B4:
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r26,64(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b54b88
	if (ctx.cr6.eq) goto loc_82B54B88;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82b544e0
	if (!ctx.cr6.gt) goto loc_82B544E0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82B544E0:
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82b544ec
	if (!ctx.cr6.gt) goto loc_82B544EC;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82B544EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B54504;
	sub_82CA2C60(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// subf r21,r26,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r26.s64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// add r20,r26,r20
	ctx.r20.u64 = ctx.r26.u64 + ctx.r20.u64;
	// b 0x82b54fa8
	goto loc_82B54FA8;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// bge cr6,0x82b54554
	if (!ctx.cr6.lt) goto loc_82B54554;
loc_82B5452C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// blt cr6,0x82b5452c
	if (ctx.cr6.lt) goto loc_82B5452C;
loc_82B54554:
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// addi r7,r9,257
	ctx.r7.s64 = ctx.r9.s64 + 257;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r7.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r6,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r6.u32);
	// rlwinm r30,r8,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r5,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r5.u32);
	// addi r31,r31,-14
	ctx.r31.s64 = ctx.r31.s64 + -14;
	// cmplwi cr6,r4,286
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 286, ctx.xer);
	// bgt cr6,0x82b546ac
	if (ctx.cr6.gt) goto loc_82B546AC;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x82b546ac
	if (ctx.cr6.gt) goto loc_82B546AC;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r23,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b5462c
	if (!ctx.cr6.lt) goto loc_82B5462C;
loc_82B545BC:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x82b545ec
	if (!ctx.cr6.lt) goto loc_82B545EC;
loc_82B545C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82b545c4
	if (ctx.cr6.lt) goto loc_82B545C4;
loc_82B545EC:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// clrlwi r10,r30,29
	ctx.r10.u64 = ctx.r30.u32 & 0x7;
	// rlwinm r30,r30,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,-3
	ctx.r31.s64 = ctx.r31.s64 + -3;
	// lhzx r11,r9,r17
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r17.u32);
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r7,r29
	PPC_STORE_U16(ctx.r7.u32 + ctx.r29.u32, ctx.r10.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r6.u32);
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82b545bc
	if (ctx.cr6.lt) goto loc_82B545BC;
loc_82B5462C:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bge cr6,0x82b54668
	if (!ctx.cr6.lt) goto loc_82B54668;
loc_82B54638:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r17
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r17.u32);
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r8,r29
	PPC_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r23.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r7.u32);
	// cmplwi cr6,r6,19
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 19, ctx.xer);
	// blt cr6,0x82b54638
	if (ctx.cr6.lt) goto loc_82B54638;
loc_82B54668:
	// addi r11,r29,1328
	ctx.r11.s64 = ctx.r29.s64 + 1328;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r6,r29,108
	ctx.r6.s64 = ctx.r29.s64 + 108;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r7,r29,84
	ctx.r7.s64 = ctx.r29.s64 + 84;
	// stw r10,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r10.u32);
	// addi r8,r29,752
	ctx.r8.s64 = ctx.r29.s64 + 752;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b597e8
	ctx.lr = 0x82B54698;
	sub_82B597E8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82b546b4
	if (ctx.cr6.eq) goto loc_82B546B4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B546AC:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B546B4:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r23,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82b5492c
	if (!ctx.cr6.lt) goto loc_82B5492C;
loc_82B546D8:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r15,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r6,r11,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82b54748
	if (!ctx.cr6.gt) goto loc_82B54748;
loc_82B54700:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r15,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & ctx.r30.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r4,r11,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82b54700
	if (ctx.cr6.gt) goto loc_82B54700;
loc_82B54748:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x82b547b0
	if (!ctx.cr6.lt) goto loc_82B547B0;
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b54788
	if (!ctx.cr6.lt) goto loc_82B54788;
loc_82B54760:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b54760
	if (ctx.cr6.lt) goto loc_82B54760;
loc_82B54788:
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 + 56;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r8,r29
	PPC_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r11.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r7.u32);
	// b 0x82b54914
	goto loc_82B54914;
loc_82B547B0:
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// bne cr6,0x82b54820
	if (!ctx.cr6.eq) goto loc_82B54820;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b547ec
	if (!ctx.cr6.lt) goto loc_82B547EC;
loc_82B547C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b547c4
	if (ctx.cr6.lt) goto loc_82B547C4;
loc_82B547EC:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// srw r30,r30,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r31,r9,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54980
	if (ctx.cr6.eq) goto loc_82B54980;
	// addi r10,r11,55
	ctx.r10.s64 = ctx.r11.s64 + 55;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r30,r30,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// lhzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// b 0x82b548c8
	goto loc_82B548C8;
loc_82B54820:
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x82b54878
	if (!ctx.cr6.eq) goto loc_82B54878;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b5485c
	if (!ctx.cr6.lt) goto loc_82B5485C;
loc_82B54834:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b54834
	if (ctx.cr6.lt) goto loc_82B54834;
loc_82B5485C:
	// srw r8,r30,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r8,29
	ctx.r11.u64 = ctx.r8.u32 & 0x7;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r30,r8,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r9,-3
	ctx.r31.s64 = ctx.r9.s64 + -3;
	// b 0x82b548c4
	goto loc_82B548C4;
loc_82B54878:
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b548ac
	if (!ctx.cr6.lt) goto loc_82B548AC;
loc_82B54884:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b54884
	if (ctx.cr6.lt) goto loc_82B54884;
loc_82B548AC:
	// srw r8,r30,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r8,25
	ctx.r11.u64 = ctx.r8.u32 & 0x7F;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r30,r8,25,7,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// addi r31,r9,-7
	ctx.r31.s64 = ctx.r9.s64 + -7;
loc_82B548C4:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82B548C8:
	// lwz r7,104(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82b54980
	if (ctx.cr6.gt) goto loc_82B54980;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54914
	if (ctx.cr6.eq) goto loc_82B54914;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
loc_82B548F0:
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r29
	PPC_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r9.u16);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r7.u32);
	// bne 0x82b548f0
	if (!ctx.cr0.eq) goto loc_82B548F0;
loc_82B54914:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82b546d8
	if (ctx.cr6.lt) goto loc_82B546D8;
loc_82B5492C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x82b54fa8
	if (ctx.cr6.eq) goto loc_82B54FA8;
	// addi r11,r29,1328
	ctx.r11.s64 = ctx.r29.s64 + 1328;
	// lwz r5,96(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r26,r29,752
	ctx.r26.s64 = ctx.r29.s64 + 752;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r6,r29,108
	ctx.r6.s64 = ctx.r29.s64 + 108;
	// stw r10,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r10.u32);
	// addi r7,r29,84
	ctx.r7.s64 = ctx.r29.s64 + 84;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b597e8
	ctx.lr = 0x82B5496C;
	sub_82B597E8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82b54988
	if (ctx.cr6.eq) goto loc_82B54988;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B54980:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B54988:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r7,r29,88
	ctx.r7.s64 = ctx.r29.s64 + 88;
	// stw r9,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r9.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82b597e8
	ctx.lr = 0x82B549BC;
	sub_82B597E8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82b549d0
	if (ctx.cr6.eq) goto loc_82B549D0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B549D0:
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x82b54a24
	if (ctx.cr6.lt) goto loc_82B54A24;
	// cmplwi cr6,r21,258
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 258, ctx.xer);
	// blt cr6,0x82b54a24
	if (ctx.cr6.lt) goto loc_82B54A24;
	// stw r20,12(r14)
	PPC_STORE_U32(ctx.r14.u32 + 12, ctx.r20.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r21,16(r14)
	PPC_STORE_U32(ctx.r14.u32 + 16, ctx.r21.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r28,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r28.u32);
	// stw r27,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r27.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// bl 0x82b59d28
	ctx.lr = 0x82B54A08;
	sub_82B59D28(ctx, base);
	// lwz r20,12(r14)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r21,16(r14)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r28,0(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r27,4(r14)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B54A24:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r15,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82b54a94
	if (!ctx.cr6.gt) goto loc_82B54A94;
loc_82B54A4C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r15,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 & ctx.r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r3,r11,16,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82b54a4c
	if (ctx.cr6.gt) goto loc_82B54A4C;
loc_82B54A94:
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b54b50
	if (ctx.cr6.eq) goto loc_82B54B50;
	// rlwinm r10,r9,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b54b50
	if (!ctx.cr6.eq) goto loc_82B54B50;
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// slw r9,r15,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r9.u8 & 0x3F));
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r5,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82b54b48
	if (!ctx.cr6.gt) goto loc_82B54B48;
loc_82B54AF0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// rlwinm r11,r7,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r15,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r5.u8 & 0x3F));
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82b54af0
	if (ctx.cr6.gt) goto loc_82B54AF0;
loc_82B54B48:
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_82B54B50:
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r9.u32);
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54b7c
	if (!ctx.cr6.eq) goto loc_82B54B7C;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B54B7C:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54b94
	if (ctx.cr6.eq) goto loc_82B54B94;
loc_82B54B88:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
loc_82B54B94:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54ba8
	if (ctx.cr6.eq) goto loc_82B54BA8;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B54BA8:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54c18
	if (ctx.cr6.eq) goto loc_82B54C18;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b54bf8
	if (!ctx.cr6.lt) goto loc_82B54BF8;
loc_82B54BCC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b54bcc
	if (ctx.cr6.lt) goto loc_82B54BCC;
loc_82B54BF8:
	// slw r11,r15,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
loc_82B54C18:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r6,80(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// slw r11,r15,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82b54c90
	if (!ctx.cr6.gt) goto loc_82B54C90;
loc_82B54C48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// slw r11,r15,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 & ctx.r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r3,r11,16,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82b54c48
	if (ctx.cr6.gt) goto loc_82B54C48;
loc_82B54C90:
	// rlwinm r10,r11,8,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF0;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b54d44
	if (!ctx.cr6.eq) goto loc_82B54D44;
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// slw r9,r15,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r9.u8 & 0x3F));
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r5,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82b54d3c
	if (!ctx.cr6.gt) goto loc_82B54D3C;
loc_82B54CE4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// rlwinm r11,r7,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r6,80(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r15,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r5.u8 & 0x3F));
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82b54ce4
	if (ctx.cr6.gt) goto loc_82B54CE4;
loc_82B54D3C:
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_82B54D44:
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r11,8,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x40;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b54d68
	if (ctx.cr6.eq) goto loc_82B54D68;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B54D68:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54de0
	if (ctx.cr6.eq) goto loc_82B54DE0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b54dc0
	if (!ctx.cr6.lt) goto loc_82B54DC0;
loc_82B54D94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b54d94
	if (ctx.cr6.lt) goto loc_82B54D94;
loc_82B54DC0:
	// slw r11,r15,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r10.u32);
loc_82B54DE0:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// add r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 + ctx.r19.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82b54e00
	if (!ctx.cr6.gt) goto loc_82B54E00;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x82b54fa0
	goto loc_82B54FA0;
loc_82B54E00:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// subf r9,r21,r19
	ctx.r9.s64 = ctx.r19.s64 - ctx.r21.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82b54e60
	if (!ctx.cr6.gt) goto loc_82B54E60;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b54e48
	if (!ctx.cr6.gt) goto loc_82B54E48;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82b54e50
	goto loc_82B54E50;
loc_82B54E48:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82B54E50:
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82b54e6c
	if (!ctx.cr6.gt) goto loc_82B54E6C;
	// b 0x82b54e68
	goto loc_82B54E68;
loc_82B54E60:
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r10,r11,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r11.s64;
loc_82B54E68:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B54E6C:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82b54e78
	if (!ctx.cr6.gt) goto loc_82B54E78;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82B54E78:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r21,r11,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r11.s64;
	// stw r9,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r9.u32);
loc_82B54E84:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r9.u8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// bne 0x82b54e84
	if (!ctx.cr0.eq) goto loc_82B54E84;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54fa8
	if (!ctx.cr6.eq) goto loc_82B54FA8;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// b 0x82b54fa8
	goto loc_82B54FA8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b54f40
	if (ctx.cr6.eq) goto loc_82B54F40;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x82b54f0c
	if (!ctx.cr6.lt) goto loc_82B54F0C;
loc_82B54EE4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82b54ee4
	if (ctx.cr6.lt) goto loc_82B54EE4;
loc_82B54F0C:
	// lwz r10,20(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// subf. r11,r21,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r21.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,20(r14)
	PPC_STORE_U32(ctx.r14.u32 + 20, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r9.u32);
	// beq 0x82b54f34
	if (ctx.cr0.eq) goto loc_82B54F34;
	// stw r23,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r23.u32);
	// stw r23,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r23.u32);
loc_82B54F34:
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82B54F40:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b54fec
	if (ctx.cr6.eq) goto loc_82B54FEC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b54fec
	if (ctx.cr6.eq) goto loc_82B54FEC;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x82b54f90
	if (!ctx.cr6.lt) goto loc_82B54F90;
loc_82B54F68:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55000
	if (ctx.cr6.eq) goto loc_82B55000;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82b54f68
	if (ctx.cr6.lt) goto loc_82B54F68;
loc_82B54F90:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b54fe4
	if (ctx.cr6.eq) goto loc_82B54FE4;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_82B54FA0:
	// stw r11,24(r14)
	PPC_STORE_U32(ctx.r14.u32 + 24, ctx.r11.u32);
loc_82B54FA4:
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_82B54FA8:
	// lwz r16,0(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r16,28
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 28, ctx.xer);
	// ble cr6,0x82b53c00
	if (!ctx.cr6.gt) goto loc_82B53C00;
loc_82B54FB4:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B54FC0:
	// stw r20,12(r14)
	PPC_STORE_U32(ctx.r14.u32 + 12, ctx.r20.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r21,16(r14)
	PPC_STORE_U32(ctx.r14.u32 + 16, ctx.r21.u32);
	// stw r28,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r28.u32);
	// stw r27,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r27.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B54FE4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82B54FEC:
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// b 0x82b55000
	goto loc_82B55000;
	// li r18,-3
	ctx.r18.s64 = -3;
loc_82B55000:
	// stw r27,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r27.u32);
	// stw r20,12(r14)
	PPC_STORE_U32(ctx.r14.u32 + 12, ctx.r20.u32);
	// stw r28,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r28.u32);
	// stw r21,16(r14)
	PPC_STORE_U32(ctx.r14.u32 + 16, ctx.r21.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// bne cr6,0x82b5503c
	if (!ctx.cr6.eq) goto loc_82B5503C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x82b55064
	if (!ctx.cr6.lt) goto loc_82B55064;
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b55064
	if (ctx.cr6.eq) goto loc_82B55064;
loc_82B5503C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82b538f0
	ctx.lr = 0x82B55048;
	sub_82B538F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b55064
	if (ctx.cr6.eq) goto loc_82B55064;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B55064:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r9,20(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r8,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r8.s64;
	// stw r7,8(r14)
	PPC_STORE_U32(ctx.r14.u32 + 8, ctx.r7.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,20(r14)
	PPC_STORE_U32(ctx.r14.u32 + 20, ctx.r6.u32);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r4,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r4.u32);
	// beq cr6,0x82b550b8
	if (ctx.cr6.eq) goto loc_82B550B8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b550b8
	if (ctx.cr6.eq) goto loc_82B550B8;
	// stw r23,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r23.u32);
	// stw r23,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r23.u32);
loc_82B550B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r7,r11,-11
	ctx.r7.s64 = ctx.r11.s64 + -11;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// subfic r6,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r5,2,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x80;
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,44(r14)
	PPC_STORE_U32(ctx.r14.u32 + 44, ctx.r3.u32);
	// bne cr6,0x82b550f8
	if (!ctx.cr6.eq) goto loc_82B550F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b55104
	if (ctx.cr6.eq) goto loc_82B55104;
loc_82B550F8:
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82b55110
	if (!ctx.cr6.eq) goto loc_82B55110;
loc_82B55104:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82b55110
	if (!ctx.cr6.eq) goto loc_82B55110;
	// li r18,-5
	ctx.r18.s64 = -5;
loc_82B55110:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B55128"))) PPC_WEAK_FUNC(sub_82B55128);
PPC_FUNC_IMPL(__imp__sub_82B55128) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b551a8
	if (ctx.cr6.eq) goto loc_82B551A8;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b551a8
	if (ctx.cr6.eq) goto loc_82B551A8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b551a8
	if (ctx.cr6.eq) goto loc_82B551A8;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b55174
	if (ctx.cr6.eq) goto loc_82B55174;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B55174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55174:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B55188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
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
loc_82B551A8:
	// li r3,-2
	ctx.r3.s64 = -2;
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

__attribute__((alias("__imp__sub_82B551C0"))) PPC_WEAK_FUNC(sub_82B551C0);
PPC_FUNC_IMPL(__imp__sub_82B551C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x82B551DC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b5520c
	if (ctx.cr6.eq) goto loc_82B5520C;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-25272
	ctx.r9.s64 = ctx.r10.s64 + -25272;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x82b55210
	goto loc_82B55210;
loc_82B5520C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B55210:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b5522c
	if (ctx.cr6.eq) goto loc_82B5522C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5522C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5522C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B55244"))) PPC_WEAK_FUNC(sub_82B55244);
PPC_FUNC_IMPL(__imp__sub_82B55244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55248"))) PPC_WEAK_FUNC(sub_82B55248);
PPC_FUNC_IMPL(__imp__sub_82B55248) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b55298
	ctx.lr = 0x82B55268;
	sub_82B55298(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55280
	if (ctx.cr6.eq) goto loc_82B55280;
	// bl 0x8221be68
	ctx.lr = 0x82B5527C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B55280:
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

__attribute__((alias("__imp__sub_82B55298"))) PPC_WEAK_FUNC(sub_82B55298);
PPC_FUNC_IMPL(__imp__sub_82B55298) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r10,r11,-25272
	ctx.r10.s64 = ctx.r11.s64 + -25272;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b552e0
	if (ctx.cr6.eq) goto loc_82B552E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82b55a30
	ctx.lr = 0x82B552D8;
	sub_82B55A30(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x82B552E0;
	sub_8221BE68(ctx, base);
loc_82B552E0:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12508
	ctx.r9.s64 = ctx.r10.s64 + -12508;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82B55314"))) PPC_WEAK_FUNC(sub_82B55314);
PPC_FUNC_IMPL(__imp__sub_82B55314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55318"))) PPC_WEAK_FUNC(sub_82B55318);
PPC_FUNC_IMPL(__imp__sub_82B55318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B55320;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b5534c
	if (ctx.cr6.eq) goto loc_82B5534C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5534C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5534C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b55380
	if (!ctx.cr6.eq) goto loc_82B55380;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b5538c
	goto loc_82B5538C;
loc_82B55380:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_82B5538C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b553dc
	if (ctx.cr6.eq) goto loc_82B553DC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b553dc
	if (!ctx.cr6.lt) goto loc_82B553DC;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b553d0
	if (ctx.cr6.eq) goto loc_82B553D0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B553CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r28,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r28.u64);
loc_82B553D0:
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82b55408
	goto loc_82B55408;
loc_82B553DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b553ec
	if (!ctx.cr6.gt) goto loc_82B553EC;
	// twi 31,r0,22
loc_82B553EC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b558d8
	ctx.lr = 0x82B55408;
	sub_82B558D8(ctx, base);
loc_82B55408:
	// ld r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r11,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r11.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B55428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B55434"))) PPC_WEAK_FUNC(sub_82B55434);
PPC_FUNC_IMPL(__imp__sub_82B55434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55438"))) PPC_WEAK_FUNC(sub_82B55438);
PPC_FUNC_IMPL(__imp__sub_82B55438) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55468
	if (ctx.cr6.eq) goto loc_82B55468;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b55474
	if (!ctx.cr0.eq) goto loc_82B55474;
loc_82B55468:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82b554cc
	goto loc_82B554CC;
loc_82B55474:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b554c4
	if (ctx.cr6.eq) goto loc_82B554C4;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b554c4
	if (!ctx.cr6.eq) goto loc_82B554C4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b554ac
	if (!ctx.cr6.gt) goto loc_82B554AC;
	// twi 31,r0,22
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82B554AC:
	// blt cr6,0x82b554b4
	if (ctx.cr6.lt) goto loc_82B554B4;
	// twi 31,r0,22
loc_82B554B4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f5478
	ctx.lr = 0x82B554C0;
	sub_822F5478(ctx, base);
	// b 0x82b554cc
	goto loc_82B554CC;
loc_82B554C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366210
	ctx.lr = 0x82B554CC;
	sub_82366210(ctx, base);
loc_82B554CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B554E4"))) PPC_WEAK_FUNC(sub_82B554E4);
PPC_FUNC_IMPL(__imp__sub_82B554E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B554E8"))) PPC_WEAK_FUNC(sub_82B554E8);
PPC_FUNC_IMPL(__imp__sub_82B554E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82B554F0;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// cmpld cr6,r7,r10
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82b55534
	if (!ctx.cr6.gt) goto loc_82B55534;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82B55534:
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r23,r4,8
	ctx.r23.s64 = ctx.r4.s64 + 8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b55554
	if (!ctx.cr6.gt) goto loc_82B55554;
	// twi 31,r0,22
loc_82B55554:
	// lwz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
loc_82B5555C:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82b55568
	if (!ctx.cr6.gt) goto loc_82B55568;
	// twi 31,r0,22
loc_82B55568:
	// cmplw cr6,r23,r23
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82b55574
	if (ctx.cr6.eq) goto loc_82B55574;
	// twi 31,r0,22
loc_82B55574:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b557dc
	if (ctx.cr6.eq) goto loc_82B557DC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b55588
	if (ctx.cr6.lt) goto loc_82B55588;
	// twi 31,r0,22
loc_82B55588:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82b555b0
	if (ctx.cr6.lt) goto loc_82B555B0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b555a8
	if (ctx.cr6.lt) goto loc_82B555A8;
	// twi 31,r0,22
loc_82B555A8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x82b5555c
	goto loc_82B5555C;
loc_82B555B0:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpld cr6,r7,r11
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82b555fc
	if (ctx.cr6.gt) goto loc_82B555FC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B555F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82B555FC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b4fe30
	ctx.lr = 0x82B55608;
	sub_82B4FE30(ctx, base);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B55618:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b5562c
	if (!ctx.cr6.gt) goto loc_82B5562C;
	// twi 31,r0,22
loc_82B5562C:
	// cmplw cr6,r23,r23
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82b55638
	if (ctx.cr6.eq) goto loc_82B55638;
	// twi 31,r0,22
loc_82B55638:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b5576c
	if (ctx.cr6.eq) goto loc_82B5576C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b5576c
	if (ctx.cr6.eq) goto loc_82B5576C;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b55658
	if (ctx.cr6.lt) goto loc_82B55658;
	// twi 31,r0,22
loc_82B55658:
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82b55670
	if (!ctx.cr6.lt) goto loc_82B55670;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82B55670:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// beq cr6,0x82b556e4
	if (ctx.cr6.eq) goto loc_82B556E4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B556B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82b4ffe0
	ctx.lr = 0x82B556C0;
	sub_82B4FFE0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b556dc
	if (ctx.cr6.eq) goto loc_82B556DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B556DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B556DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b55724
	goto loc_82B55724;
loc_82B556E4:
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B5570C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82b4ffe0
	ctx.lr = 0x82B55720;
	sub_82B4FFE0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82B55724:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b5573c
	if (ctx.cr6.eq) goto loc_82B5573C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5573C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5573C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b55750
	if (ctx.cr6.eq) goto loc_82B55750;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_82B55750:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b55764
	if (ctx.cr6.lt) goto loc_82B55764;
	// twi 31,r0,22
loc_82B55764:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x82b55618
	goto loc_82B55618;
loc_82B5576C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82b5579c
	if (ctx.cr6.eq) goto loc_82B5579C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// bne cr6,0x82b55784
	if (!ctx.cr6.eq) goto loc_82B55784;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82B55784:
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5579C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5579C:
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b557e0
	if (ctx.cr6.eq) goto loc_82B557E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B557BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B557D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82B557DC:
	// stw r25,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r25.u32);
loc_82B557E0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82B557EC"))) PPC_WEAK_FUNC(sub_82B557EC);
PPC_FUNC_IMPL(__imp__sub_82B557EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B557F0"))) PPC_WEAK_FUNC(sub_82B557F0);
PPC_FUNC_IMPL(__imp__sub_82B557F0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B557F8"))) PPC_WEAK_FUNC(sub_82B557F8);
PPC_FUNC_IMPL(__imp__sub_82B557F8) {
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
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,12776
	ctx.r3.s64 = ctx.r11.s64 + 12776;
	// lwz r11,12780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12780);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b55840
	if (!ctx.cr6.eq) goto loc_82B55840;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// addi r11,r8,-24332
	ctx.r11.s64 = ctx.r8.s64 + -24332;
	// stw r9,12780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12780, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82b55844
	goto loc_82B55844;
loc_82B55840:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B55844:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B55854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B5586C"))) PPC_WEAK_FUNC(sub_82B5586C);
PPC_FUNC_IMPL(__imp__sub_82B5586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55870"))) PPC_WEAK_FUNC(sub_82B55870);
PPC_FUNC_IMPL(__imp__sub_82B55870) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b558ac
	if (!ctx.cr6.gt) goto loc_82B558AC;
	// twi 31,r0,22
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_82B558AC:
	// blt cr6,0x82b558b4
	if (ctx.cr6.lt) goto loc_82B558B4;
	// twi 31,r0,22
loc_82B558B4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B558D4"))) PPC_WEAK_FUNC(sub_82B558D4);
PPC_FUNC_IMPL(__imp__sub_82B558D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B558D8"))) PPC_WEAK_FUNC(sub_82B558D8);
PPC_FUNC_IMPL(__imp__sub_82B558D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B558E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55910
	if (ctx.cr6.eq) goto loc_82B55910;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b55918
	if (!ctx.cr0.eq) goto loc_82B55918;
loc_82B55910:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b55948
	goto loc_82B55948;
loc_82B55918:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b55924
	if (!ctx.cr6.gt) goto loc_82B55924;
	// twi 31,r0,22
loc_82B55924:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b55938
	if (ctx.cr6.eq) goto loc_82B55938;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b5593c
	if (ctx.cr6.eq) goto loc_82B5593C;
loc_82B55938:
	// twi 31,r0,22
loc_82B5593C:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 4;
loc_82B55948:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b55a98
	ctx.lr = 0x82B55954;
	sub_82B55A98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b55968
	if (!ctx.cr6.gt) goto loc_82B55968;
	// twi 31,r0,22
loc_82B55968:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82b55998
	if (ctx.cr6.gt) goto loc_82B55998;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b5599c
	if (!ctx.cr6.lt) goto loc_82B5599C;
loc_82B55998:
	// twi 31,r0,22
loc_82B5599C:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B559B4"))) PPC_WEAK_FUNC(sub_82B559B4);
PPC_FUNC_IMPL(__imp__sub_82B559B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B559B8"))) PPC_WEAK_FUNC(sub_82B559B8);
PPC_FUNC_IMPL(__imp__sub_82B559B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B559C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b55a1c
	if (ctx.cr6.eq) goto loc_82B55A1C;
loc_82B559E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b55a10
	if (ctx.cr6.eq) goto loc_82B55A10;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82b55a08
	if (ctx.cr6.eq) goto loc_82B55A08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55A08:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_82B55A10:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82b559e0
	if (!ctx.cr0.eq) goto loc_82B559E0;
loc_82B55A1C:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B55A2C"))) PPC_WEAK_FUNC(sub_82B55A2C);
PPC_FUNC_IMPL(__imp__sub_82B55A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55A30"))) PPC_WEAK_FUNC(sub_82B55A30);
PPC_FUNC_IMPL(__imp__sub_82B55A30) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b55a7c
	if (ctx.cr6.eq) goto loc_82B55A7C;
loc_82B55A54:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b55a70
	if (ctx.cr6.eq) goto loc_82B55A70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55A70:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82b55a54
	if (!ctx.cr6.eq) goto loc_82B55A54;
loc_82B55A7C:
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

__attribute__((alias("__imp__sub_82B55A94"))) PPC_WEAK_FUNC(sub_82B55A94);
PPC_FUNC_IMPL(__imp__sub_82B55A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55A98"))) PPC_WEAK_FUNC(sub_82B55A98);
PPC_FUNC_IMPL(__imp__sub_82B55A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B55AA0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b55d98
	ctx.lr = 0x82B55AB8;
	sub_82B55D98(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b55acc
	if (!ctx.cr6.eq) goto loc_82B55ACC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b55ad8
	goto loc_82B55AD8;
loc_82B55ACC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_82B55AD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b55ae8
	if (!ctx.cr6.eq) goto loc_82B55AE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b55af4
	goto loc_82B55AF4;
loc_82B55AE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
loc_82B55AF4:
	// lis r8,4095
	ctx.r8.s64 = 268369920;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x82b55b10
	if (!ctx.cr6.lt) goto loc_82B55B10;
	// bl 0x82684b38
	ctx.lr = 0x82B55B0C;
	sub_82684B38(ctx, base);
	// b 0x82b55d70
	goto loc_82B55D70;
loc_82B55B10:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b55b20
	if (!ctx.cr6.eq) goto loc_82B55B20;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b55b2c
	goto loc_82B55B2C;
loc_82B55B20:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
loc_82B55B2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b55c48
	if (!ctx.cr6.lt) goto loc_82B55C48;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b55b50
	if (ctx.cr6.lt) goto loc_82B55B50;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82B55B50:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b55b60
	if (!ctx.cr6.eq) goto loc_82B55B60;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b55b6c
	goto loc_82B55B6C;
loc_82B55B60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
loc_82B55B6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b55b98
	if (!ctx.cr6.lt) goto loc_82B55B98;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b55b88
	if (!ctx.cr6.eq) goto loc_82B55B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b55b94
	goto loc_82B55B94;
loc_82B55B88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
loc_82B55B94:
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82B55B98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82512640
	ctx.lr = 0x82B55BA4;
	sub_82512640(ctx, base);
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b55df8
	ctx.lr = 0x82B55BC0;
	sub_82B55DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b559b8
	ctx.lr = 0x82B55BD4;
	sub_82B559B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b55df8
	ctx.lr = 0x82B55BE8;
	sub_82B55DF8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b55bfc
	if (!ctx.cr6.eq) goto loc_82B55BFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b55c08
	goto loc_82B55C08;
loc_82B55BFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
loc_82B55C08:
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b55c28
	if (ctx.cr6.eq) goto loc_82B55C28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82b55a30
	ctx.lr = 0x82B55C20;
	sub_82B55A30(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x82B55C28;
	sub_8221BE68(ctx, base);
loc_82B55C28:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82b55d70
	goto loc_82B55D70;
loc_82B55C48:
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r30,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r30.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82b55cc8
	if (!ctx.cr6.lt) goto loc_82B55CC8;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b55df8
	ctx.lr = 0x82B55C70;
	sub_82B55DF8(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// subfic r5,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r10.s64;
	// bl 0x82b559b8
	ctx.lr = 0x82B55C8C;
	sub_82B559B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b55d70
	if (ctx.cr6.eq) goto loc_82B55D70;
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82B55CA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260c130
	ctx.lr = 0x82B55CB4;
	sub_8260C130(ctx, base);
	// std r31,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r31.u64);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b55ca8
	if (!ctx.cr6.eq) goto loc_82B55CA8;
	// b 0x82b55d70
	goto loc_82B55D70;
loc_82B55CC8:
	// addi r29,r5,-16
	ctx.r29.s64 = ctx.r5.s64 + -16;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b55df8
	ctx.lr = 0x82B55CD8;
	sub_82B55DF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b55d40
	if (ctx.cr6.eq) goto loc_82B55D40;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
loc_82B55CE8:
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b55d0c
	if (ctx.cr6.eq) goto loc_82B55D0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55D0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b55d28
	if (ctx.cr6.eq) goto loc_82B55D28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55D28:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ld r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// bne cr6,0x82b55ce8
	if (!ctx.cr6.eq) goto loc_82B55CE8;
loc_82B55D40:
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b55d70
	if (ctx.cr6.eq) goto loc_82B55D70;
	// ld r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82B55D54:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260c130
	ctx.lr = 0x82B55D60;
	sub_8260C130(ctx, base);
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b55d54
	if (!ctx.cr6.eq) goto loc_82B55D54;
loc_82B55D70:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b55d8c
	if (ctx.cr6.eq) goto loc_82B55D8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55D8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B55D94"))) PPC_WEAK_FUNC(sub_82B55D94);
PPC_FUNC_IMPL(__imp__sub_82B55D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55D98"))) PPC_WEAK_FUNC(sub_82B55D98);
PPC_FUNC_IMPL(__imp__sub_82B55D98) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82b55dd4
	if (ctx.cr6.eq) goto loc_82B55DD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55DD4:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82B55DF8"))) PPC_WEAK_FUNC(sub_82B55DF8);
PPC_FUNC_IMPL(__imp__sub_82B55DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B55E00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b55e5c
	if (ctx.cr6.eq) goto loc_82B55E5C;
	// subf r30,r31,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r31.s64;
loc_82B55E18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b55e4c
	if (ctx.cr6.eq) goto loc_82B55E4C;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82b55e40
	if (ctx.cr6.eq) goto loc_82B55E40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55E40:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// ldx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r11.u32);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_82B55E4C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b55e18
	if (!ctx.cr6.eq) goto loc_82B55E18;
loc_82B55E5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B55E68"))) PPC_WEAK_FUNC(sub_82B55E68);
PPC_FUNC_IMPL(__imp__sub_82B55E68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b55eb8
	ctx.lr = 0x82B55E88;
	sub_82B55EB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55ea0
	if (ctx.cr6.eq) goto loc_82B55EA0;
	// bl 0x8221be68
	ctx.lr = 0x82B55E9C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B55EA0:
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

__attribute__((alias("__imp__sub_82B55EB8"))) PPC_WEAK_FUNC(sub_82B55EB8);
PPC_FUNC_IMPL(__imp__sub_82B55EB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,10788
	ctx.r9.s64 = ctx.r11.s64 + 10788;
	// addi r8,r10,-25228
	ctx.r8.s64 = ctx.r10.s64 + -25228;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b55f00
	if (ctx.cr6.eq) goto loc_82B55F00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55F00:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-28340
	ctx.r9.s64 = ctx.r11.s64 + -28340;
	// addi r8,r10,-28292
	ctx.r8.s64 = ctx.r10.s64 + -28292;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B55F2C"))) PPC_WEAK_FUNC(sub_82B55F2C);
PPC_FUNC_IMPL(__imp__sub_82B55F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55F30"))) PPC_WEAK_FUNC(sub_82B55F30);
PPC_FUNC_IMPL(__imp__sub_82B55F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B55F44"))) PPC_WEAK_FUNC(sub_82B55F44);
PPC_FUNC_IMPL(__imp__sub_82B55F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55F48"))) PPC_WEAK_FUNC(sub_82B55F48);
PPC_FUNC_IMPL(__imp__sub_82B55F48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b4d518
	ctx.lr = 0x82B55F60;
	sub_82B4D518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B55F78"))) PPC_WEAK_FUNC(sub_82B55F78);
PPC_FUNC_IMPL(__imp__sub_82B55F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82B55F80;
	sub_82CA2BC8(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b55fa8
	if (!ctx.cr6.eq) goto loc_82B55FA8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82b55fc0
	goto loc_82B55FC0;
loc_82B55FA8:
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82B55FC0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b56008
	if (ctx.cr6.eq) goto loc_82B56008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B55FD0;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82b56438
	if (!ctx.cr6.eq) goto loc_82B56438;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57010
	ctx.lr = 0x82B55FE4;
	sub_82B57010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56438
	if (!ctx.cr6.eq) goto loc_82B56438;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82B56008:
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r25,1
	ctx.r25.s64 = 1;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// or r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r28,r11,28708
	ctx.r28.s64 = ctx.r11.s64 + 28708;
	// blt cr6,0x82b560b0
	if (ctx.cr6.lt) goto loc_82B560B0;
	// beq cr6,0x82b56040
	if (ctx.cr6.eq) goto loc_82B56040;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82b560b4
	if (!ctx.cr6.lt) goto loc_82B560B4;
	// stb r25,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r25.u8);
	// b 0x82b560b4
	goto loc_82B560B4;
loc_82B56040:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r25,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r25.u8);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b560b4
	if (ctx.cr6.eq) goto loc_82B560B4;
	// rlwinm r11,r3,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b560a8
	if (ctx.cr6.eq) goto loc_82B560A8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5609C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x8221be68
	ctx.lr = 0x82B560A4;
	sub_8221BE68(ctx, base);
	// b 0x82b560b4
	goto loc_82B560B4;
loc_82B560A8:
	// bl 0x82caa2e0
	ctx.lr = 0x82B560AC;
	sub_82CAA2E0(ctx, base);
	// b 0x82b560b4
	goto loc_82B560B4;
loc_82B560B0:
	// stb r25,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r25.u8);
loc_82B560B4:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56438
	if (ctx.cr6.eq) goto loc_82B56438;
	// lbz r9,33(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r29,r11,28372
	ctx.r29.s64 = ctx.r11.s64 + 28372;
	// addi r27,r10,-25184
	ctx.r27.s64 = ctx.r10.s64 + -25184;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82b561a8
	if (!ctx.cr6.eq) goto loc_82B561A8;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5610C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8221be68
	ctx.lr = 0x82B56114;
	sub_8221BE68(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r7,-24(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stb r26,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r26.u8);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne cr6,0x82b561ac
	if (!ctx.cr6.eq) goto loc_82B561AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b561ac
	if (ctx.cr6.eq) goto loc_82B561AC;
	// lwz r23,12(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r22,16(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221eb78
	ctx.lr = 0x82B5614C;
	sub_8221EB78(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r21,336(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r23,48(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r20,156(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r9,-25176
	ctx.r8.s64 = ctx.r9.s64 + -25176;
	// stfd f1,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B561A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B561A8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82B561AC:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5623c
	if (ctx.cr6.eq) goto loc_82B5623C;
	// lwz r11,-24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82b56238
	if (!ctx.cr6.eq) goto loc_82B56238;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b56238
	if (ctx.cr6.eq) goto loc_82B56238;
	// lwz r23,12(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r22,16(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221eb78
	ctx.lr = 0x82B561DC;
	sub_8221EB78(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r21,336(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r23,68(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r20,160(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r9,-25116
	ctx.r8.s64 = ctx.r9.s64 + -25116;
	// stfd f1,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B56238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56238:
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
loc_82B5623C:
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b56318
	if (!ctx.cr6.eq) goto loc_82B56318;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5627C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8221be68
	ctx.lr = 0x82B56284;
	sub_8221BE68(ctx, base);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r11,-24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stb r26,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r26.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82b56318
	if (!ctx.cr6.eq) goto loc_82B56318;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b56318
	if (ctx.cr6.eq) goto loc_82B56318;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r23,16(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221eb78
	ctx.lr = 0x82B562BC;
	sub_8221EB78(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r22,336(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r28,88(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r21,164(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B562E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r9,-25056
	ctx.r8.s64 = ctx.r9.s64 + -25056;
	// stfd f1,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B56318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56318:
	// lbz r11,35(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5635c
	if (ctx.cr6.eq) goto loc_82B5635C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stb r26,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r26.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b56338
	if (!ctx.cr6.eq) goto loc_82B56338;
	// twi 31,r0,22
loc_82B56338:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57010
	ctx.lr = 0x82B56344;
	sub_82B57010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b5635c
	if (!ctx.cr6.eq) goto loc_82B5635C;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_82B5635C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56438
	if (!ctx.cr6.eq) goto loc_82B56438;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b56378
	if (!ctx.cr6.eq) goto loc_82B56378;
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
loc_82B56378:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x822c9380
	ctx.lr = 0x82B56380;
	sub_822C9380(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b563a4
	if (ctx.cr6.eq) goto loc_82B563A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B563A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B563A4:
	// lwz r11,-24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b56424
	if (!ctx.cr6.eq) goto loc_82B56424;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b56424
	if (ctx.cr6.eq) goto loc_82B56424;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221eb78
	ctx.lr = 0x82B563CC;
	sub_8221EB78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,336(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r29,200(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B563EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r9,-24996
	ctx.r8.s64 = ctx.r9.s64 + -24996;
	// stfd f1,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B56424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56424:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56438:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82B56444"))) PPC_WEAK_FUNC(sub_82B56444);
PPC_FUNC_IMPL(__imp__sub_82B56444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B56448"))) PPC_WEAK_FUNC(sub_82B56448);
PPC_FUNC_IMPL(__imp__sub_82B56448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82B56450;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r11,-28476
	ctx.r8.s64 = ctx.r11.s64 + -28476;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r10,-24828
	ctx.r7.s64 = ctx.r10.s64 + -24828;
	// addi r6,r9,-24780
	ctx.r6.s64 = ctx.r9.s64 + -24780;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b564c0
	if (ctx.cr6.eq) goto loc_82B564C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B564C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B564C0:
	// li r11,997
	ctx.r11.s64 = 997;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r28,r31,204
	ctx.r28.s64 = ctx.r31.s64 + 204;
	// stb r30,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r30.u8);
	// addi r9,r10,-24944
	ctx.r9.s64 = ctx.r10.s64 + -24944;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// subf r10,r9,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r9.s64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// std r25,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r25.u64);
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
loc_82B56534:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82b56534
	if (!ctx.cr6.eq) goto loc_82B56534;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbc4b8
	ctx.lr = 0x82B5655C;
	sub_82CBC4B8(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// stw r3,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r3.u32);
	// addi r8,r11,23432
	ctx.r8.s64 = ctx.r11.s64 + 23432;
loc_82B56568:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b56568
	if (!ctx.cr0.eq) goto loc_82B56568;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r24,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r24.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b565dc
	if (ctx.cr6.eq) goto loc_82B565DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B565C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b565dc
	if (ctx.cr6.eq) goto loc_82B565DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B565DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B565DC:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b565f8
	if (ctx.cr6.eq) goto loc_82B565F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B565F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B565F8:
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b56618
	if (ctx.cr6.eq) goto loc_82B56618;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56618:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r10,r25,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 21) & 0x1FFFFF;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b56d58
	ctx.lr = 0x82B5663C;
	sub_82B56D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82B56648"))) PPC_WEAK_FUNC(sub_82B56648);
PPC_FUNC_IMPL(__imp__sub_82B56648) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b56698
	ctx.lr = 0x82B56668;
	sub_82B56698(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56680
	if (ctx.cr6.eq) goto loc_82B56680;
	// bl 0x8221be68
	ctx.lr = 0x82B5667C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B56680:
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

__attribute__((alias("__imp__sub_82B56698"))) PPC_WEAK_FUNC(sub_82B56698);
PPC_FUNC_IMPL(__imp__sub_82B56698) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-24828
	ctx.r9.s64 = ctx.r11.s64 + -24828;
	// addi r8,r10,-24780
	ctx.r8.s64 = ctx.r10.s64 + -24780;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x82cbbf60
	ctx.lr = 0x82B566CC;
	sub_82CBBF60(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b566e8
	if (ctx.cr6.eq) goto loc_82B566E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B566E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B566E8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b56704
	if (ctx.cr6.eq) goto loc_82B56704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56704:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b56720
	if (ctx.cr6.eq) goto loc_82B56720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56720:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-28340
	ctx.r9.s64 = ctx.r11.s64 + -28340;
	// addi r8,r10,-28292
	ctx.r8.s64 = ctx.r10.s64 + -28292;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B5674C"))) PPC_WEAK_FUNC(sub_82B5674C);
PPC_FUNC_IMPL(__imp__sub_82B5674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B56750"))) PPC_WEAK_FUNC(sub_82B56750);
PPC_FUNC_IMPL(__imp__sub_82B56750) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B56758"))) PPC_WEAK_FUNC(sub_82B56758);
PPC_FUNC_IMPL(__imp__sub_82B56758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B56760;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-24916
	ctx.r27.s64 = ctx.r11.s64 + -24916;
	// lwz r11,28368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56794
	if (ctx.cr6.eq) goto loc_82B56794;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B56794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56794:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B567A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b567e4
	if (!ctx.cr6.eq) goto loc_82B567E4;
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82B567B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b49b50
	ctx.lr = 0x82B567C8;
	sub_82B49B50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B567DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b567b8
	if (ctx.cr6.eq) goto loc_82B567B8;
loc_82B567E4:
	// lwz r11,28368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56804
	if (ctx.cr6.eq) goto loc_82B56804;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B56804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56804:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B56820"))) PPC_WEAK_FUNC(sub_82B56820);
PPC_FUNC_IMPL(__imp__sub_82B56820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// lwz r10,128(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B56834"))) PPC_WEAK_FUNC(sub_82B56834);
PPC_FUNC_IMPL(__imp__sub_82B56834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B56838"))) PPC_WEAK_FUNC(sub_82B56838);
PPC_FUNC_IMPL(__imp__sub_82B56838) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B56840"))) PPC_WEAK_FUNC(sub_82B56840);
PPC_FUNC_IMPL(__imp__sub_82B56840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56858
	if (!ctx.cr6.eq) goto loc_82B56858;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82B56858:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B56870"))) PPC_WEAK_FUNC(sub_82B56870);
PPC_FUNC_IMPL(__imp__sub_82B56870) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b5689c
	if (ctx.cr6.eq) goto loc_82B5689C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82B5689C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B568A8"))) PPC_WEAK_FUNC(sub_82B568A8);
PPC_FUNC_IMPL(__imp__sub_82B568A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B568BC"))) PPC_WEAK_FUNC(sub_82B568BC);
PPC_FUNC_IMPL(__imp__sub_82B568BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B568C0"))) PPC_WEAK_FUNC(sub_82B568C0);
PPC_FUNC_IMPL(__imp__sub_82B568C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B568C8"))) PPC_WEAK_FUNC(sub_82B568C8);
PPC_FUNC_IMPL(__imp__sub_82B568C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,180(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82b568fc
	if (ctx.cr6.eq) goto loc_82B568FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B568FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B568FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B56914"))) PPC_WEAK_FUNC(sub_82B56914);
PPC_FUNC_IMPL(__imp__sub_82B56914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B56918"))) PPC_WEAK_FUNC(sub_82B56918);
PPC_FUNC_IMPL(__imp__sub_82B56918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82B56920;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56948
	if (ctx.cr6.eq) goto loc_82B56948;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B56948:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56a1c
	if (ctx.cr6.eq) goto loc_82B56A1C;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b56990
	if (!ctx.cr6.eq) goto loc_82B56990;
loc_82B5696C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b56990
	if (!ctx.cr6.eq) goto loc_82B56990;
	// bl 0x82cc0758
	ctx.lr = 0x82B5697C;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B56988;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b5696c
	if (ctx.cr6.eq) goto loc_82B5696C;
loc_82B56990:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
loc_82B56994:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b569a4
	if (!ctx.cr6.eq) goto loc_82B569A4;
	// twi 31,r0,22
loc_82B569A4:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r7,r11,24440
	ctx.r7.s64 = ctx.r11.s64 + 24440;
	// bl 0x82cc1578
	ctx.lr = 0x82B569BC;
	sub_82CC1578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b56bdc
	if (!ctx.cr6.eq) goto loc_82B56BDC;
	// bl 0x82cc0758
	ctx.lr = 0x82B569C8;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B569D4;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b56994
	if (ctx.cr6.eq) goto loc_82B56994;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x822c9380
	ctx.lr = 0x82B569E8;
	sub_822C9380(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b56a0c
	if (ctx.cr6.eq) goto loc_82B56A0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B56A10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56bcc
	if (ctx.cr6.eq) goto loc_82B56BCC;
loc_82B56A1C:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56ae8
	if (ctx.cr6.eq) goto loc_82B56AE8;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b56a5c
	if (!ctx.cr6.eq) goto loc_82B56A5C;
loc_82B56A38:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b56a5c
	if (!ctx.cr6.eq) goto loc_82B56A5C;
	// bl 0x82cc0758
	ctx.lr = 0x82B56A48;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B56A54;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b56a38
	if (ctx.cr6.eq) goto loc_82B56A38;
loc_82B56A5C:
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
loc_82B56A60:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b56a70
	if (!ctx.cr6.eq) goto loc_82B56A70;
	// twi 31,r0,22
loc_82B56A70:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r7,r11,24440
	ctx.r7.s64 = ctx.r11.s64 + 24440;
	// bl 0x82cc1578
	ctx.lr = 0x82B56A88;
	sub_82CC1578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b56be4
	if (!ctx.cr6.eq) goto loc_82B56BE4;
	// bl 0x82cc0758
	ctx.lr = 0x82B56A94;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B56AA0;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b56a60
	if (ctx.cr6.eq) goto loc_82B56A60;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x822c9380
	ctx.lr = 0x82B56AB4;
	sub_822C9380(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b56ad8
	if (ctx.cr6.eq) goto loc_82B56AD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56AD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B56ADC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56bcc
	if (ctx.cr6.eq) goto loc_82B56BCC;
loc_82B56AE8:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56bf8
	if (ctx.cr6.eq) goto loc_82B56BF8;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56bf4
	if (!ctx.cr6.eq) goto loc_82B56BF4;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56bf4
	if (!ctx.cr6.eq) goto loc_82B56BF4;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b56b40
	if (!ctx.cr6.eq) goto loc_82B56B40;
loc_82B56B1C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b56b40
	if (!ctx.cr6.eq) goto loc_82B56B40;
	// bl 0x82cc0758
	ctx.lr = 0x82B56B2C;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B56B38;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b56b1c
	if (ctx.cr6.eq) goto loc_82B56B1C;
loc_82B56B40:
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
loc_82B56B44:
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b56b54
	if (!ctx.cr6.eq) goto loc_82B56B54;
	// twi 31,r0,22
loc_82B56B54:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r7,r11,24440
	ctx.r7.s64 = ctx.r11.s64 + 24440;
	// bl 0x82cc1578
	ctx.lr = 0x82B56B6C;
	sub_82CC1578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b56bec
	if (!ctx.cr6.eq) goto loc_82B56BEC;
	// bl 0x82cc0758
	ctx.lr = 0x82B56B78;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B56B84;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b56b44
	if (ctx.cr6.eq) goto loc_82B56B44;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x822c9380
	ctx.lr = 0x82B56B98;
	sub_822C9380(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b56bbc
	if (ctx.cr6.eq) goto loc_82B56BBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56BBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B56BC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56bf8
	if (!ctx.cr6.eq) goto loc_82B56BF8;
loc_82B56BCC:
	// li r3,-260
	ctx.r3.s64 = -260;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B56BDC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82b56a10
	goto loc_82B56A10;
loc_82B56BE4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82b56adc
	goto loc_82B56ADC;
loc_82B56BEC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82b56bc0
	goto loc_82B56BC0;
loc_82B56BF4:
	// stb r27,31(r29)
	PPC_STORE_U8(ctx.r29.u32 + 31, ctx.r27.u8);
loc_82B56BF8:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stb r27,32(r29)
	PPC_STORE_U8(ctx.r29.u32 + 32, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56c3c
	if (!ctx.cr6.eq) goto loc_82B56C3C;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56c3c
	if (!ctx.cr6.eq) goto loc_82B56C3C;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56c3c
	if (!ctx.cr6.eq) goto loc_82B56C3C;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// lwz r3,328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// bl 0x822c9380
	ctx.lr = 0x82B56C2C;
	sub_822C9380(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82B56C3C:
	// lwz r3,180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwz r10,196(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B56C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82b56d1c
	if (!ctx.cr6.eq) goto loc_82B56D1C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b56d1c
	if (ctx.cr6.eq) goto loc_82B56D1C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8221eb58
	ctx.lr = 0x82B56C90;
	sub_8221EB58(ctx, base);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r9,-25184
	ctx.r28.s64 = ctx.r9.s64 + -25184;
	// lfd f0,28352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28352);
	// lfd f13,28360(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28360);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - ctx.f0.f64;
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,336(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// fdiv f31,f10,f13
	ctx.f31.f64 = ctx.f10.f64 / ctx.f13.f64;
	// lwz r30,332(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// ld r25,188(r29)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r29.u32 + 188);
	// lwz r29,196(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B56CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r6,-24876
	ctx.r5.s64 = ctx.r6.s64 + -24876;
	// stfd f1,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B56D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56D1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82B56D2C"))) PPC_WEAK_FUNC(sub_82B56D2C);
PPC_FUNC_IMPL(__imp__sub_82B56D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B56D30"))) PPC_WEAK_FUNC(sub_82B56D30);
PPC_FUNC_IMPL(__imp__sub_82B56D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x822f54c8
	ctx.lr = 0x82B56D44;
	sub_822F54C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B56D58"))) PPC_WEAK_FUNC(sub_82B56D58);
PPC_FUNC_IMPL(__imp__sub_82B56D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82B56D60;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b56dc8
	if (!ctx.cr6.eq) goto loc_82B56DC8;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// std r10,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r10.u64);
	// std r8,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r8.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82B56DC8:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56de4
	if (ctx.cr6.eq) goto loc_82B56DE4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82B56DE4:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r29,196(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stb r28,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r28.u8);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r28,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r28.u8);
	// not r24,r10
	ctx.r24.u64 = ~ctx.r10.u64;
	// ld r30,188(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 188);
	// ld r25,0(r23)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r25.u64);
	// std r25,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r25.u64);
	// beq cr6,0x82b56ec4
	if (ctx.cr6.eq) goto loc_82B56EC4;
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// andc r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 & ~ctx.r24.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b56ec4
	if (ctx.cr6.eq) goto loc_82B56EC4;
	// bl 0x8221f388
	ctx.lr = 0x82B56E34;
	sub_8221F388(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// extsw r11,r24
	ctx.r11.s64 = ctx.r24.s32;
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// subf r11,r27,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r8.u64);
	// bge cr6,0x82b56e60
	if (!ctx.cr6.lt) goto loc_82B56E60;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82B56E60:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rldicl r7,r10,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r26,r3,r11
	ctx.r26.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// ld r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// std r9,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r9.u64);
	// b 0x82b56ecc
	goto loc_82B56ECC;
loc_82B56EC4:
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_82B56ECC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b56f64
	if (ctx.cr6.eq) goto loc_82B56F64;
	// and r27,r29,r24
	ctx.r27.u64 = ctx.r29.u64 & ctx.r24.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b56f64
	if (ctx.cr6.eq) goto loc_82B56F64;
	// rlwinm r11,r26,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// std r25,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r25.u64);
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82b56f24
	if (!ctx.cr6.lt) goto loc_82B56F24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221f388
	ctx.lr = 0x82B56F14;
	sub_8221F388(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
loc_82B56F24:
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rldicl r8,r30,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r31,-4
	ctx.r7.s64 = ctx.r31.s64 + -4;
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// stb r28,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r28.u8);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// ld r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82b56f70
	goto loc_82B56F70;
loc_82B56F64:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
loc_82B56F70:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b56fbc
	if (ctx.cr6.eq) goto loc_82B56FBC;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x8221f388
	ctx.lr = 0x82B56F80;
	sub_8221F388(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// rldicl r8,r30,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// std r25,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r25.u64);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r6.u64);
	// b 0x82b56fc0
	goto loc_82B56FC0;
loc_82B56FBC:
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
loc_82B56FC0:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r11,-5
	ctx.r9.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// bne cr6,0x82b56ff0
	if (!ctx.cr6.eq) goto loc_82B56FF0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56ff0
	if (!ctx.cr6.eq) goto loc_82B56FF0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b57004
	if (ctx.cr6.eq) goto loc_82B57004;
loc_82B56FF0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57004:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82B57010"))) PPC_WEAK_FUNC(sub_82B57010);
PPC_FUNC_IMPL(__imp__sub_82B57010) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b5705c
	if (!ctx.cr6.eq) goto loc_82B5705C;
loc_82B57038:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b5705c
	if (!ctx.cr6.eq) goto loc_82B5705C;
	// bl 0x82cc0758
	ctx.lr = 0x82B57048;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B57054;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b57038
	if (ctx.cr6.eq) goto loc_82B57038;
loc_82B5705C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82b570a4
	if (ctx.cr6.lt) goto loc_82B570A4;
	// beq cr6,0x82b57088
	if (ctx.cr6.eq) goto loc_82B57088;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82b570d4
	if (!ctx.cr6.lt) goto loc_82B570D4;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b57080
	if (!ctx.cr6.eq) goto loc_82B57080;
	// twi 31,r0,22
loc_82B57080:
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// b 0x82b570b8
	goto loc_82B570B8;
loc_82B57088:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b57098
	if (!ctx.cr6.eq) goto loc_82B57098;
	// twi 31,r0,22
loc_82B57098:
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// b 0x82b570bc
	goto loc_82B570BC;
loc_82B570A4:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b570b4
	if (!ctx.cr6.eq) goto loc_82B570B4;
	// twi 31,r0,22
loc_82B570B4:
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
loc_82B570B8:
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
loc_82B570BC:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r7,r11,24440
	ctx.r7.s64 = ctx.r11.s64 + 24440;
	// bl 0x82cc1578
	ctx.lr = 0x82B570CC;
	sub_82CC1578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b5713c
	if (!ctx.cr6.eq) goto loc_82B5713C;
loc_82B570D4:
	// bl 0x82cc0758
	ctx.lr = 0x82B570D8;
	sub_82CC0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57148
	ctx.lr = 0x82B570E4;
	sub_82B57148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b5705c
	if (ctx.cr6.eq) goto loc_82B5705C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x822c9380
	ctx.lr = 0x82B570FC;
	sub_822C9380(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b57120
	if (ctx.cr6.eq) goto loc_82B57120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B57124:
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
loc_82B5713C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b57124
	goto loc_82B57124;
}

__attribute__((alias("__imp__sub_82B57144"))) PPC_WEAK_FUNC(sub_82B57144);
PPC_FUNC_IMPL(__imp__sub_82B57144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57148"))) PPC_WEAK_FUNC(sub_82B57148);
PPC_FUNC_IMPL(__imp__sub_82B57148) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// cmplwi cr6,r11,159
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 159, ctx.xer);
	// bgt cr6,0x82b57400
	if (ctx.cr6.gt) {
		sub_82B57400(ctx, base);
		return;
	}
	// lis r12,-32075
	ctx.r12.s64 = -2102067200;
	// addi r12,r12,29040
	ctx.r12.s64 = ctx.r12.s64 + 29040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B573F0
		return;
	case 1:
		// ERROR: 0x82B573F0
		return;
	case 2:
		// ERROR: 0x82B57400
		return;
	case 3:
		// ERROR: 0x82B573F0
		return;
	case 4:
		// ERROR: 0x82B57400
		return;
	case 5:
		// ERROR: 0x82B57400
		return;
	case 6:
		// ERROR: 0x82B57400
		return;
	case 7:
		// ERROR: 0x82B57400
		return;
	case 8:
		// ERROR: 0x82B57400
		return;
	case 9:
		// ERROR: 0x82B57400
		return;
	case 10:
		// ERROR: 0x82B57400
		return;
	case 11:
		// ERROR: 0x82B57400
		return;
	case 12:
		// ERROR: 0x82B57400
		return;
	case 13:
		// ERROR: 0x82B573F8
		return;
	case 14:
		// ERROR: 0x82B57400
		return;
	case 15:
		// ERROR: 0x82B57400
		return;
	case 16:
		// ERROR: 0x82B573F8
		return;
	case 17:
		// ERROR: 0x82B57400
		return;
	case 18:
		// ERROR: 0x82B57400
		return;
	case 19:
		// ERROR: 0x82B57400
		return;
	case 20:
		// ERROR: 0x82B57400
		return;
	case 21:
		// ERROR: 0x82B57400
		return;
	case 22:
		// ERROR: 0x82B57400
		return;
	case 23:
		// ERROR: 0x82B57400
		return;
	case 24:
		// ERROR: 0x82B57400
		return;
	case 25:
		// ERROR: 0x82B57400
		return;
	case 26:
		// ERROR: 0x82B57400
		return;
	case 27:
		// ERROR: 0x82B57400
		return;
	case 28:
		// ERROR: 0x82B57400
		return;
	case 29:
		// ERROR: 0x82B57400
		return;
	case 30:
		// ERROR: 0x82B573F8
		return;
	case 31:
		// ERROR: 0x82B57400
		return;
	case 32:
		// ERROR: 0x82B57400
		return;
	case 33:
		// ERROR: 0x82B57400
		return;
	case 34:
		// ERROR: 0x82B57400
		return;
	case 35:
		// ERROR: 0x82B57400
		return;
	case 36:
		// ERROR: 0x82B57400
		return;
	case 37:
		// ERROR: 0x82B57400
		return;
	case 38:
		// ERROR: 0x82B57400
		return;
	case 39:
		// ERROR: 0x82B57400
		return;
	case 40:
		// ERROR: 0x82B57400
		return;
	case 41:
		// ERROR: 0x82B57400
		return;
	case 42:
		// ERROR: 0x82B57400
		return;
	case 43:
		// ERROR: 0x82B57400
		return;
	case 44:
		// ERROR: 0x82B57400
		return;
	case 45:
		// ERROR: 0x82B57400
		return;
	case 46:
		// ERROR: 0x82B57400
		return;
	case 47:
		// ERROR: 0x82B57400
		return;
	case 48:
		// ERROR: 0x82B57400
		return;
	case 49:
		// ERROR: 0x82B57400
		return;
	case 50:
		// ERROR: 0x82B57400
		return;
	case 51:
		// ERROR: 0x82B57400
		return;
	case 52:
		// ERROR: 0x82B57400
		return;
	case 53:
		// ERROR: 0x82B57400
		return;
	case 54:
		// ERROR: 0x82B57400
		return;
	case 55:
		// ERROR: 0x82B57400
		return;
	case 56:
		// ERROR: 0x82B57400
		return;
	case 57:
		// ERROR: 0x82B57400
		return;
	case 58:
		// ERROR: 0x82B57400
		return;
	case 59:
		// ERROR: 0x82B57400
		return;
	case 60:
		// ERROR: 0x82B57400
		return;
	case 61:
		// ERROR: 0x82B57400
		return;
	case 62:
		// ERROR: 0x82B57400
		return;
	case 63:
		// ERROR: 0x82B57400
		return;
	case 64:
		// ERROR: 0x82B57400
		return;
	case 65:
		// ERROR: 0x82B57400
		return;
	case 66:
		// ERROR: 0x82B57400
		return;
	case 67:
		// ERROR: 0x82B57400
		return;
	case 68:
		// ERROR: 0x82B57400
		return;
	case 69:
		// ERROR: 0x82B57400
		return;
	case 70:
		// ERROR: 0x82B57400
		return;
	case 71:
		// ERROR: 0x82B57400
		return;
	case 72:
		// ERROR: 0x82B57400
		return;
	case 73:
		// ERROR: 0x82B57400
		return;
	case 74:
		// ERROR: 0x82B57400
		return;
	case 75:
		// ERROR: 0x82B57400
		return;
	case 76:
		// ERROR: 0x82B57400
		return;
	case 77:
		// ERROR: 0x82B57400
		return;
	case 78:
		// ERROR: 0x82B57400
		return;
	case 79:
		// ERROR: 0x82B57400
		return;
	case 80:
		// ERROR: 0x82B57400
		return;
	case 81:
		// ERROR: 0x82B57400
		return;
	case 82:
		// ERROR: 0x82B57400
		return;
	case 83:
		// ERROR: 0x82B57400
		return;
	case 84:
		// ERROR: 0x82B57400
		return;
	case 85:
		// ERROR: 0x82B57400
		return;
	case 86:
		// ERROR: 0x82B57400
		return;
	case 87:
		// ERROR: 0x82B57400
		return;
	case 88:
		// ERROR: 0x82B57400
		return;
	case 89:
		// ERROR: 0x82B57400
		return;
	case 90:
		// ERROR: 0x82B57400
		return;
	case 91:
		// ERROR: 0x82B57400
		return;
	case 92:
		// ERROR: 0x82B57400
		return;
	case 93:
		// ERROR: 0x82B57400
		return;
	case 94:
		// ERROR: 0x82B57400
		return;
	case 95:
		// ERROR: 0x82B57400
		return;
	case 96:
		// ERROR: 0x82B57400
		return;
	case 97:
		// ERROR: 0x82B57400
		return;
	case 98:
		// ERROR: 0x82B57400
		return;
	case 99:
		// ERROR: 0x82B57400
		return;
	case 100:
		// ERROR: 0x82B57400
		return;
	case 101:
		// ERROR: 0x82B57400
		return;
	case 102:
		// ERROR: 0x82B57400
		return;
	case 103:
		// ERROR: 0x82B57400
		return;
	case 104:
		// ERROR: 0x82B57400
		return;
	case 105:
		// ERROR: 0x82B57400
		return;
	case 106:
		// ERROR: 0x82B57400
		return;
	case 107:
		// ERROR: 0x82B57400
		return;
	case 108:
		// ERROR: 0x82B57400
		return;
	case 109:
		// ERROR: 0x82B57400
		return;
	case 110:
		// ERROR: 0x82B57400
		return;
	case 111:
		// ERROR: 0x82B57400
		return;
	case 112:
		// ERROR: 0x82B57400
		return;
	case 113:
		// ERROR: 0x82B57400
		return;
	case 114:
		// ERROR: 0x82B57400
		return;
	case 115:
		// ERROR: 0x82B57400
		return;
	case 116:
		// ERROR: 0x82B57400
		return;
	case 117:
		// ERROR: 0x82B57400
		return;
	case 118:
		// ERROR: 0x82B57400
		return;
	case 119:
		// ERROR: 0x82B57400
		return;
	case 120:
		// ERROR: 0x82B57400
		return;
	case 121:
		// ERROR: 0x82B57400
		return;
	case 122:
		// ERROR: 0x82B57400
		return;
	case 123:
		// ERROR: 0x82B57400
		return;
	case 124:
		// ERROR: 0x82B57400
		return;
	case 125:
		// ERROR: 0x82B57400
		return;
	case 126:
		// ERROR: 0x82B57400
		return;
	case 127:
		// ERROR: 0x82B57400
		return;
	case 128:
		// ERROR: 0x82B57400
		return;
	case 129:
		// ERROR: 0x82B57400
		return;
	case 130:
		// ERROR: 0x82B57400
		return;
	case 131:
		// ERROR: 0x82B57400
		return;
	case 132:
		// ERROR: 0x82B57400
		return;
	case 133:
		// ERROR: 0x82B57400
		return;
	case 134:
		// ERROR: 0x82B57400
		return;
	case 135:
		// ERROR: 0x82B57400
		return;
	case 136:
		// ERROR: 0x82B57400
		return;
	case 137:
		// ERROR: 0x82B57400
		return;
	case 138:
		// ERROR: 0x82B57400
		return;
	case 139:
		// ERROR: 0x82B57400
		return;
	case 140:
		// ERROR: 0x82B57400
		return;
	case 141:
		// ERROR: 0x82B57400
		return;
	case 142:
		// ERROR: 0x82B57400
		return;
	case 143:
		// ERROR: 0x82B57400
		return;
	case 144:
		// ERROR: 0x82B57400
		return;
	case 145:
		// ERROR: 0x82B57400
		return;
	case 146:
		// ERROR: 0x82B57400
		return;
	case 147:
		// ERROR: 0x82B57400
		return;
	case 148:
		// ERROR: 0x82B57400
		return;
	case 149:
		// ERROR: 0x82B57400
		return;
	case 150:
		// ERROR: 0x82B57400
		return;
	case 151:
		// ERROR: 0x82B57400
		return;
	case 152:
		// ERROR: 0x82B57400
		return;
	case 153:
		// ERROR: 0x82B57400
		return;
	case 154:
		// ERROR: 0x82B57400
		return;
	case 155:
		// ERROR: 0x82B57400
		return;
	case 156:
		// ERROR: 0x82B57400
		return;
	case 157:
		// ERROR: 0x82B57400
		return;
	case 158:
		// ERROR: 0x82B57400
		return;
	case 159:
		// ERROR: 0x82B573F8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B57170"))) PPC_WEAK_FUNC(sub_82B57170);
PPC_FUNC_IMPL(__imp__sub_82B57170) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,29680(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29680);
	// lwz r21,29680(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29680);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29680(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29680);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29688(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29688);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29688(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29688);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29688(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29688);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29696(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29696);
	// lwz r21,29688(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29688);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82b57404
	// ERROR 82B57404
	return;
}

__attribute__((alias("__imp__sub_82B573F8"))) PPC_WEAK_FUNC(sub_82B573F8);
PPC_FUNC_IMPL(__imp__sub_82B573F8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b57404
	// ERROR 82B57404
	return;
}

__attribute__((alias("__imp__sub_82B57400"))) PPC_WEAK_FUNC(sub_82B57400);
PPC_FUNC_IMPL(__imp__sub_82B57400) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b57420
	if (ctx.cr6.eq) goto loc_82B57420;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82B57420:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57428"))) PPC_WEAK_FUNC(sub_82B57428);
PPC_FUNC_IMPL(__imp__sub_82B57428) {
	PPC_FUNC_PROLOGUE();
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// b 0x82ca3c68
	sub_82CA3C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B57430"))) PPC_WEAK_FUNC(sub_82B57430);
PPC_FUNC_IMPL(__imp__sub_82B57430) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B57438"))) PPC_WEAK_FUNC(sub_82B57438);
PPC_FUNC_IMPL(__imp__sub_82B57438) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82B57440;
	sub_82CA2BD0(ctx, base);
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82b57488
	if (!ctx.cr6.eq) goto loc_82B57488;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r23,r8,65521
	ctx.r23.u64 = ctx.r8.u64 | 65521;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// blt cr6,0x82b5746c
	if (ctx.cr6.lt) goto loc_82B5746C;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
loc_82B5746C:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65521
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65521, ctx.xer);
	// blt cr6,0x82b57738
	if (ctx.cr6.lt) goto loc_82B57738;
	// subf r10,r23,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r23.s64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82B57488:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b57498
	if (!ctx.cr6.eq) goto loc_82B57498;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82B57498:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x82b574f8
	if (!ctx.cr6.lt) goto loc_82B574F8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b574c0
	if (ctx.cr6.eq) goto loc_82B574C0;
loc_82B574A8:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x82b574a8
	if (!ctx.cr0.eq) goto loc_82B574A8;
loc_82B574C0:
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// ori r23,r9,65521
	ctx.r23.u64 = ctx.r9.u64 | 65521;
	// blt cr6,0x82b574d4
	if (ctx.cr6.lt) goto loc_82B574D4;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
loc_82B574D4:
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// ori r8,r9,32881
	ctx.r8.u64 = ctx.r9.u64 | 32881;
	// mulhwu r7,r10,r8
	ctx.r7.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r7,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r6,r23
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r3,r4,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82B574F8:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32761
	ctx.r8.s64 = -2147024896;
	// ori r23,r9,65521
	ctx.r23.u64 = ctx.r9.u64 | 65521;
	// ori r22,r8,32881
	ctx.r22.u64 = ctx.r8.u64 | 32881;
	// cmplwi cr6,r5,5552
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5552, ctx.xer);
	// blt cr6,0x82b57614
	if (ctx.cr6.lt) goto loc_82B57614;
	// li r9,5552
	ctx.r9.s64 = 5552;
	// divwu r24,r5,r9
	ctx.r24.u32 = ctx.r5.u32 / ctx.r9.u32;
loc_82B57518:
	// addi r5,r5,-5552
	ctx.r5.s64 = ctx.r5.s64 + -5552;
	// li r9,347
	ctx.r9.s64 = 347;
loc_82B57520:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r3,3(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r25,5(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r26,6(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,7(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r29,9(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,10(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r31,11(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,13(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r7,14(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r8,15(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x82b57520
	if (!ctx.cr0.eq) goto loc_82B57520;
	// mulhwu r9,r10,r22
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r22.u32)) >> 32;
	// mulhwu r8,r11,r22
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r22.u32)) >> 32;
	// rlwinm r7,r8,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r9,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// mullw r3,r7,r23
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r23.s32);
	// mullw r9,r6,r23
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bne 0x82b57518
	if (!ctx.cr0.eq) goto loc_82B57518;
loc_82B57614:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b57738
	if (ctx.cr6.eq) goto loc_82B57738;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x82b576f8
	if (ctx.cr6.lt) goto loc_82B576F8;
	// rlwinm r9,r5,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
loc_82B57628:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r25,5(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r26,6(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,7(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r29,9(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,10(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r31,11(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,13(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r7,14(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r8,15(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x82b57628
	if (!ctx.cr0.eq) goto loc_82B57628;
loc_82B576F8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b57718
	if (ctx.cr6.eq) goto loc_82B57718;
loc_82B57700:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x82b57700
	if (!ctx.cr0.eq) goto loc_82B57700;
loc_82B57718:
	// mulhwu r9,r11,r22
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r22.u32)) >> 32;
	// mulhwu r8,r10,r22
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r22.u32)) >> 32;
	// rlwinm r7,r8,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r9,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r7,r23
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r23.s32);
	// mullw r4,r6,r23
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_82B57738:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82B57744"))) PPC_WEAK_FUNC(sub_82B57744);
PPC_FUNC_IMPL(__imp__sub_82B57744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57748"))) PPC_WEAK_FUNC(sub_82B57748);
PPC_FUNC_IMPL(__imp__sub_82B57748) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b57758
	if (!ctx.cr6.eq) goto loc_82B57758;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B57758:
	// b 0x82b57760
	sub_82B57760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5775C"))) PPC_WEAK_FUNC(sub_82B5775C);
PPC_FUNC_IMPL(__imp__sub_82B5775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57760"))) PPC_WEAK_FUNC(sub_82B57760);
PPC_FUNC_IMPL(__imp__sub_82B57760) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82B57768;
	sub_82CA2BC8(ctx, base);
	// rlwinm r10,r3,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r8,27648
	ctx.r11.s64 = ctx.r8.s64 + 27648;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// beq cr6,0x82b577d4
	if (ctx.cr6.eq) goto loc_82B577D4;
loc_82B5779C:
	// clrlwi r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b577d4
	if (ctx.cr6.eq) goto loc_82B577D4;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// xor r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// bne 0x82b5779c
	if (!ctx.cr0.eq) goto loc_82B5779C;
loc_82B577D4:
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// blt cr6,0x82b57a30
	if (ctx.cr6.lt) goto loc_82B57A30;
	// rlwinm r8,r5,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
loc_82B577E4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// addi r4,r11,7168
	ctx.r4.s64 = ctx.r11.s64 + 7168;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r30,r11,6144
	ctx.r30.s64 = ctx.r11.s64 + 6144;
	// xor r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// rlwinm r29,r10,18,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FC;
	// rlwinm r28,r10,26,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r26,r10,10,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// addi r24,r11,7168
	ctx.r24.s64 = ctx.r11.s64 + 7168;
	// lwzx r7,r29,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// lwzx r6,r28,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// addi r28,r11,6144
	ctx.r28.s64 = ctx.r11.s64 + 6144;
	// lwzx r4,r26,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// xor r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// xor r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// addi r4,r11,4096
	ctx.r4.s64 = ctx.r11.s64 + 4096;
	// xor r9,r6,r27
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r27.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r9,18,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FC;
	// rlwinm r6,r9,26,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FC;
	// rlwinm r27,r9,10,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FC;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r22,r11,6144
	ctx.r22.s64 = ctx.r11.s64 + 6144;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r30,r11,5120
	ctx.r30.s64 = ctx.r11.s64 + 5120;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// lwzx r27,r27,r24
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// addi r24,r11,4096
	ctx.r24.s64 = ctx.r11.s64 + 4096;
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// lwzx r6,r9,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r9,r7,r27
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// xor r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// xor r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r25.u64;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r11,7168
	ctx.r27.s64 = ctx.r11.s64 + 7168;
	// rlwinm r25,r6,18,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r21,r6,26,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r20,r6,10,22,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r28,r25,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// lwzx r26,r21,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r26.u32);
	// lwzx r3,r20,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r3.u32);
	// xor r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// lwzx r6,r6,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// xor r4,r28,r3
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r3.u64;
	// xor r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// xor r6,r3,r23
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// rlwinm r4,r6,18,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r3,r6,26,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r28,r6,10,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r4,r4,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lwzx r31,r28,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// lwzx r3,r6,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// xor r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// xor r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r29.u64;
	// rlwinm r6,r3,18,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r4,r3,26,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r31,r3,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// lwzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r6,r3,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// lwzx r9,r31,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r4,r11,6144
	ctx.r4.s64 = ctx.r11.s64 + 6144;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// lwzx r7,r6,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r30,r3,26,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r9,r3,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r29,r3,10,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// rlwinm r3,r3,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r11,6144
	ctx.r27.s64 = ctx.r11.s64 + 6144;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r30,r11,7168
	ctx.r30.s64 = ctx.r11.s64 + 7168;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r4,r11,5120
	ctx.r4.s64 = ctx.r11.s64 + 5120;
	// lwzx r31,r29,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// lwzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// xor r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// xor r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// addi r26,r11,7168
	ctx.r26.s64 = ctx.r11.s64 + 7168;
	// xor r9,r7,r28
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// rlwinm r28,r9,18,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FC;
	// rlwinm r25,r9,26,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FC;
	// rlwinm r24,r9,10,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FC;
	// rlwinm r23,r9,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r4,r25,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r4.u32);
	// addi r5,r5,-32
	ctx.r5.s64 = ctx.r5.s64 + -32;
	// lwzx r10,r24,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r30.u32);
	// xor r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r4.u64;
	// lwzx r30,r23,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r29.u32);
	// xor r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// xor r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// xor r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r6,r10,18,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FC;
	// rlwinm r4,r10,26,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// rlwinm r30,r10,10,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r6,r6,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r3,r30,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// xor r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// bne 0x82b577e4
	if (!ctx.cr0.eq) goto loc_82B577E4;
loc_82B57A30:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82b57a90
	if (ctx.cr6.lt) goto loc_82B57A90;
	// rlwinm r8,r5,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
loc_82B57A3C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// addi r4,r11,7168
	ctx.r4.s64 = ctx.r11.s64 + 7168;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// xor r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// rlwinm r31,r10,18,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FC;
	// rlwinm r30,r10,26,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// rlwinm r29,r10,10,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwzx r4,r29,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// bne 0x82b57a3c
	if (!ctx.cr0.eq) goto loc_82B57A3C;
loc_82B57A90:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b57ac8
	if (ctx.cr6.eq) goto loc_82B57AC8;
loc_82B57A9C:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// xor r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// addi r6,r11,4096
	ctx.r6.s64 = ctx.r11.s64 + 4096;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// xor r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// bne 0x82b57a9c
	if (!ctx.cr0.eq) goto loc_82B57A9C;
loc_82B57AC8:
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// rlwinm r10,r8,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r8,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82B57AF0"))) PPC_WEAK_FUNC(sub_82B57AF0);
PPC_FUNC_IMPL(__imp__sub_82B57AF0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
	// li r11,286
	ctx.r11.s64 = 286;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82B57AFC:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82b57afc
	if (!ctx.cr0.eq) goto loc_82B57AFC;
	// addi r10,r3,2440
	ctx.r10.s64 = ctx.r3.s64 + 2440;
	// li r11,30
	ctx.r11.s64 = 30;
loc_82B57B14:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82b57b14
	if (!ctx.cr0.eq) goto loc_82B57B14;
	// addi r10,r3,2684
	ctx.r10.s64 = ctx.r3.s64 + 2684;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82B57B2C:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82b57b2c
	if (!ctx.cr0.eq) goto loc_82B57B2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r9.u32);
	// stw r9,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r9.u32);
	// sth r11,1172(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1172, ctx.r11.u16);
	// stw r9,5808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5808, ctx.r9.u32);
	// stw r9,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57B58"))) PPC_WEAK_FUNC(sub_82B57B58);
PPC_FUNC_IMPL(__imp__sub_82B57B58) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,727
	ctx.r11.s64 = ctx.r5.s64 + 727;
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// bgt cr6,0x82b57c30
	if (ctx.cr6.gt) goto loc_82B57C30;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_82B57B80:
	// bge cr6,0x82b57bd4
	if (!ctx.cr6.lt) goto loc_82B57BD4;
	// addi r10,r11,728
	ctx.r10.s64 = ctx.r11.s64 + 728;
	// addi r9,r11,727
	ctx.r9.s64 = ctx.r11.s64 + 727;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b57bd0
	if (ctx.cr6.lt) goto loc_82B57BD0;
	// bne cr6,0x82b57bd4
	if (!ctx.cr6.eq) goto loc_82B57BD4;
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r8,5208(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5208);
	// lbz r7,5208(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5208);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82b57bd4
	if (ctx.cr6.gt) goto loc_82B57BD4;
loc_82B57BD0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B57BD4:
	// addi r10,r11,727
	ctx.r10.s64 = ctx.r11.s64 + 727;
	// lhzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r7,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82b57c30
	if (ctx.cr6.lt) goto loc_82B57C30;
	// bne cr6,0x82b57c10
	if (!ctx.cr6.eq) goto loc_82B57C10;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbz r7,5208(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5208);
	// lbz r9,5208(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5208);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82b57c30
	if (!ctx.cr6.gt) goto loc_82B57C30;
loc_82B57C10:
	// addi r9,r5,727
	ctx.r9.s64 = ctx.r5.s64 + 727;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b57b80
	if (!ctx.cr6.gt) goto loc_82B57B80;
loc_82B57C30:
	// addi r11,r5,727
	ctx.r11.s64 = ctx.r5.s64 + 727;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57C44"))) PPC_WEAK_FUNC(sub_82B57C44);
PPC_FUNC_IMPL(__imp__sub_82B57C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57C48"))) PPC_WEAK_FUNC(sub_82B57C48);
PPC_FUNC_IMPL(__imp__sub_82B57C48) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82B57C50;
	sub_82CA2BD4(ctx, base);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r3,2876
	ctx.r11.s64 = ctx.r3.s64 + 2876;
	// lwz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r23,4(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r26,4(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r27,16(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B57C80:
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82b57c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B57C80;
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,727
	ctx.r9.s64 = ctx.r11.s64 + 727;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sth r10,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,573
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 573, ctx.xer);
	// bge cr6,0x82b57e90
	if (!ctx.cr6.lt) goto loc_82B57E90;
	// addi r10,r11,727
	ctx.r10.s64 = ctx.r11.s64 + 727;
	// subfic r28,r11,573
	ctx.xer.ca = ctx.r11.u32 <= 573;
	ctx.r28.s64 = 573 - ctx.r11.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r28,r11
	ctx.r24.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82B57CD0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r25
	ctx.r6.u64 = ctx.r5.u64 + ctx.r25.u64;
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82b57d00
	if (!ctx.cr6.gt) goto loc_82B57D00;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82B57D00:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// bgt cr6,0x82b57d78
	if (ctx.cr6.gt) goto loc_82B57D78;
	// addi r8,r11,1438
	ctx.r8.s64 = ctx.r11.s64 + 1438;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// lhzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sthx r7,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u16);
	// blt cr6,0x82b57d38
	if (ctx.cr6.lt) goto loc_82B57D38;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
loc_82B57D38:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,5800(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5800);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r6.u32);
	// beq cr6,0x82b57d78
	if (ctx.cr6.eq) goto loc_82B57D78;
	// add r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r10,5804(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5804);
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r6.u32);
loc_82B57D78:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b57cd0
	if (!ctx.cr0.eq) goto loc_82B57CD0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82b57e90
	if (ctx.cr6.eq) goto loc_82B57E90;
	// addi r11,r27,1438
	ctx.r11.s64 = ctx.r27.s64 + 1438;
	// addi r6,r27,-1
	ctx.r6.s64 = ctx.r27.s64 + -1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_82B57DA4:
	// addi r10,r6,1438
	ctx.r10.s64 = ctx.r6.s64 + 1438;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b57dd4
	if (!ctx.cr6.eq) goto loc_82B57DD4;
loc_82B57DC0:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b57dc0
	if (ctx.cr6.eq) goto loc_82B57DC0;
loc_82B57DD4:
	// addi r10,r11,1438
	ctx.r10.s64 = ctx.r11.s64 + 1438;
	// addi r8,r11,1439
	ctx.r8.s64 = ctx.r11.s64 + 1439;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r29,r29,-2
	ctx.xer.ca = ctx.r29.u32 > 1;
	ctx.r29.s64 = ctx.r29.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// lhzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthx r4,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u16);
	// sthx r8,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// bgt 0x82b57da4
	if (ctx.cr0.gt) goto loc_82B57DA4;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b57e90
	if (ctx.cr6.eq) goto loc_82B57E90;
loc_82B57E1C:
	// lhz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82b57e84
	if (ctx.cr6.eq) goto loc_82B57E84;
	// addi r11,r24,727
	ctx.r11.s64 = ctx.r24.s64 + 727;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82B57E34:
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x82b57e7c
	if (ctx.cr6.gt) goto loc_82B57E7C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b57e78
	if (ctx.cr6.eq) goto loc_82B57E78;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,5800(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5800);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r8.u32);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
loc_82B57E78:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_82B57E7C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82b57e34
	if (!ctx.cr6.eq) goto loc_82B57E34;
loc_82B57E84:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bne 0x82b57e1c
	if (!ctx.cr0.eq) goto loc_82B57E1C;
loc_82B57E90:
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82B57E94"))) PPC_WEAK_FUNC(sub_82B57E94);
PPC_FUNC_IMPL(__imp__sub_82B57E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57E98"))) PPC_WEAK_FUNC(sub_82B57E98);
PPC_FUNC_IMPL(__imp__sub_82B57E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82B57EA0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,573
	ctx.r9.s64 = 573;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r27,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r27.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r9,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r9.u32);
	// ble cr6,0x82b57f24
	if (!ctx.cr6.gt) goto loc_82B57F24;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82B57EDC:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b57f10
	if (ctx.cr6.eq) goto loc_82B57F10;
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r10,727
	ctx.r7.s64 = ctx.r10.s64 + 727;
	// stw r10,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r10.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u32);
	// stb r27,5208(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5208, ctx.r27.u8);
	// b 0x82b57f14
	goto loc_82B57F14;
loc_82B57F10:
	// sth r27,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r27.u16);
loc_82B57F14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b57edc
	if (ctx.cr6.lt) goto loc_82B57EDC;
loc_82B57F24:
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82b57fa8
	if (!ctx.cr6.lt) goto loc_82B57FA8;
	// addi r8,r3,5208
	ctx.r8.s64 = ctx.r3.s64 + 5208;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82B57F38:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bge cr6,0x82b57f4c
	if (!ctx.cr6.lt) goto loc_82B57F4C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82b57f50
	goto loc_82B57F50;
loc_82B57F4C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B57F50:
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r10,727
	ctx.r5.s64 = ctx.r10.s64 + 727;
	// stw r10,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r10.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u32);
	// sthx r7,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u16);
	// stbx r27,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r27.u8);
	// lwz r11,5800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5800);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r11.u32);
	// beq cr6,0x82b57f9c
	if (ctx.cr6.eq) goto loc_82B57F9C;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r10,5804(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5804);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r5,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r5.u32);
loc_82B57F9C:
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82b57f38
	if (ctx.cr6.lt) goto loc_82B57F38;
loc_82B57FA8:
	// stw r26,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r26.u32);
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x82b57fd8
	if (ctx.cr6.lt) goto loc_82B57FD8;
loc_82B57FC0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b57b58
	ctx.lr = 0x82B57FCC;
	sub_82B57B58(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82b57fc0
	if (!ctx.cr6.lt) goto loc_82B57FC0;
loc_82B57FD8:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,5208
	ctx.r30.s64 = ctx.r3.s64 + 5208;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82B57FE4:
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r24,2912(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2912);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,727
	ctx.r10.s64 = ctx.r11.s64 + 727;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r9,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r9.u32);
	// stw r7,2912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2912, ctx.r7.u32);
	// bl 0x82b57b58
	ctx.lr = 0x82B58010;
	sub_82B57B58(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,2912(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2912);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r11,727
	ctx.r5.s64 = ctx.r11.s64 + 727;
	// stw r11,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r11.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r24.u32);
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,727
	ctx.r8.s64 = ctx.r11.s64 + 727;
	// stw r11,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r11.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r5,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r5.u16);
	// lbzx r8,r30,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// lbzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82b58080
	if (ctx.cr6.lt) goto loc_82B58080;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82B58080:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// stbx r11,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r8,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r28,2912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2912, ctx.r28.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82b57b58
	ctx.lr = 0x82B580AC;
	sub_82B57B58(ctx, base);
	// lwz r6,5200(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x82b57fe4
	if (!ctx.cr6.lt) goto loc_82B57FE4;
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,2912(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2912);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,727
	ctx.r9.s64 = ctx.r11.s64 + 727;
	// stw r11,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x82b57c48
	ctx.lr = 0x82B580DC;
	sub_82B57C48(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r10,r3,2876
	ctx.r10.s64 = ctx.r3.s64 + 2876;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82B580EC:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,1,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFE;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bne 0x82b580ec
	if (!ctx.cr0.eq) goto loc_82B580EC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82b58170
	if (ctx.cr6.lt) goto loc_82B58170;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
loc_82B5811C:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b58164
	if (ctx.cr6.eq) goto loc_82B58164;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
loc_82B58144:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt 0x82b58144
	if (ctx.cr0.gt) goto loc_82B58144;
	// rlwinm r11,r7,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xFFFF;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82B58164:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5811c
	if (!ctx.cr0.eq) goto loc_82B5811C;
loc_82B58170:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82B58178"))) PPC_WEAK_FUNC(sub_82B58178);
PPC_FUNC_IMPL(__imp__sub_82B58178) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82b581a0
	if (!ctx.cr6.eq) goto loc_82B581A0;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82B581A0:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,-1
	ctx.r31.s64 = -1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r31,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r31.u16);
	// blt cr6,0x82b58298
	if (ctx.cr6.lt) goto loc_82B58298;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82B581C0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82b581dc
	if (!ctx.cr6.lt) goto loc_82B581DC;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82b5828c
	if (ctx.cr6.eq) goto loc_82B5828C;
loc_82B581DC:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82b581fc
	if (!ctx.cr6.lt) goto loc_82B581FC;
	// addi r11,r10,671
	ctx.r11.s64 = ctx.r10.s64 + 671;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
	// b 0x82b58254
	goto loc_82B58254;
loc_82B581FC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b58230
	if (ctx.cr6.eq) goto loc_82B58230;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82b58220
	if (ctx.cr6.eq) goto loc_82B58220;
	// addi r11,r10,671
	ctx.r11.s64 = ctx.r10.s64 + 671;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
loc_82B58220:
	// lhz r11,2748(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2748(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2748, ctx.r11.u16);
	// b 0x82b58254
	goto loc_82B58254;
loc_82B58230:
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x82b58248
	if (ctx.cr6.gt) goto loc_82B58248;
	// lhz r11,2752(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2752);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2752(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2752, ctx.r11.u16);
	// b 0x82b58254
	goto loc_82B58254;
loc_82B58248:
	// lhz r11,2756(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2756);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2756(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2756, ctx.r11.u16);
loc_82B58254:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82b58270
	if (!ctx.cr6.eq) goto loc_82B58270;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82b5828c
	goto loc_82B5828C;
loc_82B58270:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82b58284
	if (!ctx.cr6.eq) goto loc_82B58284;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82b5828c
	goto loc_82B5828C;
loc_82B58284:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82B5828C:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82b581c0
	if (!ctx.cr0.eq) goto loc_82B581C0;
loc_82B58298:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B582A0"))) PPC_WEAK_FUNC(sub_82B582A0);
PPC_FUNC_IMPL(__imp__sub_82B582A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82B582A8;
	sub_82CA2BDC(ctx, base);
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82b582cc
	if (!ctx.cr6.eq) goto loc_82B582CC;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82B582CC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82b5882c
	if (ctx.cr6.lt) goto loc_82B5882C;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r30,r4,6
	ctx.r30.s64 = ctx.r4.s64 + 6;
	// addi r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 1;
	// ori r4,r8,65533
	ctx.r4.u64 = ctx.r8.u64 | 65533;
	// ori r29,r7,65525
	ctx.r29.u64 = ctx.r7.u64 | 65525;
loc_82B582EC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82b58308
	if (!ctx.cr6.lt) goto loc_82B58308;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82b58820
	if (ctx.cr6.eq) goto loc_82B58820;
loc_82B58308:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b583c4
	if (!ctx.cr6.lt) goto loc_82B583C4;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,671
	ctx.r10.s64 = ctx.r5.s64 + 671;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B58320:
	// lhz r10,2686(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2686);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// lhz r27,5816(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// ble cr6,0x82b583a4
	if (!ctx.cr6.gt) goto loc_82B583A4;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r27,r26
	PPC_STORE_U8(ctx.r27.u32 + ctx.r26.u32, ctx.r9.u8);
	// lbz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r27,r11
	PPC_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r27,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r27.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x82b583b8
	goto loc_82B583B8;
loc_82B583A4:
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 | ctx.r27.u64;
	// stw r10,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r10.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
loc_82B583B8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82b58320
	if (!ctx.cr0.eq) goto loc_82B58320;
	// b 0x82b587e8
	goto loc_82B587E8;
loc_82B583C4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82b585a4
	if (ctx.cr6.eq) goto loc_82B585A4;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82b58488
	if (ctx.cr6.eq) goto loc_82B58488;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lhz r10,2686(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2686);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// addi r9,r5,671
	ctx.r9.s64 = ctx.r5.s64 + 671;
	// ble cr6,0x82b58468
	if (!ctx.cr6.gt) goto loc_82B58468;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r27,r7
	PPC_STORE_U8(ctx.r27.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// srw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x82b58484
	goto loc_82B58484;
loc_82B58468:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
loc_82B58484:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_82B58488:
	// lhz r10,2750(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2750);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2748(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// ble cr6,0x82b5850c
	if (!ctx.cr6.gt) goto loc_82B5850C;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r27,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x82b58524
	goto loc_82B58524;
loc_82B5850C:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_82B58524:
	// lwz r10,5820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// ble cr6,0x82b58598
	if (!ctx.cr6.gt) goto loc_82B58598;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// addi r8,r11,-14
	ctx.r8.s64 = ctx.r11.s64 + -14;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x82b587e4
	goto loc_82B587E4;
loc_82B58598:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// b 0x82b587d8
	goto loc_82B587D8;
loc_82B585A4:
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bgt cr6,0x82b586c8
	if (ctx.cr6.gt) goto loc_82B586C8;
	// lhz r10,2754(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2754);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2752(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2752);
	// ble cr6,0x82b58630
	if (!ctx.cr6.gt) goto loc_82B58630;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r27,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x82b58648
	goto loc_82B58648;
loc_82B58630:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_82B58648:
	// lwz r10,5820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x82b586bc
	if (!ctx.cr6.gt) goto loc_82B586BC;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r11,-13
	ctx.r8.s64 = ctx.r11.s64 + -13;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x82b587e4
	goto loc_82B587E4;
loc_82B586BC:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// b 0x82b587d8
	goto loc_82B587D8;
loc_82B586C8:
	// lhz r10,2758(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2758);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2756(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2756);
	// ble cr6,0x82b58744
	if (!ctx.cr6.gt) goto loc_82B58744;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// srw r9,r27,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// b 0x82b58758
	goto loc_82B58758;
loc_82B58744:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_82B58758:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x82b587d0
	if (!ctx.cr6.gt) goto loc_82B587D0;
	// addi r11,r6,-11
	ctx.r11.s64 = ctx.r6.s64 + -11;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x82b587e4
	goto loc_82B587E4;
loc_82B587D0:
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + ctx.r29.u64;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
loc_82B587D8:
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r6,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r6.u16);
loc_82B587E4:
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
loc_82B587E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82b58804
	if (!ctx.cr6.eq) goto loc_82B58804;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82b58820
	goto loc_82B58820;
loc_82B58804:
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82b58818
	if (!ctx.cr6.eq) goto loc_82B58818;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82b58820
	goto loc_82B58820;
loc_82B58818:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82B58820:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82b582ec
	if (!ctx.cr0.eq) goto loc_82B582EC;
loc_82B5882C:
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82B58830"))) PPC_WEAK_FUNC(sub_82B58830);
PPC_FUNC_IMPL(__imp__sub_82B58830) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// lwz r5,2844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2844);
	// bl 0x82b58178
	ctx.lr = 0x82B58850;
	sub_82B58178(ctx, base);
	// addi r4,r31,2440
	ctx.r4.s64 = ctx.r31.s64 + 2440;
	// lwz r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2856);
	// bl 0x82b58178
	ctx.lr = 0x82B5885C;
	sub_82B58178(ctx, base);
	// addi r4,r31,2864
	ctx.r4.s64 = ctx.r31.s64 + 2864;
	// bl 0x82b57e98
	ctx.lr = 0x82B58864;
	sub_82B57E98(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r11,r11,25148
	ctx.r11.s64 = ctx.r11.s64 + 25148;
loc_82B58870:
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r8,2686(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2686);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b58900
	if (!ctx.cr6.eq) goto loc_82B58900;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2686(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2686);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b588ec
	if (!ctx.cr6.eq) goto loc_82B588EC;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2686(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2686);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b588f4
	if (!ctx.cr6.eq) goto loc_82B588F4;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2686(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2686);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b588fc
	if (!ctx.cr6.eq) goto loc_82B588FC;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x82b58870
	if (!ctx.cr6.lt) goto loc_82B58870;
	// b 0x82b58900
	goto loc_82B58900;
loc_82B588EC:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x82b58900
	goto loc_82B58900;
loc_82B588F4:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// b 0x82b58900
	goto loc_82B58900;
loc_82B588FC:
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
loc_82B58900:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,5800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5800);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// stw r11,5800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5800, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B5892C"))) PPC_WEAK_FUNC(sub_82B5892C);
PPC_FUNC_IMPL(__imp__sub_82B5892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58930"))) PPC_WEAK_FUNC(sub_82B58930);
PPC_FUNC_IMPL(__imp__sub_82B58930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B58938;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,5820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x82b589b4
	if (!ctx.cr6.gt) goto loc_82B589B4;
	// addi r11,r4,-257
	ctx.r11.s64 = ctx.r4.s64 + -257;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x82b589cc
	goto loc_82B589CC;
loc_82B589B4:
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -257;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
loc_82B589CC:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x82b58a44
	if (!ctx.cr6.gt) goto loc_82B58A44;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x82b58a5c
	goto loc_82B58A5C;
loc_82B58A44:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
loc_82B58A5C:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x82b58ad8
	if (!ctx.cr6.gt) goto loc_82B58AD8;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r5.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// b 0x82b58af4
	goto loc_82B58AF4;
loc_82B58AD8:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
loc_82B58AF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b58bb0
	if (!ctx.cr6.gt) goto loc_82B58BB0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r8,r11,25148
	ctx.r8.s64 = ctx.r11.s64 + 25148;
loc_82B58B08:
	// lbzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lhz r9,2686(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2686);
	// ble cr6,0x82b58b8c
	if (!ctx.cr6.gt) goto loc_82B58B8C;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r5,r30
	PPC_STORE_U8(ctx.r5.u32 + ctx.r30.u32, ctx.r11.u8);
	// lbz r5,5816(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r5,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r5,r11,-13
	ctx.r5.s64 = ctx.r11.s64 + -13;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r5,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r5.u32);
	// srw r9,r29,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// b 0x82b58ba4
	goto loc_82B58BA4;
loc_82B58B8C:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lhz r5,5816(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
loc_82B58BA4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82b58b08
	if (ctx.cr6.lt) goto loc_82B58B08;
loc_82B58BB0:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,148
	ctx.r4.s64 = ctx.r3.s64 + 148;
	// bl 0x82b582a0
	ctx.lr = 0x82B58BBC;
	sub_82B582A0(ctx, base);
	// addi r4,r3,2440
	ctx.r4.s64 = ctx.r3.s64 + 2440;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// bl 0x82b582a0
	ctx.lr = 0x82B58BC8;
	sub_82B582A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B58BD0"))) PPC_WEAK_FUNC(sub_82B58BD0);
PPC_FUNC_IMPL(__imp__sub_82B58BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ble cr6,0x82b58c54
	if (!ctx.cr6.gt) goto loc_82B58C54;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r5,5816(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// srw r10,r9,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// b 0x82b58c60
	goto loc_82B58C60;
loc_82B58C54:
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stw r6,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r6.u32);
loc_82B58C60:
	// bl 0x82b59760
	ctx.lr = 0x82B58C64;
	sub_82B59760(ctx, base);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// rlwinm r5,r7,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r8,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82b58cfc
	if (ctx.cr6.eq) goto loc_82B58CFC;
loc_82B58CD8:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bne 0x82b58cd8
	if (!ctx.cr0.eq) goto loc_82B58CD8;
loc_82B58CFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D0C"))) PPC_WEAK_FUNC(sub_82B58D0C);
PPC_FUNC_IMPL(__imp__sub_82B58D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58D10"))) PPC_WEAK_FUNC(sub_82B58D10);
PPC_FUNC_IMPL(__imp__sub_82B58D10) {
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
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// li r30,2
	ctx.r30.s64 = 2;
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x82b58d9c
	if (!ctx.cr6.gt) goto loc_82B58D9C;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r4,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r4.u16);
	// stbx r4,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r4,r11,-13
	ctx.r4.s64 = ctx.r11.s64 + -13;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r4,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r4.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// b 0x82b58dac
	goto loc_82B58DAC;
loc_82B58D9C:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
loc_82B58DAC:
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// slw r8,r31,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x82b58e24
	if (!ctx.cr6.gt) goto loc_82B58E24;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r4,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r4.u16);
	// stbx r4,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r6,r11,-9
	ctx.r6.s64 = ctx.r11.s64 + -9;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r6.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// b 0x82b58e34
	goto loc_82B58E34;
loc_82B58E24:
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
loc_82B58E34:
	// bl 0x82b596d0
	ctx.lr = 0x82B58E38;
	sub_82B596D0(ctx, base);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 + 11;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bge cr6,0x82b58f50
	if (!ctx.cr6.lt) goto loc_82B58F50;
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ble cr6,0x82b58ec0
	if (!ctx.cr6.gt) goto loc_82B58EC0;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// sth r4,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r4.u16);
	// stbx r4,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r6,r11,-13
	ctx.r6.s64 = ctx.r11.s64 + -13;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r6.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// b 0x82b58ecc
	goto loc_82B58ECC;
loc_82B58EC0:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
loc_82B58ECC:
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ble cr6,0x82b58f40
	if (!ctx.cr6.gt) goto loc_82B58F40;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r4,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r4.u16);
	// stbx r4,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r6,r11,-9
	ctx.r6.s64 = ctx.r11.s64 + -9;
	// srw r11,r5,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r6.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// b 0x82b58f4c
	goto loc_82B58F4C;
loc_82B58F40:
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
loc_82B58F4C:
	// bl 0x82b596d0
	ctx.lr = 0x82B58F50;
	sub_82B596D0(ctx, base);
loc_82B58F50:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B58F70"))) PPC_WEAK_FUNC(sub_82B58F70);
PPC_FUNC_IMPL(__imp__sub_82B58F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B58F78;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b58ff8
	if (!ctx.cr6.gt) goto loc_82B58FF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b58fbc
	if (ctx.cr6.eq) goto loc_82B58FBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82b58fbc
	if (!ctx.cr6.eq) goto loc_82B58FBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b59600
	ctx.lr = 0x82B58FBC;
	sub_82B59600(ctx, base);
loc_82B58FBC:
	// addi r4,r31,2840
	ctx.r4.s64 = ctx.r31.s64 + 2840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57e98
	ctx.lr = 0x82B58FC8;
	sub_82B57E98(ctx, base);
	// addi r4,r31,2852
	ctx.r4.s64 = ctx.r31.s64 + 2852;
	// bl 0x82b57e98
	ctx.lr = 0x82B58FD0;
	sub_82B57E98(ctx, base);
	// bl 0x82b58830
	ctx.lr = 0x82B58FD4;
	sub_82B58830(ctx, base);
	// lwz r11,5800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5800);
	// lwz r10,5804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5804);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b59000
	if (ctx.cr6.gt) goto loc_82B59000;
	// b 0x82b58ffc
	goto loc_82B58FFC;
loc_82B58FF8:
	// addi r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 5;
loc_82B58FFC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B59000:
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b5902c
	if (ctx.cr6.gt) goto loc_82B5902C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b5902c
	if (ctx.cr6.eq) goto loc_82B5902C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b58bd0
	ctx.lr = 0x82B59028;
	sub_82B58BD0(ctx, base);
	// b 0x82b5918c
	goto loc_82B5918C;
loc_82B5902C:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x82b590f0
	if (ctx.cr6.eq) goto loc_82B590F0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b590f0
	if (ctx.cr6.eq) goto loc_82B590F0;
	// lwz r10,5820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lhz r9,5816(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5816);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// ble cr6,0x82b590b8
	if (!ctx.cr6.gt) goto loc_82B590B8;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r11.u16);
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r9,5816(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5816);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,5820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// srw r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r11,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r11.u32);
	// sth r10,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r10.u16);
	// b 0x82b590c8
	goto loc_82B590C8;
loc_82B590B8:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r8,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r8.u32);
	// sth r6,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r6.u16);
loc_82B590C8:
	// lwz r11,2856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2856);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// lwz r10,2844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2844);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x82b58930
	ctx.lr = 0x82B590E4;
	sub_82B58930(ctx, base);
	// addi r5,r31,2440
	ctx.r5.s64 = ctx.r31.s64 + 2440;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// b 0x82b59184
	goto loc_82B59184;
loc_82B590F0:
	// lwz r10,5820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// lhz r9,5816(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5816);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// ble cr6,0x82b59168
	if (!ctx.cr6.gt) goto loc_82B59168;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r3,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r3.u16);
	// stbx r3,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r3.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5816(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5816);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,5820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,-13
	ctx.r5.s64 = ctx.r11.s64 + -13;
	// srw r4,r4,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r5,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r5.u32);
	// sth r4,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r4.u16);
	// b 0x82b59178
	goto loc_82B59178;
loc_82B59168:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r8,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r8.u32);
	// sth r6,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r6.u16);
loc_82B59178:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,25368
	ctx.r4.s64 = ctx.r11.s64 + 25368;
	// addi r5,r4,1152
	ctx.r5.s64 = ctx.r4.s64 + 1152;
loc_82B59184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b591a8
	ctx.lr = 0x82B5918C;
	sub_82B591A8(ctx, base);
loc_82B5918C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b57af0
	ctx.lr = 0x82B59194;
	sub_82B57AF0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82b591a0
	if (ctx.cr6.eq) goto loc_82B591A0;
	// bl 0x82b59760
	ctx.lr = 0x82B591A0;
	sub_82B59760(ctx, base);
loc_82B591A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B591A8"))) PPC_WEAK_FUNC(sub_82B591A8);
PPC_FUNC_IMPL(__imp__sub_82B591A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82B591B0;
	sub_82CA2BD8(ctx, base);
	// lwz r11,5792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b59550
	if (ctx.cr6.eq) goto loc_82B59550;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,27528
	ctx.r31.s64 = ctx.r11.s64 + 27528;
	// addi r27,r10,26640
	ctx.r27.s64 = ctx.r10.s64 + 26640;
	// addi r29,r9,27152
	ctx.r29.s64 = ctx.r9.s64 + 27152;
loc_82B591DC:
	// lwz r11,5796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// lwz r10,5784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// lhzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// lbzx r7,r30,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82b59294
	if (!ctx.cr6.eq) goto loc_82B59294;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r8,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r9.s64;
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// ble cr6,0x82b59288
	if (!ctx.cr6.gt) goto loc_82B59288;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u8);
	// lbz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x82b59544
	goto loc_82B59544;
loc_82B59288:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x82b5953c
	goto loc_82B5953C;
loc_82B59294:
	// lbzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r10,257
	ctx.r10.s64 = ctx.r10.s64 + 257;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,1030(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1030);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// lhz r26,5816(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// ble cr6,0x82b59328
	if (!ctx.cr6.gt) goto loc_82B59328;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r25,20(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stbx r10,r24,r25
	PPC_STORE_U8(ctx.r24.u32 + ctx.r25.u32, ctx.r10.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r25,8(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r25,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r25.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r25,16
	ctx.r9.u64 = ctx.r25.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x82b5933c
	goto loc_82B5933C;
loc_82B59328:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 | ctx.r26.u64;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
loc_82B5933C:
	// addi r11,r31,-2496
	ctx.r11.s64 = ctx.r31.s64 + -2496;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b593e0
	if (ctx.cr6.eq) goto loc_82B593E0;
	// addi r10,r31,-120
	ctx.r10.s64 = ctx.r31.s64 + -120;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x82b593d0
	if (!ctx.cr6.gt) goto loc_82B593D0;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// b 0x82b593dc
	goto loc_82B593DC;
loc_82B593D0:
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_82B593DC:
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
loc_82B593E0:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x82b593f4
	if (!ctx.cr6.lt) goto loc_82B593F4;
	// lbzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// b 0x82b59400
	goto loc_82B59400;
loc_82B593F4:
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r27,256
	ctx.r10.s64 = ctx.r27.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82B59400:
	// rlwinm r8,r11,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r6,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lhz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// ble cr6,0x82b5948c
	if (!ctx.cr6.gt) goto loc_82B5948C;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stbx r10,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r11.s64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r25,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x82b594a0
	goto loc_82B594A0;
loc_82B5948C:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_82B594A0:
	// addi r11,r31,-2360
	ctx.r11.s64 = ctx.r31.s64 + -2360;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b59544
	if (ctx.cr6.eq) goto loc_82B59544;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r10,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r9.s64;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x82b59534
	if (!ctx.cr6.gt) goto loc_82B59534;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r6.u16);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x82b59544
	goto loc_82B59544;
loc_82B59534:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
loc_82B5953C:
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r6,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r6.u16);
loc_82B59544:
	// lwz r11,5792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b591dc
	if (ctx.cr6.lt) goto loc_82B591DC;
loc_82B59550:
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,1024(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1024);
	// ble cr6,0x82b595d8
	if (!ctx.cr6.gt) goto loc_82B595D8;
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r11,r9,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82B595D8:
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82B595FC"))) PPC_WEAK_FUNC(sub_82B595FC);
PPC_FUNC_IMPL(__imp__sub_82B595FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59600"))) PPC_WEAK_FUNC(sub_82B59600);
PPC_FUNC_IMPL(__imp__sub_82B59600) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
loc_82B59608:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b59624
	if (!ctx.cr6.eq) goto loc_82B59624;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x82b59608
	if (ctx.cr6.lt) goto loc_82B59608;
loc_82B59624:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82b596b4
	if (!ctx.cr6.eq) goto loc_82B596B4;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
loc_82B59634:
	// lhz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b596b4
	if (!ctx.cr6.eq) goto loc_82B596B4;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b59690
	if (!ctx.cr6.eq) goto loc_82B59690;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b59698
	if (!ctx.cr6.eq) goto loc_82B59698;
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b596a0
	if (!ctx.cr6.eq) goto loc_82B596A0;
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b596a8
	if (!ctx.cr6.eq) goto loc_82B596A8;
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b596b0
	if (!ctx.cr6.eq) goto loc_82B596B0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x82b59634
	if (ctx.cr6.lt) goto loc_82B59634;
	// b 0x82b596b4
	goto loc_82B596B4;
loc_82B59690:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82b596b4
	goto loc_82B596B4;
loc_82B59698:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82b596b4
	goto loc_82B596B4;
loc_82B596A0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82b596b4
	goto loc_82B596B4;
loc_82B596A8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82b596b4
	goto loc_82B596B4;
loc_82B596B0:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_82B596B4:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B596CC"))) PPC_WEAK_FUNC(sub_82B596CC);
PPC_FUNC_IMPL(__imp__sub_82B596CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B596D0"))) PPC_WEAK_FUNC(sub_82B596D0);
PPC_FUNC_IMPL(__imp__sub_82B596D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82b59720
	if (!ctx.cr6.eq) goto loc_82B59720;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stw r10,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r10.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
loc_82B59720:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lhz r11,5816(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r6,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5975C"))) PPC_WEAK_FUNC(sub_82B5975C);
PPC_FUNC_IMPL(__imp__sub_82B5975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59760"))) PPC_WEAK_FUNC(sub_82B59760);
PPC_FUNC_IMPL(__imp__sub_82B59760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82b597b0
	if (!ctx.cr6.gt) goto loc_82B597B0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// blr 
	return;
loc_82B597B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b597d4
	if (!ctx.cr6.gt) goto loc_82B597D4;
	// lhz r11,5816(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
loc_82B597D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B597E4"))) PPC_WEAK_FUNC(sub_82B597E4);
PPC_FUNC_IMPL(__imp__sub_82B597E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

