#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CDC068"))) PPC_WEAK_FUNC(sub_82CDC068);
PPC_FUNC_IMPL(__imp__sub_82CDC068) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82cdbe80
	ctx.lr = 0x82CDC080;
	sub_82CDBE80(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82CDC0A0"))) PPC_WEAK_FUNC(sub_82CDC0A0);
PPC_FUNC_IMPL(__imp__sub_82CDC0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CDC0A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDC0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdc104
	if (ctx.cr6.eq) goto loc_82CDC104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cdbee0
	ctx.lr = 0x82CDC0E4;
	sub_82CDBEE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cdc104
	if (ctx.cr6.eq) goto loc_82CDC104;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CDC104:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CDC114"))) PPC_WEAK_FUNC(sub_82CDC114);
PPC_FUNC_IMPL(__imp__sub_82CDC114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC118"))) PPC_WEAK_FUNC(sub_82CDC118);
PPC_FUNC_IMPL(__imp__sub_82CDC118) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82cdc160
	if (!ctx.cr6.eq) goto loc_82CDC160;
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82cdc158
	if (ctx.cr6.eq) goto loc_82CDC158;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CDC138:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82cdc138
	if (ctx.cr6.lt) goto loc_82CDC138;
loc_82CDC158:
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// b 0x82cdc168
	goto loc_82CDC168;
loc_82CDC160:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
loc_82CDC168:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,48000
	ctx.r9.u64 = ctx.r11.u64 | 48000;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDC180"))) PPC_WEAK_FUNC(sub_82CDC180);
PPC_FUNC_IMPL(__imp__sub_82CDC180) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDC1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdc1d0
	if (ctx.cr6.lt) goto loc_82CDC1D0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cdc1d0
	if (ctx.cr6.eq) goto loc_82CDC1D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CDC1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CDC1D0:
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

__attribute__((alias("__imp__sub_82CDC1E4"))) PPC_WEAK_FUNC(sub_82CDC1E4);
PPC_FUNC_IMPL(__imp__sub_82CDC1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC1E8"))) PPC_WEAK_FUNC(sub_82CDC1E8);
PPC_FUNC_IMPL(__imp__sub_82CDC1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CDC1F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDC200;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdc228
	if (ctx.cr6.eq) goto loc_82CDC228;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdc23c
	if (ctx.cr6.eq) goto loc_82CDC23C;
loc_82CDC228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDC230;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CDC23C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDC25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cdc278
	if (ctx.cr6.lt) goto loc_82CDC278;
	// lbz r10,61(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 61);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r8,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r8.u8);
loc_82CDC278:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82cdc2c4
	if (ctx.cr6.eq) goto loc_82CDC2C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cdc2c4
	if (!ctx.cr6.eq) goto loc_82CDC2C4;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdc2c4
	if (!ctx.cr0.eq) goto loc_82CDC2C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDC2BC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDC2C4;
	__imp__KfLowerIrql(ctx, base);
loc_82CDC2C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CDC2D0"))) PPC_WEAK_FUNC(sub_82CDC2D0);
PPC_FUNC_IMPL(__imp__sub_82CDC2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r11,28900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDC2EC"))) PPC_WEAK_FUNC(sub_82CDC2EC);
PPC_FUNC_IMPL(__imp__sub_82CDC2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC2F0"))) PPC_WEAK_FUNC(sub_82CDC2F0);
PPC_FUNC_IMPL(__imp__sub_82CDC2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CDC2F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,28900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,140(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82cdc340
	if (ctx.cr6.eq) goto loc_82CDC340;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDC338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdc3d8
	if (ctx.cr6.lt) goto loc_82CDC3D8;
loc_82CDC340:
	// addi r29,r31,76
	ctx.r29.s64 = ctx.r31.s64 + 76;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce5f78
	ctx.lr = 0x82CDC354;
	sub_82CE5F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdc3d8
	if (ctx.cr6.lt) goto loc_82CDC3D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce5610
	ctx.lr = 0x82CDC368;
	sub_82CE5610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdc3d8
	if (ctx.cr6.lt) goto loc_82CDC3D8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDC388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cdc3d4
	if (ctx.cr6.lt) goto loc_82CDC3D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cdd5d8
	ctx.lr = 0x82CDC3A0;
	sub_82CDD5D8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdc3d4
	if (!ctx.cr6.eq) goto loc_82CDC3D4;
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdc3d4
	if (!ctx.cr6.eq) goto loc_82CDC3D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce62c0
	ctx.lr = 0x82CDC3CC;
	sub_82CE62C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CDC3D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CDC3D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CDC3E0"))) PPC_WEAK_FUNC(sub_82CDC3E0);
PPC_FUNC_IMPL(__imp__sub_82CDC3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82cdc404
	if (!ctx.cr6.lt) goto loc_82CDC404;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r11,33
	ctx.r9.s64 = ctx.r11.s64 + 33;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,28900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28900);
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82cdc40c
	goto loc_82CDC40C;
loc_82CDC404:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
loc_82CDC40C:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f13,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82CDC42C"))) PPC_WEAK_FUNC(sub_82CDC42C);
PPC_FUNC_IMPL(__imp__sub_82CDC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC430"))) PPC_WEAK_FUNC(sub_82CDC430);
PPC_FUNC_IMPL(__imp__sub_82CDC430) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CDC44C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82cdc44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CDC44C;
	// bl 0x82cdc118
	ctx.lr = 0x82CDC45C;
	sub_82CDC118(ctx, base);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,28900(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28900);
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
loc_82CDC474:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82cdc4e8
	if (!ctx.cr6.eq) goto loc_82CDC4E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82cdc474
	if (ctx.cr6.lt) goto loc_82CDC474;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CDC494:
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cdc4b8
	if (!ctx.cr6.eq) goto loc_82CDC4B8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CDC4B8:
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r11.u8);
	// lbz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cdc4cc
	if (!ctx.cr6.eq) goto loc_82CDC4CC;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82CDC4CC:
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CDC4E8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82cdc494
	goto loc_82CDC494;
}

__attribute__((alias("__imp__sub_82CDC4F8"))) PPC_WEAK_FUNC(sub_82CDC4F8);
PPC_FUNC_IMPL(__imp__sub_82CDC4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CDC500;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// lwz r30,60(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82cdc430
	ctx.lr = 0x82CDC520;
	sub_82CDC430(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ce5120
	ctx.lr = 0x82CDC52C;
	sub_82CE5120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdc5c8
	if (ctx.cr6.lt) goto loc_82CDC5C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CDC544:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82cdc544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CDC544;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82CDC56C;
	sub_82CA2C60(ctx, base);
	// lbz r10,59(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r10.u8);
	// stb r9,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r9.u8);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// bl 0x82cdba80
	ctx.lr = 0x82CDC5A4;
	sub_82CDBA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x82cdc5cc
	if (ctx.cr6.lt) goto loc_82CDC5CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CDC5C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CDC5CC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CDC5D4"))) PPC_WEAK_FUNC(sub_82CDC5D4);
PPC_FUNC_IMPL(__imp__sub_82CDC5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC5D8"))) PPC_WEAK_FUNC(sub_82CDC5D8);
PPC_FUNC_IMPL(__imp__sub_82CDC5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CDC5E0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,16352
	ctx.r10.s64 = ctx.r11.s64 + 16352;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CDC604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdc628
	if (ctx.cr6.lt) goto loc_82CDC628;
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdc628
	if (ctx.cr6.eq) goto loc_82CDC628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDC628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CDC628:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r28,28900(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// bl 0x832b2c0c
	ctx.lr = 0x82CDC634;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdc65c
	if (ctx.cr6.eq) goto loc_82CDC65C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82cdc674
	if (ctx.cr6.eq) goto loc_82CDC674;
loc_82CDC65C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDC664;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82CDC674:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cdc6b4
	if (ctx.cr6.eq) goto loc_82CDC6B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDC6B4:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cdc6f8
	if (ctx.cr6.eq) goto loc_82CDC6F8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cdc6f8
	if (!ctx.cr6.eq) goto loc_82CDC6F8;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdc6f8
	if (!ctx.cr0.eq) goto loc_82CDC6F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDC6F0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDC6F8;
	__imp__KfLowerIrql(ctx, base);
loc_82CDC6F8:
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdc71c
	if (ctx.cr6.eq) goto loc_82CDC71C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDC714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r9.u32);
loc_82CDC71C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ce54a8
	ctx.lr = 0x82CDC724;
	sub_82CE54A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CDC72C"))) PPC_WEAK_FUNC(sub_82CDC72C);
PPC_FUNC_IMPL(__imp__sub_82CDC72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC730"))) PPC_WEAK_FUNC(sub_82CDC730);
PPC_FUNC_IMPL(__imp__sub_82CDC730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDC740"))) PPC_WEAK_FUNC(sub_82CDC740);
PPC_FUNC_IMPL(__imp__sub_82CDC740) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDC750"))) PPC_WEAK_FUNC(sub_82CDC750);
PPC_FUNC_IMPL(__imp__sub_82CDC750) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDC76C"))) PPC_WEAK_FUNC(sub_82CDC76C);
PPC_FUNC_IMPL(__imp__sub_82CDC76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC770"))) PPC_WEAK_FUNC(sub_82CDC770);
PPC_FUNC_IMPL(__imp__sub_82CDC770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CDC798;
	sub_82CA2C60(ctx, base);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r11.u8);
	// bl 0x82cdc430
	ctx.lr = 0x82CDC7AC;
	sub_82CDC430(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce51d8
	ctx.lr = 0x82CDC7B8;
	sub_82CE51D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdc834
	if (ctx.cr6.lt) goto loc_82CDC834;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CDC7D0:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82cdc7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CDC7D0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82CDC7F8;
	sub_82CA2C60(ctx, base);
	// lbz r10,59(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,255
	ctx.r6.s64 = 255;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// stb r10,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r9.u8);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// bl 0x82ce5c70
	ctx.lr = 0x82CDC834;
	sub_82CE5C70(ctx, base);
loc_82CDC834:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_82CDC84C"))) PPC_WEAK_FUNC(sub_82CDC84C);
PPC_FUNC_IMPL(__imp__sub_82CDC84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDC850"))) PPC_WEAK_FUNC(sub_82CDC850);
PPC_FUNC_IMPL(__imp__sub_82CDC850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CDC858;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDC864;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdc88c
	if (ctx.cr6.eq) goto loc_82CDC88C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdc8a8
	if (ctx.cr6.eq) goto loc_82CDC8A8;
loc_82CDC88C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDC894;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// b 0x82cdc8ac
	goto loc_82CDC8AC;
loc_82CDC8A8:
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82CDC8AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r9,61(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82cdc914
	if (!ctx.cr6.eq) goto loc_82CDC914;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdc904
	if (ctx.cr6.eq) goto loc_82CDC904;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82cdc904
	if (!ctx.cr6.eq) goto loc_82CDC904;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdc904
	if (!ctx.cr0.eq) goto loc_82CDC904;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDC8FC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDC904;
	__imp__KfLowerIrql(ctx, base);
loc_82CDC904:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82CDC914:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28900);
	// bl 0x82cda478
	ctx.lr = 0x82CDC924;
	sub_82CDA478(ctx, base);
	// lwz r28,28900(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28900);
	// bl 0x832b2c0c
	ctx.lr = 0x82CDC92C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdc94c
	if (ctx.cr6.eq) goto loc_82CDC94C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82cdc964
	if (ctx.cr6.eq) goto loc_82CDC964;
loc_82CDC94C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDC954;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82CDC964:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cdc9a4
	if (ctx.cr6.eq) goto loc_82CDC9A4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDC9A4:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cdc9e8
	if (ctx.cr6.eq) goto loc_82CDC9E8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cdc9e8
	if (!ctx.cr6.eq) goto loc_82CDC9E8;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdc9e8
	if (!ctx.cr0.eq) goto loc_82CDC9E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDC9E0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDC9E8;
	__imp__KfLowerIrql(ctx, base);
loc_82CDC9E8:
	// bl 0x832b2c0c
	ctx.lr = 0x82CDC9EC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdca0c
	if (ctx.cr6.eq) goto loc_82CDCA0C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdca20
	if (ctx.cr6.eq) goto loc_82CDCA20;
loc_82CDCA0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDCA14;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CDCA20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,61(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r9,61(r27)
	PPC_STORE_U8(ctx.r27.u32 + 61, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdca88
	if (ctx.cr6.eq) goto loc_82CDCA88;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdca88
	if (!ctx.cr6.eq) goto loc_82CDCA88;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdca88
	if (!ctx.cr0.eq) goto loc_82CDCA88;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDCA7C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDCA84;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDCA88:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdcad0
	if (ctx.cr6.eq) goto loc_82CDCAD0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdcad0
	if (!ctx.cr6.eq) goto loc_82CDCAD0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdcad0
	if (!ctx.cr0.eq) goto loc_82CDCAD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDCAC8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDCAD0;
	__imp__KfLowerIrql(ctx, base);
loc_82CDCAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CDCADC"))) PPC_WEAK_FUNC(sub_82CDCADC);
PPC_FUNC_IMPL(__imp__sub_82CDCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDCAE0"))) PPC_WEAK_FUNC(sub_82CDCAE0);
PPC_FUNC_IMPL(__imp__sub_82CDCAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CDCAE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82ce5090
	ctx.lr = 0x82CDCAF4;
	sub_82CE5090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r10,16352
	ctx.r8.s64 = ctx.r10.s64 + 16352;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stfs f0,140(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 140, temp.u32);
	// lwz r11,28900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28900);
	// addi r30,r11,80
	ctx.r30.s64 = ctx.r11.s64 + 80;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDCB1C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r28,r13
	ctx.r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdcb44
	if (ctx.cr6.eq) goto loc_82CDCB44;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdcb58
	if (ctx.cr6.eq) goto loc_82CDCB58;
loc_82CDCB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDCB4C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
loc_82CDCB58:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdcbcc
	if (ctx.cr6.eq) goto loc_82CDCBCC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdcbcc
	if (!ctx.cr6.eq) goto loc_82CDCBCC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdcbcc
	if (!ctx.cr0.eq) goto loc_82CDCBCC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDCBC4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDCBCC;
	__imp__KfLowerIrql(ctx, base);
loc_82CDCBCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CDCBD8"))) PPC_WEAK_FUNC(sub_82CDCBD8);
PPC_FUNC_IMPL(__imp__sub_82CDCBD8) {
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
	// bl 0x82cdc5d8
	ctx.lr = 0x82CDCBF0;
	sub_82CDC5D8(ctx, base);
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

__attribute__((alias("__imp__sub_82CDCC08"))) PPC_WEAK_FUNC(sub_82CDCC08);
PPC_FUNC_IMPL(__imp__sub_82CDCC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CDCC10;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDCC20;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdcc48
	if (ctx.cr6.eq) goto loc_82CDCC48;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdcc5c
	if (ctx.cr6.eq) goto loc_82CDCC5C;
loc_82CDCC48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDCC50;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CDCC5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,61(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cdcc80
	if (ctx.cr6.eq) goto loc_82CDCC80;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// b 0x82cdcde0
	goto loc_82CDCDE0;
loc_82CDCC80:
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdcde0
	if (!ctx.cr6.eq) goto loc_82CDCDE0;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDCC90;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdccb0
	if (ctx.cr6.eq) goto loc_82CDCCB0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdccc4
	if (ctx.cr6.eq) goto loc_82CDCCC4;
loc_82CDCCB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDCCB8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CDCCC4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,61(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// ori r9,r11,64
	ctx.r9.u64 = ctx.r11.u64 | 64;
	// stb r9,61(r27)
	PPC_STORE_U8(ctx.r27.u32 + 61, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdcd24
	if (ctx.cr6.eq) goto loc_82CDCD24;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdcd24
	if (!ctx.cr6.eq) goto loc_82CDCD24;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdcd24
	if (!ctx.cr0.eq) goto loc_82CDCD24;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDCD1C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDCD24;
	__imp__KfLowerIrql(ctx, base);
loc_82CDCD24:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r30,28900(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// bl 0x832b2c0c
	ctx.lr = 0x82CDCD30;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdcd50
	if (ctx.cr6.eq) goto loc_82CDCD50;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdcd64
	if (ctx.cr6.eq) goto loc_82CDCD64;
loc_82CDCD50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDCD58;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CDCD64:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdcde0
	if (ctx.cr6.eq) goto loc_82CDCDE0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82cdcde0
	if (!ctx.cr6.eq) goto loc_82CDCDE0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdcde0
	if (!ctx.cr0.eq) goto loc_82CDCDE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDCDD4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDCDDC;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDCDE0:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdce28
	if (ctx.cr6.eq) goto loc_82CDCE28;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdce28
	if (!ctx.cr6.eq) goto loc_82CDCE28;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdce28
	if (!ctx.cr0.eq) goto loc_82CDCE28;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDCE20;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDCE28;
	__imp__KfLowerIrql(ctx, base);
loc_82CDCE28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CDCE34"))) PPC_WEAK_FUNC(sub_82CDCE34);
PPC_FUNC_IMPL(__imp__sub_82CDCE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDCE38"))) PPC_WEAK_FUNC(sub_82CDCE38);
PPC_FUNC_IMPL(__imp__sub_82CDCE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CDCE40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82cdc850
	ctx.lr = 0x82CDCE50;
	sub_82CDC850(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,16388
	ctx.r10.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82cdcedc
	if (!ctx.cr6.eq) goto loc_82CDCEDC;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdced0
	if (ctx.cr6.eq) goto loc_82CDCED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDCE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdcedc
	if (ctx.cr6.lt) goto loc_82CDCEDC;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cdced0
	if (!ctx.cr6.eq) goto loc_82CDCED0;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDCEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdcedc
	if (ctx.cr6.lt) goto loc_82CDCEDC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdced0
	if (!ctx.cr6.eq) goto loc_82CDCED0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 | 1;
loc_82CDCED0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce62c0
	ctx.lr = 0x82CDCEDC;
	sub_82CE62C0(ctx, base);
loc_82CDCEDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CDCEE4"))) PPC_WEAK_FUNC(sub_82CDCEE4);
PPC_FUNC_IMPL(__imp__sub_82CDCEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDCEE8"))) PPC_WEAK_FUNC(sub_82CDCEE8);
PPC_FUNC_IMPL(__imp__sub_82CDCEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CDCEF0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82cdc4f8
	ctx.lr = 0x82CDCF08;
	sub_82CDC4F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdcf1c
	if (ctx.cr6.lt) goto loc_82CDCF1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// b 0x82cdcf20
	goto loc_82CDCF20;
loc_82CDCF1C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CDCF20:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdcfc0
	if (ctx.cr6.lt) goto loc_82CDCFC0;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x82ce4fe0
	ctx.lr = 0x82CDCF3C;
	sub_82CE4FE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82cdcfc0
	if (ctx.cr6.lt) goto loc_82CDCFC0;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r4,148
	ctx.r4.s64 = 148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDCF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdcf80
	if (ctx.cr6.eq) goto loc_82CDCF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82cdcae0
	ctx.lr = 0x82CDCF74;
	sub_82CDCAE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cdcf8c
	if (!ctx.cr6.eq) goto loc_82CDCF8C;
loc_82CDCF80:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82cdcfc0
	goto loc_82CDCFC0;
loc_82CDCF8C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cdc770
	ctx.lr = 0x82CDCF98;
	sub_82CDC770(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82cdcfac
	if (ctx.cr6.lt) goto loc_82CDCFAC;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82cdcfc0
	goto loc_82CDCFC0;
loc_82CDCFAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDCFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CDCFC0:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdcfdc
	if (ctx.cr6.eq) goto loc_82CDCFDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDCFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CDCFDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CDCFE8"))) PPC_WEAK_FUNC(sub_82CDCFE8);
PPC_FUNC_IMPL(__imp__sub_82CDCFE8) {
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
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cdd020
	if (ctx.cr6.eq) goto loc_82CDD020;
	// bl 0x82cdcc08
	ctx.lr = 0x82CDD00C;
	sub_82CDCC08(ctx, base);
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
loc_82CDD020:
	// bl 0x82cdc850
	ctx.lr = 0x82CDD024;
	sub_82CDC850(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,16388
	ctx.r10.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82cdd03c
	if (ctx.cr6.eq) goto loc_82CDD03C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdd074
	if (ctx.cr6.lt) goto loc_82CDD074;
loc_82CDD03C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDD050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CDD064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdd074
	if (ctx.cr6.lt) goto loc_82CDD074;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce6098
	ctx.lr = 0x82CDD074;
	sub_82CE6098(ctx, base);
loc_82CDD074:
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

__attribute__((alias("__imp__sub_82CDD088"))) PPC_WEAK_FUNC(sub_82CDD088);
PPC_FUNC_IMPL(__imp__sub_82CDD088) {
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
	// bl 0x82ce59d0
	ctx.lr = 0x82CDD0A4;
	sub_82CE59D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cdd0dc
	if (ctx.cr6.lt) goto loc_82CDD0DC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82cdd0c4
	if (!ctx.cr6.eq) goto loc_82CDD0C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CDD0C4:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x82cd7eb8
	ctx.lr = 0x82CDD0D0;
	sub_82CD7EB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cdd5d8
	ctx.lr = 0x82CDD0DC;
	sub_82CDD5D8(ctx, base);
loc_82CDD0DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82CDD0F8"))) PPC_WEAK_FUNC(sub_82CDD0F8);
PPC_FUNC_IMPL(__imp__sub_82CDD0F8) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CDD108:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82cdd108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CDD108;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// ori r9,r11,48000
	ctx.r9.u64 = ctx.r11.u64 | 48000;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cdd154
	if (!ctx.cr6.eq) goto loc_82CDD154;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CDD154:
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r11.u8);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cdd168
	if (!ctx.cr6.eq) goto loc_82CDD168;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82CDD168:
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD178"))) PPC_WEAK_FUNC(sub_82CDD178);
PPC_FUNC_IMPL(__imp__sub_82CDD178) {
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
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,48000
	ctx.r8.u64 = ctx.r10.u64 | 48000;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82ce50d0
	ctx.lr = 0x82CDD1B4;
	sub_82CE50D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cdd1d0
	if (ctx.cr6.lt) goto loc_82CDD1D0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x82cd7fe0
	ctx.lr = 0x82CDD1D0;
	sub_82CD7FE0(ctx, base);
loc_82CDD1D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82CDD1EC"))) PPC_WEAK_FUNC(sub_82CDD1EC);
PPC_FUNC_IMPL(__imp__sub_82CDD1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDD1F0"))) PPC_WEAK_FUNC(sub_82CDD1F0);
PPC_FUNC_IMPL(__imp__sub_82CDD1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CDD1F8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,16448
	ctx.r10.s64 = ctx.r11.s64 + 16448;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82ce62c0
	ctx.lr = 0x82CDD214;
	sub_82CE62C0(ctx, base);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lbz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// mulli r10,r8,44
	ctx.r10.s64 = ctx.r8.s64 * 44;
	// lwz r11,28900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28900);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDD230;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdd258
	if (ctx.cr6.eq) goto loc_82CDD258;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82cdd270
	if (ctx.cr6.eq) goto loc_82CDD270;
loc_82CDD258:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDD260;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82CDD270:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cdd2b0
	if (ctx.cr6.eq) goto loc_82CDD2B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDD2B0:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cdd2f4
	if (ctx.cr6.eq) goto loc_82CDD2F4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cdd2f4
	if (!ctx.cr6.eq) goto loc_82CDD2F4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdd2f4
	if (!ctx.cr0.eq) goto loc_82CDD2F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDD2EC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDD2F4;
	__imp__KfLowerIrql(ctx, base);
loc_82CDD2F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce54a8
	ctx.lr = 0x82CDD2FC;
	sub_82CE54A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CDD304"))) PPC_WEAK_FUNC(sub_82CDD304);
PPC_FUNC_IMPL(__imp__sub_82CDD304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDD308"))) PPC_WEAK_FUNC(sub_82CDD308);
PPC_FUNC_IMPL(__imp__sub_82CDD308) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD318"))) PPC_WEAK_FUNC(sub_82CDD318);
PPC_FUNC_IMPL(__imp__sub_82CDD318) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ce5548
	sub_82CE5548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CDD31C"))) PPC_WEAK_FUNC(sub_82CDD31C);
PPC_FUNC_IMPL(__imp__sub_82CDD31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDD320"))) PPC_WEAK_FUNC(sub_82CDD320);
PPC_FUNC_IMPL(__imp__sub_82CDD320) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cdd0f8
	ctx.lr = 0x82CDD344;
	sub_82CDD0F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce51d8
	ctx.lr = 0x82CDD350;
	sub_82CE51D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82cdd36c
	if (ctx.cr6.lt) goto loc_82CDD36C;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cd7fe0
	ctx.lr = 0x82CDD36C;
	sub_82CD7FE0(ctx, base);
loc_82CDD36C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82CDD388"))) PPC_WEAK_FUNC(sub_82CDD388);
PPC_FUNC_IMPL(__imp__sub_82CDD388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CDD390;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82ce5090
	ctx.lr = 0x82CDD3A8;
	sub_82CE5090(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r11,16448
	ctx.r8.s64 = ctx.r11.s64 + 16448;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lbz r7,10(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stb r7,76(r29)
	PPC_STORE_U8(ctx.r29.u32 + 76, ctx.r7.u8);
	// mulli r10,r6,44
	ctx.r10.s64 = ctx.r6.s64 * 44;
	// lwz r11,28900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28900);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDD3D8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r28,r13
	ctx.r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdd400
	if (ctx.cr6.eq) goto loc_82CDD400;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdd414
	if (ctx.cr6.eq) goto loc_82CDD414;
loc_82CDD400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDD408;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
loc_82CDD414:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdd488
	if (ctx.cr6.eq) goto loc_82CDD488;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdd488
	if (!ctx.cr6.eq) goto loc_82CDD488;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdd488
	if (!ctx.cr0.eq) goto loc_82CDD488;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDD480;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDD488;
	__imp__KfLowerIrql(ctx, base);
loc_82CDD488:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CDD494"))) PPC_WEAK_FUNC(sub_82CDD494);
PPC_FUNC_IMPL(__imp__sub_82CDD494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDD498"))) PPC_WEAK_FUNC(sub_82CDD498);
PPC_FUNC_IMPL(__imp__sub_82CDD498) {
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
	// bl 0x82cdd1f0
	ctx.lr = 0x82CDD4B0;
	sub_82CDD1F0(ctx, base);
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

__attribute__((alias("__imp__sub_82CDD4C8"))) PPC_WEAK_FUNC(sub_82CDD4C8);
PPC_FUNC_IMPL(__imp__sub_82CDD4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CDD4D0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82cdd0f8
	ctx.lr = 0x82CDD4E8;
	sub_82CDD0F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ce5120
	ctx.lr = 0x82CDD4F4;
	sub_82CE5120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdd508
	if (ctx.cr6.lt) goto loc_82CDD508;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82CDD508:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cdd5ac
	if (ctx.cr6.lt) goto loc_82CDD5AC;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x82ce4fe0
	ctx.lr = 0x82CDD528;
	sub_82CE4FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cdd5ac
	if (ctx.cr6.lt) goto loc_82CDD5AC;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDD54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdd56c
	if (ctx.cr6.eq) goto loc_82CDD56C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82cdd388
	ctx.lr = 0x82CDD560;
	sub_82CDD388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cdd578
	if (!ctx.cr6.eq) goto loc_82CDD578;
loc_82CDD56C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82cdd5ac
	goto loc_82CDD5AC;
loc_82CDD578:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdd320
	ctx.lr = 0x82CDD584;
	sub_82CDD320(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cdd598
	if (ctx.cr6.lt) goto loc_82CDD598;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x82cdd5ac
	goto loc_82CDD5AC;
loc_82CDD598:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDD5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CDD5AC:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cdd5c8
	if (ctx.cr6.eq) goto loc_82CDD5C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDD5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CDD5C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CDD5D4"))) PPC_WEAK_FUNC(sub_82CDD5D4);
PPC_FUNC_IMPL(__imp__sub_82CDD5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDD5D8"))) PPC_WEAK_FUNC(sub_82CDD5D8);
PPC_FUNC_IMPL(__imp__sub_82CDD5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28904
	ctx.r11.s64 = ctx.r11.s64 + 28904;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CDD5E8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82cdd5e8
	if (!ctx.cr0.eq) goto loc_82CDD5E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD60C"))) PPC_WEAK_FUNC(sub_82CDD60C);
PPC_FUNC_IMPL(__imp__sub_82CDD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDD610"))) PPC_WEAK_FUNC(sub_82CDD610);
PPC_FUNC_IMPL(__imp__sub_82CDD610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CDD618;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28904
	ctx.r31.s64 = ctx.r11.s64 + 28904;
	// li r30,0
	ctx.r30.s64 = 0;
	// sradi r26,r10,32
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0xFFFFFFFF) != 0);
	ctx.r26.s64 = ctx.r10.s64 >> 32;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r11,28904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28904);
	// std r30,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r30.u64);
	// lis r3,22593
	ctx.r3.s64 = 1480654848;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r3,r3,30052
	ctx.r3.u64 = ctx.r3.u64 | 30052;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r30,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r30.u64);
	// std r30,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r30.u64);
	// std r30,24(r28)
	PPC_STORE_U64(ctx.r28.u32 + 24, ctx.r30.u64);
	// std r30,32(r28)
	PPC_STORE_U64(ctx.r28.u32 + 32, ctx.r30.u64);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// bl 0x83004a90
	ctx.lr = 0x82CDD6A0;
	sub_83004A90(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CDD6A4:
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x82cdd6a4
	if (ctx.cr6.lt) goto loc_82CDD6A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CDD6D0"))) PPC_WEAK_FUNC(sub_82CDD6D0);
PPC_FUNC_IMPL(__imp__sub_82CDD6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,16564(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f13,16572(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16572);
	ctx.f13.f64 = double(temp.f32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lfs f0,16560(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16560);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lfs f13,16564(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f12,16568(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16568);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f11,16572(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16572);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD758"))) PPC_WEAK_FUNC(sub_82CDD758);
PPC_FUNC_IMPL(__imp__sub_82CDD758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7500
	ctx.lr = 0x82CDD76C;
	sub_82CA7500(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f26,16564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16564);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,16568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16568);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bge cr6,0x82cdd7a0
	if (!ctx.cr6.lt) goto loc_82CDD7A0;
	// fdivs f28,f13,f31
	ctx.f28.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// b 0x82cdd7a4
	goto loc_82CDD7A4;
loc_82CDD7A0:
	// fmr f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f0.f64;
loc_82CDD7A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,19800(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19800);
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfd f30,3384(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3384);
	// lfs f0,3052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3052);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fdiv f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f27,f8
	ctx.f27.f64 = double(float(ctx.f8.f64));
	// bl 0x821fe378
	ctx.lr = 0x82CDD7E4;
	sub_821FE378(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfd f29,3368(r8)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3368);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDD7F8;
	sub_821FE378(ctx, base);
	// fmuls f7,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f0,2736(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x821fe378
	ctx.lr = 0x82CDD814;
	sub_821FE378(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDD824;
	sub_821FE378(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,19792(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19792);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82cdd89c
	if (!ctx.cr6.lt) goto loc_82CDD89C;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82239e88
	ctx.lr = 0x82CDD844;
	sub_82239E88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// lfd f13,3552(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3552);
	// fsub f10,f0,f31
	ctx.f10.f64 = ctx.f0.f64 - ctx.f31.f64;
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsub f8,f0,f12
	ctx.f8.f64 = ctx.f0.f64 - ctx.f12.f64;
	// fmuls f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fsub f5,f0,f9
	ctx.f5.f64 = ctx.f0.f64 - ctx.f9.f64;
	// fmul f4,f8,f31
	ctx.f4.f64 = ctx.f8.f64 * ctx.f31.f64;
	// fsub f3,f0,f7
	ctx.f3.f64 = ctx.f0.f64 - ctx.f7.f64;
	// fmul f2,f5,f11
	ctx.f2.f64 = ctx.f5.f64 * ctx.f11.f64;
	// fmsub f1,f4,f13,f2
	ctx.f1.f64 = ctx.f4.f64 * ctx.f13.f64 - ctx.f2.f64;
	// fsqrt f0,f1
	ctx.f0.f64 = sqrt(ctx.f1.f64);
	// fsub f13,f3,f0
	ctx.f13.f64 = ctx.f3.f64 - ctx.f0.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x82cdd8a0
	goto loc_82CDD8A0;
loc_82CDD89C:
	// stfs f26,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82CDD8A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca754c
	ctx.lr = 0x82CDD8AC;
	sub_82CA754C(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD8BC"))) PPC_WEAK_FUNC(sub_82CDD8BC);
PPC_FUNC_IMPL(__imp__sub_82CDD8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDD8C0"))) PPC_WEAK_FUNC(sub_82CDD8C0);
PPC_FUNC_IMPL(__imp__sub_82CDD8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,2048
	ctx.r10.s64 = 2048;
loc_82CDD8C8:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82cdd8c8
	if (!ctx.cr0.eq) goto loc_82CDD8C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD920"))) PPC_WEAK_FUNC(sub_82CDD920);
PPC_FUNC_IMPL(__imp__sub_82CDD920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,64
	ctx.r10.s64 = 64;
loc_82CDD928:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82cdd928
	if (!ctx.cr0.eq) goto loc_82CDD928;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD980"))) PPC_WEAK_FUNC(sub_82CDD980);
PPC_FUNC_IMPL(__imp__sub_82CDD980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82CDD988:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82cdd988
	if (!ctx.cr0.eq) goto loc_82CDD988;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDD9E0"))) PPC_WEAK_FUNC(sub_82CDD9E0);
PPC_FUNC_IMPL(__imp__sub_82CDD9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,256
	ctx.r10.s64 = 256;
loc_82CDD9E8:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82cdd9e8
	if (!ctx.cr0.eq) goto loc_82CDD9E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDDA40"))) PPC_WEAK_FUNC(sub_82CDDA40);
PPC_FUNC_IMPL(__imp__sub_82CDDA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82CDDA48:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82cdda48
	if (!ctx.cr0.eq) goto loc_82CDDA48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDDAA0"))) PPC_WEAK_FUNC(sub_82CDDAA0);
PPC_FUNC_IMPL(__imp__sub_82CDDAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82CDDAA8:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82cddaa8
	if (!ctx.cr0.eq) goto loc_82CDDAA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDDB00"))) PPC_WEAK_FUNC(sub_82CDDB00);
PPC_FUNC_IMPL(__imp__sub_82CDDB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,512
	ctx.r10.s64 = 512;
loc_82CDDB08:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82cddb08
	if (!ctx.cr0.eq) goto loc_82CDDB08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDDB60"))) PPC_WEAK_FUNC(sub_82CDDB60);
PPC_FUNC_IMPL(__imp__sub_82CDDB60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDDB68"))) PPC_WEAK_FUNC(sub_82CDDB68);
PPC_FUNC_IMPL(__imp__sub_82CDDB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,26348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDDB7C"))) PPC_WEAK_FUNC(sub_82CDDB7C);
PPC_FUNC_IMPL(__imp__sub_82CDDB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDDB80"))) PPC_WEAK_FUNC(sub_82CDDB80);
PPC_FUNC_IMPL(__imp__sub_82CDDB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82CDDB88;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74d0
	ctx.lr = 0x82CDDB90;
	sub_82CA74D0(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CDDBA8;
	sub_82CA2C60(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f14,-16936(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16936);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,96(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x82cddbc8
	if (!ctx.cr6.eq) goto loc_82CDDBC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cddbf4
	goto loc_82CDDBF4;
loc_82CDDBC8:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f10,f14
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f14.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82CDDBF4:
	// bl 0x82ce6820
	ctx.lr = 0x82CDDBF8;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,4095
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4095, ctx.xer);
	// ble cr6,0x82cddc04
	if (!ctx.cr6.gt) goto loc_82CDDC04;
	// li r3,4095
	ctx.r3.s64 = 4095;
loc_82CDDC04:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r6,r10,61380
	ctx.r6.u64 = ctx.r10.u64 | 61380;
	// ori r7,r11,40712
	ctx.r7.u64 = ctx.r11.u64 | 40712;
	// ori r5,r9,41056
	ctx.r5.u64 = ctx.r9.u64 | 41056;
	// ori r4,r8,20736
	ctx.r4.u64 = ctx.r8.u64 | 20736;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stwx r3,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stwx r3,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r3,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r3,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r3.u32);
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,2792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2792);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,16584
	ctx.r31.s64 = ctx.r11.s64 + 16584;
	// lfs f15,16568(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16568);
	ctx.f15.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// stfs f15,80(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x82cddc88
	if (ctx.cr6.lt) goto loc_82CDDC88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,26348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,19908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19908);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f25,f9,f13
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// b 0x82cddcc0
	goto loc_82CDDCC0;
loc_82CDDC88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f10,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,2740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2740);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f13,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,26348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19908);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2848(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f25,f7,f12
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
loc_82CDDCC0:
	// fcmpu cr6,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// bge cr6,0x82cddccc
	if (!ctx.cr6.lt) goto loc_82CDDCCC;
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
loc_82CDDCCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f25,f13
	ctx.f30.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82cddce8
	if (!ctx.cr6.lt) goto loc_82CDDCE8;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x82cddcf4
	goto loc_82CDDCF4;
loc_82CDDCE8:
	// fcmpu cr6,f30,f15
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f15.f64);
	// ble cr6,0x82cddcf4
	if (!ctx.cr6.gt) goto loc_82CDDCF4;
	// fmr f30,f15
	ctx.f30.f64 = ctx.f15.f64;
loc_82CDDCF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82cddd28
	if (ctx.cr6.lt) goto loc_82CDDD28;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f29,f15
	ctx.f29.f64 = ctx.f15.f64;
	// fmr f28,f15
	ctx.f28.f64 = ctx.f15.f64;
	// fmr f27,f15
	ctx.f27.f64 = ctx.f15.f64;
	// lfs f0,-20492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82cddd90
	goto loc_82CDDD90;
loc_82CDDD28:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// blt cr6,0x82cddd54
	if (ctx.cr6.lt) goto loc_82CDDD54;
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-20492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20492);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f15
	ctx.f28.f64 = ctx.f15.f64;
	// fmr f27,f15
	ctx.f27.f64 = ctx.f15.f64;
	// lfs f31,16564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16564);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82cddd90
	goto loc_82CDDD90;
loc_82CDDD54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,19900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19900);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f31,16564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16564);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// blt cr6,0x82cddd84
	if (ctx.cr6.lt) goto loc_82CDDD84;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-20492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20492);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f15
	ctx.f27.f64 = ctx.f15.f64;
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82cddd90
	goto loc_82CDDD90;
loc_82CDDD84:
	// lfs f13,-20492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20492);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82CDDD90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,19896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19896);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce6820
	ctx.lr = 0x82CDDDB0;
	sub_82CE6820(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,240
	ctx.r8.u64 = ctx.r10.u64 | 240;
	// ori r7,r9,252
	ctx.r7.u64 = ctx.r9.u64 | 252;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stwx r3,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r3.u32);
	// stwx r6,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u32);
	// lfs f0,19892(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 19892);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDDE8;
	sub_82CE6820(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r4,2868
	ctx.r10.u64 = ctx.r4.u64 | 2868;
	// ori r9,r11,2880
	ctx.r9.u64 = ctx.r11.u64 | 2880;
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r8,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r5,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,28,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC0F;
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f10,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ce6820
	ctx.lr = 0x82CDDE48;
	sub_82CE6820(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,14224
	ctx.r10.u64 = ctx.r11.u64 | 14224;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce6820
	ctx.lr = 0x82CDDE5C;
	sub_82CE6820(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,18360
	ctx.r7.u64 = ctx.r9.u64 | 18360;
	// ori r6,r8,18372
	ctx.r6.u64 = ctx.r8.u64 | 18372;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stwx r3,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r5,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// lfs f0,19888(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 19888);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f30,f0
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f5.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDE94;
	sub_82CE6820(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,20988
	ctx.r8.u64 = ctx.r10.u64 | 20988;
	// ori r7,r9,21000
	ctx.r7.u64 = ctx.r9.u64 | 21000;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r6,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDEBC;
	sub_82CE6820(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmuls f26,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// ori r11,r5,32344
	ctx.r11.u64 = ctx.r5.u64 | 32344;
	// lfs f0,19884(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 19884);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// fmuls f3,f26,f0
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDEE8;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cddef4
	if (!ctx.cr6.eq) goto loc_82CDDEF4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDDEF4:
	// addis r16,r30,3
	ctx.r16.s64 = ctx.r30.s64 + 196608;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r16,r16,-29064
	ctx.r16.s64 = ctx.r16.s64 + -29064;
	// addis r15,r30,3
	ctx.r15.s64 = ctx.r30.s64 + 196608;
	// addi r15,r15,-26992
	ctx.r15.s64 = ctx.r15.s64 + -26992;
	// lfs f0,19880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19880);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r3.u32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDF24;
	sub_82CE6820(ctx, base);
	// fmuls f12,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r3.u32);
	// lfs f0,19876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDF48;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cddf54
	if (!ctx.cr6.eq) goto loc_82CDDF54;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDDF54:
	// addis r14,r30,3
	ctx.r14.s64 = ctx.r30.s64 + 196608;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r14,r14,-24836
	ctx.r14.s64 = ctx.r14.s64 + -24836;
	// lfs f0,19872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r3.u32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDF7C;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cddf88
	if (!ctx.cr6.eq) goto loc_82CDDF88;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDDF88:
	// addis r18,r30,3
	ctx.r18.s64 = ctx.r30.s64 + 196608;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r18,-8396
	ctx.r18.s64 = ctx.r18.s64 + -8396;
	// addis r17,r30,3
	ctx.r17.s64 = ctx.r30.s64 + 196608;
	// addi r17,r17,-6324
	ctx.r17.s64 = ctx.r17.s64 + -6324;
	// lfs f0,19868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19868);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r3.u32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDFB8;
	sub_82CE6820(ctx, base);
	// fmuls f12,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r3.u32);
	// lfs f0,19864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19864);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDDFDC;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cddfe8
	if (!ctx.cr6.eq) goto loc_82CDDFE8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDDFE8:
	// addis r19,r30,3
	ctx.r19.s64 = ctx.r30.s64 + 196608;
	// fmuls f28,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r19,r19,-4168
	ctx.r19.s64 = ctx.r19.s64 + -4168;
	// lfs f0,19860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19860);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE014;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde020
	if (!ctx.cr6.eq) goto loc_82CDE020;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE020:
	// fmuls f31,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r20,r30,3
	ctx.r20.s64 = ctx.r30.s64 + 196608;
	// addi r20,r20,12272
	ctx.r20.s64 = ctx.r20.s64 + 12272;
	// lfs f0,19856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19856);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE04C;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde058
	if (!ctx.cr6.eq) goto loc_82CDE058;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE058:
	// addis r22,r30,3
	ctx.r22.s64 = ctx.r30.s64 + 196608;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r22,r22,20488
	ctx.r22.s64 = ctx.r22.s64 + 20488;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r21,r30,3
	ctx.r21.s64 = ctx.r30.s64 + 196608;
	// addi r21,r21,28708
	ctx.r21.s64 = ctx.r21.s64 + 28708;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// lfs f0,19852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE08C;
	sub_82CE6820(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// lfs f0,19848(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE0AC;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde0b8
	if (!ctx.cr6.eq) goto loc_82CDE0B8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE0B8:
	// fmuls f13,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r25,r30,4
	ctx.r25.s64 = ctx.r30.s64 + 262144;
	// addi r25,r25,-28612
	ctx.r25.s64 = ctx.r25.s64 + -28612;
	// lfs f0,19844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19844);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE0E4;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde0f0
	if (!ctx.cr6.eq) goto loc_82CDE0F0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE0F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r23,r30,4
	ctx.r23.s64 = ctx.r30.s64 + 262144;
	// addi r23,r23,-24492
	ctx.r23.s64 = ctx.r23.s64 + -24492;
	// lfs f0,19840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19840);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE118;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde124
	if (!ctx.cr6.eq) goto loc_82CDE124;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE124:
	// addis r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 262144;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r24,-8048
	ctx.r24.s64 = ctx.r24.s64 + -8048;
	// lfs f0,19836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19836);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE14C;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde158
	if (!ctx.cr6.eq) goto loc_82CDE158;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE158:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 262144;
	// addi r26,r26,168
	ctx.r26.s64 = ctx.r26.s64 + 168;
	// lfs f0,19832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19832);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE180;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde18c
	if (!ctx.cr6.eq) goto loc_82CDE18C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE18C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 262144;
	// addis r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 262144;
	// addi r28,r28,8388
	ctx.r28.s64 = ctx.r28.s64 + 8388;
	// addi r27,r27,16604
	ctx.r27.s64 = ctx.r27.s64 + 16604;
	// lfs f0,19828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19828);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE1BC;
	sub_82CE6820(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lfs f0,19824(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f25,f0
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ce6820
	ctx.lr = 0x82CDE1DC;
	sub_82CE6820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cde1e8
	if (!ctx.cr6.eq) goto loc_82CDE1E8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CDE1E8:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ori r24,r8,20724
	ctx.r24.u64 = ctx.r8.u64 | 20724;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r7,0(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lfd f30,3384(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 3384);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r5,0(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lfd f0,19816(r28)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 19816);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,0(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r28,0(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r3,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r3.u32);
	// lfs f12,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fdiv f7,f12,f8
	ctx.f7.f64 = ctx.f12.f64 / ctx.f8.f64;
	// fdiv f2,f0,f7
	ctx.f2.f64 = ctx.f0.f64 / ctx.f7.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDE2AC;
	sub_821FE378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3368);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmul f6,f1,f0
	ctx.f6.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lfs f0,440(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2920(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2920);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,3056(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3056);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,888
	ctx.r11.s64 = ctx.r31.s64 + 888;
	// addi r10,r31,376
	ctx.r10.s64 = ctx.r31.s64 + 376;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// addi r8,r31,504
	ctx.r8.s64 = ctx.r31.s64 + 504;
	// addi r7,r31,632
	ctx.r7.s64 = ctx.r31.s64 + 632;
	// addi r5,r31,760
	ctx.r5.s64 = ctx.r31.s64 + 760;
	// lfsx f28,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// addi r4,r31,504
	ctx.r4.s64 = ctx.r31.s64 + 504;
	// lfsx f5,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsqrts f12,f6
	ctx.f12.f64 = double(float(sqrt(ctx.f6.f64)));
	// lfsx f1,r28,r8
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f25,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f25.f64 = double(temp.f32);
	// lfsx f24,r28,r5
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfsx f23,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f23.f64 = double(temp.f32);
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r7,r31,376
	ctx.r7.s64 = ctx.r31.s64 + 376;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r24,r31,192
	ctx.r24.s64 = ctx.r31.s64 + 192;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f8,f5,f13
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfsx f10,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfsx f9,r5,r24
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r31,888
	ctx.r7.s64 = ctx.r31.s64 + 888;
	// fmuls f21,f4,f13
	ctx.f21.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// addi r23,r31,760
	ctx.r23.s64 = ctx.r31.s64 + 760;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f17,f9,f13
	ctx.f17.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f0,19808(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19808);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f27,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f27.f64 = double(temp.f32);
	// addi r7,r31,632
	ctx.r7.s64 = ctx.r31.s64 + 632;
	// lfsx f10,r6,r23
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r31,1016
	ctx.r5.s64 = ctx.r31.s64 + 1016;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// fmuls f22,f28,f0
	ctx.f22.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// addi r6,r31,1536
	ctx.r6.s64 = ctx.r31.s64 + 1536;
	// fmuls f20,f8,f0
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r24,r31,2056
	ctx.r24.s64 = ctx.r31.s64 + 2056;
	// fmuls f19,f7,f0
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfsx f16,r28,r7
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	ctx.f16.f64 = double(temp.f32);
	// addi r23,r31,2600
	ctx.r23.s64 = ctx.r31.s64 + 2600;
	// lfsx f5,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r22,r31,132
	ctx.r22.s64 = ctx.r31.s64 + 132;
	// lfsx f4,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r31,3144
	ctx.r7.s64 = ctx.r31.s64 + 3144;
	// lfsx f3,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r31,3144
	ctx.r5.s64 = ctx.r31.s64 + 3144;
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f18,f27,f0
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r8,r24
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f29,r8,r23
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfsx f26,r10,r22
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f26.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfsx f0,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f31,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82cde428
	if (!ctx.cr6.eq) goto loc_82CDE428;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82cde454
	goto loc_82CDE454;
loc_82CDE428:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f14
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f14.f64));
	// fctidz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82CDE454:
	// addi r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 + 104;
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne cr6,0x82cde474
	if (!ctx.cr6.eq) goto loc_82CDE474;
	// stfs f15,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82CDE474:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cde498
	if (!ctx.cr6.eq) goto loc_82CDE498;
	// stfs f15,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82CDE498:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ori r5,r11,244
	ctx.r5.u64 = ctx.r11.u64 | 244;
	// fneg f15,f0
	ctx.f15.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// fneg f14,f31
	ctx.f14.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r3,r9,268
	ctx.r3.u64 = ctx.r9.u64 | 268;
	// ori r4,r10,256
	ctx.r4.u64 = ctx.r10.u64 | 256;
	// stfsx f13,r30,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// addi r11,r11,2332
	ctx.r11.s64 = ctx.r11.s64 + 2332;
	// ori r9,r7,2884
	ctx.r9.u64 = ctx.r7.u64 | 2884;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f1,r30,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// ori r10,r8,2872
	ctx.r10.u64 = ctx.r8.u64 | 2872;
	// stfsx f10,r30,r4
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// ori r8,r6,2896
	ctx.r8.u64 = ctx.r6.u64 | 2896;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f15,4(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stfsx f9,r30,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r9,r9,11104
	ctx.r9.s64 = ctx.r9.s64 + 11104;
	// stfsx f13,r30,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// stfsx f22,r30,r8
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r8,r8,12152
	ctx.r8.s64 = ctx.r8.s64 + 12152;
	// ori r5,r5,232
	ctx.r5.u64 = ctx.r5.u64 | 232;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stfs f15,4(r9)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// ori r7,r7,14228
	ctx.r7.u64 = ctx.r7.u64 | 14228;
	// stfs f15,4(r8)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// ori r6,r6,14240
	ctx.r6.u64 = ctx.r6.u64 | 14240;
	// stfsx f25,r30,r5
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// lis r28,2
	ctx.r28.s64 = 131072;
	// ori r4,r4,236
	ctx.r4.u64 = ctx.r4.u64 | 236;
	// ori r3,r3,18364
	ctx.r3.u64 = ctx.r3.u64 | 18364;
	// stfsx f21,r30,r7
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// ori r11,r11,18376
	ctx.r11.u64 = ctx.r11.u64 | 18376;
	// stfsx f8,r30,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// ori r10,r10,18388
	ctx.r10.u64 = ctx.r10.u64 | 18388;
	// addi r9,r9,20452
	ctx.r9.s64 = ctx.r9.s64 + 20452;
	// ori r8,r28,20992
	ctx.r8.u64 = ctx.r28.u64 | 20992;
	// stfsx f24,r30,r4
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lis r26,2
	ctx.r26.s64 = 131072;
	// stfsx f13,r30,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// lis r24,2
	ctx.r24.s64 = 131072;
	// stfsx f10,r30,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// addis r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 131072;
	// stfsx f23,r30,r10
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// ori r7,r26,21004
	ctx.r7.u64 = ctx.r26.u64 | 21004;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// ori r6,r24,21016
	ctx.r6.u64 = ctx.r24.u64 | 21016;
	// stfs f15,4(r9)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r5,r5,29224
	ctx.r5.s64 = ctx.r5.s64 + 29224;
	// stfsx f13,r30,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// stfsx f9,r30,r7
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stfsx f18,r30,r6
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfs f15,4(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r8,30272
	ctx.r8.s64 = ctx.r8.s64 + 30272;
	// ori r7,r4,32348
	ctx.r7.u64 = ctx.r4.u64 | 32348;
	// ori r5,r11,18352
	ctx.r5.u64 = ctx.r11.u64 | 18352;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// ori r6,r3,32360
	ctx.r6.u64 = ctx.r3.u64 | 32360;
	// stfs f15,4(r8)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// ori r4,r10,18356
	ctx.r4.u64 = ctx.r10.u64 | 18356;
	// stfsx f17,r30,r7
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r9,40620
	ctx.r3.u64 = ctx.r9.u64 | 40620;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfsx f16,r30,r5
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r5,r11,40644
	ctx.r5.u64 = ctx.r11.u64 | 40644;
	// stfsx f7,r30,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stfs f31,8(r16)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r16.u32 + 8, temp.u32);
	// ori r11,r9,40652
	ctx.r11.u64 = ctx.r9.u64 | 40652;
	// stfs f14,4(r16)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r16.u32 + 4, temp.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stfs f31,8(r15)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r15.u32 + 8, temp.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfs f14,4(r15)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r15.u32 + 4, temp.u32);
	// ori r4,r10,40648
	ctx.r4.u64 = ctx.r10.u64 | 40648;
	// stfsx f4,r30,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// ori r10,r8,40680
	ctx.r10.u64 = ctx.r8.u64 | 40680;
	// stfsx f5,r30,r3
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// ori r9,r7,40684
	ctx.r9.u64 = ctx.r7.u64 | 40684;
	// stfsx f2,r30,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// ori r8,r6,57120
	ctx.r8.u64 = ctx.r6.u64 | 57120;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f3,r30,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stfsx f29,r30,r10
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// ori r7,r7,61288
	ctx.r7.u64 = ctx.r7.u64 | 61288;
	// stfsx f26,r30,r9
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// ori r6,r6,61312
	ctx.r6.u64 = ctx.r6.u64 | 61312;
	// stfsx f12,r30,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stfs f31,8(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stfs f14,4(r18)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// ori r5,r5,61316
	ctx.r5.u64 = ctx.r5.u64 | 61316;
	// stfs f31,8(r17)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r17.u32 + 8, temp.u32);
	// ori r3,r3,61320
	ctx.r3.u64 = ctx.r3.u64 | 61320;
	// stfs f14,4(r17)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r17.u32 + 4, temp.u32);
	// ori r11,r11,61348
	ctx.r11.u64 = ctx.r11.u64 | 61348;
	// stfsx f5,r30,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfsx f4,r30,r6
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stfsx f3,r30,r5
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// stfsx f2,r30,r3
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// ori r10,r10,61352
	ctx.r10.u64 = ctx.r10.u64 | 61352;
	// stfsx f29,r30,r11
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// ori r9,r9,12252
	ctx.r9.u64 = ctx.r9.u64 | 12252;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r5,r8,57468
	ctx.r5.u64 = ctx.r8.u64 | 57468;
	// ori r4,r4,57472
	ctx.r4.u64 = ctx.r4.u64 | 57472;
	// stfsx f26,r30,r10
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// ori r3,r7,37148
	ctx.r3.u64 = ctx.r7.u64 | 37148;
	// stfsx f12,r30,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// ori r11,r6,37152
	ctx.r11.u64 = ctx.r6.u64 | 37152;
	// stfs f31,8(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stfs f14,4(r25)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfsx f11,r30,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// stfsx f11,r30,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f31,8(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f14,4(r27)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfsx f6,r30,r3
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// stfsx f6,r30,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// lfd f29,-8776(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8776);
	// lfs f13,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmul f2,f13,f29
	ctx.f2.f64 = ctx.f13.f64 * ctx.f29.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDE720;
	sub_821FE378(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r8,r9,40716
	ctx.r8.u64 = ctx.r9.u64 | 40716;
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfsx f11,r30,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lfs f10,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fmul f2,f10,f29
	ctx.f2.f64 = ctx.f10.f64 * ctx.f29.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDE744;
	sub_821FE378(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r7,2
	ctx.r7.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r6,r7,61384
	ctx.r6.u64 = ctx.r7.u64 | 61384;
	// fmuls f8,f9,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// stfsx f8,r30,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lfs f7,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fmul f2,f7,f29
	ctx.f2.f64 = ctx.f7.f64 * ctx.f29.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDE768;
	sub_821FE378(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r5,3
	ctx.r5.s64 = 196608;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r4,r5,41060
	ctx.r4.u64 = ctx.r5.u64 | 41060;
	// fmuls f5,f6,f20
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f20.f64));
	// stfsx f5,r30,r4
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lfs f4,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fmul f2,f4,f29
	ctx.f2.f64 = ctx.f4.f64 * ctx.f29.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDE78C;
	sub_821FE378(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lis r3,4
	ctx.r3.s64 = 262144;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r11,r3,20740
	ctx.r11.u64 = ctx.r3.u64 | 20740;
	// fmuls f2,f3,f19
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f19.f64));
	// stfsx f2,r30,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = ctx.f0.f64 * ctx.f29.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDE7B0;
	sub_821FE378(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,96(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// addi r10,r10,-28368
	ctx.r10.s64 = ctx.r10.s64 + -28368;
	// addis r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 327680;
	// addis r8,r30,5
	ctx.r8.s64 = ctx.r30.s64 + 327680;
	// addis r7,r30,5
	ctx.r7.s64 = ctx.r30.s64 + 327680;
	// addi r9,r9,-26296
	ctx.r9.s64 = ctx.r9.s64 + -26296;
	// addi r8,r8,-24224
	ctx.r8.s64 = ctx.r8.s64 + -24224;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// addi r7,r7,-22152
	ctx.r7.s64 = ctx.r7.s64 + -22152;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f10,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82cdd758
	ctx.lr = 0x82CDE81C;
	sub_82CDD758(ctx, base);
	// lfs f9,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdd758
	ctx.lr = 0x82CDE82C;
	sub_82CDD758(ctx, base);
	// lfs f8,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdd758
	ctx.lr = 0x82CDE83C;
	sub_82CDD758(ctx, base);
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// lfs f7,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82cdd758
	ctx.lr = 0x82CDE854;
	sub_82CDD758(ctx, base);
	// lfs f6,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdd758
	ctx.lr = 0x82CDE864;
	sub_82CDD758(ctx, base);
	// lfs f5,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82cdd758
	ctx.lr = 0x82CDE874;
	sub_82CDD758(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cde888
	if (!ctx.cr6.eq) goto loc_82CDE888;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82cde8b8
	goto loc_82CDE8B8;
loc_82CDE888:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82CDE8B8:
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r11,r11,-20080
	ctx.r11.s64 = ctx.r11.s64 + -20080;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cde8e0
	if (!ctx.cr6.eq) goto loc_82CDE8E0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82CDE8E0:
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r11,r11,-19024
	ctx.r11.s64 = ctx.r11.s64 + -19024;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cde908
	if (!ctx.cr6.eq) goto loc_82CDE908;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82CDE908:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca751c
	ctx.lr = 0x82CDE914;
	sub_82CA751C(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CDE918"))) PPC_WEAK_FUNC(sub_82CDE918);
PPC_FUNC_IMPL(__imp__sub_82CDE918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82CDE920;
	sub_82CA2BC8(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82ca74dc
	ctx.lr = 0x82CDE928;
	sub_82CA74DC(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r23,-32255
	ctx.r23.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r6,r11,15788
	ctx.r6.s64 = ctx.r11.s64 + 15788;
	// lfs f13,16572(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16572);
	ctx.f13.f64 = double(temp.f32);
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// lfs f0,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f12,16568(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16568);
	ctx.f12.f64 = double(temp.f32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f0,16560(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16560);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lfs f13,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lfs f11,16572(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16572);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f12,16576(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16576);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f10,16568(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16568);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfd f29,3376(r4)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 3376);
	// lfd f28,3384(r3)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 3384);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDE9F0;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// li r29,40
	ctx.r29.s64 = 40;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f0,16576(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82cdd8c0
	ctx.lr = 0x82CDEA3C;
	sub_82CDD8C0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// lfs f0,16576(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16576);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// bl 0x82cdd8c0
	ctx.lr = 0x82CDEA74;
	sub_82CDD8C0(ctx, base);
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// lfs f12,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// lfs f0,3056(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x82cdd758
	ctx.lr = 0x82CDEAB0;
	sub_82CDD758(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// lfs f10,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// lfs f0,3056(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x82cdd758
	ctx.lr = 0x82CDEAE8;
	sub_82CDD758(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r20,r11,16584
	ctx.r20.s64 = ctx.r11.s64 + 16584;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,232
	ctx.r8.u64 = ctx.r10.u64 | 232;
	// lfs f30,16584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16584);
	ctx.f30.f64 = double(temp.f32);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r7,r9,236
	ctx.r7.u64 = ctx.r9.u64 | 236;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// lfs f26,44(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 44);
	ctx.f26.f64 = double(temp.f32);
	// li r25,509
	ctx.r25.s64 = 509;
	// lfs f25,48(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// li r26,508
	ctx.r26.s64 = 508;
	// stfsx f26,r31,r8
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f24,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// stfsx f25,r31,r7
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// lfs f23,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f24,16(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f23,28(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDEB68;
	sub_82CDD920(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,2332
	ctx.r11.s64 = ctx.r11.s64 + 2332;
	// lfs f21,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f21.f64 = double(temp.f32);
	// li r5,83
	ctx.r5.s64 = 83;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lfs f22,19924(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19924);
	ctx.f22.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f22,4(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f21,8(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd980
	ctx.lr = 0x82CDEBA4;
	sub_82CDD980(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r11,r11,2868
	ctx.r11.s64 = ctx.r11.s64 + 2868;
	// li r3,2039
	ctx.r3.s64 = 2039;
	// lfs f19,2736(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2736);
	ctx.f19.f64 = double(temp.f32);
	// li r10,2038
	ctx.r10.s64 = 2038;
	// lfs f20,20(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	ctx.f20.f64 = double(temp.f32);
	// li r27,600
	ctx.r27.s64 = 600;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f20,16(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f19,28(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDEBFC;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,11104
	ctx.r11.s64 = ctx.r11.s64 + 11104;
	// lfs f27,3056(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 3056);
	ctx.f27.f64 = double(temp.f32);
	// li r8,211
	ctx.r8.s64 = 211;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lfs f31,3204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3204);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdda40
	ctx.lr = 0x82CDEC38;
	sub_82CDDA40(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r7,311
	ctx.r7.s64 = 311;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,12152
	ctx.r11.s64 = ctx.r11.s64 + 12152;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDEC68;
	sub_82CDD920(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r28,1020
	ctx.r28.s64 = 1020;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,14224
	ctx.r11.s64 = ctx.r11.s64 + 14224;
	// lfs f18,36(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,40(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	ctx.f17.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f18,4(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f17,16(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82cddaa0
	ctx.lr = 0x82CDECA8;
	sub_82CDDAA0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r4,r6,18352
	ctx.r4.u64 = ctx.r6.u64 | 18352;
	// ori r10,r5,18356
	ctx.r10.u64 = ctx.r5.u64 | 18356;
	// addi r11,r11,18360
	ctx.r11.s64 = ctx.r11.s64 + 18360;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// stfsx f26,r31,r4
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stfsx f25,r31,r10
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f24,16(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f23,28(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDED00;
	sub_82CDD920(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r9,97
	ctx.r9.s64 = 97;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20452
	ctx.r11.s64 = ctx.r11.s64 + 20452;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f22,4(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f21,8(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd980
	ctx.lr = 0x82CDED30;
	sub_82CDD980(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r8,1297
	ctx.r8.s64 = 1297;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20988
	ctx.r11.s64 = ctx.r11.s64 + 20988;
	// li r7,1296
	ctx.r7.s64 = 1296;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f20,16(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f19,28(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDED78;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r6,223
	ctx.r6.s64 = 223;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,29224
	ctx.r11.s64 = ctx.r11.s64 + 29224;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdda40
	ctx.lr = 0x82CDEDA8;
	sub_82CDDA40(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r5,293
	ctx.r5.s64 = 293;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,30272
	ctx.r11.s64 = ctx.r11.s64 + 30272;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDEDD8;
	sub_82CDD920(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,32344
	ctx.r11.s64 = ctx.r11.s64 + 32344;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f18,4(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f17,16(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82cddaa0
	ctx.lr = 0x82CDEE0C;
	sub_82CDDAA0(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-29064
	ctx.r11.s64 = ctx.r11.s64 + -29064;
	// lfs f0,76(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// li r10,409
	ctx.r10.s64 = 409;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lfs f30,19920(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 19920);
	ctx.f30.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDEE48;
	sub_82CDD920(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r9,257
	ctx.r9.s64 = 257;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-26992
	ctx.r11.s64 = ctx.r11.s64 + -26992;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDEE78;
	sub_82CDD920(ctx, base);
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,-24920
	ctx.r8.s64 = ctx.r8.s64 + -24920;
	// lfs f0,52(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// lfs f12,56(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r7,-24896
	ctx.r7.s64 = ctx.r7.s64 + -24896;
	// lfs f11,60(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r6,-24864
	ctx.r6.s64 = ctx.r6.s64 + -24864;
	// lfs f10,64(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f11,8(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f10,12(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stfs f0,28(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,72(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f0,24(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// bl 0x821fe378
	ctx.lr = 0x82CDEF14;
	sub_821FE378(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// li r10,3432
	ctx.r10.s64 = 3432;
	// lfs f13,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-24836
	ctx.r11.s64 = ctx.r11.s64 + -24836;
	// lfs f0,16568(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16568);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82cddb00
	ctx.lr = 0x82CDEF5C;
	sub_82CDDB00(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-8396
	ctx.r11.s64 = ctx.r11.s64 + -8396;
	// lfs f12,76(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r5,-8420
	ctx.r5.s64 = ctx.r5.s64 + -8420;
	// fmr f0,f20
	ctx.f0.f64 = ctx.f20.f64;
	// li r4,383
	ctx.r4.s64 = 383;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDEFB8;
	sub_82CDD920(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r10,233
	ctx.r10.s64 = 233;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-6324
	ctx.r11.s64 = ctx.r11.s64 + -6324;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDEFEC;
	sub_82CDD920(ctx, base);
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-4252
	ctx.r9.s64 = ctx.r9.s64 + -4252;
	// lfs f0,52(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,-4228
	ctx.r8.s64 = ctx.r8.s64 + -4228;
	// lfs f12,64(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r7,r7,-4196
	ctx.r7.s64 = ctx.r7.s64 + -4196;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f0,56(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f13,60(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f0,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f0,68(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f0,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f12,16(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// bl 0x821fe378
	ctx.lr = 0x82CDF090;
	sub_821FE378(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// li r10,3820
	ctx.r10.s64 = 3820;
	// lfs f13,16564(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-4168
	ctx.r11.s64 = ctx.r11.s64 + -4168;
	// lfs f0,16568(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16568);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82cddb00
	ctx.lr = 0x82CDF0D8;
	sub_82CDDB00(ctx, base);
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,12248
	ctx.r6.s64 = ctx.r6.s64 + 12248;
	// fmr f0,f20
	ctx.f0.f64 = ctx.f20.f64;
	// addi r11,r11,12272
	ctx.r11.s64 = ctx.r11.s64 + 12272;
	// lfs f27,76(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 76);
	ctx.f27.f64 = double(temp.f32);
	// li r5,1511
	ctx.r5.s64 = 1511;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDF134;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r4,1061
	ctx.r4.s64 = 1061;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20488
	ctx.r11.s64 = ctx.r11.s64 + 20488;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f27,4(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDF168;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r10,853
	ctx.r10.s64 = 853;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,28708
	ctx.r11.s64 = ctx.r11.s64 + 28708;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDF198;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r9,541
	ctx.r9.s64 = 541;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-28612
	ctx.r11.s64 = ctx.r11.s64 + -28612;
	// lfs f0,3056(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cddaa0
	ctx.lr = 0x82CDF1CC;
	sub_82CDDAA0(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDF1D8;
	sub_821FE378(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1510
	ctx.r10.s64 = 1510;
	// lfs f0,16568(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16568);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-24492
	ctx.r11.s64 = ctx.r11.s64 + -24492;
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// bl 0x82cddb00
	ctx.lr = 0x82CDF224;
	sub_82CDDB00(ctx, base);
	// addis r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 262144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,-8076
	ctx.r7.s64 = ctx.r7.s64 + -8076;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r6,1657
	ctx.r6.s64 = 1657;
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// lfs f0,2848(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDF284;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r5,1103
	ctx.r5.s64 = 1103;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f27,4(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDF2B8;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r4,887
	ctx.r4.s64 = 887;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,8388
	ctx.r11.s64 = ctx.r11.s64 + 8388;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd9e0
	ctx.lr = 0x82CDF2E8;
	sub_82CDD9E0(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r10,491
	ctx.r10.s64 = 491;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16604
	ctx.r11.s64 = ctx.r11.s64 + 16604;
	// lfs f0,3056(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cddaa0
	ctx.lr = 0x82CDF320;
	sub_82CDDAA0(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x821fe378
	ctx.lr = 0x82CDF32C;
	sub_821FE378(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// addi r11,r11,20724
	ctx.r11.s64 = ctx.r11.s64 + 20724;
	// lfs f0,16568(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16568);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1438
	ctx.r10.s64 = 1438;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82cddb00
	ctx.lr = 0x82CDF374;
	sub_82CDDB00(ctx, base);
	// addis r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 327680;
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-28396
	ctx.r9.s64 = ctx.r9.s64 + -28396;
	// lfs f0,120(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f30,124(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 124);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-28368
	ctx.r11.s64 = ctx.r11.s64 + -28368;
	// li r7,131
	ctx.r7.s64 = 131;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lfs f31,19916(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19916);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDF3DC;
	sub_82CDD920(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r6,113
	ctx.r6.s64 = 113;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-26296
	ctx.r11.s64 = ctx.r11.s64 + -26296;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDF40C;
	sub_82CDD920(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r5,107
	ctx.r5.s64 = 107;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-24224
	ctx.r11.s64 = ctx.r11.s64 + -24224;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDF43C;
	sub_82CDD920(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r4,127
	ctx.r4.s64 = 127;
	// lfs f0,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-22152
	ctx.r11.s64 = ctx.r11.s64 + -22152;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82cdd920
	ctx.lr = 0x82CDF46C;
	sub_82CDD920(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// li r29,20
	ctx.r29.s64 = 20;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-20080
	ctx.r11.s64 = ctx.r11.s64 + -20080;
	// lfs f0,16576(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16576);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82cdda40
	ctx.lr = 0x82CDF4A8;
	sub_82CDDA40(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// lfs f13,16564(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-19024
	ctx.r11.s64 = ctx.r11.s64 + -19024;
	// lfs f0,16576(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16576);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// bl 0x82cdda40
	ctx.lr = 0x82CDF4E0;
	sub_82CDDA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82ca7528
	ctx.lr = 0x82CDF4F0;
	sub_82CA7528(ctx, base);
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82CDF4F4"))) PPC_WEAK_FUNC(sub_82CDF4F4);
PPC_FUNC_IMPL(__imp__sub_82CDF4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDF4F8"))) PPC_WEAK_FUNC(sub_82CDF4F8);
PPC_FUNC_IMPL(__imp__sub_82CDF4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CDF500;
	sub_82CA2BEC(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r11,16556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16556);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,16548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16548);
	// lfs f31,26348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26348);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f30,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,16548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16548);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16552(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16552);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,16552(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16552);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f0,16572(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f30
	ctx.cr6.compare(ctx.f6.f64, ctx.f30.f64);
	// blt cr6,0x82cdf62c
	if (ctx.cr6.lt) goto loc_82CDF62C;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821b1580
	ctx.lr = 0x82CDF5D0;
	sub_821B1580(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,19928(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19928);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82cdf600
	if (!ctx.cr6.lt) goto loc_82CDF600;
	// li r11,-8
	ctx.r11.s64 = -8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82cdf614
	goto loc_82CDF614;
loc_82CDF600:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82cdf610
	if (!ctx.cr6.lt) goto loc_82CDF610;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82cdf614
	goto loc_82CDF614;
loc_82CDF610:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82CDF614:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x82cdf688
	goto loc_82CDF688;
loc_82CDF62C:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821b1580
	ctx.lr = 0x82CDF638;
	sub_821B1580(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3656(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3656);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82cdf668
	if (!ctx.cr6.lt) goto loc_82CDF668;
	// li r11,-8
	ctx.r11.s64 = -8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82cdf67c
	goto loc_82CDF67C;
loc_82CDF668:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82cdf678
	if (!ctx.cr6.lt) goto loc_82CDF678;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82cdf67c
	goto loc_82CDF67C;
loc_82CDF678:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82CDF67C:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_82CDF688:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f12,-30920(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30920);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f9,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,16540(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82cdf6dc
	if (ctx.cr6.lt) goto loc_82CDF6DC;
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
loc_82CDF6DC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82cdf6e8
	if (ctx.cr6.gt) goto loc_82CDF6E8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82CDF6E8:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,68(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r8,16544(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16544);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82cdf73c
	if (ctx.cr6.lt) goto loc_82CDF73C;
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
loc_82CDF73C:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.f0.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lfs f10,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f9,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CDF788"))) PPC_WEAK_FUNC(sub_82CDF788);
PPC_FUNC_IMPL(__imp__sub_82CDF788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bgt cr6,0x82cdf894
	if (ctx.cr6.gt) goto loc_82CDF894;
	// lis r12,-32050
	ctx.r12.s64 = -2100428800;
	// addi r12,r12,-2112
	ctx.r12.s64 = ctx.r12.s64 + -2112;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82CDF7F4;
	case 1:
		goto loc_82CDF808;
	case 2:
		goto loc_82CDF814;
	case 3:
		goto loc_82CDF820;
	case 4:
		goto loc_82CDF82C;
	case 5:
		goto loc_82CDF838;
	case 6:
		goto loc_82CDF844;
	case 7:
		goto loc_82CDF850;
	case 8:
		goto loc_82CDF85C;
	case 9:
		goto loc_82CDF868;
	case 10:
		goto loc_82CDF874;
	case 11:
		goto loc_82CDF880;
	case 12:
		goto loc_82CDF88C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-2060(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2060);
	// lwz r22,-2040(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2040);
	// lwz r22,-2028(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2028);
	// lwz r22,-2016(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2016);
	// lwz r22,-2004(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2004);
	// lwz r22,-1992(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1992);
	// lwz r22,-1980(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1980);
	// lwz r22,-1968(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1968);
	// lwz r22,-1956(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1956);
	// lwz r22,-1944(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1944);
	// lwz r22,-1932(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1932);
	// lwz r22,-1920(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1920);
	// lwz r22,-1908(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1908);
loc_82CDF7F4:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CDF804;
	sub_82CA2C60(ctx, base);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF808:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF814:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF820:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF82C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF838:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF844:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF850:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF85C:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF868:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF874:
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF880:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// b 0x82cdf894
	goto loc_82CDF894;
loc_82CDF88C:
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82CDF894:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cdd6d0
	ctx.lr = 0x82CDF89C;
	sub_82CDD6D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f1,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cdf4f8
	ctx.lr = 0x82CDF8B8;
	sub_82CDF4F8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82cddb80
	ctx.lr = 0x82CDF8CC;
	sub_82CDDB80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CDF8E0"))) PPC_WEAK_FUNC(sub_82CDF8E0);
PPC_FUNC_IMPL(__imp__sub_82CDF8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cdf918
	if (ctx.cr6.eq) goto loc_82CDF918;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r10,r11,19936
	ctx.r10.s64 = ctx.r11.s64 + 19936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82cde918
	ctx.lr = 0x82CDF918;
	sub_82CDE918(ctx, base);
loc_82CDF918:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f0,2720(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2720);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,15840
	ctx.r8.s64 = ctx.r10.s64 + 15840;
	// lfs f11,3056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3056);
	ctx.f11.f64 = double(temp.f32);
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// stwx r8,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lfs f10,2936(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2936);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-20492(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -20492);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,-20496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20496);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
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

__attribute__((alias("__imp__sub_82CDF9B4"))) PPC_WEAK_FUNC(sub_82CDF9B4);
PPC_FUNC_IMPL(__imp__sub_82CDF9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDF9B8"))) PPC_WEAK_FUNC(sub_82CDF9B8);
PPC_FUNC_IMPL(__imp__sub_82CDF9B8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,19952
	ctx.r10.s64 = ctx.r11.s64 + 19952;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ce6990
	ctx.lr = 0x82CDF9E0;
	sub_82CE6990(ctx, base);
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

__attribute__((alias("__imp__sub_82CDF9F8"))) PPC_WEAK_FUNC(sub_82CDF9F8);
PPC_FUNC_IMPL(__imp__sub_82CDF9F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,19952
	ctx.r9.s64 = ctx.r10.s64 + 19952;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82ce6898
	sub_82CE6898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CDFA10"))) PPC_WEAK_FUNC(sub_82CDFA10);
PPC_FUNC_IMPL(__imp__sub_82CDFA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CDFA18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CDFA34;
	sub_82CA2C60(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// stb r9,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r9.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82ce68d0
	ctx.lr = 0x82CDFA70;
	sub_82CE68D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CDFA78"))) PPC_WEAK_FUNC(sub_82CDFA78);
PPC_FUNC_IMPL(__imp__sub_82CDFA78) {
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
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cdfab8
	if (ctx.cr6.eq) goto loc_82CDFAB8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
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
loc_82CDFAB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,16388
	ctx.r5.u64 = ctx.r5.u64 | 16388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDFAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cdfab8
	if (!ctx.cr6.eq) goto loc_82CDFAB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDFAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82CDFB1C"))) PPC_WEAK_FUNC(sub_82CDFB1C);
PPC_FUNC_IMPL(__imp__sub_82CDFB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDFB20"))) PPC_WEAK_FUNC(sub_82CDFB20);
PPC_FUNC_IMPL(__imp__sub_82CDFB20) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,19952
	ctx.r10.s64 = ctx.r11.s64 + 19952;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ce6898
	ctx.lr = 0x82CDFB50;
	sub_82CE6898(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cdfb70
	if (ctx.cr6.eq) goto loc_82CDFB70;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd9fd8
	ctx.lr = 0x82CDFB70;
	sub_82CD9FD8(ctx, base);
loc_82CDFB70:
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

__attribute__((alias("__imp__sub_82CDFB8C"))) PPC_WEAK_FUNC(sub_82CDFB8C);
PPC_FUNC_IMPL(__imp__sub_82CDFB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDFB90"))) PPC_WEAK_FUNC(sub_82CDFB90);
PPC_FUNC_IMPL(__imp__sub_82CDFB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CDFB98;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r28,r5,24
	ctx.r28.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// bne cr6,0x82cdfd4c
	if (!ctx.cr6.eq) goto loc_82CDFD4C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cdfbd0
	if (!ctx.cr6.eq) goto loc_82CDFBD0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82CDFBD0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cdfc94
	if (ctx.cr6.eq) goto loc_82CDFC94;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// blt cr6,0x82cdfc3c
	if (ctx.cr6.lt) goto loc_82CDFC3C;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdfc3c
	if (ctx.cr6.eq) goto loc_82CDFC3C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdfc3c
	if (!ctx.cr6.eq) goto loc_82CDFC3C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdfc3c
	if (!ctx.cr0.eq) goto loc_82CDFC3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDFC30;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDFC38;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDFC3C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82cdfc98
	if (!ctx.cr6.gt) goto loc_82CDFC98;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdfc98
	if (ctx.cr6.eq) goto loc_82CDFC98;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdfc98
	if (!ctx.cr6.eq) goto loc_82CDFC98;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdfc98
	if (!ctx.cr0.eq) goto loc_82CDFC98;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDFC8C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDFC94;
	__imp__KfLowerIrql(ctx, base);
loc_82CDFC94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDFC98:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82cdfcf4
	if (ctx.cr6.lt) goto loc_82CDFCF4;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdfcf4
	if (ctx.cr6.eq) goto loc_82CDFCF4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdfcf4
	if (!ctx.cr6.eq) goto loc_82CDFCF4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdfcf4
	if (!ctx.cr0.eq) goto loc_82CDFCF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDFCE8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDFCF0;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDFCF4:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82cdfd50
	if (!ctx.cr6.gt) goto loc_82CDFD50;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdfd50
	if (ctx.cr6.eq) goto loc_82CDFD50;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdfd50
	if (!ctx.cr6.eq) goto loc_82CDFD50;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdfd50
	if (!ctx.cr0.eq) goto loc_82CDFD50;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDFD44;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDFD4C;
	__imp__KfLowerIrql(ctx, base);
loc_82CDFD4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDFD50:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cdfe20
	if (ctx.cr6.eq) goto loc_82CDFE20;
	// rlwinm r10,r28,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdfe20
	if (!ctx.cr6.eq) goto loc_82CDFE20;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82cdfdc4
	if (ctx.cr6.gt) goto loc_82CDFDC4;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdfdc4
	if (ctx.cr6.eq) goto loc_82CDFDC4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdfdc4
	if (!ctx.cr6.eq) goto loc_82CDFDC4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdfdc4
	if (!ctx.cr0.eq) goto loc_82CDFDC4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDFDB8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDFDC0;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDFDC4:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82cdfe20
	if (ctx.cr6.lt) goto loc_82CDFE20;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cdfe20
	if (ctx.cr6.eq) goto loc_82CDFE20;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdfe20
	if (!ctx.cr6.eq) goto loc_82CDFE20;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdfe20
	if (!ctx.cr0.eq) goto loc_82CDFE20;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDFE14;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDFE1C;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CDFE20:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cdfe94
	if (ctx.cr6.eq) goto loc_82CDFE94;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cdfe40
	if (ctx.cr6.eq) goto loc_82CDFE40;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82cdfe44
	goto loc_82CDFE44;
loc_82CDFE40:
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_82CDFE44:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82cdfe94
	if (ctx.cr6.gt) goto loc_82CDFE94;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x82cdfe94
	if (ctx.cr6.eq) goto loc_82CDFE94;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cdfe94
	if (!ctx.cr6.eq) goto loc_82CDFE94;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82cdfe94
	if (!ctx.cr0.eq) goto loc_82CDFE94;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CDFE8C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CDFE94;
	__imp__KfLowerIrql(ctx, base);
loc_82CDFE94:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// li r4,24
	ctx.r4.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bne cr6,0x82cdfeb8
	if (!ctx.cr6.eq) goto loc_82CDFEB8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82CDFEB8:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDFEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdfee0
	if (ctx.cr6.eq) goto loc_82CDFEE0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdfefc
	if (!ctx.cr6.eq) goto loc_82CDFEFC;
loc_82CDFEE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CDFEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CDFEFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CDFF08"))) PPC_WEAK_FUNC(sub_82CDFF08);
PPC_FUNC_IMPL(__imp__sub_82CDFF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdff84
	if (!ctx.cr6.eq) goto loc_82CDFF84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cdff54
	if (ctx.cr6.eq) goto loc_82CDFF54;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cdff84
	if (!ctx.cr6.eq) goto loc_82CDFF84;
loc_82CDFF54:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82ca2c60
	ctx.lr = 0x82CDFF60;
	sub_82CA2C60(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CDFF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82cdff8c
	goto loc_82CDFF8C;
loc_82CDFF84:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82CDFF8C:
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

__attribute__((alias("__imp__sub_82CDFFA4"))) PPC_WEAK_FUNC(sub_82CDFFA4);
PPC_FUNC_IMPL(__imp__sub_82CDFFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CDFFA8"))) PPC_WEAK_FUNC(sub_82CDFFA8);
PPC_FUNC_IMPL(__imp__sub_82CDFFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CDFFB0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CDFFC4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,28784
	ctx.r30.s64 = ctx.r11.s64 + 28784;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cdffec
	if (ctx.cr6.eq) goto loc_82CDFFEC;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82ce0008
	if (ctx.cr6.eq) goto loc_82CE0008;
loc_82CDFFEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CDFFF4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stb r29,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// b 0x82ce000c
	goto loc_82CE000C;
loc_82CE0008:
	// lbz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
loc_82CE000C:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ce0104
	if (ctx.cr6.eq) goto loc_82CE0104;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r31,r9,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ce0104
	if (ctx.cr6.eq) goto loc_82CE0104;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce0064
	if (ctx.cr6.eq) goto loc_82CE0064;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
loc_82CE0064:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addic. r10,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r10.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bne 0x82ce00a8
	if (!ctx.cr0.eq) goto loc_82CE00A8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_82CE00A8:
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	// stb r27,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r27.u8);
	// stb r27,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r27.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r27,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r27.u8);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lhz r8,92(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 92);
	// twllei r8,0
	// divwu r7,r9,r8
	ctx.r7.u32 = ctx.r9.u32 / ctx.r8.u32;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82ce01a4
	if (ctx.cr6.eq) goto loc_82CE01A4;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r4,r26,12
	ctx.r4.s64 = ctx.r26.s64 + 12;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82ca2c60
	ctx.lr = 0x82CE0100;
	sub_82CA2C60(ctx, base);
	// b 0x82ce01e4
	goto loc_82CE01E4;
loc_82CE0104:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce0154
	if (ctx.cr6.eq) goto loc_82CE0154;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82ce0154
	if (!ctx.cr6.eq) goto loc_82CE0154;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bne 0x82ce0154
	if (!ctx.cr0.eq) goto loc_82CE0154;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE0140;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0148;
	__imp__KfLowerIrql(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
loc_82CE0154:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce0194
	if (ctx.cr6.eq) goto loc_82CE0194;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82ce0194
	if (!ctx.cr6.eq) goto loc_82CE0194;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82ce0194
	if (!ctx.cr0.eq) goto loc_82CE0194;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE018C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0194;
	__imp__KfLowerIrql(ctx, base);
loc_82CE0194:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82CE01A4:
	// lhz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 92);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce01dc
	if (ctx.cr6.eq) goto loc_82CE01DC;
	// lhz r9,92(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 92);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ce01e0
	goto loc_82CE01E0;
loc_82CE01DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82CE01E0:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82CE01E4:
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82cdfb90
	ctx.lr = 0x82CE0204;
	sub_82CDFB90(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce0254
	if (ctx.cr6.eq) goto loc_82CE0254;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce0254
	if (!ctx.cr6.eq) goto loc_82CE0254;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82ce0254
	if (!ctx.cr0.eq) goto loc_82CE0254;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE024C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0254;
	__imp__KfLowerIrql(ctx, base);
loc_82CE0254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CE0260"))) PPC_WEAK_FUNC(sub_82CE0260);
PPC_FUNC_IMPL(__imp__sub_82CE0260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CE0268;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE027C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce02a4
	if (ctx.cr6.eq) goto loc_82CE02A4;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82ce02c0
	if (ctx.cr6.eq) goto loc_82CE02C0;
loc_82CE02A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE02AC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// b 0x82ce02c4
	goto loc_82CE02C4;
loc_82CE02C0:
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82CE02C4:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ce0424
	if (ctx.cr6.eq) goto loc_82CE0424;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ce0424
	if (ctx.cr6.eq) goto loc_82CE0424;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce031c
	if (ctx.cr6.eq) goto loc_82CE031C;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
loc_82CE031C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addic. r10,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r10.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// bne 0x82ce0360
	if (!ctx.cr0.eq) goto loc_82CE0360;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
loc_82CE0360:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r29,117(r4)
	PPC_STORE_U8(ctx.r4.u32 + 117, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r29,118(r4)
	PPC_STORE_U8(ctx.r4.u32 + 118, ctx.r29.u8);
	// stb r29,119(r4)
	PPC_STORE_U8(ctx.r4.u32 + 119, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 92);
	// twllei r10,0
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
	// bl 0x82cdfb90
	ctx.lr = 0x82CE03C8;
	sub_82CDFB90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce0418
	if (ctx.cr6.eq) goto loc_82CE0418;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce0418
	if (!ctx.cr6.eq) goto loc_82CE0418;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce0418
	if (!ctx.cr0.eq) goto loc_82CE0418;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE0410;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0418;
	__imp__KfLowerIrql(ctx, base);
loc_82CE0418:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82CE0424:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce0474
	if (ctx.cr6.eq) goto loc_82CE0474;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82ce0474
	if (!ctx.cr6.eq) goto loc_82CE0474;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bne 0x82ce0474
	if (!ctx.cr0.eq) goto loc_82CE0474;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE0460;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0468;
	__imp__KfLowerIrql(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82CE0474:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce04b4
	if (ctx.cr6.eq) goto loc_82CE04B4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82ce04b4
	if (!ctx.cr6.eq) goto loc_82CE04B4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce04b4
	if (!ctx.cr0.eq) goto loc_82CE04B4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE04AC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE04B4;
	__imp__KfLowerIrql(ctx, base);
loc_82CE04B4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CE04C4"))) PPC_WEAK_FUNC(sub_82CE04C4);
PPC_FUNC_IMPL(__imp__sub_82CE04C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE04C8"))) PPC_WEAK_FUNC(sub_82CE04C8);
PPC_FUNC_IMPL(__imp__sub_82CE04C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE04D0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE04E0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r28,r13
	ctx.r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce0508
	if (ctx.cr6.eq) goto loc_82CE0508;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ce0524
	if (ctx.cr6.eq) goto loc_82CE0524;
loc_82CE0508:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE0510;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82ce0528
	goto loc_82CE0528;
loc_82CE0524:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82CE0528:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82ce05ac
	if (!ctx.cr6.eq) goto loc_82CE05AC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce0554
	if (ctx.cr6.eq) goto loc_82CE0554;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82ce0558
	goto loc_82CE0558;
loc_82CE0554:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CE0558:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ce05ac
	if (!ctx.cr6.eq) goto loc_82CE05AC;
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce05a0
	if (ctx.cr6.eq) goto loc_82CE05A0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ce05a0
	if (!ctx.cr6.eq) goto loc_82CE05A0;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce05a0
	if (!ctx.cr0.eq) goto loc_82CE05A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE0598;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE05A0;
	__imp__KfLowerIrql(ctx, base);
loc_82CE05A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82CE05AC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce05e0
	if (ctx.cr6.eq) goto loc_82CE05E0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82CE05E0:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82CE0614;
	sub_82CA3190(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r7,116(r29)
	PPC_STORE_U8(ctx.r29.u32 + 116, ctx.r7.u8);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CE0638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce0684
	if (ctx.cr6.eq) goto loc_82CE0684;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce0684
	if (!ctx.cr6.eq) goto loc_82CE0684;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce0684
	if (!ctx.cr0.eq) goto loc_82CE0684;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE067C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0684;
	__imp__KfLowerIrql(ctx, base);
loc_82CE0684:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE0690"))) PPC_WEAK_FUNC(sub_82CE0690);
PPC_FUNC_IMPL(__imp__sub_82CE0690) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r11,r5,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r6,r6,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7FFFFF;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CE06B4:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82ce0700
	if (!ctx.cr6.lt) goto loc_82CE0700;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ce06c8
	if (ctx.cr6.eq) goto loc_82CE06C8;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
loc_82CE06C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r9,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ce070c
	if (ctx.cr6.lt) goto loc_82CE070C;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r11,r9,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// ble cr6,0x82ce06b4
	if (!ctx.cr6.gt) goto loc_82CE06B4;
loc_82CE0700:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82CE070C:
	// rlwinm r11,r9,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FFF;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// beq cr6,0x82ce074c
	if (ctx.cr6.eq) goto loc_82CE074C;
	// subf r9,r8,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r8.s64;
loc_82CE0720:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ce072c
	if (ctx.cr6.eq) goto loc_82CE072C;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
loc_82CE072C:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// slw r3,r4,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r8,r3,15,17,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x7FFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x82ce0720
	if (!ctx.cr0.eq) goto loc_82CE0720;
loc_82CE074C:
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE0758"))) PPC_WEAK_FUNC(sub_82CE0758);
PPC_FUNC_IMPL(__imp__sub_82CE0758) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r5,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ce07bc
	if (!ctx.cr6.lt) goto loc_82CE07BC;
loc_82CE078C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82ce078c
	if (ctx.cr6.lt) goto loc_82CE078C;
loc_82CE07BC:
	// rlwinm r11,r7,0,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce07d0
	if (!ctx.cr6.eq) goto loc_82CE07D0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82CE07D0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x82ce080c
	if (!ctx.cr6.gt) goto loc_82CE080C;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82CE07EC:
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// slw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r7,r4,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x7FFF;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x82ce07ec
	if (!ctx.cr0.eq) goto loc_82CE07EC;
loc_82CE080C:
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE0814"))) PPC_WEAK_FUNC(sub_82CE0814);
PPC_FUNC_IMPL(__imp__sub_82CE0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE0818"))) PPC_WEAK_FUNC(sub_82CE0818);
PPC_FUNC_IMPL(__imp__sub_82CE0818) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,20184
	ctx.r8.s64 = ctx.r11.s64 + 20184;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r7,r10,20144
	ctx.r7.s64 = ctx.r10.s64 + 20144;
	// addi r6,r9,20048
	ctx.r6.s64 = ctx.r9.s64 + 20048;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82ce0870
	if (ctx.cr6.eq) goto loc_82CE0870;
	// bl 0x82cd3580
	ctx.lr = 0x82CE0868;
	sub_82CD3580(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_82CE0870:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd9958
	ctx.lr = 0x82CE0878;
	sub_82CD9958(ctx, base);
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

__attribute__((alias("__imp__sub_82CE0890"))) PPC_WEAK_FUNC(sub_82CE0890);
PPC_FUNC_IMPL(__imp__sub_82CE0890) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ce08c4
	if (!ctx.cr6.eq) goto loc_82CE08C4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ce0908
	goto loc_82CE0908;
loc_82CE08C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82ce08f8
	if (!ctx.cr6.gt) goto loc_82CE08F8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ce08f8
	if (ctx.cr6.eq) goto loc_82CE08F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x82ca2c60
	ctx.lr = 0x82CE08EC;
	sub_82CA2C60(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82CE08F8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// ori r5,r11,48
	ctx.r5.u64 = ctx.r11.u64 | 48;
	// bl 0x82cdffa8
	ctx.lr = 0x82CE0908;
	sub_82CDFFA8(ctx, base);
loc_82CE0908:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82CE0920"))) PPC_WEAK_FUNC(sub_82CE0920);
PPC_FUNC_IMPL(__imp__sub_82CE0920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ce0950
	if (!ctx.cr6.eq) goto loc_82CE0950;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CE0950:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82ce099c
	if (!ctx.cr6.gt) goto loc_82CE099C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ce099c
	if (ctx.cr6.eq) goto loc_82CE099C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CE0980:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ce0980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CE0980;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
loc_82CE099C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce09c0
	if (ctx.cr6.eq) goto loc_82CE09C0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ce09b4
	if (!ctx.cr6.eq) goto loc_82CE09B4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82CE09B4:
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
loc_82CE09C0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// ori r5,r11,16
	ctx.r5.u64 = ctx.r11.u64 | 16;
	// bl 0x82ce0260
	ctx.lr = 0x82CE09D0;
	sub_82CE0260(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE09E0"))) PPC_WEAK_FUNC(sub_82CE09E0);
PPC_FUNC_IMPL(__imp__sub_82CE09E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE09E8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce0a74
	if (ctx.cr6.eq) goto loc_82CE0A74;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CE0A08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82cd3d40
	ctx.lr = 0x82CE0A14;
	sub_82CD3D40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ce0a24
	if (ctx.cr6.eq) goto loc_82CE0A24;
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
loc_82CE0A24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82cd3d00
	ctx.lr = 0x82CE0A30;
	sub_82CD3D00(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ce0a5c
	if (ctx.cr6.eq) goto loc_82CE0A5C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// ori r29,r29,3
	ctx.r29.u64 = ctx.r29.u64 | 3;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82CE0A5C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce0a08
	if (ctx.cr6.lt) goto loc_82CE0A08;
loc_82CE0A74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd9f68
	ctx.lr = 0x82CE0A84;
	sub_82CD9F68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE0A8C"))) PPC_WEAK_FUNC(sub_82CE0A8C);
PPC_FUNC_IMPL(__imp__sub_82CE0A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE0A90"))) PPC_WEAK_FUNC(sub_82CE0A90);
PPC_FUNC_IMPL(__imp__sub_82CE0A90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0890
	sub_82CE0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE0A98"))) PPC_WEAK_FUNC(sub_82CE0A98);
PPC_FUNC_IMPL(__imp__sub_82CE0A98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce0bf0
	sub_82CE0BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE0AA0"))) PPC_WEAK_FUNC(sub_82CE0AA0);
PPC_FUNC_IMPL(__imp__sub_82CE0AA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0bf0
	sub_82CE0BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE0AA8"))) PPC_WEAK_FUNC(sub_82CE0AA8);
PPC_FUNC_IMPL(__imp__sub_82CE0AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0920
	sub_82CE0920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE0AB0"))) PPC_WEAK_FUNC(sub_82CE0AB0);
PPC_FUNC_IMPL(__imp__sub_82CE0AB0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE0ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce0af0
	if (ctx.cr6.lt) goto loc_82CE0AF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CE0AF0:
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

__attribute__((alias("__imp__sub_82CE0B04"))) PPC_WEAK_FUNC(sub_82CE0B04);
PPC_FUNC_IMPL(__imp__sub_82CE0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE0B08"))) PPC_WEAK_FUNC(sub_82CE0B08);
PPC_FUNC_IMPL(__imp__sub_82CE0B08) {
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
	// lbz r11,198(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 198);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ce0b44
	if (ctx.cr6.eq) goto loc_82CE0B44;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// bgt cr6,0x82ce0b40
	if (ctx.cr6.gt) goto loc_82CE0B40;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
loc_82CE0B40:
	// stb r11,198(r3)
	PPC_STORE_U8(ctx.r3.u32 + 198, ctx.r11.u8);
loc_82CE0B44:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE0B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce0b6c
	if (ctx.cr6.lt) goto loc_82CE0B6C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_82CE0B6C:
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

__attribute__((alias("__imp__sub_82CE0B80"))) PPC_WEAK_FUNC(sub_82CE0B80);
PPC_FUNC_IMPL(__imp__sub_82CE0B80) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE0BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce0bc0
	if (ctx.cr6.lt) goto loc_82CE0BC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CE0BC0:
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

__attribute__((alias("__imp__sub_82CE0BD4"))) PPC_WEAK_FUNC(sub_82CE0BD4);
PPC_FUNC_IMPL(__imp__sub_82CE0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE0BD8"))) PPC_WEAK_FUNC(sub_82CE0BD8);
PPC_FUNC_IMPL(__imp__sub_82CE0BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE0BE8"))) PPC_WEAK_FUNC(sub_82CE0BE8);
PPC_FUNC_IMPL(__imp__sub_82CE0BE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82cd9428
	sub_82CD9428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE0BF0"))) PPC_WEAK_FUNC(sub_82CE0BF0);
PPC_FUNC_IMPL(__imp__sub_82CE0BF0) {
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
	// bl 0x82ce0818
	ctx.lr = 0x82CE0C08;
	sub_82CE0818(ctx, base);
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

__attribute__((alias("__imp__sub_82CE0C20"))) PPC_WEAK_FUNC(sub_82CE0C20);
PPC_FUNC_IMPL(__imp__sub_82CE0C20) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82cdff08
	ctx.lr = 0x82CE0C3C;
	sub_82CDFF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce0c50
	if (ctx.cr6.lt) goto loc_82CE0C50;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r11.u16);
loc_82CE0C50:
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

__attribute__((alias("__imp__sub_82CE0C64"))) PPC_WEAK_FUNC(sub_82CE0C64);
PPC_FUNC_IMPL(__imp__sub_82CE0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE0C68"))) PPC_WEAK_FUNC(sub_82CE0C68);
PPC_FUNC_IMPL(__imp__sub_82CE0C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE0C70;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE0C84;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce0cac
	if (ctx.cr6.eq) goto loc_82CE0CAC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce0cc0
	if (ctx.cr6.eq) goto loc_82CE0CC0;
loc_82CE0CAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE0CB4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE0CC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f31,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce0d04
	if (ctx.cr6.eq) goto loc_82CE0D04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CE0CDC:
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lbz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ce0cdc
	if (ctx.cr6.lt) goto loc_82CE0CDC;
loc_82CE0D04:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce0d50
	if (ctx.cr6.eq) goto loc_82CE0D50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce0d50
	if (!ctx.cr6.eq) goto loc_82CE0D50;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce0d50
	if (!ctx.cr0.eq) goto loc_82CE0D50;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE0D48;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0D50;
	__imp__KfLowerIrql(ctx, base);
loc_82CE0D50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE0D60"))) PPC_WEAK_FUNC(sub_82CE0D60);
PPC_FUNC_IMPL(__imp__sub_82CE0D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE0D68;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE0D7C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,28784
	ctx.r30.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce0da4
	if (ctx.cr6.eq) goto loc_82CE0DA4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce0db8
	if (ctx.cr6.eq) goto loc_82CE0DB8;
loc_82CE0DA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE0DAC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
loc_82CE0DB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lfd f1,3552(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3552);
	// bl 0x821fe378
	ctx.lr = 0x82CE0DD0;
	sub_821FE378(ctx, base);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ce0e5c
	if (ctx.cr6.eq) goto loc_82CE0E5C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82CE0DF0:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lbzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f9.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ce0df0
	if (ctx.cr6.lt) goto loc_82CE0DF0;
loc_82CE0E5C:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce0ea8
	if (ctx.cr6.eq) goto loc_82CE0EA8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce0ea8
	if (!ctx.cr6.eq) goto loc_82CE0EA8;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82ce0ea8
	if (!ctx.cr0.eq) goto loc_82CE0EA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE0EA0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0EA8;
	__imp__KfLowerIrql(ctx, base);
loc_82CE0EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE0EB8"))) PPC_WEAK_FUNC(sub_82CE0EB8);
PPC_FUNC_IMPL(__imp__sub_82CE0EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE0EC0;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE0ED4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,28784
	ctx.r30.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce0efc
	if (ctx.cr6.eq) goto loc_82CE0EFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce0f10
	if (ctx.cr6.eq) goto loc_82CE0F10;
loc_82CE0EFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE0F04;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
loc_82CE0F10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce0fa0
	if (ctx.cr6.eq) goto loc_82CE0FA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82CE0F34:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lbzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f9.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ce0f34
	if (ctx.cr6.lt) goto loc_82CE0F34;
loc_82CE0FA0:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce0fec
	if (ctx.cr6.eq) goto loc_82CE0FEC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce0fec
	if (!ctx.cr6.eq) goto loc_82CE0FEC;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82ce0fec
	if (!ctx.cr0.eq) goto loc_82CE0FEC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE0FE4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE0FEC;
	__imp__KfLowerIrql(ctx, base);
loc_82CE0FEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE0FFC"))) PPC_WEAK_FUNC(sub_82CE0FFC);
PPC_FUNC_IMPL(__imp__sub_82CE0FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1000"))) PPC_WEAK_FUNC(sub_82CE1000);
PPC_FUNC_IMPL(__imp__sub_82CE1000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CE1008;
	sub_82CA2BD8(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r3,56(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rlwinm r12,r8,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82ca9e84
	ctx.lr = 0x82CE1030;
	sub_82CA9E84(ctx, base);
	// lwz r7,0(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82ce11b0
	if (ctx.cr6.eq) goto loc_82CE11B0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// addi r28,r9,276
	ctx.r28.s64 = ctx.r9.s64 + 276;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r25,16
	ctx.r25.s64 = 16;
	// ori r30,r11,48000
	ctx.r30.u64 = ctx.r11.u64 | 48000;
loc_82CE1068:
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// li r26,3968
	ctx.r26.s64 = 3968;
	// lwz r11,204(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// divwu r11,r6,r30
	ctx.r11.u32 = ctx.r6.u32 / ctx.r30.u32;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// sth r6,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r6.u16);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82ce1098
	if (ctx.cr6.eq) goto loc_82CE1098;
	// li r26,1920
	ctx.r26.s64 = 1920;
loc_82CE1098:
	// lbz r29,1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ce10ac
	if (!ctx.cr6.eq) goto loc_82CE10AC;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82ce1110
	goto loc_82CE1110;
loc_82CE10AC:
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r27,r11,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ce10d4
	if (ctx.cr6.eq) goto loc_82CE10D4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// slw r11,r24,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r6.u8 & 0x3F));
loc_82CE10D4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82ce10e4
	if (!ctx.cr6.lt) goto loc_82CE10E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82ce10f0
	goto loc_82CE10F0;
loc_82CE10E4:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82ce10f0
	if (!ctx.cr6.gt) goto loc_82CE10F0;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82CE10F0:
	// rlwinm r6,r11,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// beq cr6,0x82ce1108
	if (ctx.cr6.eq) goto loc_82CE1108;
	// rlwinm r29,r29,7,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
loc_82CE1108:
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82ce1114
	if (!ctx.cr6.gt) goto loc_82CE1114;
loc_82CE1110:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82CE1114:
	// lwz r29,-4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// stw r29,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r29.u32);
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// stb r29,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r29.u8);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 264);
	// stw r11,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r11.u32);
	// lfs f0,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,-4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// std r29,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r29.u64);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stb r6,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r6.u8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// stb r24,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r24.u8);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stw r29,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.f9.u32);
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// addi r7,r7,88
	ctx.r7.s64 = ctx.r7.s64 + 88;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// bne 0x82ce1068
	if (!ctx.cr0.eq) goto loc_82CE1068;
loc_82CE11B0:
	// lbz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 264);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce11c8
	if (ctx.cr6.eq) goto loc_82CE11C8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82CE11C8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r9,184
	ctx.r6.s64 = ctx.r9.s64 + 184;
	// bl 0x82cd3380
	ctx.lr = 0x82CE11D8;
	sub_82CD3380(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82CE11E0"))) PPC_WEAK_FUNC(sub_82CE11E0);
PPC_FUNC_IMPL(__imp__sub_82CE11E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE11E8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE11F8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1218
	if (ctx.cr6.eq) goto loc_82CE1218;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce1228
	if (ctx.cr6.eq) goto loc_82CE1228;
loc_82CE1218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE1220;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE1228:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd36a8
	ctx.lr = 0x82CE123C;
	sub_82CD36A8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ce1288
	if (ctx.cr6.eq) goto loc_82CE1288;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd4008
	ctx.lr = 0x82CE1250;
	sub_82CD4008(ctx, base);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd40a0
	ctx.lr = 0x82CE1258;
	sub_82CD40A0(ctx, base);
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1288
	if (ctx.cr6.eq) goto loc_82CE1288;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CE1268:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3c50
	ctx.lr = 0x82CE1274;
	sub_82CD3C50(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce1268
	if (ctx.cr6.lt) goto loc_82CE1268;
loc_82CE1288:
	// stb r28,292(r29)
	PPC_STORE_U8(ctx.r29.u32 + 292, ctx.r28.u8);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce12d0
	if (ctx.cr6.eq) goto loc_82CE12D0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce12d0
	if (!ctx.cr6.eq) goto loc_82CE12D0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce12d0
	if (!ctx.cr0.eq) goto loc_82CE12D0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE12C8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE12D0;
	__imp__KfLowerIrql(ctx, base);
loc_82CE12D0:
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82cdfa78
	ctx.lr = 0x82CE12D8;
	sub_82CDFA78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE12E0"))) PPC_WEAK_FUNC(sub_82CE12E0);
PPC_FUNC_IMPL(__imp__sub_82CE12E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CE12E8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r29,296
	ctx.r30.s64 = ctx.r29.s64 + 296;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE1304;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1324
	if (ctx.cr6.eq) goto loc_82CE1324;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce1334
	if (ctx.cr6.eq) goto loc_82CE1334;
loc_82CE1324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE132C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_82CE1334:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd4168
	ctx.lr = 0x82CE1348;
	sub_82CD4168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ce1370
	if (!ctx.cr6.eq) goto loc_82CE1370;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd4008
	ctx.lr = 0x82CE135C;
	sub_82CD4008(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82ce13e0
	if (ctx.cr6.lt) goto loc_82CE13E0;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd40a0
	ctx.lr = 0x82CE1370;
	sub_82CD40A0(ctx, base);
loc_82CE1370:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce13cc
	if (ctx.cr6.eq) goto loc_82CE13CC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CE1380:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd3e60
	ctx.lr = 0x82CE1390;
	sub_82CD3E60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82ce13cc
	if (ctx.cr6.lt) goto loc_82CE13CC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r7,r10,7,16,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFF80;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lbz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82ce1380
	if (ctx.cr6.lt) goto loc_82CE1380;
loc_82CE13CC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ce13e0
	if (!ctx.cr6.eq) goto loc_82CE13E0;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd42b8
	ctx.lr = 0x82CE13DC;
	sub_82CD42B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82CE13E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1424
	if (ctx.cr6.eq) goto loc_82CE1424;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce1424
	if (!ctx.cr6.eq) goto loc_82CE1424;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82ce1424
	if (!ctx.cr0.eq) goto loc_82CE1424;
	// lbz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stb r25,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r25.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE141C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE1424;
	__imp__KfLowerIrql(ctx, base);
loc_82CE1424:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CE1430"))) PPC_WEAK_FUNC(sub_82CE1430);
PPC_FUNC_IMPL(__imp__sub_82CE1430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE1438;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ce1460
	if (!ctx.cr6.eq) goto loc_82CE1460;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82CE1460:
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE1468;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1488
	if (ctx.cr6.eq) goto loc_82CE1488;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce1498
	if (ctx.cr6.eq) goto loc_82CE1498;
loc_82CE1488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE1490;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82CE1498:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r29,120
	ctx.r3.s64 = ctx.r29.s64 + 120;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82CE14B4;
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce14fc
	if (ctx.cr6.eq) goto loc_82CE14FC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce14fc
	if (!ctx.cr6.eq) goto loc_82CE14FC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce14fc
	if (!ctx.cr0.eq) goto loc_82CE14FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE14F4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE14FC;
	__imp__KfLowerIrql(ctx, base);
loc_82CE14FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE1508"))) PPC_WEAK_FUNC(sub_82CE1508);
PPC_FUNC_IMPL(__imp__sub_82CE1508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce32a0
	sub_82CE32A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1510"))) PPC_WEAK_FUNC(sub_82CE1510);
PPC_FUNC_IMPL(__imp__sub_82CE1510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0c68
	sub_82CE0C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1518"))) PPC_WEAK_FUNC(sub_82CE1518);
PPC_FUNC_IMPL(__imp__sub_82CE1518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce33a0
	sub_82CE33A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1520"))) PPC_WEAK_FUNC(sub_82CE1520);
PPC_FUNC_IMPL(__imp__sub_82CE1520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce11e0
	sub_82CE11E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1528"))) PPC_WEAK_FUNC(sub_82CE1528);
PPC_FUNC_IMPL(__imp__sub_82CE1528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0b08
	sub_82CE0B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1530"))) PPC_WEAK_FUNC(sub_82CE1530);
PPC_FUNC_IMPL(__imp__sub_82CE1530) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0d60
	sub_82CE0D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1538"))) PPC_WEAK_FUNC(sub_82CE1538);
PPC_FUNC_IMPL(__imp__sub_82CE1538) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0eb8
	sub_82CE0EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1540"))) PPC_WEAK_FUNC(sub_82CE1540);
PPC_FUNC_IMPL(__imp__sub_82CE1540) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce31a0
	sub_82CE31A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1548"))) PPC_WEAK_FUNC(sub_82CE1548);
PPC_FUNC_IMPL(__imp__sub_82CE1548) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0c20
	sub_82CE0C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1550"))) PPC_WEAK_FUNC(sub_82CE1550);
PPC_FUNC_IMPL(__imp__sub_82CE1550) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0b80
	sub_82CE0B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1558"))) PPC_WEAK_FUNC(sub_82CE1558);
PPC_FUNC_IMPL(__imp__sub_82CE1558) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ce11e0
	sub_82CE11E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE155C"))) PPC_WEAK_FUNC(sub_82CE155C);
PPC_FUNC_IMPL(__imp__sub_82CE155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1560"))) PPC_WEAK_FUNC(sub_82CE1560);
PPC_FUNC_IMPL(__imp__sub_82CE1560) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// mulli r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,312
	ctx.r8.s64 = ctx.r11.s64 + 312;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE1588"))) PPC_WEAK_FUNC(sub_82CE1588);
PPC_FUNC_IMPL(__imp__sub_82CE1588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82CE1590;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce15f8
	if (ctx.cr6.eq) goto loc_82CE15F8;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82CE15B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3810
	ctx.lr = 0x82CE15C0;
	sub_82CD3810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ce165c
	if (ctx.cr6.eq) goto loc_82CE165C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3878
	ctx.lr = 0x82CE15D4;
	sub_82CD3878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ce15e0
	if (!ctx.cr6.eq) goto loc_82CE15E0;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_82CE15E0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce15b4
	if (ctx.cr6.lt) goto loc_82CE15B4;
loc_82CE15F8:
	// bl 0x832b2c0c
	ctx.lr = 0x82CE15FC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r21,r11,28784
	ctx.r21.s64 = ctx.r11.s64 + 28784;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1624
	if (ctx.cr6.eq) goto loc_82CE1624;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce1638
	if (ctx.cr6.eq) goto loc_82CE1638;
loc_82CE1624:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE162C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// stb r30,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r30.u8);
loc_82CE1638:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r19,r29,20
	ctx.r19.s64 = ctx.r29.s64 + 20;
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce1668
	if (ctx.cr6.eq) goto loc_82CE1668;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82ce166c
	goto loc_82CE166C;
loc_82CE165C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
loc_82CE1668:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82CE166C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r18,4
	ctx.r18.s64 = 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ce19e4
	if (ctx.cr6.eq) goto loc_82CE19E4;
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce177c
	if (ctx.cr6.eq) goto loc_82CE177C;
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// lwz r9,268(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ce177c
	if (ctx.cr6.lt) goto loc_82CE177C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ce16a8
	if (!ctx.cr6.eq) goto loc_82CE16A8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82ce16b0
	goto loc_82CE16B0;
loc_82CE16A8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
loc_82CE16B0:
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 268, ctx.r7.u32);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1710
	if (ctx.cr6.eq) goto loc_82CE1710;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce1710
	if (!ctx.cr6.eq) goto loc_82CE1710;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce1710
	if (!ctx.cr0.eq) goto loc_82CE1710;
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r20,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r20.u8);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE1708;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE1710;
	__imp__KfLowerIrql(ctx, base);
loc_82CE1710:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce173c
	if (ctx.cr6.eq) goto loc_82CE173C;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CE173C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE173C:
	// bl 0x832b2c0c
	ctx.lr = 0x82CE1740;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1760
	if (ctx.cr6.eq) goto loc_82CE1760;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce1770
	if (ctx.cr6.eq) goto loc_82CE1770;
loc_82CE1760:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE1768;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE1770:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82CE177C:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce17cc
	if (ctx.cr6.eq) goto loc_82CE17CC;
	// lbz r11,198(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 198);
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// stw r20,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r20.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
	// beq cr6,0x82ce17cc
	if (ctx.cr6.eq) goto loc_82CE17CC;
	// addi r30,r29,188
	ctx.r30.s64 = ctx.r29.s64 + 188;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82CE17A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd3d80
	ctx.lr = 0x82CE17B8;
	sub_82CD3D80(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce17a8
	if (ctx.cr6.lt) goto loc_82CE17A8;
loc_82CE17CC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82ce19e4
	if (ctx.cr6.eq) goto loc_82CE19E4;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bne cr6,0x82ce17f0
	if (!ctx.cr6.eq) goto loc_82CE17F0;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82CE17F0:
	// lbz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1870
	if (ctx.cr6.eq) goto loc_82CE1870;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce185c
	if (ctx.cr6.eq) goto loc_82CE185C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82CE1810:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3790
	ctx.lr = 0x82CE1820;
	sub_82CD3790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ce1840
	if (ctx.cr6.eq) goto loc_82CE1840;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3d00
	ctx.lr = 0x82CE1834;
	sub_82CD3D00(ctx, base);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1858
	if (ctx.cr6.eq) goto loc_82CE1858;
loc_82CE1840:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce1810
	if (ctx.cr6.lt) goto loc_82CE1810;
	// b 0x82ce185c
	goto loc_82CE185C;
loc_82CE1858:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CE185C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce1874
	if (!ctx.cr6.eq) goto loc_82CE1874;
	// stb r18,116(r27)
	PPC_STORE_U8(ctx.r27.u32 + 116, ctx.r18.u8);
	// b 0x82ce1874
	goto loc_82CE1874;
loc_82CE1870:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82CE1874:
	// lbz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82ce19d8
	if (!ctx.cr6.eq) goto loc_82CE19D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82ce18a4
	if (!ctx.cr6.eq) goto loc_82CE18A4;
	// lbz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce18a4
	if (ctx.cr6.eq) goto loc_82CE18A4;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce19d8
	if (ctx.cr6.eq) goto loc_82CE19D8;
loc_82CE18A4:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce18f4
	if (ctx.cr6.eq) goto loc_82CE18F4;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ce18f4
	if (!ctx.cr6.eq) goto loc_82CE18F4;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// bne 0x82ce18f4
	if (!ctx.cr0.eq) goto loc_82CE18F4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lbz r31,12(r21)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + 12);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r11,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE18EC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE18F4;
	__imp__KfLowerIrql(ctx, base);
loc_82CE18F4:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce193c
	if (ctx.cr6.eq) goto loc_82CE193C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce193c
	if (!ctx.cr6.eq) goto loc_82CE193C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce193c
	if (!ctx.cr0.eq) goto loc_82CE193C;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r20,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r20.u8);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE1934;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE193C;
	__imp__KfLowerIrql(ctx, base);
loc_82CE193C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE1958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x832b2c0c
	ctx.lr = 0x82CE195C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce197c
	if (ctx.cr6.eq) goto loc_82CE197C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce198c
	if (ctx.cr6.eq) goto loc_82CE198C;
loc_82CE197C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE1984;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE198C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x832b2c0c
	ctx.lr = 0x82CE199C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce19bc
	if (ctx.cr6.eq) goto loc_82CE19BC;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce19d0
	if (ctx.cr6.eq) goto loc_82CE19D0;
loc_82CE19BC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE19C4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// stb r30,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r30.u8);
loc_82CE19D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
loc_82CE19D8:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82ce17cc
	if (!ctx.cr6.eq) goto loc_82CE17CC;
loc_82CE19E4:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ce1a00
	if (!ctx.cr6.eq) goto loc_82CE1A00;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce1a00
	if (!ctx.cr6.eq) goto loc_82CE1A00;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_82CE1A00:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce1a50
	if (ctx.cr6.eq) goto loc_82CE1A50;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ce1a50
	if (!ctx.cr6.eq) goto loc_82CE1A50;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// bne 0x82ce1a50
	if (!ctx.cr0.eq) goto loc_82CE1A50;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lbz r31,12(r21)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + 12);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r11,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE1A48;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE1A50;
	__imp__KfLowerIrql(ctx, base);
loc_82CE1A50:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1db8
	if (ctx.cr6.eq) goto loc_82CE1DB8;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE1A60;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce1a80
	if (ctx.cr6.eq) goto loc_82CE1A80;
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82ce1a98
	if (ctx.cr6.eq) goto loc_82CE1A98;
loc_82CE1A80:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE1A88;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stb r30,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r30.u8);
	// stw r9,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r9.u32);
loc_82CE1A98:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce1ab8
	if (ctx.cr6.eq) goto loc_82CE1AB8;
	// lwz r8,8(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// b 0x82ce1abc
	goto loc_82CE1ABC;
loc_82CE1AB8:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82CE1ABC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ce1d74
	if (ctx.cr6.eq) goto loc_82CE1D74;
	// li r22,3
	ctx.r22.s64 = 3;
loc_82CE1AC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ce1d6c
	if (ctx.cr6.eq) goto loc_82CE1D6C;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// subf r23,r11,r10
	ctx.r23.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bne cr6,0x82ce1aec
	if (!ctx.cr6.eq) goto loc_82CE1AEC;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_82CE1AEC:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce1d60
	if (!ctx.cr6.eq) goto loc_82CE1D60;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1d50
	if (ctx.cr6.eq) goto loc_82CE1D50;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82CE1B0C:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ce1b24
	if (!ctx.cr6.eq) goto loc_82CE1B24;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82ce1b3c
	goto loc_82CE1B3C;
loc_82CE1B24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ce1b3c
	if (ctx.cr6.eq) goto loc_82CE1B3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3878
	ctx.lr = 0x82CE1B38;
	sub_82CD3878(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82CE1B3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd36b8
	ctx.lr = 0x82CE1B50;
	sub_82CD36B8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ce1ba4
	if (ctx.cr6.eq) goto loc_82CE1BA4;
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ce1b8c
	if (!ctx.cr6.eq) goto loc_82CE1B8C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ce0690
	ctx.lr = 0x82CE1B7C;
	sub_82CE0690(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r6,r11,25,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	// b 0x82ce1b98
	goto loc_82CE1B98;
loc_82CE1B8C:
	// rlwinm r11,r30,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0xFFFFC000;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
loc_82CE1B98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3ee8
	ctx.lr = 0x82CE1BA4;
	sub_82CD3EE8(ctx, base);
loc_82CE1BA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1cf0
	if (ctx.cr6.eq) goto loc_82CE1CF0;
	// stw r20,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r20.u32);
	// addi r27,r29,188
	ctx.r27.s64 = ctx.r29.s64 + 188;
	// stw r20,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r20.u32);
	// stw r20,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r20.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stb r10,198(r29)
	PPC_STORE_U8(ctx.r29.u32 + 198, ctx.r10.u8);
	// bne cr6,0x82ce1ca8
	if (!ctx.cr6.eq) goto loc_82CE1CA8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r26,r11,-128
	ctx.r26.s64 = ctx.r11.s64 + -128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82ce0690
	ctx.lr = 0x82CE1BF4;
	sub_82CE0690(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// bl 0x82ce0690
	ctx.lr = 0x82CE1C14;
	sub_82CE0690(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r28,r6,25,30,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x3;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ce1c78
	if (!ctx.cr6.eq) goto loc_82CE1C78;
	// cmplwi cr6,r6,512
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 512, ctx.xer);
	// blt cr6,0x82ce1c58
	if (ctx.cr6.lt) goto loc_82CE1C58;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ce1c8c
	if (!ctx.cr6.eq) goto loc_82CE1C8C;
	// addi r6,r6,-512
	ctx.r6.s64 = ctx.r6.s64 + -512;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ce0690
	ctx.lr = 0x82CE1C50;
	sub_82CE0690(ctx, base);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// b 0x82ce1c8c
	goto loc_82CE1C8C;
loc_82CE1C58:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ce0690
	ctx.lr = 0x82CE1C70;
	sub_82CE0690(ctx, base);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x82ce1c8c
	goto loc_82CE1C8C;
loc_82CE1C78:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ce0690
	ctx.lr = 0x82CE1C8C;
	sub_82CE0690(ctx, base);
loc_82CE1C8C:
	// rlwinm r11,r26,25,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 25) & 0x3;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r25,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stb r11,196(r29)
	PPC_STORE_U8(ctx.r29.u32 + 196, ctx.r11.u8);
	// stb r28,197(r29)
	PPC_STORE_U8(ctx.r29.u32 + 197, ctx.r28.u8);
	// b 0x82ce1d0c
	goto loc_82CE1D0C;
loc_82CE1CA8:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r5,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r5.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// stb r4,196(r29)
	PPC_STORE_U8(ctx.r29.u32 + 196, ctx.r4.u8);
	// lbz r3,49(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// stb r3,197(r29)
	PPC_STORE_U8(ctx.r29.u32 + 197, ctx.r3.u8);
	// b 0x82ce1d0c
	goto loc_82CE1D0C;
loc_82CE1CF0:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ce1d18
	if (!ctx.cr6.eq) goto loc_82CE1D18;
	// stw r20,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r20.u32);
	// addi r5,r29,188
	ctx.r5.s64 = ctx.r29.s64 + 188;
	// stw r20,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r20.u32);
	// stw r20,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r20.u32);
loc_82CE1D0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3d80
	ctx.lr = 0x82CE1D18;
	sub_82CD3D80(ctx, base);
loc_82CE1D18:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82ce1d38
	if (ctx.cr6.eq) goto loc_82CE1D38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3810
	ctx.lr = 0x82CE1D30;
	sub_82CD3810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ce1d3c
	if (!ctx.cr6.eq) goto loc_82CE1D3C;
loc_82CE1D38:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_82CE1D3C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce1b0c
	if (ctx.cr6.lt) goto loc_82CE1B0C;
loc_82CE1D50:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// stb r22,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r22.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1d6c
	if (ctx.cr6.eq) goto loc_82CE1D6C;
loc_82CE1D60:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82ce1ac8
	if (!ctx.cr6.eq) goto loc_82CE1AC8;
loc_82CE1D6C:
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
loc_82CE1D74:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce1db8
	if (ctx.cr6.eq) goto loc_82CE1DB8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce1db8
	if (!ctx.cr6.eq) goto loc_82CE1DB8;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// bne 0x82ce1db8
	if (!ctx.cr0.eq) goto loc_82CE1DB8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lbz r31,12(r21)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + 12);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r11,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE1DB0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE1DB8;
	__imp__KfLowerIrql(ctx, base);
loc_82CE1DB8:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1e14
	if (ctx.cr6.eq) goto loc_82CE1E14;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1e10
	if (ctx.cr6.eq) goto loc_82CE1E10;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82CE1DD4:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// addi r10,r31,15
	ctx.r10.s64 = ctx.r31.s64 + 15;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r7,124(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 124);
	// lwzx r5,r8,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r6,r7,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bl 0x82cd3ee8
	ctx.lr = 0x82CE1DFC;
	sub_82CD3EE8(ctx, base);
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// lbz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82ce1dd4
	if (ctx.cr6.lt) goto loc_82CE1DD4;
loc_82CE1E10:
	// stw r20,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r20.u32);
loc_82CE1E14:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1e64
	if (ctx.cr6.eq) goto loc_82CE1E64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82CE1E24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3878
	ctx.lr = 0x82CE1E30;
	sub_82CD3878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ce1e50
	if (!ctx.cr6.eq) goto loc_82CE1E50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3d00
	ctx.lr = 0x82CE1E44;
	sub_82CD3D00(ctx, base);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce165c
	if (ctx.cr6.eq) goto loc_82CE165C;
loc_82CE1E50:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce1e24
	if (ctx.cr6.lt) goto loc_82CE1E24;
loc_82CE1E64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82CE1E70"))) PPC_WEAK_FUNC(sub_82CE1E70);
PPC_FUNC_IMPL(__imp__sub_82CE1E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CE1E78;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1ed0
	if (ctx.cr6.eq) goto loc_82CE1ED0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CE1E9C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x82cd3878
	ctx.lr = 0x82CE1EA8;
	sub_82CD3878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ce1ecc
	if (ctx.cr6.eq) goto loc_82CE1ECC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce1e9c
	if (ctx.cr6.lt) goto loc_82CE1E9C;
	// b 0x82ce1ed0
	goto loc_82CE1ED0;
loc_82CE1ECC:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82CE1ED0:
	// bl 0x832b2c0c
	ctx.lr = 0x82CE1ED4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,28784
	ctx.r27.s64 = ctx.r11.s64 + 28784;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce1efc
	if (ctx.cr6.eq) goto loc_82CE1EFC;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce1f10
	if (ctx.cr6.eq) goto loc_82CE1F10;
loc_82CE1EFC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE1F04;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stb r30,12(r27)
	PPC_STORE_U8(ctx.r27.u32 + 12, ctx.r30.u8);
loc_82CE1F10:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82ce20ac
	if (ctx.cr6.eq) goto loc_82CE20AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ce20ac
	if (ctx.cr6.eq) goto loc_82CE20AC;
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce20ac
	if (ctx.cr6.eq) goto loc_82CE20AC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce20ac
	if (ctx.cr6.eq) goto loc_82CE20AC;
	// lbz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 118);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1fb0
	if (ctx.cr6.eq) goto loc_82CE1FB0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce20ac
	if (ctx.cr6.eq) goto loc_82CE20AC;
	// lbz r11,119(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 119);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce20ac
	if (!ctx.cr6.eq) goto loc_82CE20AC;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce1fa8
	if (ctx.cr6.eq) goto loc_82CE1FA8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CE1F84:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd3bc8
	ctx.lr = 0x82CE1F94;
	sub_82CD3BC8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce1f84
	if (ctx.cr6.lt) goto loc_82CE1F84;
loc_82CE1FA8:
	// stb r24,119(r30)
	PPC_STORE_U8(ctx.r30.u32 + 119, ctx.r24.u8);
	// b 0x82ce20a8
	goto loc_82CE20A8;
loc_82CE1FB0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2008
	if (ctx.cr6.eq) goto loc_82CE2008;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2008
	if (ctx.cr6.eq) goto loc_82CE2008;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CE1FD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x82cd3df8
	ctx.lr = 0x82CE1FDC;
	sub_82CD3DF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ce2000
	if (!ctx.cr6.eq) goto loc_82CE2000;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce1fd0
	if (ctx.cr6.lt) goto loc_82CE1FD0;
	// b 0x82ce2004
	goto loc_82CE2004;
loc_82CE2000:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82CE2004:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82CE2008:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce20ac
	if (ctx.cr6.eq) goto loc_82CE20AC;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce20a4
	if (ctx.cr6.eq) goto loc_82CE20A4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82CE2028:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r11,-128
	ctx.r29.s64 = ctx.r11.s64 + -128;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// stb r24,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r24.u8);
	// bl 0x82ce0690
	ctx.lr = 0x82CE205C;
	sub_82CE0690(ctx, base);
	// rlwinm r9,r29,25,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x3;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82ce0758
	ctx.lr = 0x82CE2078;
	sub_82CE0758(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stb r26,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x82cd3d80
	ctx.lr = 0x82CE2090;
	sub_82CD3D80(ctx, base);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// lbz r7,56(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ce2028
	if (ctx.cr6.lt) goto loc_82CE2028;
loc_82CE20A4:
	// stb r24,118(r30)
	PPC_STORE_U8(ctx.r30.u32 + 118, ctx.r24.u8);
loc_82CE20A8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82CE20AC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// beq cr6,0x82ce20f4
	if (ctx.cr6.eq) goto loc_82CE20F4;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce20f4
	if (!ctx.cr6.eq) goto loc_82CE20F4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// bne 0x82ce20f4
	if (!ctx.cr0.eq) goto loc_82CE20F4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lbz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stb r11,12(r27)
	PPC_STORE_U8(ctx.r27.u32 + 12, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE20EC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE20F4;
	__imp__KfLowerIrql(ctx, base);
loc_82CE20F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82CE20FC"))) PPC_WEAK_FUNC(sub_82CE20FC);
PPC_FUNC_IMPL(__imp__sub_82CE20FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2100"))) PPC_WEAK_FUNC(sub_82CE2100);
PPC_FUNC_IMPL(__imp__sub_82CE2100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE2108;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 264);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce21c0
	if (ctx.cr6.eq) goto loc_82CE21C0;
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE212C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce214c
	if (ctx.cr6.eq) goto loc_82CE214C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce215c
	if (ctx.cr6.eq) goto loc_82CE215C;
loc_82CE214C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE2154;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82CE215C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3f40
	ctx.lr = 0x82CE2170;
	sub_82CD3F40(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce21b8
	if (ctx.cr6.eq) goto loc_82CE21B8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce21b8
	if (!ctx.cr6.eq) goto loc_82CE21B8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce21b8
	if (!ctx.cr0.eq) goto loc_82CE21B8;
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE21B0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE21B8;
	__imp__KfLowerIrql(ctx, base);
loc_82CE21B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ce22a8
	if (ctx.cr6.lt) goto loc_82CE22A8;
loc_82CE21C0:
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE21C8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce21f0
	if (ctx.cr6.eq) goto loc_82CE21F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce2204
	if (ctx.cr6.eq) goto loc_82CE2204;
loc_82CE21F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE21F8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE2204:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ce2228
	if (!ctx.cr6.eq) goto loc_82CE2228;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82ce223c
	goto loc_82CE223C;
loc_82CE2228:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2254
	if (ctx.cr6.eq) goto loc_82CE2254;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_82CE223C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CE2254:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce229c
	if (ctx.cr6.eq) goto loc_82CE229C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce229c
	if (!ctx.cr6.eq) goto loc_82CE229C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce229c
	if (!ctx.cr0.eq) goto loc_82CE229C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2294;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE229C;
	__imp__KfLowerIrql(ctx, base);
loc_82CE229C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82CE22A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE22B4"))) PPC_WEAK_FUNC(sub_82CE22B4);
PPC_FUNC_IMPL(__imp__sub_82CE22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE22B8"))) PPC_WEAK_FUNC(sub_82CE22B8);
PPC_FUNC_IMPL(__imp__sub_82CE22B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CE22C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r27,r4,31
	ctx.r27.u64 = ctx.r4.u32 & 0x1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ce2378
	if (ctx.cr6.eq) goto loc_82CE2378;
	// lbz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 264);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2378
	if (ctx.cr6.eq) goto loc_82CE2378;
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE22F0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce2310
	if (ctx.cr6.eq) goto loc_82CE2310;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce2320
	if (ctx.cr6.eq) goto loc_82CE2320;
loc_82CE2310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE2318;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82CE2320:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82cd3630
	ctx.lr = 0x82CE2334;
	sub_82CD3630(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce2378
	if (ctx.cr6.eq) goto loc_82CE2378;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce2378
	if (!ctx.cr6.eq) goto loc_82CE2378;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce2378
	if (!ctx.cr0.eq) goto loc_82CE2378;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2370;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE2378;
	__imp__KfLowerIrql(ctx, base);
loc_82CE2378:
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE2380;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce23a8
	if (ctx.cr6.eq) goto loc_82CE23A8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce23bc
	if (ctx.cr6.eq) goto loc_82CE23BC;
loc_82CE23A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE23B0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE23BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ce2444
	if (ctx.cr6.eq) goto loc_82CE2444;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ce2424
	if (!ctx.cr6.eq) goto loc_82CE2424;
	// rlwinm r9,r10,0,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ce2424
	if (!ctx.cr6.eq) goto loc_82CE2424;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce2444
	if (!ctx.cr6.eq) goto loc_82CE2444;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r11,19944(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 19944);
	// sth r11,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r11.u16);
	// b 0x82ce2440
	goto loc_82CE2440;
loc_82CE2424:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE2440:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CE2444:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce248c
	if (ctx.cr6.eq) goto loc_82CE248C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce248c
	if (!ctx.cr6.eq) goto loc_82CE248C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce248c
	if (!ctx.cr0.eq) goto loc_82CE248C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2484;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE248C;
	__imp__KfLowerIrql(ctx, base);
loc_82CE248C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CE2498"))) PPC_WEAK_FUNC(sub_82CE2498);
PPC_FUNC_IMPL(__imp__sub_82CE2498) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce22b8
	sub_82CE22B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE24A0"))) PPC_WEAK_FUNC(sub_82CE24A0);
PPC_FUNC_IMPL(__imp__sub_82CE24A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce2100
	sub_82CE2100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE24A8"))) PPC_WEAK_FUNC(sub_82CE24A8);
PPC_FUNC_IMPL(__imp__sub_82CE24A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce1558
	sub_82CE1558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE24B0"))) PPC_WEAK_FUNC(sub_82CE24B0);
PPC_FUNC_IMPL(__imp__sub_82CE24B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CE24B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cd9668
	ctx.lr = 0x82CE24D4;
	sub_82CD9668(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,20184
	ctx.r8.s64 = ctx.r11.s64 + 20184;
	// addi r7,r10,20144
	ctx.r7.s64 = ctx.r10.s64 + 20144;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// addi r6,r9,20048
	ctx.r6.s64 = ctx.r9.s64 + 20048;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r11,69(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 69);
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// bl 0x82cd93f8
	ctx.lr = 0x82CE2538;
	sub_82CD93F8(ctx, base);
	// lis r10,744
	ctx.r10.s64 = 48758784;
	// ori r9,r10,47662
	ctx.r9.u64 = ctx.r10.u64 | 47662;
	// lbz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// mulli r4,r28,88
	ctx.r4.s64 = ctx.r28.s64 * 88;
	// ble cr6,0x82ce2554
	if (!ctx.cr6.gt) goto loc_82CE2554;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82CE2554:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ce25a8
	if (ctx.cr6.eq) goto loc_82CE25A8;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// blt 0x82ce25a0
	if (ctx.cr0.lt) goto loc_82CE25A0;
loc_82CE2580:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CE2590;
	sub_82CA3190(ctx, base);
	// stw r30,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bge 0x82ce2580
	if (!ctx.cr0.lt) goto loc_82CE2580;
loc_82CE25A0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ce25ac
	goto loc_82CE25AC;
loc_82CE25A8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CE25AC:
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// vspltisw v0,15
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xF)));
	// li r9,204
	ctx.r9.s64 = 204;
	// vspltisw128 v63,4
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x4)));
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// vspltisw v13,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x1)));
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r5,56
	ctx.r5.s64 = 56;
	// lvlx128 v62,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vexptefp128 v61,v62
	ctx.fpscr.enableFlushMode();
	ctx.v61.f32[0] = exp2f(ctx.v62.f32[0]);
	ctx.v61.f32[1] = exp2f(ctx.v62.f32[1]);
	ctx.v61.f32[2] = exp2f(ctx.v62.f32[2]);
	ctx.v61.f32[3] = exp2f(ctx.v62.f32[3]);
	// vcfpsxws128 v12,v61,4
	_mm_store_si128((__m128i*)ctx.v12.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_set1_ps(16))));
	// vadduws v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vsraw128 v10,v11,v63
	ctx.v10.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmaxsw v9,v10,v13
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vspltw128 v60,v9,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// stvewx128 v60,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x82ca2c60
	ctx.lr = 0x82CE25F4;
	sub_82CA2C60(ctx, base);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CE2618"))) PPC_WEAK_FUNC(sub_82CE2618);
PPC_FUNC_IMPL(__imp__sub_82CE2618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82CE2620;
	sub_82CA2BD0(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r24,r31,296
	ctx.r24.s64 = ctx.r31.s64 + 296;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE2644;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce2664
	if (ctx.cr6.eq) goto loc_82CE2664;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce2674
	if (ctx.cr6.eq) goto loc_82CE2674;
loc_82CE2664:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE266C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r29,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r29.u8);
	// stw r30,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r30.u32);
loc_82CE2674:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82cd36a8
	ctx.lr = 0x82CE2688;
	sub_82CD36A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ce3088
	if (ctx.cr6.eq) goto loc_82CE3088;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82cd4008
	ctx.lr = 0x82CE2698;
	sub_82CD4008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ce26f8
	if (!ctx.cr6.lt) goto loc_82CE26F8;
loc_82CE26A4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce26e8
	if (ctx.cr6.eq) goto loc_82CE26E8;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce26e8
	if (!ctx.cr6.eq) goto loc_82CE26E8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82ce26e8
	if (!ctx.cr0.eq) goto loc_82CE26E8;
	// lbz r31,12(r24)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE26E0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE26E8;
	__imp__KfLowerIrql(ctx, base);
loc_82CE26E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82CE26F8:
	// bl 0x832b2c0c
	ctx.lr = 0x82CE26FC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r25,r11,28784
	ctx.r25.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce2724
	if (ctx.cr6.eq) goto loc_82CE2724;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce2738
	if (ctx.cr6.eq) goto loc_82CE2738;
loc_82CE2724:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE272C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r29.u8);
loc_82CE2738:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cd7d68
	ctx.lr = 0x82CE274C;
	sub_82CD7D68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ce27b0
	if (ctx.cr6.lt) goto loc_82CE27B0;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2790
	if (ctx.cr6.eq) goto loc_82CE2790;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82CE2770:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r9,r6,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82ce2770
	if (ctx.cr6.lt) goto loc_82CE2770;
loc_82CE2790:
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cd7fe0
	ctx.lr = 0x82CE27A4;
	sub_82CD7FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ce2a64
	if (!ctx.cr6.lt) goto loc_82CE2A64;
loc_82CE27B0:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce27fc
	if (ctx.cr6.eq) goto loc_82CE27FC;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce27fc
	if (!ctx.cr6.eq) goto loc_82CE27FC;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82ce27fc
	if (!ctx.cr0.eq) goto loc_82CE27FC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r29,12(r25)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE27F4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE27FC;
	__imp__KfLowerIrql(ctx, base);
loc_82CE27FC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82ce26a4
	if (!ctx.cr6.eq) goto loc_82CE26A4;
loc_82CE2804:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82cd40a0
	ctx.lr = 0x82CE280C;
	sub_82CD40A0(ctx, base);
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ce2820
	if (!ctx.cr6.eq) goto loc_82CE2820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1e70
	ctx.lr = 0x82CE2820;
	sub_82CE1E70(ctx, base);
loc_82CE2820:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce29a0
	if (ctx.cr6.eq) goto loc_82CE29A0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82CE2830:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82cd38d8
	ctx.lr = 0x82CE283C;
	sub_82CD38D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ce28e0
	if (ctx.cr6.eq) goto loc_82CE28E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cd3b20
	ctx.lr = 0x82CE285C;
	sub_82CD3B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ce28e0
	if (ctx.cr6.eq) goto loc_82CE28E0;
	// mulli r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 * 88;
loc_82CE2868:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82ce2888
	if (ctx.cr6.eq) goto loc_82CE2888;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82CE2888:
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82ce7730
	ctx.lr = 0x82CE2898;
	sub_82CE7730(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// bl 0x82cd3968
	ctx.lr = 0x82CE28B0;
	sub_82CD3968(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ce28e0
	if (ctx.cr0.eq) goto loc_82CE28E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cd3b20
	ctx.lr = 0x82CE28D8;
	sub_82CD3B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ce2868
	if (!ctx.cr6.eq) goto loc_82CE2868;
loc_82CE28E0:
	// addi r11,r27,138
	ctx.r11.s64 = ctx.r27.s64 + 138;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82ce28fc
	if (ctx.cr6.gt) goto loc_82CE28FC;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82CE28FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82cdd5d8
	ctx.lr = 0x82CE2908;
	sub_82CDD5D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82cdd5d8
	ctx.lr = 0x82CE2914;
	sub_82CDD5D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82cd3e40
	ctx.lr = 0x82CE2920;
	sub_82CD3E40(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r11,r27,88
	ctx.r11.s64 = ctx.r27.s64 * 88;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,13(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// beq 0x82ce2978
	if (ctx.cr0.eq) goto loc_82CE2978;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ce2974
	if (ctx.cr6.eq) goto loc_82CE2974;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CE2954:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CE2968;
	sub_82CA3190(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82ce2954
	if (!ctx.cr0.eq) goto loc_82CE2954;
loc_82CE2974:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82CE2978:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ce298c
	if (!ctx.cr6.eq) goto loc_82CE298C;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82cdd5d8
	ctx.lr = 0x82CE298C;
	sub_82CDD5D8(ctx, base);
loc_82CE298C:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce2830
	if (ctx.cr6.lt) goto loc_82CE2830;
loc_82CE29A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1588
	ctx.lr = 0x82CE29A8;
	sub_82CE1588(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE29B0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce29d0
	if (ctx.cr6.eq) goto loc_82CE29D0;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce29e4
	if (ctx.cr6.eq) goto loc_82CE29E4;
loc_82CE29D0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE29D8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r29.u8);
loc_82CE29E4:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r7.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2a28
	if (ctx.cr6.eq) goto loc_82CE2A28;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82CE29FC:
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce29fc
	if (ctx.cr6.lt) goto loc_82CE29FC;
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82CE2A28:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2dbc
	if (ctx.cr6.eq) goto loc_82CE2DBC;
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce2d8c
	if (!ctx.cr6.eq) goto loc_82CE2D8C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
loc_82CE2A50:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2d18
	if (ctx.cr6.eq) goto loc_82CE2D18;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ce2d1c
	goto loc_82CE2D1C;
loc_82CE2A64:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2ac4
	if (ctx.cr6.eq) goto loc_82CE2AC4;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r7,256
	ctx.r7.s64 = 256;
loc_82CE2A7C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r8,r10,88
	ctx.r8.s64 = ctx.r10.s64 * 88;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r23,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// rotlwi r11,r11,10
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 10);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// blt cr6,0x82ce2a7c
	if (ctx.cr6.lt) goto loc_82CE2A7C;
loc_82CE2AC4:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2c50
	if (ctx.cr6.eq) goto loc_82CE2C50;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce2c50
	if (!ctx.cr6.eq) goto loc_82CE2C50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82ce2b80
	if (ctx.cr6.eq) goto loc_82CE2B80;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2b64
	if (ctx.cr6.eq) goto loc_82CE2B64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82CE2B04:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r11,r8,88
	ctx.r11.s64 = ctx.r8.s64 * 88;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CE2B40:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ce2b40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CE2B40;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ce2b04
	if (ctx.cr6.lt) goto loc_82CE2B04;
loc_82CE2B64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE2B80:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2c00
	if (ctx.cr6.eq) goto loc_82CE2C00;
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 174);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// lfs f13,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r7,174(r31)
	PPC_STORE_U16(ctx.r31.u32 + 174, ctx.r7.u16);
	// beq cr6,0x82ce2bc8
	if (ctx.cr6.eq) goto loc_82CE2BC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,19948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82ce2bcc
	goto loc_82CE2BCC;
loc_82CE2BC8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82CE2BCC:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2c00
	if (ctx.cr6.eq) goto loc_82CE2C00;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82CE2BDC:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 * 88;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ce2bdc
	if (ctx.cr6.lt) goto loc_82CE2BDC;
loc_82CE2C00:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce2804
	if (ctx.cr6.eq) goto loc_82CE2804;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce2804
	if (!ctx.cr6.eq) goto loc_82CE2804;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82ce2804
	if (!ctx.cr0.eq) goto loc_82CE2804;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r25)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2C44;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE2C4C;
	__imp__KfLowerIrql(ctx, base);
	// b 0x82ce2804
	goto loc_82CE2804;
loc_82CE2C50:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2cc4
	if (ctx.cr6.eq) goto loc_82CE2CC4;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82CE2C60:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r10,r26,88
	ctx.r10.s64 = ctx.r26.s64 * 88;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lbz r30,13(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2cac
	if (ctx.cr6.eq) goto loc_82CE2CAC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ce2cac
	if (ctx.cr6.eq) goto loc_82CE2CAC;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82CE2C8C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CE2CA0;
	sub_82CA3190(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1024
	ctx.r29.s64 = ctx.r29.s64 + 1024;
	// bne 0x82ce2c8c
	if (!ctx.cr0.eq) goto loc_82CE2C8C;
loc_82CE2CAC:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce2c60
	if (ctx.cr6.lt) goto loc_82CE2C60;
loc_82CE2CC4:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce2d10
	if (ctx.cr6.eq) goto loc_82CE2D10;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce2d10
	if (!ctx.cr6.eq) goto loc_82CE2D10;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82ce2d10
	if (!ctx.cr0.eq) goto loc_82CE2D10;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2D08;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE2D10;
	__imp__KfLowerIrql(ctx, base);
loc_82CE2D10:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82ce26a4
	goto loc_82CE26A4;
loc_82CE2D18:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82CE2D1C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce2d34
	if (ctx.cr6.eq) goto loc_82CE2D34;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82ce2d38
	goto loc_82CE2D38;
loc_82CE2D34:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82CE2D38:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2d60
	if (ctx.cr6.eq) goto loc_82CE2D60;
	// lbz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 116);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x82ce2a50
	goto loc_82CE2A50;
loc_82CE2D60:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce2dbc
	if (!ctx.cr6.eq) goto loc_82CE2DBC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ce2db8
	goto loc_82CE2DB8;
loc_82CE2D8C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ce2dbc
	if (!ctx.cr6.eq) goto loc_82CE2DBC;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce2dbc
	if (!ctx.cr6.eq) goto loc_82CE2DBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE2DB8:
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82CE2DBC:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2e00
	if (ctx.cr6.eq) goto loc_82CE2E00;
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 174);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2de4
	if (ctx.cr6.eq) goto loc_82CE2DE4;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2e00
	if (ctx.cr6.eq) goto loc_82CE2E00;
loc_82CE2DE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82CE2E00:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce2e1c
	if (ctx.cr6.eq) goto loc_82CE2E1C;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2fbc
	if (ctx.cr6.eq) goto loc_82CE2FBC;
loc_82CE2E1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce2e38
	if (ctx.cr6.eq) goto loc_82CE2E38;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82ce2e3c
	goto loc_82CE2E3C;
loc_82CE2E38:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82CE2E3C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce2fbc
	if (ctx.cr6.eq) goto loc_82CE2FBC;
loc_82CE2E48:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ce2e60
	if (ctx.cr6.eq) goto loc_82CE2E60;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82ce2e64
	goto loc_82CE2E64;
loc_82CE2E60:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82CE2E64:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce2e7c
	if (ctx.cr6.eq) goto loc_82CE2E7C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82ce2e80
	goto loc_82CE2E80;
loc_82CE2E7C:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82CE2E80:
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82ce2fb4
	if (!ctx.cr6.eq) goto loc_82CE2FB4;
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82ce2ed4
	if (ctx.cr6.eq) goto loc_82CE2ED4;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ce2ed4
	if (!ctx.cr6.eq) goto loc_82CE2ED4;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82ce2ed4
	if (!ctx.cr0.eq) goto loc_82CE2ED4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r29,12(r25)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2ECC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE2ED4;
	__imp__KfLowerIrql(ctx, base);
loc_82CE2ED4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce2f18
	if (ctx.cr6.eq) goto loc_82CE2F18;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce2f18
	if (!ctx.cr6.eq) goto loc_82CE2F18;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82ce2f18
	if (!ctx.cr0.eq) goto loc_82CE2F18;
	// lbz r29,12(r24)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2F10;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE2F18;
	__imp__KfLowerIrql(ctx, base);
loc_82CE2F18:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x832b2c0c
	ctx.lr = 0x82CE2F38;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce2f58
	if (ctx.cr6.eq) goto loc_82CE2F58;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce2f68
	if (ctx.cr6.eq) goto loc_82CE2F68;
loc_82CE2F58:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE2F60;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r30.u32);
	// stb r29,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r29.u8);
loc_82CE2F68:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bl 0x832b2c0c
	ctx.lr = 0x82CE2F78;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce2f98
	if (ctx.cr6.eq) goto loc_82CE2F98;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce2fac
	if (ctx.cr6.eq) goto loc_82CE2FAC;
loc_82CE2F98:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE2FA0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r29.u8);
loc_82CE2FAC:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r7.u32);
loc_82CE2FB4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ce2e48
	if (!ctx.cr6.eq) goto loc_82CE2E48;
loc_82CE2FBC:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82ce3004
	if (ctx.cr6.eq) goto loc_82CE3004;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ce3004
	if (!ctx.cr6.eq) goto loc_82CE3004;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3004
	if (!ctx.cr0.eq) goto loc_82CE3004;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r25)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE2FFC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3004;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3004:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce3088
	if (ctx.cr6.eq) goto loc_82CE3088;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82cd36a8
	ctx.lr = 0x82CE3018;
	sub_82CD36A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ce3088
	if (ctx.cr6.eq) goto loc_82CE3088;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82cd42b8
	ctx.lr = 0x82CE3028;
	sub_82CD42B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82ce3088
	if (!ctx.cr6.lt) goto loc_82CE3088;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3078
	if (ctx.cr6.eq) goto loc_82CE3078;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3078
	if (!ctx.cr6.eq) goto loc_82CE3078;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3078
	if (!ctx.cr0.eq) goto loc_82CE3078;
	// lbz r30,12(r24)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE3070;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3078;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82CE3088:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce30cc
	if (ctx.cr6.eq) goto loc_82CE30CC;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce30cc
	if (!ctx.cr6.eq) goto loc_82CE30CC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82ce30cc
	if (!ctx.cr0.eq) goto loc_82CE30CC;
	// lbz r31,12(r24)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE30C4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE30CC;
	__imp__KfLowerIrql(ctx, base);
loc_82CE30CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82CE30DC"))) PPC_WEAK_FUNC(sub_82CE30DC);
PPC_FUNC_IMPL(__imp__sub_82CE30DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE30E0"))) PPC_WEAK_FUNC(sub_82CE30E0);
PPC_FUNC_IMPL(__imp__sub_82CE30E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CE30E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,312
	ctx.r4.s64 = 312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ce3130
	if (ctx.cr6.eq) goto loc_82CE3130;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ce24b0
	ctx.lr = 0x82CE3124;
	sub_82CE24B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ce3140
	if (!ctx.cr6.eq) goto loc_82CE3140;
loc_82CE3130:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CE3140:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ce316c
	if (ctx.cr6.lt) goto loc_82CE316C;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CE316C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CE318C"))) PPC_WEAK_FUNC(sub_82CE318C);
PPC_FUNC_IMPL(__imp__sub_82CE318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3190"))) PPC_WEAK_FUNC(sub_82CE3190);
PPC_FUNC_IMPL(__imp__sub_82CE3190) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce33a8
	sub_82CE33A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3198"))) PPC_WEAK_FUNC(sub_82CE3198);
PPC_FUNC_IMPL(__imp__sub_82CE3198) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce33a8
	sub_82CE33A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE31A0"))) PPC_WEAK_FUNC(sub_82CE31A0);
PPC_FUNC_IMPL(__imp__sub_82CE31A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE31B8"))) PPC_WEAK_FUNC(sub_82CE31B8);
PPC_FUNC_IMPL(__imp__sub_82CE31B8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addic. r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne 0x82ce31f0
	if (!ctx.cr0.eq) goto loc_82CE31F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE31EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CE31F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3200"))) PPC_WEAK_FUNC(sub_82CE3200);
PPC_FUNC_IMPL(__imp__sub_82CE3200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lhz r11,19944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 19944);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE321C"))) PPC_WEAK_FUNC(sub_82CE321C);
PPC_FUNC_IMPL(__imp__sub_82CE321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3220"))) PPC_WEAK_FUNC(sub_82CE3220);
PPC_FUNC_IMPL(__imp__sub_82CE3220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82cdffa8
	sub_82CDFFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3228"))) PPC_WEAK_FUNC(sub_82CE3228);
PPC_FUNC_IMPL(__imp__sub_82CE3228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82ce0260
	sub_82CE0260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3230"))) PPC_WEAK_FUNC(sub_82CE3230);
PPC_FUNC_IMPL(__imp__sub_82CE3230) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82cdfa78
	sub_82CDFA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3238"))) PPC_WEAK_FUNC(sub_82CE3238);
PPC_FUNC_IMPL(__imp__sub_82CE3238) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3248"))) PPC_WEAK_FUNC(sub_82CE3248);
PPC_FUNC_IMPL(__imp__sub_82CE3248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3258"))) PPC_WEAK_FUNC(sub_82CE3258);
PPC_FUNC_IMPL(__imp__sub_82CE3258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821f3c80
	ctx.lr = 0x82CE3274;
	sub_821F3C80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82CE32A0"))) PPC_WEAK_FUNC(sub_82CE32A0);
PPC_FUNC_IMPL(__imp__sub_82CE32A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE32B0"))) PPC_WEAK_FUNC(sub_82CE32B0);
PPC_FUNC_IMPL(__imp__sub_82CE32B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 108);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE32CC"))) PPC_WEAK_FUNC(sub_82CE32CC);
PPC_FUNC_IMPL(__imp__sub_82CE32CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE32D0"))) PPC_WEAK_FUNC(sub_82CE32D0);
PPC_FUNC_IMPL(__imp__sub_82CE32D0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE32FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce330c
	if (ctx.cr6.lt) goto loc_82CE330C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_82CE330C:
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

__attribute__((alias("__imp__sub_82CE3320"))) PPC_WEAK_FUNC(sub_82CE3320);
PPC_FUNC_IMPL(__imp__sub_82CE3320) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce3358
	if (ctx.cr6.eq) goto loc_82CE3358;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CE3358;
	sub_82CA2C60(ctx, base);
loc_82CE3358:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82ce336c
	if (ctx.cr6.eq) goto loc_82CE336C;
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82CE336C:
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

__attribute__((alias("__imp__sub_82CE3384"))) PPC_WEAK_FUNC(sub_82CE3384);
PPC_FUNC_IMPL(__imp__sub_82CE3384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3388"))) PPC_WEAK_FUNC(sub_82CE3388);
PPC_FUNC_IMPL(__imp__sub_82CE3388) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3394"))) PPC_WEAK_FUNC(sub_82CE3394);
PPC_FUNC_IMPL(__imp__sub_82CE3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3398"))) PPC_WEAK_FUNC(sub_82CE3398);
PPC_FUNC_IMPL(__imp__sub_82CE3398) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE33A0"))) PPC_WEAK_FUNC(sub_82CE33A0);
PPC_FUNC_IMPL(__imp__sub_82CE33A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82cd9520
	sub_82CD9520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE33A8"))) PPC_WEAK_FUNC(sub_82CE33A8);
PPC_FUNC_IMPL(__imp__sub_82CE33A8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,20448
	ctx.r8.s64 = ctx.r11.s64 + 20448;
	// addi r7,r10,20408
	ctx.r7.s64 = ctx.r10.s64 + 20408;
	// addi r6,r9,20312
	ctx.r6.s64 = ctx.r9.s64 + 20312;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bl 0x82cd9958
	ctx.lr = 0x82CE33E8;
	sub_82CD9958(ctx, base);
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

__attribute__((alias("__imp__sub_82CE3400"))) PPC_WEAK_FUNC(sub_82CE3400);
PPC_FUNC_IMPL(__imp__sub_82CE3400) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82cdff08
	ctx.lr = 0x82CE341C;
	sub_82CDFF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce344c
	if (ctx.cr6.lt) goto loc_82CE344C;
	// lbz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,197(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,20568
	ctx.r7.s64 = ctx.r10.s64 + 20568;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// sth r8,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r8.u16);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// sth r4,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r4.u16);
loc_82CE344C:
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

__attribute__((alias("__imp__sub_82CE3460"))) PPC_WEAK_FUNC(sub_82CE3460);
PPC_FUNC_IMPL(__imp__sub_82CE3460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE3468;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE347C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce34a4
	if (ctx.cr6.eq) goto loc_82CE34A4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce34b8
	if (ctx.cr6.eq) goto loc_82CE34B8;
loc_82CE34A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE34AC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE34B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f31,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// stfs f31,224(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 224, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3514
	if (ctx.cr6.eq) goto loc_82CE3514;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3514
	if (!ctx.cr6.eq) goto loc_82CE3514;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3514
	if (!ctx.cr0.eq) goto loc_82CE3514;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE350C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3514;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3514:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE3524"))) PPC_WEAK_FUNC(sub_82CE3524);
PPC_FUNC_IMPL(__imp__sub_82CE3524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3528"))) PPC_WEAK_FUNC(sub_82CE3528);
PPC_FUNC_IMPL(__imp__sub_82CE3528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE3530;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE3544;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce356c
	if (ctx.cr6.eq) goto loc_82CE356C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce3580
	if (ctx.cr6.eq) goto loc_82CE3580;
loc_82CE356C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE3574;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE3580:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfd f1,3552(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3552);
	// bl 0x821fe378
	ctx.lr = 0x82CE3598;
	sub_821FE378(ctx, base);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lbz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lbz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stb r8,197(r30)
	PPC_STORE_U8(ctx.r30.u32 + 197, ctx.r8.u8);
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// stb r6,196(r30)
	PPC_STORE_U8(ctx.r30.u32 + 196, ctx.r6.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r3,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r3.u32);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.f9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3630
	if (ctx.cr6.eq) goto loc_82CE3630;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3630
	if (!ctx.cr6.eq) goto loc_82CE3630;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3630
	if (!ctx.cr0.eq) goto loc_82CE3630;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE3628;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3630;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE3640"))) PPC_WEAK_FUNC(sub_82CE3640);
PPC_FUNC_IMPL(__imp__sub_82CE3640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE3648;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE365C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3684
	if (ctx.cr6.eq) goto loc_82CE3684;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce3698
	if (ctx.cr6.eq) goto loc_82CE3698;
loc_82CE3684:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE368C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE3698:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f31,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r6,16
	ctx.r6.s64 = 16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stb r7,196(r30)
	PPC_STORE_U8(ctx.r30.u32 + 196, ctx.r7.u8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stb r8,197(r30)
	PPC_STORE_U8(ctx.r30.u32 + 197, ctx.r8.u8);
	// lwz r5,264(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stw r4,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r4.u32);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.f10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3734
	if (ctx.cr6.eq) goto loc_82CE3734;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3734
	if (!ctx.cr6.eq) goto loc_82CE3734;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3734
	if (!ctx.cr0.eq) goto loc_82CE3734;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE372C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3734;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3734:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE3744"))) PPC_WEAK_FUNC(sub_82CE3744);
PPC_FUNC_IMPL(__imp__sub_82CE3744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3748"))) PPC_WEAK_FUNC(sub_82CE3748);
PPC_FUNC_IMPL(__imp__sub_82CE3748) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3230
	sub_82CE3230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3750"))) PPC_WEAK_FUNC(sub_82CE3750);
PPC_FUNC_IMPL(__imp__sub_82CE3750) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3400
	sub_82CE3400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3758"))) PPC_WEAK_FUNC(sub_82CE3758);
PPC_FUNC_IMPL(__imp__sub_82CE3758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce3200
	sub_82CE3200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3760"))) PPC_WEAK_FUNC(sub_82CE3760);
PPC_FUNC_IMPL(__imp__sub_82CE3760) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3220
	sub_82CE3220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3768"))) PPC_WEAK_FUNC(sub_82CE3768);
PPC_FUNC_IMPL(__imp__sub_82CE3768) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3238
	sub_82CE3238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3770"))) PPC_WEAK_FUNC(sub_82CE3770);
PPC_FUNC_IMPL(__imp__sub_82CE3770) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3460
	sub_82CE3460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3778"))) PPC_WEAK_FUNC(sub_82CE3778);
PPC_FUNC_IMPL(__imp__sub_82CE3778) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3320
	sub_82CE3320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3780"))) PPC_WEAK_FUNC(sub_82CE3780);
PPC_FUNC_IMPL(__imp__sub_82CE3780) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce32d0
	sub_82CE32D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3788"))) PPC_WEAK_FUNC(sub_82CE3788);
PPC_FUNC_IMPL(__imp__sub_82CE3788) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3528
	sub_82CE3528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3790"))) PPC_WEAK_FUNC(sub_82CE3790);
PPC_FUNC_IMPL(__imp__sub_82CE3790) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3248
	sub_82CE3248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3798"))) PPC_WEAK_FUNC(sub_82CE3798);
PPC_FUNC_IMPL(__imp__sub_82CE3798) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce0be8
	sub_82CE0BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE37A0"))) PPC_WEAK_FUNC(sub_82CE37A0);
PPC_FUNC_IMPL(__imp__sub_82CE37A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3228
	sub_82CE3228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE37A8"))) PPC_WEAK_FUNC(sub_82CE37A8);
PPC_FUNC_IMPL(__imp__sub_82CE37A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3640
	sub_82CE3640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE37B0"))) PPC_WEAK_FUNC(sub_82CE37B0);
PPC_FUNC_IMPL(__imp__sub_82CE37B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce0ab0
	sub_82CE0AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE37B8"))) PPC_WEAK_FUNC(sub_82CE37B8);
PPC_FUNC_IMPL(__imp__sub_82CE37B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3258
	sub_82CE3258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE37C0"))) PPC_WEAK_FUNC(sub_82CE37C0);
PPC_FUNC_IMPL(__imp__sub_82CE37C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE37C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE37D8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3800
	if (ctx.cr6.eq) goto loc_82CE3800;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce3814
	if (ctx.cr6.eq) goto loc_82CE3814;
loc_82CE3800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE3808;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE3814:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r7,108(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 108);
	// divwu r6,r8,r7
	ctx.r6.u32 = ctx.r8.u32 / ctx.r7.u32;
	// stw r9,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r9.u32);
	// twllei r7,0
	// stw r6,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r6.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3884
	if (ctx.cr6.eq) goto loc_82CE3884;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3884
	if (!ctx.cr6.eq) goto loc_82CE3884;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3884
	if (!ctx.cr0.eq) goto loc_82CE3884;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE387C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3884;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3884:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE3890"))) PPC_WEAK_FUNC(sub_82CE3890);
PPC_FUNC_IMPL(__imp__sub_82CE3890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE3898;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE38A4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce38cc
	if (ctx.cr6.eq) goto loc_82CE38CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce38e0
	if (ctx.cr6.eq) goto loc_82CE38E0;
loc_82CE38CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE38D4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE38E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ce3904
	if (!ctx.cr6.eq) goto loc_82CE3904;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82ce3918
	goto loc_82CE3918;
loc_82CE3904:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce3930
	if (ctx.cr6.eq) goto loc_82CE3930;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_82CE3918:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE392C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CE3930:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3978
	if (ctx.cr6.eq) goto loc_82CE3978;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3978
	if (!ctx.cr6.eq) goto loc_82CE3978;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3978
	if (!ctx.cr0.eq) goto loc_82CE3978;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE3970;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3978;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE3984"))) PPC_WEAK_FUNC(sub_82CE3984);
PPC_FUNC_IMPL(__imp__sub_82CE3984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3988"))) PPC_WEAK_FUNC(sub_82CE3988);
PPC_FUNC_IMPL(__imp__sub_82CE3988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE3990;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE39A0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce39c8
	if (ctx.cr6.eq) goto loc_82CE39C8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce39dc
	if (ctx.cr6.eq) goto loc_82CE39DC;
loc_82CE39C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE39D0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82CE39DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ce3a68
	if (ctx.cr6.eq) goto loc_82CE3A68;
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ce3a48
	if (!ctx.cr6.eq) goto loc_82CE3A48;
	// rlwinm r9,r10,0,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ce3a48
	if (!ctx.cr6.eq) goto loc_82CE3A48;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce3a68
	if (!ctx.cr6.eq) goto loc_82CE3A68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r11,19944(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 19944);
	// sth r11,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r11.u16);
	// b 0x82ce3a64
	goto loc_82CE3A64;
loc_82CE3A48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE3A64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CE3A68:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3ab0
	if (ctx.cr6.eq) goto loc_82CE3AB0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3ab0
	if (!ctx.cr6.eq) goto loc_82CE3AB0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3ab0
	if (!ctx.cr0.eq) goto loc_82CE3AB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE3AA8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3AB0;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE3ABC"))) PPC_WEAK_FUNC(sub_82CE3ABC);
PPC_FUNC_IMPL(__imp__sub_82CE3ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3AC0"))) PPC_WEAK_FUNC(sub_82CE3AC0);
PPC_FUNC_IMPL(__imp__sub_82CE3AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE3AC8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE3AD4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3afc
	if (ctx.cr6.eq) goto loc_82CE3AFC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ce3b14
	if (ctx.cr6.eq) goto loc_82CE3B14;
loc_82CE3AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE3B04;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82CE3B14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82ce3b60
	if (ctx.cr6.eq) goto loc_82CE3B60;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ce3b60
	if (ctx.cr6.eq) goto loc_82CE3B60;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CE3B60:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3ba4
	if (ctx.cr6.eq) goto loc_82CE3BA4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ce3ba4
	if (!ctx.cr6.eq) goto loc_82CE3BA4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3ba4
	if (!ctx.cr0.eq) goto loc_82CE3BA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE3B9C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3BA4;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3BA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE3BB0"))) PPC_WEAK_FUNC(sub_82CE3BB0);
PPC_FUNC_IMPL(__imp__sub_82CE3BB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// addi r10,r11,276
	ctx.r10.s64 = ctx.r11.s64 + 276;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3BC8"))) PPC_WEAK_FUNC(sub_82CE3BC8);
PPC_FUNC_IMPL(__imp__sub_82CE3BC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3ac0
	sub_82CE3AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3BD0"))) PPC_WEAK_FUNC(sub_82CE3BD0);
PPC_FUNC_IMPL(__imp__sub_82CE3BD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3988
	sub_82CE3988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3BD8"))) PPC_WEAK_FUNC(sub_82CE3BD8);
PPC_FUNC_IMPL(__imp__sub_82CE3BD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ce3890
	sub_82CE3890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3BE0"))) PPC_WEAK_FUNC(sub_82CE3BE0);
PPC_FUNC_IMPL(__imp__sub_82CE3BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE3BE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd9668
	ctx.lr = 0x82CE3C04;
	sub_82CD9668(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// addi r8,r11,20448
	ctx.r8.s64 = ctx.r11.s64 + 20448;
	// addi r7,r10,20408
	ctx.r7.s64 = ctx.r10.s64 + 20408;
	// addi r6,r9,20312
	ctx.r6.s64 = ctx.r9.s64 + 20312;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CE3C3C;
	sub_82CA3190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd93f8
	ctx.lr = 0x82CE3C58;
	sub_82CD93F8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,69(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// ori r11,r4,48000
	ctx.r11.u64 = ctx.r4.u64 | 48000;
	// lbz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r10,r3,20568
	ctx.r10.s64 = ctx.r3.s64 + 20568;
	// stw r8,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stb r6,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r6.u8);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stb r3,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r3.u8);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.f9.u32);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r5,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r5.u32);
	// lbz r4,197(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// lbz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// sth r9,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r8.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE3CF0"))) PPC_WEAK_FUNC(sub_82CE3CF0);
PPC_FUNC_IMPL(__imp__sub_82CE3CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CE3CF8;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r28,r5,-8
	ctx.r28.s64 = ctx.r5.s64 + -8;
	// bne cr6,0x82ce3d1c
	if (!ctx.cr6.eq) goto loc_82CE3D1C;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82CE3D1C:
	// bl 0x832b2c0c
	ctx.lr = 0x82CE3D20;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3d48
	if (ctx.cr6.eq) goto loc_82CE3D48;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce3d5c
	if (ctx.cr6.eq) goto loc_82CE3D5C;
loc_82CE3D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE3D50;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CE3D5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cd7d40
	ctx.lr = 0x82CE3D70;
	sub_82CD7D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ce3da0
	if (ctx.cr6.lt) goto loc_82CE3DA0;
	// lbz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82cd7eb8
	ctx.lr = 0x82CE3D94;
	sub_82CD7EB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ce3e78
	if (!ctx.cr6.lt) goto loc_82CE3E78;
loc_82CE3DA0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce3dec
	if (ctx.cr6.eq) goto loc_82CE3DEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce3dec
	if (!ctx.cr6.eq) goto loc_82CE3DEC;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3dec
	if (!ctx.cr0.eq) goto loc_82CE3DEC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE3DE4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3DEC;
	__imp__KfLowerIrql(ctx, base);
loc_82CE3DEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82ce43f4
	if (!ctx.cr6.eq) goto loc_82CE43F4;
loc_82CE3DF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82cdd5d8
	ctx.lr = 0x82CE3E04;
	sub_82CDD5D8(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_82CE3E08:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ce4068
	if (ctx.cr6.eq) goto loc_82CE4068;
	// lwz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// lwz r10,192(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ce4068
	if (!ctx.cr0.eq) goto loc_82CE4068;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce4048
	if (ctx.cr6.eq) goto loc_82CE4048;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ce3e40
	if (ctx.cr6.eq) goto loc_82CE3E40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
loc_82CE3E40:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r11,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
	// lwz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce4068
	if (ctx.cr6.eq) goto loc_82CE4068;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,36(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CE3E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ce4068
	goto loc_82CE4068;
loc_82CE3E78:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r23,212(r26)
	PPC_STORE_U32(ctx.r26.u32 + 212, ctx.r23.u32);
	// addi r30,r26,184
	ctx.r30.s64 = ctx.r26.s64 + 184;
	// stw r10,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r10.u32);
	// stw r11,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r11.u32);
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ce3fa8
	if (ctx.cr6.eq) goto loc_82CE3FA8;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce3fa8
	if (!ctx.cr6.eq) goto loc_82CE3FA8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82ce3f0c
	if (ctx.cr6.eq) goto loc_82CE3F0C;
	// lfs f0,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,224(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 224, temp.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stfs f13,36(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CE3EE0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82ce3ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CE3EE0;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE3F0C:
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce3f58
	if (ctx.cr6.eq) goto loc_82CE3F58;
	// lhz r10,174(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 174);
	// lfs f13,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r8,174(r26)
	PPC_STORE_U16(ctx.r26.u32 + 174, ctx.r8.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ce3f50
	if (ctx.cr6.eq) goto loc_82CE3F50;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,19948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82ce3f54
	goto loc_82CE3F54;
loc_82CE3F50:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82CE3F54:
	// stfs f0,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 224, temp.u32);
loc_82CE3F58:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce3df8
	if (ctx.cr6.eq) goto loc_82CE3DF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce3df8
	if (!ctx.cr6.eq) goto loc_82CE3DF8;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3df8
	if (!ctx.cr0.eq) goto loc_82CE3DF8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE3F9C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE3FA4;
	__imp__KfLowerIrql(ctx, base);
	// b 0x82ce3df8
	goto loc_82CE3DF8;
loc_82CE3FA8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lbz r29,13(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ce3fec
	if (ctx.cr0.eq) goto loc_82CE3FEC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ce3fec
	if (ctx.cr6.eq) goto loc_82CE3FEC;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CE3FCC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CE3FE0;
	sub_82CA3190(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82ce3fcc
	if (!ctx.cr0.eq) goto loc_82CE3FCC;
loc_82CE3FEC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce4038
	if (ctx.cr6.eq) goto loc_82CE4038;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce4038
	if (!ctx.cr6.eq) goto loc_82CE4038;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce4038
	if (!ctx.cr0.eq) goto loc_82CE4038;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE4030;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE4038;
	__imp__KfLowerIrql(ctx, base);
loc_82CE4038:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82CE4048:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82CE4068:
	// lwz r11,208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// addi r28,r26,184
	ctx.r28.s64 = ctx.r26.s64 + 184;
	// lwz r10,212(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ce426c
	if (ctx.cr0.eq) goto loc_82CE426C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ce416c
	if (!ctx.cr6.eq) goto loc_82CE416C;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE4088;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce40a8
	if (ctx.cr6.eq) goto loc_82CE40A8;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ce40c0
	if (ctx.cr6.eq) goto loc_82CE40C0;
loc_82CE40A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE40B0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82CE40C0:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce40e4
	if (ctx.cr6.eq) goto loc_82CE40E4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82ce40e8
	goto loc_82CE40E8;
loc_82CE40E4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82CE40E8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce4128
	if (ctx.cr6.eq) goto loc_82CE4128;
	// lbz r10,117(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 117);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce4128
	if (!ctx.cr6.eq) goto loc_82CE4128;
	// lwz r10,272(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce4114
	if (ctx.cr6.eq) goto loc_82CE4114;
	// stw r23,272(r26)
	PPC_STORE_U32(ctx.r26.u32 + 272, ctx.r23.u32);
	// b 0x82ce411c
	goto loc_82CE411C;
loc_82CE4114:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r10.u32);
loc_82CE411C:
	// stb r24,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r24.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82CE4128:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce416c
	if (ctx.cr6.eq) goto loc_82CE416C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ce416c
	if (!ctx.cr6.eq) goto loc_82CE416C;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce416c
	if (!ctx.cr0.eq) goto loc_82CE416C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE4164;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE416C;
	__imp__KfLowerIrql(ctx, base);
loc_82CE416C:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ce426c
	if (ctx.cr6.eq) goto loc_82CE426C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce418c
	if (ctx.cr6.eq) goto loc_82CE418C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x82ce4190
	goto loc_82CE4190;
loc_82CE418C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_82CE4190:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r27,120(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bge cr6,0x82ce41ac
	if (!ctx.cr6.lt) goto loc_82CE41AC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82CE41AC:
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce7730
	ctx.lr = 0x82CE41B8;
	sub_82CE7730(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE41C0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce41e0
	if (ctx.cr6.eq) goto loc_82CE41E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce41f4
	if (ctx.cr6.eq) goto loc_82CE41F4;
loc_82CE41E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE41E8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CE41F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce4210
	if (!ctx.cr6.eq) goto loc_82CE4210;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stw r11,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
loc_82CE4210:
	// lwz r11,168(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,168(r26)
	PPC_STORE_U32(ctx.r26.u32 + 168, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce3e08
	if (ctx.cr6.eq) goto loc_82CE3E08;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce3e08
	if (!ctx.cr6.eq) goto loc_82CE3E08;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce3e08
	if (!ctx.cr0.eq) goto loc_82CE3E08;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE4260;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE4268;
	__imp__KfLowerIrql(ctx, base);
	// b 0x82ce3e08
	goto loc_82CE3E08;
loc_82CE426C:
	// bl 0x832b2c0c
	ctx.lr = 0x82CE4270;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce4290
	if (ctx.cr6.eq) goto loc_82CE4290;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce42a4
	if (ctx.cr6.eq) goto loc_82CE42A4;
loc_82CE4290:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE4298;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CE42A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r26,184
	ctx.r30.s64 = ctx.r26.s64 + 184;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 220, temp.u32);
	// lbz r29,197(r26)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r26.u32 + 197);
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// lwz r10,208(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ce4364
	if (ctx.cr0.eq) goto loc_82CE4364;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ce42fc
	if (ctx.cr6.eq) goto loc_82CE42FC;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CE42DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CE42F0;
	sub_82CA3190(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82ce42dc
	if (!ctx.cr0.eq) goto loc_82CE42DC;
loc_82CE42FC:
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce434c
	if (!ctx.cr6.eq) goto loc_82CE434C;
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce432c
	if (ctx.cr6.eq) goto loc_82CE432C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ce4364
	if (!ctx.cr6.eq) goto loc_82CE4364;
loc_82CE432C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ce4364
	goto loc_82CE4364;
loc_82CE434C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE4364:
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce43a4
	if (ctx.cr6.eq) goto loc_82CE43A4;
	// lhz r10,174(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 174);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce438c
	if (ctx.cr6.eq) goto loc_82CE438C;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce43a4
	if (ctx.cr6.eq) goto loc_82CE43A4;
loc_82CE438C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE43A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE43A4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ce43f0
	if (ctx.cr6.eq) goto loc_82CE43F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ce43f0
	if (!ctx.cr6.eq) goto loc_82CE43F0;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce43f0
	if (!ctx.cr0.eq) goto loc_82CE43F0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE43E8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE43F0;
	__imp__KfLowerIrql(ctx, base);
loc_82CE43F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CE43F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82CE4400"))) PPC_WEAK_FUNC(sub_82CE4400);
PPC_FUNC_IMPL(__imp__sub_82CE4400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CE4408;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,276
	ctx.r4.s64 = 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ce4460
	if (ctx.cr6.eq) goto loc_82CE4460;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ce3be0
	ctx.lr = 0x82CE4444;
	sub_82CE3BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce4460
	if (ctx.cr6.eq) goto loc_82CE4460;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CE4460:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CE4470"))) PPC_WEAK_FUNC(sub_82CE4470);
PPC_FUNC_IMPL(__imp__sub_82CE4470) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,20584
	ctx.r10.s64 = ctx.r11.s64 + 20584;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ce62c0
	ctx.lr = 0x82CE4498;
	sub_82CE62C0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce44c4
	if (ctx.cr6.eq) goto loc_82CE44C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE44BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
loc_82CE44C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce5ba0
	ctx.lr = 0x82CE44CC;
	sub_82CE5BA0(ctx, base);
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

__attribute__((alias("__imp__sub_82CE44E0"))) PPC_WEAK_FUNC(sub_82CE44E0);
PPC_FUNC_IMPL(__imp__sub_82CE44E0) {
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
	// bl 0x82ce67b8
	ctx.lr = 0x82CE4500;
	sub_82CE67B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce4524
	if (ctx.cr6.lt) goto loc_82CE4524;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE4524:
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

__attribute__((alias("__imp__sub_82CE453C"))) PPC_WEAK_FUNC(sub_82CE453C);
PPC_FUNC_IMPL(__imp__sub_82CE453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4540"))) PPC_WEAK_FUNC(sub_82CE4540);
PPC_FUNC_IMPL(__imp__sub_82CE4540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,28900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// b 0x82cdb3c0
	sub_82CDB3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE454C"))) PPC_WEAK_FUNC(sub_82CE454C);
PPC_FUNC_IMPL(__imp__sub_82CE454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4550"))) PPC_WEAK_FUNC(sub_82CE4550);
PPC_FUNC_IMPL(__imp__sub_82CE4550) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ce45b4
	if (ctx.cr6.lt) goto loc_82CE45B4;
	// beq cr6,0x82ce45a0
	if (ctx.cr6.eq) goto loc_82CE45A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ce45b8
	goto loc_82CE45B8;
loc_82CE45A0:
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ce45b8
	goto loc_82CE45B8;
loc_82CE45B4:
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
loc_82CE45B8:
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

__attribute__((alias("__imp__sub_82CE45D0"))) PPC_WEAK_FUNC(sub_82CE45D0);
PPC_FUNC_IMPL(__imp__sub_82CE45D0) {
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
	// bl 0x82ce4470
	ctx.lr = 0x82CE45E8;
	sub_82CE4470(ctx, base);
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

__attribute__((alias("__imp__sub_82CE4600"))) PPC_WEAK_FUNC(sub_82CE4600);
PPC_FUNC_IMPL(__imp__sub_82CE4600) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r8,r10,48000
	ctx.r8.u64 = ctx.r10.u64 | 48000;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// beq cr6,0x82ce4664
	if (ctx.cr6.eq) goto loc_82CE4664;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_82CE4664:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce6680
	ctx.lr = 0x82CE4670;
	sub_82CE6680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce4710
	if (ctx.cr6.lt) goto loc_82CE4710;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE46A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ce46c0
	if (ctx.cr6.eq) goto loc_82CE46C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cd8390
	ctx.lr = 0x82CE46BC;
	sub_82CD8390(ctx, base);
	// b 0x82ce46c4
	goto loc_82CE46C4;
loc_82CE46C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CE46C4:
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ce46dc
	if (!ctx.cr6.eq) goto loc_82CE46DC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ce4710
	goto loc_82CE4710;
loc_82CE46DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE46F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce4710
	if (ctx.cr6.lt) goto loc_82CE4710;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE4710:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82CE4728"))) PPC_WEAK_FUNC(sub_82CE4728);
PPC_FUNC_IMPL(__imp__sub_82CE4728) {
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
	// bl 0x82ce59d0
	ctx.lr = 0x82CE4744;
	sub_82CE59D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82ce4760
	if (ctx.cr6.lt) goto loc_82CE4760;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cd7fe0
	ctx.lr = 0x82CE4760;
	sub_82CD7FE0(ctx, base);
loc_82CE4760:
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

__attribute__((alias("__imp__sub_82CE477C"))) PPC_WEAK_FUNC(sub_82CE477C);
PPC_FUNC_IMPL(__imp__sub_82CE477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4780"))) PPC_WEAK_FUNC(sub_82CE4780);
PPC_FUNC_IMPL(__imp__sub_82CE4780) {
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
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce47bc
	if (ctx.cr6.eq) goto loc_82CE47BC;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82CE47BC:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cd7fe0
	ctx.lr = 0x82CE47CC;
	sub_82CD7FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce6098
	ctx.lr = 0x82CE47D4;
	sub_82CE6098(ctx, base);
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

__attribute__((alias("__imp__sub_82CE47E8"))) PPC_WEAK_FUNC(sub_82CE47E8);
PPC_FUNC_IMPL(__imp__sub_82CE47E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE47F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE47FC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce4824
	if (ctx.cr6.eq) goto loc_82CE4824;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ce483c
	if (ctx.cr6.eq) goto loc_82CE483C;
loc_82CE4824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE482C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82CE483C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce4878
	if (ctx.cr6.eq) goto loc_82CE4878;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CE4878:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce48bc
	if (ctx.cr6.eq) goto loc_82CE48BC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ce48bc
	if (!ctx.cr6.eq) goto loc_82CE48BC;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce48bc
	if (!ctx.cr0.eq) goto loc_82CE48BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE48B4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE48BC;
	__imp__KfLowerIrql(ctx, base);
loc_82CE48BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE48C8"))) PPC_WEAK_FUNC(sub_82CE48C8);
PPC_FUNC_IMPL(__imp__sub_82CE48C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r7,r9,48000
	ctx.r7.u64 = ctx.r9.u64 | 48000;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r8,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r8.u8);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// beq cr6,0x82ce4928
	if (ctx.cr6.eq) goto loc_82CE4928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_82CE4928:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ce5ab8
	ctx.lr = 0x82CE4934;
	sub_82CE5AB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce4948
	if (ctx.cr6.lt) goto loc_82CE4948;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CE4948:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE495C"))) PPC_WEAK_FUNC(sub_82CE495C);
PPC_FUNC_IMPL(__imp__sub_82CE495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4960"))) PPC_WEAK_FUNC(sub_82CE4960);
PPC_FUNC_IMPL(__imp__sub_82CE4960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE4968;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// bl 0x82ce4550
	ctx.lr = 0x82CE4980;
	sub_82CE4550(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ce4a44
	if (ctx.cr6.eq) goto loc_82CE4A44;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE4990;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce49b8
	if (ctx.cr6.eq) goto loc_82CE49B8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ce49cc
	if (ctx.cr6.eq) goto loc_82CE49CC;
loc_82CE49B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE49C0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CE49CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ce4a44
	if (ctx.cr6.eq) goto loc_82CE4A44;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ce4a44
	if (!ctx.cr6.eq) goto loc_82CE4A44;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce4a44
	if (!ctx.cr0.eq) goto loc_82CE4A44;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE4A3C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE4A44;
	__imp__KfLowerIrql(ctx, base);
loc_82CE4A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE4A50"))) PPC_WEAK_FUNC(sub_82CE4A50);
PPC_FUNC_IMPL(__imp__sub_82CE4A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE4A58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82ce48c8
	ctx.lr = 0x82CE4A74;
	sub_82CE48C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce4a88
	if (ctx.cr6.lt) goto loc_82CE4A88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// b 0x82ce4a8c
	goto loc_82CE4A8C;
loc_82CE4A88:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CE4A8C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce4b30
	if (ctx.cr6.lt) goto loc_82CE4B30;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x82ce4fe0
	ctx.lr = 0x82CE4AA8;
	sub_82CE4FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ce4b30
	if (ctx.cr6.lt) goto loc_82CE4B30;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ce4b10
	if (ctx.cr6.eq) goto loc_82CE4B10;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ce5e08
	ctx.lr = 0x82CE4AE4;
	sub_82CE5E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,20584
	ctx.r10.s64 = ctx.r11.s64 + 20584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ce4600
	ctx.lr = 0x82CE4AFC;
	sub_82CE4600(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ce4b1c
	if (ctx.cr6.lt) goto loc_82CE4B1C;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x82ce4b30
	goto loc_82CE4B30;
loc_82CE4B10:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ce4b30
	goto loc_82CE4B30;
loc_82CE4B1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE4B30:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ce4b4c
	if (ctx.cr6.eq) goto loc_82CE4B4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE4B4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE4B58"))) PPC_WEAK_FUNC(sub_82CE4B58);
PPC_FUNC_IMPL(__imp__sub_82CE4B58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE4B70"))) PPC_WEAK_FUNC(sub_82CE4B70);
PPC_FUNC_IMPL(__imp__sub_82CE4B70) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ce4bac
	if (!ctx.cr6.eq) goto loc_82CE4BAC;
loc_82CE4B94:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82CE4BAC:
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// bl 0x82cd9fc8
	ctx.lr = 0x82CE4BBC;
	sub_82CD9FC8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ce4b94
	if (!ctx.cr6.eq) goto loc_82CE4B94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
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

__attribute__((alias("__imp__sub_82CE4BE4"))) PPC_WEAK_FUNC(sub_82CE4BE4);
PPC_FUNC_IMPL(__imp__sub_82CE4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4BE8"))) PPC_WEAK_FUNC(sub_82CE4BE8);
PPC_FUNC_IMPL(__imp__sub_82CE4BE8) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r30,r10,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE4C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82ce4c28
	if (!ctx.cr6.gt) goto loc_82CE4C28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ce4c3c
	goto loc_82CE4C3C;
loc_82CE4C28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_82CE4C3C:
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

__attribute__((alias("__imp__sub_82CE4C54"))) PPC_WEAK_FUNC(sub_82CE4C54);
PPC_FUNC_IMPL(__imp__sub_82CE4C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4C58"))) PPC_WEAK_FUNC(sub_82CE4C58);
PPC_FUNC_IMPL(__imp__sub_82CE4C58) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,20732
	ctx.r9.s64 = ctx.r11.s64 + 20732;
	// addi r8,r10,20672
	ctx.r8.s64 = ctx.r10.s64 + 20672;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ce4cb0
	if (ctx.cr6.eq) goto loc_82CE4CB0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// bl 0x82cd9fd8
	ctx.lr = 0x82CE4CA8;
	sub_82CD9FD8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_82CE4CB0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,15792
	ctx.r10.s64 = ctx.r11.s64 + 15792;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82CE4CD4"))) PPC_WEAK_FUNC(sub_82CE4CD4);
PPC_FUNC_IMPL(__imp__sub_82CE4CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4CD8"))) PPC_WEAK_FUNC(sub_82CE4CD8);
PPC_FUNC_IMPL(__imp__sub_82CE4CD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce4d68
	sub_82CE4D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE4CE0"))) PPC_WEAK_FUNC(sub_82CE4CE0);
PPC_FUNC_IMPL(__imp__sub_82CE4CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE4CF0"))) PPC_WEAK_FUNC(sub_82CE4CF0);
PPC_FUNC_IMPL(__imp__sub_82CE4CF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce4dc8
	sub_82CE4DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE4CF8"))) PPC_WEAK_FUNC(sub_82CE4CF8);
PPC_FUNC_IMPL(__imp__sub_82CE4CF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ce4e40
	sub_82CE4E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE4D00"))) PPC_WEAK_FUNC(sub_82CE4D00);
PPC_FUNC_IMPL(__imp__sub_82CE4D00) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ce4d4c
	if (ctx.cr6.eq) goto loc_82CE4D4C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd9fd8
	ctx.lr = 0x82CE4D4C;
	sub_82CD9FD8(ctx, base);
loc_82CE4D4C:
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

__attribute__((alias("__imp__sub_82CE4D64"))) PPC_WEAK_FUNC(sub_82CE4D64);
PPC_FUNC_IMPL(__imp__sub_82CE4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4D68"))) PPC_WEAK_FUNC(sub_82CE4D68);
PPC_FUNC_IMPL(__imp__sub_82CE4D68) {
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
	// bl 0x82ce4c58
	ctx.lr = 0x82CE4D88;
	sub_82CE4C58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce4da8
	if (ctx.cr6.eq) goto loc_82CE4DA8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd9fd8
	ctx.lr = 0x82CE4DA8;
	sub_82CD9FD8(ctx, base);
loc_82CE4DA8:
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

__attribute__((alias("__imp__sub_82CE4DC4"))) PPC_WEAK_FUNC(sub_82CE4DC4);
PPC_FUNC_IMPL(__imp__sub_82CE4DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4DC8"))) PPC_WEAK_FUNC(sub_82CE4DC8);
PPC_FUNC_IMPL(__imp__sub_82CE4DC8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,20732
	ctx.r9.s64 = ctx.r11.s64 + 20732;
	// addi r8,r10,20692
	ctx.r8.s64 = ctx.r10.s64 + 20692;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x82ce4c58
	ctx.lr = 0x82CE4E00;
	sub_82CE4C58(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ce4e20
	if (ctx.cr6.eq) goto loc_82CE4E20;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd9fd8
	ctx.lr = 0x82CE4E20;
	sub_82CD9FD8(ctx, base);
loc_82CE4E20:
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

__attribute__((alias("__imp__sub_82CE4E3C"))) PPC_WEAK_FUNC(sub_82CE4E3C);
PPC_FUNC_IMPL(__imp__sub_82CE4E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4E40"))) PPC_WEAK_FUNC(sub_82CE4E40);
PPC_FUNC_IMPL(__imp__sub_82CE4E40) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,20732
	ctx.r9.s64 = ctx.r11.s64 + 20732;
	// addi r8,r10,20712
	ctx.r8.s64 = ctx.r10.s64 + 20712;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// bl 0x82ce4c58
	ctx.lr = 0x82CE4E78;
	sub_82CE4C58(ctx, base);
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

__attribute__((alias("__imp__sub_82CE4E90"))) PPC_WEAK_FUNC(sub_82CE4E90);
PPC_FUNC_IMPL(__imp__sub_82CE4E90) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82cd9fc8
	ctx.lr = 0x82CE4EB8;
	sub_82CD9FC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce4f24
	if (ctx.cr6.eq) goto loc_82CE4F24;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,15792
	ctx.r7.s64 = ctx.r10.s64 + 15792;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r5,r9,20732
	ctx.r5.s64 = ctx.r9.s64 + 20732;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r4,r8,20692
	ctx.r4.s64 = ctx.r8.s64 + 20692;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82CE4F24:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
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

__attribute__((alias("__imp__sub_82CE4F40"))) PPC_WEAK_FUNC(sub_82CE4F40);
PPC_FUNC_IMPL(__imp__sub_82CE4F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CE4F48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x82cd9fc8
	ctx.lr = 0x82CE4F6C;
	sub_82CD9FC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce4f88
	if (!ctx.cr6.eq) goto loc_82CE4F88;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CE4F88:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,15792
	ctx.r7.s64 = ctx.r10.s64 + 15792;
	// addi r5,r9,20732
	ctx.r5.s64 = ctx.r9.s64 + 20732;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r8,20712
	ctx.r4.s64 = ctx.r8.s64 + 20712;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CE4FDC"))) PPC_WEAK_FUNC(sub_82CE4FDC);
PPC_FUNC_IMPL(__imp__sub_82CE4FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4FE0"))) PPC_WEAK_FUNC(sub_82CE4FE0);
PPC_FUNC_IMPL(__imp__sub_82CE4FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE4FE8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ce5040
	if (!ctx.cr6.eq) goto loc_82CE5040;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82ce5020
	if (ctx.cr6.eq) goto loc_82CE5020;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce4f40
	ctx.lr = 0x82CE501C;
	sub_82CE4F40(ctx, base);
	// b 0x82ce5028
	goto loc_82CE5028;
loc_82CE5020:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce4e90
	ctx.lr = 0x82CE5028;
	sub_82CE4E90(ctx, base);
loc_82CE5028:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce5084
	if (ctx.cr6.lt) goto loc_82CE5084;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82CE5040:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE506C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CE5084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE5084:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE508C"))) PPC_WEAK_FUNC(sub_82CE508C);
PPC_FUNC_IMPL(__imp__sub_82CE508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE5090"))) PPC_WEAK_FUNC(sub_82CE5090);
PPC_FUNC_IMPL(__imp__sub_82CE5090) {
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
	// bl 0x82ce5e08
	ctx.lr = 0x82CE50A8;
	sub_82CE5E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,20760
	ctx.r10.s64 = ctx.r11.s64 + 20760;
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

__attribute__((alias("__imp__sub_82CE50CC"))) PPC_WEAK_FUNC(sub_82CE50CC);
PPC_FUNC_IMPL(__imp__sub_82CE50CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE50D0"))) PPC_WEAK_FUNC(sub_82CE50D0);
PPC_FUNC_IMPL(__imp__sub_82CE50D0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ce5aa0
	ctx.lr = 0x82CE50F0;
	sub_82CE5AA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82CE5120"))) PPC_WEAK_FUNC(sub_82CE5120);
PPC_FUNC_IMPL(__imp__sub_82CE5120) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ce5ab8
	ctx.lr = 0x82CE5144;
	sub_82CE5AB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce51bc
	if (ctx.cr6.lt) goto loc_82CE51BC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r9,25(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lwz r11,28900(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28900);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82cdba80
	ctx.lr = 0x82CE518C;
	sub_82CDBA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce51bc
	if (ctx.cr6.lt) goto loc_82CE51BC;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_82CE51BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82CE51D4"))) PPC_WEAK_FUNC(sub_82CE51D4);
PPC_FUNC_IMPL(__imp__sub_82CE51D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE51D8"))) PPC_WEAK_FUNC(sub_82CE51D8);
PPC_FUNC_IMPL(__imp__sub_82CE51D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE51E0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// bl 0x82ce6680
	ctx.lr = 0x82CE51F8;
	sub_82CE6680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce52d4
	if (ctx.cr6.lt) goto loc_82CE52D4;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce5240
	if (ctx.cr6.eq) goto loc_82CE5240;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE5230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ce52dc
	if (ctx.cr6.eq) goto loc_82CE52DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CE5240:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce52b4
	if (ctx.cr6.eq) goto loc_82CE52B4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,25(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r30,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// beq cr6,0x82ce52b4
	if (ctx.cr6.eq) goto loc_82CE52B4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82CE527C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce52d4
	if (ctx.cr6.lt) goto loc_82CE52D4;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82ce5c70
	ctx.lr = 0x82CE52A0;
	sub_82CE5C70(ctx, base);
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ce527c
	if (ctx.cr6.lt) goto loc_82CE527C;
loc_82CE52B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce52d4
	if (ctx.cr6.lt) goto loc_82CE52D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE52D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE52D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82CE52DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE52EC"))) PPC_WEAK_FUNC(sub_82CE52EC);
PPC_FUNC_IMPL(__imp__sub_82CE52EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE52F0"))) PPC_WEAK_FUNC(sub_82CE52F0);
PPC_FUNC_IMPL(__imp__sub_82CE52F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CE52F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ce5318
	if (!ctx.cr6.eq) goto loc_82CE5318;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r11,-21952
	ctx.r31.s64 = ctx.r11.s64 + -21952;
loc_82CE5318:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce532c
	if (ctx.cr6.eq) goto loc_82CE532C;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82ce533c
	goto loc_82CE533C;
loc_82CE532C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,28900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28900);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82CE533C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ce5390
	if (!ctx.cr6.eq) goto loc_82CE5390;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce53a8
	if (ctx.cr6.lt) goto loc_82CE53A8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,53(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// bl 0x82cd2660
	ctx.lr = 0x82CE538C;
	sub_82CD2660(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CE5390:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE53A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE53A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CE53B0"))) PPC_WEAK_FUNC(sub_82CE53B0);
PPC_FUNC_IMPL(__imp__sub_82CE53B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE53B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce5404
	if (ctx.cr6.eq) goto loc_82CE5404;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82CE53D8:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE53F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,69(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ce53d8
	if (ctx.cr6.lt) goto loc_82CE53D8;
loc_82CE5404:
	// stb r28,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE5410"))) PPC_WEAK_FUNC(sub_82CE5410);
PPC_FUNC_IMPL(__imp__sub_82CE5410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CE5418;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,61(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 61);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r27,r9,31
	ctx.r27.u64 = ctx.r9.u32 & 0x1;
	// beq cr6,0x82ce54a0
	if (ctx.cr6.eq) goto loc_82CE54A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CE5448:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce54a0
	if (ctx.cr6.lt) goto loc_82CE54A0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE548C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ce5448
	if (ctx.cr6.lt) goto loc_82CE5448;
loc_82CE54A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CE54A8"))) PPC_WEAK_FUNC(sub_82CE54A8);
PPC_FUNC_IMPL(__imp__sub_82CE54A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE54B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,20760
	ctx.r10.s64 = ctx.r11.s64 + 20760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ce62c0
	ctx.lr = 0x82CE54CC;
	sub_82CE62C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce53b0
	ctx.lr = 0x82CE54D4;
	sub_82CE53B0(ctx, base);
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x82ce5534
	if (ctx.cr6.eq) goto loc_82CE5534;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CE54EC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ce5520
	if (ctx.cr6.eq) goto loc_82CE5520;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
loc_82CE5520:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ce54ec
	if (ctx.cr6.lt) goto loc_82CE54EC;
loc_82CE5534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce5ba0
	ctx.lr = 0x82CE553C;
	sub_82CE5BA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE5544"))) PPC_WEAK_FUNC(sub_82CE5544);
PPC_FUNC_IMPL(__imp__sub_82CE5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE5548"))) PPC_WEAK_FUNC(sub_82CE5548);
PPC_FUNC_IMPL(__imp__sub_82CE5548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CE5550;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82ce53b0
	ctx.lr = 0x82CE5564;
	sub_82CE53B0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ce55dc
	if (ctx.cr6.eq) goto loc_82CE55DC;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce55c8
	if (ctx.cr6.eq) goto loc_82CE55C8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CE5584:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82ce55d0
	if (ctx.cr6.lt) goto loc_82CE55D0;
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82ce52f0
	ctx.lr = 0x82CE55A4;
	sub_82CE52F0(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ce5584
	if (ctx.cr6.lt) goto loc_82CE5584;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82ce55d0
	if (ctx.cr6.lt) goto loc_82CE55D0;
loc_82CE55C8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// stb r11,69(r28)
	PPC_STORE_U8(ctx.r28.u32 + 69, ctx.r11.u8);
loc_82CE55D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82CE55D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82CE55DC:
	// lbz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce55d0
	if (ctx.cr6.eq) goto loc_82CE55D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,72(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce52f0
	ctx.lr = 0x82CE55F8;
	sub_82CE52F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce55d4
	if (ctx.cr6.lt) goto loc_82CE55D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,69(r28)
	PPC_STORE_U8(ctx.r28.u32 + 69, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CE5610"))) PPC_WEAK_FUNC(sub_82CE5610);
PPC_FUNC_IMPL(__imp__sub_82CE5610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE5618;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82ce67b8
	ctx.lr = 0x82CE5628;
	sub_82CE67B8(ctx, base);
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce5698
	if (ctx.cr6.eq) goto loc_82CE5698;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CE563C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce5698
	if (ctx.cr6.lt) goto loc_82CE5698;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE5660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CE5684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,69(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ce563c
	if (ctx.cr6.lt) goto loc_82CE563C;
loc_82CE5698:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE56A0"))) PPC_WEAK_FUNC(sub_82CE56A0);
PPC_FUNC_IMPL(__imp__sub_82CE56A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CE56A8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x832b2c0c
	ctx.lr = 0x82CE56B4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce56dc
	if (ctx.cr6.eq) goto loc_82CE56DC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ce56f4
	if (ctx.cr6.eq) goto loc_82CE56F4;
loc_82CE56DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CE56E4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82CE56F4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ce5730
	if (ctx.cr6.eq) goto loc_82CE5730;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CE5730:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ce5774
	if (ctx.cr6.eq) goto loc_82CE5774;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ce5774
	if (!ctx.cr6.eq) goto loc_82CE5774;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82ce5774
	if (!ctx.cr0.eq) goto loc_82CE5774;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x832b2c3c
	ctx.lr = 0x82CE576C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CE5774;
	__imp__KfLowerIrql(ctx, base);
loc_82CE5774:
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce57dc
	if (ctx.cr6.eq) goto loc_82CE57DC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CE578C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ce57dc
	if (ctx.cr6.lt) goto loc_82CE57DC;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// beq 0x82ce57b4
	if (ctx.cr0.eq) goto loc_82CE57B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ce57c8
	goto loc_82CE57C8;
loc_82CE57B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE57C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CE57C8:
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ce578c
	if (ctx.cr6.lt) goto loc_82CE578C;
loc_82CE57DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CE57E4"))) PPC_WEAK_FUNC(sub_82CE57E4);
PPC_FUNC_IMPL(__imp__sub_82CE57E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE57E8"))) PPC_WEAK_FUNC(sub_82CE57E8);
PPC_FUNC_IMPL(__imp__sub_82CE57E8) {
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
	// bl 0x82ce54a8
	ctx.lr = 0x82CE5808;
	sub_82CE54A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ce5828
	if (ctx.cr6.eq) goto loc_82CE5828;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd9fd8
	ctx.lr = 0x82CE5828;
	sub_82CD9FD8(ctx, base);
loc_82CE5828:
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

__attribute__((alias("__imp__sub_82CE5844"))) PPC_WEAK_FUNC(sub_82CE5844);
PPC_FUNC_IMPL(__imp__sub_82CE5844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

