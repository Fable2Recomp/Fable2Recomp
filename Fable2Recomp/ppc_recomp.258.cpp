#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F74EB8"))) PPC_WEAK_FUNC(sub_82F74EB8);
PPC_FUNC_IMPL(__imp__sub_82F74EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F74EC0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f75114
	if (!ctx.cr6.eq) goto loc_82F75114;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r25,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r25.u8);
	// bne 0x82f7508c
	if (!ctx.cr0.eq) goto loc_82F7508C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-38
	ctx.r11.s64 = ctx.r11.s64 + -38;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7508c
	if (ctx.cr0.eq) goto loc_82F7508C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f75080
	goto loc_82F75080;
loc_82F74F2C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x82f74f64
	if (!ctx.cr6.eq) goto loc_82F74F64;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f74f58
	if (ctx.cr0.eq) goto loc_82F74F58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f74f5c
	if (ctx.cr6.eq) goto loc_82F74F5C;
loc_82F74F58:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F74F5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7509c
	if (ctx.cr0.eq) goto loc_82F7509C;
loc_82F74F64:
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82ca6bd0
	ctx.lr = 0x82F74F6C;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f74fb8
	if (ctx.cr0.eq) goto loc_82F74FB8;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f74fb8
	if (ctx.cr0.eq) goto loc_82F74FB8;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f74fa0
	if (!ctx.cr0.eq) goto loc_82F74FA0;
	// stw r26,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f6e098
	ctx.lr = 0x82F74F9C;
	sub_82F6E098(ctx, base);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82F74FA0:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6e108
	ctx.lr = 0x82F74FAC;
	sub_82F6E108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71a40
	ctx.lr = 0x82F74FB4;
	sub_82F71A40(ctx, base);
	// b 0x82f7508c
	goto loc_82F7508C;
loc_82F74FB8:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f74fd8
	if (ctx.cr0.eq) goto loc_82F74FD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f74fdc
	if (ctx.cr6.eq) goto loc_82F74FDC;
loc_82F74FD8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F74FDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75014
	if (ctx.cr0.eq) goto loc_82F75014;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f75004
	if (!ctx.cr0.eq) goto loc_82F75004;
	// stw r26,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f6e098
	ctx.lr = 0x82F75000;
	sub_82F6E098(ctx, base);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82F75004:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82f6e108
	ctx.lr = 0x82F75010;
	sub_82F6E108(ctx, base);
	// b 0x82f7504c
	goto loc_82F7504C;
loc_82F75014:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x82f75038
	if (ctx.cr0.eq) goto loc_82F75038;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82f6e098
	ctx.lr = 0x82F75034;
	sub_82F6E098(ctx, base);
	// b 0x82f7504c
	goto loc_82F7504C;
loc_82F75038:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F7504C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82f75070
	if (ctx.cr0.eq) goto loc_82F75070;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f75074
	if (ctx.cr6.eq) goto loc_82F75074;
loc_82F75070:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F75074:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82f75088
	if (ctx.cr0.eq) goto loc_82F75088;
loc_82F75080:
	// bl 0x82f701f8
	ctx.lr = 0x82F75084;
	sub_82F701F8(ctx, base);
	// b 0x82f7508c
	goto loc_82F7508C;
loc_82F75088:
	// bl 0x82f6d388
	ctx.lr = 0x82F7508C;
	sub_82F6D388(ctx, base);
loc_82F7508C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f74f2c
	if (ctx.cr6.lt) goto loc_82F74F2C;
loc_82F7509C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f750b4
	if (ctx.cr0.eq) goto loc_82F750B4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F750B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f75104
	if (!ctx.cr6.lt) goto loc_82F75104;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82f750fc
	if (!ctx.cr6.eq) goto loc_82F750FC;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f750f0
	if (ctx.cr0.eq) goto loc_82F750F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f750f4
	if (ctx.cr6.eq) goto loc_82F750F4;
loc_82F750F0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F750F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75104
	if (ctx.cr0.eq) goto loc_82F75104;
loc_82F750FC:
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x82f75110
	goto loc_82F75110;
loc_82F75104:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F75110:
	// stb r26,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r26.u8);
loc_82F75114:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F75130"))) PPC_WEAK_FUNC(sub_82F75130);
PPC_FUNC_IMPL(__imp__sub_82F75130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F75138;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f75154
	if (!ctx.cr6.eq) goto loc_82F75154;
loc_82F7514C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f75378
	goto loc_82F75378;
loc_82F75154:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f751ac
	if (!ctx.cr0.eq) goto loc_82F751AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f752a0
	if (ctx.cr6.eq) goto loc_82F752A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82f75260
	if (ctx.cr6.eq) goto loc_82F75260;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82f751fc
	if (ctx.cr6.eq) goto loc_82F751FC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82f751ac
	if (!ctx.cr6.gt) goto loc_82F751AC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82f752a8
	if (!ctx.cr6.gt) goto loc_82F752A8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82f751ac
	if (!ctx.cr6.eq) goto loc_82F751AC;
loc_82F7518C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82f751ac
	if (!ctx.cr6.eq) goto loc_82F751AC;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82f71528
	ctx.lr = 0x82F751A0;
	sub_82F71528(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32770
	ctx.r11.u64 = ctx.r11.u64 | 32770;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F751AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f7514c
	if (ctx.cr6.eq) goto loc_82F7514C;
loc_82F751B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f75360
	if (!ctx.cr6.lt) goto loc_82F75360;
loc_82F751D0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f75370
	if (!ctx.cr6.eq) goto loc_82F75370;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f75344
	if (ctx.cr6.eq) goto loc_82F75344;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82f75308
	if (ctx.cr6.eq) goto loc_82F75308;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82f752c8
	if (ctx.cr6.eq) goto loc_82F752C8;
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x82f75348
	goto loc_82F75348;
loc_82F751FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82f75228
	goto loc_82F75228;
loc_82F7520C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82f75230
	if (ctx.cr6.eq) goto loc_82F75230;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F75220;
	sub_82F71528(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82F75228:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f7520c
	if (ctx.cr6.lt) goto loc_82F7520C;
loc_82F75230:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82f75254
	if (!ctx.cr6.eq) goto loc_82F75254;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F75244;
	sub_82F71528(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
loc_82F7524C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f751b8
	goto loc_82F751B8;
loc_82F75254:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f7514c
	goto loc_82F7514C;
loc_82F75260:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82f7528c
	goto loc_82F7528C;
loc_82F75270:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82f75294
	if (ctx.cr6.eq) goto loc_82F75294;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F75284;
	sub_82F71528(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82F7528C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f75270
	if (ctx.cr6.lt) goto loc_82F75270;
loc_82F75294:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32771
	ctx.r11.u64 = ctx.r11.u64 | 32771;
	// b 0x82f7524c
	goto loc_82F7524C;
loc_82F752A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f71fb0
	ctx.lr = 0x82F752A8;
	sub_82F71FB0(ctx, base);
loc_82F752A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82f752bc
	if (ctx.cr6.eq) goto loc_82F752BC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82f7518c
	if (!ctx.cr6.eq) goto loc_82F7518C;
loc_82F752BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f72160
	ctx.lr = 0x82F752C4;
	sub_82F72160(ctx, base);
	// b 0x82f752a8
	goto loc_82F752A8;
loc_82F752C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F752D0;
	sub_82F71528(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x82f752e8
	if (!ctx.cr6.eq) goto loc_82F752E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f720b8
	ctx.lr = 0x82F752E4;
	sub_82F720B8(ctx, base);
	// b 0x82f75348
	goto loc_82F75348;
loc_82F752E8:
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82f75300
	if (!ctx.cr6.eq) goto loc_82F75300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F752F8;
	sub_82F71528(ctx, base);
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x82f75348
	goto loc_82F75348;
loc_82F75300:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82f75348
	goto loc_82F75348;
loc_82F75308:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82f7531c
	if (ctx.cr6.eq) goto loc_82F7531C;
	// cmplwi cr6,r11,32770
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32770, ctx.xer);
	// bne cr6,0x82f75348
	if (!ctx.cr6.eq) goto loc_82F75348;
loc_82F7531C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F75324;
	sub_82F71528(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82f75344
	if (!ctx.cr6.eq) goto loc_82F75344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F75338;
	sub_82F71528(ctx, base);
	// lis r29,0
	ctx.r29.s64 = 0;
	// ori r29,r29,32773
	ctx.r29.u64 = ctx.r29.u64 | 32773;
	// b 0x82f75348
	goto loc_82F75348;
loc_82F75344:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F75348:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f751d0
	if (ctx.cr6.lt) goto loc_82F751D0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f75370
	if (!ctx.cr6.eq) goto loc_82F75370;
loc_82F75360:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f75374
	goto loc_82F75374;
loc_82F75370:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82F75374:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82F75378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F75380"))) PPC_WEAK_FUNC(sub_82F75380);
PPC_FUNC_IMPL(__imp__sub_82F75380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F75388;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f753ac
	if (!ctx.cr6.eq) goto loc_82F753AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f75464
	goto loc_82F75464;
loc_82F753AC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82f753bc
	if (!ctx.cr6.eq) goto loc_82F753BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f72160
	ctx.lr = 0x82F753BC;
	sub_82F72160(ctx, base);
loc_82F753BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82f75448
	if (!ctx.cr6.eq) goto loc_82F75448;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_82F753D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f75448
	if (!ctx.cr6.lt) goto loc_82F75448;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f722b8
	ctx.lr = 0x82F753F0;
	sub_82F722B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f72048
	ctx.lr = 0x82F753F8;
	sub_82F72048(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7543c
	if (!ctx.cr6.lt) goto loc_82F7543C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82f75434
	if (!ctx.cr6.eq) goto loc_82F75434;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F7541C;
	sub_82F71528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f72048
	ctx.lr = 0x82F75424;
	sub_82F72048(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f7543c
	goto loc_82F7543C;
loc_82F75434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f72160
	ctx.lr = 0x82F7543C;
	sub_82F72160(ctx, base);
loc_82F7543C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82f753d0
	if (ctx.cr6.eq) goto loc_82F753D0;
loc_82F75448:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f75460
	if (ctx.cr6.lt) goto loc_82F75460;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F75460:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82F75464:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F7546C"))) PPC_WEAK_FUNC(sub_82F7546C);
PPC_FUNC_IMPL(__imp__sub_82F7546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F75470"))) PPC_WEAK_FUNC(sub_82F75470);
PPC_FUNC_IMPL(__imp__sub_82F75470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F75478;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82f75628
	if (!ctx.cr6.eq) goto loc_82F75628;
	// lwz r24,16(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r24,34
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 34, ctx.xer);
	// beq cr6,0x82f754b0
	if (ctx.cr6.eq) goto loc_82F754B0;
	// cmplwi cr6,r24,39
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 39, ctx.xer);
	// bne cr6,0x82f755ec
	if (!ctx.cr6.eq) goto loc_82F755EC;
loc_82F754B0:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F754BC;
	sub_82F71528(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r25,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r25.u8);
	// bne 0x82f755b0
	if (!ctx.cr0.eq) goto loc_82F755B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,-38
	ctx.r11.s64 = ctx.r11.s64 + -38;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f755b0
	if (ctx.cr0.eq) goto loc_82F755B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f70698
	ctx.lr = 0x82F754FC;
	sub_82F70698(ctx, base);
	// b 0x82f755b0
	goto loc_82F755B0;
loc_82F75500:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82f755c0
	if (ctx.cr6.eq) goto loc_82F755C0;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f7552c
	if (ctx.cr0.eq) goto loc_82F7552C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f75530
	if (ctx.cr6.eq) goto loc_82F75530;
loc_82F7552C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F75530:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75568
	if (ctx.cr0.eq) goto loc_82F75568;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f75558
	if (!ctx.cr0.eq) goto loc_82F75558;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f6e290
	ctx.lr = 0x82F75554;
	sub_82F6E290(ctx, base);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82F75558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f6e308
	ctx.lr = 0x82F75564;
	sub_82F6E308(ctx, base);
	// b 0x82f755a8
	goto loc_82F755A8;
loc_82F75568:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq 0x82f75590
	if (ctx.cr0.eq) goto loc_82F75590;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x82f6e290
	ctx.lr = 0x82F7558C;
	sub_82F6E290(ctx, base);
	// b 0x82f755a8
	goto loc_82F755A8;
loc_82F75590:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F755A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F755B0;
	sub_82F71528(ctx, base);
loc_82F755B0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f75500
	if (ctx.cr6.lt) goto loc_82F75500;
loc_82F755C0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r26,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r26.u8);
	// beq 0x82f755dc
	if (ctx.cr0.eq) goto loc_82F755DC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F755DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f755f4
	if (ctx.cr6.lt) goto loc_82F755F4;
loc_82F755EC:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x82f75628
	goto loc_82F75628;
loc_82F755F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F75600;
	sub_82F71528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f72048
	ctx.lr = 0x82F75608;
	sub_82F72048(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82f75620
	if (ctx.cr6.eq) goto loc_82F75620;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne cr6,0x82f75624
	if (!ctx.cr6.eq) goto loc_82F75624;
loc_82F75620:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82F75624:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F75628:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f7563c
	if (ctx.cr6.lt) goto loc_82F7563C;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_82F7563C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F75648"))) PPC_WEAK_FUNC(sub_82F75648);
PPC_FUNC_IMPL(__imp__sub_82F75648) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f756c4
	if (!ctx.cr6.eq) goto loc_82F756C4;
	// bl 0x82f722b8
	ctx.lr = 0x82F75674;
	sub_82F722B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82f7569c
	if (!ctx.cr6.eq) goto loc_82F7569C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// ori r11,r11,32770
	ctx.r11.u64 = ctx.r11.u64 | 32770;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f71528
	ctx.lr = 0x82F75698;
	sub_82F71528(ctx, base);
	// b 0x82f756c4
	goto loc_82F756C4;
loc_82F7569C:
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82f756b4
	if (!ctx.cr6.eq) goto loc_82F756B4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32770
	ctx.r11.u64 = ctx.r11.u64 | 32770;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f756c4
	goto loc_82F756C4;
loc_82F756B4:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f72048
	ctx.lr = 0x82F756C4;
	sub_82F72048(ctx, base);
loc_82F756C4:
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

__attribute__((alias("__imp__sub_82F756E0"))) PPC_WEAK_FUNC(sub_82F756E0);
PPC_FUNC_IMPL(__imp__sub_82F756E0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82f7573c
	if (!ctx.cr6.eq) goto loc_82F7573C;
	// bl 0x82f722b8
	ctx.lr = 0x82F7570C;
	sub_82F722B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82f75734
	if (!ctx.cr6.eq) goto loc_82F75734;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f71528
	ctx.lr = 0x82F7572C;
	sub_82F71528(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82f7573c
	goto loc_82F7573C;
loc_82F75734:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F7573C:
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

__attribute__((alias("__imp__sub_82F75758"))) PPC_WEAK_FUNC(sub_82F75758);
PPC_FUNC_IMPL(__imp__sub_82F75758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F75760;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f75984
	if (!ctx.cr6.eq) goto loc_82F75984;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r25,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r25.u8);
	// bne 0x82f758fc
	if (!ctx.cr0.eq) goto loc_82F758FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,-38
	ctx.r11.s64 = ctx.r11.s64 + -38;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f758fc
	if (ctx.cr0.eq) goto loc_82F758FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f70698
	ctx.lr = 0x82F757C8;
	sub_82F70698(ctx, base);
	// b 0x82f758fc
	goto loc_82F758FC;
loc_82F757CC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x82f75804
	if (!ctx.cr6.eq) goto loc_82F75804;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f757f8
	if (ctx.cr0.eq) goto loc_82F757F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f757fc
	if (ctx.cr6.eq) goto loc_82F757FC;
loc_82F757F8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F757FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7590c
	if (ctx.cr0.eq) goto loc_82F7590C;
loc_82F75804:
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82ca6bd0
	ctx.lr = 0x82F7580C;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f75858
	if (ctx.cr0.eq) goto loc_82F75858;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f75858
	if (ctx.cr0.eq) goto loc_82F75858;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f75840
	if (!ctx.cr0.eq) goto loc_82F75840;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f6e290
	ctx.lr = 0x82F7583C;
	sub_82F6E290(ctx, base);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82F75840:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6e308
	ctx.lr = 0x82F7584C;
	sub_82F6E308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f72048
	ctx.lr = 0x82F75854;
	sub_82F72048(ctx, base);
	// b 0x82f758fc
	goto loc_82F758FC;
loc_82F75858:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f75878
	if (ctx.cr0.eq) goto loc_82F75878;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f7587c
	if (ctx.cr6.eq) goto loc_82F7587C;
loc_82F75878:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F7587C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f758b4
	if (ctx.cr0.eq) goto loc_82F758B4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f758a4
	if (!ctx.cr0.eq) goto loc_82F758A4;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f6e290
	ctx.lr = 0x82F758A0;
	sub_82F6E290(ctx, base);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82F758A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f6e308
	ctx.lr = 0x82F758B0;
	sub_82F6E308(ctx, base);
	// b 0x82f758f4
	goto loc_82F758F4;
loc_82F758B4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq 0x82f758dc
	if (ctx.cr0.eq) goto loc_82F758DC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x82f6e290
	ctx.lr = 0x82F758D8;
	sub_82F6E290(ctx, base);
	// b 0x82f758f4
	goto loc_82F758F4;
loc_82F758DC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F758F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71528
	ctx.lr = 0x82F758FC;
	sub_82F71528(ctx, base);
loc_82F758FC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f757cc
	if (ctx.cr6.lt) goto loc_82F757CC;
loc_82F7590C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75924
	if (ctx.cr0.eq) goto loc_82F75924;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F75924:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f75974
	if (!ctx.cr6.lt) goto loc_82F75974;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82f7596c
	if (!ctx.cr6.eq) goto loc_82F7596C;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f75960
	if (ctx.cr0.eq) goto loc_82F75960;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f75964
	if (ctx.cr6.eq) goto loc_82F75964;
loc_82F75960:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F75964:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75974
	if (ctx.cr0.eq) goto loc_82F75974;
loc_82F7596C:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x82f75980
	goto loc_82F75980;
loc_82F75974:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F75980:
	// stb r26,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r26.u8);
loc_82F75984:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F759A0"))) PPC_WEAK_FUNC(sub_82F759A0);
PPC_FUNC_IMPL(__imp__sub_82F759A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f75a10
	if (ctx.cr6.eq) goto loc_82F75A10;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f75a10
	if (!ctx.cr6.eq) goto loc_82F75A10;
loc_82F759D4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f759f4
	if (!ctx.cr6.eq) goto loc_82F759F4;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F759F4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f75a10
	if (ctx.cr6.eq) goto loc_82F75A10;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f759d4
	goto loc_82F759D4;
loc_82F75A10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F75A18"))) PPC_WEAK_FUNC(sub_82F75A18);
PPC_FUNC_IMPL(__imp__sub_82F75A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F75A20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82f71428
	ctx.lr = 0x82F75A3C;
	sub_82F71428(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f75a6c
	if (!ctx.cr6.lt) goto loc_82F75A6C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82caa2e0
	ctx.lr = 0x82F75A6C;
	sub_82CAA2E0(ctx, base);
loc_82F75A6C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f75a84
	if (ctx.cr0.eq) goto loc_82F75A84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6fc18
	ctx.lr = 0x82F75A84;
	sub_82F6FC18(ctx, base);
loc_82F75A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F75A8C"))) PPC_WEAK_FUNC(sub_82F75A8C);
PPC_FUNC_IMPL(__imp__sub_82F75A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F75A90"))) PPC_WEAK_FUNC(sub_82F75A90);
PPC_FUNC_IMPL(__imp__sub_82F75A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F75A98;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f75ac4
	if (ctx.cr6.eq) goto loc_82F75AC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F75AC4:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f75af0
	if (ctx.cr6.eq) goto loc_82F75AF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f75af0
	if (!ctx.cr0.eq) goto loc_82F75AF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F75AE8;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F75AF0;
	sub_82EF6F38(ctx, base);
loc_82F75AF0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F75B04"))) PPC_WEAK_FUNC(sub_82F75B04);
PPC_FUNC_IMPL(__imp__sub_82F75B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F75B08"))) PPC_WEAK_FUNC(sub_82F75B08);
PPC_FUNC_IMPL(__imp__sub_82F75B08) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82F75B28;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,-6656
	ctx.r11.s64 = ctx.r11.s64 + -6656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82F75B44:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f75b44
	if (!ctx.cr0.eq) goto loc_82F75B44;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f75b7c
	if (ctx.cr6.eq) goto loc_82F75B7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F75B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F75B7C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f75b9c
	if (ctx.cr6.eq) goto loc_82F75B9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F75B9C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r31,37
	ctx.r3.s64 = ctx.r31.s64 + 37;
	// addi r4,r30,37
	ctx.r4.s64 = ctx.r30.s64 + 37;
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// sth r11,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// bl 0x82ca2c60
	ctx.lr = 0x82F75BDC;
	sub_82CA2C60(ctx, base);
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

__attribute__((alias("__imp__sub_82F75BF8"))) PPC_WEAK_FUNC(sub_82F75BF8);
PPC_FUNC_IMPL(__imp__sub_82F75BF8) {
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
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75c30
	if (ctx.cr0.eq) goto loc_82F75C30;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// b 0x82f75c40
	goto loc_82F75C40;
loc_82F75C30:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82F75C40:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f75c74
	if (ctx.cr0.eq) goto loc_82F75C74;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f75c74
	if (ctx.cr6.eq) goto loc_82F75C74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f75c74
	if (!ctx.cr0.eq) goto loc_82F75C74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F75C6C;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F75C74;
	sub_82EF6F38(ctx, base);
loc_82F75C74:
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

__attribute__((alias("__imp__sub_82F75C90"))) PPC_WEAK_FUNC(sub_82F75C90);
PPC_FUNC_IMPL(__imp__sub_82F75C90) {
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
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f75cd4
	if (ctx.cr6.eq) goto loc_82F75CD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f75cd4
	if (!ctx.cr0.eq) goto loc_82F75CD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F75CCC;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F75CD4;
	sub_82EF6F38(ctx, base);
loc_82F75CD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// andi. r11,r11,63487
	ctx.r11.u64 = ctx.r11.u64 & 63487;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82F75D00"))) PPC_WEAK_FUNC(sub_82F75D00);
PPC_FUNC_IMPL(__imp__sub_82F75D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F75D08;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f75d48
	if (ctx.cr6.eq) goto loc_82F75D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f75d48
	if (!ctx.cr0.eq) goto loc_82F75D48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F75D40;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F75D48;
	sub_82EF6F38(ctx, base);
loc_82F75D48:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F75D54"))) PPC_WEAK_FUNC(sub_82F75D54);
PPC_FUNC_IMPL(__imp__sub_82F75D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F75D58"))) PPC_WEAK_FUNC(sub_82F75D58);
PPC_FUNC_IMPL(__imp__sub_82F75D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F75D60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82f75d98
	if (!ctx.cr6.eq) goto loc_82F75D98;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82F75D7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f75d7c
	if (!ctx.cr6.eq) goto loc_82F75D7C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82F75D98:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75df0
	if (ctx.cr0.eq) goto loc_82F75DF0;
	// addi r4,r30,37
	ctx.r4.s64 = ctx.r30.s64 + 37;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F75DB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f75db0
	if (!ctx.cr6.eq) goto loc_82F75DB0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f75de8
	if (!ctx.cr6.eq) goto loc_82F75DE8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef7358
	ctx.lr = 0x82F75DE0;
	sub_82EF7358(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f75df0
	if (ctx.cr0.eq) goto loc_82F75DF0;
loc_82F75DE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f75c90
	ctx.lr = 0x82F75DF0;
	sub_82F75C90(ctx, base);
loc_82F75DF0:
	// cmplwi cr6,r31,50
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 50, ctx.xer);
	// ble cr6,0x82f75dfc
	if (!ctx.cr6.gt) goto loc_82F75DFC;
	// li r31,50
	ctx.r31.s64 = 50;
loc_82F75DFC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,37
	ctx.r3.s64 = ctx.r30.s64 + 37;
	// bl 0x82ca2c60
	ctx.lr = 0x82F75E0C;
	sub_82CA2C60(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F75E2C"))) PPC_WEAK_FUNC(sub_82F75E2C);
PPC_FUNC_IMPL(__imp__sub_82F75E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F75E30"))) PPC_WEAK_FUNC(sub_82F75E30);
PPC_FUNC_IMPL(__imp__sub_82F75E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F75E38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82f75e5c
	if (!ctx.cr6.eq) goto loc_82F75E5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f040d0
	ctx.lr = 0x82F75E58;
	sub_82F040D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F75E5C:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75ee4
	if (ctx.cr0.eq) goto loc_82F75EE4;
	// addi r11,r30,37
	ctx.r11.s64 = ctx.r30.s64 + 37;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82F75E74:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f75e74
	if (!ctx.cr6.eq) goto loc_82F75E74;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f75ee4
	if (ctx.cr6.eq) goto loc_82F75EE4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f75ee4
	if (ctx.cr6.eq) goto loc_82F75EE4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// subfic r8,r30,-37
	ctx.xer.ca = ctx.r30.u32 <= 4294967259;
	ctx.r8.s64 = -37 - ctx.r30.s64;
loc_82F75EA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f75ee4
	if (ctx.cr0.eq) goto loc_82F75EE4;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82f75edc
	if (!ctx.cr6.eq) goto loc_82F75EDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f75ea8
	if (ctx.cr6.lt) goto loc_82F75EA8;
	// b 0x82f75ee4
	goto loc_82F75EE4;
loc_82F75EDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f75c90
	ctx.lr = 0x82F75EE4;
	sub_82F75C90(ctx, base);
loc_82F75EE4:
	// cmplwi cr6,r31,50
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 50, ctx.xer);
	// ble cr6,0x82f75ef0
	if (!ctx.cr6.gt) goto loc_82F75EF0;
	// li r31,50
	ctx.r31.s64 = 50;
loc_82F75EF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f75f1c
	if (ctx.cr6.eq) goto loc_82F75F1C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r30,37
	ctx.r9.s64 = ctx.r30.s64 + 37;
loc_82F75F04:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f75f04
	if (ctx.cr6.lt) goto loc_82F75F04;
loc_82F75F1C:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F75F3C"))) PPC_WEAK_FUNC(sub_82F75F3C);
PPC_FUNC_IMPL(__imp__sub_82F75F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F75F40"))) PPC_WEAK_FUNC(sub_82F75F40);
PPC_FUNC_IMPL(__imp__sub_82F75F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F75F48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f75f68
	if (ctx.cr6.eq) goto loc_82F75F68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F75F68:
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f75f94
	if (ctx.cr6.eq) goto loc_82F75F94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f75f94
	if (!ctx.cr0.eq) goto loc_82F75F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F75F8C;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F75F94;
	sub_82EF6F38(ctx, base);
loc_82F75F94:
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F75FAC"))) PPC_WEAK_FUNC(sub_82F75FAC);
PPC_FUNC_IMPL(__imp__sub_82F75FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F75FB0"))) PPC_WEAK_FUNC(sub_82F75FB0);
PPC_FUNC_IMPL(__imp__sub_82F75FB0) {
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
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f75ff4
	if (ctx.cr0.eq) goto loc_82F75FF4;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f75ff4
	if (ctx.cr6.eq) goto loc_82F75FF4;
	// bl 0x82f75c90
	ctx.lr = 0x82F75FF4;
	sub_82F75C90(ctx, base);
loc_82F75FF4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76008
	if (ctx.cr0.eq) goto loc_82F76008;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82f76010
	goto loc_82F76010;
loc_82F76008:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82F76010:
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82F76038"))) PPC_WEAK_FUNC(sub_82F76038);
PPC_FUNC_IMPL(__imp__sub_82F76038) {
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
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7607c
	if (ctx.cr0.eq) goto loc_82F7607C;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f7607c
	if (ctx.cr6.eq) goto loc_82F7607C;
	// bl 0x82f75c90
	ctx.lr = 0x82F7607C;
	sub_82F75C90(ctx, base);
loc_82F7607C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76090
	if (ctx.cr0.eq) goto loc_82F76090;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82f76098
	goto loc_82F76098;
loc_82F76090:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F76098:
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82F760C0"))) PPC_WEAK_FUNC(sub_82F760C0);
PPC_FUNC_IMPL(__imp__sub_82F760C0) {
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
	// bl 0x82f75b08
	ctx.lr = 0x82F760E0;
	sub_82F75B08(ctx, base);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76100
	if (ctx.cr0.eq) goto loc_82F76100;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f75fb0
	ctx.lr = 0x82F76100;
	sub_82F75FB0(ctx, base);
loc_82F76100:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76120
	if (ctx.cr0.eq) goto loc_82F76120;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bl 0x82f76038
	ctx.lr = 0x82F76120;
	sub_82F76038(ctx, base);
loc_82F76120:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76160
	if (ctx.cr0.eq) goto loc_82F76160;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76148
	if (ctx.cr0.eq) goto loc_82F76148;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82f76150
	goto loc_82F76150;
loc_82F76148:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F76150:
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_82F76160:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f761a0
	if (ctx.cr0.eq) goto loc_82F761A0;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76188
	if (ctx.cr0.eq) goto loc_82F76188;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82f76190
	goto loc_82F76190;
loc_82F76188:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F76190:
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_82F761A0:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f761c8
	if (ctx.cr0.eq) goto loc_82F761C8;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lhz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwimi r11,r10,0,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// sth r10,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r10.u16);
loc_82F761C8:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f761f4
	if (ctx.cr0.eq) goto loc_82F761F4;
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lhz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_82F761F4:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76218
	if (ctx.cr0.eq) goto loc_82F76218;
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// lhz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// sth r10,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r10.u16);
loc_82F76218:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76250
	if (ctx.cr0.eq) goto loc_82F76250;
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ble cr6,0x82f76240
	if (!ctx.cr6.gt) goto loc_82F76240;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F76240:
	// lhz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// sth r11,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_82F76250:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76270
	if (ctx.cr0.eq) goto loc_82F76270;
	// addi r4,r30,37
	ctx.r4.s64 = ctx.r30.s64 + 37;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f75d58
	ctx.lr = 0x82F76270;
	sub_82F75D58(ctx, base);
loc_82F76270:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76294
	if (ctx.cr0.eq) goto loc_82F76294;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f75bf8
	ctx.lr = 0x82F76288;
	sub_82F75BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f75f40
	ctx.lr = 0x82F76294;
	sub_82F75F40(ctx, base);
loc_82F76294:
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f762b8
	if (ctx.cr0.eq) goto loc_82F762B8;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ef7e30
	ctx.lr = 0x82F762AC;
	sub_82EF7E30(ctx, base);
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_82F762B8:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f762dc
	if (ctx.cr0.eq) goto loc_82F762DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6e6e0
	ctx.lr = 0x82F762D0;
	sub_82F6E6E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6e660
	ctx.lr = 0x82F762DC;
	sub_82F6E660(ctx, base);
loc_82F762DC:
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

__attribute__((alias("__imp__sub_82F762F8"))) PPC_WEAK_FUNC(sub_82F762F8);
PPC_FUNC_IMPL(__imp__sub_82F762F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F76300;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82f08b70
	ctx.lr = 0x82F76314;
	sub_82F08B70(ctx, base);
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76354
	if (ctx.cr0.eq) goto loc_82F76354;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76354
	if (ctx.cr0.eq) goto loc_82F76354;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lbz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f76354
	if (!ctx.cr6.eq) goto loc_82F76354;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f75fb0
	ctx.lr = 0x82F76354;
	sub_82F75FB0(ctx, base);
loc_82F76354:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7639c
	if (ctx.cr0.eq) goto loc_82F7639C;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7639c
	if (ctx.cr0.eq) goto loc_82F7639C;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lbz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7639c
	if (!ctx.cr0.eq) goto loc_82F7639C;
	// rlwinm r4,r11,31,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f76038
	ctx.lr = 0x82F7639C;
	sub_82F76038(ctx, base);
loc_82F7639C:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76404
	if (ctx.cr0.eq) goto loc_82F76404;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76404
	if (ctx.cr0.eq) goto loc_82F76404;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lbz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f76404
	if (!ctx.cr0.eq) goto loc_82F76404;
	// rlwinm. r11,r11,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f763ec
	if (ctx.cr0.eq) goto loc_82F763EC;
	// lbz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82f763f4
	goto loc_82F763F4;
loc_82F763EC:
	// lbz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F763F4:
	// stb r11,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r11.u8);
	// lhz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// sth r11,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r11.u16);
loc_82F76404:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7646c
	if (ctx.cr0.eq) goto loc_82F7646C;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7646c
	if (ctx.cr0.eq) goto loc_82F7646C;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lbz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7646c
	if (!ctx.cr0.eq) goto loc_82F7646C;
	// rlwinm. r11,r11,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76454
	if (ctx.cr0.eq) goto loc_82F76454;
	// lbz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82f7645c
	goto loc_82F7645C;
loc_82F76454:
	// lbz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F7645C:
	// stb r11,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r11.u8);
	// lhz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// sth r11,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r11.u16);
loc_82F7646C:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f764ac
	if (ctx.cr0.eq) goto loc_82F764AC;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f764ac
	if (ctx.cr0.eq) goto loc_82F764AC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f764ac
	if (!ctx.cr6.eq) goto loc_82F764AC;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lhz r9,88(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// rlwimi r11,r10,0,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// sth r10,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r10.u16);
loc_82F764AC:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f764f8
	if (ctx.cr0.eq) goto loc_82F764F8;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f764f8
	if (ctx.cr0.eq) goto loc_82F764F8;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lbz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f764f8
	if (!ctx.cr6.eq) goto loc_82F764F8;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lhz r9,88(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// sth r11,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r11.u16);
loc_82F764F8:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7656c
	if (ctx.cr0.eq) goto loc_82F7656C;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7656c
	if (ctx.cr0.eq) goto loc_82F7656C;
	// lha r10,32(r29)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 32));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lfs f0,2736(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82f7656c
	if (!ctx.cr6.eq) goto loc_82F7656C;
	// lhz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// sth r11,32(r28)
	PPC_STORE_U16(ctx.r28.u32 + 32, ctx.r11.u16);
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r11.u16);
loc_82F7656C:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f765c0
	if (ctx.cr0.eq) goto loc_82F765C0;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f765c0
	if (ctx.cr0.eq) goto loc_82F765C0;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lhz r10,34(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f765c0
	if (!ctx.cr6.eq) goto loc_82F765C0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ble cr6,0x82f765b0
	if (!ctx.cr6.gt) goto loc_82F765B0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F765B0:
	// lhz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// sth r11,34(r28)
	PPC_STORE_U16(ctx.r28.u32 + 34, ctx.r11.u16);
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// sth r11,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r11.u16);
loc_82F765C0:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76624
	if (ctx.cr0.eq) goto loc_82F76624;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76624
	if (ctx.cr0.eq) goto loc_82F76624;
	// addi r30,r31,37
	ctx.r30.s64 = ctx.r31.s64 + 37;
	// addi r3,r29,37
	ctx.r3.s64 = ctx.r29.s64 + 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ef7350
	ctx.lr = 0x82F765F0;
	sub_82EF7350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f76624
	if (!ctx.cr0.eq) goto loc_82F76624;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76610
	if (ctx.cr0.eq) goto loc_82F76610;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82f76618
	goto loc_82F76618;
loc_82F76610:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_82F76618:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f75d58
	ctx.lr = 0x82F76624;
	sub_82F75D58(ctx, base);
loc_82F76624:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76674
	if (ctx.cr0.eq) goto loc_82F76674;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76674
	if (ctx.cr0.eq) goto loc_82F76674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f75bf8
	ctx.lr = 0x82F7664C;
	sub_82F75BF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f75bf8
	ctx.lr = 0x82F76658;
	sub_82F75BF8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f76674
	if (!ctx.cr6.eq) goto loc_82F76674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f75bf8
	ctx.lr = 0x82F76668;
	sub_82F75BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f75f40
	ctx.lr = 0x82F76674;
	sub_82F75F40(ctx, base);
loc_82F76674:
	// lbz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f766c4
	if (ctx.cr0.eq) goto loc_82F766C4;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f766c4
	if (ctx.cr0.eq) goto loc_82F766C4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef7350
	ctx.lr = 0x82F766A4;
	sub_82EF7350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f766c4
	if (!ctx.cr0.eq) goto loc_82F766C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82ef7e30
	ctx.lr = 0x82F766B8;
	sub_82EF7E30(ctx, base);
	// lhz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// sth r11,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r11.u16);
loc_82F766C4:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76714
	if (ctx.cr0.eq) goto loc_82F76714;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76714
	if (ctx.cr0.eq) goto loc_82F76714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6e6e0
	ctx.lr = 0x82F766EC;
	sub_82F6E6E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6e6e0
	ctx.lr = 0x82F766F8;
	sub_82F6E6E0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f76714
	if (!ctx.cr6.eq) goto loc_82F76714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6e6e0
	ctx.lr = 0x82F76708;
	sub_82F6E6E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6e660
	ctx.lr = 0x82F76714;
	sub_82F6E660(ctx, base);
loc_82F76714:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F76720"))) PPC_WEAK_FUNC(sub_82F76720);
PPC_FUNC_IMPL(__imp__sub_82F76720) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,12412
	ctx.r4.s64 = ctx.r10.s64 + 12412;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lhz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// sth r9,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r9.u16);
	// bl 0x82f75d58
	ctx.lr = 0x82F7675C;
	sub_82F75D58(ctx, base);
	// li r11,240
	ctx.r11.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// bl 0x82f75fb0
	ctx.lr = 0x82F7677C;
	sub_82F75FB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f76038
	ctx.lr = 0x82F76788;
	sub_82F76038(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// andi. r10,r10,243
	ctx.r10.u64 = ctx.r10.u64 & 243;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// oris r9,r9,65280
	ctx.r9.u64 = ctx.r9.u64 | 4278190080;
	// stb r10,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r10.u8);
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// andi. r11,r11,64317
	ctx.r11.u64 = ctx.r11.u64 & 64317;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// bl 0x82ef77a8
	ctx.lr = 0x82F767C4;
	sub_82EF77A8(ctx, base);
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// andi. r11,r11,65279
	ctx.r11.u64 = ctx.r11.u64 & 65279;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82F767E4"))) PPC_WEAK_FUNC(sub_82F767E4);
PPC_FUNC_IMPL(__imp__sub_82F767E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F767E8"))) PPC_WEAK_FUNC(sub_82F767E8);
PPC_FUNC_IMPL(__imp__sub_82F767E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F767F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f76810
	if (!ctx.cr6.eq) goto loc_82F76810;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f76844
	goto loc_82F76844;
loc_82F76810:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6f050
	ctx.lr = 0x82F76820;
	sub_82F6F050(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82f742e0
	ctx.lr = 0x82F76834;
	sub_82F742E0(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
loc_82F76844:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F7684C"))) PPC_WEAK_FUNC(sub_82F7684C);
PPC_FUNC_IMPL(__imp__sub_82F7684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76850"))) PPC_WEAK_FUNC(sub_82F76850);
PPC_FUNC_IMPL(__imp__sub_82F76850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F76858;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f7687c
	if (!ctx.cr6.eq) goto loc_82F7687C;
	// bl 0x82f73b38
	ctx.lr = 0x82F76878;
	sub_82F73B38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82F7687C:
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r24,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r24.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// subf r28,r31,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x82f72d98
	ctx.lr = 0x82F768A0;
	sub_82F72D98(ctx, base);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F768AC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f768cc
	if (ctx.cr6.eq) goto loc_82F768CC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82f768cc
	if (ctx.cr6.lt) goto loc_82F768CC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82f768d0
	if (ctx.cr6.lt) goto loc_82F768D0;
loc_82F768CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F768D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7696c
	if (!ctx.cr0.eq) goto loc_82F7696C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f7696c
	if (ctx.cr6.eq) goto loc_82F7696C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f7690c
	if (ctx.cr6.eq) goto loc_82F7690C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F76900;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7690c
	if (ctx.cr0.eq) goto loc_82F7690C;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82F7690C:
	// subf r31,r27,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r27.s64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82f7691c
	if (!ctx.cr6.gt) goto loc_82F7691C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F7691C:
	// lwz r23,8(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82f6f050
	ctx.lr = 0x82F76934;
	sub_82F6F050(ctx, base);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82F76950;
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// subf r28,r31,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f768ac
	if (!ctx.cr6.lt) goto loc_82F768AC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x82f768ac
	goto loc_82F768AC;
loc_82F7696C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6f0e0
	ctx.lr = 0x82F76974;
	sub_82F6F0E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F7697C"))) PPC_WEAK_FUNC(sub_82F7697C);
PPC_FUNC_IMPL(__imp__sub_82F7697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76980"))) PPC_WEAK_FUNC(sub_82F76980);
PPC_FUNC_IMPL(__imp__sub_82F76980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f0,3080(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// sth r11,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r11.u16);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// sth r11,100(r3)
	PPC_STORE_U16(ctx.r3.u32 + 100, ctx.r11.u16);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stb r11,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F76A3C"))) PPC_WEAK_FUNC(sub_82F76A3C);
PPC_FUNC_IMPL(__imp__sub_82F76A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76A40"))) PPC_WEAK_FUNC(sub_82F76A40);
PPC_FUNC_IMPL(__imp__sub_82F76A40) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x82f71010
	ctx.lr = 0x82F76AB0;
	sub_82F71010(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// sth r30,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r30.u16);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
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
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
	// stb r30,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82F76B14"))) PPC_WEAK_FUNC(sub_82F76B14);
PPC_FUNC_IMPL(__imp__sub_82F76B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76B18"))) PPC_WEAK_FUNC(sub_82F76B18);
PPC_FUNC_IMPL(__imp__sub_82F76B18) {
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
	// lbz r11,329(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 329);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f76bcc
	if (ctx.cr0.eq) goto loc_82F76BCC;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f72bb0
	ctx.lr = 0x82F76B4C;
	sub_82F72BB0(ctx, base);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f76bcc
	if (ctx.cr0.eq) goto loc_82F76BCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f72bb0
	ctx.lr = 0x82F76B60;
	sub_82F72BB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,42
	ctx.r10.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r10.u16);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82f72bb0
	ctx.lr = 0x82F76B78;
	sub_82F72BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f76b9c
	if (ctx.cr6.eq) goto loc_82F76B9C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F76B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F76B9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f76bbc
	if (ctx.cr6.eq) goto loc_82F76BBC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F76BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F76BBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f76bd4
	goto loc_82F76BD4;
loc_82F76BCC:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82f72bb0
	ctx.lr = 0x82F76BD4;
	sub_82F72BB0(ctx, base);
loc_82F76BD4:
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

__attribute__((alias("__imp__sub_82F76BEC"))) PPC_WEAK_FUNC(sub_82F76BEC);
PPC_FUNC_IMPL(__imp__sub_82F76BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76BF0"))) PPC_WEAK_FUNC(sub_82F76BF0);
PPC_FUNC_IMPL(__imp__sub_82F76BF0) {
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
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f76c2c
	if (ctx.cr6.eq) goto loc_82F76C2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f76c2c
	if (!ctx.cr0.eq) goto loc_82F76C2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F76C24;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F76C2C;
	sub_82EF6F38(ctx, base);
loc_82F76C2C:
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

__attribute__((alias("__imp__sub_82F76C40"))) PPC_WEAK_FUNC(sub_82F76C40);
PPC_FUNC_IMPL(__imp__sub_82F76C40) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f76c74
	if (ctx.cr6.eq) goto loc_82F76C74;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F76C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F76C74:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f76c94
	if (ctx.cr6.eq) goto loc_82F76C94;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F76C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F76C94:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f76cc0
	if (ctx.cr6.eq) goto loc_82F76CC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f76cc0
	if (!ctx.cr0.eq) goto loc_82F76CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F76CB8;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F76CC0;
	sub_82EF6F38(ctx, base);
loc_82F76CC0:
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

__attribute__((alias("__imp__sub_82F76CD4"))) PPC_WEAK_FUNC(sub_82F76CD4);
PPC_FUNC_IMPL(__imp__sub_82F76CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76CD8"))) PPC_WEAK_FUNC(sub_82F76CD8);
PPC_FUNC_IMPL(__imp__sub_82F76CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F76CE0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f76d0c
	if (ctx.cr6.eq) goto loc_82F76D0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F76D0C:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f76d38
	if (ctx.cr6.eq) goto loc_82F76D38;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x82f76d38
	if (!ctx.cr0.eq) goto loc_82F76D38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F76D30;
	sub_82F04C78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F76D38;
	sub_82EF6F38(ctx, base);
loc_82F76D38:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// bl 0x82f73d58
	ctx.lr = 0x82F76DB4;
	sub_82F73D58(ctx, base);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82f70f80
	ctx.lr = 0x82F76DC0;
	sub_82F70F80(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lbz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 148);
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// lbz r11,149(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 149);
	// stb r11,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F76E34"))) PPC_WEAK_FUNC(sub_82F76E34);
PPC_FUNC_IMPL(__imp__sub_82F76E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76E38"))) PPC_WEAK_FUNC(sub_82F76E38);
PPC_FUNC_IMPL(__imp__sub_82F76E38) {
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
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f76ebc
	if (!ctx.cr6.eq) goto loc_82F76EBC;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F76E64;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f76e94
	if (ctx.cr0.eq) goto loc_82F76E94;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f74148
	ctx.lr = 0x82F76E8C;
	sub_82F74148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f76e98
	goto loc_82F76E98;
loc_82F76E94:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F76E98:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f76eb8
	if (ctx.cr6.eq) goto loc_82F76EB8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F76EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F76EB8:
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
loc_82F76EBC:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
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

__attribute__((alias("__imp__sub_82F76ED8"))) PPC_WEAK_FUNC(sub_82F76ED8);
PPC_FUNC_IMPL(__imp__sub_82F76ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F76EE0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82f08160
	ctx.lr = 0x82F76EFC;
	sub_82F08160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f76f2c
	if (!ctx.cr6.lt) goto loc_82F76F2C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 * 48;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,48
	ctx.r3.s64 = ctx.r4.s64 + 48;
	// mulli r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 * 48;
	// bl 0x82caa2e0
	ctx.lr = 0x82F76F2C;
	sub_82CAA2E0(ctx, base);
loc_82F76F2C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 * 48;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f76f44
	if (ctx.cr0.eq) goto loc_82F76F44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6f980
	ctx.lr = 0x82F76F44;
	sub_82F6F980(ctx, base);
loc_82F76F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F76F4C"))) PPC_WEAK_FUNC(sub_82F76F4C);
PPC_FUNC_IMPL(__imp__sub_82F76F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F76F50"))) PPC_WEAK_FUNC(sub_82F76F50);
PPC_FUNC_IMPL(__imp__sub_82F76F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F76F58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82f71428
	ctx.lr = 0x82F76F6C;
	sub_82F71428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f76fa8
	if (!ctx.cr6.gt) goto loc_82F76FA8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F76F80:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82f6fa58
	ctx.lr = 0x82F76F94;
	sub_82F6FA58(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f76f80
	if (ctx.cr6.lt) goto loc_82F76F80;
loc_82F76FA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F76FB0"))) PPC_WEAK_FUNC(sub_82F76FB0);
PPC_FUNC_IMPL(__imp__sub_82F76FB0) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f76ff4
	if (ctx.cr6.eq) goto loc_82F76FF4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f72400
	ctx.lr = 0x82F76FDC;
	sub_82F72400(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f76ff4
	if (ctx.cr0.lt) goto loc_82F76FF4;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82f76ff8
	goto loc_82F76FF8;
loc_82F76FF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F76FF8:
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

__attribute__((alias("__imp__sub_82F7700C"))) PPC_WEAK_FUNC(sub_82F7700C);
PPC_FUNC_IMPL(__imp__sub_82F7700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F77010"))) PPC_WEAK_FUNC(sub_82F77010);
PPC_FUNC_IMPL(__imp__sub_82F77010) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// bl 0x82f6d388
	ctx.lr = 0x82F77050;
	sub_82F6D388(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82F7707C"))) PPC_WEAK_FUNC(sub_82F7707C);
PPC_FUNC_IMPL(__imp__sub_82F7707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F77080"))) PPC_WEAK_FUNC(sub_82F77080);
PPC_FUNC_IMPL(__imp__sub_82F77080) {
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
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// bl 0x82f71528
	ctx.lr = 0x82F770C4;
	sub_82F71528(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82F770F0"))) PPC_WEAK_FUNC(sub_82F770F0);
PPC_FUNC_IMPL(__imp__sub_82F770F0) {
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
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82f08fe0
	ctx.lr = 0x82F77138;
	sub_82F08FE0(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// bl 0x82f6ee08
	ctx.lr = 0x82F77144;
	sub_82F6EE08(ctx, base);
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

__attribute__((alias("__imp__sub_82F77160"))) PPC_WEAK_FUNC(sub_82F77160);
PPC_FUNC_IMPL(__imp__sub_82F77160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F77168;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f7718c
	if (!ctx.cr6.eq) goto loc_82F7718C;
	// bl 0x82f71428
	ctx.lr = 0x82F77188;
	sub_82F71428(ctx, base);
	// b 0x82f771c8
	goto loc_82F771C8;
loc_82F7718C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 * 12;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82f6da80
	ctx.lr = 0x82F7719C;
	sub_82F6DA80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82caa2e0
	ctx.lr = 0x82F771BC;
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82F771C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F771D0"))) PPC_WEAK_FUNC(sub_82F771D0);
PPC_FUNC_IMPL(__imp__sub_82F771D0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82f08b70
	ctx.lr = 0x82F771FC;
	sub_82F08B70(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82f04d70
	ctx.lr = 0x82F77204;
	sub_82F04D70(ctx, base);
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

__attribute__((alias("__imp__sub_82F7721C"))) PPC_WEAK_FUNC(sub_82F7721C);
PPC_FUNC_IMPL(__imp__sub_82F7721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F77220"))) PPC_WEAK_FUNC(sub_82F77220);
PPC_FUNC_IMPL(__imp__sub_82F77220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F77228;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f7723c
	if (!ctx.cr6.eq) goto loc_82F7723C;
	// b 0x82f77358
	goto loc_82F77358;
loc_82F7723C:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f7724c
	if (!ctx.cr6.lt) goto loc_82F7724C;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f77294
	goto loc_82F77294;
loc_82F7724C:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F77268;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F77294:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F772A8;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-2
	ctx.r26.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f772e4
	if (ctx.cr6.eq) goto loc_82F772E4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F772CC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82f772cc
	if (!ctx.cr0.eq) goto loc_82F772CC;
loc_82F772E4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f77348
	if (ctx.cr6.eq) goto loc_82F77348;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F772FC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f77334
	if (ctx.cr6.eq) goto loc_82F77334;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f70cf0
	ctx.lr = 0x82F77324;
	sub_82F70CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6fae8
	ctx.lr = 0x82F77330;
	sub_82F6FAE8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82F77334:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82f772fc
	if (!ctx.cr0.eq) goto loc_82F772FC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F77348;
	sub_82EF6F38(ctx, base);
loc_82F77348:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F77358:
	// bl 0x82f74218
	ctx.lr = 0x82F7735C;
	sub_82F74218(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F77364"))) PPC_WEAK_FUNC(sub_82F77364);
PPC_FUNC_IMPL(__imp__sub_82F77364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F77368"))) PPC_WEAK_FUNC(sub_82F77368);
PPC_FUNC_IMPL(__imp__sub_82F77368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F77370;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f77384
	if (!ctx.cr6.eq) goto loc_82F77384;
	// b 0x82f774b0
	goto loc_82F774B0;
loc_82F77384:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f77394
	if (!ctx.cr6.lt) goto loc_82F77394;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f773dc
	goto loc_82F773DC;
loc_82F77394:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F773B0;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F773DC:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F773F0;
	sub_82EF6EF8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r26,-2
	ctx.r26.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f7742c
	if (ctx.cr6.eq) goto loc_82F7742C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F77414:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82f77414
	if (!ctx.cr0.eq) goto loc_82F77414;
loc_82F7742C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f774a0
	if (ctx.cr6.eq) goto loc_82F774A0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F77444:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f7748c
	if (ctx.cr6.eq) goto loc_82F7748C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6ee80
	ctx.lr = 0x82F7746C;
	sub_82F6EE80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f78558
	ctx.lr = 0x82F7747C;
	sub_82F78558(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6fae8
	ctx.lr = 0x82F77488;
	sub_82F6FAE8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82F7748C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82f77444
	if (!ctx.cr0.eq) goto loc_82F77444;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F774A0;
	sub_82EF6F38(ctx, base);
loc_82F774A0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F774B0:
	// bl 0x82f74218
	ctx.lr = 0x82F774B4;
	sub_82F74218(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F774BC"))) PPC_WEAK_FUNC(sub_82F774BC);
PPC_FUNC_IMPL(__imp__sub_82F774BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F774C0"))) PPC_WEAK_FUNC(sub_82F774C0);
PPC_FUNC_IMPL(__imp__sub_82F774C0) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82F774D8;
	sub_82EF6FE0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12428
	ctx.r10.s64 = ctx.r10.s64 + 12428;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F77510"))) PPC_WEAK_FUNC(sub_82F77510);
PPC_FUNC_IMPL(__imp__sub_82F77510) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r11,12428
	ctx.r11.s64 = ctx.r11.s64 + 12428;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f74218
	ctx.lr = 0x82F77538;
	sub_82F74218(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f74218
	ctx.lr = 0x82F77540;
	sub_82F74218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82F77548;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F7755C"))) PPC_WEAK_FUNC(sub_82F7755C);
PPC_FUNC_IMPL(__imp__sub_82F7755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F77560"))) PPC_WEAK_FUNC(sub_82F77560);
PPC_FUNC_IMPL(__imp__sub_82F77560) {
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
	// bl 0x82f77510
	ctx.lr = 0x82F77580;
	sub_82F77510(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f77590
	if (ctx.cr0.eq) goto loc_82F77590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F77590;
	sub_82EF6F38(ctx, base);
loc_82F77590:
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

__attribute__((alias("__imp__sub_82F775AC"))) PPC_WEAK_FUNC(sub_82F775AC);
PPC_FUNC_IMPL(__imp__sub_82F775AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F775B0"))) PPC_WEAK_FUNC(sub_82F775B0);
PPC_FUNC_IMPL(__imp__sub_82F775B0) {
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
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f77630
	if (!ctx.cr6.eq) goto loc_82F77630;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F775DC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f77608
	if (ctx.cr0.eq) goto loc_82F77608;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f774c0
	ctx.lr = 0x82F77600;
	sub_82F774C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f7760c
	goto loc_82F7760C;
loc_82F77608:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F7760C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7762c
	if (ctx.cr6.eq) goto loc_82F7762C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7762C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7762C:
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_82F77630:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
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

__attribute__((alias("__imp__sub_82F7764C"))) PPC_WEAK_FUNC(sub_82F7764C);
PPC_FUNC_IMPL(__imp__sub_82F7764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F77650"))) PPC_WEAK_FUNC(sub_82F77650);
PPC_FUNC_IMPL(__imp__sub_82F77650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F77658;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f727c8
	ctx.lr = 0x82F7767C;
	sub_82F727C8(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82f77688
	if (!ctx.cr6.lt) goto loc_82F77688;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82F77688:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82f7769c
	if (!ctx.cr6.eq) goto loc_82F7769C;
	// lis r31,32767
	ctx.r31.s64 = 2147418112;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// b 0x82f776a0
	goto loc_82F776A0;
loc_82F7769C:
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
loc_82F776A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f08b70
	ctx.lr = 0x82F776A8;
	sub_82F08B70(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82f77724
	goto loc_82F77724;
loc_82F776B0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7772c
	if (!ctx.cr6.lt) goto loc_82F7772C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f72900
	ctx.lr = 0x82F776CC;
	sub_82F72900(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82f77714
	if (ctx.cr0.eq) goto loc_82F77714;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne cr6,0x82f776f4
	if (!ctx.cr6.eq) goto loc_82F776F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f08fe0
	ctx.lr = 0x82F776F0;
	sub_82F08FE0(ctx, base);
	// b 0x82f77714
	goto loc_82F77714;
loc_82F776F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f762f8
	ctx.lr = 0x82F77700;
	sub_82F762F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f08fe0
	ctx.lr = 0x82F7770C;
	sub_82F08FE0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f08be0
	ctx.lr = 0x82F77714;
	sub_82F08BE0(ctx, base);
loc_82F77714:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x82f729b8
	ctx.lr = 0x82F77724;
	sub_82F729B8(ctx, base);
loc_82F77724:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82f776b0
	if (ctx.cr6.gt) goto loc_82F776B0;
loc_82F7772C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7774c
	if (ctx.cr6.eq) goto loc_82F7774C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7774C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7774C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F77758"))) PPC_WEAK_FUNC(sub_82F77758);
PPC_FUNC_IMPL(__imp__sub_82F77758) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r5,20
	ctx.r4.s64 = ctx.r5.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f727c8
	ctx.lr = 0x82F7777C;
	sub_82F727C8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f777ac
	if (!ctx.cr6.lt) goto loc_82F777AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f72900
	ctx.lr = 0x82F7779C;
	sub_82F72900(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f777ac
	if (ctx.cr6.eq) goto loc_82F777AC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82F777AC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f777cc
	if (ctx.cr6.eq) goto loc_82F777CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F777CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F777CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82F777E4"))) PPC_WEAK_FUNC(sub_82F777E4);
PPC_FUNC_IMPL(__imp__sub_82F777E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F777E8"))) PPC_WEAK_FUNC(sub_82F777E8);
PPC_FUNC_IMPL(__imp__sub_82F777E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82F777F0;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// subf r29,r11,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r11.s64;
	// bl 0x82f72d98
	ctx.lr = 0x82F77818;
	sub_82F72D98(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08b70
	ctx.lr = 0x82F77820;
	sub_82F08B70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f04d70
	ctx.lr = 0x82F77828;
	sub_82F04D70(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f77988
	if (ctx.cr6.eq) goto loc_82F77988;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F77844:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f77864
	if (ctx.cr6.eq) goto loc_82F77864;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f77864
	if (ctx.cr6.lt) goto loc_82F77864;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f77868
	if (ctx.cr6.lt) goto loc_82F77868;
loc_82F77864:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F77868:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f77988
	if (!ctx.cr0.eq) goto loc_82F77988;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7789c
	if (ctx.cr6.eq) goto loc_82F7789C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F77890;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7789c
	if (ctx.cr0.eq) goto loc_82F7789C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F7789C:
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// blt cr6,0x82f778ac
	if (ctx.cr6.lt) goto loc_82F778AC;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_82F778AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f77988
	if (ctx.cr6.eq) goto loc_82F77988;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r6,r31,r26
	ctx.r6.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bne cr6,0x82f778e8
	if (!ctx.cr6.eq) goto loc_82F778E8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f77650
	ctx.lr = 0x82F778D4;
	sub_82F77650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08fe0
	ctx.lr = 0x82F778E0;
	sub_82F08FE0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x82f7791c
	goto loc_82F7791C;
loc_82F778E8:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r21,r1,144
	ctx.r21.s64 = ctx.r1.s64 + 144;
	// bl 0x82f77650
	ctx.lr = 0x82F778F4;
	sub_82F77650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82f762f8
	ctx.lr = 0x82F77904;
	sub_82F762F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08fe0
	ctx.lr = 0x82F77910;
	sub_82F08FE0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f08be0
	ctx.lr = 0x82F77918;
	sub_82F08BE0(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
loc_82F7791C:
	// bl 0x82f08be0
	ctx.lr = 0x82F77920;
	sub_82F08BE0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82f7796c
	if (!ctx.cr6.eq) goto loc_82F7796C;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f7796c
	if (ctx.cr6.eq) goto loc_82F7796C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bne cr6,0x82f7794c
	if (!ctx.cr6.eq) goto loc_82F7794C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ee08
	ctx.lr = 0x82F77948;
	sub_82F6EE08(ctx, base);
	// b 0x82f7796c
	goto loc_82F7796C;
loc_82F7794C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f725b8
	ctx.lr = 0x82F77958;
	sub_82F725B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ee08
	ctx.lr = 0x82F77964;
	sub_82F6EE08(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f04dd8
	ctx.lr = 0x82F7796C;
	sub_82F04DD8(ctx, base);
loc_82F7796C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f77980
	if (!ctx.cr6.lt) goto loc_82F77980;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82F77980:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82f77844
	if (!ctx.cr6.eq) goto loc_82F77844;
loc_82F77988:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f7799c
	if (ctx.cr6.eq) goto loc_82F7799C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f08fe0
	ctx.lr = 0x82F7799C;
	sub_82F08FE0(ctx, base);
loc_82F7799C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f779b0
	if (ctx.cr6.eq) goto loc_82F779B0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f6ee08
	ctx.lr = 0x82F779B0;
	sub_82F6EE08(ctx, base);
loc_82F779B0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f04dd8
	ctx.lr = 0x82F779B8;
	sub_82F04DD8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08be0
	ctx.lr = 0x82F779C0;
	sub_82F08BE0(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82F779C8"))) PPC_WEAK_FUNC(sub_82F779C8);
PPC_FUNC_IMPL(__imp__sub_82F779C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F779D0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f72d98
	ctx.lr = 0x82F779F4;
	sub_82F72D98(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f77a24
	if (ctx.cr6.eq) goto loc_82F77A24;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82f77a24
	if (ctx.cr6.lt) goto loc_82F77A24;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// blt cr6,0x82f77a28
	if (ctx.cr6.lt) goto loc_82F77A28;
loc_82F77A24:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82F77A28:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f77a58
	if (!ctx.cr0.eq) goto loc_82F77A58;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f77758
	ctx.lr = 0x82F77A48;
	sub_82F77758(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82f77a5c
	if (!ctx.cr0.eq) goto loc_82F77A5C;
loc_82F77A58:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_82F77A5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f77a68
	if (!ctx.cr6.eq) goto loc_82F77A68;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82F77A68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f77a74
	if (ctx.cr6.eq) goto loc_82F77A74;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F77A74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f77a80
	if (ctx.cr6.eq) goto loc_82F77A80;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82F77A80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F77A88"))) PPC_WEAK_FUNC(sub_82F77A88);
PPC_FUNC_IMPL(__imp__sub_82F77A88) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// bl 0x82f73dc0
	ctx.lr = 0x82F77AB0;
	sub_82F73DC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f77b0c
	if (!ctx.cr0.eq) goto loc_82F77B0C;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r6,r11,-27632
	ctx.r6.s64 = ctx.r11.s64 + -27632;
	// lwz r11,-27628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f77ae0
	if (!ctx.cr0.eq) goto loc_82F77AE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-27628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27628, ctx.r11.u32);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
loc_82F77AE0:
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f6ff90
	ctx.lr = 0x82F77AFC;
	sub_82F6FF90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82f76ed8
	ctx.lr = 0x82F77B0C;
	sub_82F76ED8(ctx, base);
loc_82F77B0C:
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

__attribute__((alias("__imp__sub_82F77B24"))) PPC_WEAK_FUNC(sub_82F77B24);
PPC_FUNC_IMPL(__imp__sub_82F77B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F77B28"))) PPC_WEAK_FUNC(sub_82F77B28);
PPC_FUNC_IMPL(__imp__sub_82F77B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82F77B30;
	sub_82CA2BCC(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f77b94
	if (ctx.cr6.eq) goto loc_82F77B94;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82f77b80
	if (ctx.cr6.lt) goto loc_82F77B80;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// andi. r9,r9,65471
	ctx.r9.u64 = ctx.r9.u64 & 65471;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x82f77b90
	goto loc_82F77B90;
loc_82F77B80:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
loc_82F77B90:
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
loc_82F77B94:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// beq cr6,0x82f77bb0
	if (ctx.cr6.eq) goto loc_82F77BB0;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82f77bb4
	goto loc_82F77BB4;
loc_82F77BB0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82F77BB4:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// li r23,1
	ctx.r23.s64 = 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f77bdc
	if (ctx.cr0.eq) goto loc_82F77BDC;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x82f77be0
	if (ctx.cr6.eq) goto loc_82F77BE0;
loc_82F77BDC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F77BE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f77c0c
	if (!ctx.cr0.eq) goto loc_82F77C0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f77c00
	if (ctx.cr6.eq) goto loc_82F77C00;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x82f77c04
	if (ctx.cr6.eq) goto loc_82F77C04;
loc_82F77C00:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F77C04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f77c1c
	if (ctx.cr0.eq) goto loc_82F77C1C;
loc_82F77C0C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_82F77C1C:
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f77c48
	if (ctx.cr0.eq) goto loc_82F77C48;
	// lha r11,24(r24)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r24.u32 + 24));
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// b 0x82f77c4c
	goto loc_82F77C4C;
loc_82F77C48:
	// lfs f13,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
loc_82F77C4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// li r9,20
	ctx.r9.s64 = 20;
	// fadds f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lbz r10,328(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 328);
	// lwz r29,124(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r28,132(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rlwinm. r10,r10,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f0,3368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3368);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mulli r22,r11,20
	ctx.r22.s64 = ctx.r11.s64 * 20;
	// bne 0x82f77cf4
	if (!ctx.cr0.eq) goto loc_82F77CF4;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82f77cf4
	if (ctx.cr6.gt) goto loc_82F77CF4;
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// bgt cr6,0x82f77cf4
	if (ctx.cr6.gt) goto loc_82F77CF4;
	// cmpwi cr6,r22,-128
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -128, ctx.xer);
	// blt cr6,0x82f77cf4
	if (ctx.cr6.lt) goto loc_82F77CF4;
	// cmpwi cr6,r22,127
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 127, ctx.xer);
	// bgt cr6,0x82f77cf4
	if (ctx.cr6.gt) goto loc_82F77CF4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,3280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82f77cf4
	if (ctx.cr6.lt) goto loc_82F77CF4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82f77cf4
	if (!ctx.cr6.lt) goto loc_82F77CF4;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// blt cr6,0x82f77cf4
	if (ctx.cr6.lt) goto loc_82F77CF4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82f77cf8
	if (ctx.cr6.lt) goto loc_82F77CF8;
loc_82F77CF4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F77CF8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,240(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6e4e0
	ctx.lr = 0x82F77D08;
	sub_82F6E4E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// beq 0x82f77d28
	if (ctx.cr0.eq) goto loc_82F77D28;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82f77d2c
	goto loc_82F77D2C;
loc_82F77D28:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82F77D2C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// beq cr6,0x82f77d44
	if (ctx.cr6.eq) goto loc_82F77D44;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// b 0x82f77d48
	goto loc_82F77D48;
loc_82F77D44:
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
loc_82F77D48:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r27,30
	ctx.r4.s64 = ctx.r27.s64 + 30;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f77d5c
	if (!ctx.cr0.eq) goto loc_82F77D5C;
	// addi r4,r27,42
	ctx.r4.s64 = ctx.r27.s64 + 42;
loc_82F77D5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bne cr6,0x82f77d6c
	if (!ctx.cr6.eq) goto loc_82F77D6C;
	// addi r3,r31,42
	ctx.r3.s64 = ctx.r31.s64 + 42;
loc_82F77D6C:
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca2c60
	ctx.lr = 0x82F77D74;
	sub_82CA2C60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f94948
	ctx.lr = 0x82F77D7C;
	sub_82F94948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f94948
	ctx.lr = 0x82F77D88;
	sub_82F94948(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82F77D94;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// beq 0x82f77dbc
	if (ctx.cr0.eq) goto loc_82F77DBC;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f77dbc
	if (!ctx.cr6.eq) goto loc_82F77DBC;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F77DBC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f77ddc
	if (ctx.cr0.eq) goto loc_82F77DDC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwimi r9,r11,0,8,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFF000000);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82f77de0
	goto loc_82F77DE0;
loc_82F77DDC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F77DE0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f77df8
	if (ctx.cr0.eq) goto loc_82F77DF8;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// b 0x82f77dfc
	goto loc_82F77DFC;
loc_82F77DF8:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82F77DFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f77e20
	if (ctx.cr0.eq) goto loc_82F77E20;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
	// b 0x82f77e2c
	goto loc_82F77E2C;
loc_82F77E20:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
loc_82F77E2C:
	// lbz r11,149(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 149);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f77f88
	if (!ctx.cr0.eq) goto loc_82F77F88;
	// lbz r11,329(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 329);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f77f88
	if (ctx.cr0.eq) goto loc_82F77F88;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f77f88
	if (ctx.cr0.eq) goto loc_82F77F88;
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f77e70
	if (ctx.cr0.eq) goto loc_82F77E70;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x82f77e74
	if (ctx.cr6.eq) goto loc_82F77E74;
loc_82F77E70:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F77E74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f77f88
	if (ctx.cr0.eq) goto loc_82F77F88;
	// lfs f0,92(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r8,108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f0,2740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2740);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf. r29,r6,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82f77f88
	if (!ctx.cr0.gt) goto loc_82F77F88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// divwu r28,r29,r10
	ctx.r28.u32 = ctx.r29.u32 / ctx.r10.u32;
	// twllei r10,0
	// bl 0x82f5d9d8
	ctx.lr = 0x82F77ED8;
	sub_82F5D9D8(ctx, base);
loc_82F77ED8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f77ef4
	if (ctx.cr6.eq) goto loc_82F77EF4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x82f77ef8
	if (ctx.cr6.lt) goto loc_82F77EF8;
loc_82F77EF4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82F77EF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f77f74
	if (!ctx.cr0.eq) goto loc_82F77F74;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// addi r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 + 6;
	// rlwinm r8,r11,23,9,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f77f68
	if (ctx.cr0.eq) goto loc_82F77F68;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f77f68
	if (!ctx.cr0.eq) goto loc_82F77F68;
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rlwinm. r8,r8,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f77f68
	if (ctx.cr0.eq) goto loc_82F77F68;
	// rlwinm r11,r11,26,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// beq 0x82f77f40
	if (ctx.cr0.eq) goto loc_82F77F40;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F77F40:
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82f77f54
	if (ctx.cr0.lt) goto loc_82F77F54;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// andi. r8,r8,65471
	ctx.r8.u64 = ctx.r8.u64 & 65471;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// b 0x82f77f60
	goto loc_82F77F60;
loc_82F77F54:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 64;
loc_82F77F60:
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82F77F68:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F77F70;
	sub_82F5B2C8(ctx, base);
	// b 0x82f77ed8
	goto loc_82F77ED8;
loc_82F77F74:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bl 0x82f5d010
	ctx.lr = 0x82F77F88;
	sub_82F5D010(ctx, base);
loc_82F77F88:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lfs f0,1276(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1276);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm. r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r10,8
	ctx.r10.s64 = 8;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f13.u32);
	// stfiwx f0,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f0.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// rlwinm. r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq 0x82f77ff8
	if (ctx.cr0.eq) goto loc_82F77FF8;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// b 0x82f78000
	goto loc_82F78000;
loc_82F77FF8:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
loc_82F78000:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f78014
	if (ctx.cr0.eq) goto loc_82F78014;
	// stb r22,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r22.u8);
	// b 0x82f78018
	goto loc_82F78018;
loc_82F78014:
	// sth r22,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r22.u16);
loc_82F78018:
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82f780b8
	if (ctx.cr6.eq) goto loc_82F780B8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82f78038
	if (ctx.cr6.eq) goto loc_82F78038;
	// rlwinm r11,r11,0,4,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f78124
	goto loc_82F78124;
loc_82F78038:
	// rlwimi r11,r23,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwa r10,108(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 108));
	// lfs f13,84(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// beq 0x82f78074
	if (ctx.cr0.eq) goto loc_82F78074;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// b 0x82f78078
	goto loc_82F78078;
loc_82F78074:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82F78078:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f13,3084(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f11,f0,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x82f78108
	goto loc_82F78108;
loc_82F780B8:
	// rlwimi r11,r23,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82f780d0
	if (ctx.cr0.eq) goto loc_82F780D0;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// b 0x82f780d4
	goto loc_82F780D4;
loc_82F780D0:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82F780D4:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f0,92(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82F78108:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f0.u32);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,329(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 329);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f78124
	if (ctx.cr0.eq) goto loc_82F78124;
	// stb r23,1332(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1332, ctx.r23.u8);
loc_82F78124:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,1320(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1320);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82f7813c
	if (!ctx.cr6.lt) goto loc_82F7813C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F7813C:
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// lfs f0,1276(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1276);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,1280(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	ctx.f12.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r10,1324
	ctx.r10.s64 = 1324;
	// stw r11,1320(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1320, ctx.r11.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,r26,r10
	PPC_STORE_U32(ctx.r26.u32 + ctx.r10.u32, ctx.f13.u32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1276(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1276, temp.u32);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// stw r21,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r21.u32);
	// stw r21,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r21.u32);
	// stw r21,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r21.u32);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f781b8
	if (ctx.cr6.eq) goto loc_82F781B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f781b8
	if (!ctx.cr0.eq) goto loc_82F781B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F781B0;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F781B8;
	sub_82EF6F38(ctx, base);
loc_82F781B8:
	// stw r21,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82F781C8"))) PPC_WEAK_FUNC(sub_82F781C8);
PPC_FUNC_IMPL(__imp__sub_82F781C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F781D0;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f781ec
	if (ctx.cr6.lt) goto loc_82F781EC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f78360
	goto loc_82F78360;
loc_82F781EC:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r11,12(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 12));
	// beq 0x82f78214
	if (ctx.cr0.eq) goto loc_82F78214;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7821c
	goto loc_82F7821C;
loc_82F78214:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7821C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82f5d9d8
	ctx.lr = 0x82F78250;
	sub_82F5D9D8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F78254:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f78270
	if (ctx.cr6.eq) goto loc_82F78270;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f78274
	if (ctx.cr6.lt) goto loc_82F78274;
loc_82F78270:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F78274:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f78324
	if (!ctx.cr0.eq) goto loc_82F78324;
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// rlwinm r11,r8,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f78294
	if (!ctx.cr0.eq) goto loc_82F78294;
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// b 0x82f7829c
	goto loc_82F7829C;
loc_82F78294:
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
loc_82F7829C:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82f782e4
	if (ctx.cr6.gt) goto loc_82F782E4;
	// rlwinm r10,r8,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f782d8
	if (!ctx.cr0.eq) goto loc_82F782D8;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82F782D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F782E0;
	sub_82F5B2C8(ctx, base);
	// b 0x82f78254
	goto loc_82F78254;
loc_82F782E4:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82f78324
	if (!ctx.cr6.gt) goto loc_82F78324;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82F78324:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f78350
	if (ctx.cr0.eq) goto loc_82F78350;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// clrlwi r31,r11,8
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f78354
	if (!ctx.cr6.eq) goto loc_82F78354;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x82f78354
	goto loc_82F78354;
loc_82F78350:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82F78354:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f5d010
	ctx.lr = 0x82F7835C;
	sub_82F5D010(ctx, base);
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
loc_82F78360:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7836C"))) PPC_WEAK_FUNC(sub_82F7836C);
PPC_FUNC_IMPL(__imp__sub_82F7836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F78370"))) PPC_WEAK_FUNC(sub_82F78370);
PPC_FUNC_IMPL(__imp__sub_82F78370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F78378;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f7839c
	if (!ctx.cr6.eq) goto loc_82F7839C;
	// bl 0x82f08160
	ctx.lr = 0x82F78398;
	sub_82F08160(ctx, base);
	// b 0x82f783d8
	goto loc_82F783D8;
loc_82F7839C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 * 48;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82f06b28
	ctx.lr = 0x82F783AC;
	sub_82F06B28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mulli r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 * 48;
	// bl 0x82caa2e0
	ctx.lr = 0x82F783CC;
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82F783D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F783E0"))) PPC_WEAK_FUNC(sub_82F783E0);
PPC_FUNC_IMPL(__imp__sub_82F783E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F783E8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7840c
	if (!ctx.cr6.eq) goto loc_82F7840C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f78434
	goto loc_82F78434;
loc_82F7840C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f7843c
	if (!ctx.cr6.gt) goto loc_82F7843C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F78434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f77220
	ctx.lr = 0x82F7843C;
	sub_82F77220(ctx, base);
loc_82F7843C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f78488
	if (!ctx.cr6.eq) goto loc_82F78488;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6dae8
	ctx.lr = 0x82F78484;
	sub_82F6DAE8(ctx, base);
	// b 0x82f7854c
	goto loc_82F7854C;
loc_82F78488:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F78490:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// and r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f78490
	if (!ctx.cr6.eq) goto loc_82F78490;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne cr6,0x82f784fc
	if (!ctx.cr6.eq) goto loc_82F784FC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f784e4
	if (ctx.cr6.eq) goto loc_82F784E4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F784E4;
	sub_82F6DAE8(ctx, base);
loc_82F784E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F784F0;
	sub_82F6FC88(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82f7854c
	goto loc_82F7854C;
loc_82F784F8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82F784FC:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82f784f8
	if (!ctx.cr6.eq) goto loc_82F784F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f78534
	if (ctx.cr6.eq) goto loc_82F78534;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F78534;
	sub_82F6DAE8(ctx, base);
loc_82F78534:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F78544;
	sub_82F6FC88(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F7854C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F78558"))) PPC_WEAK_FUNC(sub_82F78558);
PPC_FUNC_IMPL(__imp__sub_82F78558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F78560;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f78584
	if (!ctx.cr6.eq) goto loc_82F78584;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f785ac
	goto loc_82F785AC;
loc_82F78584:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f785b4
	if (!ctx.cr6.gt) goto loc_82F785B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F785AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f77368
	ctx.lr = 0x82F785B4;
	sub_82F77368(ctx, base);
loc_82F785B4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f78600
	if (!ctx.cr6.eq) goto loc_82F78600;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6dae8
	ctx.lr = 0x82F785FC;
	sub_82F6DAE8(ctx, base);
	// b 0x82f786c4
	goto loc_82F786C4;
loc_82F78600:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F78608:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// and r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f78608
	if (!ctx.cr6.eq) goto loc_82F78608;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne cr6,0x82f78674
	if (!ctx.cr6.eq) goto loc_82F78674;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7865c
	if (ctx.cr6.eq) goto loc_82F7865C;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F7865C;
	sub_82F6DAE8(ctx, base);
loc_82F7865C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F78668;
	sub_82F6FC88(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82f786c4
	goto loc_82F786C4;
loc_82F78670:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82F78674:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82f78670
	if (!ctx.cr6.eq) goto loc_82F78670;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f786ac
	if (ctx.cr6.eq) goto loc_82F786AC;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F786AC;
	sub_82F6DAE8(ctx, base);
loc_82F786AC:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F786BC;
	sub_82F6FC88(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F786C4:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F786D0"))) PPC_WEAK_FUNC(sub_82F786D0);
PPC_FUNC_IMPL(__imp__sub_82F786D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F786D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f7872c
	if (ctx.cr6.eq) goto loc_82F7872C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F786F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82f7871c
	if (!ctx.cr6.eq) goto loc_82F7871C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f78370
	ctx.lr = 0x82F78718;
	sub_82F78370(ctx, base);
	// b 0x82f78724
	goto loc_82F78724;
loc_82F7871C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
loc_82F78724:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f786f8
	if (ctx.cr6.lt) goto loc_82F786F8;
loc_82F7872C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F78734"))) PPC_WEAK_FUNC(sub_82F78734);
PPC_FUNC_IMPL(__imp__sub_82F78734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F78738"))) PPC_WEAK_FUNC(sub_82F78738);
PPC_FUNC_IMPL(__imp__sub_82F78738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F78740;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f787a4
	if (ctx.cr6.eq) goto loc_82F787A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82F78760:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f78788
	if (ctx.cr6.eq) goto loc_82F78788;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82f74290
	ctx.lr = 0x82F78780;
	sub_82F74290(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F78788:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82f78760
	if (!ctx.cr0.eq) goto loc_82F78760;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F7879C;
	sub_82EF6F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F787A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F787AC"))) PPC_WEAK_FUNC(sub_82F787AC);
PPC_FUNC_IMPL(__imp__sub_82F787AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F787B0"))) PPC_WEAK_FUNC(sub_82F787B0);
PPC_FUNC_IMPL(__imp__sub_82F787B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F787B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f78d80
	if (!ctx.cr6.gt) goto loc_82F78D80;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82f71700
	ctx.lr = 0x82F787E0;
	sub_82F71700(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 * 12;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f78828
	if (ctx.cr6.lt) goto loc_82F78828;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f7882c
	if (!ctx.cr6.gt) goto loc_82F7882C;
loc_82F78828:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F7882C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x82f78a08
	if (ctx.cr0.eq) goto loc_82F78A08;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82f788ac
	if (!ctx.cr6.eq) goto loc_82F788AC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82f78854
	if (!ctx.cr6.gt) goto loc_82F78854;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F78854:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f78888
	if (!ctx.cr6.eq) goto loc_82F78888;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6fa58
	ctx.lr = 0x82F78884;
	sub_82F6FA58(ctx, base);
	// b 0x82f78898
	goto loc_82F78898;
loc_82F78888:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f75a18
	ctx.lr = 0x82F78898;
	sub_82F75A18(ctx, base);
loc_82F78898:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x82f78a9c
	goto loc_82F78A9C;
loc_82F788AC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82f789bc
	if (!ctx.cr6.gt) goto loc_82F789BC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6fc18
	ctx.lr = 0x82F788D4;
	sub_82F6FC18(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f78904
	if (!ctx.cr6.gt) goto loc_82F78904;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// b 0x82f7890c
	goto loc_82F7890C;
loc_82F78904:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82F7890C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82f78930
	if (!ctx.cr6.gt) goto loc_82F78930;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F78930:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f75a18
	ctx.lr = 0x82F78958;
	sub_82F75A18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f7896c
	if (!ctx.cr6.lt) goto loc_82F7896C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82F7896C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82f75a18
	ctx.lr = 0x82F78988;
	sub_82F75A18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f78998
	if (!ctx.cr6.lt) goto loc_82F78998;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82F78998:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f78aa4
	if (ctx.cr6.eq) goto loc_82F78AA4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F789B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f78aa4
	goto loc_82F78AA4;
loc_82F789BC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f789d0
	if (!ctx.cr6.gt) goto loc_82F789D0;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// b 0x82f789d8
	goto loc_82F789D8;
loc_82F789D0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82F789D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f789ec
	if (!ctx.cr6.lt) goto loc_82F789EC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82F789EC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82f75a18
	ctx.lr = 0x82F78A04;
	sub_82F75A18(ctx, base);
	// b 0x82f78a94
	goto loc_82F78A94;
loc_82F78A08:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f78a28
	if (ctx.cr6.lt) goto loc_82F78A28;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f78a2c
	if (!ctx.cr6.gt) goto loc_82F78A2C;
loc_82F78A28:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F78A2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f78a48
	if (ctx.cr0.eq) goto loc_82F78A48;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82f789bc
	goto loc_82F789BC;
loc_82F78A48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6d1f0
	ctx.lr = 0x82F78A50;
	sub_82F6D1F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ble 0x82f78a6c
	if (!ctx.cr0.gt) goto loc_82F78A6C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f75a18
	ctx.lr = 0x82F78A68;
	sub_82F75A18(ctx, base);
	// b 0x82f78a8c
	goto loc_82F78A8C;
loc_82F78A6C:
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f75a18
	ctx.lr = 0x82F78A78;
	sub_82F75A18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f78a8c
	if (!ctx.cr6.lt) goto loc_82F78A8C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82F78A8C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82F78A94:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
loc_82F78A9C:
	// bge cr6,0x82f78aa4
	if (!ctx.cr6.lt) goto loc_82F78AA4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82F78AA4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f78abc
	if (ctx.cr6.lt) goto loc_82F78ABC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f78ac0
	if (ctx.cr6.lt) goto loc_82F78AC0;
loc_82F78ABC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F78AC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f78b38
	if (!ctx.cr0.eq) goto loc_82F78B38;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r28,12
	ctx.r10.s64 = ctx.r28.s64 * 12;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f78b08
	if (ctx.cr6.lt) goto loc_82F78B08;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f78b0c
	if (!ctx.cr6.gt) goto loc_82F78B0C;
loc_82F78B08:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F78B0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f78b38
	if (ctx.cr0.eq) goto loc_82F78B38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f78abc
	if (ctx.cr6.lt) goto loc_82F78ABC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f78aa4
	if (!ctx.cr6.lt) goto loc_82F78AA4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f77160
	ctx.lr = 0x82F78B34;
	sub_82F77160(ctx, base);
	// b 0x82f78aa4
	goto loc_82F78AA4;
loc_82F78B38:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f78b50
	if (ctx.cr6.lt) goto loc_82F78B50;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f78b54
	if (ctx.cr6.lt) goto loc_82F78B54;
loc_82F78B50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F78B54:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f78bd8
	if (!ctx.cr0.eq) goto loc_82F78BD8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82f78b9c
	if (ctx.cr6.lt) goto loc_82F78B9C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82f78ba0
	if (!ctx.cr6.gt) goto loc_82F78BA0;
loc_82F78B9C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82F78BA0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f78bd8
	if (ctx.cr0.eq) goto loc_82F78BD8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82f78bc4
	if (!ctx.cr6.gt) goto loc_82F78BC4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82F78BC4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F78BD8:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt cr6,0x82f78c10
	if (ctx.cr6.lt) goto loc_82F78C10;
	// addic. r4,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r4.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// blt 0x82f78c10
	if (ctx.cr0.lt) goto loc_82F78C10;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f78c14
	if (ctx.cr6.lt) goto loc_82F78C14;
loc_82F78C10:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F78C14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f78cc4
	if (!ctx.cr0.eq) goto loc_82F78CC4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f78c54
	if (!ctx.cr6.eq) goto loc_82F78C54;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82f78cc4
	if (ctx.cr6.lt) goto loc_82F78CC4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f78cc4
	if (!ctx.cr6.lt) goto loc_82F78CC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f77160
	ctx.lr = 0x82F78C50;
	sub_82F77160(ctx, base);
	// b 0x82f78cc4
	goto loc_82F78CC4;
loc_82F78C54:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82f78cc4
	if (!ctx.cr6.eq) goto loc_82F78CC4;
	// mulli r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 * 12;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f78cc4
	if (!ctx.cr6.eq) goto loc_82F78CC4;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82f78cb4
	if (ctx.cr6.lt) goto loc_82F78CB4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f78cb4
	if (!ctx.cr6.lt) goto loc_82F78CB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f77160
	ctx.lr = 0x82F78CB4;
	sub_82F77160(ctx, base);
loc_82F78CB4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F78CC4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82f78cd8
	if (!ctx.cr6.lt) goto loc_82F78CD8;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
loc_82F78CD8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82f78cec
	if (ctx.cr6.lt) goto loc_82F78CEC;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f78cf0
	if (ctx.cr6.lt) goto loc_82F78CF0;
loc_82F78CEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F78CF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f78d8c
	if (!ctx.cr0.eq) goto loc_82F78D8C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82f78d20
	if (!ctx.cr6.eq) goto loc_82F78D20;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82f78d8c
	if (ctx.cr6.lt) goto loc_82F78D8C;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// b 0x82f78d70
	goto loc_82F78D70;
loc_82F78D20:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82f78d8c
	if (!ctx.cr6.eq) goto loc_82F78D8C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f78d8c
	if (!ctx.cr6.eq) goto loc_82F78D8C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82f78d8c
	if (ctx.cr6.lt) goto loc_82F78D8C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
loc_82F78D70:
	// bge cr6,0x82f78d8c
	if (!ctx.cr6.lt) goto loc_82F78D8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f77160
	ctx.lr = 0x82F78D7C;
	sub_82F77160(ctx, base);
	// b 0x82f78d8c
	goto loc_82F78D8C;
loc_82F78D80:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f75a18
	ctx.lr = 0x82F78D8C;
	sub_82F75A18(ctx, base);
loc_82F78D8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F78D94"))) PPC_WEAK_FUNC(sub_82F78D94);
PPC_FUNC_IMPL(__imp__sub_82F78D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F78D98"))) PPC_WEAK_FUNC(sub_82F78D98);
PPC_FUNC_IMPL(__imp__sub_82F78D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F78DA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f791f0
	if (!ctx.cr6.gt) goto loc_82F791F0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f71700
	ctx.lr = 0x82F78DC8;
	sub_82F71700(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82f78ddc
	if (!ctx.cr6.eq) goto loc_82F78DDC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subf r27,r31,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82F78DDC:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6f9f0
	ctx.lr = 0x82F78DF8;
	sub_82F6F9F0(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 * 12;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f78e40
	if (ctx.cr6.lt) goto loc_82F78E40;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r28,r30
	ctx.r9.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82f78e44
	if (!ctx.cr6.gt) goto loc_82F78E44;
loc_82F78E40:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82F78E44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f78f20
	if (ctx.cr0.eq) goto loc_82F78F20;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82f78ea0
	if (!ctx.cr6.eq) goto loc_82F78EA0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82f78e68
	if (!ctx.cr6.gt) goto loc_82F78E68;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82F78E68:
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82f78f8c
	if (!ctx.cr0.eq) goto loc_82F78F8C;
loc_82F78E7C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f78f8c
	if (ctx.cr6.lt) goto loc_82F78F8C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f78f8c
	if (!ctx.cr6.lt) goto loc_82F78F8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f77160
	ctx.lr = 0x82F78E9C;
	sub_82F77160(ctx, base);
	// b 0x82f78f8c
	goto loc_82F78F8C;
loc_82F78EA0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r28,r30
	ctx.r9.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82f78edc
	if (!ctx.cr6.gt) goto loc_82F78EDC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f78ec4
	if (!ctx.cr6.gt) goto loc_82F78EC4;
loc_82F78EBC:
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// b 0x82f78ecc
	goto loc_82F78ECC;
loc_82F78EC4:
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
loc_82F78EC8:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82F78ECC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f78f78
	if (!ctx.cr6.eq) goto loc_82F78F78;
	// b 0x82f78e7c
	goto loc_82F78E7C;
loc_82F78EDC:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f78eec
	if (!ctx.cr6.gt) goto loc_82F78EEC;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// b 0x82f78ef4
	goto loc_82F78EF4;
loc_82F78EEC:
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82F78EF4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f78f08
	if (!ctx.cr6.lt) goto loc_82F78F08;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82F78F08:
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bge cr6,0x82f78f94
	if (!ctx.cr6.lt) goto loc_82F78F94;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82f78f94
	goto loc_82F78F94;
loc_82F78F20:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f78f40
	if (ctx.cr6.lt) goto loc_82F78F40;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82f78f44
	if (!ctx.cr6.gt) goto loc_82F78F44;
loc_82F78F40:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82F78F44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f78f68
	if (ctx.cr0.eq) goto loc_82F78F68;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f78ebc
	if (ctx.cr6.gt) goto loc_82F78EBC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82f78ec8
	goto loc_82F78EC8;
loc_82F78F68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6d1f0
	ctx.lr = 0x82F78F70;
	sub_82F6D1F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82f78f8c
	if (ctx.cr0.gt) goto loc_82F78F8C;
loc_82F78F78:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f78f8c
	if (!ctx.cr6.lt) goto loc_82F78F8C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82F78F8C:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_82F78F94:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f78fac
	if (ctx.cr6.lt) goto loc_82F78FAC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f78fb0
	if (ctx.cr6.lt) goto loc_82F78FB0;
loc_82F78FAC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F78FB0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f79020
	if (!ctx.cr0.eq) goto loc_82F79020;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82f78ff0
	if (ctx.cr6.lt) goto loc_82F78FF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r28,r30
	ctx.r9.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f78ff4
	if (!ctx.cr6.gt) goto loc_82F78FF4;
loc_82F78FF0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F78FF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f79020
	if (ctx.cr0.eq) goto loc_82F79020;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f78fac
	if (ctx.cr6.lt) goto loc_82F78FAC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f78f94
	if (!ctx.cr6.lt) goto loc_82F78F94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f77160
	ctx.lr = 0x82F7901C;
	sub_82F77160(ctx, base);
	// b 0x82f78f94
	goto loc_82F78F94;
loc_82F79020:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f79038
	if (ctx.cr6.lt) goto loc_82F79038;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f7903c
	if (ctx.cr6.lt) goto loc_82F7903C;
loc_82F79038:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7903C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f790b8
	if (!ctx.cr0.eq) goto loc_82F790B8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82f7907c
	if (ctx.cr6.lt) goto loc_82F7907C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82f79080
	if (!ctx.cr6.gt) goto loc_82F79080;
loc_82F7907C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82F79080:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f790b8
	if (ctx.cr0.eq) goto loc_82F790B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82f790a4
	if (!ctx.cr6.gt) goto loc_82F790A4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82F790A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F790B8:
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f790e4
	if (ctx.cr6.lt) goto loc_82F790E4;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82f790e4
	if (ctx.cr0.lt) goto loc_82F790E4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// blt cr6,0x82f790e8
	if (ctx.cr6.lt) goto loc_82F790E8;
loc_82F790E4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F790E8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f79184
	if (!ctx.cr0.eq) goto loc_82F79184;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f79108
	if (ctx.cr6.lt) goto loc_82F79108;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// blt cr6,0x82f7910c
	if (ctx.cr6.lt) goto loc_82F7910C;
loc_82F79108:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7910C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f79184
	if (!ctx.cr0.eq) goto loc_82F79184;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// mulli r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r27,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r27.s64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f79184
	if (!ctx.cr6.eq) goto loc_82F79184;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f79184
	if (!ctx.cr6.eq) goto loc_82F79184;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82f7919c
	if (ctx.cr6.lt) goto loc_82F7919C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f79184
	if (!ctx.cr6.lt) goto loc_82F79184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f77160
	ctx.lr = 0x82F79184;
	sub_82F77160(ctx, base);
loc_82F79184:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f7919c
	if (ctx.cr6.lt) goto loc_82F7919C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f791a0
	if (ctx.cr6.lt) goto loc_82F791A0;
loc_82F7919C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F791A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f791d0
	if (!ctx.cr0.eq) goto loc_82F791D0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r9,r27,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r27.s64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f79184
	if (!ctx.cr6.lt) goto loc_82F79184;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82f79184
	goto loc_82F79184;
loc_82F791D0:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f791f0
	if (ctx.cr6.eq) goto loc_82F791F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F791F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F791F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F791F8"))) PPC_WEAK_FUNC(sub_82F791F8);
PPC_FUNC_IMPL(__imp__sub_82F791F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F79200;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,4(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82f79248
	if (!ctx.cr6.lt) goto loc_82F79248;
	// mulli r30,r27,148
	ctx.r30.s64 = ctx.r27.s64 * 148;
	// subf r31,r27,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82F79224:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x82f04dd8
	ctx.lr = 0x82F79234;
	sub_82F04DD8(ctx, base);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82f08be0
	ctx.lr = 0x82F7923C;
	sub_82F08BE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// bne 0x82f79224
	if (!ctx.cr0.eq) goto loc_82F79224;
loc_82F79248:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f7929c
	if (!ctx.cr6.eq) goto loc_82F7929C;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f79278
	if (ctx.cr0.eq) goto loc_82F79278;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f79270
	if (ctx.cr0.eq) goto loc_82F79270;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f792c4
	if (!ctx.cr6.eq) goto loc_82F792C4;
loc_82F79270:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f792c4
	if (!ctx.cr0.eq) goto loc_82F792C4;
loc_82F79278:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79290
	if (ctx.cr6.eq) goto loc_82F79290;
	// bl 0x82ef6f38
	ctx.lr = 0x82F79290;
	sub_82EF6F38(ctx, base);
loc_82F79290:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82f792c4
	goto loc_82F792C4;
loc_82F7929C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f792b4
	if (ctx.cr6.gt) goto loc_82F792B4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f792c4
	if (ctx.cr6.gt) goto loc_82F792C4;
loc_82F792B4:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f6fdc8
	ctx.lr = 0x82F792C4;
	sub_82F6FDC8(ctx, base);
loc_82F792C4:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82f792f0
	if (!ctx.cr6.lt) goto loc_82F792F0;
	// mulli r31,r26,148
	ctx.r31.s64 = ctx.r26.s64 * 148;
	// subf r30,r26,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r26.s64;
loc_82F792D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add. r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f792e4
	if (ctx.cr0.eq) goto loc_82F792E4;
	// bl 0x82f771d0
	ctx.lr = 0x82F792E4;
	sub_82F771D0(ctx, base);
loc_82F792E4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// bne 0x82f792d4
	if (!ctx.cr0.eq) goto loc_82F792D4;
loc_82F792F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F792F8"))) PPC_WEAK_FUNC(sub_82F792F8);
PPC_FUNC_IMPL(__imp__sub_82F792F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F79300;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f79324
	if (!ctx.cr6.eq) goto loc_82F79324;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f7934c
	goto loc_82F7934C;
loc_82F79324:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f79354
	if (!ctx.cr6.gt) goto loc_82F79354;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F7934C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f77220
	ctx.lr = 0x82F79354;
	sub_82F77220(ctx, base);
loc_82F79354:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f793cc
	if (!ctx.cr6.eq) goto loc_82F793CC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79394;
	sub_82F6DAE8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6dae8
	ctx.lr = 0x82F793A8;
	sub_82F6DAE8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f794e8
	if (ctx.cr6.eq) goto loc_82F794E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F793C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f794e8
	goto loc_82F794E8;
loc_82F793CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F793D4:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// and r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f793d4
	if (!ctx.cr6.eq) goto loc_82F793D4;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne cr6,0x82f7946c
	if (!ctx.cr6.eq) goto loc_82F7946C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f79428
	if (ctx.cr6.eq) goto loc_82F79428;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F79428;
	sub_82F6DAE8(ctx, base);
loc_82F79428:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79434;
	sub_82F6DAE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F79440;
	sub_82F6FC88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79460
	if (ctx.cr6.eq) goto loc_82F79460;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79460:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82f794e8
	goto loc_82F794E8;
loc_82F79468:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82F7946C:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82f79468
	if (!ctx.cr6.eq) goto loc_82F79468;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f794a4
	if (ctx.cr6.eq) goto loc_82F794A4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F794A4;
	sub_82F6DAE8(ctx, base);
loc_82F794A4:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6dae8
	ctx.lr = 0x82F794B4;
	sub_82F6DAE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F794C0;
	sub_82F6FC88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f794e0
	if (ctx.cr6.eq) goto loc_82F794E0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F794E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F794E0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F794E8:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F794F4"))) PPC_WEAK_FUNC(sub_82F794F4);
PPC_FUNC_IMPL(__imp__sub_82F794F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F794F8"))) PPC_WEAK_FUNC(sub_82F794F8);
PPC_FUNC_IMPL(__imp__sub_82F794F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F79500;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f79524
	if (!ctx.cr6.eq) goto loc_82F79524;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f7954c
	goto loc_82F7954C;
loc_82F79524:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f79554
	if (!ctx.cr6.gt) goto loc_82F79554;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F7954C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f77368
	ctx.lr = 0x82F79554;
	sub_82F77368(ctx, base);
loc_82F79554:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f795cc
	if (!ctx.cr6.eq) goto loc_82F795CC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79594;
	sub_82F6DAE8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6dae8
	ctx.lr = 0x82F795A8;
	sub_82F6DAE8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f796e8
	if (ctx.cr6.eq) goto loc_82F796E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F795C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f796e8
	goto loc_82F796E8;
loc_82F795CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F795D4:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// and r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f795d4
	if (!ctx.cr6.eq) goto loc_82F795D4;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne cr6,0x82f7966c
	if (!ctx.cr6.eq) goto loc_82F7966C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f79628
	if (ctx.cr6.eq) goto loc_82F79628;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F79628;
	sub_82F6DAE8(ctx, base);
loc_82F79628:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79634;
	sub_82F6DAE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F79640;
	sub_82F6FC88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79660
	if (ctx.cr6.eq) goto loc_82F79660;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79660:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82f796e8
	goto loc_82F796E8;
loc_82F79668:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82F7966C:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82f79668
	if (!ctx.cr6.eq) goto loc_82F79668;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f796a4
	if (ctx.cr6.eq) goto loc_82F796A4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F796A4;
	sub_82F6DAE8(ctx, base);
loc_82F796A4:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6dae8
	ctx.lr = 0x82F796B4;
	sub_82F6DAE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fc88
	ctx.lr = 0x82F796C0;
	sub_82F6FC88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f796e0
	if (ctx.cr6.eq) goto loc_82F796E0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F796E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F796E0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F796E8:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F796F4"))) PPC_WEAK_FUNC(sub_82F796F4);
PPC_FUNC_IMPL(__imp__sub_82F796F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F796F8"))) PPC_WEAK_FUNC(sub_82F796F8);
PPC_FUNC_IMPL(__imp__sub_82F796F8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fb9508
	ctx.lr = 0x82F79720;
	sub_82FB9508(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82fb8fd8
	ctx.lr = 0x82F79728;
	sub_82FB8FD8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f43be0
	ctx.lr = 0x82F79734;
	sub_82F43BE0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79744
	if (ctx.cr6.eq) goto loc_82F79744;
	// bl 0x82ef6f38
	ctx.lr = 0x82F79744;
	sub_82EF6F38(ctx, base);
loc_82F79744:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79754
	if (ctx.cr6.eq) goto loc_82F79754;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F79754;
	sub_82EF1BF0(ctx, base);
loc_82F79754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82F7975C;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F79770"))) PPC_WEAK_FUNC(sub_82F79770);
PPC_FUNC_IMPL(__imp__sub_82F79770) {
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
	// bl 0x82f796f8
	ctx.lr = 0x82F79790;
	sub_82F796F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f797a0
	if (ctx.cr0.eq) goto loc_82F797A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F797A0;
	sub_82EF6F38(ctx, base);
loc_82F797A0:
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

__attribute__((alias("__imp__sub_82F797BC"))) PPC_WEAK_FUNC(sub_82F797BC);
PPC_FUNC_IMPL(__imp__sub_82F797BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F797C0"))) PPC_WEAK_FUNC(sub_82F797C0);
PPC_FUNC_IMPL(__imp__sub_82F797C0) {
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
	// bl 0x82f6e938
	ctx.lr = 0x82F797E0;
	sub_82F6E938(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F79828"))) PPC_WEAK_FUNC(sub_82F79828);
PPC_FUNC_IMPL(__imp__sub_82F79828) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F79844;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f79890
	if (ctx.cr0.eq) goto loc_82F79890;
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7986c
	if (ctx.cr6.eq) goto loc_82F7986C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F79860;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7986c
	if (ctx.cr0.eq) goto loc_82F7986C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82F7986C:
	// addi r30,r8,20
	ctx.r30.s64 = ctx.r8.s64 + 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f742e0
	ctx.lr = 0x82F79880;
	sub_82F742E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f78d98
	ctx.lr = 0x82F79890;
	sub_82F78D98(ctx, base);
loc_82F79890:
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

__attribute__((alias("__imp__sub_82F798A8"))) PPC_WEAK_FUNC(sub_82F798A8);
PPC_FUNC_IMPL(__imp__sub_82F798A8) {
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
	// bl 0x82f6d720
	ctx.lr = 0x82F798C0;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f79920
	if (ctx.cr0.eq) goto loc_82F79920;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f798e8
	if (ctx.cr6.eq) goto loc_82F798E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F798DC;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f798e8
	if (ctx.cr0.eq) goto loc_82F798E8;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_82F798E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82f78d98
	ctx.lr = 0x82F798F4;
	sub_82F78D98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f79920
	if (ctx.cr6.eq) goto loc_82F79920;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82f79920
	if (!ctx.cr0.eq) goto loc_82F79920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F79920:
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

__attribute__((alias("__imp__sub_82F79934"))) PPC_WEAK_FUNC(sub_82F79934);
PPC_FUNC_IMPL(__imp__sub_82F79934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F79938"))) PPC_WEAK_FUNC(sub_82F79938);
PPC_FUNC_IMPL(__imp__sub_82F79938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F79940;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82f7995c
	if (!ctx.cr6.eq) goto loc_82F7995C;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82f79964
	goto loc_82F79964;
loc_82F7995C:
	// subf. r30,r29,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f79998
	if (ctx.cr0.eq) goto loc_82F79998;
loc_82F79964:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d620
	ctx.lr = 0x82F79974;
	sub_82F6D620(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82f78d98
	ctx.lr = 0x82F79984;
	sub_82F78D98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f79828
	ctx.lr = 0x82F7998C;
	sub_82F79828(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
loc_82F79998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F799A0"))) PPC_WEAK_FUNC(sub_82F799A0);
PPC_FUNC_IMPL(__imp__sub_82F799A0) {
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
	// bl 0x82f796f8
	ctx.lr = 0x82F799BC;
	sub_82F796F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f71350
	ctx.lr = 0x82F799C8;
	sub_82F71350(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f799d8
	if (ctx.cr6.eq) goto loc_82F799D8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F799D8;
	sub_82EF6F38(ctx, base);
loc_82F799D8:
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

__attribute__((alias("__imp__sub_82F799EC"))) PPC_WEAK_FUNC(sub_82F799EC);
PPC_FUNC_IMPL(__imp__sub_82F799EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F799F0"))) PPC_WEAK_FUNC(sub_82F799F0);
PPC_FUNC_IMPL(__imp__sub_82F799F0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6f9f0
	ctx.lr = 0x82F79A0C;
	sub_82F6F9F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f787b0
	ctx.lr = 0x82F79A18;
	sub_82F787B0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79a38
	if (ctx.cr6.eq) goto loc_82F79A38;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79A38:
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

__attribute__((alias("__imp__sub_82F79A4C"))) PPC_WEAK_FUNC(sub_82F79A4C);
PPC_FUNC_IMPL(__imp__sub_82F79A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F79A50"))) PPC_WEAK_FUNC(sub_82F79A50);
PPC_FUNC_IMPL(__imp__sub_82F79A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F79A58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79A6C;
	sub_82F6DAE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6eb58
	ctx.lr = 0x82F79A7C;
	sub_82F6EB58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f79aa0
	if (ctx.cr6.eq) goto loc_82F79AA0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f79b10
	if (ctx.cr6.eq) goto loc_82F79B10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 & ctx.r28.u64;
	// bl 0x82f71580
	ctx.lr = 0x82F79AC0;
	sub_82F71580(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f79b10
	if (ctx.cr0.lt) goto loc_82F79B10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79AD4;
	sub_82F6DAE8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82f6fc88
	ctx.lr = 0x82F79AEC;
	sub_82F6FC88(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79b20
	if (ctx.cr6.eq) goto loc_82F79B20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f79b20
	goto loc_82F79B20;
loc_82F79B10:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f792f8
	ctx.lr = 0x82F79B20;
	sub_82F792F8(ctx, base);
loc_82F79B20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F79B28"))) PPC_WEAK_FUNC(sub_82F79B28);
PPC_FUNC_IMPL(__imp__sub_82F79B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F79B30;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79B44;
	sub_82F6DAE8(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82f6ee80
	ctx.lr = 0x82F79B54;
	sub_82F6EE80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f79b78
	if (ctx.cr6.eq) goto loc_82F79B78;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79B78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f79be8
	if (ctx.cr6.eq) goto loc_82F79BE8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 & ctx.r28.u64;
	// bl 0x82f71640
	ctx.lr = 0x82F79B98;
	sub_82F71640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f79be8
	if (ctx.cr0.lt) goto loc_82F79BE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f6dae8
	ctx.lr = 0x82F79BAC;
	sub_82F6DAE8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82f6fc88
	ctx.lr = 0x82F79BC4;
	sub_82F6FC88(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79bf8
	if (ctx.cr6.eq) goto loc_82F79BF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f79bf8
	goto loc_82F79BF8;
loc_82F79BE8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f794f8
	ctx.lr = 0x82F79BF8;
	sub_82F794F8(ctx, base);
loc_82F79BF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F79C00"))) PPC_WEAK_FUNC(sub_82F79C00);
PPC_FUNC_IMPL(__imp__sub_82F79C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F79C08;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f79c1c
	if (!ctx.cr6.eq) goto loc_82F79C1C;
	// b 0x82f79d38
	goto loc_82F79D38;
loc_82F79C1C:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f79c2c
	if (!ctx.cr6.lt) goto loc_82F79C2C;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f79c74
	goto loc_82F79C74;
loc_82F79C2C:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F79C48;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F79C74:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F79C88;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-2
	ctx.r26.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f79cc4
	if (ctx.cr6.eq) goto loc_82F79CC4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F79CAC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82f79cac
	if (!ctx.cr0.eq) goto loc_82F79CAC;
loc_82F79CC4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f79d28
	if (ctx.cr6.eq) goto loc_82F79D28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F79CDC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f79d14
	if (ctx.cr6.eq) goto loc_82F79D14;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f7ad50
	ctx.lr = 0x82F79D08;
	sub_82F7AD50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f74290
	ctx.lr = 0x82F79D10;
	sub_82F74290(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82F79D14:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82f79cdc
	if (!ctx.cr0.eq) goto loc_82F79CDC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F79D28;
	sub_82EF6F38(ctx, base);
loc_82F79D28:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F79D38:
	// bl 0x82f78738
	ctx.lr = 0x82F79D3C;
	sub_82F78738(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F79D44"))) PPC_WEAK_FUNC(sub_82F79D44);
PPC_FUNC_IMPL(__imp__sub_82F79D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F79D48"))) PPC_WEAK_FUNC(sub_82F79D48);
PPC_FUNC_IMPL(__imp__sub_82F79D48) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f74470
	ctx.lr = 0x82F79D74;
	sub_82F74470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f79d90
	if (ctx.cr0.lt) goto loc_82F79D90;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82f79d94
	goto loc_82F79D94;
loc_82F79D90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F79D94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f79da4
	if (ctx.cr6.eq) goto loc_82F79DA4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82f79e14
	goto loc_82F79E14;
loc_82F79DA4:
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F79DAC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f79ddc
	if (ctx.cr0.eq) goto loc_82F79DDC;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f75b08
	ctx.lr = 0x82F79DD4;
	sub_82F75B08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f79de0
	goto loc_82F79DE0;
loc_82F79DDC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F79DE0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f79a50
	ctx.lr = 0x82F79DF0;
	sub_82F79A50(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f79e10
	if (ctx.cr6.eq) goto loc_82F79E10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79E10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F79E14:
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

__attribute__((alias("__imp__sub_82F79E2C"))) PPC_WEAK_FUNC(sub_82F79E2C);
PPC_FUNC_IMPL(__imp__sub_82F79E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F79E30"))) PPC_WEAK_FUNC(sub_82F79E30);
PPC_FUNC_IMPL(__imp__sub_82F79E30) {
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
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f744f8
	ctx.lr = 0x82F79E5C;
	sub_82F744F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f79e78
	if (ctx.cr0.lt) goto loc_82F79E78;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82f79e7c
	goto loc_82F79E7C;
loc_82F79E78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F79E7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f79e8c
	if (ctx.cr6.eq) goto loc_82F79E8C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82f79efc
	goto loc_82F79EFC;
loc_82F79E8C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F79E94;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f79ec4
	if (ctx.cr0.eq) goto loc_82F79EC4;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f70d90
	ctx.lr = 0x82F79EBC;
	sub_82F70D90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f79ec8
	goto loc_82F79EC8;
loc_82F79EC4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F79EC8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f79b28
	ctx.lr = 0x82F79ED8;
	sub_82F79B28(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f79ef8
	if (ctx.cr6.eq) goto loc_82F79EF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79EF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F79EFC:
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

__attribute__((alias("__imp__sub_82F79F14"))) PPC_WEAK_FUNC(sub_82F79F14);
PPC_FUNC_IMPL(__imp__sub_82F79F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F79F18"))) PPC_WEAK_FUNC(sub_82F79F18);
PPC_FUNC_IMPL(__imp__sub_82F79F18) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82f71428
	ctx.lr = 0x82F79F38;
	sub_82F71428(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79f48
	if (ctx.cr6.eq) goto loc_82F79F48;
	// bl 0x82ef6f38
	ctx.lr = 0x82F79F48;
	sub_82EF6F38(ctx, base);
loc_82F79F48:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f79f68
	if (ctx.cr6.eq) goto loc_82F79F68;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F79F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F79F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6ef70
	ctx.lr = 0x82F79F70;
	sub_82F6EF70(ctx, base);
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

__attribute__((alias("__imp__sub_82F79F84"))) PPC_WEAK_FUNC(sub_82F79F84);
PPC_FUNC_IMPL(__imp__sub_82F79F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F79F88"))) PPC_WEAK_FUNC(sub_82F79F88);
PPC_FUNC_IMPL(__imp__sub_82F79F88) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82fc2258
	ctx.lr = 0x82F79FBC;
	sub_82FC2258(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r30,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r10.u8);
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
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

__attribute__((alias("__imp__sub_82F79FF4"))) PPC_WEAK_FUNC(sub_82F79FF4);
PPC_FUNC_IMPL(__imp__sub_82F79FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F79FF8"))) PPC_WEAK_FUNC(sub_82F79FF8);
PPC_FUNC_IMPL(__imp__sub_82F79FF8) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F7A014;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7a028
	if (ctx.cr0.eq) goto loc_82F7A028;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f797c0
	ctx.lr = 0x82F7A024;
	sub_82F797C0(ctx, base);
	// b 0x82f7a02c
	goto loc_82F7A02C;
loc_82F7A028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7A02C:
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

__attribute__((alias("__imp__sub_82F7A040"))) PPC_WEAK_FUNC(sub_82F7A040);
PPC_FUNC_IMPL(__imp__sub_82F7A040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7A048;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f70e30
	ctx.lr = 0x82F7A058;
	sub_82F70E30(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7a074
	if (ctx.cr6.eq) goto loc_82F7A074;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A074:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x82f76f50
	ctx.lr = 0x82F7A098;
	sub_82F76F50(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r29,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r29.u16);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7A0C4"))) PPC_WEAK_FUNC(sub_82F7A0C4);
PPC_FUNC_IMPL(__imp__sub_82F7A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A0C8"))) PPC_WEAK_FUNC(sub_82F7A0C8);
PPC_FUNC_IMPL(__imp__sub_82F7A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82F7A0D0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r23,r24,20
	ctx.r23.s64 = ctx.r24.s64 + 20;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f727c8
	ctx.lr = 0x82F7A0FC;
	sub_82F727C8(ctx, base);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82f7a108
	if (!ctx.cr6.lt) goto loc_82F7A108;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82F7A108:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82f7a11c
	if (!ctx.cr6.eq) goto loc_82F7A11C;
	// lis r30,32767
	ctx.r30.s64 = 2147418112;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// b 0x82f7a124
	goto loc_82F7A124;
loc_82F7A11C:
	// subf. r30,r25,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82f7a230
	if (!ctx.cr0.gt) goto loc_82F7A230;
loc_82F7A124:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7a230
	if (!ctx.cr6.lt) goto loc_82F7A230;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f72900
	ctx.lr = 0x82F7A140;
	sub_82F72900(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82f7a15c
	if (ctx.cr6.gt) goto loc_82F7A15C;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82F7A15C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08b70
	ctx.lr = 0x82F7A164;
	sub_82F08B70(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82f7a198
	if (ctx.cr6.eq) goto loc_82F7A198;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f760c0
	ctx.lr = 0x82F7A17C;
	sub_82F760C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08fe0
	ctx.lr = 0x82F7A188;
	sub_82F08FE0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f08be0
	ctx.lr = 0x82F7A190;
	sub_82F08BE0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x82f7a19c
	goto loc_82F7A19C;
loc_82F7A198:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82F7A19C:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82f79d48
	ctx.lr = 0x82F7A1A4;
	sub_82F79D48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f7a1c0
	if (ctx.cr0.eq) goto loc_82F7A1C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A1C0:
	// subf r11,r27,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f7a1dc
	if (ctx.cr6.lt) goto loc_82F7A1DC;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F7A1DC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f799f0
	ctx.lr = 0x82F7A1F0;
	sub_82F799F0(ctx, base);
	// add r4,r26,r28
	ctx.r4.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82f72a50
	ctx.lr = 0x82F7A200;
	sub_82F72A50(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7a220
	if (ctx.cr6.eq) goto loc_82F7A220;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A220:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08be0
	ctx.lr = 0x82F7A228;
	sub_82F08BE0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82f7a124
	if (ctx.cr6.gt) goto loc_82F7A124;
loc_82F7A230:
	// lhz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 40);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r11,40(r24)
	PPC_STORE_U16(ctx.r24.u32 + 40, ctx.r11.u16);
	// beq cr6,0x82f7a25c
	if (ctx.cr6.eq) goto loc_82F7A25C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A25C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82F7A264"))) PPC_WEAK_FUNC(sub_82F7A264);
PPC_FUNC_IMPL(__imp__sub_82F7A264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A268"))) PPC_WEAK_FUNC(sub_82F7A268);
PPC_FUNC_IMPL(__imp__sub_82F7A268) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82f7a2d0
	if (ctx.cr6.eq) goto loc_82F7A2D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f72478
	ctx.lr = 0x82F7A29C;
	sub_82F72478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f79e30
	ctx.lr = 0x82F7A2A8;
	sub_82F79E30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f7a2c4
	if (ctx.cr0.eq) goto loc_82F7A2C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A2C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f04dd8
	ctx.lr = 0x82F7A2CC;
	sub_82F04DD8(ctx, base);
	// b 0x82f7a2f8
	goto loc_82F7A2F8;
loc_82F7A2D0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f79e30
	ctx.lr = 0x82F7A2DC;
	sub_82F79E30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f7a2f8
	if (ctx.cr0.eq) goto loc_82F7A2F8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A2F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7a314
	if (ctx.cr6.eq) goto loc_82F7A314;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A314:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7a334
	if (ctx.cr6.eq) goto loc_82F7A334;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A334:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// beq cr6,0x82f7a364
	if (ctx.cr6.eq) goto loc_82F7A364;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A364:
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

__attribute__((alias("__imp__sub_82F7A37C"))) PPC_WEAK_FUNC(sub_82F7A37C);
PPC_FUNC_IMPL(__imp__sub_82F7A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A380"))) PPC_WEAK_FUNC(sub_82F7A380);
PPC_FUNC_IMPL(__imp__sub_82F7A380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F7A388;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7a45c
	if (ctx.cr6.eq) goto loc_82F7A45C;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82f7a3d8
	if (!ctx.cr6.eq) goto loc_82F7A3D8;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f7a3d8
	if (ctx.cr0.eq) goto loc_82F7A3D8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F7A3C4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82f7a3c4
	if (!ctx.cr0.eq) goto loc_82F7A3C4;
loc_82F7A3D8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f767e8
	ctx.lr = 0x82F7A3E8;
	sub_82F767E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7a45c
	if (ctx.cr0.eq) goto loc_82F7A45C;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82F7A3FC;
	sub_82CA2C60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7a448
	if (ctx.cr6.eq) goto loc_82F7A448;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82f799f0
	ctx.lr = 0x82F7A430;
	sub_82F799F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A448:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f79828
	ctx.lr = 0x82F7A450;
	sub_82F79828(ctx, base);
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,40(r29)
	PPC_STORE_U16(ctx.r29.u32 + 40, ctx.r11.u16);
loc_82F7A45C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F7A464"))) PPC_WEAK_FUNC(sub_82F7A464);
PPC_FUNC_IMPL(__imp__sub_82F7A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A468"))) PPC_WEAK_FUNC(sub_82F7A468);
PPC_FUNC_IMPL(__imp__sub_82F7A468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7A470;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F7A480;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7a520
	if (!ctx.cr0.eq) goto loc_82F7A520;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7a4a8
	if (ctx.cr6.eq) goto loc_82F7A4A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F7A49C;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7a4a8
	if (ctx.cr0.eq) goto loc_82F7A4A8;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82F7A4A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f767e8
	ctx.lr = 0x82F7A4B8;
	sub_82F767E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7a520
	if (ctx.cr0.eq) goto loc_82F7A520;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7a520
	if (!ctx.cr6.eq) goto loc_82F7A520;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7a520
	if (ctx.cr6.eq) goto loc_82F7A520;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82f799f0
	ctx.lr = 0x82F7A508;
	sub_82F799F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A520:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7A528"))) PPC_WEAK_FUNC(sub_82F7A528);
PPC_FUNC_IMPL(__imp__sub_82F7A528) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f7a550
	if (ctx.cr0.lt) goto loc_82F7A550;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7a554
	if (ctx.cr6.lt) goto loc_82F7A554;
loc_82F7A550:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7A554:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7a56c
	if (!ctx.cr0.eq) goto loc_82F7A56C;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f7a570
	goto loc_82F7A570;
loc_82F7A56C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82F7A570:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7a594
	if (ctx.cr6.eq) goto loc_82F7A594;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82f6d770
	ctx.lr = 0x82F7A580;
	sub_82F6D770(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7a594
	if (!ctx.cr0.eq) goto loc_82F7A594;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r4,36(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// bl 0x82f7a468
	ctx.lr = 0x82F7A594;
	sub_82F7A468(ctx, base);
loc_82F7A594:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F7A5A4"))) PPC_WEAK_FUNC(sub_82F7A5A4);
PPC_FUNC_IMPL(__imp__sub_82F7A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A5A8"))) PPC_WEAK_FUNC(sub_82F7A5A8);
PPC_FUNC_IMPL(__imp__sub_82F7A5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F7A5B0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82f72d98
	ctx.lr = 0x82F7A5D4;
	sub_82F72D98(ctx, base);
	// subf r29,r31,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F7A5E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f7a604
	if (ctx.cr6.eq) goto loc_82F7A604;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f7a604
	if (ctx.cr6.lt) goto loc_82F7A604;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7a608
	if (ctx.cr6.lt) goto loc_82F7A608;
loc_82F7A604:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7A608:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7a6a8
	if (!ctx.cr0.eq) goto loc_82F7A6A8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7a63c
	if (ctx.cr6.eq) goto loc_82F7A63C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F7A630;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7a63c
	if (ctx.cr0.eq) goto loc_82F7A63C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F7A63C:
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82f7a650
	if (!ctx.cr6.gt) goto loc_82F7A650;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// b 0x82f7a654
	goto loc_82F7A654;
loc_82F7A650:
	// bne cr6,0x82f7a674
	if (!ctx.cr6.eq) goto loc_82F7A674;
loc_82F7A654:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F7A65C;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7a674
	if (ctx.cr0.eq) goto loc_82F7A674;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f7a674
	if (ctx.cr6.eq) goto loc_82F7A674;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82F7A674:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f7a0c8
	ctx.lr = 0x82F7A688;
	sub_82F7A0C8(ctx, base);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f7a5e4
	if (!ctx.cr6.lt) goto loc_82F7A5E4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82f7a5e4
	goto loc_82F7A5E4;
loc_82F7A6A8:
	// lbz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7a6c0
	if (ctx.cr0.eq) goto loc_82F7A6C0;
	// lbz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,40(r25)
	PPC_STORE_U8(ctx.r25.u32 + 40, ctx.r11.u8);
loc_82F7A6C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F7A6C8"))) PPC_WEAK_FUNC(sub_82F7A6C8);
PPC_FUNC_IMPL(__imp__sub_82F7A6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F7A6D0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82f72d98
	ctx.lr = 0x82F7A6F0;
	sub_82F72D98(ctx, base);
	// subf r28,r31,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F7A700:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f7a720
	if (ctx.cr6.eq) goto loc_82F7A720;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82f7a720
	if (ctx.cr6.lt) goto loc_82F7A720;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7a724
	if (ctx.cr6.lt) goto loc_82F7A724;
loc_82F7A720:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7A724:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7a7a4
	if (!ctx.cr0.eq) goto loc_82F7A7A4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x82f7a74c
	if (!ctx.cr6.eq) goto loc_82F7A74C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F7A74C;
	sub_82F7A268(ctx, base);
loc_82F7A74C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f7a7a4
	if (ctx.cr6.eq) goto loc_82F7A7A4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7a774
	if (ctx.cr6.eq) goto loc_82F7A774;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F7A768;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7a774
	if (ctx.cr0.eq) goto loc_82F7A774;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F7A774:
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bgt cr6,0x82f7a784
	if (ctx.cr6.gt) goto loc_82F7A784;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
loc_82F7A784:
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82f7a700
	if (!ctx.cr6.lt) goto loc_82F7A700;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82f7a700
	goto loc_82F7A700;
loc_82F7A7A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F7A7AC"))) PPC_WEAK_FUNC(sub_82F7A7AC);
PPC_FUNC_IMPL(__imp__sub_82F7A7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A7B0"))) PPC_WEAK_FUNC(sub_82F7A7B0);
PPC_FUNC_IMPL(__imp__sub_82F7A7B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6e6e0
	ctx.lr = 0x82F7A7D4;
	sub_82F6E6E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7a854
	if (ctx.cr0.eq) goto loc_82F7A854;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f75b08
	ctx.lr = 0x82F7A7E8;
	sub_82F75B08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6e660
	ctx.lr = 0x82F7A7F4;
	sub_82F6E660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82f775b0
	ctx.lr = 0x82F7A800;
	sub_82F775B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f79d48
	ctx.lr = 0x82F7A808;
	sub_82F79D48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f7a824
	if (ctx.cr0.eq) goto loc_82F7A824;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A824:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7a844
	if (ctx.cr6.eq) goto loc_82F7A844;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A844:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f08be0
	ctx.lr = 0x82F7A850;
	sub_82F08BE0(ctx, base);
	// b 0x82f7a8a4
	goto loc_82F7A8A4;
loc_82F7A854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f775b0
	ctx.lr = 0x82F7A85C;
	sub_82F775B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f79d48
	ctx.lr = 0x82F7A864;
	sub_82F79D48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f7a880
	if (ctx.cr0.eq) goto loc_82F7A880;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A880:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7a8a0
	if (ctx.cr6.eq) goto loc_82F7A8A0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A8A0:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82F7A8A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82F7A8BC"))) PPC_WEAK_FUNC(sub_82F7A8BC);
PPC_FUNC_IMPL(__imp__sub_82F7A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A8C0"))) PPC_WEAK_FUNC(sub_82F7A8C0);
PPC_FUNC_IMPL(__imp__sub_82F7A8C0) {
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
	// bl 0x82f775b0
	ctx.lr = 0x82F7A8E0;
	sub_82F775B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f79e30
	ctx.lr = 0x82F7A8E8;
	sub_82F79E30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f7a904
	if (ctx.cr0.eq) goto loc_82F7A904;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A904:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7a924
	if (ctx.cr6.eq) goto loc_82F7A924;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A924:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82F7A940"))) PPC_WEAK_FUNC(sub_82F7A940);
PPC_FUNC_IMPL(__imp__sub_82F7A940) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6e6e0
	ctx.lr = 0x82F7A964;
	sub_82F6E6E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7a97c
	if (ctx.cr0.eq) goto loc_82F7A97C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7a7b0
	ctx.lr = 0x82F7A978;
	sub_82F7A7B0(ctx, base);
	// b 0x82f7a9bc
	goto loc_82F7A9BC;
loc_82F7A97C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7a998
	if (ctx.cr6.eq) goto loc_82F7A998;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A998:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7a9b8
	if (ctx.cr6.eq) goto loc_82F7A9B8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7A9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7A9B8:
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82F7A9BC:
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

__attribute__((alias("__imp__sub_82F7A9D4"))) PPC_WEAK_FUNC(sub_82F7A9D4);
PPC_FUNC_IMPL(__imp__sub_82F7A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7A9D8"))) PPC_WEAK_FUNC(sub_82F7A9D8);
PPC_FUNC_IMPL(__imp__sub_82F7A9D8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7a5a8
	ctx.lr = 0x82F7A9F4;
	sub_82F7A5A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7AA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82F7AA20"))) PPC_WEAK_FUNC(sub_82F7AA20);
PPC_FUNC_IMPL(__imp__sub_82F7AA20) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7a6c8
	ctx.lr = 0x82F7AA3C;
	sub_82F7A6C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7AA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82F7AA68"))) PPC_WEAK_FUNC(sub_82F7AA68);
PPC_FUNC_IMPL(__imp__sub_82F7AA68) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7aaa8
	if (!ctx.cr6.eq) goto loc_82F7AAA8;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F7AA90;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7aaa0
	if (ctx.cr0.eq) goto loc_82F7AAA0;
	// bl 0x82f79f88
	ctx.lr = 0x82F7AA9C;
	sub_82F79F88(ctx, base);
	// b 0x82f7aaa4
	goto loc_82F7AAA4;
loc_82F7AAA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7AAA4:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82F7AAA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6f7e8
	ctx.lr = 0x82F7AAB0;
	sub_82F6F7E8(ctx, base);
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

__attribute__((alias("__imp__sub_82F7AAC4"))) PPC_WEAK_FUNC(sub_82F7AAC4);
PPC_FUNC_IMPL(__imp__sub_82F7AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7AAC8"))) PPC_WEAK_FUNC(sub_82F7AAC8);
PPC_FUNC_IMPL(__imp__sub_82F7AAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7AAD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7ab14
	if (!ctx.cr6.eq) goto loc_82F7AB14;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F7AAFC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7ab0c
	if (ctx.cr0.eq) goto loc_82F7AB0C;
	// bl 0x82f79f88
	ctx.lr = 0x82F7AB08;
	sub_82F79F88(ctx, base);
	// b 0x82f7ab10
	goto loc_82F7AB10;
loc_82F7AB0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7AB10:
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_82F7AB14:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82f7ab28
	if (!ctx.cr6.lt) goto loc_82F7AB28;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82F7AB28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7aa68
	ctx.lr = 0x82F7AB30;
	sub_82F7AA68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f7ab4c
	if (!ctx.cr6.eq) goto loc_82F7AB4C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f7ab84
	if (ctx.cr6.eq) goto loc_82F7AB84;
loc_82F7AB4C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stb r9,186(r11)
	PPC_STORE_U8(ctx.r11.u32 + 186, ctx.r9.u8);
	// bne cr6,0x82f7ab74
	if (!ctx.cr6.eq) goto loc_82F7AB74;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f7ab84
	if (ctx.cr6.eq) goto loc_82F7AB84;
loc_82F7AB74:
	// lbz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 200);
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,200(r30)
	PPC_STORE_U8(ctx.r30.u32 + 200, ctx.r11.u8);
loc_82F7AB84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7AB8C"))) PPC_WEAK_FUNC(sub_82F7AB8C);
PPC_FUNC_IMPL(__imp__sub_82F7AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7AB90"))) PPC_WEAK_FUNC(sub_82F7AB90);
PPC_FUNC_IMPL(__imp__sub_82F7AB90) {
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
	// bl 0x82f7aa68
	ctx.lr = 0x82F7ABB0;
	sub_82F7AA68(ctx, base);
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7abc8
	if (ctx.cr0.eq) goto loc_82F7ABC8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82f7abe0
	goto loc_82F7ABE0;
loc_82F7ABC8:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82F7ABE0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f7ac08
	if (ctx.cr6.eq) goto loc_82F7AC08;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r9,186(r11)
	PPC_STORE_U8(ctx.r11.u32 + 186, ctx.r9.u8);
loc_82F7AC08:
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

__attribute__((alias("__imp__sub_82F7AC20"))) PPC_WEAK_FUNC(sub_82F7AC20);
PPC_FUNC_IMPL(__imp__sub_82F7AC20) {
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
	// bl 0x82f7aa68
	ctx.lr = 0x82F7AC40;
	sub_82F7AA68(ctx, base);
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7ac58
	if (ctx.cr0.eq) goto loc_82F7AC58;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// b 0x82f7ac70
	goto loc_82F7AC70;
loc_82F7AC58:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82F7AC70:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f7aca8
	if (ctx.cr6.eq) goto loc_82F7ACA8;
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r10,r9,16
	ctx.r10.u64 = ctx.r9.u64 | 16;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r8,186(r11)
	PPC_STORE_U8(ctx.r11.u32 + 186, ctx.r8.u8);
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
loc_82F7ACA8:
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

__attribute__((alias("__imp__sub_82F7ACC0"))) PPC_WEAK_FUNC(sub_82F7ACC0);
PPC_FUNC_IMPL(__imp__sub_82F7ACC0) {
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7ac20
	ctx.lr = 0x82F7ACE0;
	sub_82F7AC20(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7ab90
	ctx.lr = 0x82F7ACEC;
	sub_82F7AB90(ctx, base);
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

__attribute__((alias("__imp__sub_82F7AD00"))) PPC_WEAK_FUNC(sub_82F7AD00);
PPC_FUNC_IMPL(__imp__sub_82F7AD00) {
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
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7ac20
	ctx.lr = 0x82F7AD20;
	sub_82F7AC20(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7ab90
	ctx.lr = 0x82F7AD2C;
	sub_82F7AB90(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// andi. r11,r11,159
	ctx.r11.u64 = ctx.r11.u64 & 159;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F7AD4C"))) PPC_WEAK_FUNC(sub_82F7AD4C);
PPC_FUNC_IMPL(__imp__sub_82F7AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7AD50"))) PPC_WEAK_FUNC(sub_82F7AD50);
PPC_FUNC_IMPL(__imp__sub_82F7AD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7AD58;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7ad7c
	if (!ctx.cr6.eq) goto loc_82F7AD7C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f7ada4
	goto loc_82F7ADA4;
loc_82F7AD7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f7adac
	if (!ctx.cr6.gt) goto loc_82F7ADAC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F7ADA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f79c00
	ctx.lr = 0x82F7ADAC;
	sub_82F79C00(ctx, base);
loc_82F7ADAC:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// bne cr6,0x82f7ae18
	if (!ctx.cr6.eq) goto loc_82F7AE18;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7ae0c
	if (ctx.cr6.eq) goto loc_82F7AE0C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82F7AE0C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f7af0c
	goto loc_82F7AF0C;
loc_82F7AE18:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82F7AE20:
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// and r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 & ctx.r8.u64;
	// mulli r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f7ae20
	if (!ctx.cr6.eq) goto loc_82F7AE20;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7aea8
	if (!ctx.cr6.eq) goto loc_82F7AEA8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7ae94
	if (ctx.cr6.eq) goto loc_82F7AE94;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7ae8c
	if (ctx.cr6.eq) goto loc_82F7AE8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82F7AE8C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82F7AE94:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f75a90
	ctx.lr = 0x82F7AE9C;
	sub_82F75A90(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82f7af0c
	goto loc_82F7AF0C;
loc_82F7AEA4:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F7AEA8:
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f7aea4
	if (!ctx.cr6.eq) goto loc_82F7AEA4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7aef8
	if (ctx.cr6.eq) goto loc_82F7AEF8;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7aef0
	if (ctx.cr6.eq) goto loc_82F7AEF0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82F7AEF0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82F7AEF8:
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f75a90
	ctx.lr = 0x82F7AF04;
	sub_82F75A90(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F7AF0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7AF14"))) PPC_WEAK_FUNC(sub_82F7AF14);
PPC_FUNC_IMPL(__imp__sub_82F7AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7AF18"))) PPC_WEAK_FUNC(sub_82F7AF18);
PPC_FUNC_IMPL(__imp__sub_82F7AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7AF20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f7af54
	if (ctx.cr6.eq) goto loc_82F7AF54;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82f7af54
	if (ctx.cr0.eq) goto loc_82F7AF54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f79f18
	ctx.lr = 0x82F7AF4C;
	sub_82F79F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7AF54;
	sub_82EF6F38(ctx, base);
loc_82F7AF54:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7AF70"))) PPC_WEAK_FUNC(sub_82F7AF70);
PPC_FUNC_IMPL(__imp__sub_82F7AF70) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F7AF8C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7afa0
	if (ctx.cr0.eq) goto loc_82F7AFA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f7a040
	ctx.lr = 0x82F7AF9C;
	sub_82F7A040(ctx, base);
	// b 0x82f7afa4
	goto loc_82F7AFA4;
loc_82F7AFA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7AFA4:
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

__attribute__((alias("__imp__sub_82F7AFB8"))) PPC_WEAK_FUNC(sub_82F7AFB8);
PPC_FUNC_IMPL(__imp__sub_82F7AFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F7AFC0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7b0cc
	if (ctx.cr6.eq) goto loc_82F7B0CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82f7a380
	ctx.lr = 0x82F7AFFC;
	sub_82F7A380(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f727c8
	ctx.lr = 0x82F7B010;
	sub_82F727C8(ctx, base);
	// b 0x82f7b084
	goto loc_82F7B084;
loc_82F7B014:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7b098
	if (ctx.cr6.eq) goto loc_82F7B098;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f72900
	ctx.lr = 0x82F7B024;
	sub_82F72900(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82f7b044
	if (!ctx.cr6.lt) goto loc_82F7B044;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82f7b04c
	goto loc_82F7B04C;
loc_82F7B044:
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_82F7B04C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f7b058
	if (ctx.cr6.lt) goto loc_82F7B058;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F7B058:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f7b078
	if (ctx.cr6.eq) goto loc_82F7B078;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// bl 0x82f799f0
	ctx.lr = 0x82F7B078;
	sub_82F799F0(ctx, base);
loc_82F7B078:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82f729b8
	ctx.lr = 0x82F7B084;
	sub_82F729B8(ctx, base);
loc_82F7B084:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f7b014
	if (ctx.cr6.lt) goto loc_82F7B014;
loc_82F7B098:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f79828
	ctx.lr = 0x82F7B0A0;
	sub_82F79828(ctx, base);
	// lhz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 40);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r11,40(r28)
	PPC_STORE_U16(ctx.r28.u32 + 40, ctx.r11.u16);
	// beq cr6,0x82f7b0cc
	if (ctx.cr6.eq) goto loc_82F7B0CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7B0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7B0CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F7B0D4"))) PPC_WEAK_FUNC(sub_82F7B0D4);
PPC_FUNC_IMPL(__imp__sub_82F7B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7B0D8"))) PPC_WEAK_FUNC(sub_82F7B0D8);
PPC_FUNC_IMPL(__imp__sub_82F7B0D8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,12436
	ctx.r11.s64 = ctx.r11.s64 + 12436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f6f248
	ctx.lr = 0x82F7B100;
	sub_82F6F248(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b114
	if (ctx.cr6.eq) goto loc_82F7B114;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a700
	ctx.lr = 0x82F7B114;
	sub_82F0A700(ctx, base);
loc_82F7B114:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7b138
	if (ctx.cr6.eq) goto loc_82F7B138;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f799a0
	ctx.lr = 0x82F7B130;
	sub_82F799A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7B138;
	sub_82EF6F38(ctx, base);
loc_82F7B138:
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x82ef70b0
	ctx.lr = 0x82F7B140;
	sub_82EF70B0(ctx, base);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b160
	if (ctx.cr6.eq) goto loc_82F7B160;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7B160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7B160:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f97788
	ctx.lr = 0x82F7B168;
	sub_82F97788(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b188
	if (ctx.cr6.eq) goto loc_82F7B188;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7B188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7B188:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b1a8
	if (ctx.cr6.eq) goto loc_82F7B1A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7B1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7B1A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b1c8
	if (ctx.cr6.eq) goto loc_82F7B1C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7B1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7B1C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82F7B1D0;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F7B1E8"))) PPC_WEAK_FUNC(sub_82F7B1E8);
PPC_FUNC_IMPL(__imp__sub_82F7B1E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f740b8
	ctx.lr = 0x82F7B214;
	sub_82F740B8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f7b25c
	if (ctx.cr6.eq) goto loc_82F7B25C;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r6,r31,-1
	ctx.r6.s64 = ctx.r31.s64 + -1;
	// bne cr6,0x82f7b238
	if (!ctx.cr6.eq) goto loc_82F7B238;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82F7B238:
	// bl 0x82f779c8
	ctx.lr = 0x82F7B23C;
	sub_82F779C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7b25c
	if (ctx.cr0.eq) goto loc_82F7B25C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82f6f1d0
	ctx.lr = 0x82F7B250;
	sub_82F6F1D0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82f7a940
	ctx.lr = 0x82F7B25C;
	sub_82F7A940(ctx, base);
loc_82F7B25C:
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

__attribute__((alias("__imp__sub_82F7B274"))) PPC_WEAK_FUNC(sub_82F7B274);
PPC_FUNC_IMPL(__imp__sub_82F7B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7B278"))) PPC_WEAK_FUNC(sub_82F7B278);
PPC_FUNC_IMPL(__imp__sub_82F7B278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7B280;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7b2a4
	if (!ctx.cr6.eq) goto loc_82F7B2A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f7b2cc
	goto loc_82F7B2CC;
loc_82F7B2A4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f7b2d4
	if (!ctx.cr6.gt) goto loc_82F7B2D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F7B2CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f79c00
	ctx.lr = 0x82F7B2D4;
	sub_82F79C00(ctx, base);
loc_82F7B2D4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// bne cr6,0x82f7b36c
	if (!ctx.cr6.eq) goto loc_82F7B36C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82f7b330
	if (ctx.cr6.eq) goto loc_82F7B330;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82F7B330:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82f7b35c
	if (ctx.cr6.eq) goto loc_82F7B35C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82F7B35C:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f74290
	ctx.lr = 0x82F7B368;
	sub_82F74290(ctx, base);
	// b 0x82f7b460
	goto loc_82F7B460;
loc_82F7B36C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82F7B374:
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// and r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 & ctx.r8.u64;
	// mulli r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f7b374
	if (!ctx.cr6.eq) goto loc_82F7B374;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7b3fc
	if (!ctx.cr6.eq) goto loc_82F7B3FC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7b3e8
	if (ctx.cr6.eq) goto loc_82F7B3E8;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7b3e0
	if (ctx.cr6.eq) goto loc_82F7B3E0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82F7B3E0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82F7B3E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f743f8
	ctx.lr = 0x82F7B3F0;
	sub_82F743F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82f7b460
	goto loc_82F7B460;
loc_82F7B3F8:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F7B3FC:
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f7b3f8
	if (!ctx.cr6.eq) goto loc_82F7B3F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7b44c
	if (ctx.cr6.eq) goto loc_82F7B44C;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7b444
	if (ctx.cr6.eq) goto loc_82F7B444;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82F7B444:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82F7B44C:
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f743f8
	ctx.lr = 0x82F7B458;
	sub_82F743F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F7B460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7B468"))) PPC_WEAK_FUNC(sub_82F7B468);
PPC_FUNC_IMPL(__imp__sub_82F7B468) {
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
	// bl 0x82f7b0d8
	ctx.lr = 0x82F7B488;
	sub_82F7B0D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7b498
	if (ctx.cr0.eq) goto loc_82F7B498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7B498;
	sub_82EF6F38(ctx, base);
loc_82F7B498:
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

__attribute__((alias("__imp__sub_82F7B4B4"))) PPC_WEAK_FUNC(sub_82F7B4B4);
PPC_FUNC_IMPL(__imp__sub_82F7B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7B4B8"))) PPC_WEAK_FUNC(sub_82F7B4B8);
PPC_FUNC_IMPL(__imp__sub_82F7B4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F7B4C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82f7b510
	if (!ctx.cr6.lt) goto loc_82F7B510;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r27,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82F7B4E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7b504
	if (ctx.cr6.eq) goto loc_82F7B504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f79f18
	ctx.lr = 0x82F7B4FC;
	sub_82F79F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7B504;
	sub_82EF6F38(ctx, base);
loc_82F7B504:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82f7b4e4
	if (!ctx.cr0.eq) goto loc_82F7B4E4;
loc_82F7B510:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f7b564
	if (!ctx.cr6.eq) goto loc_82F7B564;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f7b544
	if (ctx.cr0.eq) goto loc_82F7B544;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f7b53c
	if (ctx.cr0.eq) goto loc_82F7B53C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f7b58c
	if (!ctx.cr6.eq) goto loc_82F7B58C;
loc_82F7B53C:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7b58c
	if (!ctx.cr0.eq) goto loc_82F7B58C;
loc_82F7B544:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b55c
	if (ctx.cr6.eq) goto loc_82F7B55C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7B55C;
	sub_82EF6F38(ctx, base);
loc_82F7B55C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x82f7b58c
	goto loc_82F7B58C;
loc_82F7B564:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f7b57c
	if (ctx.cr6.gt) goto loc_82F7B57C;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f7b58c
	if (ctx.cr6.gt) goto loc_82F7B58C;
loc_82F7B57C:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f14b28
	ctx.lr = 0x82F7B58C;
	sub_82F14B28(ctx, base);
loc_82F7B58C:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82f7b5b8
	if (!ctx.cr6.lt) goto loc_82F7B5B8;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r26,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r26.s64;
loc_82F7B59C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7b5ac
	if (ctx.cr0.eq) goto loc_82F7B5AC;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_82F7B5AC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f7b59c
	if (!ctx.cr0.eq) goto loc_82F7B59C;
loc_82F7B5B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F7B5C0"))) PPC_WEAK_FUNC(sub_82F7B5C0);
PPC_FUNC_IMPL(__imp__sub_82F7B5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F7B5C8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82f7b614
	if (ctx.cr6.eq) goto loc_82F7B614;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// and r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 & ctx.r28.u64;
	// bl 0x82f759a0
	ctx.lr = 0x82F7B5F4;
	sub_82F759A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f7b614
	if (ctx.cr0.lt) goto loc_82F7B614;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f743f8
	ctx.lr = 0x82F7B610;
	sub_82F743F8(ctx, base);
	// b 0x82f7b624
	goto loc_82F7B624;
loc_82F7B614:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f7b278
	ctx.lr = 0x82F7B624;
	sub_82F7B278(ctx, base);
loc_82F7B624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F7B62C"))) PPC_WEAK_FUNC(sub_82F7B62C);
PPC_FUNC_IMPL(__imp__sub_82F7B62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7B630"))) PPC_WEAK_FUNC(sub_82F7B630);
PPC_FUNC_IMPL(__imp__sub_82F7B630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F7B638;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r26,12
	ctx.r28.s64 = ctx.r26.s64 + 12;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f7b670
	if (ctx.cr6.eq) goto loc_82F7B670;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f7b670
	if (ctx.cr6.eq) goto loc_82F7B670;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82f6ea88
	ctx.lr = 0x82F7B668;
	sub_82F6EA88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7b848
	if (!ctx.cr0.eq) goto loc_82F7B848;
loc_82F7B670:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b690
	if (ctx.cr6.eq) goto loc_82F7B690;
	// addi r4,r26,4
	ctx.r4.s64 = ctx.r26.s64 + 4;
	// bl 0x82f76fb0
	ctx.lr = 0x82F7B684;
	sub_82F76FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne 0x82f7b694
	if (!ctx.cr0.eq) goto loc_82F7B694;
loc_82F7B690:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F7B694:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7b6ec
	if (ctx.cr6.eq) goto loc_82F7B6EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f7b6b4
	if (ctx.cr6.eq) goto loc_82F7B6B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F7B6B4:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7b6e0
	if (ctx.cr6.eq) goto loc_82F7B6E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f7b6e0
	if (!ctx.cr0.eq) goto loc_82F7B6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F7B6D8;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7B6E0;
	sub_82EF6F38(ctx, base);
loc_82F7B6E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82f7b848
	goto loc_82F7B848;
loc_82F7B6EC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// rlwinm r10,r11,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7b724
	if (ctx.cr0.eq) goto loc_82F7B724;
	// bl 0x82f75bf8
	ctx.lr = 0x82F7B708;
	sub_82F75BF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f7b71c
	if (ctx.cr0.eq) goto loc_82F7B71C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F7B71C:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82f7b800
	goto loc_82F7B800;
loc_82F7B724:
	// rlwinm r11,r11,30,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7b7dc
	if (ctx.cr0.eq) goto loc_82F7B7DC;
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// lbz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lbz r8,329(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// rlwinm r11,r9,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// beq 0x82f7b760
	if (ctx.cr0.eq) goto loc_82F7B760;
	// addi r4,r3,37
	ctx.r4.s64 = ctx.r3.s64 + 37;
	// b 0x82f7b768
	goto loc_82F7B768;
loc_82F7B760:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r8,3224
	ctx.r4.s64 = ctx.r8.s64 + 3224;
loc_82F7B768:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82f8a528
	ctx.lr = 0x82F7B7A8;
	sub_82F8A528(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7b7d8
	if (ctx.cr6.eq) goto loc_82F7B7D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f7b7d8
	if (!ctx.cr0.eq) goto loc_82F7B7D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F7B7D0;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7B7D8;
	sub_82EF6F38(ctx, base);
loc_82F7B7D8:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82F7B7DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f7b82c
	if (!ctx.cr6.eq) goto loc_82F7B82C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,12448
	ctx.r4.s64 = ctx.r11.s64 + 12448;
	// bl 0x82f8a640
	ctx.lr = 0x82F7B7F8;
	sub_82F8A640(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82F7B800:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7b828
	if (ctx.cr6.eq) goto loc_82F7B828;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f7b828
	if (!ctx.cr0.eq) goto loc_82F7B828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F7B820;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7B828;
	sub_82EF6F38(ctx, base);
loc_82F7B828:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82F7B82C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7b848
	if (ctx.cr6.eq) goto loc_82F7B848;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82f7b5c0
	ctx.lr = 0x82F7B848;
	sub_82F7B5C0(ctx, base);
loc_82F7B848:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F7B85C"))) PPC_WEAK_FUNC(sub_82F7B85C);
PPC_FUNC_IMPL(__imp__sub_82F7B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7B860"))) PPC_WEAK_FUNC(sub_82F7B860);
PPC_FUNC_IMPL(__imp__sub_82F7B860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82F7B868;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74f0
	ctx.lr = 0x82F7B870;
	sub_82CA74F0(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,244(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 244);
	// stw r28,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f75d00
	ctx.lr = 0x82F7B89C;
	sub_82F75D00(ctx, base);
	// addi r6,r14,1284
	ctx.r6.s64 = ctx.r14.s64 + 1284;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,16(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// bl 0x82f76a40
	ctx.lr = 0x82F7B8B8;
	sub_82F76A40(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82f76980
	ctx.lr = 0x82F7B8C0;
	sub_82F76980(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,326(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 326);
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// lfd f13,288(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lbz r11,37(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 37);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7b908
	if (ctx.cr0.eq) goto loc_82F7B908;
	// lbz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82f7b90c
	if (!ctx.cr0.eq) goto loc_82F7B90C;
loc_82F7B908:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82F7B90C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7b918
	if (ctx.cr0.eq) goto loc_82F7B918;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82F7B918:
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r29,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f94a10
	ctx.lr = 0x82F7B928;
	sub_82F94A10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,1024
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1024, ctx.xer);
	// bge cr6,0x82f7b948
	if (!ctx.cr6.lt) goto loc_82F7B948;
	// lwz r11,248(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 248);
	// addi r15,r14,248
	ctx.r15.s64 = ctx.r14.s64 + 248;
	// rlwimi r31,r11,0,0,3
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF0000000) | (ctx.r31.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r31,248(r14)
	PPC_STORE_U32(ctx.r14.u32 + 248, ctx.r31.u32);
	// b 0x82f7b9a4
	goto loc_82F7B9A4;
loc_82F7B948:
	// lwz r4,1272(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f7b98c
	if (ctx.cr6.eq) goto loc_82F7B98C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f7b984
	if (ctx.cr6.lt) goto loc_82F7B984;
	// addi r30,r17,264
	ctx.r30.s64 = ctx.r17.s64 + 264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f957e0
	ctx.lr = 0x82F7B970;
	sub_82F957E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f94898
	ctx.lr = 0x82F7B980;
	sub_82F94898(ctx, base);
	// stw r3,1272(r14)
	PPC_STORE_U32(ctx.r14.u32 + 1272, ctx.r3.u32);
loc_82F7B984:
	// lwz r15,1272(r14)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1272);
	// b 0x82f7b9a4
	goto loc_82F7B9A4;
loc_82F7B98C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r3,r17,264
	ctx.r3.s64 = ctx.r17.s64 + 264;
	// bl 0x82f94898
	ctx.lr = 0x82F7B99C;
	sub_82F94898(ctx, base);
	// stw r3,1272(r14)
	PPC_STORE_U32(ctx.r14.u32 + 1272, ctx.r3.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
loc_82F7B9A4:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,30,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// stw r20,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r20.u32);
	// stw r20,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r20.u32);
	// sth r20,38(r15)
	PPC_STORE_U16(ctx.r15.u32 + 38, ctx.r20.u16);
	// sth r20,40(r15)
	PPC_STORE_U16(ctx.r15.u32 + 40, ctx.r20.u16);
	// stw r20,16(r15)
	PPC_STORE_U32(ctx.r15.u32 + 16, ctx.r20.u32);
	// stw r20,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r20.u32);
	// stw r20,24(r15)
	PPC_STORE_U32(ctx.r15.u32 + 24, ctx.r20.u32);
	// stw r20,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r20.u32);
	// stw r20,32(r15)
	PPC_STORE_U32(ctx.r15.u32 + 32, ctx.r20.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// beq 0x82f7b9f4
	if (ctx.cr0.eq) goto loc_82F7B9F4;
	// stb r29,28(r15)
	PPC_STORE_U8(ctx.r15.u32 + 28, ctx.r29.u8);
	// b 0x82f7b9f8
	goto loc_82F7B9F8;
loc_82F7B9F4:
	// stw r29,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r29.u32);
loc_82F7B9F8:
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// beq 0x82f7ba14
	if (ctx.cr0.eq) goto loc_82F7BA14;
	// lwz r10,8(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// rlwimi r10,r11,0,8,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFF000000);
	// stw r10,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r10.u32);
	// b 0x82f7ba18
	goto loc_82F7BA18;
loc_82F7BA14:
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
loc_82F7BA18:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ba2c
	if (ctx.cr0.eq) goto loc_82F7BA2C;
	// lbz r30,28(r15)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r15.u32 + 28);
	// b 0x82f7ba30
	goto loc_82F7BA30;
loc_82F7BA2C:
	// lwz r30,4(r15)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
loc_82F7BA30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r15,30
	ctx.r31.s64 = ctx.r15.s64 + 30;
	// bne cr6,0x82f7ba40
	if (!ctx.cr6.eq) goto loc_82F7BA40;
	// addi r31,r15,42
	ctx.r31.s64 = ctx.r15.s64 + 42;
loc_82F7BA40:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82f94948
	ctx.lr = 0x82F7BA48;
	sub_82F94948(ctx, base);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r20,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r20.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// stw r20,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r20,1320(r14)
	PPC_STORE_U32(ctx.r14.u32 + 1320, ctx.r20.u32);
	// stw r20,1324(r14)
	PPC_STORE_U32(ctx.r14.u32 + 1324, ctx.r20.u32);
	// stw r20,1328(r14)
	PPC_STORE_U32(ctx.r14.u32 + 1328, ctx.r20.u32);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// stw r20,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r20.u32);
	// stw r20,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r20.u32);
	// sth r20,328(r1)
	PPC_STORE_U16(ctx.r1.u32 + 328, ctx.r20.u16);
	// stw r20,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r20.u32);
	// stw r20,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r20.u32);
	// stw r20,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r20.u32);
	// stw r20,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r20.u32);
	// lbz r11,37(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 37);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7baa8
	if (ctx.cr0.eq) goto loc_82F7BAA8;
	// lbz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82f7baac
	if (!ctx.cr0.eq) goto loc_82F7BAAC;
loc_82F7BAA8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82F7BAAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7bcbc
	if (ctx.cr0.eq) goto loc_82F7BCBC;
	// sth r20,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r20.u16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f76b18
	ctx.lr = 0x82F7BAC0;
	sub_82F76B18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,300
	ctx.r28.s64 = 300;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82f7bcb0
	if (ctx.cr6.eq) goto loc_82F7BCB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82f7b630
	ctx.lr = 0x82F7BAE0;
	sub_82F7B630(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f7baf4
	if (ctx.cr0.eq) goto loc_82F7BAF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F7BAF4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,9679
	ctx.r4.s64 = 9679;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7BB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// andi. r11,r11,65471
	ctx.r11.u64 = ctx.r11.u64 & 65471;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82f6f4b0
	ctx.lr = 0x82F7BB34;
	sub_82F6F4B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-11080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82f6d248
	ctx.lr = 0x82F7BB48;
	sub_82F6D248(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// lwz r31,28(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// beq cr6,0x82f7bc30
	if (ctx.cr6.eq) goto loc_82F7BC30;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f7bc34
	if (ctx.cr6.lt) goto loc_82F7BC34;
loc_82F7BC30:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7BC34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7bc44
	if (!ctx.cr0.eq) goto loc_82F7BC44;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
loc_82F7BC44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7bc88
	if (ctx.cr6.eq) goto loc_82F7BC88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f7bc88
	if (!ctx.cr6.eq) goto loc_82F7BC88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F7BC80;
	sub_82F04C78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7BC88;
	sub_82EF6F38(ctx, base);
loc_82F7BC88:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x82f7bcb0
	if (!ctx.cr0.eq) goto loc_82F7BCB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F7BCA8;
	sub_82F04C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7BCB0;
	sub_82EF6F38(ctx, base);
loc_82F7BCB0:
	// li r11,400
	ctx.r11.s64 = 400;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// b 0x82f7bcc4
	goto loc_82F7BCC4;
loc_82F7BCBC:
	// lha r11,22(r27)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r27.u32 + 22));
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
loc_82F7BCC4:
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// lhz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 20);
	// stw r20,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r20.u32);
	// lhz r10,26(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 26);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lhz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7bd10
	if (ctx.cr6.eq) goto loc_82F7BD10;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stw r10,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// b 0x82f7bd14
	goto loc_82F7BD14;
loc_82F7BD10:
	// stw r20,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r20.u32);
loc_82F7BD14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f22,-31092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31092);
	ctx.f22.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f23,2756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2756);
	ctx.f23.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f28,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f28.f64 = double(temp.f32);
	// lfs f24,3056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	ctx.f24.f64 = double(temp.f32);
	// addi r11,r11,12456
	ctx.r11.s64 = ctx.r11.s64 + 12456;
	// lfs f25,9076(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9076);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,3800(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3800);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,3080(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3080);
	ctx.f27.f64 = double(temp.f32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
loc_82F7BD58:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7bd78
	if (ctx.cr6.eq) goto loc_82F7BD78;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f7bd7c
	if (ctx.cr6.lt) goto loc_82F7BD7C;
loc_82F7BD78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7BD7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7c804
	if (!ctx.cr0.eq) goto loc_82F7C804;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f76b18
	ctx.lr = 0x82F7BD8C;
	sub_82F76B18(ctx, base);
	// lwz r8,32(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7bdfc
	if (ctx.cr6.eq) goto loc_82F7BDFC;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82f6d7d0
	ctx.lr = 0x82F7BDB4;
	sub_82F6D7D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,300
	ctx.r6.s64 = ctx.r1.s64 + 300;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82f73dc0
	ctx.lr = 0x82F7BDC8;
	sub_82F73DC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f7bde4
	if (ctx.cr0.eq) goto loc_82F7BDE4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7BDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7BDE4:
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7be3c
	if (ctx.cr6.eq) goto loc_82F7BE3C;
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82f7be3c
	goto loc_82F7BE3C;
loc_82F7BDFC:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f7be3c
	if (ctx.cr6.eq) goto loc_82F7BE3C;
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7be3c
	if (ctx.cr0.eq) goto loc_82F7BE3C;
	// bl 0x82f6e6e0
	ctx.lr = 0x82F7BE1C;
	sub_82F6E6E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f7be38
	if (ctx.cr0.eq) goto loc_82F7BE38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7BE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7BE38:
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
loc_82F7BE3C:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82f7c0f4
	if (!ctx.cr6.eq) goto loc_82F7C0F4;
	// lhz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -160;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r22,r11,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq 0x82f7be88
	if (ctx.cr0.eq) goto loc_82F7BE88;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7be80
	if (!ctx.cr0.eq) goto loc_82F7BE80;
	// bl 0x82ca6bd0
	ctx.lr = 0x82F7BE78;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f7be88
	if (!ctx.cr0.eq) goto loc_82F7BE88;
loc_82F7BE80:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82f7be8c
	goto loc_82F7BE8C;
loc_82F7BE88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7BE8C:
	// lbz r10,329(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 329);
	// clrlwi r18,r11,24
	ctx.r18.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7bebc
	if (ctx.cr0.eq) goto loc_82F7BEBC;
	// lhz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82f7beb0
	if (ctx.cr6.eq) goto loc_82F7BEB0;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7bebc
	if (ctx.cr0.eq) goto loc_82F7BEBC;
loc_82F7BEB0:
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f73d58
	ctx.lr = 0x82F7BEBC;
	sub_82F73D58(ctx, base);
loc_82F7BEBC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7beec
	if (ctx.cr6.eq) goto loc_82F7BEEC;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7beec
	if (!ctx.cr6.eq) goto loc_82F7BEEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82f7bf20
	goto loc_82F7BF20;
loc_82F7BEEC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f7b630
	ctx.lr = 0x82F7BF00;
	sub_82F7B630(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f7bf14
	if (ctx.cr0.eq) goto loc_82F7BF14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82F7BF14:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7c7e0
	if (ctx.cr6.eq) goto loc_82F7C7E0;
loc_82F7BF20:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r26,16(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82f6f4b0
	ctx.lr = 0x82F7BF34;
	sub_82F6F4B0(ctx, base);
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lhz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmuls f31,f29,f25
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f7c000
	if (ctx.cr6.eq) goto loc_82F7C000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c000
	if (ctx.cr6.eq) goto loc_82F7C000;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7BF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x82f7bfe0
	if (!ctx.cr6.eq) goto loc_82F7BFE0;
	// lwz r11,1316(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7bfe0
	if (ctx.cr6.eq) goto loc_82F7BFE0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,-27624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27624);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x82f7bfe0
	if (!ctx.cr6.lt) goto loc_82F7BFE0;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-27624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27624, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7BFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1316(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1316);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lhz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82ef6558
	ctx.lr = 0x82F7BFE0;
	sub_82EF6558(ctx, base);
loc_82F7BFE0:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7BFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x82f7c040
	goto loc_82F7C040;
loc_82F7C000:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7C018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7C038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmuls f30,f0,f24
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
loc_82F7C040:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c09c
	if (ctx.cr6.eq) goto loc_82F7C09C;
	// lbz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 260);
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f7c084
	if (ctx.cr0.eq) goto loc_82F7C084;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7C080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_82F7C084:
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82f7c0ac
	goto loc_82F7C0AC;
loc_82F7C09C:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F7C0AC:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7C0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f23.f64));
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fsel f0,f13,f0,f30
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r25,108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// beq 0x82f7c134
	if (ctx.cr0.eq) goto loc_82F7C134;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x82f7c138
	goto loc_82F7C138;
loc_82F7C0F4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r25,32(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// std r11,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r11.u64);
	// lfd f0,400(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f30,f0,f22
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f22.f64));
loc_82F7C134:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82F7C138:
	// lbz r10,329(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 329);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// beq 0x82f7c314
	if (ctx.cr0.eq) goto loc_82F7C314;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7c314
	if (!ctx.cr0.eq) goto loc_82F7C314;
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lfs f13,84(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwa r10,224(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 224));
	// std r10,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,92(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// lfd f13,376(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,384(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82f7c314
	if (!ctx.cr6.gt) goto loc_82F7C314;
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c1d0
	if (ctx.cr6.eq) goto loc_82F7C1D0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,520(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f7c1d4
	if (ctx.cr6.lt) goto loc_82F7C1D4;
loc_82F7C1D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7C1D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7c25c
	if (!ctx.cr0.eq) goto loc_82F7C25C;
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r10,552(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r9,556(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r8,560(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// lwz r7,564(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// bl 0x82f95690
	ctx.lr = 0x82F7C210;
	sub_82F95690(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f76cd8
	ctx.lr = 0x82F7C21C;
	sub_82F76CD8(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82f76980
	ctx.lr = 0x82F7C224;
	sub_82F76980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82f76cd8
	ctx.lr = 0x82F7C230;
	sub_82F76CD8(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82f76c40
	ctx.lr = 0x82F7C238;
	sub_82F76C40(ctx, base);
	// lwz r11,1020(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82f76b18
	ctx.lr = 0x82F7C24C;
	sub_82F76B18(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x82f7c274
	goto loc_82F7C274;
loc_82F7C25C:
	// lwz r11,1020(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82f76b18
	ctx.lr = 0x82F7C26C;
	sub_82F76B18(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82F7C274:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c29c
	if (ctx.cr6.eq) goto loc_82F7C29C;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_82F7C29C:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r6,264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82f77b28
	ctx.lr = 0x82F7C2B4;
	sub_82F77B28(ctx, base);
	// stfs f28,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// stb r20,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r20.u8);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r20,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
	// stfs f28,128(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// stb r20,261(r1)
	PPC_STORE_U8(ctx.r1.u32 + 261, ctx.r20.u8);
	// stw r20,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// stw r20,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r20.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7c300
	if (ctx.cr0.eq) goto loc_82F7C300;
	// lwz r11,8(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// rlwimi r11,r31,0,8,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFF000000);
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// b 0x82f7c304
	goto loc_82F7C304;
loc_82F7C300:
	// stw r31,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r31.u32);
loc_82F7C304:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7c314
	if (ctx.cr0.eq) goto loc_82F7C314;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// b 0x82f7c798
	goto loc_82F7C798;
loc_82F7C314:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c350
	if (ctx.cr6.eq) goto loc_82F7C350;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// blt cr6,0x82f7c33c
	if (ctx.cr6.lt) goto loc_82F7C33C;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r29,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r29.u16);
	// andi. r9,r9,65471
	ctx.r9.u64 = ctx.r9.u64 & 65471;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x82f7c34c
	goto loc_82F7C34C;
loc_82F7C33C:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// neg r8,r29
	ctx.r8.s64 = -ctx.r29.s64;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
loc_82F7C34C:
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
loc_82F7C350:
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r24,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u16);
	// sth r20,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r20.u16);
	// beq cr6,0x82f7c3fc
	if (ctx.cr6.eq) goto loc_82F7C3FC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82f6d2c0
	ctx.lr = 0x82F7C37C;
	sub_82F6D2C0(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// rlwimi r10,r11,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// addi r3,r19,48
	ctx.r3.s64 = ctx.r19.s64 + 48;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// stfs f28,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f28,284(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stb r20,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r20.u8);
	// bl 0x82f661f0
	ctx.lr = 0x82F7C3A8;
	sub_82F661F0(ctx, base);
	// lfs f0,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f11,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f0,f0,f13,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,36(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f13,392(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// b 0x82f7c67c
	goto loc_82F7C67C;
loc_82F7C3FC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82f6d248
	ctx.lr = 0x82F7C410;
	sub_82F6D248(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f7c47c
	if (ctx.cr6.eq) goto loc_82F7C47C;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82F7C47C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f7c4dc
	if (ctx.cr6.eq) goto loc_82F7C4DC;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
loc_82F7C4DC:
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lhz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f7c56c
	if (ctx.cr6.eq) goto loc_82F7C56C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c574
	if (ctx.cr6.eq) goto loc_82F7C574;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7c51c
	if (!ctx.cr0.eq) goto loc_82F7C51C;
	// clrlwi. r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7c528
	if (ctx.cr0.eq) goto loc_82F7C528;
loc_82F7C51C:
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
loc_82F7C528:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c54c
	if (ctx.cr6.eq) goto loc_82F7C54C;
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// b 0x82f7c558
	goto loc_82F7C558;
loc_82F7C54C:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r20,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_82F7C558:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,0,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// b 0x82f7c5b8
	goto loc_82F7C5B8;
loc_82F7C56C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7c584
	if (!ctx.cr6.eq) goto loc_82F7C584;
loc_82F7C574:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// b 0x82f7c594
	goto loc_82F7C594;
loc_82F7C584:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,0,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_82F7C594:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// stb r10,261(r1)
	PPC_STORE_U8(ctx.r1.u32 + 261, ctx.r10.u8);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f7c5c8
	if (!ctx.cr6.eq) goto loc_82F7C5C8;
loc_82F7C5B8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6f3c0
	ctx.lr = 0x82F7C5C8;
	sub_82F6F3C0(ctx, base);
loc_82F7C5C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7c5e4
	if (ctx.cr0.eq) goto loc_82F7C5E4;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x82f7c5ec
	goto loc_82F7C5EC;
loc_82F7C5E4:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// andi. r11,r11,64511
	ctx.r11.u64 = ctx.r11.u64 & 64511;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F7C5EC:
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7c60c
	if (ctx.cr0.eq) goto loc_82F7C60C;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x82f7c614
	goto loc_82F7C614;
loc_82F7C60C:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// andi. r11,r11,65407
	ctx.r11.u64 = ctx.r11.u64 & 65407;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F7C614:
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f7c62c
	if (ctx.cr6.eq) goto loc_82F7C62C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82F7C62C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c664
	if (ctx.cr6.eq) goto loc_82F7C664;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f7c664
	if (!ctx.cr6.eq) goto loc_82F7C664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F7C65C;
	sub_82F04C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7C664;
	sub_82EF6F38(ctx, base);
loc_82F7C664:
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stb r11,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r11.u8);
loc_82F7C67C:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7c6c8
	if (!ctx.cr6.lt) goto loc_82F7C6C8;
	// lhz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82f7c6c8
	if (!ctx.cr6.eq) goto loc_82F7C6C8;
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82f7c6c4
	if (!ctx.cr6.gt) goto loc_82F7C6C4;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r11.u64);
	// lfd f0,408(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
loc_82F7C6C4:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
loc_82F7C6C8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lhz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lhz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 88);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7c720
	if (ctx.cr0.eq) goto loc_82F7C720;
	// lha r11,32(r10)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 32));
	// std r11,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// lfd f0,416(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82F7C720:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7c744
	if (ctx.cr6.eq) goto loc_82F7C744;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f7c748
	if (ctx.cr6.lt) goto loc_82F7C748;
loc_82F7C744:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7C748:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7c758
	if (!ctx.cr0.eq) goto loc_82F7C758;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
loc_82F7C758:
	// lbz r11,329(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 329);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7c798
	if (ctx.cr0.eq) goto loc_82F7C798;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82f7c798
	if (!ctx.cr6.eq) goto loc_82F7C798;
	// lhz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82f7c780
	if (ctx.cr6.eq) goto loc_82F7C780;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7c798
	if (ctx.cr0.eq) goto loc_82F7C798;
loc_82F7C780:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82f76cd8
	ctx.lr = 0x82F7C78C;
	sub_82F76CD8(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82f73d58
	ctx.lr = 0x82F7C798;
	sub_82F73D58(ctx, base);
loc_82F7C798:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f7c7c0
	if (ctx.cr6.eq) goto loc_82F7C7C0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// bne 0x82f7c7c0
	if (!ctx.cr0.eq) goto loc_82F7C7C0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F7C7B8;
	sub_82F04C78(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7C7C0;
	sub_82EF6F38(ctx, base);
loc_82F7C7C0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f7c7e0
	if (ctx.cr6.eq) goto loc_82F7C7E0;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7C7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7C7E0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7bd58
	if (ctx.cr6.eq) goto loc_82F7BD58;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82F7C7F0:
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82f72cd8
	ctx.lr = 0x82F7C7F8;
	sub_82F72CD8(ctx, base);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82f7c7f0
	if (!ctx.cr0.eq) goto loc_82F7C7F0;
	// b 0x82f7bd58
	goto loc_82F7BD58;
loc_82F7C804:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r6,264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82f77b28
	ctx.lr = 0x82F7C81C;
	sub_82F77B28(ctx, base);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7c83c
	if (ctx.cr6.eq) goto loc_82F7C83C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7C83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7C83C:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82f76c40
	ctx.lr = 0x82F7C844;
	sub_82F76C40(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f76c40
	ctx.lr = 0x82F7C84C;
	sub_82F76C40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f76bf0
	ctx.lr = 0x82F7C854;
	sub_82F76BF0(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca753c
	ctx.lr = 0x82F7C860;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F7C864"))) PPC_WEAK_FUNC(sub_82F7C864);
PPC_FUNC_IMPL(__imp__sub_82F7C864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7C868"))) PPC_WEAK_FUNC(sub_82F7C868);
PPC_FUNC_IMPL(__imp__sub_82F7C868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82F7C870;
	sub_82CA2BD0(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82ca7504
	ctx.lr = 0x82F7C878;
	sub_82CA7504(ctx, base);
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// lbz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 328);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm. r10,r10,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7c8a8
	if (ctx.cr0.eq) goto loc_82F7C8A8;
	// lbz r10,330(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 330);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,330(r29)
	PPC_STORE_U8(ctx.r29.u32 + 330, ctx.r10.u8);
loc_82F7C8A8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,200(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 200);
	// addi r23,r29,48
	ctx.r23.s64 = ctx.r29.s64 + 48;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// rlwinm r9,r9,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// addi r27,r11,20
	ctx.r27.s64 = ctx.r11.s64 + 20;
	// lfs f31,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82f70eb8
	ctx.lr = 0x82F7C8E0;
	sub_82F70EB8(ctx, base);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stfs f31,1536(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1536, temp.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r11,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,1532(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1532, temp.u32);
	// stb r26,1588(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1588, ctx.r26.u8);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// stb r26,1589(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1589, ctx.r26.u8);
	// stw r31,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r31.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// lfs f27,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f27.f64 = double(temp.f32);
loc_82F7C910:
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82F7C918:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f7c938
	if (ctx.cr6.eq) goto loc_82F7C938;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f7c938
	if (ctx.cr6.lt) goto loc_82F7C938;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f7c93c
	if (ctx.cr6.lt) goto loc_82F7C93C;
loc_82F7C938:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7C93C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f7d030
	if (!ctx.cr0.eq) goto loc_82F7D030;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x82f7c970
	if (ctx.cr6.eq) goto loc_82F7C970;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7c970
	if (!ctx.cr6.lt) goto loc_82F7C970;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7c974
	if (!ctx.cr6.lt) goto loc_82F7C974;
loc_82F7C970:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7C974:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7cf38
	if (!ctx.cr0.eq) goto loc_82F7CF38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,330(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 330);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne 0x82f7cd54
	if (!ctx.cr0.eq) goto loc_82F7CD54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm. r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f7c9ac
	if (ctx.cr0.eq) goto loc_82F7C9AC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82f7c9b0
	goto loc_82F7C9B0;
loc_82F7C9AC:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82F7C9B0:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7cd54
	if (!ctx.cr6.eq) goto loc_82F7CD54;
	// lhz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7c9cc
	if (ctx.cr6.eq) goto loc_82F7C9CC;
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// b 0x82f7c9d0
	goto loc_82F7C9D0;
loc_82F7C9CC:
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
loc_82F7C9D0:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7cd54
	if (!ctx.cr6.eq) goto loc_82F7CD54;
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_82F7C9E4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7c9fc
	if (!ctx.cr6.lt) goto loc_82F7C9FC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7ca00
	if (!ctx.cr6.lt) goto loc_82F7CA00;
loc_82F7C9FC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7CA00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7cd40
	if (!ctx.cr0.eq) goto loc_82F7CD40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ca2c
	if (ctx.cr0.eq) goto loc_82F7CA2C;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82f7ca30
	goto loc_82F7CA30;
loc_82F7CA2C:
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
loc_82F7CA30:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7cd40
	if (!ctx.cr6.eq) goto loc_82F7CD40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7ca54
	if (ctx.cr6.eq) goto loc_82F7CA54;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// rlwimi r10,r31,0,8,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFF000000);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x82f7ca58
	goto loc_82F7CA58;
loc_82F7CA54:
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
loc_82F7CA58:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwa r11,12(r8)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 12));
	// beq 0x82f7ca74
	if (ctx.cr0.eq) goto loc_82F7CA74;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// b 0x82f7ca7c
	goto loc_82F7CA7C;
loc_82F7CA74:
	// std r11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lfd f0,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
loc_82F7CA7C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwa r11,16(r8)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 16));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x82f7caa8
	if (ctx.cr6.eq) goto loc_82F7CAA8;
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// b 0x82f7cab0
	goto loc_82F7CAB0;
loc_82F7CAA8:
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
loc_82F7CAB0:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x82f7cad4
	if (ctx.cr6.eq) goto loc_82F7CAD4;
	// lbz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// b 0x82f7cad8
	goto loc_82F7CAD8;
loc_82F7CAD4:
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
loc_82F7CAD8:
	// lfs f0,1532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r12,16
	ctx.r12.s64 = 16;
	// stfiwx f0,r8,r12
	PPC_STORE_U32(ctx.r8.u32 + ctx.r12.u32, ctx.f0.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f7cb00
	if (ctx.cr6.eq) goto loc_82F7CB00;
	// lhz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 20);
	// b 0x82f7cb04
	goto loc_82F7CB04;
loc_82F7CB00:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
loc_82F7CB04:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82f7cb10
	if (ctx.cr6.lt) goto loc_82F7CB10;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82F7CB10:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f7cb30
	if (ctx.cr6.eq) goto loc_82F7CB30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F7CB24;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7cb30
	if (ctx.cr0.eq) goto loc_82F7CB30;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82F7CB30:
	// lfs f0,1532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82f7cb54
	if (!ctx.cr6.eq) goto loc_82F7CB54;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f7cb8c
	if (ctx.cr6.eq) goto loc_82F7CB8C;
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7cb8c
	if (!ctx.cr0.eq) goto loc_82F7CB8C;
loc_82F7CB54:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f7cb64
	if (ctx.cr6.eq) goto loc_82F7CB64;
	// lhz r11,22(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 22);
	// b 0x82f7cb68
	goto loc_82F7CB68;
loc_82F7CB64:
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
loc_82F7CB68:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F7CB8C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f7cb9c
	if (ctx.cr6.eq) goto loc_82F7CB9C;
	// lhz r10,22(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 22);
	// b 0x82f7cba0
	goto loc_82F7CBA0;
loc_82F7CB9C:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
loc_82F7CBA0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f7cbb4
	if (ctx.cr6.eq) goto loc_82F7CBB4;
	// lbz r11,29(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 29);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82f7cbb8
	goto loc_82F7CBB8;
loc_82F7CBB4:
	// lha r11,40(r8)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 40));
loc_82F7CBB8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,329(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 329);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,1532(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1532, temp.u32);
	// beq 0x82f7cc94
	if (ctx.cr0.eq) goto loc_82F7CC94;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r11,4,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82f7cc40
	if (ctx.cr6.eq) goto loc_82F7CC40;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82f7cc94
	if (!ctx.cr6.eq) goto loc_82F7CC94;
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7cc0c
	if (ctx.cr0.eq) goto loc_82F7CC0C;
	// lhz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 20);
	// b 0x82f7cc10
	goto loc_82F7CC10;
loc_82F7CC0C:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
loc_82F7CC10:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfs f13,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmsubs f0,f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 - ctx.f13.f64));
	// b 0x82f7cc78
	goto loc_82F7CC78;
loc_82F7CC40:
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7cc50
	if (ctx.cr0.eq) goto loc_82F7CC50;
	// lhz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 20);
	// b 0x82f7cc54
	goto loc_82F7CC54;
loc_82F7CC50:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
loc_82F7CC54:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82F7CC78:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,12
	ctx.r12.s64 = 12;
	// stfiwx f0,r8,r12
	PPC_STORE_U32(ctx.r8.u32 + ctx.r12.u32, ctx.f0.u32);
	// stb r22,1588(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1588, ctx.r22.u8);
loc_82F7CC94:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwa r10,12(r8)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 12));
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ccb0
	if (ctx.cr0.eq) goto loc_82F7CCB0;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// b 0x82f7ccb8
	goto loc_82F7CCB8;
loc_82F7CCB0:
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
loc_82F7CCB8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f7cd10
	if (!ctx.cr6.eq) goto loc_82F7CD10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwa r11,16(r8)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 16));
	// beq cr6,0x82f7ccec
	if (ctx.cr6.eq) goto loc_82F7CCEC;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// b 0x82f7ccf4
	goto loc_82F7CCF4;
loc_82F7CCEC:
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82F7CCF4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f7cd20
	if (ctx.cr6.eq) goto loc_82F7CD20;
loc_82F7CD10:
	// lbz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 200);
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,200(r29)
	PPC_STORE_U8(ctx.r29.u32 + 200, ctx.r11.u8);
loc_82F7CD20:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7c9e4
	if (!ctx.cr6.lt) goto loc_82F7C9E4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// b 0x82f7c9e4
	goto loc_82F7C9E4;
loc_82F7CD40:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f7c918
	if (!ctx.cr6.lt) goto loc_82F7C918;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82f7c918
	goto loc_82F7C918;
loc_82F7CD54:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq 0x82f7cd78
	if (ctx.cr0.eq) goto loc_82F7CD78;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f7cd80
	if (ctx.cr6.eq) goto loc_82F7CD80;
loc_82F7CD78:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82f7ce4c
	if (!ctx.cr6.eq) goto loc_82F7CE4C;
loc_82F7CD80:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7cd94
	if (ctx.cr6.eq) goto loc_82F7CD94;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82f7cd98
	goto loc_82F7CD98;
loc_82F7CD94:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82F7CD98:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82F7CD9C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f7cdb4
	if (!ctx.cr6.lt) goto loc_82F7CDB4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7cdb8
	if (!ctx.cr6.lt) goto loc_82F7CDB8;
loc_82F7CDB4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7CDB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7ce00
	if (!ctx.cr0.eq) goto loc_82F7CE00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f7cde0
	if (ctx.cr0.eq) goto loc_82F7CDE0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82f7cde4
	goto loc_82F7CDE4;
loc_82F7CDE0:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82F7CDE4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f7ce00
	if (!ctx.cr6.eq) goto loc_82F7CE00;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f7cd9c
	if (!ctx.cr6.lt) goto loc_82F7CD9C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82f7cd9c
	goto loc_82F7CD9C;
loc_82F7CE00:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f7c918
	if (ctx.cr6.eq) goto loc_82F7C918;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7ce20
	if (!ctx.cr6.lt) goto loc_82F7CE20;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7ce24
	if (!ctx.cr6.lt) goto loc_82F7CE24;
loc_82F7CE20:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7CE24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7ce38
	if (!ctx.cr0.eq) goto loc_82F7CE38;
	// bl 0x82f975e0
	ctx.lr = 0x82F7CE30;
	sub_82F975E0(ctx, base);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82F7CE38:
	// lbz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 200);
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,200(r29)
	PPC_STORE_U8(ctx.r29.u32 + 200, ctx.r11.u8);
	// b 0x82f7c918
	goto loc_82F7C918;
loc_82F7CE4C:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7ce60
	if (ctx.cr6.eq) goto loc_82F7CE60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82f7ce64
	goto loc_82F7CE64;
loc_82F7CE60:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82F7CE64:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7cf38
	if (!ctx.cr6.eq) goto loc_82F7CF38;
	// lhz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7ce80
	if (ctx.cr6.eq) goto loc_82F7CE80;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// b 0x82f7ce84
	goto loc_82F7CE84;
loc_82F7CE80:
	// lhz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
loc_82F7CE84:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f7cf38
	if (ctx.cr6.eq) goto loc_82F7CF38;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82F7CE9C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f7ceb4
	if (!ctx.cr6.lt) goto loc_82F7CEB4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7ceb8
	if (!ctx.cr6.lt) goto loc_82F7CEB8;
loc_82F7CEB4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7CEB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7cf00
	if (!ctx.cr0.eq) goto loc_82F7CF00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f7cee0
	if (ctx.cr0.eq) goto loc_82F7CEE0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82f7cee4
	goto loc_82F7CEE4;
loc_82F7CEE0:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82F7CEE4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f7cf00
	if (!ctx.cr6.eq) goto loc_82F7CF00;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f7ce9c
	if (!ctx.cr6.lt) goto loc_82F7CE9C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82f7ce9c
	goto loc_82F7CE9C;
loc_82F7CF00:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7cf18
	if (!ctx.cr6.lt) goto loc_82F7CF18;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7cf1c
	if (!ctx.cr6.lt) goto loc_82F7CF1C;
loc_82F7CF18:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7CF1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7cf28
	if (!ctx.cr0.eq) goto loc_82F7CF28;
	// bl 0x82f975e0
	ctx.lr = 0x82F7CF28;
	sub_82F975E0(ctx, base);
loc_82F7CF28:
	// lbz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 200);
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,200(r29)
	PPC_STORE_U8(ctx.r29.u32 + 200, ctx.r11.u8);
loc_82F7CF38:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f72ab8
	ctx.lr = 0x82F7CF50;
	sub_82F72AB8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,1540
	ctx.r3.s64 = ctx.r1.s64 + 1540;
	// bl 0x82f73d58
	ctx.lr = 0x82F7CF5C;
	sub_82F73D58(ctx, base);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7cf7c
	if (ctx.cr6.eq) goto loc_82F7CF7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7CF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7CF7C:
	// lfs f0,1532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stfs f0,1536(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1536, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f7b860
	ctx.lr = 0x82F7CF94;
	sub_82F7B860(ctx, base);
	// lbz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 200);
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,200(r29)
	PPC_STORE_U8(ctx.r29.u32 + 200, ctx.r10.u8);
	// lwz r11,1576(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1576);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82f7cfb4
	if (ctx.cr6.lt) goto loc_82F7CFB4;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82F7CFB4:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7cfdc
	if (ctx.cr6.eq) goto loc_82F7CFDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F7CFC8;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7cfd4
	if (ctx.cr0.eq) goto loc_82F7CFD4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F7CFD4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82f7cff4
	if (!ctx.cr6.eq) goto loc_82F7CFF4;
loc_82F7CFDC:
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f7d01c
	if (ctx.cr6.eq) goto loc_82F7D01C;
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d01c
	if (!ctx.cr0.eq) goto loc_82F7D01C;
loc_82F7CFF4:
	// lwa r11,1580(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 1580));
	// lfs f0,1536(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1536);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F7D01C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f7c910
	if (!ctx.cr6.lt) goto loc_82F7C910;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82f7c910
	goto loc_82F7C910;
loc_82F7D030:
	// beq cr6,0x82f7d04c
	if (ctx.cr6.eq) goto loc_82F7D04C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7d04c
	if (!ctx.cr6.lt) goto loc_82F7D04C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7d050
	if (!ctx.cr6.lt) goto loc_82F7D050;
loc_82F7D04C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7D050:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d0b0
	if (!ctx.cr0.eq) goto loc_82F7D0B0;
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bge cr6,0x82f7d06c
	if (!ctx.cr6.lt) goto loc_82F7D06C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82F7D06C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f7d08c
	if (ctx.cr6.eq) goto loc_82F7D08C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7d08c
	if (!ctx.cr6.lt) goto loc_82F7D08C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7d090
	if (!ctx.cr6.lt) goto loc_82F7D090;
loc_82F7D08C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7D090:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d0a0
	if (!ctx.cr0.eq) goto loc_82F7D0A0;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x82f975e0
	ctx.lr = 0x82F7D0A0;
	sub_82F975E0(ctx, base);
loc_82F7D0A0:
	// lbz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 200);
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,200(r29)
	PPC_STORE_U8(ctx.r29.u32 + 200, ctx.r11.u8);
loc_82F7D0B0:
	// lhz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 324);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lbz r8,330(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 330);
	// lbz r9,329(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 329);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 328);
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// lbz r7,1589(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1589);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r25.u32);
	// rlwinm r31,r10,30,30,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stw r24,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r24.u32);
	// sth r6,324(r29)
	PPC_STORE_U16(ctx.r29.u32 + 324, ctx.r6.u16);
	// stb r8,330(r29)
	PPC_STORE_U8(ctx.r29.u32 + 330, ctx.r8.u8);
	// bne 0x82f7d0fc
	if (!ctx.cr0.eq) goto loc_82F7D0FC;
	// rlwinm. r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f7d0fc
	if (!ctx.cr0.eq) goto loc_82F7D0FC;
	// clrlwi. r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f7d348
	if (ctx.cr0.eq) goto loc_82F7D348;
loc_82F7D0FC:
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,288(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,292(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r29,288
	ctx.r8.s64 = ctx.r29.s64 + 288;
	// lfs f11,296(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f10,300(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,27936(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 27936);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x82f7d180
	if (ctx.cr6.eq) goto loc_82F7D180;
	// clrldi r6,r25,32
	ctx.r6.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// beq cr6,0x82f7d170
	if (ctx.cr6.eq) goto loc_82F7D170;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f7d178
	if (!ctx.cr6.eq) goto loc_82F7D178;
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f8,f0,f27
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmsubs f11,f11,f27,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 - ctx.f8.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// b 0x82f7d174
	goto loc_82F7D174;
loc_82F7D170:
	// fsubs f13,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
loc_82F7D174:
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82F7D178:
	// fadds f11,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82F7D180:
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d190
	if (!ctx.cr0.eq) goto loc_82F7D190;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7d1f0
	if (ctx.cr0.eq) goto loc_82F7D1F0;
loc_82F7D190:
	// clrldi r11,r24,32
	ctx.r11.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// bne cr6,0x82f7d1b8
	if (!ctx.cr6.eq) goto loc_82F7D1B8;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d1c0
	if (!ctx.cr0.eq) goto loc_82F7D1C0;
loc_82F7D1B8:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82f7d1d4
	if (!ctx.cr6.eq) goto loc_82F7D1D4;
loc_82F7D1C0:
	// fsubs f10,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f9,f0,f27
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmsubs f10,f10,f27,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 - ctx.f9.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// b 0x82f7d1e0
	goto loc_82F7D1E0;
loc_82F7D1D4:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82f7d1e4
	if (!ctx.cr6.eq) goto loc_82F7D1E4;
	// fsubs f12,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_82F7D1E0:
	// stfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82F7D1E4:
	// fadds f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82F7D1F0:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f7d224
	if (!ctx.cr6.eq) goto loc_82F7D224;
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x82f7d224
	if (!ctx.cr6.eq) goto loc_82F7D224;
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82f7d224
	if (!ctx.cr6.eq) goto loc_82F7D224;
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beq cr6,0x82f7d228
	if (ctx.cr6.eq) goto loc_82F7D228;
loc_82F7D224:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7D228:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7d348
	if (ctx.cr0.eq) goto loc_82F7D348;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f73ee0
	ctx.lr = 0x82F7D240;
	sub_82F73EE0(ctx, base);
	// lbz r11,1588(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1588);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f7d348
	if (ctx.cr0.eq) goto loc_82F7D348;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,12
	ctx.r7.s64 = 12;
loc_82F7D254:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f7d274
	if (ctx.cr6.eq) goto loc_82F7D274;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7d274
	if (!ctx.cr6.lt) goto loc_82F7D274;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82f7d278
	if (!ctx.cr6.lt) goto loc_82F7D278;
loc_82F7D274:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F7D278:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d348
	if (!ctx.cr0.eq) goto loc_82F7D348;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82f7d2e8
	if (ctx.cr6.eq) goto loc_82F7D2E8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82f7d334
	if (!ctx.cr6.eq) goto loc_82F7D334;
	// rlwinm. r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f7d2b4
	if (ctx.cr0.eq) goto loc_82F7D2B4;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x82f7d2b8
	goto loc_82F7D2B8;
loc_82F7D2B4:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82F7D2B8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lfs f13,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmsubs f0,f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 - ctx.f13.f64));
	// b 0x82f7d320
	goto loc_82F7D320;
loc_82F7D2E8:
	// rlwinm. r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f7d2f8
	if (ctx.cr0.eq) goto loc_82F7D2F8;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x82f7d2fc
	goto loc_82F7D2FC;
loc_82F7D2F8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82F7D2FC:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f13,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82F7D320:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f0.u32);
loc_82F7D334:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7d254
	if (!ctx.cr6.lt) goto loc_82F7D254;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82f7d254
	goto loc_82F7D254;
loc_82F7D348:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 328);
	// rlwinm. r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,-31092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31092);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x82f7d4b8
	if (ctx.cr0.eq) goto loc_82F7D4B8;
	// lfs f13,292(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,329(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 329);
	// lfs f11,296(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lfs f0,288(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f30
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// lfs f10,300(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fsubs f11,f10,f30
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// bne 0x82f7d394
	if (!ctx.cr0.eq) goto loc_82F7D394;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82f7d394
	if (!ctx.cr6.eq) goto loc_82F7D394;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82F7D394:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f8,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f8.f64 = double(temp.f32);
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// bne cr6,0x82f7d400
	if (!ctx.cr6.eq) goto loc_82F7D400;
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x82f7d3d0
	if (!ctx.cr6.gt) goto loc_82F7D3D0;
	// fdivs f9,f0,f28
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
loc_82F7D3D0:
	// extsw r11,r24
	ctx.r11.s64 = ctx.r24.s32;
	// fsubs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82f7d3f4
	if (!ctx.cr6.gt) goto loc_82F7D3F4;
	// fdivs f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
loc_82F7D3F4:
	// fsubs f0,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f31,f0,f10,f9
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// b 0x82f7d448
	goto loc_82F7D448;
loc_82F7D400:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f7d4b8
	if (!ctx.cr6.eq) goto loc_82F7D4B8;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f29,f12
	ctx.f29.f64 = double(float(ctx.f12.f64));
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fdivs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f29.f64));
	// frsp f28,f12
	ctx.f28.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f31,f12,f13,f0
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
loc_82F7D448:
	// fcmpu cr6,f31,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f8.f64);
	// beq cr6,0x82f7d4b8
	if (ctx.cr6.eq) goto loc_82F7D4B8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f94f30
	ctx.lr = 0x82F7D458;
	sub_82F94F30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82f7d48c
	if (!ctx.cr0.gt) goto loc_82F7D48C;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,4024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4024);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82f7d48c
	if (!ctx.cr6.lt) goto loc_82F7D48C;
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82F7D48C:
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// li r12,304
	ctx.r12.s64 = 304;
	// stfiwx f0,r29,r12
	PPC_STORE_U32(ctx.r29.u32 + ctx.r12.u32, ctx.f0.u32);
	// fctidz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// li r12,308
	ctx.r12.s64 = 308;
	// stfiwx f0,r29,r12
	PPC_STORE_U32(ctx.r29.u32 + ctx.r12.u32, ctx.f0.u32);
	// bl 0x82f97258
	ctx.lr = 0x82F7D4B8;
	sub_82F97258(ctx, base);
loc_82F7D4B8:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d56c
	if (!ctx.cr0.eq) goto loc_82F7D56C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82f7d56c
	if (ctx.cr6.eq) goto loc_82F7D56C;
	// lbz r11,329(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 329);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d56c
	if (!ctx.cr0.eq) goto loc_82F7D56C;
	// lfs f0,292(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,308(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// lfs f13,300(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f13,288(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lfs f11,296(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// lfs f7,84(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f10,88(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f6,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f5,96(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 + 84;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82f7d55c
	if (!ctx.cr6.lt) goto loc_82F7D55C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82f7d544
	if (ctx.cr6.eq) goto loc_82F7D544;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82f7d548
	if (!ctx.cr6.eq) goto loc_82F7D548;
	// fmuls f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmsubs f10,f11,f27,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 - ctx.f0.f64));
	// b 0x82f7d548
	goto loc_82F7D548;
loc_82F7D544:
	// fsubs f10,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82F7D548:
	// stfs f7,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x82f7d56c
	goto loc_82F7D56C;
loc_82F7D55C:
	// stfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_82F7D56C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6f538
	ctx.lr = 0x82F7D574;
	sub_82F6F538(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82f7d58c
	if (!ctx.cr6.gt) goto loc_82F7D58C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f71078
	ctx.lr = 0x82F7D58C;
	sub_82F71078(ctx, base);
loc_82F7D58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6f5e8
	ctx.lr = 0x82F7D594;
	sub_82F6F5E8(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82f7d5ac
	if (!ctx.cr6.gt) goto loc_82F7D5AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f710f8
	ctx.lr = 0x82F7D5AC;
	sub_82F710F8(ctx, base);
loc_82F7D5AC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6ea28
	ctx.lr = 0x82F7D5B4;
	sub_82F6EA28(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82f78738
	ctx.lr = 0x82F7D5BC;
	sub_82F78738(ctx, base);
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82ca7550
	ctx.lr = 0x82F7D5C8;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82F7D5CC"))) PPC_WEAK_FUNC(sub_82F7D5CC);
PPC_FUNC_IMPL(__imp__sub_82F7D5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7D5D0"))) PPC_WEAK_FUNC(sub_82F7D5D0);
PPC_FUNC_IMPL(__imp__sub_82F7D5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7d604
	if (ctx.cr0.eq) goto loc_82F7D604;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f7c868
	ctx.lr = 0x82F7D5F8;
	sub_82F7C868(ctx, base);
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r11,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r11.u8);
loc_82F7D604:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7d628
	if (ctx.cr6.eq) goto loc_82F7D628;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x82f7d630
	goto loc_82F7D630;
loc_82F7D628:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
loc_82F7D630:
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

__attribute__((alias("__imp__sub_82F7D644"))) PPC_WEAK_FUNC(sub_82F7D644);
PPC_FUNC_IMPL(__imp__sub_82F7D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7D648"))) PPC_WEAK_FUNC(sub_82F7D648);
PPC_FUNC_IMPL(__imp__sub_82F7D648) {
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
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7d67c
	if (ctx.cr0.eq) goto loc_82F7D67C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f7c868
	ctx.lr = 0x82F7D670;
	sub_82F7C868(ctx, base);
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r11,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r11.u8);
loc_82F7D67C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

__attribute__((alias("__imp__sub_82F7D694"))) PPC_WEAK_FUNC(sub_82F7D694);
PPC_FUNC_IMPL(__imp__sub_82F7D694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7D698"))) PPC_WEAK_FUNC(sub_82F7D698);
PPC_FUNC_IMPL(__imp__sub_82F7D698) {
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
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7d6d4
	if (ctx.cr0.eq) goto loc_82F7D6D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f7c868
	ctx.lr = 0x82F7D6C0;
	sub_82F7C868(ctx, base);
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r11,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r11.u8);
	// b 0x82f7d6d8
	goto loc_82F7D6D8;
loc_82F7D6D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7D6D8:
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

__attribute__((alias("__imp__sub_82F7D6EC"))) PPC_WEAK_FUNC(sub_82F7D6EC);
PPC_FUNC_IMPL(__imp__sub_82F7D6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7D6F0"))) PPC_WEAK_FUNC(sub_82F7D6F0);
PPC_FUNC_IMPL(__imp__sub_82F7D6F0) {
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
	// bl 0x82f7d698
	ctx.lr = 0x82F7D708;
	sub_82F7D698(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
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

__attribute__((alias("__imp__sub_82F7D720"))) PPC_WEAK_FUNC(sub_82F7D720);
PPC_FUNC_IMPL(__imp__sub_82F7D720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7D728;
	sub_82CA2BEC(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7D744;
	sub_82F7D698(ctx, base);
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// bl 0x82f94c68
	ctx.lr = 0x82F7D770;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// bl 0x82f95478
	ctx.lr = 0x82F7D794;
	sub_82F95478(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7d7bc
	if (ctx.cr6.eq) goto loc_82F7D7BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7d7bc
	if (!ctx.cr6.lt) goto loc_82F7D7BC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f7d7c0
	if (!ctx.cr6.lt) goto loc_82F7D7C0;
loc_82F7D7BC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7D7C0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7d90c
	if (!ctx.cr0.eq) goto loc_82F7D90C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwa r10,12(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 12));
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7d7f0
	if (ctx.cr0.eq) goto loc_82F7D7F0;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7d7f8
	goto loc_82F7D7F8;
loc_82F7D7F0:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7D7F8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82f7d90c
	if (ctx.cr6.lt) goto loc_82F7D90C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7d818
	if (ctx.cr6.eq) goto loc_82F7D818;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// b 0x82f7d81c
	goto loc_82F7D81C;
loc_82F7D818:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82F7D81C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x82f7d90c
	if (ctx.cr6.gt) goto loc_82F7D90C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F7D850;
	sub_82F5D9D8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F7D854:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f7d870
	if (ctx.cr6.eq) goto loc_82F7D870;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7d874
	if (ctx.cr6.lt) goto loc_82F7D874;
loc_82F7D870:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7D874:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7d8cc
	if (!ctx.cr0.eq) goto loc_82F7D8CC;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// beq 0x82f7d894
	if (ctx.cr0.eq) goto loc_82F7D894;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7D894:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82f7d8cc
	if (ctx.cr6.gt) goto loc_82F7D8CC;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7D8C8;
	sub_82F5B2C8(ctx, base);
	// b 0x82f7d854
	goto loc_82F7D854;
loc_82F7D8CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7d8f8
	if (ctx.cr0.eq) goto loc_82F7D8F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// clrlwi r31,r11,8
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7d8fc
	if (!ctx.cr6.eq) goto loc_82F7D8FC;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x82f7d8fc
	goto loc_82F7D8FC;
loc_82F7D8F8:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82F7D8FC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f5d010
	ctx.lr = 0x82F7D904;
	sub_82F5D010(ctx, base);
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x82f7d910
	goto loc_82F7D910;
loc_82F7D90C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F7D910:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7D920"))) PPC_WEAK_FUNC(sub_82F7D920);
PPC_FUNC_IMPL(__imp__sub_82F7D920) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f7d958
	if (ctx.cr6.lt) goto loc_82F7D958;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f7d970
	goto loc_82F7D970;
loc_82F7D958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7D960;
	sub_82F7D698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f781c8
	ctx.lr = 0x82F7D970;
	sub_82F781C8(ctx, base);
loc_82F7D970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F7D98C"))) PPC_WEAK_FUNC(sub_82F7D98C);
PPC_FUNC_IMPL(__imp__sub_82F7D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7D990"))) PPC_WEAK_FUNC(sub_82F7D990);
PPC_FUNC_IMPL(__imp__sub_82F7D990) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7D9C0;
	sub_82F7D698(ctx, base);
	// lfs f13,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f31,f29,f13
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// bl 0x82f94c68
	ctx.lr = 0x82F7D9EC;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x82f95478
	ctx.lr = 0x82F7DA10;
	sub_82F95478(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7da3c
	if (ctx.cr6.eq) goto loc_82F7DA3C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7da3c
	if (!ctx.cr6.lt) goto loc_82F7DA3C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bge cr6,0x82f7da40
	if (!ctx.cr6.lt) goto loc_82F7DA40;
loc_82F7DA3C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7DA40:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7dae0
	if (ctx.cr0.eq) goto loc_82F7DAE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82f7da9c
	if (ctx.cr6.gt) goto loc_82F7DA9C;
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stb r9,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F7DA84:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82f7da84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F7DA84;
	// b 0x82f7dad8
	goto loc_82F7DAD8;
loc_82F7DA9C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r7,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r7,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r7.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82F7DAC4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82f7dac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F7DAC4;
loc_82F7DAD8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82F7DAE0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7db00
	if (ctx.cr6.eq) goto loc_82F7DB00;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7db00
	if (!ctx.cr6.lt) goto loc_82F7DB00;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82f7db04
	if (!ctx.cr6.lt) goto loc_82F7DB04;
loc_82F7DB00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7DB04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7db28
	if (!ctx.cr0.eq) goto loc_82F7DB28;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82f7db18
	if (!ctx.cr6.lt) goto loc_82F7DB18;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82F7DB18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f781c8
	ctx.lr = 0x82F7DB24;
	sub_82F781C8(ctx, base);
	// b 0x82f7db34
	goto loc_82F7DB34;
loc_82F7DB28:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82F7DB34:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F7DB58"))) PPC_WEAK_FUNC(sub_82F7DB58);
PPC_FUNC_IMPL(__imp__sub_82F7DB58) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7DB84;
	sub_82F7D698(ctx, base);
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// bl 0x82f94c68
	ctx.lr = 0x82F7DBB0;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// bl 0x82f95478
	ctx.lr = 0x82F7DBD4;
	sub_82F95478(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7dc00
	if (ctx.cr6.eq) goto loc_82F7DC00;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7dc00
	if (!ctx.cr6.lt) goto loc_82F7DC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f7dc04
	if (!ctx.cr6.lt) goto loc_82F7DC04;
loc_82F7DC00:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7DC04:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7dd28
	if (!ctx.cr0.eq) goto loc_82F7DD28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwa r10,12(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 12));
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7dc34
	if (ctx.cr0.eq) goto loc_82F7DC34;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7dc3c
	goto loc_82F7DC3C;
loc_82F7DC34:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7DC3C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82f7dd28
	if (ctx.cr6.lt) goto loc_82F7DD28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7dc5c
	if (ctx.cr6.eq) goto loc_82F7DC5C;
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// b 0x82f7dc60
	goto loc_82F7DC60;
loc_82F7DC5C:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_82F7DC60:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x82f7dd28
	if (ctx.cr6.gt) goto loc_82F7DD28;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82f5d9d8
	ctx.lr = 0x82F7DCA8;
	sub_82F5D9D8(ctx, base);
loc_82F7DCA8:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f7dcc4
	if (ctx.cr6.eq) goto loc_82F7DCC4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7dcc8
	if (ctx.cr6.lt) goto loc_82F7DCC8;
loc_82F7DCC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7DCC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7dd20
	if (!ctx.cr0.eq) goto loc_82F7DD20;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// beq 0x82f7dce8
	if (ctx.cr0.eq) goto loc_82F7DCE8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7DCE8:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82f7dd18
	if (ctx.cr6.gt) goto loc_82F7DD18;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7DD14;
	sub_82F5B2C8(ctx, base);
	// b 0x82f7dca8
	goto loc_82F7DCA8;
loc_82F7DD18:
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r30,r11,25,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_82F7DD20:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f5d010
	ctx.lr = 0x82F7DD28;
	sub_82F5D010(ctx, base);
loc_82F7DD28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F7DD4C"))) PPC_WEAK_FUNC(sub_82F7DD4C);
PPC_FUNC_IMPL(__imp__sub_82F7DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7DD50"))) PPC_WEAK_FUNC(sub_82F7DD50);
PPC_FUNC_IMPL(__imp__sub_82F7DD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7DD70;
	sub_82F7D698(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f94c68
	ctx.lr = 0x82F7DD7C;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x82f95478
	ctx.lr = 0x82F7DDA0;
	sub_82F95478(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7ddc8
	if (ctx.cr6.eq) goto loc_82F7DDC8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7ddc8
	if (!ctx.cr6.lt) goto loc_82F7DDC8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82f7ddcc
	if (!ctx.cr6.lt) goto loc_82F7DDCC;
loc_82F7DDC8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7DDCC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7dddc
	if (!ctx.cr0.eq) goto loc_82F7DDDC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82f7dde0
	if (!ctx.cr6.lt) goto loc_82F7DDE0;
loc_82F7DDDC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F7DDE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F7DDF8"))) PPC_WEAK_FUNC(sub_82F7DDF8);
PPC_FUNC_IMPL(__imp__sub_82F7DDF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7DE18;
	sub_82F7D698(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f95370
	ctx.lr = 0x82F7DE28;
	sub_82F95370(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7de50
	if (ctx.cr6.eq) goto loc_82F7DE50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7de50
	if (!ctx.cr6.lt) goto loc_82F7DE50;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82f7de54
	if (!ctx.cr6.lt) goto loc_82F7DE54;
loc_82F7DE50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7DE54:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7de64
	if (!ctx.cr0.eq) goto loc_82F7DE64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82f7de68
	if (!ctx.cr6.lt) goto loc_82F7DE68;
loc_82F7DE64:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F7DE68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82F7DE80"))) PPC_WEAK_FUNC(sub_82F7DE80);
PPC_FUNC_IMPL(__imp__sub_82F7DE80) {
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
	// bl 0x82f7d698
	ctx.lr = 0x82F7DEA0;
	sub_82F7D698(ctx, base);
	// addic. r11,r30,48
	ctx.xer.ca = ctx.r30.u32 > 4294967247;
	ctx.r11.s64 = ctx.r30.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7dec0
	if (ctx.cr0.eq) goto loc_82F7DEC0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7dec0
	if (!ctx.cr6.lt) goto loc_82F7DEC0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f7dec4
	if (!ctx.cr6.lt) goto loc_82F7DEC4;
loc_82F7DEC0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7DEC4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7defc
	if (!ctx.cr0.eq) goto loc_82F7DEFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7df18
	if (ctx.cr0.eq) goto loc_82F7DF18;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// clrlwi r3,r11,8
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7df00
	if (!ctx.cr6.eq) goto loc_82F7DF00;
loc_82F7DEFC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F7DF00:
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
loc_82F7DF18:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82f7df00
	goto loc_82F7DF00;
}

__attribute__((alias("__imp__sub_82F7DF20"))) PPC_WEAK_FUNC(sub_82F7DF20);
PPC_FUNC_IMPL(__imp__sub_82F7DF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7DF28;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7DF3C;
	sub_82F7D698(ctx, base);
	// addic. r31,r31,48
	ctx.xer.ca = ctx.r31.u32 > 4294967247;
	ctx.r31.s64 = ctx.r31.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f7df5c
	if (ctx.cr0.eq) goto loc_82F7DF5C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7df5c
	if (!ctx.cr6.lt) goto loc_82F7DF5C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82f7df60
	if (!ctx.cr6.lt) goto loc_82F7DF60;
loc_82F7DF5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7DF60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82f7dfac
	if (!ctx.cr0.eq) goto loc_82F7DFAC;
	// beq cr6,0x82f7df84
	if (ctx.cr6.eq) goto loc_82F7DF84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82f94988
	ctx.lr = 0x82F7DF80;
	sub_82F94988(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
loc_82F7DF84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7dfa4
	if (ctx.cr0.eq) goto loc_82F7DFA4;
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// b 0x82f7dfbc
	goto loc_82F7DFBC;
loc_82F7DFA4:
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82f7dfbc
	goto loc_82F7DFBC;
loc_82F7DFAC:
	// beq cr6,0x82f7dfb8
	if (ctx.cr6.eq) goto loc_82F7DFB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82F7DFB8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F7DFBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7DFC4"))) PPC_WEAK_FUNC(sub_82F7DFC4);
PPC_FUNC_IMPL(__imp__sub_82F7DFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7DFC8"))) PPC_WEAK_FUNC(sub_82F7DFC8);
PPC_FUNC_IMPL(__imp__sub_82F7DFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F7DFD0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f7e0e4
	if (ctx.cr6.eq) goto loc_82F7E0E4;
	// bl 0x82f7d698
	ctx.lr = 0x82F7DFEC;
	sub_82F7D698(ctx, base);
	// addic. r29,r30,48
	ctx.xer.ca = ctx.r30.u32 > 4294967247;
	ctx.r29.s64 = ctx.r30.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82f7e00c
	if (ctx.cr0.eq) goto loc_82F7E00C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7e00c
	if (!ctx.cr6.lt) goto loc_82F7E00C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82f7e010
	if (!ctx.cr6.lt) goto loc_82F7E010;
loc_82F7E00C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7E010:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7e0e4
	if (!ctx.cr0.eq) goto loc_82F7E0E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7e050
	if (ctx.cr0.eq) goto loc_82F7E050;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// clrlwi r5,r11,8
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7e054
	if (!ctx.cr6.eq) goto loc_82F7E054;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82f7e054
	goto loc_82F7E054;
loc_82F7E050:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82F7E054:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f72d98
	ctx.lr = 0x82F7E06C;
	sub_82F72D98(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f7e094
	if (ctx.cr6.eq) goto loc_82F7E094;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82f7e094
	if (ctx.cr6.lt) goto loc_82F7E094;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7e098
	if (ctx.cr6.lt) goto loc_82F7E098;
loc_82F7E094:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7E098:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7e0e4
	if (!ctx.cr0.eq) goto loc_82F7E0E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f7e0bc
	if (ctx.cr0.eq) goto loc_82F7E0BC;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// b 0x82f7e0c0
	goto loc_82F7E0C0;
loc_82F7E0BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_82F7E0C0:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82f7e0e8
	goto loc_82F7E0E8;
loc_82F7E0E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7E0E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F7E0F0"))) PPC_WEAK_FUNC(sub_82F7E0F0);
PPC_FUNC_IMPL(__imp__sub_82F7E0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7E0F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7e23c
	if (ctx.cr6.eq) goto loc_82F7E23C;
	// bl 0x82f7d698
	ctx.lr = 0x82F7E114;
	sub_82F7D698(ctx, base);
	// addic. r11,r31,48
	ctx.xer.ca = ctx.r31.u32 > 4294967247;
	ctx.r11.s64 = ctx.r31.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e134
	if (ctx.cr0.eq) goto loc_82F7E134;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7e134
	if (!ctx.cr6.lt) goto loc_82F7E134;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f7e138
	if (!ctx.cr6.lt) goto loc_82F7E138;
loc_82F7E134:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7E138:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7e23c
	if (!ctx.cr0.eq) goto loc_82F7E23C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e16c
	if (ctx.cr0.eq) goto loc_82F7E16C;
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7e17c
	goto loc_82F7E17C;
loc_82F7E16C:
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7E17C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x82f6e478
	ctx.lr = 0x82F7E198;
	sub_82F6E478(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e1b8
	if (ctx.cr0.eq) goto loc_82F7E1B8;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// b 0x82f7e1bc
	goto loc_82F7E1BC;
loc_82F7E1B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82F7E1BC:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e1d4
	if (ctx.cr0.eq) goto loc_82F7E1D4;
	// lhz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// b 0x82f7e1d8
	goto loc_82F7E1D8;
loc_82F7E1D4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82F7E1D8:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e1f4
	if (ctx.cr0.eq) goto loc_82F7E1F4;
	// lbz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82f7e1f8
	goto loc_82F7E1F8;
loc_82F7E1F4:
	// lha r11,40(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 40));
loc_82F7E1F8:
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r11,12(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 12));
	// beq 0x82f7e218
	if (ctx.cr0.eq) goto loc_82F7E218;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7e220
	goto loc_82F7E220;
loc_82F7E218:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7E220:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
	// b 0x82f7e240
	goto loc_82F7E240;
loc_82F7E23C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7E240:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7E248"))) PPC_WEAK_FUNC(sub_82F7E248);
PPC_FUNC_IMPL(__imp__sub_82F7E248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F7E250;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f7e474
	if (ctx.cr6.eq) goto loc_82F7E474;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f73b38
	ctx.lr = 0x82F7E270;
	sub_82F73B38(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82f7e474
	if (!ctx.cr6.lt) goto loc_82F7E474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7E280;
	sub_82F7D698(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f95370
	ctx.lr = 0x82F7E290;
	sub_82F95370(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7e2bc
	if (ctx.cr6.eq) goto loc_82F7E2BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7e2bc
	if (!ctx.cr6.lt) goto loc_82F7E2BC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f7e2c0
	if (!ctx.cr6.lt) goto loc_82F7E2C0;
loc_82F7E2BC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7E2C0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7e46c
	if (!ctx.cr0.eq) goto loc_82F7E46C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// beq 0x82f7e2fc
	if (ctx.cr0.eq) goto loc_82F7E2FC;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7e2fc
	if (!ctx.cr6.eq) goto loc_82F7E2FC;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F7E2FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F7E30C;
	sub_82F5D9D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F7E314:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7e330
	if (ctx.cr6.eq) goto loc_82F7E330;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x82f7e334
	if (ctx.cr6.lt) goto loc_82F7E334;
loc_82F7E330:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7E334:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7e464
	if (!ctx.cr0.eq) goto loc_82F7E464;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f7e370
	if (ctx.cr6.eq) goto loc_82F7E370;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7e35c
	if (ctx.cr0.eq) goto loc_82F7E35C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7E35C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7E368;
	sub_82F5B2C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82f7e314
	goto loc_82F7E314;
loc_82F7E370:
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7e464
	if (!ctx.cr0.eq) goto loc_82F7E464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f0,12(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7e3b0
	if (ctx.cr0.eq) goto loc_82F7E3B0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7E3B0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,-31092(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31092);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e3e8
	if (ctx.cr0.eq) goto loc_82F7E3E8;
	// lhz r11,22(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 22);
	// b 0x82f7e3ec
	goto loc_82F7E3EC;
loc_82F7E3E8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_82F7E3EC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// stfs f11,12(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r11,16(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 16));
	// beq 0x82f7e420
	if (ctx.cr0.eq) goto loc_82F7E420;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7e428
	goto loc_82F7E428;
loc_82F7E420:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7E428:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,4(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,12(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
loc_82F7E464:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f5d010
	ctx.lr = 0x82F7E46C;
	sub_82F5D010(ctx, base);
loc_82F7E46C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82f7e478
	goto loc_82F7E478;
loc_82F7E474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7E478:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F7E480"))) PPC_WEAK_FUNC(sub_82F7E480);
PPC_FUNC_IMPL(__imp__sub_82F7E480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F7E488;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f7e734
	if (ctx.cr6.eq) goto loc_82F7E734;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f73b38
	ctx.lr = 0x82F7E4AC;
	sub_82F73B38(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82f7e734
	if (ctx.cr6.gt) goto loc_82F7E734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7E4BC;
	sub_82F7D698(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f95370
	ctx.lr = 0x82F7E4CC;
	sub_82F95370(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7e4f8
	if (ctx.cr6.eq) goto loc_82F7E4F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7e4f8
	if (!ctx.cr6.lt) goto loc_82F7E4F8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f7e4fc
	if (!ctx.cr6.lt) goto loc_82F7E4FC;
loc_82F7E4F8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7E4FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7e72c
	if (!ctx.cr0.eq) goto loc_82F7E72C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// beq 0x82f7e53c
	if (ctx.cr0.eq) goto loc_82F7E53C;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7e53c
	if (!ctx.cr6.eq) goto loc_82F7E53C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F7E53C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// subf r29,r11,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F7E54C;
	sub_82F5D9D8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F7E554:
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f7e570
	if (ctx.cr6.eq) goto loc_82F7E570;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7e574
	if (ctx.cr6.lt) goto loc_82F7E574;
loc_82F7E570:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7E574:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7e724
	if (!ctx.cr0.eq) goto loc_82F7E724;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f7e5b0
	if (ctx.cr6.eq) goto loc_82F7E5B0;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// beq 0x82f7e59c
	if (ctx.cr0.eq) goto loc_82F7E59C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7E59C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7E5A8;
	sub_82F5B2C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82f7e554
	goto loc_82F7E554;
loc_82F7E5B0:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7e5c8
	if (ctx.cr6.eq) goto loc_82F7E5C8;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82f7e5cc
	goto loc_82F7E5CC;
loc_82F7E5C8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F7E5CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5b278
	ctx.lr = 0x82F7E5D4;
	sub_82F5B278(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// lfs f0,9076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9076);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blt cr6,0x82f7e5f0
	if (ctx.cr6.lt) goto loc_82F7E5F0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82F7E5F0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7E608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e630
	if (ctx.cr0.eq) goto loc_82F7E630;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,3232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3232);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_82F7E630:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,0(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f10,8(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// beq 0x82f7e67c
	if (ctx.cr0.eq) goto loc_82F7E67C;
	// lhz r11,26(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 26);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7e68c
	goto loc_82F7E68C;
loc_82F7E67C:
	// lhz r11,38(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7E68C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// lfs f13,-31092(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31092);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,12(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r11,16(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 16));
	// beq 0x82f7e6d4
	if (ctx.cr0.eq) goto loc_82F7E6D4;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7e6dc
	goto loc_82F7E6DC;
loc_82F7E6D4:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7E6DC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f9,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,4(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,12(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,8(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_82F7E724:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f5d010
	ctx.lr = 0x82F7E72C;
	sub_82F5D010(ctx, base);
loc_82F7E72C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82f7e738
	goto loc_82F7E738;
loc_82F7E734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7E738:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F7E744"))) PPC_WEAK_FUNC(sub_82F7E744);
PPC_FUNC_IMPL(__imp__sub_82F7E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7E748"))) PPC_WEAK_FUNC(sub_82F7E748);
PPC_FUNC_IMPL(__imp__sub_82F7E748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7E750;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7E75C;
	sub_82F7D698(ctx, base);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f94c68
	ctx.lr = 0x82F7E768;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lbz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// li r29,0
	ctx.r29.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r11,r10,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x82f7e7c4
	goto loc_82F7E7C4;
loc_82F7E7A4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bge cr6,0x82f7e7b4
	if (!ctx.cr6.lt) goto loc_82F7E7B4;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82F7E7B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7e7c8
	if (!ctx.cr6.lt) goto loc_82F7E7C8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F7E7C4:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
loc_82F7E7C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f5b648
	ctx.lr = 0x82F7E7D0;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7e7a4
	if (!ctx.cr0.eq) goto loc_82F7E7A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7E7E4"))) PPC_WEAK_FUNC(sub_82F7E7E4);
PPC_FUNC_IMPL(__imp__sub_82F7E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7E7E8"))) PPC_WEAK_FUNC(sub_82F7E7E8);
PPC_FUNC_IMPL(__imp__sub_82F7E7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82F7E7F0;
	sub_82CA2BB8(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82ca74d4
	ctx.lr = 0x82F7E7F8;
	sub_82CA74D4(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r19,r25,48
	ctx.r19.s64 = ctx.r25.s64 + 48;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x82f94c68
	ctx.lr = 0x82F7E830;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x82f7efec
	if (ctx.cr6.eq) goto loc_82F7EFEC;
	// lbz r11,186(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 186);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f7e888
	if (!ctx.cr0.eq) goto loc_82F7E888;
	// lfs f13,176(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x82f7e888
	if (!ctx.cr6.eq) goto loc_82F7E888;
	// lfs f13,180(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f7e888
	if (!ctx.cr6.eq) goto loc_82F7E888;
	// lhz r11,324(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 324);
	// lhz r10,184(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 184);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f7efec
	if (ctx.cr6.eq) goto loc_82F7EFEC;
loc_82F7E888:
	// stfs f0,180(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 180, temp.u32);
	// addi r24,r26,16
	ctx.r24.s64 = ctx.r26.s64 + 16;
	// stfs f31,176(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 176, temp.u32);
	// lhz r11,324(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 324);
	// sth r11,184(r26)
	PPC_STORE_U16(ctx.r26.u32 + 184, ctx.r11.u16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82fc1ec0
	ctx.lr = 0x82F7E8A4;
	sub_82FC1EC0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,80(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// bl 0x82f7de80
	ctx.lr = 0x82F7E8B0;
	sub_82F7DE80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// bl 0x82fc1ec0
	ctx.lr = 0x82F7E8C0;
	sub_82FC1EC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82fc1f38
	ctx.lr = 0x82F7E8CC;
	sub_82FC1F38(ctx, base);
	// li r20,-1
	ctx.r20.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fc2bd0
	ctx.lr = 0x82F7E8E4;
	sub_82FC2BD0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fc2680
	ctx.lr = 0x82F7E8EC;
	sub_82FC2680(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7efe8
	if (!ctx.cr0.eq) goto loc_82F7EFE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f21,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f21.f64 = double(temp.f32);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// lfs f16,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f16.f64 = double(temp.f32);
	// lfs f18,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f18.f64 = double(temp.f32);
	// lfs f15,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f15.f64 = double(temp.f32);
	// ori r22,r10,65535
	ctx.r22.u64 = ctx.r10.u64 | 65535;
	// lfs f22,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f22.f64 = double(temp.f32);
	// lfs f19,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f19.f64 = double(temp.f32);
	// lfs f20,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f20.f64 = double(temp.f32);
	// lfs f17,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f17.f64 = double(temp.f32);
	// lfs f23,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f23.f64 = double(temp.f32);
loc_82F7E924:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fc2938
	ctx.lr = 0x82F7E930;
	sub_82FC2938(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82f95370
	ctx.lr = 0x82F7E940;
	sub_82F95370(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fmr f27,f23
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f23.f64;
	// fmr f26,f23
	ctx.f26.f64 = ctx.f23.f64;
	// fmr f25,f23
	ctx.f25.f64 = ctx.f23.f64;
	// fmr f24,f23
	ctx.f24.f64 = ctx.f23.f64;
	// fmr f31,f23
	ctx.f31.f64 = ctx.f23.f64;
	// fmr f28,f23
	ctx.f28.f64 = ctx.f23.f64;
	// fmr f30,f23
	ctx.f30.f64 = ctx.f23.f64;
	// fmr f29,f23
	ctx.f29.f64 = ctx.f23.f64;
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82F7E96C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7e98c
	if (ctx.cr6.eq) goto loc_82F7E98C;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7e98c
	if (!ctx.cr6.lt) goto loc_82F7E98C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x82f7e990
	if (!ctx.cr6.lt) goto loc_82F7E990;
loc_82F7E98C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7E990:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7ee2c
	if (!ctx.cr0.eq) goto loc_82F7EE2C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f7ee2c
	if (ctx.cr6.eq) goto loc_82F7EE2C;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bge cr6,0x82f7e9b8
	if (!ctx.cr6.lt) goto loc_82F7E9B8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82F7E9B8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82f6d328
	ctx.lr = 0x82F7E9C4;
	sub_82F6D328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ee0c
	if (ctx.cr0.eq) goto loc_82F7EE0C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// beq 0x82f7e9f0
	if (ctx.cr0.eq) goto loc_82F7E9F0;
	// clrlwi r10,r11,8
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82f7e9f4
	if (!ctx.cr6.eq) goto loc_82F7E9F4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x82f7e9f4
	goto loc_82F7E9F4;
loc_82F7E9F0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82F7E9F4:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82f7ea2c
	if (!ctx.cr6.lt) goto loc_82F7EA2C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7ea18
	if (ctx.cr6.eq) goto loc_82F7EA18;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82f7ea18
	if (!ctx.cr6.eq) goto loc_82F7EA18;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82F7EA18:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82f7ea54
	goto loc_82F7EA54;
loc_82F7EA2C:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7ea48
	if (ctx.cr6.eq) goto loc_82F7EA48;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82f7ea48
	if (!ctx.cr6.eq) goto loc_82F7EA48;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82F7EA48:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82F7EA54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F7EA60;
	sub_82F5D9D8(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82F7EA68:
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7ea84
	if (ctx.cr6.eq) goto loc_82F7EA84;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82f7ea88
	if (ctx.cr6.lt) goto loc_82F7EA88;
loc_82F7EA84:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7EA88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7ebf0
	if (!ctx.cr0.eq) goto loc_82F7EBF0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f7ebf0
	if (ctx.cr6.eq) goto loc_82F7EBF0;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f7ebb8
	if (ctx.cr6.lt) goto loc_82F7EBB8;
	// lhz r11,6(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// beq 0x82f7eab8
	if (ctx.cr0.eq) goto loc_82F7EAB8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7EAB8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// rlwinm. r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// beq 0x82f7eae0
	if (ctx.cr0.eq) goto loc_82F7EAE0;
	// lhz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 22);
	// b 0x82f7eae4
	goto loc_82F7EAE4;
loc_82F7EAE0:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
loc_82F7EAE4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f7eaf8
	if (ctx.cr6.eq) goto loc_82F7EAF8;
	// lbz r11,29(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82f7eb00
	goto loc_82F7EB00;
loc_82F7EAF8:
	// lha r11,40(r28)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r28.u32 + 40));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F7EB00:
	// bgt 0x82f7eb08
	if (ctx.cr0.gt) goto loc_82F7EB08;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82F7EB08:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lwa r11,16(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 16));
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x82f7eb38
	if (ctx.cr6.eq) goto loc_82F7EB38;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// b 0x82f7eb40
	goto loc_82F7EB40;
loc_82F7EB38:
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
loc_82F7EB40:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lhz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// rlwinm r11,r10,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfd f0,168(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// beq cr6,0x82f7eba8
	if (ctx.cr6.eq) goto loc_82F7EBA8;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bgt cr6,0x82f7eb84
	if (ctx.cr6.gt) goto loc_82F7EB84;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
loc_82F7EB84:
	// fcmpu cr6,f25,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f12.f64);
	// ble cr6,0x82f7eb90
	if (!ctx.cr6.gt) goto loc_82F7EB90;
	// fmr f12,f25
	ctx.f12.f64 = ctx.f25.f64;
loc_82F7EB90:
	// fcmpu cr6,f26,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f11.f64);
	// bgt cr6,0x82f7eb9c
	if (ctx.cr6.gt) goto loc_82F7EB9C;
	// fmr f11,f26
	ctx.f11.f64 = ctx.f26.f64;
loc_82F7EB9C:
	// fcmpu cr6,f24,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// ble cr6,0x82f7eba8
	if (!ctx.cr6.gt) goto loc_82F7EBA8;
	// fmr f13,f24
	ctx.f13.f64 = ctx.f24.f64;
loc_82F7EBA8:
	// fmr f24,f13
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f13.f64;
	// fmr f25,f12
	ctx.f25.f64 = ctx.f12.f64;
	// fmr f26,f11
	ctx.f26.f64 = ctx.f11.f64;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
loc_82F7EBB8:
	// lhz r11,6(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// beq 0x82f7ebd0
	if (ctx.cr0.eq) goto loc_82F7EBD0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7EBD0:
	// lhz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm. r11,r10,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ebe4
	if (ctx.cr0.eq) goto loc_82F7EBE4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82F7EBE4:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7EBEC;
	sub_82F5B2C8(ctx, base);
	// b 0x82f7ea68
	goto loc_82F7EA68;
loc_82F7EBF0:
	// lfs f13,176(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,180(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fadds f13,f11,f27
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// lwa r11,12(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 12));
	// fadds f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// fadds f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f25.f64));
	// fadds f10,f0,f24
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// beq 0x82f7ec2c
	if (ctx.cr0.eq) goto loc_82F7EC2C;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f0,208(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// b 0x82f7ec34
	goto loc_82F7EC34;
loc_82F7EC2C:
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82F7EC34:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,88(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f0,84(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f26,f13,f12
	ctx.f26.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f24,f13,f10
	ctx.f24.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f27,f0,f9
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fadds f25,f0,f11
	ctx.f25.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// bge cr6,0x82f7ec70
	if (!ctx.cr6.lt) goto loc_82F7EC70;
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82f7ec74
	if (ctx.cr6.lt) goto loc_82F7EC74;
loc_82F7EC70:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7EC74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7edf4
	if (!ctx.cr0.eq) goto loc_82F7EDF4;
	// lfs f12,92(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f26,f13
	ctx.cr6.compare(ctx.f26.f64, ctx.f13.f64);
	// lfs f11,96(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x82f7eca8
	if (ctx.cr6.lt) goto loc_82F7ECA8;
	// fcmpu cr6,f11,f28
	ctx.cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// blt cr6,0x82f7eca8
	if (ctx.cr6.lt) goto loc_82F7ECA8;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x82f7eca8
	if (ctx.cr6.lt) goto loc_82F7ECA8;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82f7ecac
	if (!ctx.cr6.lt) goto loc_82F7ECAC;
loc_82F7ECA8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82F7ECAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7ecbc
	if (!ctx.cr0.eq) goto loc_82F7ECBC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82f7ed10
	goto loc_82F7ED10;
loc_82F7ECBC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82f7eccc
	if (!ctx.cr6.gt) goto loc_82F7ECCC;
	// fmr f15,f31
	ctx.f15.f64 = ctx.f31.f64;
	// b 0x82f7ecd0
	goto loc_82F7ECD0;
loc_82F7ECCC:
	// fmr f15,f0
	ctx.fpscr.disableFlushMode();
	ctx.f15.f64 = ctx.f0.f64;
loc_82F7ECD0:
	// fcmpu cr6,f30,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// ble cr6,0x82f7ece0
	if (!ctx.cr6.gt) goto loc_82F7ECE0;
	// fmr f16,f12
	ctx.f16.f64 = ctx.f12.f64;
	// b 0x82f7ece4
	goto loc_82F7ECE4;
loc_82F7ECE0:
	// fmr f16,f30
	ctx.fpscr.disableFlushMode();
	ctx.f16.f64 = ctx.f30.f64;
loc_82F7ECE4:
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// ble cr6,0x82f7ecf4
	if (!ctx.cr6.gt) goto loc_82F7ECF4;
	// fmr f18,f28
	ctx.f18.f64 = ctx.f28.f64;
	// b 0x82f7ecf8
	goto loc_82F7ECF8;
loc_82F7ECF4:
	// fmr f18,f13
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = ctx.f13.f64;
loc_82F7ECF8:
	// fcmpu cr6,f26,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f11.f64);
	// ble cr6,0x82f7ed08
	if (!ctx.cr6.gt) goto loc_82F7ED08;
	// fmr f21,f11
	ctx.f21.f64 = ctx.f11.f64;
	// b 0x82f7ed0c
	goto loc_82F7ED0C;
loc_82F7ED08:
	// fmr f21,f26
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f26.f64;
loc_82F7ED0C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7ED10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7ed2c
	if (!ctx.cr0.eq) goto loc_82F7ED2C;
	// fmr f31,f23
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f23.f64;
	// fmr f30,f23
	ctx.f30.f64 = ctx.f23.f64;
	// fmr f29,f23
	ctx.f29.f64 = ctx.f23.f64;
	// fmr f28,f23
	ctx.f28.f64 = ctx.f23.f64;
	// b 0x82f7ed3c
	goto loc_82F7ED3C;
loc_82F7ED2C:
	// fmr f31,f15
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f15.f64;
	// fmr f30,f18
	ctx.f30.f64 = ctx.f18.f64;
	// fmr f29,f16
	ctx.f29.f64 = ctx.f16.f64;
	// fmr f28,f21
	ctx.f28.f64 = ctx.f21.f64;
loc_82F7ED3C:
	// fcmpu cr6,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f25.f64);
	// bge cr6,0x82f7ed50
	if (!ctx.cr6.lt) goto loc_82F7ED50;
	// fcmpu cr6,f26,f24
	ctx.cr6.compare(ctx.f26.f64, ctx.f24.f64);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82f7ed54
	if (ctx.cr6.lt) goto loc_82F7ED54;
loc_82F7ED50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7ED54:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7edf4
	if (!ctx.cr0.eq) goto loc_82F7EDF4;
	// lbz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ed70
	if (ctx.cr0.eq) goto loc_82F7ED70;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// b 0x82f7ed84
	goto loc_82F7ED84;
loc_82F7ED70:
	// stb r23,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r23.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r23,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r23.u8);
	// stb r23,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r23.u8);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
loc_82F7ED84:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82f7ed9c
	if (ctx.cr6.eq) goto loc_82F7ED9C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// bl 0x82fc21d0
	ctx.lr = 0x82F7ED9C;
	sub_82FC21D0(ctx, base);
loc_82F7ED9C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fc1dc8
	ctx.lr = 0x82F7EDAC;
	sub_82FC1DC8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EDBC;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EDCC;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EDDC;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EDEC;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82fc1f60
	ctx.lr = 0x82F7EDF4;
	sub_82FC1F60(ctx, base);
loc_82F7EDF4:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
	// fmr f29,f24
	ctx.f29.f64 = ctx.f24.f64;
	// bl 0x82f5d010
	ctx.lr = 0x82F7EE0C;
	sub_82F5D010(ctx, base);
loc_82F7EE0C:
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7e96c
	if (!ctx.cr6.lt) goto loc_82F7E96C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// b 0x82f7e96c
	goto loc_82F7E96C;
loc_82F7EE2C:
	// fcmpu cr6,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f25.f64);
	// bge cr6,0x82f7ee40
	if (!ctx.cr6.lt) goto loc_82F7EE40;
	// fcmpu cr6,f26,f24
	ctx.cr6.compare(ctx.f26.f64, ctx.f24.f64);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82f7ee44
	if (ctx.cr6.lt) goto loc_82F7EE44;
loc_82F7EE40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7EE44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7efcc
	if (!ctx.cr0.eq) goto loc_82F7EFCC;
	// lfs f12,88(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f24,f12
	ctx.cr6.compare(ctx.f24.f64, ctx.f12.f64);
	// lfs f13,92(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,96(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x82f7ee80
	if (ctx.cr6.lt) goto loc_82F7EE80;
	// fcmpu cr6,f11,f26
	ctx.cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// blt cr6,0x82f7ee80
	if (ctx.cr6.lt) goto loc_82F7EE80;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// blt cr6,0x82f7ee80
	if (ctx.cr6.lt) goto loc_82F7EE80;
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82f7ee84
	if (!ctx.cr6.lt) goto loc_82F7EE84;
loc_82F7EE80:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82F7EE84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7ee94
	if (!ctx.cr0.eq) goto loc_82F7EE94;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82f7eee8
	goto loc_82F7EEE8;
loc_82F7EE94:
	// fcmpu cr6,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x82f7eea4
	if (!ctx.cr6.gt) goto loc_82F7EEA4;
	// fmr f17,f27
	ctx.f17.f64 = ctx.f27.f64;
	// b 0x82f7eea8
	goto loc_82F7EEA8;
loc_82F7EEA4:
	// fmr f17,f0
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = ctx.f0.f64;
loc_82F7EEA8:
	// fcmpu cr6,f25,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f13.f64);
	// ble cr6,0x82f7eeb8
	if (!ctx.cr6.gt) goto loc_82F7EEB8;
	// fmr f19,f13
	ctx.f19.f64 = ctx.f13.f64;
	// b 0x82f7eebc
	goto loc_82F7EEBC;
loc_82F7EEB8:
	// fmr f19,f25
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f25.f64;
loc_82F7EEBC:
	// fcmpu cr6,f26,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f12.f64);
	// ble cr6,0x82f7eecc
	if (!ctx.cr6.gt) goto loc_82F7EECC;
	// fmr f20,f26
	ctx.f20.f64 = ctx.f26.f64;
	// b 0x82f7eed0
	goto loc_82F7EED0;
loc_82F7EECC:
	// fmr f20,f12
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f12.f64;
loc_82F7EED0:
	// fcmpu cr6,f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f11.f64);
	// ble cr6,0x82f7eee0
	if (!ctx.cr6.gt) goto loc_82F7EEE0;
	// fmr f22,f11
	ctx.f22.f64 = ctx.f11.f64;
	// b 0x82f7eee4
	goto loc_82F7EEE4;
loc_82F7EEE0:
	// fmr f22,f24
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f24.f64;
loc_82F7EEE4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7EEE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7ef04
	if (!ctx.cr0.eq) goto loc_82F7EF04;
	// fmr f31,f23
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f23.f64;
	// fmr f30,f23
	ctx.f30.f64 = ctx.f23.f64;
	// fmr f29,f23
	ctx.f29.f64 = ctx.f23.f64;
	// fmr f28,f23
	ctx.f28.f64 = ctx.f23.f64;
	// b 0x82f7ef28
	goto loc_82F7EF28;
loc_82F7EF04:
	// fmr f31,f17
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f17.f64;
	// fmr f30,f20
	ctx.f30.f64 = ctx.f20.f64;
	// fmr f29,f19
	ctx.f29.f64 = ctx.f19.f64;
	// fmr f28,f22
	ctx.f28.f64 = ctx.f22.f64;
	// fcmpu cr6,f17,f19
	ctx.cr6.compare(ctx.f17.f64, ctx.f19.f64);
	// bge cr6,0x82f7ef28
	if (!ctx.cr6.lt) goto loc_82F7EF28;
	// fcmpu cr6,f20,f22
	ctx.cr6.compare(ctx.f20.f64, ctx.f22.f64);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82f7ef2c
	if (ctx.cr6.lt) goto loc_82F7EF2C;
loc_82F7EF28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7EF2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7efcc
	if (!ctx.cr0.eq) goto loc_82F7EFCC;
	// lbz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ef48
	if (ctx.cr0.eq) goto loc_82F7EF48;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// b 0x82f7ef5c
	goto loc_82F7EF5C;
loc_82F7EF48:
	// stb r23,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r23.u8);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stb r23,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r23.u8);
	// stb r23,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r23.u8);
	// stb r23,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r23.u8);
loc_82F7EF5C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82f7ef74
	if (ctx.cr6.eq) goto loc_82F7EF74;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// bl 0x82fc21d0
	ctx.lr = 0x82F7EF74;
	sub_82FC21D0(ctx, base);
loc_82F7EF74:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fc1dc8
	ctx.lr = 0x82F7EF84;
	sub_82FC1DC8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EF94;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EFA4;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EFB4;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F7EFC4;
	sub_82FC1E08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82fc1f60
	ctx.lr = 0x82F7EFCC;
	sub_82FC1F60(ctx, base);
loc_82F7EFCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fc2978
	ctx.lr = 0x82F7EFD8;
	sub_82FC2978(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fc2680
	ctx.lr = 0x82F7EFE0;
	sub_82FC2680(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7e924
	if (ctx.cr0.eq) goto loc_82F7E924;
loc_82F7EFE8:
	// stb r23,186(r26)
	PPC_STORE_U8(ctx.r26.u32 + 186, ctx.r23.u8);
loc_82F7EFEC:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f7f028
	if (ctx.cr6.eq) goto loc_82F7F028;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f7f018
	if (!ctx.cr6.eq) goto loc_82F7F018;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f7f01c
	if (ctx.cr6.eq) goto loc_82F7F01C;
loc_82F7F018:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82F7F01C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq 0x82f7f02c
	if (ctx.cr0.eq) goto loc_82F7F02C;
loc_82F7F028:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7F02C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7f04c
	if (!ctx.cr0.eq) goto loc_82F7F04C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82fc2460
	ctx.lr = 0x82F7F04C;
	sub_82FC2460(ctx, base);
loc_82F7F04C:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82ca7520
	ctx.lr = 0x82F7F058;
	sub_82CA7520(ctx, base);
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_82F7F05C"))) PPC_WEAK_FUNC(sub_82F7F05C);
PPC_FUNC_IMPL(__imp__sub_82F7F05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7F060"))) PPC_WEAK_FUNC(sub_82F7F060);
PPC_FUNC_IMPL(__imp__sub_82F7F060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F7F068;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7d698
	ctx.lr = 0x82F7F088;
	sub_82F7D698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7ddf8
	ctx.lr = 0x82F7F094;
	sub_82F7DDF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82f7f274
	if (ctx.cr6.eq) goto loc_82F7F274;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// beq 0x82f7f0d8
	if (ctx.cr0.eq) goto loc_82F7F0D8;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7f0d8
	if (!ctx.cr6.eq) goto loc_82F7F0D8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F7F0D8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F7F0F0;
	sub_82F5D9D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F7F0F4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7f110
	if (ctx.cr6.eq) goto loc_82F7F110;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x82f7f114
	if (ctx.cr6.lt) goto loc_82F7F114;
loc_82F7F110:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7F114:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7f160
	if (!ctx.cr0.eq) goto loc_82F7F160;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7f160
	if (!ctx.cr0.eq) goto loc_82F7F160;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f7f160
	if (!ctx.cr0.eq) goto loc_82F7F160;
	// rlwinm r10,r10,26,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FF;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7f14c
	if (ctx.cr0.eq) goto loc_82F7F14C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F7F14C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7F15C;
	sub_82F5B2C8(ctx, base);
	// b 0x82f7f0f4
	goto loc_82F7F0F4;
loc_82F7F160:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7f1d4
	if (ctx.cr6.eq) goto loc_82F7F1D4;
	// b 0x82f7f174
	goto loc_82F7F174;
loc_82F7F170:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82F7F174:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7f18c
	if (ctx.cr6.eq) goto loc_82F7F18C;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x82f7f190
	if (ctx.cr6.lt) goto loc_82F7F190;
loc_82F7F18C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7F190:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7f1d4
	if (!ctx.cr0.eq) goto loc_82F7F1D4;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// beq 0x82f7f1b0
	if (ctx.cr0.eq) goto loc_82F7F1B0;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_82F7F1B0:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7F1CC;
	sub_82F5B2C8(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f7f170
	if (ctx.cr6.lt) goto loc_82F7F170;
loc_82F7F1D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r11,12(r27)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + 12));
	// beq 0x82f7f1f0
	if (ctx.cr0.eq) goto loc_82F7F1F0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7f1f8
	goto loc_82F7F1F8;
loc_82F7F1F0:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7F1F8:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r11,16(r27)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + 16));
	// beq 0x82f7f238
	if (ctx.cr0.eq) goto loc_82F7F238;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f7f240
	goto loc_82F7F240;
loc_82F7F238:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F7F240:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// beq cr6,0x82f7f258
	if (ctx.cr6.eq) goto loc_82F7F258;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
loc_82F7F258:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f7f264
	if (ctx.cr6.eq) goto loc_82F7F264;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
loc_82F7F264:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f5d010
	ctx.lr = 0x82F7F26C;
	sub_82F5D010(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f7f278
	goto loc_82F7F278;
loc_82F7F274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7F278:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F7F280"))) PPC_WEAK_FUNC(sub_82F7F280);
PPC_FUNC_IMPL(__imp__sub_82F7F280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F7F288;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82f7f060
	ctx.lr = 0x82F7F298;
	sub_82F7F060(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7f350
	if (ctx.cr0.eq) goto loc_82F7F350;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82f94c68
	ctx.lr = 0x82F7F2D4;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F7F300;
	sub_82F7D698(ctx, base);
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f10,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f10,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82F7F350:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F7F35C"))) PPC_WEAK_FUNC(sub_82F7F35C);
PPC_FUNC_IMPL(__imp__sub_82F7F35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7F360"))) PPC_WEAK_FUNC(sub_82F7F360);
PPC_FUNC_IMPL(__imp__sub_82F7F360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F7F368;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7ddf8
	ctx.lr = 0x82F7F380;
	sub_82F7DDF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82f7f49c
	if (ctx.cr6.eq) goto loc_82F7F49C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82f94c30
	ctx.lr = 0x82F7F398;
	sub_82F94C30(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82f7f49c
	if (ctx.cr0.eq) goto loc_82F7F49C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// beq 0x82f7f3c8
	if (ctx.cr0.eq) goto loc_82F7F3C8;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f7f3c8
	if (!ctx.cr6.eq) goto loc_82F7F3C8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F7F3C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r28,r11,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F7F3D8;
	sub_82F5D9D8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_82F7F3DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7f3f8
	if (ctx.cr6.eq) goto loc_82F7F3F8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x82f7f3fc
	if (ctx.cr6.lt) goto loc_82F7F3FC;
loc_82F7F3F8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7F3FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7f428
	if (!ctx.cr0.eq) goto loc_82F7F428;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7f428
	if (!ctx.cr0.eq) goto loc_82F7F428;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7f428
	if (!ctx.cr0.eq) goto loc_82F7F428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7F424;
	sub_82F5B2C8(ctx, base);
	// b 0x82f7f3dc
	goto loc_82F7F3DC;
loc_82F7F428:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82f7f438
	goto loc_82F7F438;
loc_82F7F434:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F7F438:
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7f454
	if (ctx.cr6.eq) goto loc_82F7F454;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x82f7f458
	if (ctx.cr6.lt) goto loc_82F7F458;
loc_82F7F454:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F7F458:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f7f480
	if (!ctx.cr0.eq) goto loc_82F7F480;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r31,r10,20,12,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F7F478;
	sub_82F5B2C8(ctx, base);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82f7f434
	if (!ctx.cr6.gt) goto loc_82F7F434;
loc_82F7F480:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f7f48c
	if (ctx.cr6.eq) goto loc_82F7F48C;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_82F7F48C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f5d010
	ctx.lr = 0x82F7F494;
	sub_82F5D010(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82f7f4a0
	goto loc_82F7F4A0;
loc_82F7F49C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F7F4A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F7F4A8"))) PPC_WEAK_FUNC(sub_82F7F4A8);
PPC_FUNC_IMPL(__imp__sub_82F7F4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F7F4B0;
	sub_82CA2BDC(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82ca74f8
	ctx.lr = 0x82F7F4B8;
	sub_82CA74F8(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,20(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// beq 0x82f7fa38
	if (ctx.cr0.eq) goto loc_82F7FA38;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7fa38
	if (!ctx.cr0.eq) goto loc_82F7FA38;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lhz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f7f600
	if (ctx.cr6.eq) goto loc_82F7F600;
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f7f060
	ctx.lr = 0x82F7F51C;
	sub_82F7F060(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7f5d0
	if (ctx.cr0.eq) goto loc_82F7F5D0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f7f54c
	if (ctx.cr0.eq) goto loc_82F7F54C;
	// lhz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// b 0x82f7f550
	goto loc_82F7F550;
loc_82F7F54C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F7F550:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f28,f0,f30
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// beq cr6,0x82f7f598
	if (ctx.cr6.eq) goto loc_82F7F598;
	// lhz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 88);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f7f598
	if (ctx.cr0.eq) goto loc_82F7F598;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82F7F598:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f7f5e4
	if (ctx.cr6.eq) goto loc_82F7F5E4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82fc2ba0
	ctx.lr = 0x82F7F5B8;
	sub_82FC2BA0(ctx, base);
	// lbz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 340);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7f5e4
	if (ctx.cr0.eq) goto loc_82F7F5E4;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82f7f5e4
	goto loc_82F7F5E4;
loc_82F7F5D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
loc_82F7F5E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f30,44(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f29,48(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f28,52(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// sth r11,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r11.u16);
loc_82F7F600:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r11,84
	ctx.r29.s64 = ctx.r11.s64 + 84;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x82f94c68
	ctx.lr = 0x82F7F644;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fneg f11,f10
	ctx.f11.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fadds f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82f7f704
	if (!ctx.cr6.gt) goto loc_82F7F704;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82f7f6dc
	if (!ctx.cr6.eq) goto loc_82F7F6DC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82f7ddf8
	ctx.lr = 0x82F7F6D8;
	sub_82F7DDF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82F7F6DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82f6d328
	ctx.lr = 0x82F7F6EC;
	sub_82F6D328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7f700
	if (ctx.cr0.eq) goto loc_82F7F700;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x82f7f704
	goto loc_82F7F704;
loc_82F7F700:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
loc_82F7F704:
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82f7f744
	if (ctx.cr6.lt) goto loc_82F7F744;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82f7f744
	if (ctx.cr6.lt) goto loc_82F7F744;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f7f744
	if (ctx.cr6.gt) goto loc_82F7F744;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82f7f748
	if (!ctx.cr6.gt) goto loc_82F7F748;
loc_82F7F744:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F7F748:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7fa38
	if (ctx.cr0.eq) goto loc_82F7FA38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82f65e60
	ctx.lr = 0x82F7F770;
	sub_82F65E60(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f94fb8
	ctx.lr = 0x82F7F780;
	sub_82F94FB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7F798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7F7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f65e60
	ctx.lr = 0x82F7F7BC;
	sub_82F65E60(ctx, base);
	// addi r4,r27,48
	ctx.r4.s64 = ctx.r27.s64 + 48;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f66090
	ctx.lr = 0x82F7F7C8;
	sub_82F66090(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f65e60
	ctx.lr = 0x82F7F7D4;
	sub_82F65E60(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f65e60
	ctx.lr = 0x82F7F7E0;
	sub_82F65E60(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f66280
	ctx.lr = 0x82F7F7EC;
	sub_82F66280(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f661f0
	ctx.lr = 0x82F7F80C;
	sub_82F661F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82F7F820;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f661f0
	ctx.lr = 0x82F7F838;
	sub_82F661F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82F7F864;
	sub_82F661F0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f0,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82f97e90
	ctx.lr = 0x82F7F890;
	sub_82F97E90(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// lfs f12,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmr f26,f12
	ctx.f26.f64 = ctx.f12.f64;
	// fmr f25,f13
	ctx.f25.f64 = ctx.f13.f64;
	// fmr f24,f12
	ctx.f24.f64 = ctx.f12.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8222c3e8
	ctx.lr = 0x82F7F8C4;
	sub_8222C3E8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f0,f29
	ctx.f0.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f29.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// fadds f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// sth r10,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// bl 0x8222c3e8
	ctx.lr = 0x82F7F8EC;
	sub_8222C3E8(ctx, base);
	// fctiwz f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f27.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// sth r11,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r11.u16);
	// sth r10,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r10.u16);
	// bl 0x8222c3e8
	ctx.lr = 0x82F7F914;
	sub_8222C3E8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f0,f26
	ctx.f0.s64 = (ctx.f26.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f26.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fadds f1,f25,f31
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// sth r10,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, ctx.r10.u16);
	// bl 0x8222c3e8
	ctx.lr = 0x82F7F93C;
	sub_8222C3E8(ctx, base);
	// fctiwz f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f24.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f24.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r9.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lhz r9,190(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 190);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// sth r9,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r9.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7F97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7F9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5992
	ctx.r4.s64 = ctx.r11.s64 + -5992;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7F9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7F9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7FA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F7FA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F7FA38:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82ca7544
	ctx.lr = 0x82F7FA44;
	sub_82CA7544(ctx, base);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F7FA48"))) PPC_WEAK_FUNC(sub_82F7FA48);
PPC_FUNC_IMPL(__imp__sub_82F7FA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7FA50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82f7f280
	ctx.lr = 0x82F7FA70;
	sub_82F7F280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7fbc8
	if (ctx.cr0.eq) goto loc_82F7FBC8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f7faa0
	if (ctx.cr0.eq) goto loc_82F7FAA0;
	// lhz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// b 0x82f7faa4
	goto loc_82F7FAA4;
loc_82F7FAA0:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F7FAA4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2756);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// blt cr6,0x82f7fb04
	if (ctx.cr6.lt) goto loc_82F7FB04;
	// lfs f10,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x82f7fb04
	if (ctx.cr6.lt) goto loc_82F7FB04;
	// lfs f12,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82f7fb04
	if (ctx.cr6.gt) goto loc_82F7FB04;
	// lfs f12,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82f7fb08
	if (!ctx.cr6.gt) goto loc_82F7FB08;
loc_82F7FB04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F7FB08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f7fbc8
	if (!ctx.cr0.eq) goto loc_82F7FBC8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// ble cr6,0x82f7fb40
	if (!ctx.cr6.gt) goto loc_82F7FB40;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,1200
	ctx.r4.s64 = ctx.r11.s64 + 1200;
	// b 0x82f7fb6c
	goto loc_82F7FB6C;
loc_82F7FB40:
	// lfs f13,84(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f7fb6c
	if (!ctx.cr6.lt) goto loc_82F7FB6C;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addic. r4,r11,-1200
	ctx.xer.ca = ctx.r11.u32 > 1199;
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82f7fb6c
	if (!ctx.cr0.lt) goto loc_82F7FB6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F7FB6C:
	// lbz r11,329(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 329);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7fb80
	if (ctx.cr0.eq) goto loc_82F7FB80;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82f7fb88
	if (!ctx.cr6.lt) goto loc_82F7FB88;
loc_82F7FB80:
	// bl 0x82f71078
	ctx.lr = 0x82F7FB84;
	sub_82F71078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F7FB88:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f7fba4
	if (!ctx.cr6.lt) goto loc_82F7FBA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f710f8
	ctx.lr = 0x82F7FBA0;
	sub_82F710F8(ctx, base);
	// b 0x82f7fbbc
	goto loc_82F7FBBC;
loc_82F7FBA4:
	// bl 0x82f7e748
	ctx.lr = 0x82F7FBA8;
	sub_82F7E748(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82f7fbc8
	if (!ctx.cr6.gt) goto loc_82F7FBC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f71168
	ctx.lr = 0x82F7FBBC;
	sub_82F71168(ctx, base);
loc_82F7FBBC:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// or r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82F7FBC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7FBD4"))) PPC_WEAK_FUNC(sub_82F7FBD4);
PPC_FUNC_IMPL(__imp__sub_82F7FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7FBD8"))) PPC_WEAK_FUNC(sub_82F7FBD8);
PPC_FUNC_IMPL(__imp__sub_82F7FBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F7FBE0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F7FBFC;
	sub_82F7B4B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f7fc2c
	if (!ctx.cr6.lt) goto loc_82F7FC2C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82F7FC2C;
	sub_82CAA2E0(ctx, base);
loc_82F7FC2C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7fc4c
	if (ctx.cr0.eq) goto loc_82F7FC4C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82F7FC4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F7FC54"))) PPC_WEAK_FUNC(sub_82F7FC54);
PPC_FUNC_IMPL(__imp__sub_82F7FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7FC58"))) PPC_WEAK_FUNC(sub_82F7FC58);
PPC_FUNC_IMPL(__imp__sub_82F7FC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F7FC60;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f7fc84
	if (!ctx.cr6.eq) goto loc_82F7FC84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F7FC80;
	sub_82F7B4B8(ctx, base);
	// b 0x82f7fcd4
	goto loc_82F7FCD4;
loc_82F7FC84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r30,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f7fca8
	if (ctx.cr6.eq) goto loc_82F7FCA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f79f18
	ctx.lr = 0x82F7FCA0;
	sub_82F79F18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7FCA8;
	sub_82EF6F38(ctx, base);
loc_82F7FCA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82F7FCC8;
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82F7FCD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F7FCDC"))) PPC_WEAK_FUNC(sub_82F7FCDC);
PPC_FUNC_IMPL(__imp__sub_82F7FCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7FCE0"))) PPC_WEAK_FUNC(sub_82F7FCE0);
PPC_FUNC_IMPL(__imp__sub_82F7FCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F7FCE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7fd38
	if (ctx.cr6.eq) goto loc_82F7FD38;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7fd34
	if (ctx.cr6.eq) goto loc_82F7FD34;
	// bl 0x82f6d720
	ctx.lr = 0x82F7FD28;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7fd34
	if (ctx.cr0.eq) goto loc_82F7FD34;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F7FD34:
	// add r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_82F7FD38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f775b0
	ctx.lr = 0x82F7FD40;
	sub_82F775B0(ctx, base);
	// bl 0x82f79ff8
	ctx.lr = 0x82F7FD44;
	sub_82F79FF8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F7FD60;
	sub_82F7B4B8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82f7af18
	ctx.lr = 0x82F7FD78;
	sub_82F7AF18(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7fd94
	if (ctx.cr6.eq) goto loc_82F7FD94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f79f18
	ctx.lr = 0x82F7FD8C;
	sub_82F79F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7FD94;
	sub_82EF6F38(ctx, base);
loc_82F7FD94:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bne cr6,0x82f7fdb8
	if (!ctx.cr6.eq) goto loc_82F7FDB8;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x82f7fdbc
	goto loc_82F7FDBC;
loc_82F7FDB8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82F7FDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F7FDC4;
	sub_82F7A268(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F7FDD4"))) PPC_WEAK_FUNC(sub_82F7FDD4);
PPC_FUNC_IMPL(__imp__sub_82F7FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7FDD8"))) PPC_WEAK_FUNC(sub_82F7FDD8);
PPC_FUNC_IMPL(__imp__sub_82F7FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F7FDE0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7fe30
	if (ctx.cr6.eq) goto loc_82F7FE30;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7fe2c
	if (ctx.cr6.eq) goto loc_82F7FE2C;
	// bl 0x82f6d720
	ctx.lr = 0x82F7FE20;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7fe2c
	if (ctx.cr0.eq) goto loc_82F7FE2C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F7FE2C:
	// add r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_82F7FE30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f775b0
	ctx.lr = 0x82F7FE38;
	sub_82F775B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f7af70
	ctx.lr = 0x82F7FE40;
	sub_82F7AF70(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F7FE5C;
	sub_82F7B4B8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82f7af18
	ctx.lr = 0x82F7FE74;
	sub_82F7AF18(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7fe90
	if (ctx.cr6.eq) goto loc_82F7FE90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f79f18
	ctx.lr = 0x82F7FE88;
	sub_82F79F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7FE90;
	sub_82EF6F38(ctx, base);
loc_82F7FE90:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F7FEB0"))) PPC_WEAK_FUNC(sub_82F7FEB0);
PPC_FUNC_IMPL(__imp__sub_82F7FEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F7FEB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f7feec
	if (ctx.cr6.eq) goto loc_82F7FEEC;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82f7feec
	if (ctx.cr6.lt) goto loc_82F7FEEC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f7fef0
	if (ctx.cr6.lt) goto loc_82F7FEF0;
loc_82F7FEEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F7FEF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ff08
	if (ctx.cr0.eq) goto loc_82F7FF08;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F7FF04;
	sub_82F7FCE0(ctx, base);
	// b 0x82f7ffbc
	goto loc_82F7FFBC;
loc_82F7FF08:
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f7ff4c
	if (ctx.cr6.eq) goto loc_82F7FF4C;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f7ff48
	if (ctx.cr6.eq) goto loc_82F7FF48;
	// bl 0x82f6d720
	ctx.lr = 0x82F7FF3C;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f7ff48
	if (ctx.cr0.eq) goto loc_82F7FF48;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F7FF48:
	// add r27,r8,r7
	ctx.r27.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_82F7FF4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f775b0
	ctx.lr = 0x82F7FF54;
	sub_82F775B0(ctx, base);
	// bl 0x82f79ff8
	ctx.lr = 0x82F7FF58;
	sub_82F79FF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7fbd8
	ctx.lr = 0x82F7FF70;
	sub_82F7FBD8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f7ff8c
	if (ctx.cr6.eq) goto loc_82F7FF8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f79f18
	ctx.lr = 0x82F7FF84;
	sub_82F79F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F7FF8C;
	sub_82EF6F38(ctx, base);
loc_82F7FF8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x82f7ffa8
	if (!ctx.cr6.eq) goto loc_82F7FFA8;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// b 0x82f7ffac
	goto loc_82F7FFAC;
loc_82F7FFA8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82F7FFAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F7FFB4;
	sub_82F7A268(ctx, base);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F7FFBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F7FFC4"))) PPC_WEAK_FUNC(sub_82F7FFC4);
PPC_FUNC_IMPL(__imp__sub_82F7FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F7FFC8"))) PPC_WEAK_FUNC(sub_82F7FFC8);
PPC_FUNC_IMPL(__imp__sub_82F7FFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F7FFD0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f80004
	if (ctx.cr6.eq) goto loc_82F80004;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82f80004
	if (ctx.cr6.lt) goto loc_82F80004;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80008
	if (ctx.cr6.lt) goto loc_82F80008;
loc_82F80004:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80008:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80020
	if (ctx.cr0.eq) goto loc_82F80020;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7fdd8
	ctx.lr = 0x82F8001C;
	sub_82F7FDD8(ctx, base);
	// b 0x82f800b8
	goto loc_82F800B8;
loc_82F80020:
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f80064
	if (ctx.cr6.eq) goto loc_82F80064;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f80060
	if (ctx.cr6.eq) goto loc_82F80060;
	// bl 0x82f6d720
	ctx.lr = 0x82F80054;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80060
	if (ctx.cr0.eq) goto loc_82F80060;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F80060:
	// add r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_82F80064:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f775b0
	ctx.lr = 0x82F8006C;
	sub_82F775B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f7af70
	ctx.lr = 0x82F80074;
	sub_82F7AF70(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7fbd8
	ctx.lr = 0x82F8008C;
	sub_82F7FBD8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f800a8
	if (ctx.cr6.eq) goto loc_82F800A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f79f18
	ctx.lr = 0x82F800A0;
	sub_82F79F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F800A8;
	sub_82EF6F38(ctx, base);
loc_82F800A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
loc_82F800B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F800C0"))) PPC_WEAK_FUNC(sub_82F800C0);
PPC_FUNC_IMPL(__imp__sub_82F800C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82F800C8;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82f80108
	if (!ctx.cr6.eq) goto loc_82F80108;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F800EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f800ec
	if (!ctx.cr6.eq) goto loc_82F800EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82F80108:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// add r22,r4,r5
	ctx.r22.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// blt 0x82f8012c
	if (ctx.cr0.lt) goto loc_82F8012C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80130
	if (ctx.cr6.lt) goto loc_82F80130;
loc_82F8012C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80130:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f80148
	if (!ctx.cr0.eq) goto loc_82F80148;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f8014c
	goto loc_82F8014C;
loc_82F80148:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F8014C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq cr6,0x82f8015c
	if (ctx.cr6.eq) goto loc_82F8015C;
	// lwz r24,32(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
loc_82F8015C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F80178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82F80180:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// bne cr6,0x82f801c4
	if (!ctx.cr6.eq) goto loc_82F801C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f801c4
	if (ctx.cr6.eq) goto loc_82F801C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f798a8
	ctx.lr = 0x82F8019C;
	sub_82F798A8(ctx, base);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f801bc
	if (ctx.cr6.eq) goto loc_82F801BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F801B0;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f801bc
	if (ctx.cr0.eq) goto loc_82F801BC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F801BC:
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// b 0x82f801dc
	goto loc_82F801DC;
loc_82F801C4:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F801D0;
	sub_82F7FCE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r24,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r24.u32);
loc_82F801DC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplw cr6,r25,r22
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82f80338
	if (!ctx.cr6.lt) goto loc_82F80338;
loc_82F801F4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f80254
	if (ctx.cr6.eq) goto loc_82F80254;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82F80204;
	sub_82EFDFA8(ctx, base);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82f80230
	if (!ctx.cr6.eq) goto loc_82F80230;
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// bne cr6,0x82f80230
	if (!ctx.cr6.eq) goto loc_82F80230;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f80230
	if (!ctx.cr6.eq) goto loc_82F80230;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// bne cr6,0x82f80230
	if (!ctx.cr6.eq) goto loc_82F80230;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82f80248
	goto loc_82F80248;
loc_82F80230:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x82f80264
	if (ctx.cr6.eq) goto loc_82F80264;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// beq cr6,0x82f80254
	if (ctx.cr6.eq) goto loc_82F80254;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F80248:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82f801f4
	if (ctx.cr6.lt) goto loc_82F801F4;
loc_82F80254:
	// cmplwi cr6,r27,10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 10, ctx.xer);
	// beq cr6,0x82f80264
	if (ctx.cr6.eq) goto loc_82F80264;
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 13, ctx.xer);
	// bne cr6,0x82f80268
	if (!ctx.cr6.eq) goto loc_82F80268;
loc_82F80264:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F80268:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f80328
	if (ctx.cr6.eq) goto loc_82F80328;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f767e8
	ctx.lr = 0x82F80280;
	sub_82F767E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplw cr6,r25,r22
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82f80304
	if (!ctx.cr6.lt) goto loc_82F80304;
loc_82F80294:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f80304
	if (ctx.cr6.eq) goto loc_82F80304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82F802A4;
	sub_82EFDFA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 13, ctx.xer);
	// beq cr6,0x82f802b8
	if (ctx.cr6.eq) goto loc_82F802B8;
	// cmplwi cr6,r27,10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 10, ctx.xer);
	// bne cr6,0x82f802d0
	if (!ctx.cr6.eq) goto loc_82F802D0;
loc_82F802B8:
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r27,r11,10
	ctx.r27.s64 = ctx.r11.s64 + 10;
loc_82F802D0:
	// sth r27,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r27.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f80304
	if (ctx.cr6.eq) goto loc_82F80304;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82f80294
	if (ctx.cr6.lt) goto loc_82F80294;
loc_82F80304:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f7a0c8
	ctx.lr = 0x82F80318;
	sub_82F7A0C8(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F80328:
	// cmplw cr6,r25,r22
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82f80338
	if (!ctx.cr6.lt) goto loc_82F80338;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f80180
	if (!ctx.cr6.eq) goto loc_82F80180;
loc_82F80338:
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f80368
	if (!ctx.cr6.eq) goto loc_82F80368;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F80364;
	sub_82F7FCE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82F80368:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f7a468
	ctx.lr = 0x82F80374;
	sub_82F7A468(ctx, base);
	// lbz r11,88(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8038c
	if (ctx.cr0.eq) goto loc_82F8038C;
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,40(r23)
	PPC_STORE_U8(ctx.r23.u32 + 40, ctx.r11.u8);
loc_82F8038C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82F80398"))) PPC_WEAK_FUNC(sub_82F80398);
PPC_FUNC_IMPL(__imp__sub_82F80398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82F803A0;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x82f803d4
	if (!ctx.cr6.eq) goto loc_82F803D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f040d0
	ctx.lr = 0x82F803D0;
	sub_82F040D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82F803D4:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r11,r28
	ctx.r20.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f803f4
	if (ctx.cr0.lt) goto loc_82F803F4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f803f8
	if (ctx.cr6.lt) goto loc_82F803F8;
loc_82F803F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F803F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f80410
	if (!ctx.cr0.eq) goto loc_82F80410;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f80414
	goto loc_82F80414;
loc_82F80410:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F80414:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq cr6,0x82f80424
	if (ctx.cr6.eq) goto loc_82F80424;
	// lwz r25,32(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
loc_82F80424:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F80444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82F8044C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// bne cr6,0x82f80490
	if (!ctx.cr6.eq) goto loc_82F80490;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f80490
	if (ctx.cr6.eq) goto loc_82F80490;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f798a8
	ctx.lr = 0x82F80468;
	sub_82F798A8(ctx, base);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f80488
	if (ctx.cr6.eq) goto loc_82F80488;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F8047C;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80488
	if (ctx.cr0.eq) goto loc_82F80488;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F80488:
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// b 0x82f804a8
	goto loc_82F804A8;
loc_82F80490:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F8049C;
	sub_82F7FCE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r25,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r25.u32);
loc_82F804A8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82f804d4
	if (!ctx.cr6.eq) goto loc_82F804D4;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 13, ctx.xer);
	// bne cr6,0x82f804d4
	if (!ctx.cr6.eq) goto loc_82F804D4;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82f804d4
	if (!ctx.cr6.eq) goto loc_82F804D4;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// beq 0x82f8060c
	if (ctx.cr0.eq) goto loc_82F8060C;
loc_82F804D4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f8050c
	if (ctx.cr6.eq) goto loc_82F8050C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F804E0:
	// lhz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r23,10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 10, ctx.xer);
	// beq cr6,0x82f8051c
	if (ctx.cr6.eq) goto loc_82F8051C;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 13, ctx.xer);
	// beq cr6,0x82f8050c
	if (ctx.cr6.eq) goto loc_82F8050C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f8050c
	if (ctx.cr6.eq) goto loc_82F8050C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82f804e0
	if (ctx.cr6.lt) goto loc_82F804E0;
loc_82F8050C:
	// cmplwi cr6,r23,10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 10, ctx.xer);
	// beq cr6,0x82f8051c
	if (ctx.cr6.eq) goto loc_82F8051C;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 13, ctx.xer);
	// bne cr6,0x82f80520
	if (!ctx.cr6.eq) goto loc_82F80520;
loc_82F8051C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F80520:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f767e8
	ctx.lr = 0x82F80530;
	sub_82F767E8(ctx, base);
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82F80540;
	sub_82CA2C60(ctx, base);
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r26,r31,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r31.s64;
	// cmplwi cr6,r23,10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 10, ctx.xer);
	// beq cr6,0x82f80558
	if (ctx.cr6.eq) goto loc_82F80558;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 13, ctx.xer);
	// bne cr6,0x82f805dc
	if (!ctx.cr6.eq) goto loc_82F805DC;
loc_82F80558:
	// lbz r7,40(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f805dc
	if (ctx.cr6.eq) goto loc_82F805DC;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f805c4
	if (ctx.cr6.eq) goto loc_82F805C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F8058C;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80598
	if (ctx.cr0.eq) goto loc_82F80598;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F80598:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f805c4
	if (ctx.cr6.eq) goto loc_82F805C4;
	// rlwinm r9,r7,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sth r11,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r11.u16);
loc_82F805C4:
	// lbz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r23,r11,10
	ctx.r23.s64 = ctx.r11.s64 + 10;
loc_82F805DC:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f7a0c8
	ctx.lr = 0x82F805F0;
	sub_82F7A0C8(ctx, base);
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r22,r31,r22
	ctx.r22.u64 = ctx.r31.u64 + ctx.r22.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82f8060c
	if (!ctx.cr6.lt) goto loc_82F8060C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82f8044c
	if (!ctx.cr6.eq) goto loc_82F8044C;
loc_82F8060C:
	// lbz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f80638
	if (!ctx.cr6.eq) goto loc_82F80638;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F80638;
	sub_82F7FCE0(ctx, base);
loc_82F80638:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f7a468
	ctx.lr = 0x82F80644;
	sub_82F7A468(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82F80650"))) PPC_WEAK_FUNC(sub_82F80650);
PPC_FUNC_IMPL(__imp__sub_82F80650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82F80658;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82f80678
	if (!ctx.cr6.eq) goto loc_82F80678;
	// bl 0x82f73b38
	ctx.lr = 0x82F80674;
	sub_82F73B38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82F80678:
	// addi r23,r28,20
	ctx.r23.s64 = ctx.r28.s64 + 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r30,r31,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r31.s64;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F80694;
	sub_82F7B4B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,3224
	ctx.r6.s64 = ctx.r11.s64 + 3224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,40(r28)
	PPC_STORE_U8(ctx.r28.u32 + 40, ctx.r11.u8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F806C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f72d98
	ctx.lr = 0x82F806D8;
	sub_82F72D98(ctx, base);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f80700
	if (ctx.cr6.eq) goto loc_82F80700;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82f80700
	if (ctx.cr6.lt) goto loc_82F80700;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80704
	if (ctx.cr6.lt) goto loc_82F80704;
loc_82F80700:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80704:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8082c
	if (!ctx.cr0.eq) goto loc_82F8082C;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f80790
	if (ctx.cr6.eq) goto loc_82F80790;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82f7fce0
	ctx.lr = 0x82F80730;
	sub_82F7FCE0(ctx, base);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f80754
	if (ctx.cr6.eq) goto loc_82F80754;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F80748;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80754
	if (ctx.cr0.eq) goto loc_82F80754;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F80754:
	// subf r31,r24,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r24.s64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f80764
	if (ctx.cr6.lt) goto loc_82F80764;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F80764:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F8077C;
	sub_82F7AFB8(ctx, base);
loc_82F8077C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f80790
	if (!ctx.cr6.lt) goto loc_82F80790;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82F80790:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f807b0
	if (ctx.cr6.eq) goto loc_82F807B0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82f807b0
	if (ctx.cr6.lt) goto loc_82F807B0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f807b4
	if (ctx.cr6.lt) goto loc_82F807B4;
loc_82F807B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F807B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8082c
	if (!ctx.cr0.eq) goto loc_82F8082C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8082c
	if (ctx.cr6.eq) goto loc_82F8082C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f807f0
	if (ctx.cr6.eq) goto loc_82F807F0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F807E4;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f807f0
	if (ctx.cr0.eq) goto loc_82F807F0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82F807F0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bgt cr6,0x82f80804
	if (ctx.cr6.gt) goto loc_82F80804;
	// bl 0x82f7fdd8
	ctx.lr = 0x82F80800;
	sub_82F7FDD8(ctx, base);
	// b 0x82f8077c
	goto loc_82F8077C;
loc_82F80804:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7fce0
	ctx.lr = 0x82F80818;
	sub_82F7FCE0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F8082C;
	sub_82F7AFB8(ctx, base);
loc_82F8082C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f80844
	if (ctx.cr0.lt) goto loc_82F80844;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80848
	if (ctx.cr6.lt) goto loc_82F80848;
loc_82F80844:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80848:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f80860
	if (!ctx.cr0.eq) goto loc_82F80860;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f80864
	goto loc_82F80864;
loc_82F80860:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82F80864:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f80888
	if (ctx.cr6.eq) goto loc_82F80888;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82f6d770
	ctx.lr = 0x82F80874;
	sub_82F6D770(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80888
	if (ctx.cr0.eq) goto loc_82F80888;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x82f7fce0
	ctx.lr = 0x82F80888;
	sub_82F7FCE0(ctx, base);
loc_82F80888:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f7a528
	ctx.lr = 0x82F80890;
	sub_82F7A528(ctx, base);
	// lbz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f808a8
	if (ctx.cr0.eq) goto loc_82F808A8;
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,40(r28)
	PPC_STORE_U8(ctx.r28.u32 + 40, ctx.r11.u8);
loc_82F808A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82F808B0"))) PPC_WEAK_FUNC(sub_82F808B0);
PPC_FUNC_IMPL(__imp__sub_82F808B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82F808B8;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f808e8
	if (!ctx.cr6.eq) goto loc_82F808E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f80cb0
	goto loc_82F80CB0;
loc_82F808E8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F808F0;
	sub_82F73B38(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82f80904
	if (!ctx.cr6.gt) goto loc_82F80904;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F80900;
	sub_82F73B38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82F80904:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82f80934
	if (!ctx.cr6.eq) goto loc_82F80934;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f80934
	if (ctx.cr0.eq) goto loc_82F80934;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F80920:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82f80920
	if (!ctx.cr0.eq) goto loc_82F80920;
loc_82F80934:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F80954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// bl 0x82f72e28
	ctx.lr = 0x82F80974;
	sub_82F72E28(ctx, base);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f8099c
	if (ctx.cr6.eq) goto loc_82F8099C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82f8099c
	if (ctx.cr6.lt) goto loc_82F8099C;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f809a0
	if (ctx.cr6.lt) goto loc_82F809A0;
loc_82F8099C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F809A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f809bc
	if (!ctx.cr0.eq) goto loc_82F809BC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82f809c0
	goto loc_82F809C0;
loc_82F809BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F809C0:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
loc_82F809D0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f809f0
	if (ctx.cr6.eq) goto loc_82F809F0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82f809f0
	if (ctx.cr6.lt) goto loc_82F809F0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f809f4
	if (ctx.cr6.lt) goto loc_82F809F4;
loc_82F809F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F809F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80a14
	if (ctx.cr0.eq) goto loc_82F80A14;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F80A08;
	sub_82F7FCE0(ctx, base);
	// addi r24,r21,20
	ctx.r24.s64 = ctx.r21.s64 + 20;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F80A14:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f80a48
	if (ctx.cr6.eq) goto loc_82F80A48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F80A34;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80a40
	if (ctx.cr0.eq) goto loc_82F80A40;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F80A40:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82f80a54
	if (!ctx.cr6.eq) goto loc_82F80A54;
loc_82F80A48:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F80A54;
	sub_82F7A268(ctx, base);
loc_82F80A54:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x82f80a88
	if (!ctx.cr6.eq) goto loc_82F80A88;
	// clrlwi r11,r19,16
	ctx.r11.u64 = ctx.r19.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82f80a88
	if (!ctx.cr6.eq) goto loc_82F80A88;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82f80a88
	if (!ctx.cr6.eq) goto loc_82F80A88;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// beq 0x82f80c3c
	if (ctx.cr0.eq) goto loc_82F80C3C;
loc_82F80A88:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f80acc
	if (ctx.cr6.eq) goto loc_82F80ACC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F80A94:
	// lhz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82f80ac8
	if (ctx.cr6.eq) goto loc_82F80AC8;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82f80ac8
	if (ctx.cr6.eq) goto loc_82F80AC8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f80acc
	if (ctx.cr6.eq) goto loc_82F80ACC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82f80a94
	if (ctx.cr6.lt) goto loc_82F80A94;
	// b 0x82f80acc
	goto loc_82F80ACC;
loc_82F80AC8:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82F80ACC:
	// clrlwi r27,r19,16
	ctx.r27.u64 = ctx.r19.u32 & 0xFFFF;
	// cmplwi cr6,r27,10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 10, ctx.xer);
	// beq cr6,0x82f80ae0
	if (ctx.cr6.eq) goto loc_82F80AE0;
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 13, ctx.xer);
	// bne cr6,0x82f80ae4
	if (!ctx.cr6.eq) goto loc_82F80AE4;
loc_82F80AE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82F80AE4:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f80b8c
	if (ctx.cr6.eq) goto loc_82F80B8C;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f80b08
	if (!ctx.cr6.lt) goto loc_82F80B08;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82F80B08:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f7feb0
	ctx.lr = 0x82F80B18;
	sub_82F7FEB0(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82f6f150
	ctx.lr = 0x82F80B24;
	sub_82F6F150(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r7,r28,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F80B40;
	sub_82F7AFB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r29,r28,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bl 0x82f7a380
	ctx.lr = 0x82F80B60;
	sub_82F7A380(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f80ba4
	if (ctx.cr6.eq) goto loc_82F80BA4;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82f80b7c
	if (ctx.cr6.lt) goto loc_82F80B7C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82F80B7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// bl 0x82f79938
	ctx.lr = 0x82F80B88;
	sub_82F79938(ctx, base);
	// b 0x82f80ba4
	goto loc_82F80BA4;
loc_82F80B8C:
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7a380
	ctx.lr = 0x82F80BA4;
	sub_82F7A380(ctx, base);
loc_82F80BA4:
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 13, ctx.xer);
	// beq cr6,0x82f80bb4
	if (ctx.cr6.eq) goto loc_82F80BB4;
	// cmplwi cr6,r27,10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 10, ctx.xer);
	// bne cr6,0x82f80bfc
	if (!ctx.cr6.eq) goto loc_82F80BFC;
loc_82F80BB4:
	// lbz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 40);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f80bfc
	if (ctx.cr6.eq) goto loc_82F80BFC;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r30,r28
	ctx.r9.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sth r11,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r11.u16);
loc_82F80BFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// subf r22,r30,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r30.s64;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r20,r30,r20
	ctx.r20.u64 = ctx.r30.u64 + ctx.r20.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82f80c2c
	if (!ctx.cr6.lt) goto loc_82F80C2C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82F80C2C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f80c3c
	if (ctx.cr6.eq) goto loc_82F80C3C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f809d0
	if (!ctx.cr6.eq) goto loc_82F809D0;
loc_82F80C3C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82f80c54
	if (ctx.cr6.lt) goto loc_82F80C54;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80c58
	if (ctx.cr6.lt) goto loc_82F80C58;
loc_82F80C54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80C58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f80c8c
	if (!ctx.cr0.eq) goto loc_82F80C8C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r23,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r23.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82f80c3c
	if (!ctx.cr6.lt) goto loc_82F80C3C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82f80c3c
	goto loc_82F80C3C;
loc_82F80C8C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f7a528
	ctx.lr = 0x82F80C94;
	sub_82F7A528(ctx, base);
	// lbz r11,88(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80cac
	if (ctx.cr0.eq) goto loc_82F80CAC;
	// lbz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,40(r21)
	PPC_STORE_U8(ctx.r21.u32 + 40, ctx.r11.u8);
loc_82F80CAC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82F80CB0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_82F80CB8"))) PPC_WEAK_FUNC(sub_82F80CB8);
PPC_FUNC_IMPL(__imp__sub_82F80CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82F80CC0;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F80CD8;
	sub_82F73B38(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne 0x82f80ce8
	if (!ctx.cr0.eq) goto loc_82F80CE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f81100
	goto loc_82F81100;
loc_82F80CE8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r6,r10,3224
	ctx.r6.s64 = ctx.r10.s64 + 3224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F80D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f72e28
	ctx.lr = 0x82F80D28;
	sub_82F72E28(ctx, base);
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f80d50
	if (ctx.cr6.eq) goto loc_82F80D50;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82f80d50
	if (ctx.cr6.lt) goto loc_82F80D50;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80d54
	if (ctx.cr6.lt) goto loc_82F80D54;
loc_82F80D50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80D54:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80d80
	if (ctx.cr0.eq) goto loc_82F80D80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F80D68;
	sub_82F7FCE0(ctx, base);
	// addi r22,r20,20
	ctx.r22.s64 = ctx.r20.s64 + 20;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// b 0x82f80d84
	goto loc_82F80D84;
loc_82F80D80:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F80D84:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f80da4
	if (ctx.cr6.eq) goto loc_82F80DA4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82f80da4
	if (ctx.cr6.lt) goto loc_82F80DA4;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80da8
	if (ctx.cr6.lt) goto loc_82F80DA8;
loc_82F80DA4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80DA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f80dc4
	if (!ctx.cr0.eq) goto loc_82F80DC4;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r21,32(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82f80dc8
	goto loc_82F80DC8;
loc_82F80DC4:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82F80DC8:
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f80e44
	if (!ctx.cr6.eq) goto loc_82F80E44;
	// lwz r11,20(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f80e08
	if (ctx.cr6.eq) goto loc_82F80E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F80DFC;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80e08
	if (ctx.cr0.eq) goto loc_82F80E08;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82F80E08:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F80E1C;
	sub_82F7AFB8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82f80e30
	if (!ctx.cr6.eq) goto loc_82F80E30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f6f150
	ctx.lr = 0x82F80E30;
	sub_82F6F150(ctx, base);
loc_82F80E30:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// b 0x82f81078
	goto loc_82F81078;
loc_82F80E44:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r25,r19,20
	ctx.r25.s64 = ctx.r19.s64 + 20;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x82f80e70
	if (!ctx.cr6.lt) goto loc_82F80E70;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82F80E70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82f7feb0
	ctx.lr = 0x82F80E80;
	sub_82F7FEB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r7,r29,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F80E9C;
	sub_82F7AFB8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r28,r29,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r29.s64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f80ecc
	if (ctx.cr6.eq) goto loc_82F80ECC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F80EC0;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80ecc
	if (ctx.cr0.eq) goto loc_82F80ECC;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82F80ECC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F80EE0;
	sub_82F7AFB8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f80f00
	if (ctx.cr6.eq) goto loc_82F80F00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F80EF4;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80f00
	if (ctx.cr0.eq) goto loc_82F80F00;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F80F00:
	// subf r27,r8,r18
	ctx.r27.s64 = ctx.r18.s64 - ctx.r8.s64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82f80f18
	if (!ctx.cr6.eq) goto loc_82F80F18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82f6f150
	ctx.lr = 0x82F80F18;
	sub_82F6F150(ctx, base);
loc_82F80F18:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f80f40
	if (ctx.cr6.eq) goto loc_82F80F40;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82f80f34
	if (ctx.cr6.lt) goto loc_82F80F34;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82F80F34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// bl 0x82f79938
	ctx.lr = 0x82F80F40;
	sub_82F79938(ctx, base);
loc_82F80F40:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f80f60
	if (ctx.cr6.eq) goto loc_82F80F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F80F54;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80f60
	if (ctx.cr0.eq) goto loc_82F80F60;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F80F60:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// add r29,r8,r21
	ctx.r29.u64 = ctx.r8.u64 + ctx.r21.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f80f78
	if (!ctx.cr6.lt) goto loc_82F80F78;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
loc_82F80F78:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f80f88
	if (!ctx.cr6.gt) goto loc_82F80F88;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82F80F88:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x82f80f9c
	if (ctx.cr6.lt) goto loc_82F80F9C;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f80fa0
	if (ctx.cr6.lt) goto loc_82F80FA0;
loc_82F80F9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F80FA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81080
	if (!ctx.cr0.eq) goto loc_82F81080;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f81080
	if (ctx.cr6.eq) goto loc_82F81080;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f80fdc
	if (ctx.cr6.eq) goto loc_82F80FDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F80FD0;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f80fdc
	if (ctx.cr0.eq) goto loc_82F80FDC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82F80FDC:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82f81024
	if (!ctx.cr6.lt) goto loc_82F81024;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82f7ffc8
	ctx.lr = 0x82F80FF4;
	sub_82F7FFC8(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f8100c
	if (!ctx.cr6.lt) goto loc_82F8100C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82F8100C:
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82f80f88
	if (!ctx.cr6.lt) goto loc_82F80F88;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// b 0x82f80f88
	goto loc_82F80F88;
loc_82F81024:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F8103C;
	sub_82F7AFB8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82f6f150
	ctx.lr = 0x82F81048;
	sub_82F6F150(ctx, base);
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r29,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r29.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f8106c
	if (ctx.cr6.eq) goto loc_82F8106C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F81060;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8106c
	if (ctx.cr0.eq) goto loc_82F8106C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F8106C:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
loc_82F81078:
	// bge cr6,0x82f81080
	if (!ctx.cr6.lt) goto loc_82F81080;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82F81080:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_82F81084:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82f81098
	if (ctx.cr6.lt) goto loc_82F81098;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f8109c
	if (ctx.cr6.lt) goto loc_82F8109C;
loc_82F81098:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F8109C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f810dc
	if (!ctx.cr0.eq) goto loc_82F810DC;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f810dc
	if (ctx.cr6.eq) goto loc_82F810DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f81084
	if (!ctx.cr6.lt) goto loc_82F81084;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x82f81084
	goto loc_82F81084;
loc_82F810DC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82f7a528
	ctx.lr = 0x82F810E4;
	sub_82F7A528(ctx, base);
	// lbz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f810fc
	if (ctx.cr0.eq) goto loc_82F810FC;
	// lbz r11,40(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,40(r20)
	PPC_STORE_U8(ctx.r20.u32 + 40, ctx.r11.u8);
loc_82F810FC:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82F81100:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82F81108"))) PPC_WEAK_FUNC(sub_82F81108);
PPC_FUNC_IMPL(__imp__sub_82F81108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F81110;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8113c
	if (ctx.cr0.eq) goto loc_82F8113C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82f7c868
	ctx.lr = 0x82F8113C;
	sub_82F7C868(ctx, base);
loc_82F8113C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,332
	ctx.r4.s64 = ctx.r31.s64 + 332;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// sth r11,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// bl 0x82f279e8
	ctx.lr = 0x82F81198;
	sub_82F279E8(ctx, base);
	// lbz r11,329(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f811bc
	if (ctx.cr0.eq) goto loc_82F811BC;
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
loc_82F811BC:
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f811dc
	if (ctx.cr0.eq) goto loc_82F811DC;
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r10,99(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
loc_82F811DC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f81204
	if (ctx.cr6.eq) goto loc_82F81204;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f7e7e8
	ctx.lr = 0x82F811FC;
	sub_82F7E7E8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82f81208
	goto loc_82F81208;
loc_82F81204:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F81208:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f95b18
	ctx.lr = 0x82F81224;
	sub_82F95B18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F8122C"))) PPC_WEAK_FUNC(sub_82F8122C);
PPC_FUNC_IMPL(__imp__sub_82F8122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F81230"))) PPC_WEAK_FUNC(sub_82F81230);
PPC_FUNC_IMPL(__imp__sub_82F81230) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f812e8
	if (ctx.cr6.eq) goto loc_82F812E8;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x82f73b38
	ctx.lr = 0x82F81260;
	sub_82F73B38(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82f8126c
	if (!ctx.cr6.gt) goto loc_82F8126C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82F8126C:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f81280
	if (!ctx.cr0.eq) goto loc_82F81280;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82f81284
	goto loc_82F81284;
loc_82F81280:
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F81284:
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f812e8
	if (ctx.cr6.eq) goto loc_82F812E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7f360
	ctx.lr = 0x82F812B0;
	sub_82F7F360(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f812e8
	if (ctx.cr0.eq) goto loc_82F812E8;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82f812e8
	if (ctx.cr6.eq) goto loc_82F812E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f812e8
	if (ctx.cr6.eq) goto loc_82F812E8;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82f812e8
	if (!ctx.cr6.lt) goto loc_82F812E8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82F812E8:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// sth r10,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r10.u16);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f8132c
	if (ctx.cr6.eq) goto loc_82F8132C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7fa48
	ctx.lr = 0x82F81320;
	sub_82F7FA48(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7b1e8
	ctx.lr = 0x82F8132C;
	sub_82F7B1E8(ctx, base);
loc_82F8132C:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f8138c
	if (ctx.cr0.eq) goto loc_82F8138C;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f81370
	if (!ctx.cr0.eq) goto loc_82F81370;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81370
	if (!ctx.cr0.eq) goto loc_82F81370;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f81368
	if (!ctx.cr6.eq) goto loc_82F81368;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82f8138c
	if (ctx.cr6.eq) goto loc_82F8138C;
loc_82F81368:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82f81388
	goto loc_82F81388;
loc_82F81370:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82f8138c
	if (ctx.cr6.eq) goto loc_82F8138C;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_82F81388:
	// bl 0x82f7aac8
	ctx.lr = 0x82F8138C;
	sub_82F7AAC8(ctx, base);
loc_82F8138C:
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

__attribute__((alias("__imp__sub_82F813A4"))) PPC_WEAK_FUNC(sub_82F813A4);
PPC_FUNC_IMPL(__imp__sub_82F813A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F813A8"))) PPC_WEAK_FUNC(sub_82F813A8);
PPC_FUNC_IMPL(__imp__sub_82F813A8) {
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
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f81428
	if (!ctx.cr0.eq) goto loc_82F81428;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82f81424
	if (!ctx.cr6.gt) goto loc_82F81424;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f81410
	if (!ctx.cr0.eq) goto loc_82F81410;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f81408
	if (ctx.cr0.eq) goto loc_82F81408;
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82f8140c
	goto loc_82F8140C;
loc_82F81408:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82F8140C:
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_82F81410:
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
loc_82F81424:
	// stfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82F81428:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f814cc
	if (ctx.cr0.eq) goto loc_82F814CC;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F81440;
	sub_82F7D698(ctx, base);
	// lfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82f81468
	if (ctx.cr6.gt) goto loc_82F81468;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f814cc
	if (ctx.cr6.eq) goto loc_82F814CC;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x82f814b0
	goto loc_82F814B0;
loc_82F81468:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F81474;
	sub_82F7D698(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82f814cc
	if (ctx.cr6.lt) goto loc_82F814CC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7e748
	ctx.lr = 0x82F8148C;
	sub_82F7E748(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f7d648
	ctx.lr = 0x82F8149C;
	sub_82F7D648(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82f814cc
	if (!ctx.cr6.lt) goto loc_82F814CC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82F814B0:
	// bl 0x82f7d920
	ctx.lr = 0x82F814B4;
	sub_82F7D920(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f814cc
	if (ctx.cr6.eq) goto loc_82F814CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F814CC;
	sub_82F81230(ctx, base);
loc_82F814CC:
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

__attribute__((alias("__imp__sub_82F814E4"))) PPC_WEAK_FUNC(sub_82F814E4);
PPC_FUNC_IMPL(__imp__sub_82F814E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F814E8"))) PPC_WEAK_FUNC(sub_82F814E8);
PPC_FUNC_IMPL(__imp__sub_82F814E8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f81588
	if (ctx.cr0.eq) goto loc_82F81588;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F81524;
	sub_82F7D698(ctx, base);
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f2,f30,f13
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f1,72(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f2,76(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7d990
	ctx.lr = 0x82F81544;
	sub_82F7D990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f81588
	if (ctx.cr6.eq) goto loc_82F81588;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F8155C;
	sub_82F81230(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f81588
	if (ctx.cr0.eq) goto loc_82F81588;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f81588
	if (!ctx.cr0.eq) goto loc_82F81588;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f7aac8
	ctx.lr = 0x82F81588;
	sub_82F7AAC8(ctx, base);
loc_82F81588:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F815A8"))) PPC_WEAK_FUNC(sub_82F815A8);
PPC_FUNC_IMPL(__imp__sub_82F815A8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8163c
	if (ctx.cr0.eq) goto loc_82F8163C;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7d698
	ctx.lr = 0x82F815E8;
	sub_82F7D698(ctx, base);
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f2,f30,f13
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f1,72(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f2,76(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7d990
	ctx.lr = 0x82F81608;
	sub_82F7D990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f8163c
	if (ctx.cr6.eq) goto loc_82F8163C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F81620;
	sub_82F81230(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8163c
	if (ctx.cr0.eq) goto loc_82F8163C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82f7aac8
	ctx.lr = 0x82F8163C;
	sub_82F7AAC8(ctx, base);
loc_82F8163C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8165C"))) PPC_WEAK_FUNC(sub_82F8165C);
PPC_FUNC_IMPL(__imp__sub_82F8165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F81660"))) PPC_WEAK_FUNC(sub_82F81660);
PPC_FUNC_IMPL(__imp__sub_82F81660) {
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
	// andi. r11,r4,258
	ctx.r11.u64 = ctx.r4.u64 & 258;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8169c
	if (ctx.cr0.eq) goto loc_82F8169C;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f81694
	if (ctx.cr0.eq) goto loc_82F81694;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f816cc
	if (ctx.cr0.eq) goto loc_82F816CC;
loc_82F81694:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f816c4
	goto loc_82F816C4;
loc_82F8169C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F816AC;
	sub_82F73B38(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82f816cc
	if (!ctx.cr6.gt) goto loc_82F816CC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F816C0;
	sub_82F73B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82F816C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F816CC;
	sub_82F81230(ctx, base);
loc_82F816CC:
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

__attribute__((alias("__imp__sub_82F816E0"))) PPC_WEAK_FUNC(sub_82F816E0);
PPC_FUNC_IMPL(__imp__sub_82F816E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F816E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f8170c
	if (ctx.cr0.eq) goto loc_82F8170C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f81718
	if (ctx.cr0.eq) goto loc_82F81718;
loc_82F8170C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F81718;
	sub_82F81230(ctx, base);
loc_82F81718:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f7aac8
	ctx.lr = 0x82F81728;
	sub_82F7AAC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F81730"))) PPC_WEAK_FUNC(sub_82F81730);
PPC_FUNC_IMPL(__imp__sub_82F81730) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f81764
	if (ctx.cr6.eq) goto loc_82F81764;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F81764:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f81784
	if (ctx.cr6.eq) goto loc_82F81784;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F81784:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F81790;
	sub_82F7B4B8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f817a0
	if (ctx.cr6.eq) goto loc_82F817A0;
	// bl 0x82ef6f38
	ctx.lr = 0x82F817A0;
	sub_82EF6F38(ctx, base);
loc_82F817A0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f817c0
	if (ctx.cr6.eq) goto loc_82F817C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F817C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F817C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82F817C8;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F817DC"))) PPC_WEAK_FUNC(sub_82F817DC);
PPC_FUNC_IMPL(__imp__sub_82F817DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F817E0"))) PPC_WEAK_FUNC(sub_82F817E0);
PPC_FUNC_IMPL(__imp__sub_82F817E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F817E8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82F817F4;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// bl 0x82ef6ef8
	ctx.lr = 0x82F81828;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r28,r11,7817
	ctx.r28.u64 = ctx.r11.u64 | 7817;
	// ori r29,r10,9034
	ctx.r29.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f81854
	if (ctx.cr0.eq) goto loc_82F81854;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f04d70
	ctx.lr = 0x82F8184C;
	sub_82F04D70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f81858
	goto loc_82F81858;
loc_82F81854:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82F81858:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f81878
	if (ctx.cr6.eq) goto loc_82F81878;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F81878:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F81884;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8189c
	if (ctx.cr0.eq) goto loc_82F8189C;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f08b70
	ctx.lr = 0x82F81898;
	sub_82F08B70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82F8189C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f818bc
	if (ctx.cr6.eq) goto loc_82F818BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F818BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F818BC:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F818CC"))) PPC_WEAK_FUNC(sub_82F818CC);
PPC_FUNC_IMPL(__imp__sub_82F818CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F818D0"))) PPC_WEAK_FUNC(sub_82F818D0);
PPC_FUNC_IMPL(__imp__sub_82F818D0) {
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
	// bl 0x82f81730
	ctx.lr = 0x82F818F0;
	sub_82F81730(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f81900
	if (ctx.cr0.eq) goto loc_82F81900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F81900;
	sub_82EF6F38(ctx, base);
loc_82F81900:
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

__attribute__((alias("__imp__sub_82F8191C"))) PPC_WEAK_FUNC(sub_82F8191C);
PPC_FUNC_IMPL(__imp__sub_82F8191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F81920"))) PPC_WEAK_FUNC(sub_82F81920);
PPC_FUNC_IMPL(__imp__sub_82F81920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F81928;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82F81938;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82f81960
	if (ctx.cr6.eq) goto loc_82F81960;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F81960:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x82f04d70
	ctx.lr = 0x82F81988;
	sub_82F04D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f79e30
	ctx.lr = 0x82F81994;
	sub_82F79E30(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82f819b0
	if (ctx.cr0.eq) goto loc_82F819B0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F819B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F819B0:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f819d0
	if (ctx.cr6.eq) goto loc_82F819D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F819D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F819D0:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f04dd8
	ctx.lr = 0x82F819DC;
	sub_82F04DD8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f08b70
	ctx.lr = 0x82F819E4;
	sub_82F08B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f79d48
	ctx.lr = 0x82F819F0;
	sub_82F79D48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f81a0c
	if (ctx.cr0.eq) goto loc_82F81A0C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F81A0C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f81a2c
	if (ctx.cr6.eq) goto loc_82F81A2C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F81A2C:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f08be0
	ctx.lr = 0x82F81A38;
	sub_82F08BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F81A44"))) PPC_WEAK_FUNC(sub_82F81A44);
PPC_FUNC_IMPL(__imp__sub_82F81A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F81A48"))) PPC_WEAK_FUNC(sub_82F81A48);
PPC_FUNC_IMPL(__imp__sub_82F81A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F81A50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F81A6C;
	sub_82F7B4B8(ctx, base);
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F81A94;
	sub_82F800C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F81A9C"))) PPC_WEAK_FUNC(sub_82F81A9C);
PPC_FUNC_IMPL(__imp__sub_82F81A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F81AA0"))) PPC_WEAK_FUNC(sub_82F81AA0);
PPC_FUNC_IMPL(__imp__sub_82F81AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F81AA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F81AC4;
	sub_82F7B4B8(ctx, base);
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f80398
	ctx.lr = 0x82F81AEC;
	sub_82F80398(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F81AF4"))) PPC_WEAK_FUNC(sub_82F81AF4);
PPC_FUNC_IMPL(__imp__sub_82F81AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F81AF8"))) PPC_WEAK_FUNC(sub_82F81AF8);
PPC_FUNC_IMPL(__imp__sub_82F81AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F81B00;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F81B18;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f81b54
	if (ctx.cr0.eq) goto loc_82F81B54;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82f775b0
	ctx.lr = 0x82F81B40;
	sub_82F775B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81920
	ctx.lr = 0x82F81B4C;
	sub_82F81920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f81b58
	goto loc_82F81B58;
loc_82F81B54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F81B58:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f80650
	ctx.lr = 0x82F81B6C;
	sub_82F80650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F81B78"))) PPC_WEAK_FUNC(sub_82F81B78);
PPC_FUNC_IMPL(__imp__sub_82F81B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F81B80;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82f81ba0
	if (!ctx.cr6.eq) goto loc_82F81BA0;
	// bl 0x82f73b38
	ctx.lr = 0x82F81B98;
	sub_82F73B38(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82f81ba4
	goto loc_82F81BA4;
loc_82F81BA0:
	// subf r23,r31,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r31.s64;
loc_82F81BA4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f72d98
	ctx.lr = 0x82F81BD4;
	sub_82F72D98(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f81c08
	if (ctx.cr6.eq) goto loc_82F81C08;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f81c08
	if (ctx.cr6.lt) goto loc_82F81C08;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f81c0c
	if (ctx.cr6.lt) goto loc_82F81C0C;
loc_82F81C08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F81C0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81c6c
	if (!ctx.cr0.eq) goto loc_82F81C6C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r31,r4,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82f81c38
	if (!ctx.cr6.lt) goto loc_82F81C38;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82F81C38:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f81c6c
	if (ctx.cr6.gt) goto loc_82F81C6C;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subfc r11,r11,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// bl 0x82f79938
	ctx.lr = 0x82F81C58;
	sub_82F79938(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r28,r31,r23
	ctx.r28.s64 = ctx.r23.s64 - ctx.r31.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f81c6c
	if (!ctx.cr6.lt) goto loc_82F81C6C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82F81C6C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f81c8c
	if (ctx.cr6.eq) goto loc_82F81C8C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f81c8c
	if (ctx.cr6.lt) goto loc_82F81C8C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f81c90
	if (ctx.cr6.lt) goto loc_82F81C90;
loc_82F81C8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F81C90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81d78
	if (!ctx.cr0.eq) goto loc_82F81D78;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f81d04
	if (ctx.cr6.lt) goto loc_82F81D04;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f81ce0
	if (ctx.cr6.lt) goto loc_82F81CE0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f81ce4
	if (ctx.cr6.lt) goto loc_82F81CE4;
loc_82F81CE0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F81CE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81cf8
	if (!ctx.cr0.eq) goto loc_82F81CF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f7fc58
	ctx.lr = 0x82F81CF8;
	sub_82F7FC58(ctx, base);
loc_82F81CF8:
	// subf. r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82f81c6c
	if (!ctx.cr0.eq) goto loc_82F81C6C;
	// b 0x82f81d78
	goto loc_82F81D78;
loc_82F81D04:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f81d78
	if (ctx.cr6.eq) goto loc_82F81D78;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f81d78
	if (ctx.cr0.eq) goto loc_82F81D78;
	// subf r7,r28,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r28.s64;
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F81D2C;
	sub_82F7AFB8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f81d5c
	if (ctx.cr6.lt) goto loc_82F81D5C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f81d60
	if (ctx.cr6.lt) goto loc_82F81D60;
loc_82F81D5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F81D60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81d74
	if (!ctx.cr0.eq) goto loc_82F81D74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f7fc58
	ctx.lr = 0x82F81D74;
	sub_82F7FC58(ctx, base);
loc_82F81D74:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82F81D78:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f81d98
	if (ctx.cr6.eq) goto loc_82F81D98;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f81d98
	if (ctx.cr6.lt) goto loc_82F81D98;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f81d9c
	if (ctx.cr6.lt) goto loc_82F81D9C;
loc_82F81D98:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F81D9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81e48
	if (!ctx.cr0.eq) goto loc_82F81E48;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x82f81dd4
	if (ctx.cr0.eq) goto loc_82F81DD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F81DC8;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f81dd4
	if (ctx.cr0.eq) goto loc_82F81DD4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F81DD4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f81e00
	if (ctx.cr6.eq) goto loc_82F81E00;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f81e48
	if (ctx.cr6.eq) goto loc_82F81E48;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f81e48
	if (ctx.cr0.eq) goto loc_82F81E48;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f7afb8
	ctx.lr = 0x82F81E00;
	sub_82F7AFB8(ctx, base);
loc_82F81E00:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f81e30
	if (ctx.cr6.lt) goto loc_82F81E30;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f81e34
	if (ctx.cr6.lt) goto loc_82F81E34;
loc_82F81E30:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F81E34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81e48
	if (!ctx.cr0.eq) goto loc_82F81E48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f7fc58
	ctx.lr = 0x82F81E48;
	sub_82F7FC58(ctx, base);
loc_82F81E48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f81e68
	if (ctx.cr6.eq) goto loc_82F81E68;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f81e68
	if (ctx.cr6.lt) goto loc_82F81E68;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82f81e6c
	if (ctx.cr6.lt) goto loc_82F81E6C;
loc_82F81E68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F81E6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f81ea0
	if (!ctx.cr0.eq) goto loc_82F81EA0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r10,r23,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r23.s64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82f81e48
	if (!ctx.cr6.lt) goto loc_82F81E48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82f81e48
	goto loc_82F81E48;
loc_82F81EA0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7a528
	ctx.lr = 0x82F81EA8;
	sub_82F7A528(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F81EB0"))) PPC_WEAK_FUNC(sub_82F81EB0);
PPC_FUNC_IMPL(__imp__sub_82F81EB0) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f81a48
	ctx.lr = 0x82F81ECC;
	sub_82F81A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82F81EF8"))) PPC_WEAK_FUNC(sub_82F81EF8);
PPC_FUNC_IMPL(__imp__sub_82F81EF8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f81aa0
	ctx.lr = 0x82F81F14;
	sub_82F81AA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F81F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82F81F40"))) PPC_WEAK_FUNC(sub_82F81F40);
PPC_FUNC_IMPL(__imp__sub_82F81F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F81F48;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bgt cr6,0x82f8226c
	if (ctx.cr6.gt) goto loc_82F8226C;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,12600
	ctx.r12.s64 = ctx.r12.s64 + 12600;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32008
	ctx.r12.s64 = -2097676288;
	// addi r12,r12,8076
	ctx.r12.s64 = ctx.r12.s64 + 8076;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82F81F8C;
	case 1:
		goto loc_82F81FB4;
	case 2:
		goto loc_82F81FC4;
	case 3:
		goto loc_82F82220;
	case 4:
		goto loc_82F82238;
	case 5:
		goto loc_82F81FD8;
	case 6:
		goto loc_82F82034;
	case 7:
		goto loc_82F82088;
	case 8:
		goto loc_82F820C0;
	default:
		__builtin_unreachable();
	}
loc_82F81F8C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
loc_82F81F98:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82f808b0
	ctx.lr = 0x82F81FAC;
	sub_82F808B0(ctx, base);
loc_82F81FAC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f8226c
	goto loc_82F8226C;
loc_82F81FB4:
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82f81f98
	goto loc_82F81F98;
loc_82F81FC4:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f80cb8
	ctx.lr = 0x82F81FD4;
	sub_82F80CB8(ctx, base);
	// b 0x82f81fac
	goto loc_82F81FAC;
loc_82F81FD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f81ff4
	if (!ctx.cr6.gt) goto loc_82F81FF4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82f81ffc
	goto loc_82F81FFC;
loc_82F81FF4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F81FFC:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82f808b0
	ctx.lr = 0x82F8201C;
	sub_82F808B0(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F82028:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x82f81b78
	ctx.lr = 0x82F82030;
	sub_82F81B78(ctx, base);
	// b 0x82f8226c
	goto loc_82F8226C;
loc_82F82034:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f82050
	if (!ctx.cr6.gt) goto loc_82F82050;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82f82058
	goto loc_82F82058;
loc_82F82050:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82F82058:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82f808b0
	ctx.lr = 0x82F82078;
	sub_82F808B0(ctx, base);
loc_82F82078:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r5,r28,r31
	ctx.r5.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// b 0x82f82028
	goto loc_82F82028;
loc_82F82088:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f820a4
	if (!ctx.cr6.gt) goto loc_82F820A4;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82f820ac
	goto loc_82F820AC;
loc_82F820A4:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82F820AC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x82f80cb8
	ctx.lr = 0x82F820BC;
	sub_82F80CB8(ctx, base);
	// b 0x82f82078
	goto loc_82F82078;
loc_82F820C0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82f72d98
	ctx.lr = 0x82F820DC;
	sub_82F72D98(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f82104
	if (ctx.cr6.eq) goto loc_82F82104;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82f82104
	if (ctx.cr6.lt) goto loc_82F82104;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// blt cr6,0x82f82108
	if (ctx.cr6.lt) goto loc_82F82108;
loc_82F82104:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F82108:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f8220c
	if (!ctx.cr0.eq) goto loc_82F8220C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f8220c
	if (!ctx.cr6.eq) goto loc_82F8220C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f8220c
	if (ctx.cr6.eq) goto loc_82F8220C;
	// lbz r11,37(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82150
	if (ctx.cr0.eq) goto loc_82F82150;
	// lbz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82f82154
	if (!ctx.cr0.eq) goto loc_82F82154;
loc_82F82150:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F82154:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f821a0
	if (ctx.cr0.eq) goto loc_82F821A0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f70d90
	ctx.lr = 0x82F82164;
	sub_82F70D90(ctx, base);
	// lbz r11,181(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 181);
	// stb r28,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r28.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r11.u8);
	// bl 0x82f7a268
	ctx.lr = 0x82F82180;
	sub_82F7A268(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F82198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82f82200
	goto loc_82F82200;
loc_82F821A0:
	// lhz r11,22(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f821b8
	if (!ctx.cr6.eq) goto loc_82F821B8;
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8220c
	if (ctx.cr0.eq) goto loc_82F8220C;
loc_82F821B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f70d90
	ctx.lr = 0x82F821C0;
	sub_82F70D90(ctx, base);
	// lbz r11,133(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// sth r28,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r28.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// sth r28,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r28.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// bl 0x82f7a268
	ctx.lr = 0x82F821E4;
	sub_82F7A268(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F821FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F82200:
	// bl 0x82f04dd8
	ctx.lr = 0x82F82204;
	sub_82F04DD8(ctx, base);
loc_82F82204:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82f8226c
	goto loc_82F8226C;
loc_82F8220C:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f82204
	if (ctx.cr6.eq) goto loc_82F82204;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// b 0x82f82028
	goto loc_82F82028;
loc_82F82220:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// bl 0x82f81b78
	ctx.lr = 0x82F82230;
	sub_82F81B78(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82f8226c
	goto loc_82F8226C;
loc_82F82238:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82f82254
	if (!ctx.cr6.gt) goto loc_82F82254;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82f82258
	goto loc_82F82258;
loc_82F82254:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82F82258:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f81b78
	ctx.lr = 0x82F82268;
	sub_82F81B78(ctx, base);
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
loc_82F8226C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F82278"))) PPC_WEAK_FUNC(sub_82F82278);
PPC_FUNC_IMPL(__imp__sub_82F82278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F82280;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F8229C;
	sub_82F73B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f822d0
	if (ctx.cr0.eq) goto loc_82F822D0;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f779c8
	ctx.lr = 0x82F822B8;
	sub_82F779C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f822d0
	if (ctx.cr0.eq) goto loc_82F822D0;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82f822dc
	goto loc_82F822DC;
loc_82F822D0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_82F822DC:
	// lbz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 330);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r6,r11,29,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// bl 0x82f800c0
	ctx.lr = 0x82F822F4;
	sub_82F800C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8230C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F82314"))) PPC_WEAK_FUNC(sub_82F82314);
PPC_FUNC_IMPL(__imp__sub_82F82314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F82318"))) PPC_WEAK_FUNC(sub_82F82318);
PPC_FUNC_IMPL(__imp__sub_82F82318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F82320;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f81b78
	ctx.lr = 0x82F82340;
	sub_82F81B78(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82f808b0
	ctx.lr = 0x82F82360;
	sub_82F808B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F82368"))) PPC_WEAK_FUNC(sub_82F82368);
PPC_FUNC_IMPL(__imp__sub_82F82368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F82370;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f824c8
	if (ctx.cr6.eq) goto loc_82F824C8;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f824c8
	if (!ctx.cr0.eq) goto loc_82F824C8;
	// lwz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r28,36(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,40(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bne 0x82f824c0
	if (!ctx.cr0.eq) goto loc_82F824C0;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82f824c0
	if (ctx.cr6.lt) goto loc_82F824C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f823e8
	if (ctx.cr6.eq) goto loc_82F823E8;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f823e8
	if (ctx.cr6.eq) goto loc_82F823E8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F823E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82F823E8:
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f8246c
	if (ctx.cr0.eq) goto loc_82F8246C;
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// bne cr6,0x82f82438
	if (!ctx.cr6.eq) goto loc_82F82438;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82f808b0
	ctx.lr = 0x82F82430;
	sub_82F808B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82f82468
	goto loc_82F82468;
loc_82F82438:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f81f40
	ctx.lr = 0x82F82454;
	sub_82F81F40(ctx, base);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x82f82464
	if (ctx.cr6.lt) goto loc_82F82464;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F82464:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82F82468:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F8246C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f82488
	if (!ctx.cr6.eq) goto loc_82F82488;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f82488
	if (!ctx.cr6.eq) goto loc_82F82488;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f82498
	if (ctx.cr6.eq) goto loc_82F82498;
loc_82F82488:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F82494;
	sub_82F81230(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82F82498:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f824c0
	if (ctx.cr0.eq) goto loc_82F824C0;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f824c0
	if (ctx.cr6.eq) goto loc_82F824C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F824C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F824C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82f824cc
	goto loc_82F824CC;
loc_82F824C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F824CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F824D4"))) PPC_WEAK_FUNC(sub_82F824D4);
PPC_FUNC_IMPL(__imp__sub_82F824D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F824D8"))) PPC_WEAK_FUNC(sub_82F824D8);
PPC_FUNC_IMPL(__imp__sub_82F824D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F824E0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f825f8
	if (ctx.cr6.eq) goto loc_82F825F8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82f82514
	if (!ctx.cr6.lt) goto loc_82F82514;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82F82514:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82f76850
	ctx.lr = 0x82F82540;
	sub_82F76850(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f825bc
	if (ctx.cr0.eq) goto loc_82F825BC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f81af8
	ctx.lr = 0x82F8255C;
	sub_82F81AF8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f82588
	if (!ctx.cr6.gt) goto loc_82F82588;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82f82588
	if (!ctx.cr0.eq) goto loc_82F82588;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82F82588:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f046f0
	ctx.lr = 0x82F82598;
	sub_82F046F0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f825f0
	if (ctx.cr6.eq) goto loc_82F825F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F825B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f825f0
	goto loc_82F825F0;
loc_82F825BC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f825e4
	if (!ctx.cr6.gt) goto loc_82F825E4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82f825e4
	if (!ctx.cr0.eq) goto loc_82F825E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82F825E4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82f04638
	ctx.lr = 0x82F825F0;
	sub_82F04638(ctx, base);
loc_82F825F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ef70
	ctx.lr = 0x82F825F8;
	sub_82F6EF70(ctx, base);
loc_82F825F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F82600"))) PPC_WEAK_FUNC(sub_82F82600);
PPC_FUNC_IMPL(__imp__sub_82F82600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F82608;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f8265c
	if (ctx.cr6.eq) goto loc_82F8265C;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82f82638
	if (!ctx.cr6.lt) goto loc_82F82638;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82F82638:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f824d8
	ctx.lr = 0x82F82648;
	sub_82F824D8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f81b78
	ctx.lr = 0x82F8265C;
	sub_82F81B78(ctx, base);
loc_82F8265C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F82664"))) PPC_WEAK_FUNC(sub_82F82664);
PPC_FUNC_IMPL(__imp__sub_82F82664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F82668"))) PPC_WEAK_FUNC(sub_82F82668);
PPC_FUNC_IMPL(__imp__sub_82F82668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F82670;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f827ec
	if (!ctx.cr0.eq) goto loc_82F827EC;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f827ec
	if (ctx.cr6.eq) goto loc_82F827EC;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82f826b0
	if (!ctx.cr6.lt) goto loc_82F826B0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82F826B0:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82764
	if (ctx.cr0.eq) goto loc_82F82764;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f82764
	if (ctx.cr6.eq) goto loc_82F82764;
	// bl 0x82f4a448
	ctx.lr = 0x82F826C8;
	sub_82F4A448(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f827ec
	if (ctx.cr0.eq) goto loc_82F827EC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F826E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F826EC;
	sub_82F73B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f82748
	if (ctx.cr0.eq) goto loc_82F82748;
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,96(r29)
	PPC_STORE_U8(ctx.r29.u32 + 96, ctx.r11.u8);
	// bne cr6,0x82f82728
	if (!ctx.cr6.eq) goto loc_82F82728;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f80cb8
	ctx.lr = 0x82F82724;
	sub_82F80CB8(ctx, base);
	// b 0x82f82744
	goto loc_82F82744;
loc_82F82728:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82f81f40
	ctx.lr = 0x82F82744;
	sub_82F81F40(ctx, base);
loc_82F82744:
	// add r27,r3,r31
	ctx.r27.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_82F82748:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F82760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f827ec
	goto loc_82F827EC;
loc_82F82764:
	// bl 0x82f04670
	ctx.lr = 0x82F82768;
	sub_82F04670(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f827ec
	if (!ctx.cr6.gt) goto loc_82F827EC;
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,96(r29)
	PPC_STORE_U8(ctx.r29.u32 + 96, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x82f827b8
	if (!ctx.cr6.eq) goto loc_82F827B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f827a0
	if (!ctx.cr6.eq) goto loc_82F827A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2804
	ctx.r11.s64 = ctx.r11.s64 + 2804;
loc_82F827A0:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82f827e0
	goto loc_82F827E0;
loc_82F827B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f827c8
	if (!ctx.cr6.eq) goto loc_82F827C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2804
	ctx.r11.s64 = ctx.r11.s64 + 2804;
loc_82F827C8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_82F827E0:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82f81f40
	ctx.lr = 0x82F827E8;
	sub_82F81F40(ctx, base);
	// add r27,r3,r31
	ctx.r27.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_82F827EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

