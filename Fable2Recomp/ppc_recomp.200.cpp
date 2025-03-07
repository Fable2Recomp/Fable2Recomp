#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D32BFC"))) PPC_WEAK_FUNC(sub_82D32BFC);
PPC_FUNC_IMPL(__imp__sub_82D32BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D32C00"))) PPC_WEAK_FUNC(sub_82D32C00);
PPC_FUNC_IMPL(__imp__sub_82D32C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D32C08;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82d32c54
	if (ctx.cr6.eq) goto loc_82D32C54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D32C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D32C54:
	// li r5,584
	ctx.r5.s64 = 584;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d326a8
	ctx.lr = 0x82D32C64;
	sub_82D326A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D32C94"))) PPC_WEAK_FUNC(sub_82D32C94);
PPC_FUNC_IMPL(__imp__sub_82D32C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D32C98"))) PPC_WEAK_FUNC(sub_82D32C98);
PPC_FUNC_IMPL(__imp__sub_82D32C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D32CA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d32cf8
	if (ctx.cr6.eq) goto loc_82D32CF8;
loc_82D32CC4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d32cec
	if (!ctx.cr6.eq) goto loc_82D32CEC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
loc_82D32CEC:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d32cc4
	if (!ctx.cr6.eq) goto loc_82D32CC4;
loc_82D32CF8:
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d32d40
	if (ctx.cr6.eq) goto loc_82D32D40;
loc_82D32D04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d32d34
	if (!ctx.cr6.eq) goto loc_82D32D34;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r6,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D32D34:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d32d04
	if (!ctx.cr6.eq) goto loc_82D32D04;
loc_82D32D40:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d32ec8
	if (!ctx.cr6.gt) goto loc_82D32EC8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,76(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3acb8
	ctx.lr = 0x82D32D5C;
	sub_82D3ACB8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82d32d74
	if (ctx.cr6.lt) goto loc_82D32D74;
	// lis r30,15258
	ctx.r30.s64 = 999948288;
	// ori r30,r30,51712
	ctx.r30.u64 = ctx.r30.u64 | 51712;
	// b 0x82d32d94
	goto loc_82D32D94;
loc_82D32D74:
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw. r30,r3,r31
	ctx.r30.s32 = ctx.r3.s32 / ctx.r31.s32;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r31,0
	// andc r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
	// bgt 0x82d32d94
	if (ctx.cr0.gt) goto loc_82D32D94;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82D32D94:
	// lwz r31,68(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d32e2c
	if (ctx.cr6.eq) goto loc_82D32E2C;
loc_82D32DA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d32e20
	if (!ctx.cr6.eq) goto loc_82D32E20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// twllei r10,0
	// divwu r9,r9,r10
	ctx.r9.u32 = ctx.r9.u32 / ctx.r10.u32;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82d32dd4
	if (ctx.cr6.gt) goto loc_82D32DD4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82d32df4
	goto loc_82D32DF4;
loc_82D32DD4:
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3ae00
	ctx.lr = 0x82D32DF0;
	sub_82D3AE00(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
loc_82D32DF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d329a0
	ctx.lr = 0x82D32E08;
	sub_82D329A0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
loc_82D32E20:
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d32da0
	if (!ctx.cr6.eq) goto loc_82D32DA0;
loc_82D32E2C:
	// lwz r31,72(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d32ec8
	if (ctx.cr6.eq) goto loc_82D32EC8;
loc_82D32E38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d32ebc
	if (!ctx.cr6.eq) goto loc_82D32EBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// twllei r10,0
	// divwu r9,r9,r10
	ctx.r9.u32 = ctx.r9.u32 / ctx.r10.u32;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82d32e6c
	if (ctx.cr6.gt) goto loc_82D32E6C;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82d32e90
	goto loc_82D32E90;
loc_82D32E6C:
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3ae00
	ctx.lr = 0x82D32E8C;
	sub_82D3AE00(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
loc_82D32E90:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d32a80
	ctx.lr = 0x82D32EA4;
	sub_82D32A80(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
loc_82D32EBC:
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d32e38
	if (!ctx.cr6.eq) goto loc_82D32E38;
loc_82D32EC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D32ED0"))) PPC_WEAK_FUNC(sub_82D32ED0);
PPC_FUNC_IMPL(__imp__sub_82D32ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D32ED8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r28,r10,r26
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d32fa4
	if (!ctx.cr6.gt) goto loc_82D32FA4;
loc_82D32F04:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d32f18
	if (!ctx.cr6.lt) goto loc_82D32F18;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D32F18:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d32f34
	if (ctx.cr6.lt) goto loc_82D32F34;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82D32F34:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d32f48
	if (ctx.cr6.lt) goto loc_82D32F48;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D32F48:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d32fa4
	if (!ctx.cr6.gt) goto loc_82D32FA4;
	// mullw r29,r11,r26
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82d32f80
	if (ctx.cr6.eq) goto loc_82D32F80;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82d32f84
	goto loc_82D32F84;
loc_82D32F80:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82D32F84:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D32F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d32f04
	if (ctx.cr6.lt) goto loc_82D32F04;
loc_82D32FA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D32FAC"))) PPC_WEAK_FUNC(sub_82D32FAC);
PPC_FUNC_IMPL(__imp__sub_82D32FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D32FB0"))) PPC_WEAK_FUNC(sub_82D32FB0);
PPC_FUNC_IMPL(__imp__sub_82D32FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D32FB8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r26,r10,7,0,24
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// mullw r28,r26,r9
	ctx.r28.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d33088
	if (!ctx.cr6.gt) goto loc_82D33088;
loc_82D32FE8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d32ffc
	if (!ctx.cr6.lt) goto loc_82D32FFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D32FFC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d33018
	if (ctx.cr6.lt) goto loc_82D33018;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82D33018:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3302c
	if (ctx.cr6.lt) goto loc_82D3302C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D3302C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d33088
	if (!ctx.cr6.gt) goto loc_82D33088;
	// mullw r29,r11,r26
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82d33064
	if (ctx.cr6.eq) goto loc_82D33064;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82d33068
	goto loc_82D33068;
loc_82D33064:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82D33068:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D33070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d32fe8
	if (ctx.cr6.lt) goto loc_82D32FE8;
loc_82D33088:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D33090"))) PPC_WEAK_FUNC(sub_82D33090);
PPC_FUNC_IMPL(__imp__sub_82D33090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D33098;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r30,r27,r6
	ctx.r30.u64 = ctx.r27.u64 + ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,22
	ctx.r28.s64 = 22;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d330d8
	if (ctx.cr6.gt) goto loc_82D330D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d330d8
	if (ctx.cr6.gt) goto loc_82D330D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d330f4
	if (!ctx.cr6.eq) goto loc_82D330F4;
loc_82D330D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D330F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D330F4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d33110
	if (ctx.cr6.lt) goto loc_82D33110;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d33198
	if (!ctx.cr6.gt) goto loc_82D33198;
loc_82D33110:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3313c
	if (!ctx.cr6.eq) goto loc_82D3313C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,69
	ctx.r10.s64 = 69;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3313C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3313C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33160
	if (ctx.cr6.eq) goto loc_82D33160;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d32ed0
	ctx.lr = 0x82D33158;
	sub_82D32ED0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82D33160:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d33174
	if (!ctx.cr6.gt) goto loc_82D33174;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x82d33188
	goto loc_82D33188;
loc_82D33174:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82d33184
	if (!ctx.cr0.lt) goto loc_82D33184;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D33184:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82D33188:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d32ed0
	ctx.lr = 0x82D33198;
	sub_82D32ED0(ctx, base);
loc_82D33198:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82d33228
	if (!ctx.cr6.lt) goto loc_82D33228;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82d331d4
	if (!ctx.cr6.lt) goto loc_82D331D4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d331d0
	if (ctx.cr6.eq) goto loc_82D331D0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D331D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D331D0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82D331D4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d331e0
	if (ctx.cr6.eq) goto loc_82D331E0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82D331E0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d33254
	if (ctx.cr6.eq) goto loc_82D33254;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d33228
	if (!ctx.cr6.lt) goto loc_82D33228;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82D3320C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82d34320
	ctx.lr = 0x82D3321C;
	sub_82D34320(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82d3320c
	if (!ctx.cr0.eq) goto loc_82D3320C;
loc_82D33228:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d33238
	if (ctx.cr6.eq) goto loc_82D33238;
loc_82D33230:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82D33238:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82D33254:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82d33230
	if (!ctx.cr6.eq) goto loc_82D33230;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D33278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d33238
	goto loc_82D33238;
}

__attribute__((alias("__imp__sub_82D3327C"))) PPC_WEAK_FUNC(sub_82D3327C);
PPC_FUNC_IMPL(__imp__sub_82D3327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D33280"))) PPC_WEAK_FUNC(sub_82D33280);
PPC_FUNC_IMPL(__imp__sub_82D33280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D33288;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r30,r27,r6
	ctx.r30.u64 = ctx.r27.u64 + ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,22
	ctx.r28.s64 = 22;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d332c8
	if (ctx.cr6.gt) goto loc_82D332C8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d332c8
	if (ctx.cr6.gt) goto loc_82D332C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d332e4
	if (!ctx.cr6.eq) goto loc_82D332E4;
loc_82D332C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D332E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D332E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d33300
	if (ctx.cr6.lt) goto loc_82D33300;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d33388
	if (!ctx.cr6.gt) goto loc_82D33388;
loc_82D33300:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3332c
	if (!ctx.cr6.eq) goto loc_82D3332C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,69
	ctx.r10.s64 = 69;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3332C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3332C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33350
	if (ctx.cr6.eq) goto loc_82D33350;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d32fb0
	ctx.lr = 0x82D33348;
	sub_82D32FB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82D33350:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d33364
	if (!ctx.cr6.gt) goto loc_82D33364;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x82d33378
	goto loc_82D33378;
loc_82D33364:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82d33374
	if (!ctx.cr0.lt) goto loc_82D33374;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D33374:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82D33378:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d32fb0
	ctx.lr = 0x82D33388;
	sub_82D32FB0(ctx, base);
loc_82D33388:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82d3341c
	if (!ctx.cr6.lt) goto loc_82D3341C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82d333c4
	if (!ctx.cr6.lt) goto loc_82D333C4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d333c0
	if (ctx.cr6.eq) goto loc_82D333C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D333C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D333C0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82D333C4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d333d0
	if (ctx.cr6.eq) goto loc_82D333D0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82D333D0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d33448
	if (ctx.cr6.eq) goto loc_82D33448;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// rlwinm r28,r9,7,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d3341c
	if (!ctx.cr6.lt) goto loc_82D3341C;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82D33400:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82d34320
	ctx.lr = 0x82D33410;
	sub_82D34320(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82d33400
	if (!ctx.cr0.eq) goto loc_82D33400;
loc_82D3341C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d3342c
	if (ctx.cr6.eq) goto loc_82D3342C;
loc_82D33424:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82D3342C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82D33448:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82d33424
	if (!ctx.cr6.eq) goto loc_82D33424;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3346C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d3342c
	goto loc_82D3342C;
}

__attribute__((alias("__imp__sub_82D33470"))) PPC_WEAK_FUNC(sub_82D33470);
PPC_FUNC_IMPL(__imp__sub_82D33470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D33478;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// blt cr6,0x82d33498
	if (ctx.cr6.lt) goto loc_82D33498;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x82d334c0
	if (ctx.cr6.lt) goto loc_82D334C0;
loc_82D33498:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r26.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D334C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D334C0:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82d3354c
	if (!ctx.cr6.eq) goto loc_82D3354C;
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d33508
	if (ctx.cr6.eq) goto loc_82D33508;
loc_82D334D8:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d334fc
	if (ctx.cr6.eq) goto loc_82D334FC;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D334FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D334FC:
	// lwz r30,44(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d334d8
	if (!ctx.cr6.eq) goto loc_82D334D8;
loc_82D33508:
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d33548
	if (ctx.cr6.eq) goto loc_82D33548;
loc_82D33518:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3353c
	if (ctx.cr6.eq) goto loc_82D3353C;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3353C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3353C:
	// lwz r30,44(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d33518
	if (!ctx.cr6.eq) goto loc_82D33518;
loc_82D33548:
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
loc_82D3354C:
	// addi r11,r26,15
	ctx.r11.s64 = ctx.r26.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d3359c
	if (ctx.cr6.eq) goto loc_82D3359C;
loc_82D33564:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d3ac98
	ctx.lr = 0x82D33584;
	sub_82D3AC98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x82d33564
	if (!ctx.cr6.eq) goto loc_82D33564;
loc_82D3359C:
	// addi r11,r26,13
	ctx.r11.s64 = ctx.r26.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d335ec
	if (ctx.cr6.eq) goto loc_82D335EC;
loc_82D335B4:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d3ac98
	ctx.lr = 0x82D335D4;
	sub_82D3AC98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x82d335b4
	if (!ctx.cr6.eq) goto loc_82D335B4;
loc_82D335EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D335F4"))) PPC_WEAK_FUNC(sub_82D335F4);
PPC_FUNC_IMPL(__imp__sub_82D335F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D335F8"))) PPC_WEAK_FUNC(sub_82D335F8);
PPC_FUNC_IMPL(__imp__sub_82D335F8) {
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
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D33614:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33470
	ctx.lr = 0x82D33620;
	sub_82D33470(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82d33614
	if (!ctx.cr0.lt) goto loc_82D33614;
	// li r5,84
	ctx.r5.s64 = 84;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d3ac98
	ctx.lr = 0x82D33638;
	sub_82D3AC98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x829ce870
	ctx.lr = 0x82D33648;
	sub_829CE870(ctx, base);
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

__attribute__((alias("__imp__sub_82D33660"))) PPC_WEAK_FUNC(sub_82D33660);
PPC_FUNC_IMPL(__imp__sub_82D33660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D33668;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// bl 0x82d3aea0
	ctx.lr = 0x82D3367C;
	sub_82D3AEA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d3ac40
	ctx.lr = 0x82D3368C;
	sub_82D3AC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d336c8
	if (!ctx.cr6.eq) goto loc_82D336C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x82D336A0;
	sub_829CE870(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,54
	ctx.r11.s64 = 54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D336C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D336C8:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// addi r11,r11,9896
	ctx.r11.s64 = ctx.r11.s64 + 9896;
	// addi r10,r10,10368
	ctx.r10.s64 = ctx.r10.s64 + 10368;
	// addi r9,r9,10656
	ctx.r9.s64 = ctx.r9.s64 + 10656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32045
	ctx.r7.s64 = -2100101120;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r6,-32045
	ctx.r6.s64 = -2100101120;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r5,-32045
	ctx.r5.s64 = -2100101120;
	// lis r4,-32045
	ctx.r4.s64 = -2100101120;
	// lis r3,-32045
	ctx.r3.s64 = -2100101120;
	// lis r28,-32045
	ctx.r28.s64 = -2100101120;
	// lis r27,-32045
	ctx.r27.s64 = -2100101120;
	// lis r26,15258
	ctx.r26.s64 = 999948288;
	// addi r8,r8,10880
	ctx.r8.s64 = ctx.r8.s64 + 10880;
	// addi r7,r7,11112
	ctx.r7.s64 = ctx.r7.s64 + 11112;
	// addi r6,r6,11264
	ctx.r6.s64 = ctx.r6.s64 + 11264;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r5,r5,11416
	ctx.r5.s64 = ctx.r5.s64 + 11416;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r4,r4,12432
	ctx.r4.s64 = ctx.r4.s64 + 12432;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// addi r3,r3,12928
	ctx.r3.s64 = ctx.r3.s64 + 12928;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// addi r11,r28,13424
	ctx.r11.s64 = ctx.r28.s64 + 13424;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// addi r10,r27,13816
	ctx.r10.s64 = ctx.r27.s64 + 13816;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// ori r9,r26,51712
	ctx.r9.u64 = ctx.r26.u64 | 51712;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D33788"))) PPC_WEAK_FUNC(sub_82D33788);
PPC_FUNC_IMPL(__imp__sub_82D33788) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d337dc
	if (ctx.cr6.eq) goto loc_82D337DC;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D337B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d337d4
	if (ctx.cr6.eq) goto loc_82D337D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// b 0x82d337d8
	goto loc_82D337D8;
loc_82D337D4:
	// li r11,100
	ctx.r11.s64 = 100;
loc_82D337D8:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82D337DC:
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

__attribute__((alias("__imp__sub_82D337F0"))) PPC_WEAK_FUNC(sub_82D337F0);
PPC_FUNC_IMPL(__imp__sub_82D337F0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3381c
	if (ctx.cr6.eq) goto loc_82D3381C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3381C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3381C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D3383C"))) PPC_WEAK_FUNC(sub_82D3383C);
PPC_FUNC_IMPL(__imp__sub_82D3383C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D33840"))) PPC_WEAK_FUNC(sub_82D33840);
PPC_FUNC_IMPL(__imp__sub_82D33840) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D33864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3387C"))) PPC_WEAK_FUNC(sub_82D3387C);
PPC_FUNC_IMPL(__imp__sub_82D3387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D33880"))) PPC_WEAK_FUNC(sub_82D33880);
PPC_FUNC_IMPL(__imp__sub_82D33880) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D338A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D338BC"))) PPC_WEAK_FUNC(sub_82D338BC);
PPC_FUNC_IMPL(__imp__sub_82D338BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D338C0"))) PPC_WEAK_FUNC(sub_82D338C0);
PPC_FUNC_IMPL(__imp__sub_82D338C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x82d33980
	if (ctx.cr6.gt) goto loc_82D33980;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d33980
	if (!ctx.cr6.eq) goto loc_82D33980;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82D33980:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D33988"))) PPC_WEAK_FUNC(sub_82D33988);
PPC_FUNC_IMPL(__imp__sub_82D33988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D33990;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,202
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 202, ctx.xer);
	// beq cr6,0x82d339cc
	if (ctx.cr6.eq) goto loc_82D339CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D339CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D339CC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r28,4
	ctx.r28.s64 = 4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d33a10
	if (ctx.cr6.gt) goto loc_82D33A10;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82d34258
	ctx.lr = 0x82D339F4;
	sub_82D34258(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82d34258
	ctx.lr = 0x82D33A04;
	sub_82D34258(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// stw r27,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r27.u32);
	// b 0x82d33a94
	goto loc_82D33A94;
loc_82D33A10:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d33a48
	if (ctx.cr6.gt) goto loc_82D33A48;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82d34258
	ctx.lr = 0x82D33A28;
	sub_82D34258(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82d34258
	ctx.lr = 0x82D33A38;
	sub_82D34258(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x82d33a94
	goto loc_82D33A94;
loc_82D33A48:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d33a7c
	if (ctx.cr6.gt) goto loc_82D33A7C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82d34258
	ctx.lr = 0x82D33A60;
	sub_82D34258(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82d34258
	ctx.lr = 0x82D33A70;
	sub_82D34258(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// stw r28,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r28.u32);
	// b 0x82d33a94
	goto loc_82D33A94;
loc_82D33A7C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_82D33A94:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d33b18
	if (!ctx.cr6.gt) goto loc_82D33B18;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
loc_82D33AAC:
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bge cr6,0x82d33b00
	if (!ctx.cr6.lt) goto loc_82D33B00;
	// lwz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
loc_82D33AC8:
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82d33b00
	if (ctx.cr6.gt) goto loc_82D33B00;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mullw r3,r11,r5
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r5,r4,r9
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82d33b00
	if (ctx.cr6.gt) goto loc_82D33B00;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82d33ac8
	if (ctx.cr6.lt) goto loc_82D33AC8;
loc_82D33B00:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d33aac
	if (ctx.cr6.lt) goto loc_82D33AAC;
loc_82D33B18:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d33b8c
	if (!ctx.cr6.gt) goto loc_82D33B8C;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
loc_82D33B30:
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// bl 0x82d34258
	ctx.lr = 0x82D33B50;
	sub_82D34258(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r5,-24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// mullw r3,r11,r3
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82d34258
	ctx.lr = 0x82D33B74;
	sub_82D34258(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d33b30
	if (ctx.cr6.lt) goto loc_82D33B30;
loc_82D33B8C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82d33be0
	if (ctx.cr6.gt) goto loc_82D33BE0;
	// lis r12,-32045
	ctx.r12.s64 = -2100101120;
	// addi r12,r12,15284
	ctx.r12.s64 = ctx.r12.s64 + 15284;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D33BC8;
	case 1:
		goto loc_82D33BD0;
	case 2:
		goto loc_82D33BD0;
	case 3:
		goto loc_82D33BD8;
	case 4:
		goto loc_82D33BD8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,15304(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15304);
	// lwz r22,15312(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15312);
	// lwz r22,15312(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15312);
	// lwz r22,15320(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15320);
	// lwz r22,15320(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15320);
loc_82D33BC8:
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// b 0x82d33be8
	goto loc_82D33BE8;
loc_82D33BD0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82d33be4
	goto loc_82D33BE4;
loc_82D33BD8:
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// b 0x82d33be8
	goto loc_82D33BE8;
loc_82D33BE0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_82D33BE4:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82D33BE8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x82d33bfc
	if (!ctx.cr6.eq) goto loc_82D33BFC;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_82D33BFC:
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d338c0
	ctx.lr = 0x82D33C08;
	sub_82D338C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d33c20
	if (ctx.cr6.eq) goto loc_82D33C20;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82D33C20:
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D33C2C"))) PPC_WEAK_FUNC(sub_82D33C2C);
PPC_FUNC_IMPL(__imp__sub_82D33C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D33C30"))) PPC_WEAK_FUNC(sub_82D33C30);
PPC_FUNC_IMPL(__imp__sub_82D33C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D33C38;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,424(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x82d33988
	ctx.lr = 0x82D33C48;
	sub_82D33988(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D33C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r3,256
	ctx.r30.s64 = ctx.r3.s64 + 256;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// addi r3,r30,-256
	ctx.r3.s64 = ctx.r30.s64 + -256;
	// bl 0x82ca3190
	ctx.lr = 0x82D33C7C;
	sub_82CA3190(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82D33C84:
	// stbx r11,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82d33c84
	if (!ctx.cr6.gt) goto loc_82D33C84;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// li r10,384
	ctx.r10.s64 = 384;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D33CA8:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d33ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D33CA8;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,512
	ctx.r3.s64 = ctx.r30.s64 + 512;
	// bl 0x82ca3190
	ctx.lr = 0x82D33CC4;
	sub_82CA3190(ctx, base);
	// addi r3,r30,896
	ctx.r3.s64 = ctx.r30.s64 + 896;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x82ca2c60
	ctx.lr = 0x82D33CD4;
	sub_82CA2C60(ctx, base);
	// stw r28,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d338c0
	ctx.lr = 0x82D33CE0;
	sub_82D338C0(ctx, base);
	// stw r3,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r3.u32);
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stw r28,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r28.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33d04
	if (ctx.cr6.eq) goto loc_82D33D04;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d33d10
	if (!ctx.cr6.eq) goto loc_82D33D10;
loc_82D33D04:
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
loc_82D33D10:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33dc4
	if (ctx.cr6.eq) goto loc_82D33DC4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33d48
	if (ctx.cr6.eq) goto loc_82D33D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,47
	ctx.r10.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D33D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D33D48:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82d33de8
	if (ctx.cr6.eq) goto loc_82D33DE8;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
loc_82D33D60:
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_82D33D64:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r30,48
	ctx.r30.s64 = 48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33d90
	if (ctx.cr6.eq) goto loc_82D33D90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D33D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D33D90:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d33da8
	if (!ctx.cr6.eq) goto loc_82D33DA8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33dc4
	if (ctx.cr6.eq) goto loc_82D33DC4;
loc_82D33DA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D33DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D33DC4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d33e28
	if (!ctx.cr6.eq) goto loc_82D33E28;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33e10
	if (ctx.cr6.eq) goto loc_82D33E10;
	// bl 0x82d40900
	ctx.lr = 0x82D33DE4;
	sub_82D40900(ctx, base);
	// b 0x82d33e1c
	goto loc_82D33E1C;
loc_82D33DE8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d33dfc
	if (ctx.cr6.eq) goto loc_82D33DFC;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// b 0x82d33d64
	goto loc_82D33D64;
loc_82D33DFC:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33d60
	if (ctx.cr6.eq) goto loc_82D33D60;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// b 0x82d33d64
	goto loc_82D33D64;
loc_82D33E10:
	// bl 0x82d40048
	ctx.lr = 0x82D33E14;
	sub_82D40048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3f1d8
	ctx.lr = 0x82D33E1C;
	sub_82D3F1D8(ctx, base);
loc_82D33E1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d3eb50
	ctx.lr = 0x82D33E28;
	sub_82D3EB50(ctx, base);
loc_82D33E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3e958
	ctx.lr = 0x82D33E30;
	sub_82D3E958(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33e5c
	if (ctx.cr6.eq) goto loc_82D33E5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D33E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d33e78
	goto loc_82D33E78;
loc_82D33E5C:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33e74
	if (ctx.cr6.eq) goto loc_82D33E74;
	// bl 0x82d3e450
	ctx.lr = 0x82D33E70;
	sub_82D3E450(ctx, base);
	// b 0x82d33e78
	goto loc_82D33E78;
loc_82D33E74:
	// bl 0x82d3d610
	ctx.lr = 0x82D33E78;
	sub_82D3D610(ctx, base);
loc_82D33E78:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d33e98
	if (!ctx.cr6.eq) goto loc_82D33E98;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33e9c
	if (ctx.cr6.eq) goto loc_82D33E9C;
loc_82D33E98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82D33E9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3c7f0
	ctx.lr = 0x82D33EA4;
	sub_82D3C7F0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d33ebc
	if (!ctx.cr6.eq) goto loc_82D33EBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3b598
	ctx.lr = 0x82D33EBC;
	sub_82D3B598(ctx, base);
loc_82D33EBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D33ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D33EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d33f6c
	if (ctx.cr6.eq) goto loc_82D33F6C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d33f6c
	if (!ctx.cr6.eq) goto loc_82D33F6C;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d33f6c
	if (ctx.cr6.eq) goto loc_82D33F6C;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// beq cr6,0x82d33f28
	if (ctx.cr6.eq) goto loc_82D33F28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82D33F28:
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r28.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
loc_82D33F6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D33F74"))) PPC_WEAK_FUNC(sub_82D33F74);
PPC_FUNC_IMPL(__imp__sub_82D33F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D33F78"))) PPC_WEAK_FUNC(sub_82D33F78);
PPC_FUNC_IMPL(__imp__sub_82D33F78) {
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
	// lwz r30,424(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d33fc0
	if (ctx.cr6.eq) goto loc_82D33FC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D33FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d34104
	goto loc_82D34104;
loc_82D33FC0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3403c
	if (ctx.cr6.eq) goto loc_82D3403C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3403c
	if (!ctx.cr6.eq) goto loc_82D3403C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d34004
	if (ctx.cr6.eq) goto loc_82D34004;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d34004
	if (ctx.cr6.eq) goto loc_82D34004;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// b 0x82d3403c
	goto loc_82D3403C;
loc_82D34004:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3401c
	if (ctx.cr6.eq) goto loc_82D3401C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// b 0x82d3403c
	goto loc_82D3403C;
loc_82D3401C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3403C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3403C:
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D34050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D34064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82d34104
	if (!ctx.cr6.eq) goto loc_82D34104;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d34090
	if (!ctx.cr6.eq) goto loc_82D34090;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D34090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34090:
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D340A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d340c8
	if (ctx.cr6.eq) goto loc_82D340C8;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D340C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D340C8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r8,30
	ctx.r4.u64 = ctx.r8.u32 & 0x3;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D340EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,428(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82D34104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34104:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3417c
	if (ctx.cr6.eq) goto loc_82D3417C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82d3417c
	if (ctx.cr6.eq) goto loc_82D3417C;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d3417c
	if (!ctx.cr6.eq) goto loc_82D3417C;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
loc_82D3417C:
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

__attribute__((alias("__imp__sub_82D34194"))) PPC_WEAK_FUNC(sub_82D34194);
PPC_FUNC_IMPL(__imp__sub_82D34194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34198"))) PPC_WEAK_FUNC(sub_82D34198);
PPC_FUNC_IMPL(__imp__sub_82D34198) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r31,424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d341c8
	if (ctx.cr6.eq) goto loc_82D341C8;
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D341C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D341C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D341E8"))) PPC_WEAK_FUNC(sub_82D341E8);
PPC_FUNC_IMPL(__imp__sub_82D341E8) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D34214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lis r7,-32045
	ctx.r7.s64 = -2100101120;
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// addi r6,r8,16248
	ctx.r6.s64 = ctx.r8.s64 + 16248;
	// addi r5,r7,16792
	ctx.r5.s64 = ctx.r7.s64 + 16792;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// bl 0x82d33c30
	ctx.lr = 0x82D34244;
	sub_82D33C30(ctx, base);
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

__attribute__((alias("__imp__sub_82D34258"))) PPC_WEAK_FUNC(sub_82D34258);
PPC_FUNC_IMPL(__imp__sub_82D34258) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// twllei r4,0
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r3,r10,r4
	ctx.r3.s32 = ctx.r10.s32 / ctx.r4.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3427C"))) PPC_WEAK_FUNC(sub_82D3427C);
PPC_FUNC_IMPL(__imp__sub_82D3427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34280"))) PPC_WEAK_FUNC(sub_82D34280);
PPC_FUNC_IMPL(__imp__sub_82D34280) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// twllei r4,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r9,r11,r4
	ctx.r9.s32 = ctx.r11.s32 / ctx.r4.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r6,r8,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// andc r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// subf r3,r6,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r6.s64;
	// twlgei r5,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D342B0"))) PPC_WEAK_FUNC(sub_82D342B0);
PPC_FUNC_IMPL(__imp__sub_82D342B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D342B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r30,r10,r5
	ctx.r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82d342fc
	if (!ctx.cr6.gt) goto loc_82D342FC;
loc_82D342DC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x82ca2c60
	ctx.lr = 0x82D342F4;
	sub_82CA2C60(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x82d342dc
	if (ctx.cr0.gt) goto loc_82D342DC;
loc_82D342FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D34304"))) PPC_WEAK_FUNC(sub_82D34304);
PPC_FUNC_IMPL(__imp__sub_82D34304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34308"))) PPC_WEAK_FUNC(sub_82D34308);
PPC_FUNC_IMPL(__imp__sub_82D34308) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82ca2c60
	sub_82CA2C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3431C"))) PPC_WEAK_FUNC(sub_82D3431C);
PPC_FUNC_IMPL(__imp__sub_82D3431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34320"))) PPC_WEAK_FUNC(sub_82D34320);
PPC_FUNC_IMPL(__imp__sub_82D34320) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3432C"))) PPC_WEAK_FUNC(sub_82D3432C);
PPC_FUNC_IMPL(__imp__sub_82D3432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34330"))) PPC_WEAK_FUNC(sub_82D34330);
PPC_FUNC_IMPL(__imp__sub_82D34330) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bne 0x82d343a0
	if (!ctx.cr0.eq) goto loc_82D343A0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d343a0
	if (!ctx.cr6.eq) goto loc_82D343A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D343A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D343A0:
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

__attribute__((alias("__imp__sub_82D343B4"))) PPC_WEAK_FUNC(sub_82D343B4);
PPC_FUNC_IMPL(__imp__sub_82D343B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D343B8"))) PPC_WEAK_FUNC(sub_82D343B8);
PPC_FUNC_IMPL(__imp__sub_82D343B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D343C0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r10,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82d34404
	if (!ctx.cr6.eq) goto loc_82D34404;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D34404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34404:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82D34410:
	// lhz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82d34420
	if (!ctx.cr6.gt) goto loc_82D34420;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82D34420:
	// lhz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82d34430
	if (!ctx.cr6.gt) goto loc_82D34430;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82D34430:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82d34440
	if (!ctx.cr6.gt) goto loc_82D34440;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82D34440:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82d34450
	if (!ctx.cr6.gt) goto loc_82D34450;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82D34450:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82d34410
	if (!ctx.cr0.eq) goto loc_82D34410;
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d34750
	if (!ctx.cr6.eq) goto loc_82D34750;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r26,24
	ctx.r26.s64 = 24;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d344cc
	if (!ctx.cr0.eq) goto loc_82D344CC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D344A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d344cc
	if (!ctx.cr6.eq) goto loc_82D344CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D344CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D344CC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,219
	ctx.r10.s64 = 219;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bne 0x82d3452c
	if (!ctx.cr0.eq) goto loc_82D3452C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3452c
	if (!ctx.cr6.eq) goto loc_82D3452C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3452C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3452C:
	// subfic r10,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r27.s64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r9,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r10,67
	ctx.r30.s64 = ctx.r10.s64 + 67;
	// srawi r7,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 8;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// bne 0x82d3459c
	if (!ctx.cr0.eq) goto loc_82D3459C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3459c
	if (!ctx.cr6.eq) goto loc_82D3459C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3459C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3459C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bne 0x82d345f8
	if (!ctx.cr0.eq) goto loc_82D345F8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D345D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d345f8
	if (!ctx.cr6.eq) goto loc_82D345F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D345F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D345F8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bne 0x82d3465c
	if (!ctx.cr0.eq) goto loc_82D3465C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3465c
	if (!ctx.cr6.eq) goto loc_82D3465C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3465C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3465C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,3432
	ctx.r28.s64 = ctx.r11.s64 + 3432;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82D34668:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r10,r25
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// beq cr6,0x82d346dc
	if (ctx.cr6.eq) goto loc_82D346DC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d346dc
	if (!ctx.cr0.eq) goto loc_82D346DC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D346B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d346dc
	if (!ctx.cr6.eq) goto loc_82D346DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D346DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D346DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bne 0x82d34738
	if (!ctx.cr0.eq) goto loc_82D34738;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34738
	if (!ctx.cr6.eq) goto loc_82D34738;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34738:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,256
	ctx.r11.s64 = ctx.r28.s64 + 256;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d34668
	if (ctx.cr6.lt) goto loc_82D34668;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r25)
	PPC_STORE_U32(ctx.r25.u32 + 128, ctx.r11.u32);
loc_82D34750:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D3475C"))) PPC_WEAK_FUNC(sub_82D3475C);
PPC_FUNC_IMPL(__imp__sub_82D3475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34760"))) PPC_WEAK_FUNC(sub_82D34760);
PPC_FUNC_IMPL(__imp__sub_82D34760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D34768;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82d34788
	if (ctx.cr6.eq) goto loc_82D34788;
	// addi r11,r29,26
	ctx.r11.s64 = ctx.r29.s64 + 26;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// b 0x82d3478c
	goto loc_82D3478C;
loc_82D34788:
	// addi r11,r29,22
	ctx.r11.s64 = ctx.r29.s64 + 22;
loc_82D3478C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r10,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d347c4
	if (!ctx.cr6.eq) goto loc_82D347C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,50
	ctx.r10.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D347C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D347C4:
	// lwz r11,276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d34a34
	if (!ctx.cr6.eq) goto loc_82D34A34;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D347DC;
	sub_82D34330(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D347E8;
	sub_82D34330(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82D347F4:
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 + ctx.r28.u64;
	// bne 0x82d347f4
	if (!ctx.cr0.eq) goto loc_82D347F4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r28,19
	ctx.r30.s64 = ctx.r28.s64 + 19;
	// li r27,24
	ctx.r27.s64 = 24;
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d34888
	if (!ctx.cr0.eq) goto loc_82D34888;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34888
	if (!ctx.cr6.eq) goto loc_82D34888;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34888:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d348e4
	if (!ctx.cr0.eq) goto loc_82D348E4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D348C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d348e4
	if (!ctx.cr6.eq) goto loc_82D348E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D348E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D348E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d34940
	if (!ctx.cr0.eq) goto loc_82D34940;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3491C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34940
	if (!ctx.cr6.eq) goto loc_82D34940;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34940:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82D34944:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbzx r10,r30,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d349a4
	if (!ctx.cr0.eq) goto loc_82D349A4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d349a4
	if (!ctx.cr6.eq) goto loc_82D349A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D349A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D349A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// ble cr6,0x82d34944
	if (!ctx.cr6.gt) goto loc_82D34944;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d34a2c
	if (!ctx.cr6.gt) goto loc_82D34A2C;
	// addi r29,r26,17
	ctx.r29.s64 = ctx.r26.s64 + 17;
loc_82D349C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d34a20
	if (!ctx.cr0.eq) goto loc_82D34A20;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D349FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34a20
	if (!ctx.cr6.eq) goto loc_82D34A20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34A20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82d349c0
	if (ctx.cr6.lt) goto loc_82D349C0;
loc_82D34A2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,276(r26)
	PPC_STORE_U32(ctx.r26.u32 + 276, ctx.r11.u32);
loc_82D34A34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D34A3C"))) PPC_WEAK_FUNC(sub_82D34A3C);
PPC_FUNC_IMPL(__imp__sub_82D34A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34A40"))) PPC_WEAK_FUNC(sub_82D34A40);
PPC_FUNC_IMPL(__imp__sub_82D34A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D34A48;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D34A5C;
	sub_82D34330(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D34A68;
	sub_82D34330(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D34A88;
	sub_82D34330(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D34A94;
	sub_82D34330(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82d34ab4
	if (ctx.cr6.gt) goto loc_82D34AB4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d34adc
	if (!ctx.cr6.gt) goto loc_82D34ADC;
loc_82D34AB4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,41
	ctx.r9.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D34ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34ADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82d34330
	ctx.lr = 0x82D34AE8;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D34AFC;
	sub_82D34330(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D34B08;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D34B1C;
	sub_82D34330(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D34B28;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82d34330
	ctx.lr = 0x82D34B34;
	sub_82D34330(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ble cr6,0x82d34c8c
	if (!ctx.cr6.gt) goto loc_82D34C8C;
	// li r28,24
	ctx.r28.s64 = 24;
loc_82D34B4C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addic. r10,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d34bac
	if (!ctx.cr0.eq) goto loc_82D34BAC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34bac
	if (!ctx.cr6.eq) goto loc_82D34BAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34BAC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bne 0x82d34c18
	if (!ctx.cr0.eq) goto loc_82D34C18;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34c18
	if (!ctx.cr6.eq) goto loc_82D34C18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34C18:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bne 0x82d34c78
	if (!ctx.cr0.eq) goto loc_82D34C78;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34c78
	if (!ctx.cr6.eq) goto loc_82D34C78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34C78:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d34b4c
	if (ctx.cr6.lt) goto loc_82D34B4C;
loc_82D34C8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D34C94"))) PPC_WEAK_FUNC(sub_82D34C94);
PPC_FUNC_IMPL(__imp__sub_82D34C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D34C98"))) PPC_WEAK_FUNC(sub_82D34C98);
PPC_FUNC_IMPL(__imp__sub_82D34C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D34CA0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D34CB0;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,218
	ctx.r4.s64 = 218;
	// bl 0x82d34330
	ctx.lr = 0x82D34CBC;
	sub_82D34330(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D34CD8;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D34CE4;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x82d34330
	ctx.lr = 0x82D34CF0;
	sub_82D34330(ctx, base);
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,24
	ctx.r27.s64 = 24;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d34e24
	if (!ctx.cr6.gt) goto loc_82D34E24;
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
loc_82D34D08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bne 0x82d34d6c
	if (!ctx.cr0.eq) goto loc_82D34D6C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34d6c
	if (!ctx.cr6.eq) goto loc_82D34D6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34D6C:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d34dac
	if (ctx.cr6.eq) goto loc_82D34DAC;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d34da8
	if (!ctx.cr6.eq) goto loc_82D34DA8;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d34dac
	if (ctx.cr6.eq) goto loc_82D34DAC;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d34dac
	if (!ctx.cr6.eq) goto loc_82D34DAC;
loc_82D34DA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D34DAC:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bne 0x82d34e10
	if (!ctx.cr0.eq) goto loc_82D34E10;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34e10
	if (!ctx.cr6.eq) goto loc_82D34E10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34E10:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d34d08
	if (ctx.cr6.lt) goto loc_82D34D08;
loc_82D34E24:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bne 0x82d34e84
	if (!ctx.cr0.eq) goto loc_82D34E84;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34e84
	if (!ctx.cr6.eq) goto loc_82D34E84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34E84:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d34ee4
	if (!ctx.cr0.eq) goto loc_82D34EE4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34ee4
	if (!ctx.cr6.eq) goto loc_82D34EE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34EE4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d34f50
	if (!ctx.cr0.eq) goto loc_82D34F50;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D34F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d34f50
	if (!ctx.cr6.eq) goto loc_82D34F50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D34F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D34F50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D34F58"))) PPC_WEAK_FUNC(sub_82D34F58);
PPC_FUNC_IMPL(__imp__sub_82D34F58) {
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
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D34F78;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,224
	ctx.r4.s64 = 224;
	// bl 0x82d34330
	ctx.lr = 0x82D34F84;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d34330
	ctx.lr = 0x82D34F90;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82d34330
	ctx.lr = 0x82D34F9C;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x82d34330
	ctx.lr = 0x82D34FA8;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x82d34330
	ctx.lr = 0x82D34FB4;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,73
	ctx.r4.s64 = 73;
	// bl 0x82d34330
	ctx.lr = 0x82D34FC0;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x82d34330
	ctx.lr = 0x82D34FCC;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d34330
	ctx.lr = 0x82D34FD8;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// bl 0x82d34330
	ctx.lr = 0x82D34FE4;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,213(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 213);
	// bl 0x82d34330
	ctx.lr = 0x82D34FF0;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,214(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 214);
	// bl 0x82d34330
	ctx.lr = 0x82D34FFC;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,216(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 216);
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D35010;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D3501C;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,218(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 218);
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D35030;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D3503C;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d34330
	ctx.lr = 0x82D35048;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35054;
	sub_82D34330(ctx, base);
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

__attribute__((alias("__imp__sub_82D3506C"))) PPC_WEAK_FUNC(sub_82D3506C);
PPC_FUNC_IMPL(__imp__sub_82D3506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D35070"))) PPC_WEAK_FUNC(sub_82D35070);
PPC_FUNC_IMPL(__imp__sub_82D35070) {
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
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D3508C;
	sub_82D34330(ctx, base);
	// li r4,238
	ctx.r4.s64 = 238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35098;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350A4;
	sub_82D34330(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350B0;
	sub_82D34330(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350BC;
	sub_82D34330(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350C8;
	sub_82D34330(ctx, base);
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350D4;
	sub_82D34330(ctx, base);
	// li r4,98
	ctx.r4.s64 = 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350E0;
	sub_82D34330(ctx, base);
	// li r4,101
	ctx.r4.s64 = 101;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350EC;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D350F8;
	sub_82D34330(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35104;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35110;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D3511C;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35128;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35134;
	sub_82D34330(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82d3515c
	if (ctx.cr6.eq) goto loc_82D3515C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82d35154
	if (ctx.cr6.eq) goto loc_82D35154;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d35160
	goto loc_82D35160;
loc_82D35154:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82d35160
	goto loc_82D35160;
loc_82D3515C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82D35160:
	// bl 0x82d34330
	ctx.lr = 0x82D35164;
	sub_82D34330(ctx, base);
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

__attribute__((alias("__imp__sub_82D35178"))) PPC_WEAK_FUNC(sub_82D35178);
PPC_FUNC_IMPL(__imp__sub_82D35178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D35180;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,65533
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65533, ctx.xer);
	// ble cr6,0x82d351b4
	if (!ctx.cr6.gt) goto loc_82D351B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D351B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D351B4:
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D351C0;
	sub_82D34330(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D351CC;
	sub_82D34330(ctx, base);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D351E0;
	sub_82D34330(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D351EC;
	sub_82D34330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D351F4"))) PPC_WEAK_FUNC(sub_82D351F4);
PPC_FUNC_IMPL(__imp__sub_82D351F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D351F8"))) PPC_WEAK_FUNC(sub_82D351F8);
PPC_FUNC_IMPL(__imp__sub_82D351F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d34330
	sub_82D34330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D351FC"))) PPC_WEAK_FUNC(sub_82D351FC);
PPC_FUNC_IMPL(__imp__sub_82D351FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D35200"))) PPC_WEAK_FUNC(sub_82D35200);
PPC_FUNC_IMPL(__imp__sub_82D35200) {
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
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r30,356(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// bl 0x82d34330
	ctx.lr = 0x82D35224;
	sub_82D34330(ctx, base);
	// li r4,216
	ctx.r4.s64 = 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35230;
	sub_82D34330(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3524c
	if (ctx.cr6.eq) goto loc_82D3524C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34f58
	ctx.lr = 0x82D3524C;
	sub_82D34F58(ctx, base);
loc_82D3524C:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d35260
	if (ctx.cr6.eq) goto loc_82D35260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d35070
	ctx.lr = 0x82D35260;
	sub_82D35070(ctx, base);
loc_82D35260:
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

__attribute__((alias("__imp__sub_82D35278"))) PPC_WEAK_FUNC(sub_82D35278);
PPC_FUNC_IMPL(__imp__sub_82D35278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D35280;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d352c8
	if (!ctx.cr6.gt) goto loc_82D352C8;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_82D352A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d343b8
	ctx.lr = 0x82D352B0;
	sub_82D343B8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d352a4
	if (ctx.cr6.lt) goto loc_82D352A4;
loc_82D352C8:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d35368
	if (!ctx.cr6.eq) goto loc_82D35368;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d35368
	if (!ctx.cr6.eq) goto loc_82D35368;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82d35368
	if (!ctx.cr6.eq) goto loc_82D35368;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d3532c
	if (!ctx.cr6.gt) goto loc_82D3532C;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_82D35304:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x82d3531c
	if (ctx.cr6.gt) goto loc_82D3531C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82d35320
	if (!ctx.cr6.gt) goto loc_82D35320;
loc_82D3531C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D35320:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// bne 0x82d35304
	if (!ctx.cr0.eq) goto loc_82D35304;
loc_82D3532C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82d3536c
	if (ctx.cr6.eq) goto loc_82D3536C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d3536c
	if (ctx.cr6.eq) goto loc_82D3536C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,75
	ctx.r10.s64 = 75;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D35364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d3536c
	goto loc_82D3536C;
loc_82D35368:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D3536C:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3538c
	if (ctx.cr6.eq) goto loc_82D3538C;
	// li r4,201
	ctx.r4.s64 = 201;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34a40
	ctx.lr = 0x82D35384;
	sub_82D34A40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82D3538C:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d353ac
	if (ctx.cr6.eq) goto loc_82D353AC;
	// li r4,194
	ctx.r4.s64 = 194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34a40
	ctx.lr = 0x82D353A4;
	sub_82D34A40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82D353AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r4,192
	ctx.r4.s64 = 192;
	// bne cr6,0x82d353bc
	if (!ctx.cr6.eq) goto loc_82D353BC;
	// li r4,193
	ctx.r4.s64 = 193;
loc_82D353BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34a40
	ctx.lr = 0x82D353C4;
	sub_82D34A40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D353CC"))) PPC_WEAK_FUNC(sub_82D353CC);
PPC_FUNC_IMPL(__imp__sub_82D353CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D353D0"))) PPC_WEAK_FUNC(sub_82D353D0);
PPC_FUNC_IMPL(__imp__sub_82D353D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D353D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r27,356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3546c
	if (!ctx.cr6.eq) goto loc_82D3546C;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3546c
	if (!ctx.cr6.gt) goto loc_82D3546C;
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
loc_82D35404:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d35438
	if (ctx.cr6.eq) goto loc_82D35438;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d35448
	if (!ctx.cr6.eq) goto loc_82D35448;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d35458
	if (!ctx.cr6.eq) goto loc_82D35458;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82d35450
	goto loc_82D35450;
loc_82D35438:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34760
	ctx.lr = 0x82D35448;
	sub_82D34760(ctx, base);
loc_82D35448:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D35450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34760
	ctx.lr = 0x82D35458;
	sub_82D34760(ctx, base);
loc_82D35458:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d35404
	if (ctx.cr6.lt) goto loc_82D35404;
loc_82D3546C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82d354d4
	if (ctx.cr6.eq) goto loc_82D354D4;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35488;
	sub_82D34330(ctx, base);
	// li r4,221
	ctx.r4.s64 = 221;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35494;
	sub_82D34330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D354A0;
	sub_82D34330(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D354AC;
	sub_82D34330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,200(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d34330
	ctx.lr = 0x82D354C0;
	sub_82D34330(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D354CC;
	sub_82D34330(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// stw r10,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r10.u32);
loc_82D354D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34c98
	ctx.lr = 0x82D354DC;
	sub_82D34C98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D354E4"))) PPC_WEAK_FUNC(sub_82D354E4);
PPC_FUNC_IMPL(__imp__sub_82D354E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D354E8"))) PPC_WEAK_FUNC(sub_82D354E8);
PPC_FUNC_IMPL(__imp__sub_82D354E8) {
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
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35504;
	sub_82D34330(ctx, base);
	// li r4,217
	ctx.r4.s64 = 217;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35510;
	sub_82D34330(ctx, base);
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

__attribute__((alias("__imp__sub_82D35524"))) PPC_WEAK_FUNC(sub_82D35524);
PPC_FUNC_IMPL(__imp__sub_82D35524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D35528"))) PPC_WEAK_FUNC(sub_82D35528);
PPC_FUNC_IMPL(__imp__sub_82D35528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D35530;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D35540;
	sub_82D34330(ctx, base);
	// li r4,216
	ctx.r4.s64 = 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34330
	ctx.lr = 0x82D3554C;
	sub_82D34330(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
loc_82D35554:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3556c
	if (ctx.cr6.eq) goto loc_82D3556C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d343b8
	ctx.lr = 0x82D3556C;
	sub_82D343B8(ctx, base);
loc_82D3556C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82d35554
	if (ctx.cr6.lt) goto loc_82D35554;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d355d8
	if (!ctx.cr6.eq) goto loc_82D355D8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
loc_82D35590:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d355ac
	if (ctx.cr6.eq) goto loc_82D355AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34760
	ctx.lr = 0x82D355AC;
	sub_82D34760(ctx, base);
loc_82D355AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d355c8
	if (ctx.cr6.eq) goto loc_82D355C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d34760
	ctx.lr = 0x82D355C8;
	sub_82D34760(ctx, base);
loc_82D355C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82d35590
	if (ctx.cr6.lt) goto loc_82D35590;
loc_82D355D8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bne 0x82d3563c
	if (!ctx.cr0.eq) goto loc_82D3563C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D35618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3563c
	if (!ctx.cr6.eq) goto loc_82D3563C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3563C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3563C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,217
	ctx.r10.s64 = 217;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82d3569c
	if (!ctx.cr0.eq) goto loc_82D3569C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D35678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3569c
	if (!ctx.cr6.eq) goto loc_82D3569C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3569C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3569C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D356A4"))) PPC_WEAK_FUNC(sub_82D356A4);
PPC_FUNC_IMPL(__imp__sub_82D356A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D356A8"))) PPC_WEAK_FUNC(sub_82D356A8);
PPC_FUNC_IMPL(__imp__sub_82D356A8) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D356D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// lis r7,-32045
	ctx.r7.s64 = -2100101120;
	// lis r6,-32045
	ctx.r6.s64 = -2100101120;
	// addi r10,r9,20992
	ctx.r10.s64 = ctx.r9.s64 + 20992;
	// lis r5,-32045
	ctx.r5.s64 = -2100101120;
	// addi r9,r8,21112
	ctx.r9.s64 = ctx.r8.s64 + 21112;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r4,-32045
	ctx.r4.s64 = -2100101120;
	// addi r8,r7,21456
	ctx.r8.s64 = ctx.r7.s64 + 21456;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r7,r6,21736
	ctx.r7.s64 = ctx.r6.s64 + 21736;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r6,r5,21800
	ctx.r6.s64 = ctx.r5.s64 + 21800;
	// addi r5,r4,20856
	ctx.r5.s64 = ctx.r4.s64 + 20856;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r4,r11,20984
	ctx.r4.s64 = ctx.r11.s64 + 20984;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D35748"))) PPC_WEAK_FUNC(sub_82D35748);
PPC_FUNC_IMPL(__imp__sub_82D35748) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d47b50
	ctx.lr = 0x82D35764;
	sub_82D47B50(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3578c
	if (!ctx.cr6.eq) goto loc_82D3578C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d468e0
	ctx.lr = 0x82D35778;
	sub_82D468E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d46048
	ctx.lr = 0x82D35780;
	sub_82D46048(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45630
	ctx.lr = 0x82D3578C;
	sub_82D45630(ctx, base);
loc_82D3578C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d44ea0
	ctx.lr = 0x82D35794;
	sub_82D44EA0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d357c4
	if (ctx.cr6.eq) goto loc_82D357C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D357C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d357e0
	goto loc_82D357E0;
loc_82D357C4:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d357dc
	if (ctx.cr6.eq) goto loc_82D357DC;
	// bl 0x82d43950
	ctx.lr = 0x82D357D8;
	sub_82D43950(ctx, base);
	// b 0x82d357e0
	goto loc_82D357E0;
loc_82D357DC:
	// bl 0x82d428a8
	ctx.lr = 0x82D357E0;
	sub_82D428A8(ctx, base);
loc_82D357E0:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82d357fc
	if (ctx.cr6.gt) goto loc_82D357FC;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d35800
	if (ctx.cr6.eq) goto loc_82D35800;
loc_82D357FC:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82D35800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d414b8
	ctx.lr = 0x82D35808;
	sub_82D414B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d40b40
	ctx.lr = 0x82D35814;
	sub_82D40B40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d356a8
	ctx.lr = 0x82D3581C;
	sub_82D356A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D35830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D35844;
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

__attribute__((alias("__imp__sub_82D35858"))) PPC_WEAK_FUNC(sub_82D35858);
PPC_FUNC_IMPL(__imp__sub_82D35858) {
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
	// rlwinm r11,r5,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// rlwinm r10,r5,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2c8b0
	ctx.lr = 0x82D3589C;
	sub_82D2C8B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82d2c8b0
	ctx.lr = 0x82D358AC;
	sub_82D2C8B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27cc0
	ctx.lr = 0x82D358B4;
	sub_82D27CC0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D358C4;
	sub_82D27D00(ctx, base);
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

__attribute__((alias("__imp__sub_82D358DC"))) PPC_WEAK_FUNC(sub_82D358DC);
PPC_FUNC_IMPL(__imp__sub_82D358DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D358E0"))) PPC_WEAK_FUNC(sub_82D358E0);
PPC_FUNC_IMPL(__imp__sub_82D358E0) {
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
	// lwz r11,1536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82d2c8b0
	ctx.lr = 0x82D35918;
	sub_82D2C8B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D35928"))) PPC_WEAK_FUNC(sub_82D35928);
PPC_FUNC_IMPL(__imp__sub_82D35928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r11,1564(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1564);
	// addi r10,r10,3864
	ctx.r10.s64 = ctx.r10.s64 + 3864;
	// subfic r5,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r5.s64 = 8 - ctx.r11.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82d2c8b0
	sub_82D2C8B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D35940"))) PPC_WEAK_FUNC(sub_82D35940);
PPC_FUNC_IMPL(__imp__sub_82D35940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D35948;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,1688(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1688);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82d3596c
	if (!ctx.cr0.eq) goto loc_82D3596C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d35974
	if (ctx.cr6.eq) goto loc_82D35974;
loc_82D3596C:
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// ble cr6,0x82d35990
	if (!ctx.cr6.gt) goto loc_82D35990;
loc_82D35974:
	// lbz r11,1558(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1558);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,3904
	ctx.r4.s64 = ctx.r11.s64 + 3904;
	// bne cr6,0x82d35a14
	if (!ctx.cr6.eq) goto loc_82D35A14;
	// bl 0x82d27ae8
	ctx.lr = 0x82D35990;
	sub_82D27AE8(ctx, base);
loc_82D35990:
	// sth r29,1544(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1544, ctx.r29.u16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mulli r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 * 3;
	// addi r4,r10,3896
	ctx.r4.s64 = ctx.r10.s64 + 3896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d35858
	ctx.lr = 0x82D359A8;
	sub_82D35858(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d359f8
	if (ctx.cr6.eq) goto loc_82D359F8;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82D359B4:
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// li r5,3
	ctx.r5.s64 = 3;
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// bl 0x82d27d00
	ctx.lr = 0x82D359DC;
	sub_82D27D00(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2c8b0
	ctx.lr = 0x82D359EC;
	sub_82D2C8B0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// bne 0x82d359b4
	if (!ctx.cr0.eq) goto loc_82D359B4;
loc_82D359F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d358e0
	ctx.lr = 0x82D35A00;
	sub_82D358E0(ctx, base);
	// lwz r11,1368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1368);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,1368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1368, ctx.r11.u32);
loc_82D35A0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D35A14:
	// bl 0x82d27b20
	ctx.lr = 0x82D35A18;
	sub_82D27B20(ctx, base);
	// b 0x82d35a0c
	goto loc_82D35A0C;
}

__attribute__((alias("__imp__sub_82D35A1C"))) PPC_WEAK_FUNC(sub_82D35A1C);
PPC_FUNC_IMPL(__imp__sub_82D35A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D35A20"))) PPC_WEAK_FUNC(sub_82D35A20);
PPC_FUNC_IMPL(__imp__sub_82D35A20) {
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
	// lbz r11,1563(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1563);
	// lbz r10,1560(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1560);
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d31c90
	ctx.lr = 0x82D35A60;
	sub_82D31C90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r3.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r11,1557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1557);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d35a94
	if (ctx.cr0.eq) goto loc_82D35A94;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d31c90
	ctx.lr = 0x82D35A88;
	sub_82D31C90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82D35A94:
	// lbz r11,1557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1557);
	// rlwinm. r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d35b34
	if (ctx.cr0.eq) goto loc_82D35B34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d31c90
	ctx.lr = 0x82D35AAC;
	sub_82D31C90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82D35ABC;
	sub_82CA3190(ctx, base);
	// lbz r11,1557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1557);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d35ae4
	if (ctx.cr0.eq) goto loc_82D35AE4;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d31c90
	ctx.lr = 0x82D35AD8;
	sub_82D31C90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r3.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82D35AE4:
	// lbz r11,1557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1557);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d35b0c
	if (ctx.cr0.eq) goto loc_82D35B0C;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d31c90
	ctx.lr = 0x82D35B00;
	sub_82D31C90(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r3.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82D35B0C:
	// lbz r11,1557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1557);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d35b34
	if (ctx.cr0.eq) goto loc_82D35B34;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d31c90
	ctx.lr = 0x82D35B28;
	sub_82D31C90(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r3.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82D35B34:
	// lbz r11,1555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82d35b70
	if (ctx.cr0.eq) goto loc_82D35B70;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d35b70
	if (!ctx.cr0.eq) goto loc_82D35B70;
	// lwz r10,1468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// b 0x82d35b80
	goto loc_82D35B80;
loc_82D35B70:
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
loc_82D35B80:
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r10,1436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// stw r10,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D35BA8"))) PPC_WEAK_FUNC(sub_82D35BA8);
PPC_FUNC_IMPL(__imp__sub_82D35BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D35BB0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bge cr6,0x82d35df4
	if (!ctx.cr6.lt) goto loc_82D35DF4;
	// lbz r10,11(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r30,r11,3752
	ctx.r30.s64 = ctx.r11.s64 + 3752;
	// beq cr6,0x82d35d38
	if (ctx.cr6.eq) goto loc_82D35D38;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82d35cbc
	if (ctx.cr6.eq) goto loc_82D35CBC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82d35c3c
	if (ctx.cr6.eq) goto loc_82D35C3C;
	// lwz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwzx r29,r31,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r27,r10,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82d35db8
	if (!ctx.cr6.lt) goto loc_82D35DB8;
	// addi r23,r30,28
	ctx.r23.s64 = ctx.r30.s64 + 28;
loc_82D35C08:
	// mullw r11,r29,r27
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82d35c24
	if (ctx.cr6.eq) goto loc_82D35C24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D35C24;
	sub_82CA2C60(ctx, base);
loc_82D35C24:
	// lwzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82d35c08
	if (ctx.cr6.lt) goto loc_82D35C08;
	// b 0x82d35db8
	goto loc_82D35DB8;
loc_82D35C3C:
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82d35db8
	if (!ctx.cr6.lt) goto loc_82D35DB8;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
loc_82D35C5C:
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r6,r6,252
	ctx.r6.s64 = ctx.r6.s64 * 252;
	// lbzx r4,r4,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// srw r6,r4,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bne cr6,0x82d35ca0
	if (!ctx.cr6.eq) goto loc_82D35CA0;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d35ca4
	goto loc_82D35CA4;
loc_82D35CA0:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82D35CA4:
	// lwzx r6,r31,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d35c5c
	if (ctx.cr6.lt) goto loc_82D35C5C;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// b 0x82d35db0
	goto loc_82D35DB0;
loc_82D35CBC:
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82d35db8
	if (!ctx.cr6.lt) goto loc_82D35DB8;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
loc_82D35CDC:
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r6,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	ctx.r6.s64 = 3 - ctx.r6.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r6,r6,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// lbzx r4,r4,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// srw r6,r4,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bne cr6,0x82d35d1c
	if (!ctx.cr6.eq) goto loc_82D35D1C;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d35d20
	goto loc_82D35D20;
loc_82D35D1C:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82D35D20:
	// lwzx r6,r31,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d35cdc
	if (ctx.cr6.lt) goto loc_82D35CDC;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// b 0x82d35db0
	goto loc_82D35DB0;
loc_82D35D38:
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82d35db8
	if (!ctx.cr6.lt) goto loc_82D35DB8;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
loc_82D35D58:
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r4,r11,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subfic r6,r6,7
	ctx.xer.ca = ctx.r6.u32 <= 7;
	ctx.r6.s64 = 7 - ctx.r6.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r4,r4,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// srw r6,r4,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bne cr6,0x82d35d98
	if (!ctx.cr6.eq) goto loc_82D35D98;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d35d9c
	goto loc_82D35D9C;
loc_82D35D98:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82D35D9C:
	// lwzx r6,r31,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d35d58
	if (ctx.cr6.lt) goto loc_82D35D58;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
loc_82D35DB0:
	// beq cr6,0x82d35db8
	if (ctx.cr6.eq) goto loc_82D35DB8;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
loc_82D35DB8:
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r8,11(r24)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// twllei r7,0
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r7
	ctx.r10.u32 = ctx.r11.u32 / ctx.r7.u32;
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
loc_82D35DF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D35DFC"))) PPC_WEAK_FUNC(sub_82D35DFC);
PPC_FUNC_IMPL(__imp__sub_82D35DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D35E00"))) PPC_WEAK_FUNC(sub_82D35E00);
PPC_FUNC_IMPL(__imp__sub_82D35E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D35E08;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d35858
	ctx.lr = 0x82D35E20;
	sub_82D35858(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d35e50
	if (ctx.cr6.eq) goto loc_82D35E50;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d35e50
	if (ctx.cr6.eq) goto loc_82D35E50;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D35E40;
	sub_82D27D00(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2c8b0
	ctx.lr = 0x82D35E50;
	sub_82D2C8B0(ctx, base);
loc_82D35E50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d358e0
	ctx.lr = 0x82D35E58;
	sub_82D358E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D35E60"))) PPC_WEAK_FUNC(sub_82D35E60);
PPC_FUNC_IMPL(__imp__sub_82D35E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D35E68;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82d35f6c
	if (ctx.cr6.eq) goto loc_82D35F6C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82d35f40
	if (ctx.cr6.eq) goto loc_82D35F40;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82d35f14
	if (ctx.cr6.eq) goto loc_82D35F14;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x82d35eec
	if (ctx.cr6.eq) goto loc_82D35EEC;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// beq cr6,0x82d35ec4
	if (ctx.cr6.eq) goto loc_82D35EC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4236
	ctx.r4.s64 = ctx.r11.s64 + 4236;
	// b 0x82d35fa4
	goto loc_82D35FA4;
loc_82D35EC4:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82d35ee4
	if (ctx.cr6.eq) goto loc_82D35EE4;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x82d35ee4
	if (ctx.cr6.eq) goto loc_82D35EE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4200
	ctx.r4.s64 = ctx.r11.s64 + 4200;
	// bl 0x82d27ae8
	ctx.lr = 0x82D35EE4;
	sub_82D27AE8(ctx, base);
loc_82D35EE4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82d35f64
	goto loc_82D35F64;
loc_82D35EEC:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82d35f0c
	if (ctx.cr6.eq) goto loc_82D35F0C;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x82d35f0c
	if (ctx.cr6.eq) goto loc_82D35F0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4156
	ctx.r4.s64 = ctx.r11.s64 + 4156;
	// bl 0x82d27ae8
	ctx.lr = 0x82D35F0C;
	sub_82D27AE8(ctx, base);
loc_82D35F0C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82d35f64
	goto loc_82D35F64;
loc_82D35F14:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d35f34
	if (!ctx.cr6.gt) goto loc_82D35F34;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x82d35f94
	if (!ctx.cr6.gt) goto loc_82D35F94;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82d35f94
	if (ctx.cr6.eq) goto loc_82D35F94;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82d35f94
	if (ctx.cr6.eq) goto loc_82D35F94;
loc_82D35F34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4116
	ctx.r4.s64 = ctx.r11.s64 + 4116;
	// b 0x82d35fa4
	goto loc_82D35FA4;
loc_82D35F40:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82d35f60
	if (ctx.cr6.eq) goto loc_82D35F60;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x82d35f60
	if (ctx.cr6.eq) goto loc_82D35F60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4084
	ctx.r4.s64 = ctx.r11.s64 + 4084;
	// bl 0x82d27ae8
	ctx.lr = 0x82D35F60;
	sub_82D27AE8(ctx, base);
loc_82D35F60:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82D35F64:
	// stb r11,1562(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1562, ctx.r11.u8);
	// b 0x82d35fac
	goto loc_82D35FAC;
loc_82D35F6C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d35f9c
	if (!ctx.cr6.gt) goto loc_82D35F9C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x82d35f94
	if (!ctx.cr6.gt) goto loc_82D35F94;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82d35f94
	if (ctx.cr6.eq) goto loc_82D35F94;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82d35f94
	if (ctx.cr6.eq) goto loc_82D35F94;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bne cr6,0x82d35f9c
	if (!ctx.cr6.eq) goto loc_82D35F9C;
loc_82D35F94:
	// stb r23,1562(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1562, ctx.r23.u8);
	// b 0x82d35fac
	goto loc_82D35FAC;
loc_82D35F9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4044
	ctx.r4.s64 = ctx.r11.s64 + 4044;
loc_82D35FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D35FAC;
	sub_82D27AE8(ctx, base);
loc_82D35FAC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82d35fc8
	if (ctx.cr6.eq) goto loc_82D35FC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4008
	ctx.r4.s64 = ctx.r11.s64 + 4008;
	// bl 0x82d27b20
	ctx.lr = 0x82D35FC4;
	sub_82D27B20(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
loc_82D35FC8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82d35fe4
	if (ctx.cr6.eq) goto loc_82D35FE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3976
	ctx.r4.s64 = ctx.r11.s64 + 3976;
	// bl 0x82d27b20
	ctx.lr = 0x82D35FE0;
	sub_82D27B20(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
loc_82D35FE4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d36008
	if (ctx.cr6.eq) goto loc_82D36008;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x82d36008
	if (ctx.cr6.eq) goto loc_82D36008;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3940
	ctx.r4.s64 = ctx.r11.s64 + 3940;
	// bl 0x82d27b20
	ctx.lr = 0x82D36004;
	sub_82D27B20(ctx, base);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82D36008:
	// lbz r11,1562(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1562);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// stw r30,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r10,1559(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1559, ctx.r10.u8);
	// stb r10,1560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1560, ctx.r10.u8);
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,1563(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1563, ctx.r11.u8);
	// stb r9,1558(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1558, ctx.r9.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// stw r29,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r29.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stb r7,1555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1555, ctx.r7.u8);
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r25,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r25.u8);
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// stb r24,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r24.u8);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// stb r11,1561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1561, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// rlwinm r11,r30,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// mullw r10,r9,r30
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// rlwinm r10,r29,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r29,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r9,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r9.u8);
	// li r6,13
	ctx.r6.s64 = 13;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d35e00
	ctx.lr = 0x82D360BC;
	sub_82D35E00(ctx, base);
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// lis r10,-32046
	ctx.r10.s64 = -2100166656;
	// stw r31,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r31.u32);
	// addi r11,r11,31816
	ctx.r11.s64 = ctx.r11.s64 + 31816;
	// addi r9,r10,31928
	ctx.r9.s64 = ctx.r10.s64 + 31928;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r9.u32);
	// lbz r11,1557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1557);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82d36110
	if (!ctx.cr0.eq) goto loc_82D36110;
	// lbz r11,1558(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82d3610c
	if (ctx.cr6.eq) goto loc_82D3610C;
	// lbz r11,1559(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82d3610c
	if (ctx.cr6.lt) goto loc_82D3610C;
	// li r11,248
	ctx.r11.s64 = 248;
	// stb r11,1557(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1557, ctx.r11.u8);
	// b 0x82d36110
	goto loc_82D36110;
loc_82D3610C:
	// stb r10,1557(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1557, ctx.r10.u8);
loc_82D36110:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82d36138
	if (!ctx.cr0.eq) goto loc_82D36138;
	// lbz r9,1557(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1557);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x82d36130
	if (ctx.cr6.eq) goto loc_82D36130;
	// stw r23,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r23.u32);
	// b 0x82d36138
	goto loc_82D36138;
loc_82D36130:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
loc_82D36138:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82d36148
	if (!ctx.cr0.eq) goto loc_82D36148;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r9.u32);
loc_82D36148:
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82d36154
	if (!ctx.cr0.eq) goto loc_82D36154;
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
loc_82D36154:
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82d36164
	if (!ctx.cr0.eq) goto loc_82D36164;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r9,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r9.u32);
loc_82D36164:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d36170
	if (!ctx.cr0.eq) goto loc_82D36170;
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
loc_82D36170:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,1460(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r7,1456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// lwz r6,1452(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// lwz r5,1448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// lwz r4,1444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// bl 0x82d386d8
	ctx.lr = 0x82D36198;
	sub_82D386D8(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r23,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r23.u32);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D361B4"))) PPC_WEAK_FUNC(sub_82D361B4);
PPC_FUNC_IMPL(__imp__sub_82D361B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D361B8"))) PPC_WEAK_FUNC(sub_82D361B8);
PPC_FUNC_IMPL(__imp__sub_82D361B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,3880
	ctx.r4.s64 = ctx.r10.s64 + 3880;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35e00
	ctx.lr = 0x82D361E4;
	sub_82D35E00(ctx, base);
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D36204"))) PPC_WEAK_FUNC(sub_82D36204);
PPC_FUNC_IMPL(__imp__sub_82D36204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D36208"))) PPC_WEAK_FUNC(sub_82D36208);
PPC_FUNC_IMPL(__imp__sub_82D36208) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3888
	ctx.r4.s64 = ctx.r11.s64 + 3888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35858
	ctx.lr = 0x82D3622C;
	sub_82D35858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d358e0
	ctx.lr = 0x82D36234;
	sub_82D358E0(ctx, base);
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D36254"))) PPC_WEAK_FUNC(sub_82D36254);
PPC_FUNC_IMPL(__imp__sub_82D36254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D36258"))) PPC_WEAK_FUNC(sub_82D36258);
PPC_FUNC_IMPL(__imp__sub_82D36258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D36260;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d36460
	if (ctx.cr6.lt) goto loc_82D36460;
	// lbz r11,1555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82d363bc
	if (ctx.cr0.eq) goto loc_82D363BC;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// beq 0x82d362b0
	if (ctx.cr0.eq) goto loc_82D362B0;
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1556, ctx.r11.u8);
	// b 0x82d36378
	goto loc_82D36378;
loc_82D362B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// addi r11,r11,3752
	ctx.r11.s64 = ctx.r11.s64 + 3752;
loc_82D362BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,1556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1556, ctx.r10.u8);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bge cr6,0x82d36378
	if (!ctx.cr6.lt) goto loc_82D36378;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbz r8,1556(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwz r7,1464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r30,1556(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r29,r10,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r8,1468(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lwzx r6,r4,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// addi r27,r11,56
	ctx.r27.s64 = ctx.r11.s64 + 56;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r26,r11,84
	ctx.r26.s64 = ctx.r11.s64 + 84;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r4,r30,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// divwu r9,r9,r6
	ctx.r9.u32 = ctx.r9.u32 / ctx.r6.u32;
	// rotlwi r5,r28,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// stw r9,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r9.u32);
	// twllei r6,0
	// lwzx r7,r29,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r9,r4,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwzx r5,r5,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// twllei r7,0
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r9,r9,r7
	ctx.r9.u32 = ctx.r9.u32 / ctx.r7.u32;
	// stw r9,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r9.u32);
	// beq cr6,0x82d362bc
	if (ctx.cr6.eq) goto loc_82D362BC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d362bc
	if (ctx.cr6.eq) goto loc_82D362BC;
loc_82D36378:
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82d363bc
	if (!ctx.cr6.lt) goto loc_82D363BC;
	// lwz r3,1496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d36460
	if (ctx.cr6.eq) goto loc_82D36460;
	// lbz r11,1563(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1563);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r10,1560(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1560);
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82ca3190
	ctx.lr = 0x82D363B8;
	sub_82CA3190(ctx, base);
	// b 0x82d36460
	goto loc_82D36460;
loc_82D363BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r31,1380
	ctx.r28.s64 = ctx.r31.s64 + 1380;
	// addi r29,r11,-5728
	ctx.r29.s64 = ctx.r11.s64 + -5728;
loc_82D363C8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d37198
	ctx.lr = 0x82D363D4;
	sub_82D37198(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82d363fc
	if (ctx.cr0.eq) goto loc_82D363FC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82d363fc
	if (ctx.cr6.eq) goto loc_82D363FC;
	// lwz r4,1404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d363f8
	if (!ctx.cr6.eq) goto loc_82D363F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82D363F8:
	// bl 0x82d27ae8
	ctx.lr = 0x82D363FC;
	sub_82D27AE8(ctx, base);
loc_82D363FC:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d36430
	if (!ctx.cr6.eq) goto loc_82D36430;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d36430
	if (!ctx.cr6.eq) goto loc_82D36430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1440(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x82d361b8
	ctx.lr = 0x82D36420;
	sub_82D361B8(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_82D36430:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82d363c8
	if (!ctx.cr6.eq) goto loc_82D363C8;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d36458
	if (!ctx.cr6.lt) goto loc_82D36458;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d361b8
	ctx.lr = 0x82D36458;
	sub_82D361B8(ctx, base);
loc_82D36458:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d38598
	ctx.lr = 0x82D36460;
	sub_82D38598(ctx, base);
loc_82D36460:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D36468"))) PPC_WEAK_FUNC(sub_82D36468);
PPC_FUNC_IMPL(__imp__sub_82D36468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D36470;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,1380
	ctx.r29.s64 = ctx.r31.s64 + 1380;
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// stw r4,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-5728
	ctx.r30.s64 = ctx.r11.s64 + -5728;
loc_82D36494:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d37198
	ctx.lr = 0x82D364A0;
	sub_82D37198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82d364c0
	if (ctx.cr0.eq) goto loc_82D364C0;
	// lwz r4,1404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d364bc
	if (!ctx.cr6.eq) goto loc_82D364BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D364BC:
	// bl 0x82d27ae8
	ctx.lr = 0x82D364C0;
	sub_82D27AE8(ctx, base);
loc_82D364C0:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d364ec
	if (!ctx.cr6.eq) goto loc_82D364EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1440(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x82d361b8
	ctx.lr = 0x82D364DC;
	sub_82D361B8(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_82D364EC:
	// lwz r11,1384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d36494
	if (!ctx.cr6.eq) goto loc_82D36494;
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d36510
	if (ctx.cr6.eq) goto loc_82D36510;
	// lwz r10,1500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// stw r10,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r10.u32);
loc_82D36510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d36258
	ctx.lr = 0x82D36518;
	sub_82D36258(ctx, base);
	// lwz r10,1576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
	// beq cr6,0x82d36540
	if (ctx.cr6.eq) goto loc_82D36540;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d36540
	if (ctx.cr6.lt) goto loc_82D36540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2c2b0
	ctx.lr = 0x82D36540;
	sub_82D2C2B0(ctx, base);
loc_82D36540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D36548"))) PPC_WEAK_FUNC(sub_82D36548);
PPC_FUNC_IMPL(__imp__sub_82D36548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82D36550;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r23,4(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// ori r19,r10,65535
	ctx.r19.u64 = ctx.r10.u64 | 65535;
	// lis r8,63
	ctx.r8.s64 = 4128768;
	// lbz r9,1557(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1557);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// lwz r31,1500(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1500);
	// ori r22,r8,65472
	ctx.r22.u64 = ctx.r8.u64 | 65472;
	// lwz r30,1496(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1496);
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r20,1665(r25)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1665);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// addze r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r29.s64 = temp.s64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// beq 0x82d3666c
	if (ctx.cr0.eq) goto loc_82D3666C;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// beq cr6,0x82d3666c
	if (ctx.cr6.eq) goto loc_82D3666C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82d365dc
	if (ctx.cr6.eq) goto loc_82D365DC;
loc_82D365BC:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// blt cr6,0x82d365cc
	if (ctx.cr6.lt) goto loc_82D365CC;
	// subfic r9,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r9.s64;
loc_82D365CC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82d365bc
	if (ctx.cr6.lt) goto loc_82D365BC;
loc_82D365DC:
	// lbz r10,1664(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82d36668
	if (!ctx.cr6.eq) goto loc_82D36668;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36638
	if (!ctx.cr6.gt) goto loc_82D36638;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D36604:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x82d36628
	if (!ctx.cr0.eq) goto loc_82D36628;
	// lwz r6,1672(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36628:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d36604
	if (ctx.cr6.lt) goto loc_82D36604;
loc_82D36638:
	// lwz r11,1680(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36658
	if (!ctx.cr6.gt) goto loc_82D36658;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d36668
	goto loc_82D36668;
loc_82D36658:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D36668:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82D3666C:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// bne cr6,0x82d366e4
	if (!ctx.cr6.eq) goto loc_82D366E4;
	// lwz r10,1504(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1504);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82d366b0
	if (ctx.cr6.eq) goto loc_82D366B0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82D36698:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82d36698
	if (!ctx.cr0.eq) goto loc_82D36698;
loc_82D366B0:
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82d368b4
	if (!ctx.cr6.lt) goto loc_82D368B4;
	// subf r9,r9,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r9.s64;
loc_82D366BC:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82d366bc
	if (!ctx.cr0.eq) goto loc_82D366BC;
	// b 0x82d368b4
	goto loc_82D368B4;
loc_82D366E4:
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d368b8
	if (ctx.cr0.eq) goto loc_82D368B8;
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d36780
	if (!ctx.cr6.eq) goto loc_82D36780;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36750
	if (!ctx.cr6.gt) goto loc_82D36750;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D3671C:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x82d36740
	if (!ctx.cr6.eq) goto loc_82D36740;
	// lwz r6,1676(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36740:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d3671c
	if (ctx.cr6.lt) goto loc_82D3671C;
loc_82D36750:
	// lwz r11,1684(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36770
	if (!ctx.cr6.gt) goto loc_82D36770;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// b 0x82d36780
	goto loc_82D36780;
loc_82D36770:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D36780:
	// lwz r11,1504(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1504);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82d36810
	if (ctx.cr6.eq) goto loc_82D36810;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82D367A4:
	// lbz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// stb r27,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// blt cr6,0x82d367bc
	if (ctx.cr6.lt) goto loc_82D367BC;
	// subfic r7,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r7.s64 = 256 - ctx.r7.s64;
loc_82D367BC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82d367a4
	if (!ctx.cr0.eq) goto loc_82D367A4;
	// b 0x82d36810
	goto loc_82D36810;
loc_82D367D4:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82d367f4
	if (ctx.cr6.lt) goto loc_82D367F4;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_82D367F4:
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82d3681c
	if (ctx.cr6.gt) goto loc_82D3681C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82D36810:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d367d4
	if (ctx.cr6.lt) goto loc_82D367D4;
loc_82D3681C:
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d368a8
	if (!ctx.cr6.eq) goto loc_82D368A8;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r10,r5,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36878
	if (!ctx.cr6.gt) goto loc_82D36878;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D36844:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x82d36868
	if (!ctx.cr6.eq) goto loc_82D36868;
	// lwz r6,1676(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36868:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d36844
	if (ctx.cr6.lt) goto loc_82D36844;
loc_82D36878:
	// lwz r11,1684(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36898
	if (!ctx.cr6.gt) goto loc_82D36898;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x82d368a8
	goto loc_82D368A8;
loc_82D36898:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D368A8:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82d368b8
	if (!ctx.cr6.lt) goto loc_82D368B8;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_82D368B4:
	// lwz r21,1504(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1504);
loc_82D368B8:
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// bne cr6,0x82d36908
	if (!ctx.cr6.eq) goto loc_82D36908;
	// lwz r10,1508(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1508);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82d36aa0
	if (ctx.cr6.eq) goto loc_82D36AA0;
	// subf r10,r31,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r31.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D368E0:
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// blt cr6,0x82d368e0
	if (ctx.cr6.lt) goto loc_82D368E0;
	// b 0x82d36aa0
	goto loc_82D36AA0;
loc_82D36908:
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d36aa4
	if (ctx.cr0.eq) goto loc_82D36AA4;
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d369a4
	if (!ctx.cr6.eq) goto loc_82D369A4;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36974
	if (!ctx.cr6.gt) goto loc_82D36974;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D36940:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82d36964
	if (!ctx.cr6.eq) goto loc_82D36964;
	// lwz r6,1676(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36964:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d36940
	if (ctx.cr6.lt) goto loc_82D36940;
loc_82D36974:
	// lwz r11,1684(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36994
	if (!ctx.cr6.gt) goto loc_82D36994;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// b 0x82d369a4
	goto loc_82D369A4;
loc_82D36994:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D369A4:
	// lwz r10,1508(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1508);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82d36a08
	if (ctx.cr6.eq) goto loc_82D36A08;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82D369C8:
	// lbzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82d369f0
	if (ctx.cr6.lt) goto loc_82D369F0;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_82D369F0:
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82d36a08
	if (ctx.cr6.gt) goto loc_82D36A08;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82d369c8
	if (ctx.cr6.lt) goto loc_82D369C8;
loc_82D36A08:
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d36a94
	if (!ctx.cr6.eq) goto loc_82D36A94;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r10,r5,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36a64
	if (!ctx.cr6.gt) goto loc_82D36A64;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D36A30:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82d36a54
	if (!ctx.cr6.eq) goto loc_82D36A54;
	// lwz r6,1672(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36A54:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d36a30
	if (ctx.cr6.lt) goto loc_82D36A30;
loc_82D36A64:
	// lwz r11,1680(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36a84
	if (!ctx.cr6.gt) goto loc_82D36A84;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x82d36a94
	goto loc_82D36A94;
loc_82D36A84:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D36A94:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82d36aa4
	if (!ctx.cr6.lt) goto loc_82D36AA4;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_82D36AA0:
	// lwz r21,1508(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1508);
loc_82D36AA4:
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// bne cr6,0x82d36b44
	if (!ctx.cr6.eq) goto loc_82D36B44;
	// lwz r9,1512(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1512);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// beq cr6,0x82d36afc
	if (ctx.cr6.eq) goto loc_82D36AFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82D36AD4:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82d36ad4
	if (!ctx.cr0.eq) goto loc_82D36AD4;
loc_82D36AFC:
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82d36d38
	if (!ctx.cr6.lt) goto loc_82D36D38;
	// subf r8,r8,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r8.s64;
loc_82D36B08:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r6,r6,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82d36b08
	if (!ctx.cr0.eq) goto loc_82D36B08;
	// b 0x82d36d38
	goto loc_82D36D38;
loc_82D36B44:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d36d3c
	if (ctx.cr0.eq) goto loc_82D36D3C;
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d36be0
	if (!ctx.cr6.eq) goto loc_82D36BE0;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36bb0
	if (!ctx.cr6.gt) goto loc_82D36BB0;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D36B7C:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x82d36ba0
	if (!ctx.cr6.eq) goto loc_82D36BA0;
	// lwz r6,1676(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36BA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d36b7c
	if (ctx.cr6.lt) goto loc_82D36B7C;
loc_82D36BB0:
	// lwz r11,1684(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36bd0
	if (!ctx.cr6.gt) goto loc_82D36BD0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// b 0x82d36be0
	goto loc_82D36BE0;
loc_82D36BD0:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D36BE0:
	// lwz r11,1512(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1512);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82d36c98
	if (ctx.cr6.eq) goto loc_82D36C98;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82D36C08:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stb r27,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r27.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82d36c38
	if (ctx.cr6.lt) goto loc_82D36C38;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_82D36C38:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne 0x82d36c08
	if (!ctx.cr0.eq) goto loc_82D36C08;
	// b 0x82d36c98
	goto loc_82D36C98;
loc_82D36C48:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82d36c88
	if (ctx.cr6.lt) goto loc_82D36C88;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_82D36C88:
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82d36ca0
	if (ctx.cr6.gt) goto loc_82D36CA0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82D36C98:
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82d36c48
	if (ctx.cr6.lt) goto loc_82D36C48;
loc_82D36CA0:
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d36d2c
	if (!ctx.cr6.eq) goto loc_82D36D2C;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r4,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36cfc
	if (!ctx.cr6.gt) goto loc_82D36CFC;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D36CC8:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x82d36cec
	if (!ctx.cr0.eq) goto loc_82D36CEC;
	// lwz r6,1672(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36CEC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d36cc8
	if (ctx.cr6.lt) goto loc_82D36CC8;
loc_82D36CFC:
	// lwz r11,1680(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36d1c
	if (!ctx.cr6.gt) goto loc_82D36D1C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x82d36d2c
	goto loc_82D36D2C;
loc_82D36D1C:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D36D2C:
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82d36d3c
	if (!ctx.cr6.lt) goto loc_82D36D3C;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
loc_82D36D38:
	// lwz r21,1512(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1512);
loc_82D36D3C:
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// bne cr6,0x82d36e34
	if (!ctx.cr6.eq) goto loc_82D36E34;
	// lwz r10,1516(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1516);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82d36d94
	if (ctx.cr6.eq) goto loc_82D36D94;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82D36D70:
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stb r6,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r6.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82d36d70
	if (!ctx.cr0.eq) goto loc_82D36D70;
loc_82D36D94:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82d37080
	if (!ctx.cr6.lt) goto loc_82D37080;
	// subf r28,r11,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r29,r9,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r9.s64;
loc_82D36DA8:
	// lbzx r9,r28,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// subf. r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// neg r4,r11
	ctx.r4.s64 = -ctx.r11.s64;
	// blt 0x82d36dd0
	if (ctx.cr0.lt) goto loc_82D36DD0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82D36DD0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// blt cr6,0x82d36de0
	if (ctx.cr6.lt) goto loc_82D36DE0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82D36DE0:
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82d36dec
	if (!ctx.cr0.lt) goto loc_82D36DEC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D36DEC:
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82d36e04
	if (ctx.cr6.gt) goto loc_82D36E04;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82d36e04
	if (ctx.cr6.gt) goto loc_82D36E04;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82d36e14
	goto loc_82D36E14;
loc_82D36E04:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ble cr6,0x82d36e14
	if (!ctx.cr6.gt) goto loc_82D36E14;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82D36E14:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82d36da8
	if (!ctx.cr0.eq) goto loc_82D36DA8;
	// b 0x82d37080
	goto loc_82D37080;
loc_82D36E34:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d37084
	if (ctx.cr0.eq) goto loc_82D37084;
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d36ed0
	if (!ctx.cr6.eq) goto loc_82D36ED0;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d36ea0
	if (!ctx.cr6.gt) goto loc_82D36EA0;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D36E6C:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x82d36e90
	if (!ctx.cr6.eq) goto loc_82D36E90;
	// lwz r6,1676(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D36E90:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d36e6c
	if (ctx.cr6.lt) goto loc_82D36E6C;
loc_82D36EA0:
	// lwz r11,1684(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d36ec0
	if (!ctx.cr6.gt) goto loc_82D36EC0;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x82d36ed0
	goto loc_82D36ED0;
loc_82D36EC0:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D36ED0:
	// lwz r11,1516(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1516);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82d36f34
	if (ctx.cr6.eq) goto loc_82D36F34;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82D36EFC:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82d36f28
	if (ctx.cr6.lt) goto loc_82D36F28;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_82D36F28:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne 0x82d36efc
	if (!ctx.cr0.eq) goto loc_82D36EFC;
loc_82D36F34:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82d36fec
	if (!ctx.cr6.lt) goto loc_82D36FEC;
	// subf r29,r10,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82D36F44:
	// lbzx r9,r29,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf. r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// neg r6,r11
	ctx.r6.s64 = -ctx.r11.s64;
	// blt 0x82d36f6c
	if (ctx.cr0.lt) goto loc_82D36F6C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82D36F6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// blt cr6,0x82d36f7c
	if (ctx.cr6.lt) goto loc_82D36F7C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82D36F7C:
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82d36f88
	if (!ctx.cr0.lt) goto loc_82D36F88;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D36F88:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82d36fa0
	if (ctx.cr6.gt) goto loc_82D36FA0;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82d36fa0
	if (ctx.cr6.gt) goto loc_82D36FA0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82d36fb0
	goto loc_82D36FB0;
loc_82D36FA0:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// ble cr6,0x82d36fb0
	if (!ctx.cr6.gt) goto loc_82D36FB0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82D36FB0:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82d36fd4
	if (ctx.cr6.lt) goto loc_82D36FD4;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_82D36FD4:
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82d36fec
	if (ctx.cr6.gt) goto loc_82D36FEC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82d36f44
	if (ctx.cr6.lt) goto loc_82D36F44;
loc_82D36FEC:
	// lbz r11,1664(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d37078
	if (!ctx.cr6.eq) goto loc_82D37078;
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// rlwinm r10,r26,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d37048
	if (!ctx.cr6.gt) goto loc_82D37048;
	// lwz r7,1668(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D37014:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x82d37038
	if (!ctx.cr6.eq) goto loc_82D37038;
	// lwz r6,1672(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82D37038:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82d37014
	if (ctx.cr6.lt) goto loc_82D37014;
loc_82D37048:
	// lwz r11,1680(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82d37068
	if (!ctx.cr6.gt) goto loc_82D37068;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// b 0x82d37078
	goto loc_82D37078;
loc_82D37068:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D37078:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82d37084
	if (!ctx.cr6.lt) goto loc_82D37084;
loc_82D37080:
	// lwz r21,1516(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1516);
loc_82D37084:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d36468
	ctx.lr = 0x82D37090;
	sub_82D36468(ctx, base);
	// lbz r11,1665(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1665);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82d370d0
	if (ctx.cr0.eq) goto loc_82D370D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// ble cr6,0x82d370c4
	if (!ctx.cr6.gt) goto loc_82D370C4;
loc_82D370A8:
	// lwz r10,1668(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// blt cr6,0x82d370a8
	if (ctx.cr6.lt) goto loc_82D370A8;
loc_82D370C4:
	// lwz r10,1668(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82D370D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82D370D8"))) PPC_WEAK_FUNC(sub_82D370D8);
PPC_FUNC_IMPL(__imp__sub_82D370D8) {
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
	// ble cr6,0x82d37108
	if (!ctx.cr6.gt) goto loc_82D37108;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82D37108:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d3717c
	if (ctx.cr6.eq) goto loc_82D3717C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ca2c60
	ctx.lr = 0x82D37120;
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
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d3717c
	if (!ctx.cr6.eq) goto loc_82D3717C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82D3717C:
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

__attribute__((alias("__imp__sub_82D37194"))) PPC_WEAK_FUNC(sub_82D37194);
PPC_FUNC_IMPL(__imp__sub_82D37194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D37198"))) PPC_WEAK_FUNC(sub_82D37198);
PPC_FUNC_IMPL(__imp__sub_82D37198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D371A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d37574
	if (ctx.cr6.eq) goto loc_82D37574;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d37574
	if (ctx.cr6.eq) goto loc_82D37574;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bgt cr6,0x82d37574
	if (ctx.cr6.gt) goto loc_82D37574;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d37574
	if (ctx.cr6.lt) goto loc_82D37574;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d37564
	if (ctx.cr6.eq) goto loc_82D37564;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d371f4
	if (!ctx.cr6.eq) goto loc_82D371F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d37564
	if (!ctx.cr6.eq) goto loc_82D37564;
loc_82D371F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// bne cr6,0x82d37208
	if (!ctx.cr6.eq) goto loc_82D37208;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82d37564
	if (!ctx.cr6.eq) goto loc_82D37564;
loc_82D37208:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d3722c
	if (!ctx.cr6.eq) goto loc_82D3722C;
loc_82D37214:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r11,r11,8932
	ctx.r11.s64 = ctx.r11.s64 + 8932;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82d37578
	goto loc_82D37578;
loc_82D3722C:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// bne cr6,0x82d3734c
	if (!ctx.cr6.eq) goto loc_82D3734C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r11,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82d37268
	if (!ctx.cr6.gt) goto loc_82D37268;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82D37268:
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d37280
	if (ctx.cr6.eq) goto loc_82D37280;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82D37280:
	// li r10,31
	ctx.r10.s64 = 31;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,113
	ctx.r6.s64 = 113;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// mulli r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 * 31;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stbx r10,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r6,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82d37344
	if (ctx.cr6.eq) goto loc_82D37344;
	// lhz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lhz r8,50(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 50);
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82D37344:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_82D3734C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3737c
	if (ctx.cr6.eq) goto loc_82D3737C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d370d8
	ctx.lr = 0x82D37360;
	sub_82D370D8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d37398
	if (!ctx.cr6.eq) goto loc_82D37398;
loc_82D3736C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82d37578
	goto loc_82D37578;
loc_82D3737C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d37398
	if (!ctx.cr6.eq) goto loc_82D37398;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82d37398
	if (ctx.cr6.gt) goto loc_82D37398;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82d37214
	if (!ctx.cr6.eq) goto loc_82D37214;
loc_82D37398:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// bne cr6,0x82d373b0
	if (!ctx.cr6.eq) goto loc_82D373B0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d37214
	if (!ctx.cr6.eq) goto loc_82D37214;
loc_82D373B0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d373d8
	if (!ctx.cr6.eq) goto loc_82D373D8;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d373d8
	if (!ctx.cr6.eq) goto loc_82D373D8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d374a0
	if (ctx.cr6.eq) goto loc_82D374A0;
	// cmpwi cr6,r11,666
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 666, ctx.xer);
	// beq cr6,0x82d374a0
	if (ctx.cr6.eq) goto loc_82D374A0;
loc_82D373D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,4272
	ctx.r11.s64 = ctx.r11.s64 + 4272;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D37400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82d37410
	if (ctx.cr6.eq) goto loc_82D37410;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82d37418
	if (!ctx.cr6.eq) goto loc_82D37418;
loc_82D37410:
	// li r11,666
	ctx.r11.s64 = 666;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D37418:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d37548
	if (ctx.cr6.eq) goto loc_82D37548;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82d37548
	if (ctx.cr6.eq) goto loc_82D37548;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82d374a0
	if (!ctx.cr6.eq) goto loc_82D374A0;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d37444
	if (!ctx.cr6.eq) goto loc_82D37444;
	// bl 0x82d49378
	ctx.lr = 0x82D37440;
	sub_82D49378(ctx, base);
	// b 0x82d3748c
	goto loc_82D3748C;
loc_82D37444:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d491e0
	ctx.lr = 0x82D37454;
	sub_82D491E0(ctx, base);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82d3748c
	if (!ctx.cr6.eq) goto loc_82D3748C;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3190
	ctx.lr = 0x82D3748C;
	sub_82CA3190(ctx, base);
loc_82D3748C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d370d8
	ctx.lr = 0x82D37494;
	sub_82D370D8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3736c
	if (ctx.cr6.eq) goto loc_82D3736C;
loc_82D374A0:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82d3755c
	if (!ctx.cr6.eq) goto loc_82D3755C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d374bc
	if (ctx.cr6.eq) goto loc_82D374BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d37578
	goto loc_82D37578;
loc_82D374BC:
	// lhz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lhz r9,50(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 50);
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D37530;
	sub_82D370D8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82d37578
	goto loc_82D37578;
loc_82D37548:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3755c
	if (!ctx.cr6.eq) goto loc_82D3755C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82D3755C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d37578
	goto loc_82D37578;
loc_82D37564:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,8932
	ctx.r11.s64 = ctx.r11.s64 + 8932;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82D37574:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82D37578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D37580"))) PPC_WEAK_FUNC(sub_82D37580);
PPC_FUNC_IMPL(__imp__sub_82D37580) {
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
	// beq cr6,0x82d37670
	if (ctx.cr6.eq) goto loc_82D37670;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d37670
	if (ctx.cr6.eq) goto loc_82D37670;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,42
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 42, ctx.xer);
	// beq cr6,0x82d375c8
	if (ctx.cr6.eq) goto loc_82D375C8;
	// cmpwi cr6,r30,113
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 113, ctx.xer);
	// beq cr6,0x82d375c8
	if (ctx.cr6.eq) goto loc_82D375C8;
	// cmpwi cr6,r30,666
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 666, ctx.xer);
	// bne cr6,0x82d37670
	if (!ctx.cr6.eq) goto loc_82D37670;
loc_82D375C8:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d375e4
	if (ctx.cr6.eq) goto loc_82D375E4;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D375E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D375E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d37604
	if (ctx.cr6.eq) goto loc_82D37604;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D37604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D37604:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d37624
	if (ctx.cr6.eq) goto loc_82D37624;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D37624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D37624:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d37644
	if (ctx.cr6.eq) goto loc_82D37644;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D37644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D37644:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D37658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,113
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 113, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne cr6,0x82d37674
	if (!ctx.cr6.eq) goto loc_82D37674;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82d37674
	goto loc_82D37674;
loc_82D37670:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82D37674:
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

__attribute__((alias("__imp__sub_82D3768C"))) PPC_WEAK_FUNC(sub_82D3768C);
PPC_FUNC_IMPL(__imp__sub_82D3768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D37690"))) PPC_WEAK_FUNC(sub_82D37690);
PPC_FUNC_IMPL(__imp__sub_82D37690) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D37698;
	sub_82CA2BD4(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r28,48(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r5,r7,-262
	ctx.r5.s64 = ctx.r7.s64 + -262;
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r26,116(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r27,136(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82d376d4
	if (!ctx.cr6.gt) goto loc_82D376D4;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r25,r11,262
	ctx.r25.s64 = ctx.r11.s64 + 262;
	// b 0x82d376d8
	goto loc_82D376D8;
loc_82D376D4:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82D376D8:
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r7,132(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r30,56(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r5,r9,258
	ctx.r5.s64 = ctx.r9.s64 + 258;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// lwz r29,44(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lbzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// blt cr6,0x82d37700
	if (ctx.cr6.lt) goto loc_82D37700;
	// rlwinm r26,r26,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
loc_82D37700:
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82d37710
	if (!ctx.cr6.gt) goto loc_82D37710;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82D37710:
	// add r11,r28,r4
	ctx.r11.u64 = ctx.r28.u64 + ctx.r4.u64;
	// clrlwi r24,r7,24
	ctx.r24.u64 = ctx.r7.u32 & 0xFF;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r23,r11,r6
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3785c
	if (!ctx.cr6.eq) goto loc_82D3785C;
	// lbz r8,-1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// clrlwi r24,r31,24
	ctx.r24.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3785c
	if (!ctx.cr6.eq) goto loc_82D3785C;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3785c
	if (!ctx.cr6.eq) goto loc_82D3785C;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r24,1(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3785c
	if (!ctx.cr6.eq) goto loc_82D3785C;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
loc_82D37764:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82d3782c
	if (!ctx.cr6.eq) goto loc_82D3782C;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82d37764
	if (ctx.cr6.lt) goto loc_82D37764;
loc_82D3782C:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r9,r5,-258
	ctx.r9.s64 = ctx.r5.s64 + -258;
	// addi r11,r11,258
	ctx.r11.s64 = ctx.r11.s64 + 258;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82d3785c
	if (!ctx.cr6.gt) goto loc_82D3785C;
	// stw r4,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r4.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82d37878
	if (!ctx.cr6.lt) goto loc_82D37878;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r31,-1(r8)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
loc_82D3785C:
	// and r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 & ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82d37878
	if (!ctx.cr6.gt) goto loc_82D37878;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82d37710
	if (!ctx.cr0.eq) goto loc_82D37710;
loc_82D37878:
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82d37884
	if (ctx.cr6.gt) goto loc_82D37884;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82D37884:
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D37888"))) PPC_WEAK_FUNC(sub_82D37888);
PPC_FUNC_IMPL(__imp__sub_82D37888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D37890;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_82D3789C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf. r26,r10,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82d378cc
	if (!ctx.cr0.eq) goto loc_82D378CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d378dc
	if (!ctx.cr6.eq) goto loc_82D378DC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d378dc
	if (!ctx.cr6.eq) goto loc_82D378DC;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// b 0x82d37990
	goto loc_82D37990;
loc_82D378CC:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x82d378dc
	if (!ctx.cr6.eq) goto loc_82D378DC;
	// li r26,-2
	ctx.r26.s64 = -2;
	// b 0x82d37990
	goto loc_82D37990;
loc_82D378DC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r10,r10,-262
	ctx.r10.s64 = ctx.r10.s64 + -262;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d37990
	if (ctx.cr6.lt) goto loc_82D37990;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D37900;
	sub_82CA2C60(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subf r7,r28,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r28.s64;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_82D37934:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// bge cr6,0x82d3794c
	if (!ctx.cr6.lt) goto loc_82D3794C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D3794C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// bne 0x82d37934
	if (!ctx.cr0.eq) goto loc_82D37934;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D37968:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// bge cr6,0x82d37980
	if (!ctx.cr6.lt) goto loc_82D37980;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D37980:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bne 0x82d37968
	if (!ctx.cr0.eq) goto loc_82D37968;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
loc_82D37990:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d37a8c
	if (ctx.cr6.eq) goto loc_82D37A8C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
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
	// ble cr6,0x82d379c8
	if (!ctx.cr6.gt) goto loc_82D379C8;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82D379C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d379d8
	if (!ctx.cr6.eq) goto loc_82D379D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d37a30
	goto loc_82D37A30;
loc_82D379D8:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d37a04
	if (!ctx.cr6.eq) goto loc_82D37A04;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82d47c50
	ctx.lr = 0x82D37A00;
	sub_82D47C50(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82D37A04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D37A14;
	sub_82CA2C60(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_82D37A30:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82d37a74
	if (ctx.cr6.lt) goto loc_82D37A74;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82D37A74:
	// cmplwi cr6,r10,262
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 262, ctx.xer);
	// bge cr6,0x82d37a8c
	if (!ctx.cr6.lt) goto loc_82D37A8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3789c
	if (!ctx.cr6.eq) goto loc_82D3789C;
loc_82D37A8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D37A94"))) PPC_WEAK_FUNC(sub_82D37A94);
PPC_FUNC_IMPL(__imp__sub_82D37A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D37A98"))) PPC_WEAK_FUNC(sub_82D37A98);
PPC_FUNC_IMPL(__imp__sub_82D37A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D37AA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bge cr6,0x82d37ac8
	if (!ctx.cr6.lt) goto loc_82D37AC8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D37AC8:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82d37ae8
	if (ctx.cr6.gt) goto loc_82D37AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d37888
	ctx.lr = 0x82D37ADC;
	sub_82D37888(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d37bd8
	if (ctx.cr6.eq) goto loc_82D37BD8;
loc_82D37AE8:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d37b18
	if (ctx.cr6.eq) goto loc_82D37B18;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d37b6c
	if (ctx.cr6.lt) goto loc_82D37B6C;
loc_82D37B18:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// blt cr6,0x82d37b38
	if (ctx.cr6.lt) goto loc_82D37B38;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82d37b3c
	goto loc_82D37B3C;
loc_82D37B38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D37B3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d496a8
	ctx.lr = 0x82D37B4C;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D37B5C;
	sub_82D370D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d37bcc
	if (ctx.cr6.eq) goto loc_82D37BCC;
loc_82D37B6C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r10,r10,-262
	ctx.r10.s64 = ctx.r10.s64 + -262;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d37ac8
	if (ctx.cr6.lt) goto loc_82D37AC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d37b9c
	if (ctx.cr6.lt) goto loc_82D37B9C;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82d37ba0
	goto loc_82D37BA0;
loc_82D37B9C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D37BA0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d496a8
	ctx.lr = 0x82D37BAC;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D37BBC;
	sub_82D370D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d37ac8
	if (!ctx.cr6.eq) goto loc_82D37AC8;
loc_82D37BCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D37BD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D37BD8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d37bcc
	if (ctx.cr6.eq) goto loc_82D37BCC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d37bf8
	if (ctx.cr6.lt) goto loc_82D37BF8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82d37bfc
	goto loc_82D37BFC;
loc_82D37BF8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D37BFC:
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d496a8
	ctx.lr = 0x82D37C18;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D37C28;
	sub_82D370D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d37c48
	if (!ctx.cr6.eq) goto loc_82D37C48;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// b 0x82d37bd0
	goto loc_82D37BD0;
loc_82D37C48:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82d37bd0
	if (ctx.cr6.eq) goto loc_82D37BD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d37bd0
	goto loc_82D37BD0;
}

__attribute__((alias("__imp__sub_82D37C5C"))) PPC_WEAK_FUNC(sub_82D37C5C);
PPC_FUNC_IMPL(__imp__sub_82D37C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D37C60"))) PPC_WEAK_FUNC(sub_82D37C60);
PPC_FUNC_IMPL(__imp__sub_82D37C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D37C68;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r27,r11,7864
	ctx.r27.s64 = ctx.r11.s64 + 7864;
	// addi r28,r10,8376
	ctx.r28.s64 = ctx.r10.s64 + 8376;
loc_82D37C8C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82d37cbc
	if (!ctx.cr6.lt) goto loc_82D37CBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d37888
	ctx.lr = 0x82D37CA0;
	sub_82D37888(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82d37cb4
	if (!ctx.cr6.lt) goto loc_82D37CB4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d37fe4
	if (ctx.cr6.eq) goto loc_82D37FE4;
loc_82D37CB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d37ff0
	if (ctx.cr6.eq) goto loc_82D37FF0;
loc_82D37CBC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82d37d24
	if (ctx.cr6.lt) goto loc_82D37D24;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lhzx r30,r7,r8
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r30,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_82D37D24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d37d60
	if (ctx.cr6.eq) goto loc_82D37D60;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d37d60
	if (ctx.cr6.gt) goto loc_82D37D60;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d37d60
	if (ctx.cr6.eq) goto loc_82D37D60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d37690
	ctx.lr = 0x82D37D5C;
	sub_82D37690(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_82D37D60:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82d37f10
	if (ctx.cr6.lt) goto loc_82D37F10;
	// addi r11,r11,253
	ctx.r11.s64 = ctx.r11.s64 + 253;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,5788(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r11,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u16);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r9,5776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbx r6,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lbzx r11,r6,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r28.u32);
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// bge cr6,0x82d37de4
	if (!ctx.cr6.lt) goto loc_82D37DE4;
	// lbzx r11,r9,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// b 0x82d37df0
	goto loc_82D37DF0;
loc_82D37DE4:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r27,256
	ctx.r10.s64 = ctx.r27.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82D37DF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,5780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bgt cr6,0x82d37ec8
	if (ctx.cr6.gt) goto loc_82D37EC8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82d37ec8
	if (ctx.cr6.lt) goto loc_82D37EC8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82D37E4C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lhzx r30,r8,r5
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// sthx r30,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r30.u16);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// sthx r10,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bne 0x82d37e4c
	if (!ctx.cr0.eq) goto loc_82D37E4C;
	// b 0x82d37f80
	goto loc_82D37F80;
loc_82D37EC8:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x82d37f8c
	goto loc_82D37F8C;
loc_82D37F10:
	// lwz r11,5784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,5788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// sthx r29,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r29.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,5776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// lwz r8,5784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,5780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82D37F80:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82D37F8C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d37c8c
	if (ctx.cr6.eq) goto loc_82D37C8C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d37fac
	if (ctx.cr6.lt) goto loc_82D37FAC;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82d37fb0
	goto loc_82D37FB0;
loc_82D37FAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82D37FB0:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82d496a8
	ctx.lr = 0x82D37FC4;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D37FD4;
	sub_82D370D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d37c8c
	if (!ctx.cr6.eq) goto loc_82D37C8C;
loc_82D37FE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D37FE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82D37FF0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d38008
	if (ctx.cr6.lt) goto loc_82D38008;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82d3800c
	goto loc_82D3800C;
loc_82D38008:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82D3800C:
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d496a8
	ctx.lr = 0x82D38028;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D38038;
	sub_82D370D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d38058
	if (!ctx.cr6.eq) goto loc_82D38058;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// b 0x82d37fe8
	goto loc_82D37FE8;
loc_82D38058:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82d37fe8
	if (ctx.cr6.eq) goto loc_82D37FE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d37fe8
	goto loc_82D37FE8;
}

__attribute__((alias("__imp__sub_82D3806C"))) PPC_WEAK_FUNC(sub_82D3806C);
PPC_FUNC_IMPL(__imp__sub_82D3806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D38070"))) PPC_WEAK_FUNC(sub_82D38070);
PPC_FUNC_IMPL(__imp__sub_82D38070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D38078;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// addi r25,r11,7864
	ctx.r25.s64 = ctx.r11.s64 + 7864;
	// addi r27,r10,8376
	ctx.r27.s64 = ctx.r10.s64 + 8376;
loc_82D380A8:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82d380d8
	if (!ctx.cr6.lt) goto loc_82D380D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d37888
	ctx.lr = 0x82D380BC;
	sub_82D37888(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82d380d0
	if (!ctx.cr6.lt) goto loc_82D380D0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82d38488
	if (ctx.cr6.eq) goto loc_82D38488;
loc_82D380D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d384b8
	if (ctx.cr6.eq) goto loc_82D384B8;
loc_82D380D8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82d38140
	if (ctx.cr6.lt) goto loc_82D38140;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r7,r8
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r28,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_82D38140:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// beq cr6,0x82d381d8
	if (ctx.cr6.eq) goto loc_82D381D8;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d381d8
	if (!ctx.cr6.lt) goto loc_82D381D8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d381d8
	if (ctx.cr6.gt) goto loc_82D381D8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d381a0
	if (ctx.cr6.eq) goto loc_82D381A0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d37690
	ctx.lr = 0x82D3819C;
	sub_82D37690(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_82D381A0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82d381d8
	if (ctx.cr6.gt) goto loc_82D381D8;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82d381d4
	if (ctx.cr6.eq) goto loc_82D381D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82d381d8
	if (!ctx.cr6.eq) goto loc_82D381D8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x82d381d8
	if (!ctx.cr6.gt) goto loc_82D381D8;
loc_82D381D4:
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_82D381D8:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82d383b0
	if (ctx.cr6.lt) goto loc_82D383B0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d383b0
	if (ctx.cr6.gt) goto loc_82D383B0;
	// addi r10,r11,253
	ctx.r10.s64 = ctx.r11.s64 + 253;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r8,5784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,5788(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r10,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lwz r11,5776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r11.u32);
	// lbzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// bge cr6,0x82d38274
	if (!ctx.cr6.lt) goto loc_82D38274;
	// lbzx r11,r9,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// b 0x82d38280
	goto loc_82D38280;
loc_82D38274:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r25,256
	ctx.r10.s64 = ctx.r25.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82D38280:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r7,5784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r10,5780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r9,r7,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82D382CC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82d3833c
	if (ctx.cr6.gt) goto loc_82D3833C;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r5,r6
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// sthx r28,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r28.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u16);
loc_82D3833C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bne 0x82d382cc
	if (!ctx.cr0.eq) goto loc_82D382CC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x82d380a8
	if (ctx.cr6.eq) goto loc_82D380A8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d38380
	if (ctx.cr6.lt) goto loc_82D38380;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82d38384
	goto loc_82D38384;
loc_82D38380:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82D38384:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d496a8
	ctx.lr = 0x82D38394;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D383A4;
	sub_82D370D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82d38480
	goto loc_82D38480;
loc_82D383B0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d38494
	if (ctx.cr6.eq) goto loc_82D38494;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u16);
	// lwz r9,5776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r11,5780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d38460
	if (!ctx.cr6.eq) goto loc_82D38460;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d38438
	if (ctx.cr6.lt) goto loc_82D38438;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82d3843c
	goto loc_82D3843C;
loc_82D38438:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82D3843C:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82d496a8
	ctx.lr = 0x82D38450;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D38460;
	sub_82D370D8(ctx, base);
loc_82D38460:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
loc_82D38480:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d380a8
	if (!ctx.cr6.eq) goto loc_82D380A8;
loc_82D38488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D3848C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82D38494:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82d380a8
	goto loc_82D380A8;
loc_82D384B8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d38518
	if (ctx.cr6.eq) goto loc_82D38518;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5776);
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82D38518:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d38530
	if (ctx.cr6.lt) goto loc_82D38530;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82d38534
	goto loc_82D38534;
loc_82D38530:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82D38534:
	// addi r10,r24,-4
	ctx.r10.s64 = ctx.r24.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d496a8
	ctx.lr = 0x82D38550;
	sub_82D496A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82d370d8
	ctx.lr = 0x82D38560;
	sub_82D370D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d38580
	if (!ctx.cr6.eq) goto loc_82D38580;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// b 0x82d3848c
	goto loc_82D3848C;
loc_82D38580:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82d3848c
	if (ctx.cr6.eq) goto loc_82D3848C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d3848c
	goto loc_82D3848C;
}

__attribute__((alias("__imp__sub_82D38594"))) PPC_WEAK_FUNC(sub_82D38594);
PPC_FUNC_IMPL(__imp__sub_82D38594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D38598"))) PPC_WEAK_FUNC(sub_82D38598);
PPC_FUNC_IMPL(__imp__sub_82D38598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D385A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d386cc
	if (ctx.cr6.eq) goto loc_82D386CC;
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d386cc
	if (ctx.cr6.eq) goto loc_82D386CC;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d386cc
	if (ctx.cr6.eq) goto loc_82D386CC;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d386cc
	if (ctx.cr6.eq) goto loc_82D386CC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bge cr6,0x82d38608
	if (!ctx.cr6.lt) goto loc_82D38608;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_82D38608:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,71
	ctx.r10.u64 = ctx.r10.u64 & 71;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,42
	ctx.r10.s64 = ctx.r10.s64 + 42;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82d48e58
	ctx.lr = 0x82D38634;
	sub_82D48E58(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// sth r30,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r30.u16);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3190
	ctx.lr = 0x82D3866C;
	sub_82CA3190(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4272
	ctx.r11.s64 = ctx.r11.s64 + 4272;
	// mulli r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 * 12;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lhzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lhzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lhzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lhzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// b 0x82d386d0
	goto loc_82D386D0;
loc_82D386CC:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82D386D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D386D8"))) PPC_WEAK_FUNC(sub_82D386D8);
PPC_FUNC_IMPL(__imp__sub_82D386D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D386E0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// beq cr6,0x82d38940
	if (ctx.cr6.eq) goto loc_82D38940;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,49
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49, ctx.xer);
	// bne cr6,0x82d38940
	if (!ctx.cr6.eq) goto loc_82D38940;
	// cmplwi cr6,r10,56
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56, ctx.xer);
	// bne cr6,0x82d38940
	if (!ctx.cr6.eq) goto loc_82D38940;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d3872c
	if (!ctx.cr6.eq) goto loc_82D3872C;
loc_82D38724:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x82d38944
	goto loc_82D38944;
loc_82D3872C:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d3874c
	if (!ctx.cr6.eq) goto loc_82D3874C;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// addi r11,r10,-26056
	ctx.r11.s64 = ctx.r10.s64 + -26056;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82D3874C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d38764
	if (!ctx.cr6.eq) goto loc_82D38764;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,-25960
	ctx.r11.s64 = ctx.r11.s64 + -25960;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_82D38764:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x82d38770
	if (!ctx.cr6.eq) goto loc_82D38770;
	// li r25,6
	ctx.r25.s64 = 6;
loc_82D38770:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82d38784
	if (!ctx.cr6.lt) goto loc_82D38784;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_82D38784:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x82d38724
	if (ctx.cr6.lt) goto loc_82D38724;
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// bgt cr6,0x82d38724
	if (ctx.cr6.gt) goto loc_82D38724;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bne cr6,0x82d38724
	if (!ctx.cr6.eq) goto loc_82D38724;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// blt cr6,0x82d38724
	if (ctx.cr6.lt) goto loc_82D38724;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// bgt cr6,0x82d38724
	if (ctx.cr6.gt) goto loc_82D38724;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82d38724
	if (ctx.cr6.lt) goto loc_82D38724;
	// cmpwi cr6,r25,9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 9, ctx.xer);
	// bgt cr6,0x82d38724
	if (ctx.cr6.gt) goto loc_82D38724;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82d38724
	if (ctx.cr6.lt) goto loc_82D38724;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bgt cr6,0x82d38724
	if (ctx.cr6.gt) goto loc_82D38724;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,5816
	ctx.r5.s64 = 5816;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D387E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82d387f4
	if (!ctx.cr0.eq) goto loc_82D387F4;
loc_82D387EC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x82d38944
	goto loc_82D38944;
loc_82D387F4:
	// addi r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 7;
	// slw r4,r28,r29
	ctx.r4.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r29.u8 & 0x3F));
	// slw r10,r28,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,42
	ctx.r7.s64 = 42;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r6,r4,-1
	ctx.r6.s64 = ctx.r4.s64 + -1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D38858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D38874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D38890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r11,r27,6
	ctx.r11.s64 = ctx.r27.s64 + 6;
	// li r5,4
	ctx.r5.s64 = 4;
	// slw r4,r28,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// stw r4,5780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5780, ctx.r4.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D388B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5780);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82d38924
	if (ctx.cr6.eq) goto loc_82D38924;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38924
	if (ctx.cr6.eq) goto loc_82D38924;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38924
	if (ctx.cr6.eq) goto loc_82D38924;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d38924
	if (ctx.cr6.eq) goto loc_82D38924;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r25,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r25.u32);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,5788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5788, ctx.r10.u32);
	// stw r11,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r9.u8);
	// bl 0x82d38598
	ctx.lr = 0x82D38920;
	sub_82D38598(ctx, base);
	// b 0x82d38944
	goto loc_82D38944;
loc_82D38924:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8932
	ctx.r11.s64 = ctx.r11.s64 + 8932;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82d37580
	ctx.lr = 0x82D3893C;
	sub_82D37580(ctx, base);
	// b 0x82d387ec
	goto loc_82D387EC;
loc_82D38940:
	// li r3,-6
	ctx.r3.s64 = -6;
loc_82D38944:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3894C"))) PPC_WEAK_FUNC(sub_82D3894C);
PPC_FUNC_IMPL(__imp__sub_82D3894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D38950"))) PPC_WEAK_FUNC(sub_82D38950);
PPC_FUNC_IMPL(__imp__sub_82D38950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d389b0
	if (ctx.cr6.eq) goto loc_82D389B0;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d389b0
	if (ctx.cr6.eq) goto loc_82D389B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d49aa8
	ctx.lr = 0x82D389A8;
	sub_82D49AA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d389b4
	goto loc_82D389B4;
loc_82D389B0:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82D389B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D389C4"))) PPC_WEAK_FUNC(sub_82D389C4);
PPC_FUNC_IMPL(__imp__sub_82D389C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D389C8"))) PPC_WEAK_FUNC(sub_82D389C8);
PPC_FUNC_IMPL(__imp__sub_82D389C8) {
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
	// beq cr6,0x82d38a34
	if (ctx.cr6.eq) goto loc_82D38A34;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38a34
	if (ctx.cr6.eq) goto loc_82D38A34;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38a34
	if (ctx.cr6.eq) goto loc_82D38A34;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d38a10
	if (ctx.cr6.eq) goto loc_82D38A10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d4a4a8
	ctx.lr = 0x82D38A10;
	sub_82D4A4A8(ctx, base);
loc_82D38A10:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D38A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82d38a38
	goto loc_82D38A38;
loc_82D38A34:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82D38A38:
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

__attribute__((alias("__imp__sub_82D38A4C"))) PPC_WEAK_FUNC(sub_82D38A4C);
PPC_FUNC_IMPL(__imp__sub_82D38A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D38A50"))) PPC_WEAK_FUNC(sub_82D38A50);
PPC_FUNC_IMPL(__imp__sub_82D38A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D38A58;
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
	// beq cr6,0x82d38ba4
	if (ctx.cr6.eq) goto loc_82D38BA4;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x82d38ba4
	if (!ctx.cr6.eq) goto loc_82D38BA4;
	// cmplwi cr6,r6,56
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 56, ctx.xer);
	// bne cr6,0x82d38ba4
	if (!ctx.cr6.eq) goto loc_82D38BA4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d38a90
	if (!ctx.cr6.eq) goto loc_82D38A90;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x82d38ba8
	goto loc_82D38BA8;
loc_82D38A90:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d38ab4
	if (!ctx.cr6.eq) goto loc_82D38AB4;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r11,r11,-26056
	ctx.r11.s64 = ctx.r11.s64 + -26056;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82D38AB4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d38acc
	if (!ctx.cr6.eq) goto loc_82D38ACC;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,-25960
	ctx.r11.s64 = ctx.r11.s64 + -25960;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82D38ACC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D38AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne 0x82d38af8
	if (!ctx.cr0.eq) goto loc_82D38AF8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x82d38ba8
	goto loc_82D38BA8;
loc_82D38AF8:
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// bge cr6,0x82d38b1c
	if (!ctx.cr6.lt) goto loc_82D38B1C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82D38B1C:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82d38b90
	if (ctx.cr6.lt) goto loc_82D38B90;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x82d38b90
	if (ctx.cr6.gt) goto loc_82D38B90;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d38b4c
	if (ctx.cr6.eq) goto loc_82D38B4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82d38b54
	goto loc_82D38B54;
loc_82D38B4C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,31824
	ctx.r4.s64 = ctx.r11.s64 + 31824;
loc_82D38B54:
	// slw r5,r10,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d49b70
	ctx.lr = 0x82D38B60;
	sub_82D49B70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d38b80
	if (!ctx.cr6.eq) goto loc_82D38B80;
	// li r30,-4
	ctx.r30.s64 = -4;
	// b 0x82d38b94
	goto loc_82D38B94;
loc_82D38B80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d38950
	ctx.lr = 0x82D38B88;
	sub_82D38950(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d38ba8
	goto loc_82D38BA8;
loc_82D38B90:
	// li r30,-2
	ctx.r30.s64 = -2;
loc_82D38B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d389c8
	ctx.lr = 0x82D38B9C;
	sub_82D389C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82d38ba8
	goto loc_82D38BA8;
loc_82D38BA4:
	// li r3,-6
	ctx.r3.s64 = -6;
loc_82D38BA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D38BB0"))) PPC_WEAK_FUNC(sub_82D38BB0);
PPC_FUNC_IMPL(__imp__sub_82D38BB0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82d38a50
	sub_82D38A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D38BC0"))) PPC_WEAK_FUNC(sub_82D38BC0);
PPC_FUNC_IMPL(__imp__sub_82D38BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D38BC8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d38f68
	if (ctx.cr6.eq) goto loc_82D38F68;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38f68
	if (ctx.cr6.eq) goto loc_82D38F68;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38f68
	if (ctx.cr6.eq) goto loc_82D38F68;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// li r29,-5
	ctx.r29.s64 = -5;
	// beq cr6,0x82d38c04
	if (ctx.cr6.eq) goto loc_82D38C04;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82D38C04:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,-5
	ctx.r30.s64 = -5;
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// bgt cr6,0x82d38f68
	if (ctx.cr6.gt) goto loc_82D38F68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// li r28,13
	ctx.r28.s64 = 13;
	// li r27,5
	ctx.r27.s64 = 5;
	// li r22,12
	ctx.r22.s64 = 12;
	// addi r26,r11,4420
	ctx.r26.s64 = ctx.r11.s64 + 4420;
	// addi r25,r10,-25696
	ctx.r25.s64 = ctx.r10.s64 + -25696;
	// addi r24,r9,-25644
	ctx.r24.s64 = ctx.r9.s64 + -25644;
	// addi r23,r8,-25672
	ctx.r23.s64 = ctx.r8.s64 + -25672;
loc_82D38C40:
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,4392
	ctx.r12.s64 = ctx.r12.s64 + 4392;
	// rlwinm r0,r7,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32044
	ctx.r12.s64 = -2100035584;
	// addi r12,r12,-29592
	ctx.r12.s64 = ctx.r12.s64 + -29592;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r7.u64) {
	case 0:
		goto loc_82D38C68;
	case 1:
		goto loc_82D38CF4;
	case 2:
		goto loc_82D38F88;
	case 3:
		goto loc_82D38FD8;
	case 4:
		goto loc_82D39030;
	case 5:
		goto loc_82D39084;
	case 6:
		goto loc_82D390E4;
	case 7:
		goto loc_82D38D6C;
	case 8:
		goto loc_82D38DEC;
	case 9:
		goto loc_82D38E3C;
	case 10:
		goto loc_82D38E94;
	case 11:
		goto loc_82D38EEC;
	case 12:
		goto loc_82D3910C;
	case 13:
		goto loc_82D39114;
	default:
		__builtin_unreachable();
	}
loc_82D38C68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d38cc8
	if (ctx.cr6.eq) goto loc_82D38CC8;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// b 0x82d38f50
	goto loc_82D38F50;
loc_82D38CC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82d38cec
	if (!ctx.cr6.gt) goto loc_82D38CEC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// b 0x82d38f50
	goto loc_82D38F50;
loc_82D38CEC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82D38CF4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divwu r8,r9,r8
	ctx.r8.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mulli r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 * 31;
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82d38d58
	if (ctx.cr0.eq) goto loc_82D38D58;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// b 0x82d38f50
	goto loc_82D38F50;
loc_82D38D58:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d38f7c
	if (!ctx.cr0.eq) goto loc_82D38F7C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82d38f58
	goto loc_82D38F58;
loc_82D38D6C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d49c58
	ctx.lr = 0x82D38D80;
	sub_82D49C58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -3, ctx.xer);
	// bne cr6,0x82d38da0
	if (!ctx.cr6.eq) goto loc_82D38DA0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// b 0x82d38f58
	goto loc_82D38F58;
loc_82D38DA0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d38dac
	if (!ctx.cr6.eq) goto loc_82D38DAC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82D38DAC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82d38f74
	if (!ctx.cr6.eq) goto loc_82D38F74;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d49aa8
	ctx.lr = 0x82D38DCC;
	sub_82D49AA8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d38de4
	if (ctx.cr6.eq) goto loc_82D38DE4;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x82d38f58
	goto loc_82D38F58;
loc_82D38DE4:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82D38DEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82D38E3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82D38E94:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82D38EEC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82d39104
	if (ctx.cr6.eq) goto loc_82D39104;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
loc_82D38F50:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_82D38F58:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// ble cr6,0x82d38c40
	if (!ctx.cr6.gt) goto loc_82D38C40;
loc_82D38F68:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82D38F6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_82D38F74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82d38f6c
	goto loc_82D38F6C;
loc_82D38F7C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82D38F88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82D38FD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82D39030:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
loc_82D39084:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d38f74
	if (ctx.cr6.eq) goto loc_82D38F74;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x82d38f6c
	goto loc_82D38F6C;
loc_82D390E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r10,r10,-24624
	ctx.r10.s64 = ctx.r10.s64 + -24624;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// b 0x82d38f68
	goto loc_82D38F68;
loc_82D39104:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_82D3910C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d38f6c
	goto loc_82D38F6C;
loc_82D39114:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82d38f6c
	goto loc_82D38F6C;
}

__attribute__((alias("__imp__sub_82D3911C"))) PPC_WEAK_FUNC(sub_82D3911C);
PPC_FUNC_IMPL(__imp__sub_82D3911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39120"))) PPC_WEAK_FUNC(sub_82D39120);
PPC_FUNC_IMPL(__imp__sub_82D39120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D39128;
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
	// bl 0x82d2f998
	ctx.lr = 0x82D3913C;
	sub_82D2F998(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3914C;
	sub_82D27D00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D39154"))) PPC_WEAK_FUNC(sub_82D39154);
PPC_FUNC_IMPL(__imp__sub_82D39154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39158"))) PPC_WEAK_FUNC(sub_82D39158);
PPC_FUNC_IMPL(__imp__sub_82D39158) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1548);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// beq 0x82d39194
	if (ctx.cr0.eq) goto loc_82D39194;
	// rlwinm r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x82d391a0
	if (!ctx.cr6.eq) goto loc_82D391A0;
	// b 0x82d3919c
	goto loc_82D3919C;
loc_82D39194:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d391a0
	if (ctx.cr0.eq) goto loc_82D391A0;
loc_82D3919C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D391A0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D391B0;
	sub_82D2F998(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d391f8
	if (ctx.cr6.eq) goto loc_82D391F8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,1536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d391fc
	goto loc_82D391FC;
loc_82D391F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D391FC:
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

__attribute__((alias("__imp__sub_82D39214"))) PPC_WEAK_FUNC(sub_82D39214);
PPC_FUNC_IMPL(__imp__sub_82D39214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39218"))) PPC_WEAK_FUNC(sub_82D39218);
PPC_FUNC_IMPL(__imp__sub_82D39218) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x82d392a8
	if (ctx.cr6.lt) goto loc_82D392A8;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82d392a8
	if (ctx.cr6.gt) goto loc_82D392A8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x82d3923c
	if (!ctx.cr6.gt) goto loc_82D3923C;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x82d392a8
	if (ctx.cr6.lt) goto loc_82D392A8;
loc_82D3923C:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x82d392a8
	if (ctx.cr6.lt) goto loc_82D392A8;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82d392a8
	if (ctx.cr6.gt) goto loc_82D392A8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x82d39260
	if (!ctx.cr6.gt) goto loc_82D39260;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x82d392a8
	if (ctx.cr6.lt) goto loc_82D392A8;
loc_82D39260:
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x82d392a8
	if (ctx.cr6.lt) goto loc_82D392A8;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82d392a8
	if (ctx.cr6.gt) goto loc_82D392A8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x82d39284
	if (!ctx.cr6.gt) goto loc_82D39284;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x82d392a8
	if (ctx.cr6.lt) goto loc_82D392A8;
loc_82D39284:
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x82d392a8
	if (ctx.cr6.lt) goto loc_82D392A8;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82d392a8
	if (ctx.cr6.gt) goto loc_82D392A8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82D392A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4564
	ctx.r4.s64 = ctx.r11.s64 + 4564;
	// b 0x82d27b38
	sub_82D27B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D392B4"))) PPC_WEAK_FUNC(sub_82D392B4);
PPC_FUNC_IMPL(__imp__sub_82D392B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D392B8"))) PPC_WEAK_FUNC(sub_82D392B8);
PPC_FUNC_IMPL(__imp__sub_82D392B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D392C0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r25,255
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 255, ctx.xer);
	// lbz r9,1531(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1531);
	// lwz r10,1500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// bne cr6,0x82d392fc
	if (!ctx.cr6.eq) goto loc_82D392FC;
	// lwz r8,1464(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ca2c60
	ctx.lr = 0x82D392F8;
	sub_82CA2C60(ctx, base);
	// b 0x82d3950c
	goto loc_82D3950C;
loc_82D392FC:
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82d39488
	if (ctx.cr6.eq) goto loc_82D39488;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82d39400
	if (ctx.cr6.eq) goto loc_82D39400;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x82d39378
	if (ctx.cr6.eq) goto loc_82D39378;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r29,r9,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// li r28,128
	ctx.r28.s64 = 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3950c
	if (ctx.cr6.eq) goto loc_82D3950C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82D39334:
	// clrlwi r27,r28,24
	ctx.r27.u64 = ctx.r28.u32 & 0xFF;
	// and. r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d39350
	if (ctx.cr0.eq) goto loc_82D39350;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D39350;
	sub_82CA2C60(ctx, base);
loc_82D39350:
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82d39368
	if (!ctx.cr6.eq) goto loc_82D39368;
	// li r28,128
	ctx.r28.s64 = 128;
	// b 0x82d3936c
	goto loc_82D3936C;
loc_82D39368:
	// rlwinm r28,r28,31,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7F;
loc_82D3936C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82d39334
	if (!ctx.cr0.eq) goto loc_82D39334;
	// b 0x82d3950c
	goto loc_82D3950C;
loc_82D39378:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3950c
	if (ctx.cr6.eq) goto loc_82D3950C;
loc_82D3938C:
	// and. r7,r8,r25
	ctx.r7.u64 = ctx.r8.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82d393c4
	if (ctx.cr0.eq) goto loc_82D393C4;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// subfic r5,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r10.s64;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// li r6,3855
	ctx.r6.s64 = 3855;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// sraw r6,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// and r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ctx.r3.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
loc_82D393C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d393dc
	if (!ctx.cr6.eq) goto loc_82D393DC;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82d393e0
	goto loc_82D393E0;
loc_82D393DC:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82D393E0:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82d393f0
	if (!ctx.cr6.eq) goto loc_82D393F0;
	// li r8,128
	ctx.r8.s64 = 128;
	// b 0x82d393f4
	goto loc_82D393F4;
loc_82D393F0:
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
loc_82D393F4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3938c
	if (!ctx.cr0.eq) goto loc_82D3938C;
	// b 0x82d3950c
	goto loc_82D3950C;
loc_82D39400:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r10,6
	ctx.r10.s64 = 6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3950c
	if (ctx.cr6.eq) goto loc_82D3950C;
loc_82D39414:
	// and. r7,r8,r25
	ctx.r7.u64 = ctx.r8.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82d3944c
	if (ctx.cr0.eq) goto loc_82D3944C;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// subfic r5,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r5.s64 = 6 - ctx.r10.s64;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// li r6,16191
	ctx.r6.s64 = 16191;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// sraw r6,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// and r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ctx.r3.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
loc_82D3944C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d39464
	if (!ctx.cr6.eq) goto loc_82D39464;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82d39468
	goto loc_82D39468;
loc_82D39464:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82D39468:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82d39478
	if (!ctx.cr6.eq) goto loc_82D39478;
	// li r8,128
	ctx.r8.s64 = 128;
	// b 0x82d3947c
	goto loc_82D3947C;
loc_82D39478:
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
loc_82D3947C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d39414
	if (!ctx.cr0.eq) goto loc_82D39414;
	// b 0x82d3950c
	goto loc_82D3950C;
loc_82D39488:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r10,7
	ctx.r10.s64 = 7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3950c
	if (ctx.cr6.eq) goto loc_82D3950C;
loc_82D3949C:
	// and. r7,r8,r25
	ctx.r7.u64 = ctx.r8.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82d394d4
	if (ctx.cr0.eq) goto loc_82D394D4;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// subfic r5,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r5.s64 = 7 - ctx.r10.s64;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// li r6,32639
	ctx.r6.s64 = 32639;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// sraw r6,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// and r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ctx.r3.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
loc_82D394D4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d394ec
	if (!ctx.cr6.eq) goto loc_82D394EC;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82d394f0
	goto loc_82D394F0;
loc_82D394EC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82D394F0:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82d39500
	if (!ctx.cr6.eq) goto loc_82D39500;
	// li r8,128
	ctx.r8.s64 = 128;
	// b 0x82d39504
	goto loc_82D39504;
loc_82D39500:
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
loc_82D39504:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3949c
	if (!ctx.cr0.eq) goto loc_82D3949C;
loc_82D3950C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D39514"))) PPC_WEAK_FUNC(sub_82D39514);
PPC_FUNC_IMPL(__imp__sub_82D39514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39518"))) PPC_WEAK_FUNC(sub_82D39518);
PPC_FUNC_IMPL(__imp__sub_82D39518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D39520;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d39858
	if (ctx.cr6.eq) goto loc_82D39858;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82d39858
	if (ctx.cr6.eq) goto loc_82D39858;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,11(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11);
	// addi r9,r9,4472
	ctx.r9.s64 = ctx.r9.s64 + 4472;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwzx r25,r8,r9
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r26,r11,r25
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// beq cr6,0x82d3977c
	if (ctx.cr6.eq) goto loc_82D3977C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82d396ac
	if (ctx.cr6.eq) goto loc_82D396AC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82d395e4
	if (ctx.cr6.eq) goto loc_82D395E4;
	// rlwinm r31,r10,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r26,-1
	ctx.r8.s64 = ctx.r26.s64 + -1;
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// add r30,r9,r4
	ctx.r30.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r27,r10,r4
	ctx.r27.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d39840
	if (ctx.cr6.eq) goto loc_82D39840;
loc_82D39594:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca2c60
	ctx.lr = 0x82D395A4;
	sub_82CA2C60(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82d395cc
	if (!ctx.cr6.gt) goto loc_82D395CC;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82D395B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D395C0;
	sub_82CA2C60(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// bne 0x82d395b0
	if (!ctx.cr0.eq) goto loc_82D395B0;
loc_82D395CC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d39594
	if (ctx.cr6.lt) goto loc_82D39594;
	// b 0x82d39840
	goto loc_82D39840;
loc_82D395E4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r6,r26,-1
	ctx.r6.s64 = ctx.r26.s64 + -1;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r8,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r6,r6,2,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x4;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r8,r8,4
	ctx.xer.ca = ctx.r8.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r8.s64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subfic r10,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r6.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d39840
	if (ctx.cr6.eq) goto loc_82D39840;
loc_82D39620:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// ble cr6,0x82d39680
	if (!ctx.cr6.gt) goto loc_82D39680;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_82D39640:
	// subfic r4,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r10.s64;
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r31,3855
	ctx.r31.s64 = 3855;
	// slw r30,r11,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r4,r31,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r4.s64 = ctx.r31.s32 >> temp.u32;
	// and r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// bne cr6,0x82d39674
	if (!ctx.cr6.eq) goto loc_82D39674;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82d39678
	goto loc_82D39678;
loc_82D39674:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82D39678:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82d39640
	if (!ctx.cr0.eq) goto loc_82D39640;
loc_82D39680:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x82d39694
	if (!ctx.cr6.eq) goto loc_82D39694;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x82d39698
	goto loc_82D39698;
loc_82D39694:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_82D39698:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d39620
	if (ctx.cr6.lt) goto loc_82D39620;
	// b 0x82d39840
	goto loc_82D39840;
loc_82D396AC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r26,-1
	ctx.r9.s64 = ctx.r26.s64 + -1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// subfic r5,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r5.s64 = 3 - ctx.r10.s64;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r7,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r6,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	ctx.r6.s64 = 3 - ctx.r6.s64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d39840
	if (ctx.cr6.eq) goto loc_82D39840;
loc_82D396F0:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// ble cr6,0x82d39750
	if (!ctx.cr6.gt) goto loc_82D39750;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_82D39710:
	// subfic r4,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r4.s64 = 6 - ctx.r10.s64;
	// lbz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// li r31,16191
	ctx.r31.s64 = 16191;
	// slw r30,r11,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r4,r31,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r4.s64 = ctx.r31.s32 >> temp.u32;
	// and r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// bne cr6,0x82d39744
	if (!ctx.cr6.eq) goto loc_82D39744;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82d39748
	goto loc_82D39748;
loc_82D39744:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82D39748:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82d39710
	if (!ctx.cr0.eq) goto loc_82D39710;
loc_82D39750:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x82d39764
	if (!ctx.cr6.eq) goto loc_82D39764;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x82d39768
	goto loc_82D39768;
loc_82D39764:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_82D39768:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d396f0
	if (ctx.cr6.lt) goto loc_82D396F0;
	// b 0x82d39840
	goto loc_82D39840;
loc_82D3977C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r6,r26,-1
	ctx.r6.s64 = ctx.r26.s64 + -1;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r6,r6,29
	ctx.r6.u64 = ctx.r6.u32 & 0x7;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r8,r8,7
	ctx.xer.ca = ctx.r8.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r8.s64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subfic r10,r6,7
	ctx.xer.ca = ctx.r6.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r6.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d39840
	if (ctx.cr6.eq) goto loc_82D39840;
loc_82D397B8:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// ble cr6,0x82d39818
	if (!ctx.cr6.gt) goto loc_82D39818;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_82D397D8:
	// subfic r4,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r4.s64 = 7 - ctx.r10.s64;
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r31,32639
	ctx.r31.s64 = 32639;
	// slw r30,r11,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r4,r31,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r4.s64 = ctx.r31.s32 >> temp.u32;
	// and r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// bne cr6,0x82d3980c
	if (!ctx.cr6.eq) goto loc_82D3980C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82d39810
	goto loc_82D39810;
loc_82D3980C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82D39810:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82d397d8
	if (!ctx.cr0.eq) goto loc_82D397D8;
loc_82D39818:
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x82d3982c
	if (!ctx.cr6.eq) goto loc_82D3982C;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x82d39830
	goto loc_82D39830;
loc_82D3982C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82D39830:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d397b8
	if (ctx.cr6.lt) goto loc_82D397B8;
loc_82D39840:
	// lbz r11,11(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11);
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
loc_82D39858:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D39860"))) PPC_WEAK_FUNC(sub_82D39860);
PPC_FUNC_IMPL(__imp__sub_82D39860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D39868;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x82d39a7c
	if (ctx.cr6.lt) goto loc_82D39A7C;
	// beq cr6,0x82d39a38
	if (ctx.cr6.eq) goto loc_82D39A38;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x82d39a04
	if (ctx.cr6.lt) goto loc_82D39A04;
	// beq cr6,0x82d39980
	if (ctx.cr6.eq) goto loc_82D39980;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// blt cr6,0x82d398ac
	if (ctx.cr6.lt) goto loc_82D398AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4584
	ctx.r4.s64 = ctx.r11.s64 + 4584;
	// bl 0x82d27b20
	ctx.lr = 0x82D398A0;
	sub_82D27B20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82d39a7c
	goto loc_82D39A7C;
loc_82D398AC:
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// beq 0x82d398ec
	if (ctx.cr0.eq) goto loc_82D398EC;
loc_82D398CC:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r8,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r8.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x82d398cc
	if (!ctx.cr0.eq) goto loc_82D398CC;
loc_82D398EC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d39a7c
	if (ctx.cr6.eq) goto loc_82D39A7C;
loc_82D398F4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf. r11,r7,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r7,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r7.s64;
	// neg r30,r11
	ctx.r30.s64 = -ctx.r11.s64;
	// blt 0x82d39920
	if (ctx.cr0.lt) goto loc_82D39920;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D39920:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// neg r4,r8
	ctx.r4.s64 = -ctx.r8.s64;
	// blt cr6,0x82d39930
	if (ctx.cr6.lt) goto loc_82D39930;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82D39930:
	// add. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82d3993c
	if (!ctx.cr0.lt) goto loc_82D3993C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D3993C:
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82d39954
	if (ctx.cr6.gt) goto loc_82D39954;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82d39954
	if (ctx.cr6.gt) goto loc_82D39954;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82d39964
	goto loc_82D39964;
loc_82D39954:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ble cr6,0x82d39964
	if (!ctx.cr6.gt) goto loc_82D39964;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82D39964:
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x82d398f4
	if (!ctx.cr0.eq) goto loc_82D398F4;
	// b 0x82d39a7c
	goto loc_82D39A7C;
loc_82D39980:
	// lbz r9,11(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// srawi. r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// beq 0x82d399c0
	if (ctx.cr0.eq) goto loc_82D399C0;
loc_82D3999C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82d3999c
	if (!ctx.cr0.eq) goto loc_82D3999C;
loc_82D399C0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d39a7c
	if (ctx.cr6.eq) goto loc_82D39A7C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82D399CC:
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82d399cc
	if (!ctx.cr0.eq) goto loc_82D399CC;
	// b 0x82d39a7c
	goto loc_82D39A7C;
loc_82D39A04:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d39a7c
	if (ctx.cr6.eq) goto loc_82D39A7C;
loc_82D39A14:
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// blt cr6,0x82d39a14
	if (ctx.cr6.lt) goto loc_82D39A14;
	// b 0x82d39a7c
	goto loc_82D39A7C;
loc_82D39A38:
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82d39a7c
	if (!ctx.cr6.lt) goto loc_82D39A7C;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_82D39A5C:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82d39a5c
	if (!ctx.cr0.eq) goto loc_82D39A5C;
loc_82D39A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D39A84"))) PPC_WEAK_FUNC(sub_82D39A84);
PPC_FUNC_IMPL(__imp__sub_82D39A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39A88"))) PPC_WEAK_FUNC(sub_82D39A88);
PPC_FUNC_IMPL(__imp__sub_82D39A88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// bl 0x82d2f650
	ctx.lr = 0x82D39AA8;
	sub_82D2F650(ctx, base);
	// lbz r11,1555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82d39b1c
	if (ctx.cr0.eq) goto loc_82D39B1C;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// bne 0x82d39acc
	if (!ctx.cr0.eq) goto loc_82D39ACC;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82D39ACC:
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// addi r11,r11,4444
	ctx.r11.s64 = ctx.r11.s64 + 4444;
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r8,1561(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1561);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r11,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d39b30
	goto loc_82D39B30;
loc_82D39B1C:
	// lwz r10,1468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// stw r9,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r9.u32);
loc_82D39B30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,1376(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// rlwinm. r10,r8,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r11,1561(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1561);
	// beq 0x82d39b58
	if (ctx.cr0.eq) goto loc_82D39B58;
	// lbz r10,1559(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1559);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82d39b58
	if (!ctx.cr6.lt) goto loc_82D39B58;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82D39B58:
	// rlwinm. r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d39bcc
	if (ctx.cr0.eq) goto loc_82D39BCC;
	// lbz r10,1558(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82d39b84
	if (!ctx.cr6.eq) goto loc_82D39B84;
	// lhz r11,1546(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1546);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82d39bcc
	goto loc_82D39BCC;
loc_82D39B84:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d39bac
	if (!ctx.cr6.eq) goto loc_82D39BAC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82d39b98
	if (!ctx.cr6.lt) goto loc_82D39B98;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82D39B98:
	// lhz r10,1546(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1546);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82d39bcc
	if (ctx.cr0.eq) goto loc_82D39BCC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82d39bcc
	goto loc_82D39BCC;
loc_82D39BAC:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82d39bcc
	if (!ctx.cr6.eq) goto loc_82D39BCC;
	// lhz r10,1546(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1546);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82d39bcc
	if (ctx.cr0.eq) goto loc_82D39BCC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
loc_82D39BCC:
	// rlwinm. r10,r8,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d39c18
	if (ctx.cr0.eq) goto loc_82D39C18;
	// lbz r10,1558(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82d39bf8
	if (ctx.cr6.eq) goto loc_82D39BF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d39c00
	if (!ctx.cr6.eq) goto loc_82D39C00;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82d39bf8
	if (ctx.cr6.gt) goto loc_82D39BF8;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82d39c18
	goto loc_82D39C18;
loc_82D39BF8:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82d39c18
	goto loc_82D39C18;
loc_82D39C00:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82d39c18
	if (!ctx.cr6.eq) goto loc_82D39C18;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// ble cr6,0x82d39c18
	if (!ctx.cr6.gt) goto loc_82D39C18;
	// li r11,64
	ctx.r11.s64 = 64;
loc_82D39C18:
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r8,r10,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d31c90
	ctx.lr = 0x82D39C44;
	sub_82D31C90(ctx, base);
	// stw r3,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r3.u32);
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d31c90
	ctx.lr = 0x82D39C58;
	sub_82D31C90(ctx, base);
	// stw r3,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r3.u32);
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d31d38
	ctx.lr = 0x82D39C74;
	sub_82D31D38(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D39C94"))) PPC_WEAK_FUNC(sub_82D39C94);
PPC_FUNC_IMPL(__imp__sub_82D39C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39C98"))) PPC_WEAK_FUNC(sub_82D39C98);
PPC_FUNC_IMPL(__imp__sub_82D39C98) {
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82d39cec
	if (!ctx.cr6.gt) goto loc_82D39CEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4620
	ctx.r4.s64 = ctx.r11.s64 + 4620;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39CEC;
	sub_82D27AE8(ctx, base);
loc_82D39CEC:
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

__attribute__((alias("__imp__sub_82D39D04"))) PPC_WEAK_FUNC(sub_82D39D04);
PPC_FUNC_IMPL(__imp__sub_82D39D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39D08"))) PPC_WEAK_FUNC(sub_82D39D08);
PPC_FUNC_IMPL(__imp__sub_82D39D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D39D10;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,1440(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82d39d5c
	if (!ctx.cr6.gt) goto loc_82D39D5C;
loc_82D39D28:
	// lwz r28,1440(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,1436(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D39D40;
	sub_82D2F998(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D39D50;
	sub_82D27D00(ctx, base);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82d39d28
	if (ctx.cr6.gt) goto loc_82D39D28;
loc_82D39D5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d39d88
	if (ctx.cr6.eq) goto loc_82D39D88;
	// lwz r29,1436(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D39D78;
	sub_82D2F998(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D39D88;
	sub_82D27D00(ctx, base);
loc_82D39D88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39158
	ctx.lr = 0x82D39D90;
	sub_82D39158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82d39df0
	if (ctx.cr0.eq) goto loc_82D39DF0;
	// lbz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1548);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d39db0
	if (ctx.cr0.eq) goto loc_82D39DB0;
	// lwz r10,1372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d39dc4
	if (ctx.cr0.eq) goto loc_82D39DC4;
loc_82D39DB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d39dd8
	if (!ctx.cr6.eq) goto loc_82D39DD8;
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d39dd8
	if (ctx.cr0.eq) goto loc_82D39DD8;
loc_82D39DC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4656
	ctx.r4.s64 = ctx.r11.s64 + 4656;
	// bl 0x82d27b80
	ctx.lr = 0x82D39DD4;
	sub_82D27B80(ctx, base);
	// b 0x82d39de8
	goto loc_82D39DE8;
loc_82D39DD8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4656
	ctx.r4.s64 = ctx.r11.s64 + 4656;
	// bl 0x82d27b38
	ctx.lr = 0x82D39DE8;
	sub_82D27B38(ctx, base);
loc_82D39DE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d39df4
	goto loc_82D39DF4;
loc_82D39DF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D39DF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D39DFC"))) PPC_WEAK_FUNC(sub_82D39DFC);
PPC_FUNC_IMPL(__imp__sub_82D39DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D39E00"))) PPC_WEAK_FUNC(sub_82D39E00);
PPC_FUNC_IMPL(__imp__sub_82D39E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D39E08;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d39e30
	if (ctx.cr6.eq) goto loc_82D39E30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4928
	ctx.r4.s64 = ctx.r11.s64 + 4928;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39E30;
	sub_82D27AE8(ctx, base);
loc_82D39E30:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// beq cr6,0x82d39e48
	if (ctx.cr6.eq) goto loc_82D39E48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4908
	ctx.r4.s64 = ctx.r11.s64 + 4908;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39E48;
	sub_82D27AE8(ctx, base);
loc_82D39E48:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// bl 0x82d2f998
	ctx.lr = 0x82D39E64;
	sub_82D2F998(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D39E74;
	sub_82D27D00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D39E80;
	sub_82D39D08(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r9,97(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r7,101(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,98(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,102(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lbz r4,103(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r11,r4
	ctx.r27.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r7,99(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r29,105(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// add. r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r25,106(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r24,107(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// beq 0x82d39f10
	if (ctx.cr0.eq) goto loc_82D39F10;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d39f10
	if (ctx.cr6.gt) goto loc_82D39F10;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d39f10
	if (ctx.cr6.eq) goto loc_82D39F10;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d39f20
	if (!ctx.cr6.gt) goto loc_82D39F20;
loc_82D39F10:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4880
	ctx.r4.s64 = ctx.r11.s64 + 4880;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39F20;
	sub_82D27AE8(ctx, base);
loc_82D39F20:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82d39f58
	if (ctx.cr6.eq) goto loc_82D39F58;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82d39f58
	if (ctx.cr6.eq) goto loc_82D39F58;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82d39f58
	if (ctx.cr6.eq) goto loc_82D39F58;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82d39f58
	if (ctx.cr6.eq) goto loc_82D39F58;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x82d39f58
	if (ctx.cr6.eq) goto loc_82D39F58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4852
	ctx.r4.s64 = ctx.r11.s64 + 4852;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39F58;
	sub_82D27AE8(ctx, base);
loc_82D39F58:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d39f78
	if (ctx.cr6.lt) goto loc_82D39F78;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82d39f78
	if (ctx.cr6.eq) goto loc_82D39F78;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x82d39f78
	if (ctx.cr6.eq) goto loc_82D39F78;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// ble cr6,0x82d39f88
	if (!ctx.cr6.gt) goto loc_82D39F88;
loc_82D39F78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4824
	ctx.r4.s64 = ctx.r11.s64 + 4824;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39F88;
	sub_82D27AE8(ctx, base);
loc_82D39F88:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82d39f98
	if (!ctx.cr6.eq) goto loc_82D39F98;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bgt cr6,0x82d39fb8
	if (ctx.cr6.gt) goto loc_82D39FB8;
loc_82D39F98:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82d39fb0
	if (ctx.cr6.eq) goto loc_82D39FB0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x82d39fb0
	if (ctx.cr6.eq) goto loc_82D39FB0;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x82d39fc8
	if (!ctx.cr6.eq) goto loc_82D39FC8;
loc_82D39FB0:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bge cr6,0x82d39fc8
	if (!ctx.cr6.lt) goto loc_82D39FC8;
loc_82D39FB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4772
	ctx.r4.s64 = ctx.r11.s64 + 4772;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39FC8;
	sub_82D27AE8(ctx, base);
loc_82D39FC8:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x82d39fe0
	if (ctx.cr6.lt) goto loc_82D39FE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4736
	ctx.r4.s64 = ctx.r11.s64 + 4736;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39FE0;
	sub_82D27AE8(ctx, base);
loc_82D39FE0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82d39ff8
	if (ctx.cr6.eq) goto loc_82D39FF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4700
	ctx.r4.s64 = ctx.r11.s64 + 4700;
	// bl 0x82d27ae8
	ctx.lr = 0x82D39FF8;
	sub_82D27AE8(ctx, base);
loc_82D39FF8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82d3a010
	if (ctx.cr6.eq) goto loc_82D3A010;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4668
	ctx.r4.s64 = ctx.r11.s64 + 4668;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A010;
	sub_82D27AE8(ctx, base);
loc_82D3A010:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// stw r27,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r27.u32);
	// stb r11,1558(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1558, ctx.r11.u8);
	// stb r10,1559(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1559, ctx.r10.u8);
	// stb r26,1555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1555, ctx.r26.u8);
	// beq 0x82d3a068
	if (ctx.cr0.eq) goto loc_82D3A068;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d3a060
	if (ctx.cr6.eq) goto loc_82D3A060;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82d3a068
	if (ctx.cr6.eq) goto loc_82D3A068;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82d3a058
	if (ctx.cr6.eq) goto loc_82D3A058;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82d3a070
	if (!ctx.cr6.eq) goto loc_82D3A070;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82d3a06c
	goto loc_82D3A06C;
loc_82D3A058:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82d3a06c
	goto loc_82D3A06C;
loc_82D3A060:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82d3a06c
	goto loc_82D3A06C;
loc_82D3A068:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D3A06C:
	// stb r11,1562(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1562, ctx.r11.u8);
loc_82D3A070:
	// lbz r11,1562(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1562);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1561, ctx.r11.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2c978
	ctx.lr = 0x82D3A0BC;
	sub_82D2C978(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D3A0C4"))) PPC_WEAK_FUNC(sub_82D3A0C4);
PPC_FUNC_IMPL(__imp__sub_82D3A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3A0C8"))) PPC_WEAK_FUNC(sub_82D3A0C8);
PPC_FUNC_IMPL(__imp__sub_82D3A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D3A0D0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82d3a0f8
	if (!ctx.cr0.eq) goto loc_82D3A0F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5060
	ctx.r4.s64 = ctx.r11.s64 + 5060;
	// b 0x82d3a130
	goto loc_82D3A130;
loc_82D3A0F8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d3a120
	if (ctx.cr0.eq) goto loc_82D3A120;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5036
	ctx.r4.s64 = ctx.r11.s64 + 5036;
loc_82D3A10C:
	// bl 0x82d27b20
	ctx.lr = 0x82D3A110;
	sub_82D27B20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A11C;
	sub_82D39D08(ctx, base);
	// b 0x82d3a27c
	goto loc_82D3A27C;
loc_82D3A120:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a138
	if (ctx.cr0.eq) goto loc_82D3A138;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5012
	ctx.r4.s64 = ctx.r11.s64 + 5012;
loc_82D3A130:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A138;
	sub_82D27AE8(ctx, base);
loc_82D3A138:
	// li r29,3
	ctx.r29.s64 = 3;
	// lwz r10,1368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// divwu r9,r30,r29
	ctx.r9.u32 = ctx.r30.u32 / ctx.r29.u32;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// stw r10,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r10.u32);
	// subf. r10,r9,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,4988
	ctx.r27.s64 = ctx.r11.s64 + 4988;
	// beq 0x82d3a184
	if (ctx.cr0.eq) goto loc_82D3A184;
	// lbz r11,1558(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82d3a17c
	if (ctx.cr6.eq) goto loc_82D3A17C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4988
	ctx.r4.s64 = ctx.r11.s64 + 4988;
	// b 0x82d3a10c
	goto loc_82D3A10C;
loc_82D3A17C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A184;
	sub_82D27AE8(ctx, base);
loc_82D3A184:
	// divw r29,r30,r29
	ctx.r29.s32 = ctx.r30.s32 / ctx.r29.s32;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d27c48
	ctx.lr = 0x82D3A198;
	sub_82D27C48(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82d3a1ac
	if (!ctx.cr0.eq) goto loc_82D3A1AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A1AC;
	sub_82D27AE8(ctx, base);
loc_82D3A1AC:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
	// ble cr6,0x82d3a20c
	if (!ctx.cr6.gt) goto loc_82D3A20C;
	// addi r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 2;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82D3A1C8:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D3A1D8;
	sub_82D2F998(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3A1E8;
	sub_82D27D00(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stb r11,-2(r30)
	PPC_STORE_U8(ctx.r30.u32 + -2, ctx.r11.u8);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r11,-1(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1, ctx.r11.u8);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// bne 0x82d3a1c8
	if (!ctx.cr0.eq) goto loc_82D3A1C8;
loc_82D3A20C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A218;
	sub_82D39D08(ctx, base);
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
	// sth r29,1544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1544, ctx.r29.u16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2ca98
	ctx.lr = 0x82D3A234;
	sub_82D2CA98(ctx, base);
	// lbz r11,1558(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82d3a27c
	if (!ctx.cr6.eq) goto loc_82D3A27C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d3a27c
	if (ctx.cr6.eq) goto loc_82D3A27C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a27c
	if (ctx.cr0.eq) goto loc_82D3A27C;
	// lhz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1544);
	// lhz r10,1546(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1546);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d3a27c
	if (!ctx.cr6.gt) goto loc_82D3A27C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4948
	ctx.r4.s64 = ctx.r11.s64 + 4948;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A274;
	sub_82D27B20(ctx, base);
	// lhz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1544);
	// sth r11,1546(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1546, ctx.r11.u16);
loc_82D3A27C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D3A284"))) PPC_WEAK_FUNC(sub_82D3A284);
PPC_FUNC_IMPL(__imp__sub_82D3A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3A288"))) PPC_WEAK_FUNC(sub_82D3A288);
PPC_FUNC_IMPL(__imp__sub_82D3A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3A290;
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
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d3a2b4
	if (ctx.cr0.eq) goto loc_82D3A2B4;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3a2cc
	if (!ctx.cr0.eq) goto loc_82D3A2CC;
loc_82D3A2B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5116
	ctx.r4.s64 = ctx.r11.s64 + 5116;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A2C4;
	sub_82D27AE8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d3a2fc
	if (ctx.cr6.eq) goto loc_82D3A2FC;
loc_82D3A2CC:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// beq cr6,0x82d3a2f0
	if (ctx.cr6.eq) goto loc_82D3A2F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5088
	ctx.r4.s64 = ctx.r11.s64 + 5088;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A2F0;
	sub_82D27B20(ctx, base);
loc_82D3A2F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A2FC;
	sub_82D39D08(ctx, base);
loc_82D3A2FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3A304"))) PPC_WEAK_FUNC(sub_82D3A304);
PPC_FUNC_IMPL(__imp__sub_82D3A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3A308"))) PPC_WEAK_FUNC(sub_82D3A308);
PPC_FUNC_IMPL(__imp__sub_82D3A308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3A310;
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
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82d3a350
	if (!ctx.cr0.eq) goto loc_82D3A350;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5308
	ctx.r4.s64 = ctx.r11.s64 + 5308;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A338;
	sub_82D27AE8(ctx, base);
loc_82D3A338:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82d3a3bc
	if (ctx.cr6.eq) goto loc_82D3A3BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5280
	ctx.r4.s64 = ctx.r11.s64 + 5280;
	// b 0x82d3a364
	goto loc_82D3A364;
loc_82D3A350:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d3a378
	if (ctx.cr0.eq) goto loc_82D3A378;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5256
	ctx.r4.s64 = ctx.r11.s64 + 5256;
loc_82D3A360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D3A364:
	// bl 0x82d27b20
	ctx.lr = 0x82D3A368;
	sub_82D27B20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A374;
	sub_82D39D08(ctx, base);
	// b 0x82d3a49c
	goto loc_82D3A49C;
loc_82D3A378:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a394
	if (ctx.cr0.eq) goto loc_82D3A394;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5232
	ctx.r4.s64 = ctx.r11.s64 + 5232;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A390;
	sub_82D27B20(ctx, base);
	// b 0x82d3a338
	goto loc_82D3A338;
loc_82D3A394:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d3a338
	if (ctx.cr6.eq) goto loc_82D3A338;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d3a338
	if (ctx.cr0.eq) goto loc_82D3A338;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3a338
	if (!ctx.cr0.eq) goto loc_82D3A338;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5208
	ctx.r4.s64 = ctx.r11.s64 + 5208;
	// b 0x82d3a360
	goto loc_82D3A360;
loc_82D3A3BC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2f998
	ctx.lr = 0x82D3A3C8;
	sub_82D2F998(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3A3D8;
	sub_82D27D00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A3E4;
	sub_82D39D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82d3a49c
	if (!ctx.cr0.eq) goto loc_82D3A49C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a49c
	if (ctx.cr0.eq) goto loc_82D3A49C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d3a46c
	if (ctx.cr0.eq) goto loc_82D3A46C;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfd f0,5200(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 5200);
	// lfd f13,5192(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5192);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d3a46c
	if (!ctx.cr6.gt) goto loc_82D3A46C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5136
	ctx.r4.s64 = ctx.r11.s64 + 5136;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A468;
	sub_82D27B20(ctx, base);
	// b 0x82d3a49c
	goto loc_82D3A49C;
loc_82D3A46C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2752);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,1584(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// bl 0x82d2c950
	ctx.lr = 0x82D3A49C;
	sub_82D2C950(ctx, base);
loc_82D3A49C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3A4A4"))) PPC_WEAK_FUNC(sub_82D3A4A4);
PPC_FUNC_IMPL(__imp__sub_82D3A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3A4A8"))) PPC_WEAK_FUNC(sub_82D3A4A8);
PPC_FUNC_IMPL(__imp__sub_82D3A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3A4B0;
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
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82d3a4f0
	if (!ctx.cr0.eq) goto loc_82D3A4F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5456
	ctx.r4.s64 = ctx.r11.s64 + 5456;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A4D8;
	sub_82D27AE8(ctx, base);
loc_82D3A4D8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82d3a554
	if (ctx.cr6.eq) goto loc_82D3A554;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5428
	ctx.r4.s64 = ctx.r11.s64 + 5428;
	// b 0x82d3a504
	goto loc_82D3A504;
loc_82D3A4F0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d3a518
	if (ctx.cr0.eq) goto loc_82D3A518;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5404
	ctx.r4.s64 = ctx.r11.s64 + 5404;
loc_82D3A500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D3A504:
	// bl 0x82d27b20
	ctx.lr = 0x82D3A508;
	sub_82D27B20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A514;
	sub_82D39D08(ctx, base);
	// b 0x82d3a60c
	goto loc_82D3A60C;
loc_82D3A518:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a534
	if (ctx.cr0.eq) goto loc_82D3A534;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5380
	ctx.r4.s64 = ctx.r11.s64 + 5380;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A530;
	sub_82D27B20(ctx, base);
	// b 0x82d3a4d8
	goto loc_82D3A4D8;
loc_82D3A534:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d3a4d8
	if (ctx.cr6.eq) goto loc_82D3A4D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a4d8
	if (ctx.cr0.eq) goto loc_82D3A4D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5356
	ctx.r4.s64 = ctx.r11.s64 + 5356;
	// b 0x82d3a500
	goto loc_82D3A500;
loc_82D3A554:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2f998
	ctx.lr = 0x82D3A560;
	sub_82D2F998(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3A570;
	sub_82D27D00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A57C;
	sub_82D39D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82d3a60c
	if (!ctx.cr0.eq) goto loc_82D3A60C;
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82d3a5a4
	if (ctx.cr6.lt) goto loc_82D3A5A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5336
	ctx.r4.s64 = ctx.r11.s64 + 5336;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A5A0;
	sub_82D27B20(ctx, base);
	// b 0x82d3a60c
	goto loc_82D3A60C;
loc_82D3A5A4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a5fc
	if (ctx.cr0.eq) goto loc_82D3A5FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,2748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2748);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfd f0,3368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3368);
	// lfd f13,5200(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 5200);
	// lfd f12,5192(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 5192);
	// fadd f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d3a5fc
	if (!ctx.cr6.gt) goto loc_82D3A5FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5136
	ctx.r4.s64 = ctx.r11.s64 + 5136;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A5FC;
	sub_82D27B20(ctx, base);
loc_82D3A5FC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2cae8
	ctx.lr = 0x82D3A60C;
	sub_82D2CAE8(ctx, base);
loc_82D3A60C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3A614"))) PPC_WEAK_FUNC(sub_82D3A614);
PPC_FUNC_IMPL(__imp__sub_82D3A614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3A618"))) PPC_WEAK_FUNC(sub_82D3A618);
PPC_FUNC_IMPL(__imp__sub_82D3A618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D3A620;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82d3a6a4
	if (!ctx.cr0.eq) goto loc_82D3A6A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5656
	ctx.r4.s64 = ctx.r11.s64 + 5656;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3A648;
	sub_82D27AE8(ctx, base);
loc_82D3A648:
	// lbz r11,1558(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1558);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82d3a728
	if (!ctx.cr6.eq) goto loc_82D3A728;
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3a670
	if (!ctx.cr0.eq) goto loc_82D3A670;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5628
	ctx.r4.s64 = ctx.r11.s64 + 5628;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A670;
	sub_82D27B20(ctx, base);
loc_82D3A670:
	// lhz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1544);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82d3a71c
	if (ctx.cr6.gt) goto loc_82D3A71C;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// bgt cr6,0x82d3a71c
	if (ctx.cr6.gt) goto loc_82D3A71C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d3a6d8
	if (!ctx.cr6.eq) goto loc_82D3A6D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5604
	ctx.r4.s64 = ctx.r11.s64 + 5604;
	// bl 0x82d27b20
	ctx.lr = 0x82D3A69C;
	sub_82D27B20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d3a83c
	goto loc_82D3A83C;
loc_82D3A6A4:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a6b8
	if (ctx.cr0.eq) goto loc_82D3A6B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5580
	ctx.r4.s64 = ctx.r11.s64 + 5580;
	// b 0x82d3a830
	goto loc_82D3A830;
loc_82D3A6B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d3a648
	if (ctx.cr6.eq) goto loc_82D3A648;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d3a648
	if (ctx.cr0.eq) goto loc_82D3A648;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5556
	ctx.r4.s64 = ctx.r11.s64 + 5556;
	// b 0x82d3a830
	goto loc_82D3A830;
loc_82D3A6D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d31c90
	ctx.lr = 0x82D3A6E0;
	sub_82D31C90(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r28,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r28.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D3A704;
	sub_82D2F998(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3A714;
	sub_82D27D00(ctx, base);
	// sth r30,1546(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1546, ctx.r30.u16);
	// b 0x82d3a7f8
	goto loc_82D3A7F8;
loc_82D3A71C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5528
	ctx.r4.s64 = ctx.r11.s64 + 5528;
	// b 0x82d3a830
	goto loc_82D3A830;
loc_82D3A728:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82d3a7ac
	if (!ctx.cr6.eq) goto loc_82D3A7AC;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82d3a748
	if (ctx.cr6.eq) goto loc_82D3A748;
loc_82D3A73C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5528
	ctx.r4.s64 = ctx.r11.s64 + 5528;
	// b 0x82d3a834
	goto loc_82D3A834;
loc_82D3A748:
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2f998
	ctx.lr = 0x82D3A754;
	sub_82D2F998(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3A764;
	sub_82D27D00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// sth r11,1546(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1546, ctx.r11.u16);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,85(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// sth r11,1634(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1634, ctx.r11.u16);
	// sth r10,1636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1636, ctx.r10.u16);
	// sth r9,1638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1638, ctx.r9.u16);
	// b 0x82d3a7f8
	goto loc_82D3A7F8;
loc_82D3A7AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3a828
	if (!ctx.cr6.eq) goto loc_82D3A828;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d3a73c
	if (!ctx.cr6.eq) goto loc_82D3A73C;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d2f998
	ctx.lr = 0x82D3A7CC;
	sub_82D2F998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3A7DC;
	sub_82D27D00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// sth r11,1546(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1546, ctx.r11.u16);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,1640(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1640, ctx.r11.u16);
loc_82D3A7F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A804;
	sub_82D39D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82d3a844
	if (!ctx.cr0.eq) goto loc_82D3A844;
	// addi r7,r31,1632
	ctx.r7.s64 = ctx.r31.s64 + 1632;
	// lhz r6,1546(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1546);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,1628(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2cb18
	ctx.lr = 0x82D3A824;
	sub_82D2CB18(ctx, base);
	// b 0x82d3a844
	goto loc_82D3A844;
loc_82D3A828:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5484
	ctx.r4.s64 = ctx.r11.s64 + 5484;
loc_82D3A830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D3A834:
	// bl 0x82d27b20
	ctx.lr = 0x82D3A838;
	sub_82D27B20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D3A83C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A844;
	sub_82D39D08(ctx, base);
loc_82D3A844:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D3A84C"))) PPC_WEAK_FUNC(sub_82D3A84C);
PPC_FUNC_IMPL(__imp__sub_82D3A84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3A850"))) PPC_WEAK_FUNC(sub_82D3A850);
PPC_FUNC_IMPL(__imp__sub_82D3A850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3A858;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,1548
	ctx.r4.s64 = ctx.r31.s64 + 1548;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82d39218
	ctx.lr = 0x82D3A870;
	sub_82D39218(ctx, base);
	// lbz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1548);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3a894
	if (!ctx.cr0.eq) goto loc_82D3A894;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5684
	ctx.r4.s64 = ctx.r11.s64 + 5684;
	// bl 0x82d27b38
	ctx.lr = 0x82D3A88C;
	sub_82D27B38(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d3a8b4
	if (ctx.cr6.eq) goto loc_82D3A8B4;
loc_82D3A894:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d3a8a8
	if (ctx.cr0.eq) goto loc_82D3A8A8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
loc_82D3A8A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3A8B4;
	sub_82D39D08(ctx, base);
loc_82D3A8B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3A8BC"))) PPC_WEAK_FUNC(sub_82D3A8BC);
PPC_FUNC_IMPL(__imp__sub_82D3A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3A8C0"))) PPC_WEAK_FUNC(sub_82D3A8C0);
PPC_FUNC_IMPL(__imp__sub_82D3A8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D3A8C8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d3ac34
	if (ctx.cr6.lt) goto loc_82D3AC34;
	// lbz r10,1555(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1555);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,4444
	ctx.r29.s64 = ctx.r11.s64 + 4444;
	// beq 0x82d3a9fc
	if (ctx.cr0.eq) goto loc_82D3A9FC;
	// stw r25,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x82d31d38
	ctx.lr = 0x82D3A918;
	sub_82D31D38(ctx, base);
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
loc_82D3A91C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1556, ctx.r11.u8);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82d3a9f0
	if (!ctx.cr6.lt) goto loc_82D3A9F0;
	// lbz r9,1556(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 + 28;
	// lbz r5,1561(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1561);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r4,1376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r29,28
	ctx.r8.s64 = ctx.r29.s64 + 28;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm. r4,r4,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r7,r7,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// twllei r9,0
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// bne 0x82d3a9f0
	if (!ctx.cr0.eq) goto loc_82D3A9F0;
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// addi r10,r29,56
	ctx.r10.s64 = ctx.r29.s64 + 56;
	// addi r8,r29,84
	ctx.r8.s64 = ctx.r29.s64 + 84;
	// lwz r4,1488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r9,1468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// addi r5,r29,84
	ctx.r5.s64 = ctx.r29.s64 + 84;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwzx r8,r3,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r8,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// beq cr6,0x82d3a91c
	if (ctx.cr6.eq) goto loc_82D3A91C;
loc_82D3A9F0:
	// lbz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1556);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82d3ac34
	if (ctx.cr6.lt) goto loc_82D3AC34;
loc_82D3A9FC:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3abf8
	if (!ctx.cr0.eq) goto loc_82D3ABF8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r9,5732
	ctx.r28.s64 = ctx.r9.s64 + 5732;
	// addi r26,r10,-5064
	ctx.r26.s64 = ctx.r10.s64 + -5064;
	// addi r27,r11,-5020
	ctx.r27.s64 = ctx.r11.s64 + -5020;
loc_82D3AA30:
	// lwz r11,1384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3ab5c
	if (!ctx.cr6.eq) goto loc_82D3AB5C;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3ab08
	if (!ctx.cr6.eq) goto loc_82D3AB08;
	// addi r30,r31,1548
	ctx.r30.s64 = ctx.r31.s64 + 1548;
loc_82D3AA4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d08
	ctx.lr = 0x82D3AA58;
	sub_82D39D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D3AA68;
	sub_82D2F998(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// bl 0x82d27cc0
	ctx.lr = 0x82D3AA9C;
	sub_82D27CC0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D3AAAC;
	sub_82D2F998(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3AABC;
	sub_82D27D00(ctx, base);
	// addi r10,r29,112
	ctx.r10.s64 = ctx.r29.s64 + 112;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
loc_82D3AAC8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82d3aae8
	if (!ctx.cr0.eq) goto loc_82D3AAE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82d3aac8
	if (!ctx.cr6.eq) goto loc_82D3AAC8;
loc_82D3AAE8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82d3aafc
	if (ctx.cr0.eq) goto loc_82D3AAFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3AAFC;
	sub_82D27AE8(ctx, base);
loc_82D3AAFC:
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3aa4c
	if (ctx.cr6.eq) goto loc_82D3AA4C;
loc_82D3AB08:
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r30,1436(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r10,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r10.u32);
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// ble cr6,0x82d3ab28
	if (!ctx.cr6.gt) goto loc_82D3AB28;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
loc_82D3AB28:
	// lwz r24,1384(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82d2f998
	ctx.lr = 0x82D3AB3C;
	sub_82D2F998(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27d00
	ctx.lr = 0x82D3AB4C;
	sub_82D27D00(ctx, base);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r10,1384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
loc_82D3AB5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// bl 0x82d38bc0
	ctx.lr = 0x82D3AB68;
	sub_82D38BC0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82d3abac
	if (ctx.cr6.eq) goto loc_82D3ABAC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3ab90
	if (ctx.cr6.eq) goto loc_82D3AB90;
	// lwz r4,1404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d3ab88
	if (!ctx.cr6.eq) goto loc_82D3AB88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82D3AB88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3AB90;
	sub_82D27AE8(ctx, base);
loc_82D3AB90:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3aa30
	if (!ctx.cr6.eq) goto loc_82D3AA30;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3ABA8;
	sub_82D27AE8(ctx, base);
	// b 0x82d3aa30
	goto loc_82D3AA30;
loc_82D3ABAC:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3abd0
	if (ctx.cr6.eq) goto loc_82D3ABD0;
	// lwz r11,1384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3abd0
	if (!ctx.cr6.eq) goto loc_82D3ABD0;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3abdc
	if (ctx.cr6.eq) goto loc_82D3ABDC;
loc_82D3ABD0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3ABDC;
	sub_82D27AE8(ctx, base);
loc_82D3ABDC:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// lwz r10,1368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r25,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r25.u32);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
	// stw r10,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r10.u32);
loc_82D3ABF8:
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3ac10
	if (!ctx.cr6.eq) goto loc_82D3AC10;
	// lwz r11,1384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3ac20
	if (ctx.cr6.eq) goto loc_82D3AC20;
loc_82D3AC10:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5708
	ctx.r4.s64 = ctx.r11.s64 + 5708;
	// bl 0x82d27ae8
	ctx.lr = 0x82D3AC20;
	sub_82D27AE8(ctx, base);
loc_82D3AC20:
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// bl 0x82d38950
	ctx.lr = 0x82D3AC28;
	sub_82D38950(ctx, base);
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
loc_82D3AC34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3AC3C"))) PPC_WEAK_FUNC(sub_82D3AC3C);
PPC_FUNC_IMPL(__imp__sub_82D3AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3AC40"))) PPC_WEAK_FUNC(sub_82D3AC40);
PPC_FUNC_IMPL(__imp__sub_82D3AC40) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x821f4d88
	ctx.lr = 0x82D3AC5C;
	sub_821F4D88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d3ac74
	if (!ctx.cr6.eq) goto loc_82D3AC74;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D3AC74:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3AC98"))) PPC_WEAK_FUNC(sub_82D3AC98);
PPC_FUNC_IMPL(__imp__sub_82D3AC98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x821f5f18
	sub_821F5F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3ACB4"))) PPC_WEAK_FUNC(sub_82D3ACB4);
PPC_FUNC_IMPL(__imp__sub_82D3ACB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3ACB8"))) PPC_WEAK_FUNC(sub_82D3ACB8);
PPC_FUNC_IMPL(__imp__sub_82D3ACB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r3,r6,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r6.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3ACC8"))) PPC_WEAK_FUNC(sub_82D3ACC8);
PPC_FUNC_IMPL(__imp__sub_82D3ACC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D3ACD0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82ca5338
	ctx.lr = 0x82D3ACF4;
	sub_82CA5338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3ad1c
	if (ctx.cr6.eq) goto loc_82D3AD1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,65
	ctx.r10.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3AD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3AD1C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cab340
	ctx.lr = 0x82D3AD30;
	sub_82CAB340(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d3ad58
	if (ctx.cr6.eq) goto loc_82D3AD58;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3AD58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3AD58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D3AD60"))) PPC_WEAK_FUNC(sub_82D3AD60);
PPC_FUNC_IMPL(__imp__sub_82D3AD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D3AD68;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82ca5338
	ctx.lr = 0x82D3AD8C;
	sub_82CA5338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3adb4
	if (ctx.cr6.eq) goto loc_82D3ADB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,65
	ctx.r10.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3ADB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3ADB4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca4d60
	ctx.lr = 0x82D3ADC8;
	sub_82CA4D60(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d3adf0
	if (ctx.cr6.eq) goto loc_82D3ADF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,66
	ctx.r10.s64 = 66;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3ADF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3ADF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D3ADF8"))) PPC_WEAK_FUNC(sub_82D3ADF8);
PPC_FUNC_IMPL(__imp__sub_82D3ADF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// b 0x82ca49d8
	sub_82CA49D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3AE00"))) PPC_WEAK_FUNC(sub_82D3AE00);
PPC_FUNC_IMPL(__imp__sub_82D3AE00) {
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
	// bl 0x83000d90
	ctx.lr = 0x82D3AE20;
	sub_83000D90(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d3ae64
	if (!ctx.cr6.eq) goto loc_82D3AE64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,63
	ctx.r10.s64 = 63;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r9,3224
	ctx.r4.s64 = ctx.r9.s64 + 3224;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x822cd828
	ctx.lr = 0x82D3AE50;
	sub_822CD828(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D3AE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3AE64:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r8,r11,-21304
	ctx.r8.s64 = ctx.r11.s64 + -21304;
	// addi r7,r10,-21152
	ctx.r7.s64 = ctx.r10.s64 + -21152;
	// addi r6,r9,-21000
	ctx.r6.s64 = ctx.r9.s64 + -21000;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82D3AEA0"))) PPC_WEAK_FUNC(sub_82D3AEA0);
PPC_FUNC_IMPL(__imp__sub_82D3AEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,15
	ctx.r3.s64 = 983040;
	// ori r3,r3,16960
	ctx.r3.u64 = ctx.r3.u64 | 16960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3AEAC"))) PPC_WEAK_FUNC(sub_82D3AEAC);
PPC_FUNC_IMPL(__imp__sub_82D3AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3AEB0"))) PPC_WEAK_FUNC(sub_82D3AEB0);
PPC_FUNC_IMPL(__imp__sub_82D3AEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D3AEB8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r27,428(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r30,320(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3AEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r3.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r7,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r7.u32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// ble cr6,0x82d3af98
	if (!ctx.cr6.gt) goto loc_82D3AF98;
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_82D3AF18:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r25,r8,r9
	ctx.r25.s32 = ctx.r8.s32 / ctx.r9.s32;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mullw r24,r26,r25
	ctx.r24.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// andc r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// twllei r9,0
	// rlwinm r5,r24,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// twlgei r11,-1
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D3AF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,56(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r6,60(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// stwx r7,r29,r6
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82d3af18
	if (ctx.cr6.lt) goto loc_82D3AF18;
loc_82D3AF98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3AFA0"))) PPC_WEAK_FUNC(sub_82D3AFA0);
PPC_FUNC_IMPL(__imp__sub_82D3AFA0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D3AFA8;
	sub_82CA2BD8(ctx, base);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r28,428(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r27,320(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// ble cr6,0x82d3b0d0
	if (!ctx.cr6.gt) goto loc_82D3B0D0;
	// addi r26,r27,2
	ctx.r26.s64 = ctx.r27.s64 + 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
loc_82D3AFD4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,320(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r7,r5,r6
	ctx.r7.s32 = ctx.r5.s32 / ctx.r6.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r6,0
	// andc r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// mullw. r9,r26,r7
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r6,-1
	// ble 0x82d3b03c
	if (!ctx.cr0.gt) goto loc_82D3B03C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r5,r11,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82D3B024:
	// lwzx r24,r6,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stwx r24,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r24.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d3b024
	if (!ctx.cr0.eq) goto loc_82D3B024;
loc_82D3B03C:
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d3b090
	if (!ctx.cr6.gt) goto loc_82D3B090;
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
	// mullw r9,r7,r27
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82D3B070:
	// lwzx r5,r9,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r5,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82d3b070
	if (!ctx.cr0.eq) goto loc_82D3B070;
loc_82D3B090:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82d3b0b4
	if (!ctx.cr6.gt) goto loc_82D3B0B4;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82D3B0A0:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d3b0a0
	if (!ctx.cr0.eq) goto loc_82D3B0A0;
loc_82D3B0B4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3afd4
	if (ctx.cr6.lt) goto loc_82D3AFD4;
loc_82D3B0D0:
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3B0D4"))) PPC_WEAK_FUNC(sub_82D3B0D4);
PPC_FUNC_IMPL(__imp__sub_82D3B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3B0D8"))) PPC_WEAK_FUNC(sub_82D3B0D8);
PPC_FUNC_IMPL(__imp__sub_82D3B0D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D3B0E0;
	sub_82CA2BE8(ctx, base);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,428(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r31,320(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// ble cr6,0x82d3b1bc
	if (!ctx.cr6.gt) goto loc_82D3B1BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
loc_82D3B104:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw. r10,r7,r8
	ctx.r10.s32 = ctx.r7.s32 / ctx.r8.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r8,0
	// andc r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	// ble 0x82d3b1a4
	if (!ctx.cr0.gt) goto loc_82D3B1A4;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r8,r10
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r8,r28,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_82D3B16C:
	// lwzx r28,r6,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r28,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r28.u32);
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r28,r6,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r28,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r28.u32);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82d3b16c
	if (!ctx.cr0.eq) goto loc_82D3B16C;
loc_82D3B1A4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,84
	ctx.r4.s64 = ctx.r4.s64 + 84;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3b104
	if (ctx.cr6.lt) goto loc_82D3B104;
loc_82D3B1BC:
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D3B1C0"))) PPC_WEAK_FUNC(sub_82D3B1C0);
PPC_FUNC_IMPL(__imp__sub_82D3B1C0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,428(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d3b2a8
	if (!ctx.cr6.gt) goto loc_82D3B2A8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
loc_82D3B1E0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r9,32(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divwu r4,r9,r11
	ctx.r4.u32 = ctx.r9.u32 / ctx.r11.u32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// andc r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// subf. r10,r4,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r11,0
	// divw r9,r11,r8
	ctx.r9.s32 = ctx.r11.s32 / ctx.r8.s32;
	// twllei r8,0
	// twlgei r31,-1
	// bne 0x82d3b224
	if (!ctx.cr0.eq) goto loc_82D3B224;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D3B224:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82d3b250
	if (!ctx.cr6.eq) goto loc_82D3B250;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// twllei r9,0
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// andc r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stw r4,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r4.u32);
	// twlgei r11,-1
loc_82D3B250:
	// lwz r8,64(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r8,14
	ctx.r9.s64 = ctx.r8.s64 + 14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// ble cr6,0x82d3b294
	if (!ctx.cr6.gt) goto loc_82D3B294;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D3B280:
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d3b280
	if (!ctx.cr0.eq) goto loc_82D3B280;
loc_82D3B294:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,84
	ctx.r7.s64 = ctx.r7.s64 + 84;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3b1e0
	if (ctx.cr6.lt) goto loc_82D3B1E0;
loc_82D3B2A8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3B2B0"))) PPC_WEAK_FUNC(sub_82D3B2B0);
PPC_FUNC_IMPL(__imp__sub_82D3B2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D3B2B8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r30,428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3b300
	if (!ctx.cr6.eq) goto loc_82D3B300;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3B2F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3b34c
	if (ctx.cr6.eq) goto loc_82D3B34C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_82D3B300:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// lwz r25,320(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3B334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82d3b34c
	if (ctx.cr6.lt) goto loc_82D3B34C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82D3B34C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D3B354"))) PPC_WEAK_FUNC(sub_82D3B354);
PPC_FUNC_IMPL(__imp__sub_82D3B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3B358"))) PPC_WEAK_FUNC(sub_82D3B358);
PPC_FUNC_IMPL(__imp__sub_82D3B358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D3B360;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3b3c0
	if (!ctx.cr6.eq) goto loc_82D3B3C0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r4,r8,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D3B3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3b4f0
	if (ctx.cr6.eq) goto loc_82D3B4F0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82D3B3C0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82d3b434
	if (ctx.cr6.lt) goto loc_82D3B434;
	// beq cr6,0x82d3b460
	if (ctx.cr6.eq) goto loc_82D3B460;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82d3b4f0
	if (!ctx.cr6.lt) goto loc_82D3B4F0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lwz r10,436(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r11,14
	ctx.r7.s64 = ctx.r11.s64 + 14;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3B414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d3b4f0
	if (ctx.cr6.lt) goto loc_82D3B4F0;
	// stw r25,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r25.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82d3b4f0
	if (!ctx.cr6.lt) goto loc_82D3B4F0;
loc_82D3B434:
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// lwz r8,324(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82d3b45c
	if (!ctx.cr6.eq) goto loc_82D3B45C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d3b1c0
	ctx.lr = 0x82D3B45C;
	sub_82D3B1C0(ctx, base);
loc_82D3B45C:
	// stw r24,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
loc_82D3B460:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// lwz r10,436(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r11,14
	ctx.r7.s64 = ctx.r11.s64 + 14;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3B49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d3b4f0
	if (ctx.cr6.lt) goto loc_82D3B4F0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82d3b4c0
	if (!ctx.cr6.eq) goto loc_82D3B4C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d3b0d8
	ctx.lr = 0x82D3B4C0;
	sub_82D3B0D8(ctx, base);
loc_82D3B4C0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
loc_82D3B4F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3B4F8"))) PPC_WEAK_FUNC(sub_82D3B4F8);
PPC_FUNC_IMPL(__imp__sub_82D3B4F8) {
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
	// lwz r31,428(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82d3b538
	if (ctx.cr6.eq) goto loc_82D3B538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3B534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d3b580
	goto loc_82D3B580;
loc_82D3B538:
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3b56c
	if (ctx.cr6.eq) goto loc_82D3B56C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-19624
	ctx.r10.s64 = ctx.r11.s64 + -19624;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82d3afa0
	ctx.lr = 0x82D3B55C;
	sub_82D3AFA0(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// b 0x82d3b578
	goto loc_82D3B578;
loc_82D3B56C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-19792
	ctx.r10.s64 = ctx.r11.s64 + -19792;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82D3B578:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82D3B580:
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

__attribute__((alias("__imp__sub_82D3B598"))) PPC_WEAK_FUNC(sub_82D3B598);
PPC_FUNC_IMPL(__imp__sub_82D3B598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D3B5A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3B5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r8,r9,-19208
	ctx.r8.s64 = ctx.r9.s64 + -19208;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82d3b600
	if (ctx.cr6.eq) goto loc_82D3B600;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3B600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3B600:
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3b650
	if (ctx.cr6.eq) goto loc_82D3B650;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82d3b63c
	if (!ctx.cr6.lt) goto loc_82D3B63C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,47
	ctx.r10.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3B63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3B63C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3aeb0
	ctx.lr = 0x82D3B644;
	sub_82D3AEB0(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r27,r11,2
	ctx.r27.s64 = ctx.r11.s64 + 2;
	// b 0x82d3b654
	goto loc_82D3B654;
loc_82D3B650:
	// lwz r27,320(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
loc_82D3B654:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d3b6d8
	if (!ctx.cr6.gt) goto loc_82D3B6D8;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_82D3B670:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,-24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r7,r7,r8
	ctx.r7.s32 = ctx.r7.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r8,0
	// andc r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// mullw r6,r7,r27
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// twlgei r8,-1
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3B6BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d3b670
	if (ctx.cr6.lt) goto loc_82D3B670;
loc_82D3B6D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D3B6E0"))) PPC_WEAK_FUNC(sub_82D3B6E0);
PPC_FUNC_IMPL(__imp__sub_82D3B6E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,332(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82d3b708
	if (!ctx.cr6.gt) goto loc_82D3B708;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_82D3B708:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82d3b738
	if (!ctx.cr6.lt) goto loc_82D3B738;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
loc_82D3B738:
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3B750"))) PPC_WEAK_FUNC(sub_82D3B750);
PPC_FUNC_IMPL(__imp__sub_82D3B750) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// b 0x82d3b6e0
	sub_82D3B6E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3B75C"))) PPC_WEAK_FUNC(sub_82D3B75C);
PPC_FUNC_IMPL(__imp__sub_82D3B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3B760"))) PPC_WEAK_FUNC(sub_82D3B760);
PPC_FUNC_IMPL(__imp__sub_82D3B760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D3B768;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r11,352(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 352);
	// lwz r18,432(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 432);
	// addi r14,r11,-1
	ctx.r14.s64 = ctx.r11.s64 + -1;
	// lwz r11,324(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r19,24(r18)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// lwz r10,28(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r19,r10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d3b92c
	if (!ctx.cr6.lt) goto loc_82D3B92C;
loc_82D3B79C:
	// lwz r20,20(r18)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// cmplw cr6,r20,r14
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r14.u32, ctx.xer);
	// bgt cr6,0x82d3b914
	if (ctx.cr6.gt) goto loc_82D3B914;
loc_82D3B7A8:
	// lwz r11,360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 360);
	// addi r31,r18,32
	ctx.r31.s64 = ctx.r18.s64 + 32;
	// lwz r3,32(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x82d34320
	ctx.lr = 0x82D3B7BC;
	sub_82D34320(ctx, base);
	// lwz r10,448(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3B7D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3b980
	if (ctx.cr6.eq) goto loc_82D3B980;
	// lwz r11,332(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3b908
	if (!ctx.cr6.gt) goto loc_82D3B908;
	// addi r16,r26,336
	ctx.r16.s64 = ctx.r26.s64 + 336;
loc_82D3B7F4:
	// lwz r31,0(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3b810
	if (!ctx.cr6.eq) goto loc_82D3B810;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x82d3b8f4
	goto loc_82D3B8F4;
loc_82D3B810:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r20,r14
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r14.u32, ctx.xer);
	// lwz r10,452(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 452);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x82d3b834
	if (!ctx.cr6.lt) goto loc_82D3B834;
	// lwz r22,52(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82d3b838
	goto loc_82D3B838;
loc_82D3B834:
	// lwz r22,68(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82D3B838:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r11,r11,r17
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// mullw r9,r19,r10
	ctx.r9.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r10.s32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r21,r8,r20
	ctx.r21.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82d3b8f4
	if (!ctx.cr6.gt) goto loc_82D3B8F4;
loc_82D3B864:
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d3b884
	if (ctx.cr6.lt) goto loc_82D3B884;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r25,r19
	ctx.r10.u64 = ctx.r25.u64 + ctx.r19.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d3b8d0
	if (!ctx.cr6.lt) goto loc_82D3B8D0;
loc_82D3B884:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82d3b8d0
	if (!ctx.cr6.gt) goto loc_82D3B8D0;
	// addi r11,r23,8
	ctx.r11.s64 = ctx.r23.s64 + 8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r18
	ctx.r29.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_82D3B8A0:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82D3B8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bne 0x82d3b8a0
	if (!ctx.cr0.eq) goto loc_82D3B8A0;
loc_82D3B8D0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d3b864
	if (ctx.cr6.lt) goto loc_82D3B864;
loc_82D3B8F4:
	// lwz r11,332(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3b7f4
	if (ctx.cr6.lt) goto loc_82D3B7F4;
loc_82D3B908:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r20,r14
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r14.u32, ctx.xer);
	// ble cr6,0x82d3b7a8
	if (!ctx.cr6.gt) goto loc_82D3B7A8;
loc_82D3B914:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r10,28(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// cmpw cr6,r19,r10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3b79c
	if (ctx.cr6.lt) goto loc_82D3B79C;
loc_82D3B92C:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// lwz r10,324(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 160, ctx.r9.u32);
	// stw r11,152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 152, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d3b9cc
	if (!ctx.cr6.lt) goto loc_82D3B9CC;
	// lwz r8,332(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// lwz r9,432(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 432);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82d3b994
	if (!ctx.cr6.gt) goto loc_82D3B994;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82D3B980:
	// stw r19,24(r18)
	PPC_STORE_U32(ctx.r18.u32 + 24, ctx.r19.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r20,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r20.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82D3B994:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,336(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 336);
	// bge cr6,0x82d3b9ac
	if (!ctx.cr6.lt) goto loc_82D3B9AC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82d3b9b0
	goto loc_82D3B9B0;
loc_82D3B9AC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_82D3B9B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82D3B9CC:
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3B9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3B9EC"))) PPC_WEAK_FUNC(sub_82D3B9EC);
PPC_FUNC_IMPL(__imp__sub_82D3B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3B9F0"))) PPC_WEAK_FUNC(sub_82D3B9F0);
PPC_FUNC_IMPL(__imp__sub_82D3B9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D3B9F8;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// lwz r27,432(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3ba78
	if (!ctx.cr6.gt) goto loc_82D3BA78;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,336
	ctx.r31.s64 = ctx.r28.s64 + 336;
loc_82D3BA20:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,152(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r4,r11,18
	ctx.r4.s64 = ctx.r11.s64 + 18;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r8,r5
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3BA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,332(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d3ba20
	if (ctx.cr6.lt) goto loc_82D3BA20;
loc_82D3BA78:
	// lwz r23,24(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d3bb98
	if (!ctx.cr6.lt) goto loc_82D3BB98;
	// rlwinm r24,r23,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D3BA8C:
	// lwz r26,20(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82d3bb80
	if (!ctx.cr6.lt) goto loc_82D3BB80;
	// addi r22,r27,32
	ctx.r22.s64 = ctx.r27.s64 + 32;
loc_82D3BAA0:
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3bb50
	if (!ctx.cr6.gt) goto loc_82D3BB50;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,336
	ctx.r31.s64 = ctx.r28.s64 + 336;
loc_82D3BABC:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,52(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mullw r11,r8,r26
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d3bb38
	if (!ctx.cr6.gt) goto loc_82D3BB38;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r24,r10
	ctx.r5.u64 = ctx.r24.u64 + ctx.r10.u64;
loc_82D3BAE4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ble cr6,0x82d3bb24
	if (!ctx.cr6.gt) goto loc_82D3BB24;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82D3BB04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,52(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d3bb04
	if (ctx.cr6.lt) goto loc_82D3BB04;
loc_82D3BB24:
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3bae4
	if (ctx.cr6.lt) goto loc_82D3BAE4;
loc_82D3BB38:
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3babc
	if (ctx.cr6.lt) goto loc_82D3BABC;
loc_82D3BB50:
	// lwz r11,448(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3BB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3bbdc
	if (ctx.cr6.eq) goto loc_82D3BBDC;
	// lwz r11,352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d3baa0
	if (ctx.cr6.lt) goto loc_82D3BAA0;
loc_82D3BB80:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r25,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r25.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3ba8c
	if (ctx.cr6.lt) goto loc_82D3BA8C;
loc_82D3BB98:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lwz r9,324(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d3bc38
	if (!ctx.cr6.lt) goto loc_82D3BC38;
	// lwz r8,332(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// lwz r10,432(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82d3bbf0
	if (!ctx.cr6.gt) goto loc_82D3BBF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82D3BBDC:
	// stw r23,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82D3BBF0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// bge cr6,0x82d3bc1c
	if (!ctx.cr6.lt) goto loc_82D3BC1C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r25.u32);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82D3BC1C:
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r25.u32);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82D3BC38:
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3BC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82D3BC58"))) PPC_WEAK_FUNC(sub_82D3BC58);
PPC_FUNC_IMPL(__imp__sub_82D3BC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82D3BC60;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r11,324(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 324);
	// lwz r30,432(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 432);
	// addi r18,r11,-1
	ctx.r18.s64 = ctx.r11.s64 + -1;
loc_82D3BC78:
	// lwz r11,148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// lwz r10,156(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3bc9c
	if (ctx.cr6.lt) goto loc_82D3BC9C;
	// bne cr6,0x82d3bcc0
	if (!ctx.cr6.eq) goto loc_82D3BCC0;
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r10,160(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d3bcc0
	if (ctx.cr6.gt) goto loc_82D3BCC0;
loc_82D3BC9C:
	// lwz r11,440(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 440);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3BCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3bc78
	if (!ctx.cr6.eq) goto loc_82D3BC78;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
loc_82D3BCC0:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r31,220(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3bdec
	if (!ctx.cr6.gt) goto loc_82D3BDEC;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r21,r30,72
	ctx.r21.s64 = ctx.r30.s64 + 72;
loc_82D3BCDC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3bdd0
	if (ctx.cr6.eq) goto loc_82D3BDD0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,160(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3BD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,160(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// bge cr6,0x82d3bd28
	if (!ctx.cr6.lt) goto loc_82D3BD28;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82d3bd48
	goto loc_82D3BD48;
loc_82D3BD28:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// twllei r10,0
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf. r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d3bd48
	if (!ctx.cr0.eq) goto loc_82D3BD48;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D3BD48:
	// lwz r10,452(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r26,r22,r19
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r19.u32);
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ble cr6,0x82d3bdd0
	if (!ctx.cr6.gt) goto loc_82D3BDD0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82D3BD6C:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3bdb8
	if (ctx.cr6.eq) goto loc_82D3BDB8;
loc_82D3BD80:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82D3BD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d3bd80
	if (ctx.cr6.lt) goto loc_82D3BD80;
loc_82D3BDB8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// bne 0x82d3bd6c
	if (!ctx.cr0.eq) goto loc_82D3BD6C;
loc_82D3BDD0:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3bcdc
	if (ctx.cr6.lt) goto loc_82D3BCDC;
loc_82D3BDEC:
	// lwz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// lwz r10,324(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 160, ctx.r11.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82D3BE10"))) PPC_WEAK_FUNC(sub_82D3BE10);
PPC_FUNC_IMPL(__imp__sub_82D3BE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3BE18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r31,432(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3be74
	if (!ctx.cr6.eq) goto loc_82D3BE74;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D3BE70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_82D3BE74:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d3bf94
	if (!ctx.cr6.gt) goto loc_82D3BF94;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
loc_82D3BE94:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3bfa0
	if (ctx.cr6.eq) goto loc_82D3BFA0;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82d3bfa0
	if (ctx.cr6.lt) goto loc_82D3BFA0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82d3bf14
	if (ctx.cr6.eq) goto loc_82D3BF14;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D3BF14:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r5,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82d3bf30
	if (ctx.cr6.eq) goto loc_82D3BF30;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D3BF30:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82d3bf48
	if (ctx.cr6.eq) goto loc_82D3BF48;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D3BF48:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82d3bf60
	if (ctx.cr6.eq) goto loc_82D3BF60;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D3BF60:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82d3bf78
	if (ctx.cr6.eq) goto loc_82D3BF78;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D3BF78:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// addi r6,r6,84
	ctx.r6.s64 = ctx.r6.s64 + 84;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3be94
	if (ctx.cr6.lt) goto loc_82D3BE94;
loc_82D3BF94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D3BFA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3BFAC"))) PPC_WEAK_FUNC(sub_82D3BFAC);
PPC_FUNC_IMPL(__imp__sub_82D3BFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3BFB0"))) PPC_WEAK_FUNC(sub_82D3BFB0);
PPC_FUNC_IMPL(__imp__sub_82D3BFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D3BFB8;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bgt cr6,0x82d3c054
	if (ctx.cr6.gt) goto loc_82D3C054;
loc_82D3BFEC:
	// lwz r9,440(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3c054
	if (!ctx.cr6.eq) goto loc_82D3C054;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d3c02c
	if (!ctx.cr6.eq) goto loc_82D3C02C;
	// lwz r10,404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82d3c054
	if (ctx.cr6.gt) goto loc_82D3C054;
loc_82D3C02C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3C03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3c0c8
	if (ctx.cr6.eq) goto loc_82D3C0C8;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82d3bfec
	if (!ctx.cr6.gt) goto loc_82D3BFEC;
loc_82D3C054:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r16,220(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3c734
	if (!ctx.cr6.gt) goto loc_82D3C734;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r14,1
	ctx.r14.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// subfic r8,r11,-72
	ctx.xer.ca = ctx.r11.u32 <= 4294967224;
	ctx.r8.s64 = -72 - ctx.r11.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
loc_82D3C08C:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3c6f0
	if (ctx.cr6.eq) goto loc_82D3C6F0;
	// lwz r31,468(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// bge cr6,0x82d3c0d4
	if (!ctx.cr6.lt) goto loc_82D3C0D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x82d3c104
	goto loc_82D3C104;
loc_82D3C0C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82D3C0D4:
	// lwz r9,32(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	// twllei r11,0
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / ctx.r11.u32;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf. r28,r7,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bne 0x82d3c0f8
	if (!ctx.cr0.eq) goto loc_82D3C0F8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82D3C0F8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r14,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D3C104:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82d3c150
	if (ctx.cr6.eq) goto loc_82D3C150;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3C138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// b 0x82d3c170
	goto loc_82D3C170;
loc_82D3C150:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3C168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
loc_82D3C170:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,76(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 76);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r10,112(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lhz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// lhz r7,18(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// lhz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lhz r15,0(r9)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// ble cr6,0x82d3c6f0
	if (!ctx.cr6.gt) goto loc_82D3C6F0;
loc_82D3C1E4:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82d3c210
	if (ctx.cr6.eq) goto loc_82D3C210;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// beq cr6,0x82d3c214
	if (ctx.cr6.eq) goto loc_82D3C214;
loc_82D3C210:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_82D3C214:
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d3c238
	if (ctx.cr6.eq) goto loc_82D3C238;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82d3c238
	if (!ctx.cr6.eq) goto loc_82D3C238;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d3c23c
	goto loc_82D3C23C;
loc_82D3C238:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82D3C23C:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r25,r10
	ctx.r25.s64 = ctx.r10.s16;
	// lwz r10,28(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// extsh r24,r7
	ctx.r24.s64 = ctx.r7.s16;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// addi r17,r11,128
	ctx.r17.s64 = ctx.r11.s64 + 128;
	// addi r18,r9,128
	ctx.r18.s64 = ctx.r9.s64 + 128;
loc_82D3C284:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d34308
	ctx.lr = 0x82D3C294;
	sub_82D34308(ctx, base);
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82d3c2b4
	if (!ctx.cr6.lt) goto loc_82D3C2B4;
	// lhz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// lhz r10,128(r19)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r19.u32 + 128);
	// lhz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// extsh r24,r9
	ctx.r24.s64 = ctx.r9.s16;
loc_82D3C2B4:
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3c378
	if (ctx.cr6.eq) goto loc_82D3C378;
	// lhz r11,162(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 162);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3c378
	if (!ctx.cr6.eq) goto loc_82D3C378;
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d3c330
	if (ctx.cr6.lt) goto loc_82D3C330;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r8,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r8,0
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// ble cr6,0x82d3c374
	if (!ctx.cr6.gt) goto loc_82D3C374;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c374
	if (ctx.cr6.lt) goto loc_82D3C374;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x82d3c374
	goto loc_82D3C374;
loc_82D3C330:
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// twllei r6,0
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	// ble cr6,0x82d3c370
	if (!ctx.cr6.gt) goto loc_82D3C370;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c370
	if (ctx.cr6.lt) goto loc_82D3C370;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82D3C370:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D3C374:
	// sth r11,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r11.u16);
loc_82D3C378:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3c438
	if (ctx.cr6.eq) goto loc_82D3C438;
	// lhz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3c438
	if (!ctx.cr6.eq) goto loc_82D3C438;
	// subf r11,r22,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r22.s64;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d3c3f0
	if (ctx.cr6.lt) goto loc_82D3C3F0;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r8,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r8,0
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// ble cr6,0x82d3c434
	if (!ctx.cr6.gt) goto loc_82D3C434;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c434
	if (ctx.cr6.lt) goto loc_82D3C434;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x82d3c434
	goto loc_82D3C434;
loc_82D3C3F0:
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// twllei r6,0
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	// ble cr6,0x82d3c430
	if (!ctx.cr6.gt) goto loc_82D3C430;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c430
	if (ctx.cr6.lt) goto loc_82D3C430;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82D3C430:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D3C434:
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
loc_82D3C438:
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d3c4f4
	if (ctx.cr6.eq) goto loc_82D3C4F4;
	// lhz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3c4f4
	if (!ctx.cr6.eq) goto loc_82D3C4F4;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r11,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r11.s64;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82d3c4b0
	if (ctx.cr0.lt) goto loc_82D3C4B0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r8,0
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// ble cr6,0x82d3c4f0
	if (!ctx.cr6.gt) goto loc_82D3C4F0;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c4f0
	if (ctx.cr6.lt) goto loc_82D3C4F0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x82d3c4f0
	goto loc_82D3C4F0;
loc_82D3C4B0:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// twllei r6,0
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	// ble cr6,0x82d3c4ec
	if (!ctx.cr6.gt) goto loc_82D3C4EC;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c4ec
	if (ctx.cr6.lt) goto loc_82D3C4EC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82D3C4EC:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D3C4F0:
	// sth r11,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r11.u16);
loc_82D3C4F4:
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d3c5b0
	if (ctx.cr6.eq) goto loc_82D3C5B0;
	// lhz r11,178(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 178);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3c5b0
	if (!ctx.cr6.eq) goto loc_82D3C5B0;
	// subf r11,r29,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r29.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82d3c56c
	if (ctx.cr0.lt) goto loc_82D3C56C;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r8,0
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// ble cr6,0x82d3c5ac
	if (!ctx.cr6.gt) goto loc_82D3C5AC;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c5ac
	if (ctx.cr6.lt) goto loc_82D3C5AC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x82d3c5ac
	goto loc_82D3C5AC;
loc_82D3C56C:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// twllei r6,0
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	// ble cr6,0x82d3c5a8
	if (!ctx.cr6.gt) goto loc_82D3C5A8;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c5a8
	if (ctx.cr6.lt) goto loc_82D3C5A8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82D3C5A8:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D3C5AC:
	// sth r11,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r11.u16);
loc_82D3C5B0:
	// lwz r9,20(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d3c66c
	if (ctx.cr6.eq) goto loc_82D3C66C;
	// lhz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3c66c
	if (!ctx.cr6.eq) goto loc_82D3C66C;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82d3c628
	if (ctx.cr0.lt) goto loc_82D3C628;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r8,0
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r11,r7,r8
	ctx.r11.s32 = ctx.r7.s32 / ctx.r8.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// andc r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	// ble cr6,0x82d3c668
	if (!ctx.cr6.gt) goto loc_82D3C668;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c668
	if (ctx.cr6.lt) goto loc_82D3C668;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x82d3c668
	goto loc_82D3C668;
loc_82D3C628:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// twllei r7,0
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r7
	ctx.r11.s32 = ctx.r6.s32 / ctx.r7.s32;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// ble cr6,0x82d3c664
	if (!ctx.cr6.gt) goto loc_82D3C664;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c664
	if (ctx.cr6.lt) goto loc_82D3C664;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82D3C664:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D3C668:
	// sth r11,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r11.u16);
loc_82D3C66C:
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3C68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// addi r19,r19,128
	ctx.r19.s64 = ctx.r19.s64 + 128;
	// addi r18,r18,128
	ctx.r18.s64 = ctx.r18.s64 + 128;
	// addi r17,r17,128
	ctx.r17.s64 = ctx.r17.s64 + 128;
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r31.u32, ctx.xer);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// ble cr6,0x82d3c284
	if (!ctx.cr6.gt) goto loc_82D3C284;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// blt cr6,0x82d3c1e4
	if (ctx.cr6.lt) goto loc_82D3C1E4;
loc_82D3C6F0:
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// addi r16,r16,84
	ctx.r16.s64 = ctx.r16.s64 + 84;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r8,24
	ctx.r5.s64 = ctx.r8.s64 + 24;
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x82d3c08c
	if (ctx.cr6.lt) goto loc_82D3C08C;
loc_82D3C734:
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r9,324(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3C75C"))) PPC_WEAK_FUNC(sub_82D3C75C);
PPC_FUNC_IMPL(__imp__sub_82D3C75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3C760"))) PPC_WEAK_FUNC(sub_82D3C760);
PPC_FUNC_IMPL(__imp__sub_82D3C760) {
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
	// lwz r30,432(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3c7d0
	if (ctx.cr6.eq) goto loc_82D3C7D0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3c7b8
	if (ctx.cr6.eq) goto loc_82D3C7B8;
	// bl 0x82d3be10
	ctx.lr = 0x82D3C798;
	sub_82D3BE10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3c7b8
	if (ctx.cr6.eq) goto loc_82D3C7B8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16464
	ctx.r9.s64 = ctx.r11.s64 + -16464;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// b 0x82d3c7d8
	goto loc_82D3C7D8;
loc_82D3C7B8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17320
	ctx.r9.s64 = ctx.r11.s64 + -17320;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// b 0x82d3c7d8
	goto loc_82D3C7D8;
loc_82D3C7D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_82D3C7D8:
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

__attribute__((alias("__imp__sub_82D3C7F0"))) PPC_WEAK_FUNC(sub_82D3C7F0);
PPC_FUNC_IMPL(__imp__sub_82D3C7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D3C7F8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3C81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// stw r29,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r29.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r7,r9,-18608
	ctx.r7.s64 = ctx.r9.s64 + -18608;
	// addi r6,r8,-14496
	ctx.r6.s64 = ctx.r8.s64 + -14496;
	// stw r26,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r26.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// beq cr6,0x82d3c904
	if (ctx.cr6.eq) goto loc_82D3C904;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d3c8dc
	if (!ctx.cr6.gt) goto loc_82D3C8DC;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// addi r27,r29,72
	ctx.r27.s64 = ctx.r29.s64 + 72;
loc_82D3C864:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3c880
	if (ctx.cr6.eq) goto loc_82D3C880;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_82D3C880:
	// lwz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82d34280
	ctx.lr = 0x82D3C88C;
	sub_82D34280(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d34280
	ctx.lr = 0x82D3C89C;
	sub_82D34280(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3C8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3c864
	if (ctx.cr6.lt) goto loc_82D3C864;
loc_82D3C8DC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r9,r11,-17936
	ctx.r9.s64 = ctx.r11.s64 + -17936;
	// addi r8,r10,-17320
	ctx.r8.s64 = ctx.r10.s64 + -17320;
	// addi r7,r29,72
	ctx.r7.s64 = ctx.r29.s64 + 72;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// stw r7,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82D3C904:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3C920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// addi r6,r3,256
	ctx.r6.s64 = ctx.r3.s64 + 256;
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// addi r5,r3,384
	ctx.r5.s64 = ctx.r3.s64 + 384;
	// stw r7,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r7.u32);
	// addi r4,r3,512
	ctx.r4.s64 = ctx.r3.s64 + 512;
	// stw r6,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r6.u32);
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// stw r5,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r5.u32);
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// stw r4,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r4.u32);
	// addi r11,r3,640
	ctx.r11.s64 = ctx.r3.s64 + 640;
	// addi r10,r3,768
	ctx.r10.s64 = ctx.r3.s64 + 768;
	// addi r7,r3,896
	ctx.r7.s64 = ctx.r3.s64 + 896;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// addi r6,r3,1024
	ctx.r6.s64 = ctx.r3.s64 + 1024;
	// stw r10,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r10.u32);
	// addi r5,r3,1152
	ctx.r5.s64 = ctx.r3.s64 + 1152;
	// stw r7,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r7.u32);
	// addi r4,r9,-11496
	ctx.r4.s64 = ctx.r9.s64 + -11496;
	// stw r6,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r6.u32);
	// addi r3,r8,-18592
	ctx.r3.s64 = ctx.r8.s64 + -18592;
	// stw r5,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r5.u32);
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3C990"))) PPC_WEAK_FUNC(sub_82D3C990);
PPC_FUNC_IMPL(__imp__sub_82D3C990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D3C998;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r29,50
	ctx.r29.s64 = 50;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82d3c9c0
	if (ctx.cr6.lt) goto loc_82D3C9C0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82d3c9e4
	if (ctx.cr6.lt) goto loc_82D3C9E4;
loc_82D3C9C0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3C9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3C9E4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r11,r31,46
	ctx.r11.s64 = ctx.r31.s64 + 46;
	// bne cr6,0x82d3c9f4
	if (!ctx.cr6.eq) goto loc_82D3C9F4;
	// addi r11,r31,50
	ctx.r11.s64 = ctx.r31.s64 + 50;
loc_82D3C9F4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d3ca28
	if (!ctx.cr6.eq) goto loc_82D3CA28;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3CA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3CA28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3ca54
	if (!ctx.cr6.eq) goto loc_82D3CA54;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3CA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82D3CA54:
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r23,8
	ctx.r23.s64 = 8;
	// stw r28,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r28.u32);
loc_82D3CA6C:
	// lbzx r31,r30,r28
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82d3ca84
	if (ctx.cr6.lt) goto loc_82D3CA84;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x82d3caa0
	if (!ctx.cr6.gt) goto loc_82D3CAA0;
loc_82D3CA84:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3CAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3CAA0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d3cad0
	if (ctx.cr6.eq) goto loc_82D3CAD0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d3cacc
	if (ctx.cr6.eq) goto loc_82D3CACC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82D3CAC0:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d3cac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D3CAC0;
loc_82D3CACC:
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
loc_82D3CAD0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// ble cr6,0x82d3ca6c
	if (!ctx.cr6.gt) goto loc_82D3CA6C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stbx r10,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d3cb8c
	if (ctx.cr6.eq) goto loc_82D3CB8C;
loc_82D3CB04:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82d3cb4c
	if (!ctx.cr6.eq) goto loc_82D3CB4C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82D3CB28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82d3cb28
	if (ctx.cr6.eq) goto loc_82D3CB28;
loc_82D3CB4C:
	// slw r11,r26,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r29.u8 & 0x3F));
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3cb74
	if (ctx.cr6.lt) goto loc_82D3CB74;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3CB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3CB74:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d3cb04
	if (!ctx.cr6.eq) goto loc_82D3CB04;
loc_82D3CB8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82D3CB9C:
	// lbzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d3cbdc
	if (ctx.cr6.eq) goto loc_82D3CBDC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r4,r8,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r3,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r3.u32);
	// lbzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,-4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x82d3cbe0
	goto loc_82D3CBE0;
loc_82D3CBDC:
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82D3CBE0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// ble cr6,0x82d3cb9c
	if (!ctx.cr6.gt) goto loc_82D3CB9C;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,144
	ctx.r3.s64 = ctx.r27.s64 + 144;
	// stw r10,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r10.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82D3CC0C;
	sub_82CA3190(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_82D3CC18:
	// lbzx r11,r5,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82d3cca0
	if (ctx.cr6.lt) goto loc_82D3CCA0;
	// add r11,r4,r28
	ctx.r11.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// slw r31,r26,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r30.u8 & 0x3F));
	// addi r8,r11,17
	ctx.r8.s64 = ctx.r11.s64 + 17;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82D3CC40:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// ble cr6,0x82d3cc84
	if (!ctx.cr6.gt) goto loc_82D3CC84;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + ctx.r27.u64;
loc_82D3CC68:
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bgt 0x82d3cc68
	if (ctx.cr0.gt) goto loc_82D3CC68;
loc_82D3CC84:
	// lbzx r11,r5,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d3cc40
	if (!ctx.cr6.gt) goto loc_82D3CC40;
loc_82D3CCA0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bge 0x82d3cc18
	if (!ctx.cr0.lt) goto loc_82D3CC18;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d3cd00
	if (ctx.cr6.eq) goto loc_82D3CD00;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82d3cd00
	if (!ctx.cr6.gt) goto loc_82D3CD00;
	// addi r30,r28,17
	ctx.r30.s64 = ctx.r28.s64 + 17;
loc_82D3CCC4:
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d3ccd8
	if (ctx.cr6.lt) goto loc_82D3CCD8;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x82d3ccf4
	if (!ctx.cr6.gt) goto loc_82D3CCF4;
loc_82D3CCD8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3CCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3CCF4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82d3ccc4
	if (ctx.cr6.lt) goto loc_82D3CCC4;
loc_82D3CD00:
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82D3CD08"))) PPC_WEAK_FUNC(sub_82D3CD08);
PPC_FUNC_IMPL(__imp__sub_82D3CD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D3CD10;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3ce00
	if (!ctx.cr6.eq) goto loc_82D3CE00;
	// cmpwi cr6,r28,25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 25, ctx.xer);
	// bge cr6,0x82d3ce54
	if (!ctx.cr6.lt) goto loc_82D3CE54;
loc_82D3CD44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d3cd74
	if (!ctx.cr6.eq) goto loc_82D3CD74;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3CD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3cdf0
	if (ctx.cr6.eq) goto loc_82D3CDF0;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82D3CD74:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x82d3cdd8
	if (!ctx.cr6.eq) goto loc_82D3CDD8;
loc_82D3CD88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d3cdb8
	if (!ctx.cr6.eq) goto loc_82D3CDB8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3CDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3cdf0
	if (ctx.cr6.eq) goto loc_82D3CDF0;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82D3CDB8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x82d3cd88
	if (ctx.cr6.eq) goto loc_82D3CD88;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3cdfc
	if (!ctx.cr6.eq) goto loc_82D3CDFC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82D3CDD8:
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmpwi cr6,r28,25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 25, ctx.xer);
	// blt cr6,0x82d3cd44
	if (ctx.cr6.lt) goto loc_82D3CD44;
	// b 0x82d3ce54
	goto loc_82D3CE54;
loc_82D3CDF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82D3CDFC:
	// stw r11,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r11.u32);
loc_82D3CE00:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82d3ce54
	if (!ctx.cr6.gt) goto loc_82D3CE54;
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d3ce48
	if (!ctx.cr6.eq) goto loc_82D3CE48;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,117
	ctx.r10.s64 = 117;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3CE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,448(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
loc_82D3CE48:
	// subfic r11,r28,25
	ctx.xer.ca = ctx.r28.u32 <= 25;
	ctx.r11.s64 = 25 - ctx.r28.s64;
	// li r28,25
	ctx.r28.s64 = 25;
	// slw r26,r26,r11
	ctx.r26.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
loc_82D3CE54:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// stw r28,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D3CE70"))) PPC_WEAK_FUNC(sub_82D3CE70);
PPC_FUNC_IMPL(__imp__sub_82D3CE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D3CE78;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d3ceb4
	if (!ctx.cr6.lt) goto loc_82D3CEB4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3CE98;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3ceac
	if (!ctx.cr6.eq) goto loc_82D3CEAC;
loc_82D3CEA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82D3CEAC:
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_82D3CEB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// sraw r7,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r7.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82d3cf2c
	if (!ctx.cr6.gt) goto loc_82D3CF2C;
loc_82D3CEE0:
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x82d3cf08
	if (!ctx.cr6.lt) goto loc_82D3CF08;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3CEF8;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3cea0
	if (ctx.cr6.eq) goto loc_82D3CEA0;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_82D3CF08:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// sraw r11,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 | ctx.r28.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82d3cee0
	if (ctx.cr6.gt) goto loc_82D3CEE0;
loc_82D3CF2C:
	// stw r4,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r4.u32);
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// stw r5,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r5.u32);
	// ble cr6,0x82d3cf70
	if (!ctx.cr6.gt) goto loc_82D3CF70;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,118
	ctx.r10.s64 = 118;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D3CF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82D3CF70:
	// addi r10,r31,18
	ctx.r10.s64 = ctx.r31.s64 + 18;
	// lwz r9,140(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,17(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 17);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D3CF94"))) PPC_WEAK_FUNC(sub_82D3CF94);
PPC_FUNC_IMPL(__imp__sub_82D3CF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3CF98"))) PPC_WEAK_FUNC(sub_82D3CF98);
PPC_FUNC_IMPL(__imp__sub_82D3CF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82D3CFA0;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,280(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 280);
	// lwz r21,448(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3d048
	if (ctx.cr6.eq) goto loc_82D3D048;
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3d048
	if (!ctx.cr6.eq) goto loc_82D3D048;
	// lwz r10,16(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r11,444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 444);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r31,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r31.u32);
	// lwz r7,444(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 444);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D3CFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d10c
	if (ctx.cr6.eq) goto loc_82D3D10C;
	// lwz r11,332(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 332);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3d030
	if (!ctx.cr6.gt) goto loc_82D3D030;
	// addi r11,r21,20
	ctx.r11.s64 = ctx.r21.s64 + 20;
loc_82D3D018:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r9,332(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 332);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d3d018
	if (ctx.cr6.lt) goto loc_82D3D018;
loc_82D3D030:
	// lwz r11,280(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 280);
	// stw r11,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r11.u32);
	// lwz r10,420(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d3d048
	if (!ctx.cr6.eq) goto loc_82D3D048;
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
loc_82D3D048:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3d458
	if (!ctx.cr6.eq) goto loc_82D3D458;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// addi r23,r21,20
	ctx.r23.s64 = ctx.r21.s64 + 20;
	// lwz r8,24(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// lwz r7,28(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// lwz r6,32(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,360(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 360);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r4,12(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r5,16(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// ble cr6,0x82d3d414
	if (!ctx.cr6.gt) goto loc_82D3D414;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// addi r22,r25,364
	ctx.r22.s64 = ctx.r25.s64 + 364;
	// addi r24,r21,112
	ctx.r24.s64 = ctx.r21.s64 + 112;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r19,r11,3432
	ctx.r19.s64 = ctx.r11.s64 + 3432;
	// addi r27,r10,5752
	ctx.r27.s64 = ctx.r10.s64 + 5752;
loc_82D3D0CC:
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// lwz r31,-40(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + -40);
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bge cr6,0x82d3d118
	if (!ctx.cr6.lt) goto loc_82D3D118;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D0EC;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d10c
	if (ctx.cr6.eq) goto loc_82D3D10C;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3d118
	if (!ctx.cr6.lt) goto loc_82D3D118;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x82d3d14c
	goto loc_82D3D14C;
loc_82D3D10C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
loc_82D3D118:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3d148
	if (ctx.cr6.eq) goto loc_82D3D148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lbz r31,1168(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x82d3d16c
	goto loc_82D3D16C;
loc_82D3D148:
	// li r7,9
	ctx.r7.s64 = 9;
loc_82D3D14C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3ce70
	ctx.lr = 0x82D3D158;
	sub_82D3CE70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82d3d10c
	if (ctx.cr6.lt) goto loc_82D3D10C;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3D16C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d3d1c8
	if (ctx.cr6.eq) goto loc_82D3D1C8;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d3d198
	if (!ctx.cr6.lt) goto loc_82D3D198;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D188;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d10c
	if (ctx.cr6.eq) goto loc_82D3D10C;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3D198:
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// slw r10,r26,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// and r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82d3d1c8
	if (!ctx.cr6.lt) goto loc_82D3D1C8;
	// addi r10,r27,64
	ctx.r10.s64 = ctx.r27.s64 + 64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82D3D1C8:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3d1f0
	if (ctx.cr6.eq) goto loc_82D3D1F0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_82D3D1F0:
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3d31c
	if (ctx.cr6.eq) goto loc_82D3D31C;
loc_82D3D200:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3d234
	if (!ctx.cr6.lt) goto loc_82D3D234;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D214;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d10c
	if (ctx.cr6.eq) goto loc_82D3D10C;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3d234
	if (!ctx.cr6.lt) goto loc_82D3D234;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x82d3d268
	goto loc_82D3D268;
loc_82D3D234:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3d264
	if (ctx.cr6.eq) goto loc_82D3D264;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x82d3d284
	goto loc_82D3D284;
loc_82D3D264:
	// li r7,9
	ctx.r7.s64 = 9;
loc_82D3D268:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3ce70
	ctx.lr = 0x82D3D274;
	sub_82D3CE70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d3d10c
	if (ctx.cr6.lt) goto loc_82D3D10C;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3D284:
	// clrlwi r31,r3,28
	ctx.r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d3d300
	if (ctx.cr6.eq) goto loc_82D3D300;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d3d2bc
	if (!ctx.cr6.lt) goto loc_82D3D2BC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D2AC;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d10c
	if (ctx.cr6.eq) goto loc_82D3D10C;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3D2BC:
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82d3d2ec
	if (!ctx.cr6.lt) goto loc_82D3D2EC;
	// addi r9,r27,64
	ctx.r9.s64 = ctx.r27.s64 + 64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82D3D2EC:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r19
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r29
	PPC_STORE_U16(ctx.r7.u32 + ctx.r29.u32, ctx.r11.u16);
	// b 0x82d3d30c
	goto loc_82D3D30C;
loc_82D3D300:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82d3d3f8
	if (!ctx.cr6.eq) goto loc_82D3D3F8;
	// addi r30,r30,15
	ctx.r30.s64 = ctx.r30.s64 + 15;
loc_82D3D30C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x82d3d200
	if (ctx.cr6.lt) goto loc_82D3D200;
	// b 0x82d3d3f8
	goto loc_82D3D3F8;
loc_82D3D31C:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3d350
	if (!ctx.cr6.lt) goto loc_82D3D350;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D330;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d10c
	if (ctx.cr6.eq) goto loc_82D3D10C;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3d350
	if (!ctx.cr6.lt) goto loc_82D3D350;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x82d3d384
	goto loc_82D3D384;
loc_82D3D350:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3d380
	if (ctx.cr6.eq) goto loc_82D3D380;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x82d3d3a0
	goto loc_82D3D3A0;
loc_82D3D380:
	// li r7,9
	ctx.r7.s64 = 9;
loc_82D3D384:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3ce70
	ctx.lr = 0x82D3D390;
	sub_82D3CE70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d3d10c
	if (ctx.cr6.lt) goto loc_82D3D10C;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3D3A0:
	// clrlwi r31,r3,28
	ctx.r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d3d3e0
	if (ctx.cr6.eq) goto loc_82D3D3E0;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d3d3d8
	if (!ctx.cr6.lt) goto loc_82D3D3D8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D3C8;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d10c
	if (ctx.cr6.eq) goto loc_82D3D10C;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3D3D8:
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// b 0x82d3d3ec
	goto loc_82D3D3EC;
loc_82D3D3E0:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82d3d3f8
	if (!ctx.cr6.eq) goto loc_82D3D3F8;
	// addi r30,r30,15
	ctx.r30.s64 = ctx.r30.s64 + 15;
loc_82D3D3EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x82d3d31c
	if (ctx.cr6.lt) goto loc_82D3D31C;
loc_82D3D3F8:
	// lwz r11,360(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 360);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3d0cc
	if (ctx.cr6.lt) goto loc_82D3D0CC;
loc_82D3D414:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r4,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r4.u32);
	// stw r5,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r5.u32);
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// stw r6,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r6.u32);
	// stw r3,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r3.u32);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
loc_82D3D458:
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82D3D470"))) PPC_WEAK_FUNC(sub_82D3D470);
PPC_FUNC_IMPL(__imp__sub_82D3D470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D3D478;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r26,448(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3d4b4
	if (!ctx.cr6.eq) goto loc_82D3D4B4;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bne cr6,0x82d3d4b4
	if (!ctx.cr6.eq) goto loc_82D3D4B4;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3d4b4
	if (!ctx.cr6.eq) goto loc_82D3D4B4;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3d4d8
	if (ctx.cr6.eq) goto loc_82D3D4D8;
loc_82D3D4B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,122
	ctx.r10.s64 = 122;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3D4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3D4D8:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3d550
	if (!ctx.cr6.gt) goto loc_82D3D550;
	// addi r29,r26,20
	ctx.r29.s64 = ctx.r26.s64 + 20;
	// addi r30,r31,336
	ctx.r30.s64 = ctx.r31.s64 + 336;
loc_82D3D4F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 + 10;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82d3c990
	ctx.lr = 0x82D3D518;
	sub_82D3C990(ctx, base);
	// addi r9,r28,14
	ctx.r9.s64 = ctx.r28.s64 + 14;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3c990
	ctx.lr = 0x82D3D534;
	sub_82D3C990(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r8,332(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d3d4f4
	if (ctx.cr6.lt) goto loc_82D3D4F4;
loc_82D3D550:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3d5f0
	if (!ctx.cr6.gt) goto loc_82D3D5F0;
	// addi r11,r26,192
	ctx.r11.s64 = ctx.r26.s64 + 192;
	// addi r8,r31,364
	ctx.r8.s64 = ctx.r31.s64 + 364;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82D3D56C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r5,r9,10
	ctx.r5.s64 = ctx.r9.s64 + 10;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// stw r3,-120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -120, ctx.r3.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r9,r9,14
	ctx.r9.s64 = ctx.r9.s64 + 14;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// stw r4,-80(r11)
	PPC_STORE_U32(ctx.r11.u32 + -80, ctx.r4.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d5d0
	if (ctx.cr6.eq) goto loc_82D3D5D0;
	// stw r6,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r6.u32);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bgt cr6,0x82d3d5c8
	if (ctx.cr6.gt) goto loc_82D3D5C8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82D3D5C8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82d3d5d8
	goto loc_82D3D5D8;
loc_82D3D5D0:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r25,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r25.u32);
loc_82D3D5D8:
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d3d56c
	if (ctx.cr6.lt) goto loc_82D3D56C;
loc_82D3D5F0:
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r25,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r25.u32);
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D3D60C"))) PPC_WEAK_FUNC(sub_82D3D60C);
PPC_FUNC_IMPL(__imp__sub_82D3D60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3D610"))) PPC_WEAK_FUNC(sub_82D3D610);
PPC_FUNC_IMPL(__imp__sub_82D3D610) {
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3D63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// addi r7,r9,-11152
	ctx.r7.s64 = ctx.r9.s64 + -11152;
	// addi r6,r8,-12392
	ctx.r6.s64 = ctx.r8.s64 + -12392;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D3D664:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d3d664
	if (!ctx.cr0.eq) goto loc_82D3D664;
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

__attribute__((alias("__imp__sub_82D3D68C"))) PPC_WEAK_FUNC(sub_82D3D68C);
PPC_FUNC_IMPL(__imp__sub_82D3D68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3D690"))) PPC_WEAK_FUNC(sub_82D3D690);
PPC_FUNC_IMPL(__imp__sub_82D3D690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3D698;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,448(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lwz r6,444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82D3D6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3d6e8
	if (!ctx.cr6.eq) goto loc_82D3D6E8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D3D6E8:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3d714
	if (!ctx.cr6.gt) goto loc_82D3D714;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
loc_82D3D6FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r9,332(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d3d6fc
	if (ctx.cr6.lt) goto loc_82D3D6FC;
loc_82D3D714:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d3d730
	if (!ctx.cr6.eq) goto loc_82D3D730;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82D3D730:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3D73C"))) PPC_WEAK_FUNC(sub_82D3D73C);
PPC_FUNC_IMPL(__imp__sub_82D3D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3D740"))) PPC_WEAK_FUNC(sub_82D3D740);
PPC_FUNC_IMPL(__imp__sub_82D3D740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82D3D748;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r24,448(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lwz r21,416(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d3d78c
	if (ctx.cr6.eq) goto loc_82D3D78C;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3d78c
	if (!ctx.cr6.eq) goto loc_82D3D78C;
	// bl 0x82d3d690
	ctx.lr = 0x82D3D778;
	sub_82D3D690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3d78c
	if (!ctx.cr6.eq) goto loc_82D3D78C;
loc_82D3D780:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82D3D78C:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3d984
	if (!ctx.cr6.eq) goto loc_82D3D984;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r20,r24,20
	ctx.r20.s64 = ctx.r24.s64 + 20;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D3D7CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d3d7cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D3D7CC;
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3d940
	if (!ctx.cr6.gt) goto loc_82D3D940;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r28,r30,364
	ctx.r28.s64 = ctx.r30.s64 + 364;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r23,r11,5880
	ctx.r23.s64 = ctx.r11.s64 + 5880;
loc_82D3D804:
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r27,84
	ctx.r11.s64 = ctx.r27.s64 + 84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// bge cr6,0x82d3d85c
	if (!ctx.cr6.lt) goto loc_82D3D85C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D83C;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d780
	if (ctx.cr6.eq) goto loc_82D3D780;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3d85c
	if (!ctx.cr6.lt) goto loc_82D3D85C;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// b 0x82d3d890
	goto loc_82D3D890;
loc_82D3D85C:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3d88c
	if (ctx.cr6.eq) goto loc_82D3D88C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lbz r31,1168(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x82d3d8b0
	goto loc_82D3D8B0;
loc_82D3D88C:
	// li r7,9
	ctx.r7.s64 = 9;
loc_82D3D890:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3ce70
	ctx.lr = 0x82D3D89C;
	sub_82D3CE70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82d3d780
	if (ctx.cr6.lt) goto loc_82D3D780;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82D3D8B0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d3d90c
	if (ctx.cr6.eq) goto loc_82D3D90C;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d3d8dc
	if (!ctx.cr6.lt) goto loc_82D3D8DC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3D8CC;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d780
	if (ctx.cr6.eq) goto loc_82D3D780;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82D3D8DC:
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r11,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// and r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82d3d90c
	if (!ctx.cr6.lt) goto loc_82D3D90C;
	// addi r10,r23,64
	ctx.r10.s64 = ctx.r23.s64 + 64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82D3D90C:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// slw r8,r11,r21
	ctx.r8.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r21.u8 & 0x3F));
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// sth r8,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r8.u16);
	// lwz r6,360(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// cmpw cr6,r26,r6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d3d804
	if (ctx.cr6.lt) goto loc_82D3D804;
loc_82D3D940:
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r4,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r4.u32);
	// stw r5,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D3D970:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d3d970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D3D970;
loc_82D3D984:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82D3D99C"))) PPC_WEAK_FUNC(sub_82D3D99C);
PPC_FUNC_IMPL(__imp__sub_82D3D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3D9A0"))) PPC_WEAK_FUNC(sub_82D3D9A0);
PPC_FUNC_IMPL(__imp__sub_82D3D9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82D3D9A8;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,280(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 280);
	// lwz r24,448(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 448);
	// lwz r21,408(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r20,416(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 416);
	// beq cr6,0x82d3d9f0
	if (ctx.cr6.eq) goto loc_82D3D9F0;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3d9f0
	if (!ctx.cr6.eq) goto loc_82D3D9F0;
	// bl 0x82d3d690
	ctx.lr = 0x82D3D9DC;
	sub_82D3D690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3d9f0
	if (!ctx.cr6.eq) goto loc_82D3D9F0;
loc_82D3D9E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
loc_82D3D9F0:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3dbe4
	if (!ctx.cr6.eq) goto loc_82D3DBE4;
	// lwz r19,20(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82d3da10
	if (ctx.cr6.eq) goto loc_82D3DA10;
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// b 0x82d3dbe0
	goto loc_82D3DBE0;
loc_82D3DA10:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lwz r29,404(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 404);
	// lwz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r28,60(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// bgt cr6,0x82d3dbc0
	if (ctx.cr6.gt) goto loc_82D3DBC0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r23,r10,3432
	ctx.r23.s64 = ctx.r10.s64 + 3432;
	// addi r27,r11,5880
	ctx.r27.s64 = ctx.r11.s64 + 5880;
loc_82D3DA58:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3da8c
	if (!ctx.cr6.lt) goto loc_82D3DA8C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3DA6C;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d9e4
	if (ctx.cr6.eq) goto loc_82D3D9E4;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82d3da8c
	if (!ctx.cr6.lt) goto loc_82D3DA8C;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x82d3dac0
	goto loc_82D3DAC0;
loc_82D3DA8C:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3dabc
	if (ctx.cr6.eq) goto loc_82D3DABC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x82d3dadc
	goto loc_82D3DADC;
loc_82D3DABC:
	// li r7,9
	ctx.r7.s64 = 9;
loc_82D3DAC0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3ce70
	ctx.lr = 0x82D3DACC;
	sub_82D3CE70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d3d9e4
	if (ctx.cr6.lt) goto loc_82D3D9E4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82D3DADC:
	// clrlwi r31,r3,28
	ctx.r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r30,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d3db5c
	if (ctx.cr6.eq) goto loc_82D3DB5C;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d3db14
	if (!ctx.cr6.lt) goto loc_82D3DB14;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3DB04;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d9e4
	if (ctx.cr6.eq) goto loc_82D3D9E4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82D3DB14:
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82d3db44
	if (!ctx.cr6.lt) goto loc_82D3DB44;
	// addi r9,r27,64
	ctx.r9.s64 = ctx.r27.s64 + 64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82D3DB44:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r11,r20
	ctx.r9.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r20.u8 & 0x3F));
	// lwzx r8,r10,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r22
	PPC_STORE_U16(ctx.r6.u32 + ctx.r22.u32, ctx.r9.u16);
	// b 0x82d3db68
	goto loc_82D3DB68;
loc_82D3DB5C:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bne cr6,0x82d3db78
	if (!ctx.cr6.eq) goto loc_82D3DB78;
	// addi r30,r29,15
	ctx.r30.s64 = ctx.r29.s64 + 15;
loc_82D3DB68:
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x82d3da58
	if (!ctx.cr6.gt) goto loc_82D3DA58;
	// b 0x82d3dbc0
	goto loc_82D3DBC0;
loc_82D3DB78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// slw r31,r26,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r30.u8 & 0x3F));
	// beq cr6,0x82d3dbbc
	if (ctx.cr6.eq) goto loc_82D3DBBC;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d3dba8
	if (!ctx.cr6.lt) goto loc_82D3DBA8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3DB98;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3d9e4
	if (ctx.cr6.eq) goto loc_82D3D9E4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82D3DBA8:
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r30.s64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// sraw r10,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82D3DBBC:
	// addi r19,r31,-1
	ctx.r19.s64 = ctx.r31.s64 + -1;
loc_82D3DBC0:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r4,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r4.u32);
	// stw r5,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r5.u32);
loc_82D3DBE0:
	// stw r19,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r19.u32);
loc_82D3DBE4:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82D3DBFC"))) PPC_WEAK_FUNC(sub_82D3DBFC);
PPC_FUNC_IMPL(__imp__sub_82D3DBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3DC00"))) PPC_WEAK_FUNC(sub_82D3DC00);
PPC_FUNC_IMPL(__imp__sub_82D3DC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D3DC08;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r30,448(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// slw r26,r10,r11
	ctx.r26.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d3dc54
	if (ctx.cr6.eq) goto loc_82D3DC54;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3dc54
	if (!ctx.cr6.eq) goto loc_82D3DC54;
	// bl 0x82d3d690
	ctx.lr = 0x82D3DC40;
	sub_82D3D690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3dc54
	if (!ctx.cr6.eq) goto loc_82D3DC54;
loc_82D3DC48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82D3DC54:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ble cr6,0x82d3dce0
	if (!ctx.cr6.gt) goto loc_82D3DCE0;
loc_82D3DC84:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x82d3dcac
	if (!ctx.cr6.lt) goto loc_82D3DCAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3DC9C;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3dc48
	if (ctx.cr6.eq) goto loc_82D3DC48;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82D3DCAC:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sraw r11,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3dccc
	if (ctx.cr6.eq) goto loc_82D3DCCC;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// or r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 | ctx.r26.u64;
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
loc_82D3DCCC:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3dc84
	if (ctx.cr6.lt) goto loc_82D3DC84;
loc_82D3DCE0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// stw r7,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D3DD18"))) PPC_WEAK_FUNC(sub_82D3DD18);
PPC_FUNC_IMPL(__imp__sub_82D3DD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D3DD20;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,416(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 416);
	// lwz r27,408(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + 408);
	// lwz r9,280(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 280);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r17,448(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 448);
	// slw r20,r15,r11
	ctx.r20.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// beq cr6,0x82d3dd74
	if (ctx.cr6.eq) goto loc_82D3DD74;
	// lwz r11,40(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d3dd74
	if (!ctx.cr6.eq) goto loc_82D3DD74;
	// bl 0x82d3d690
	ctx.lr = 0x82D3DD6C;
	sub_82D3D690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3e150
	if (ctx.cr6.eq) goto loc_82D3E150;
loc_82D3DD74:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3e108
	if (!ctx.cr6.eq) goto loc_82D3E108;
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r21,r11,3432
	ctx.r21.s64 = ctx.r11.s64 + 3432;
	// lwz r24,404(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 404);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r14,20(r17)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// lwz r25,12(r17)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lwz r30,16(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lwz r23,60(r17)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// bne cr6,0x82d3e03c
	if (!ctx.cr6.eq) goto loc_82D3E03C;
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82d3e0e4
	if (ctx.cr6.gt) goto loc_82D3E0E4;
	// addi r22,r1,128
	ctx.r22.s64 = ctx.r1.s64 + 128;
	// li r18,118
	ctx.r18.s64 = 118;
loc_82D3DDD4:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bge cr6,0x82d3de14
	if (!ctx.cr6.lt) goto loc_82D3DE14;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3DDF0;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3e120
	if (ctx.cr6.eq) goto loc_82D3E120;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82d3de14
	if (!ctx.cr6.lt) goto loc_82D3DE14;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// b 0x82d3de48
	goto loc_82D3DE48;
loc_82D3DE14:
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// sraw r10,r25,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r10.s64 = ctx.r25.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3de44
	if (ctx.cr6.eq) goto loc_82D3DE44;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x82d3de6c
	goto loc_82D3DE6C;
loc_82D3DE44:
	// li r7,9
	ctx.r7.s64 = 9;
loc_82D3DE48:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3ce70
	ctx.lr = 0x82D3DE5C;
	sub_82D3CE70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d3e120
	if (ctx.cr6.lt) goto loc_82D3E120;
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3DE6C:
	// clrlwi r27,r3,28
	ctx.r27.u64 = ctx.r3.u32 & 0xF;
	// srawi r26,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82d3def4
	if (ctx.cr6.eq) goto loc_82D3DEF4;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82d3dea4
	if (ctx.cr6.eq) goto loc_82D3DEA4;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r18,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r18.u32);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3DEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3DEA4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82d3ded0
	if (!ctx.cr6.lt) goto loc_82D3DED0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3DEC0;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3e120
	if (ctx.cr6.eq) goto loc_82D3E120;
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3DED0:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// sraw r11,r25,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r11.s64 = ctx.r25.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3deec
	if (ctx.cr6.eq) goto loc_82D3DEEC;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// b 0x82d3defc
	goto loc_82D3DEFC;
loc_82D3DEEC:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82d3defc
	goto loc_82D3DEFC;
loc_82D3DEF4:
	// cmpwi cr6,r26,15
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 15, ctx.xer);
	// bne cr6,0x82d3dfe4
	if (!ctx.cr6.eq) goto loc_82D3DFE4;
loc_82D3DEFC:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_82D3DF04:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d3df90
	if (ctx.cr6.eq) goto loc_82D3DF90;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82d3df44
	if (!ctx.cr6.lt) goto loc_82D3DF44;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3DF34;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3e120
	if (ctx.cr6.eq) goto loc_82D3E120;
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3DF44:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// sraw r11,r25,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r11.s64 = ctx.r25.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3df98
	if (ctx.cr6.eq) goto loc_82D3DF98;
	// lhzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// and r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 & ctx.r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d3df98
	if (!ctx.cr6.eq) goto loc_82D3DF98;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82d3df80
	if (ctx.cr6.lt) goto loc_82D3DF80;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// sthx r11,r31,r28
	PPC_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u16);
	// b 0x82d3df98
	goto loc_82D3DF98;
loc_82D3DF80:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r9,r31,r28
	PPC_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u16);
	// b 0x82d3df98
	goto loc_82D3DF98;
loc_82D3DF90:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82d3dfac
	if (ctx.cr0.lt) goto loc_82D3DFAC;
loc_82D3DF98:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d3df04
	if (!ctx.cr6.gt) goto loc_82D3DF04;
loc_82D3DFAC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82d3dfd0
	if (ctx.cr6.eq) goto loc_82D3DFD0;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// lwzx r9,r11,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// sthx r27,r8,r28
	PPC_STORE_U16(ctx.r8.u32 + ctx.r28.u32, ctx.r27.u16);
loc_82D3DFD0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d3ddd4
	if (!ctx.cr6.gt) goto loc_82D3DDD4;
	// b 0x82d3e0e4
	goto loc_82D3E0E4;
loc_82D3DFE4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// slw r14,r15,r26
	ctx.r14.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r26.u8 & 0x3F));
	// beq cr6,0x82d3e030
	if (ctx.cr6.eq) goto loc_82D3E030;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82d3e01c
	if (!ctx.cr6.lt) goto loc_82D3E01C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3E00C;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3e120
	if (ctx.cr6.eq) goto loc_82D3E120;
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3E01C:
	// subf r30,r26,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r26.s64;
	// addi r11,r14,-1
	ctx.r11.s64 = ctx.r14.s64 + -1;
	// sraw r10,r25,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r10.s64 = ctx.r25.s32 >> temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r14,r11,r14
	ctx.r14.u64 = ctx.r11.u64 + ctx.r14.u64;
loc_82D3E030:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82d3e0e4
	if (ctx.cr6.eq) goto loc_82D3E0E4;
loc_82D3E03C:
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82d3e0e0
	if (ctx.cr6.gt) goto loc_82D3E0E0;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_82D3E050:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d3e0d0
	if (ctx.cr6.eq) goto loc_82D3E0D0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82d3e090
	if (!ctx.cr6.lt) goto loc_82D3E090;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3cd08
	ctx.lr = 0x82D3E080;
	sub_82D3CD08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d3e120
	if (ctx.cr6.eq) goto loc_82D3E120;
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82D3E090:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// sraw r11,r25,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r11.s64 = ctx.r25.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d3e0d0
	if (ctx.cr6.eq) goto loc_82D3E0D0;
	// lhzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// and r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 & ctx.r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d3e0d0
	if (!ctx.cr6.eq) goto loc_82D3E0D0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82d3e0c8
	if (ctx.cr6.lt) goto loc_82D3E0C8;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// b 0x82d3e0cc
	goto loc_82D3E0CC;
loc_82D3E0C8:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_82D3E0CC:
	// sthx r11,r31,r28
	PPC_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u16);
loc_82D3E0D0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82d3e050
	if (!ctx.cr6.gt) goto loc_82D3E050;
loc_82D3E0E0:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_82D3E0E4:
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r25,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r25.u32);
	// stw r30,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r30.u32);
	// stw r14,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r14.u32);
loc_82D3E108:
	// lwz r11,40(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r11.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82D3E120:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82d3e150
	if (!ctx.cr6.gt) goto loc_82D3E150;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D3E138:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r8,r28
	PPC_STORE_U16(ctx.r8.u32 + ctx.r28.u32, ctx.r10.u16);
	// bgt 0x82d3e138
	if (ctx.cr0.gt) goto loc_82D3E138;
loc_82D3E150:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3E15C"))) PPC_WEAK_FUNC(sub_82D3E15C);
PPC_FUNC_IMPL(__imp__sub_82D3E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3E160"))) PPC_WEAK_FUNC(sub_82D3E160);
PPC_FUNC_IMPL(__imp__sub_82D3E160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D3E168;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r24,448(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r22,r10,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d3e19c
	if (ctx.cr6.eq) goto loc_82D3E19C;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82d3e1bc
	goto loc_82D3E1BC;
loc_82D3E19C:
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82d3e1b0
	if (ctx.cr6.gt) goto loc_82D3E1B0;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x82d3e1b4
	if (ctx.cr6.lt) goto loc_82D3E1B4;
loc_82D3E1B0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D3E1B4:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_82D3E1BC:
	// beq cr6,0x82d3e1c4
	if (ctx.cr6.eq) goto loc_82D3E1C4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D3E1C4:
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3e1e4
	if (ctx.cr6.eq) goto loc_82D3E1E4;
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82d3e1e4
	if (ctx.cr6.eq) goto loc_82D3E1E4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D3E1E4:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x82d3e1f8
	if (ctx.cr6.gt) goto loc_82D3E1F8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d3e248
	if (ctx.cr6.eq) goto loc_82D3E248;
loc_82D3E1F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,404(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,408(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r6,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,412(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r4,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3E248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3E248:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3e34c
	if (!ctx.cr6.gt) goto loc_82D3E34C;
	// addi r26,r31,336
	ctx.r26.s64 = ctx.r31.s64 + 336;
	// li r27,115
	ctx.r27.s64 = 115;
loc_82D3E260:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82d3e2b8
	if (!ctx.cr6.eq) goto loc_82D3E2B8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d3e2b8
	if (!ctx.cr6.lt) goto loc_82D3E2B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r23.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D3E2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3E2B8:
	// lwz r30,404(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82d3e338
	if (ctx.cr6.gt) goto loc_82D3E338;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82D3E2D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d3e2e0
	if (!ctx.cr6.lt) goto loc_82D3E2E0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82D3E2E0:
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82d3e31c
	if (ctx.cr6.eq) goto loc_82D3E31C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D3E31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3E31C:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82d3e2d0
	if (!ctx.cr6.gt) goto loc_82D3E2D0;
loc_82D3E338:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3e260
	if (ctx.cr6.lt) goto loc_82D3E260;
loc_82D3E34C:
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d3e378
	if (!ctx.cr6.eq) goto loc_82D3E378;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d3e36c
	if (ctx.cr6.eq) goto loc_82D3E36C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-10432
	ctx.r10.s64 = ctx.r11.s64 + -10432;
	// b 0x82d3e394
	goto loc_82D3E394;
loc_82D3E36C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-9824
	ctx.r10.s64 = ctx.r11.s64 + -9824;
	// b 0x82d3e394
	goto loc_82D3E394;
loc_82D3E378:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d3e38c
	if (ctx.cr6.eq) goto loc_82D3E38C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-9216
	ctx.r10.s64 = ctx.r11.s64 + -9216;
	// b 0x82d3e394
	goto loc_82D3E394;
loc_82D3E38C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-8936
	ctx.r10.s64 = ctx.r11.s64 + -8936;
loc_82D3E394:
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3e42c
	if (!ctx.cr6.gt) goto loc_82D3E42C;
	// addi r28,r24,24
	ctx.r28.s64 = ctx.r24.s64 + 24;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
loc_82D3E3B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d3e3e8
	if (ctx.cr6.eq) goto loc_82D3E3E8;
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d3e410
	if (!ctx.cr6.eq) goto loc_82D3E410;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x82d3c990
	ctx.lr = 0x82D3E3E4;
	sub_82D3C990(ctx, base);
	// b 0x82d3e410
	goto loc_82D3E410;
loc_82D3E3E8:
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82d3c990
	ctx.lr = 0x82D3E408;
	sub_82D3C990(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r10.u32);
loc_82D3E410:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3e3b0
	if (ctx.cr6.lt) goto loc_82D3E3B0;
loc_82D3E42C:
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// stw r23,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r23.u32);
	// stw r23,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r23.u32);
	// stw r23,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r23.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82D3E44C"))) PPC_WEAK_FUNC(sub_82D3E44C);
PPC_FUNC_IMPL(__imp__sub_82D3E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3E450"))) PPC_WEAK_FUNC(sub_82D3E450);
PPC_FUNC_IMPL(__imp__sub_82D3E450) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3E480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// addi r8,r9,-7840
	ctx.r8.s64 = ctx.r9.s64 + -7840;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3E4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// ble cr6,0x82d3e50c
	if (!ctx.cr6.gt) goto loc_82D3E50C;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82D3E4E0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D3E4EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82d3e4ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D3E4EC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3e4e0
	if (ctx.cr6.lt) goto loc_82D3E4E0;
loc_82D3E50C:
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

__attribute__((alias("__imp__sub_82D3E524"))) PPC_WEAK_FUNC(sub_82D3E524);
PPC_FUNC_IMPL(__imp__sub_82D3E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3E528"))) PPC_WEAK_FUNC(sub_82D3E528);
PPC_FUNC_IMPL(__imp__sub_82D3E528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D3E530;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r9,36(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// lwz r11,452(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 452);
	// lwz r10,220(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d3e950
	if (!ctx.cr6.gt) goto loc_82D3E950;
	// addi r30,r10,36
	ctx.r30.s64 = ctx.r10.s64 + 36;
	// addi r25,r11,44
	ctx.r25.s64 = ctx.r11.s64 + 44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r23,48
	ctx.r23.s64 = 48;
	// li r22,7
	ctx.r22.s64 = 7;
	// addi r29,r11,6136
	ctx.r29.s64 = ctx.r11.s64 + 6136;
	// addi r31,r10,6008
	ctx.r31.s64 = ctx.r10.s64 + 6008;
loc_82D3E578:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d3e67c
	if (ctx.cr6.gt) goto loc_82D3E67C;
	// lis r12,-32044
	ctx.r12.s64 = -2100035584;
	// addi r12,r12,-6752
	ctx.r12.s64 = ctx.r12.s64 + -6752;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D3E5C0;
	case 1:
		goto loc_82D3E5D0;
	case 2:
		goto loc_82D3E67C;
	case 3:
		goto loc_82D3E5E0;
	case 4:
		goto loc_82D3E67C;
	case 5:
		goto loc_82D3E67C;
	case 6:
		goto loc_82D3E67C;
	case 7:
		goto loc_82D3E5F0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-6720(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6720);
	// lwz r22,-6704(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6704);
	// lwz r22,-6532(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6532);
	// lwz r22,-6688(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6688);
	// lwz r22,-6532(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6532);
	// lwz r22,-6532(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6532);
	// lwz r22,-6532(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6532);
	// lwz r22,-6672(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6672);
loc_82D3E5C0:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-17520
	ctx.r27.s64 = ctx.r11.s64 + -17520;
	// b 0x82d3e6a4
	goto loc_82D3E6A4;
loc_82D3E5D0:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-19008
	ctx.r27.s64 = ctx.r11.s64 + -19008;
	// b 0x82d3e6a4
	goto loc_82D3E6A4;
loc_82D3E5E0:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-19824
	ctx.r27.s64 = ctx.r11.s64 + -19824;
	// b 0x82d3e6a4
	goto loc_82D3E6A4;
loc_82D3E5F0:
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82d3e660
	if (ctx.cr6.gt) goto loc_82D3E660;
	// lis r12,-32044
	ctx.r12.s64 = -2100035584;
	// addi r12,r12,-6636
	ctx.r12.s64 = ctx.r12.s64 + -6636;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D3E630;
	case 1:
		goto loc_82D3E640;
	case 2:
		goto loc_82D3E650;
	case 3:
		goto loc_82D3E630;
	case 4:
		goto loc_82D3E640;
	case 5:
		goto loc_82D3E630;
	case 6:
		goto loc_82D3E640;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-6608(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6608);
	// lwz r22,-6592(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6592);
	// lwz r22,-6576(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6576);
	// lwz r22,-6608(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6608);
	// lwz r22,-6592(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6592);
	// lwz r22,-6608(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6608);
	// lwz r22,-6592(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + -6592);
loc_82D3E630:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-21008
	ctx.r27.s64 = ctx.r11.s64 + -21008;
	// b 0x82d3e6a4
	goto loc_82D3E6A4;
loc_82D3E640:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r27,r11,-22152
	ctx.r27.s64 = ctx.r11.s64 + -22152;
	// b 0x82d3e6a4
	goto loc_82D3E6A4;
loc_82D3E650:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r27,r11,-23256
	ctx.r27.s64 = ctx.r11.s64 + -23256;
	// b 0x82d3e6a4
	goto loc_82D3E6A4;
loc_82D3E660:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82d3e6a0
	goto loc_82D3E6A0;
loc_82D3E67C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82D3E6A0:
	// bctrl 
	ctx.lr = 0x82D3E6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3E6A4:
	// stw r27,-40(r25)
	PPC_STORE_U32(ctx.r25.u32 + -40, ctx.r27.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3e938
	if (ctx.cr6.eq) goto loc_82D3E938;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82d3e938
	if (ctx.cr6.eq) goto loc_82D3E938;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d3e938
	if (ctx.cr6.eq) goto loc_82D3E938;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82d3e918
	if (ctx.cr6.lt) goto loc_82D3E918;
	// beq cr6,0x82d3e860
	if (ctx.cr6.eq) goto loc_82D3E860;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x82d3e704
	if (ctx.cr6.lt) goto loc_82D3E704;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3E700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d3e938
	goto loc_82D3E938;
loc_82D3E704:
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_82D3E714:
	// lhz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lfd f9,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f0,8(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// lfd f13,16(r29)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// lfd f12,24(r29)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// lfd f11,40(r29)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,48(r29)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fmul f6,f7,f9
	ctx.f6.f64 = ctx.f7.f64 * ctx.f9.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,-8(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfd f4,0(r11)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r5,-2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fmul f1,f2,f4
	ctx.f1.f64 = ctx.f2.f64 * ctx.f4.f64;
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// stfs f9,-4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// lfd f8,0(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmul f5,f6,f8
	ctx.f5.f64 = ctx.f6.f64 * ctx.f8.f64;
	// fmul f4,f5,f13
	ctx.f4.f64 = ctx.f5.f64 * ctx.f13.f64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfd f2,0(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fmul f13,f0,f2
	ctx.f13.f64 = ctx.f0.f64 * ctx.f2.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfd f8,0(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmul f5,f6,f8
	ctx.f5.f64 = ctx.f6.f64 * ctx.f8.f64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,8(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfd f3,0(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f2,120(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// fmul f0,f1,f3
	ctx.f0.f64 = ctx.f1.f64 * ctx.f3.f64;
	// fmul f13,f0,f11
	ctx.f13.f64 = ctx.f0.f64 * ctx.f11.f64;
	// lfd f0,56(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfd f11,0(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f9,128(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f11
	ctx.f7.f64 = ctx.f8.f64 * ctx.f11.f64;
	// fmul f6,f7,f10
	ctx.f6.f64 = ctx.f7.f64 * ctx.f10.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,16(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfd f4,0(r11)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfd f3,136(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// fmul f1,f2,f4
	ctx.f1.f64 = ctx.f2.f64 * ctx.f4.f64;
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,20(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// blt cr6,0x82d3e714
	if (ctx.cr6.lt) goto loc_82D3E714;
	// b 0x82d3e938
	goto loc_82D3E938;
loc_82D3E860:
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// neg r8,r7
	ctx.r8.s64 = -ctx.r7.s64;
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// addi r10,r6,6
	ctx.r10.s64 = ctx.r6.s64 + 6;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
loc_82D3E88C:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lhz r3,-6(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -6);
	// addi r21,r31,128
	ctx.r21.s64 = ctx.r31.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r3,r8,2048
	ctx.r3.s64 = ctx.r8.s64 + 2048;
	// srawi r8,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 12;
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lhzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// lhzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r8,r8,2048
	ctx.r8.s64 = ctx.r8.s64 + 2048;
	// srawi r3,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 12;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lhzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lhz r3,-2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// addi r8,r8,2048
	ctx.r8.s64 = ctx.r8.s64 + 2048;
	// srawi r3,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 12;
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// addi r3,r8,2048
	ctx.r3.s64 = ctx.r8.s64 + 2048;
	// srawi r8,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 12;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x82d3e88c
	if (ctx.cr6.lt) goto loc_82D3E88C;
	// b 0x82d3e938
	goto loc_82D3E938;
loc_82D3E918:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r10,64
	ctx.r10.s64 = 64;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_82D3E924:
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82d3e924
	if (!ctx.cr0.eq) goto loc_82D3E924;
loc_82D3E938:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3e578
	if (ctx.cr6.lt) goto loc_82D3E578;
loc_82D3E950:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D3E958"))) PPC_WEAK_FUNC(sub_82D3E958);
PPC_FUNC_IMPL(__imp__sub_82D3E958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D3E960;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3E980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r3,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r9,-6872
	ctx.r8.s64 = ctx.r9.s64 + -6872;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// ble cr6,0x82d3e9f8
	if (!ctx.cr6.gt) goto loc_82D3E9F8;
	// addi r29,r11,80
	ctx.r29.s64 = ctx.r11.s64 + 80;
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82D3E9B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3E9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82D3E9DC;
	sub_82CA3190(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d3e9b0
	if (ctx.cr6.lt) goto loc_82D3E9B0;
loc_82D3E9F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D3EA00"))) PPC_WEAK_FUNC(sub_82D3EA00);
PPC_FUNC_IMPL(__imp__sub_82D3EA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D3EA08;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r29,436(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d3ea34
	if (!ctx.cr6.gt) goto loc_82D3EA34;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82D3EA34:
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3EA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3EA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D3EA98"))) PPC_WEAK_FUNC(sub_82D3EA98);
PPC_FUNC_IMPL(__imp__sub_82D3EA98) {
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
	// lwz r31,436(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82d3ead4
	if (ctx.cr6.eq) goto loc_82D3EAD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3EAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d3eb2c
	goto loc_82D3EB2C;
loc_82D3EAD4:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3eb20
	if (ctx.cr6.eq) goto loc_82D3EB20;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-5632
	ctx.r9.s64 = ctx.r11.s64 + -5632;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82d3eb2c
	if (!ctx.cr6.eq) goto loc_82D3EB2C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3EB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x82d3eb2c
	goto loc_82D3EB2C;
loc_82D3EB20:
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82D3EB2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D3EB4C"))) PPC_WEAK_FUNC(sub_82D3EB4C);
PPC_FUNC_IMPL(__imp__sub_82D3EB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3EB50"))) PPC_WEAK_FUNC(sub_82D3EB50);
PPC_FUNC_IMPL(__imp__sub_82D3EB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3EB58;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3EB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// addi r8,r9,-5480
	ctx.r8.s64 = ctx.r9.s64 + -5480;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82d3ec08
	if (ctx.cr6.eq) goto loc_82D3EC08;
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r6,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82d3ebe0
	if (ctx.cr6.eq) goto loc_82D3EBE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3EBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D3EBE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3EC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_82D3EC08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3EC10"))) PPC_WEAK_FUNC(sub_82D3EC10);
PPC_FUNC_IMPL(__imp__sub_82D3EC10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3EC28"))) PPC_WEAK_FUNC(sub_82D3EC28);
PPC_FUNC_IMPL(__imp__sub_82D3EC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D3EC30;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lwz r29,456(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3eccc
	if (ctx.cr6.lt) goto loc_82D3ECCC;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,220(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3ecc4
	if (!ctx.cr6.gt) goto loc_82D3ECC4;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
loc_82D3EC78:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D3ECA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r26,r26,84
	ctx.r26.s64 = ctx.r26.s64 + 84;
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d3ec78
	if (ctx.cr6.lt) goto loc_82D3EC78;
loc_82D3ECC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
loc_82D3ECCC:
	// lwz r5,92(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// subf r31,r5,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82d3ece8
	if (!ctx.cr6.gt) goto loc_82D3ECE8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82D3ECE8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r10,r11,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d3ecfc
	if (!ctx.cr6.gt) goto loc_82D3ECFC;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82D3ECFC:
	// lwz r10,460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3ED20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lwz r7,96(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// subf r6,r31,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r31.s64;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// stw r6,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r6.u32);
	// lwz r5,316(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82d3ed5c
	if (ctx.cr6.lt) goto loc_82D3ED5C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_82D3ED5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82D3ED64"))) PPC_WEAK_FUNC(sub_82D3ED64);
PPC_FUNC_IMPL(__imp__sub_82D3ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3ED68"))) PPC_WEAK_FUNC(sub_82D3ED68);
PPC_FUNC_IMPL(__imp__sub_82D3ED68) {
	PPC_FUNC_PROLOGUE();
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3ED70"))) PPC_WEAK_FUNC(sub_82D3ED70);
PPC_FUNC_IMPL(__imp__sub_82D3ED70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3ED7C"))) PPC_WEAK_FUNC(sub_82D3ED7C);
PPC_FUNC_IMPL(__imp__sub_82D3ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3ED80"))) PPC_WEAK_FUNC(sub_82D3ED80);
PPC_FUNC_IMPL(__imp__sub_82D3ED80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D3ED88;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r29,140(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 140);
	// lbz r26,150(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 150);
	// ble cr6,0x82d3ee50
	if (!ctx.cr6.gt) goto loc_82D3EE50;
	// rlwinm r24,r26,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_82D3EDC4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82d3ee14
	if (!ctx.cr6.lt) goto loc_82D3EE14;
loc_82D3EDDC:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82d3ee0c
	if (!ctx.cr6.gt) goto loc_82D3EE0C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d3ee08
	if (ctx.cr6.eq) goto loc_82D3EE08;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82D3EDFC:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d3edfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D3EDFC;
loc_82D3EE08:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82D3EE0C:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82d3eddc
	if (ctx.cr6.lt) goto loc_82D3EDDC;
loc_82D3EE14:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// ble cr6,0x82d3ee38
	if (!ctx.cr6.gt) goto loc_82D3EE38;
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d342b0
	ctx.lr = 0x82D3EE38;
	sub_82D342B0(ctx, base);
loc_82D3EE38:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3edc4
	if (ctx.cr6.lt) goto loc_82D3EDC4;
loc_82D3EE50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3EE58"))) PPC_WEAK_FUNC(sub_82D3EE58);
PPC_FUNC_IMPL(__imp__sub_82D3EE58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_82D3EE70:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d3eea8
	if (!ctx.cr6.lt) goto loc_82D3EEA8;
loc_82D3EE88:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d3ee88
	if (ctx.cr6.lt) goto loc_82D3EE88;
loc_82D3EEA8:
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3ee70
	if (ctx.cr6.lt) goto loc_82D3EE70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3EEC0"))) PPC_WEAK_FUNC(sub_82D3EEC0);
PPC_FUNC_IMPL(__imp__sub_82D3EEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D3EEC8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3ef58
	if (!ctx.cr6.gt) goto loc_82D3EF58;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82D3EEEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,112(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d3ef24
	if (!ctx.cr6.lt) goto loc_82D3EF24;
loc_82D3EF04:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d3ef04
	if (ctx.cr6.lt) goto loc_82D3EF04;
loc_82D3EF24:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,112(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d342b0
	ctx.lr = 0x82D3EF40;
	sub_82D342B0(ctx, base);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3eeec
	if (ctx.cr6.lt) goto loc_82D3EEEC;
loc_82D3EF58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D3EF60"))) PPC_WEAK_FUNC(sub_82D3EF60);
PPC_FUNC_IMPL(__imp__sub_82D3EF60) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3f04c
	if (!ctx.cr6.gt) goto loc_82D3F04C;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_82D3EF80:
	// lwzx r10,r5,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r9,r7,-2
	ctx.xer.ca = ctx.r7.u32 > 1;
	ctx.r9.s64 = ctx.r7.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82d3f010
	if (ctx.cr0.eq) goto loc_82D3F010;
loc_82D3EFC8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82d3efc8
	if (!ctx.cr0.eq) goto loc_82D3EFC8;
loc_82D3F010:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwz r7,316(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d3ef80
	if (ctx.cr6.lt) goto loc_82D3EF80;
loc_82D3F04C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3F058"))) PPC_WEAK_FUNC(sub_82D3F058);
PPC_FUNC_IMPL(__imp__sub_82D3F058) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D3F060;
	sub_82CA2BD8(ctx, base);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r24,0(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d3f1c4
	if (!ctx.cr6.gt) goto loc_82D3F1C4;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_82D3F078:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82D3F084:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82d3f098
	if (!ctx.cr6.eq) goto loc_82D3F098;
	// lwz r10,-4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// b 0x82d3f09c
	goto loc_82D3F09C;
loc_82D3F098:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82D3F09C:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r30,r11,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,7
	ctx.r6.s64 = ctx.r6.s64 + 7;
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stb r6,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq 0x82d3f180
	if (ctx.cr0.eq) goto loc_82D3F180;
loc_82D3F124:
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r29,r11,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r30,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 4;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,7
	ctx.r5.s64 = ctx.r5.s64 + 7;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r31,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 4;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x82d3f124
	if (!ctx.cr0.eq) goto loc_82D3F124;
loc_82D3F180:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// stb r6,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// blt cr6,0x82d3f084
	if (ctx.cr6.lt) goto loc_82D3F084;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3f078
	if (ctx.cr6.lt) goto loc_82D3F078;
loc_82D3F1C4:
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D3F1C8"))) PPC_WEAK_FUNC(sub_82D3F1C8);
PPC_FUNC_IMPL(__imp__sub_82D3F1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d3ef60
	sub_82D3EF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3F1CC"))) PPC_WEAK_FUNC(sub_82D3F1CC);
PPC_FUNC_IMPL(__imp__sub_82D3F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3F1D0"))) PPC_WEAK_FUNC(sub_82D3F1D0);
PPC_FUNC_IMPL(__imp__sub_82D3F1D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d3f058
	sub_82D3F058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3F1D4"))) PPC_WEAK_FUNC(sub_82D3F1D4);
PPC_FUNC_IMPL(__imp__sub_82D3F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3F1D8"))) PPC_WEAK_FUNC(sub_82D3F1D8);
PPC_FUNC_IMPL(__imp__sub_82D3F1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D3F1E0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3F200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// stw r26,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r26.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r7,r9,-5104
	ctx.r7.s64 = ctx.r9.s64 + -5104;
	// addi r6,r8,-5080
	ctx.r6.s64 = ctx.r8.s64 + -5080;
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// stw r6,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r6.u32);
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82d3f254
	if (ctx.cr6.eq) goto loc_82D3F254;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3F254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3F254:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d3f274
	if (ctx.cr6.eq) goto loc_82D3F274;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82d3f278
	if (ctx.cr6.gt) goto loc_82D3F278;
loc_82D3F274:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_82D3F278:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d3f4b8
	if (!ctx.cr6.gt) goto loc_82D3F4B8;
	// addi r28,r11,36
	ctx.r28.s64 = ctx.r11.s64 + 36;
	// addi r30,r26,52
	ctx.r30.s64 = ctx.r26.s64 + 52;
	// li r25,38
	ctx.r25.s64 = 38;
loc_82D3F294:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,-28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28);
	// lwz r8,-24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r6,320(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r5,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// divw r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	// andc r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// andc r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// twllei r6,0
	// divw r8,r7,r6
	ctx.r8.s32 = ctx.r7.s32 / ctx.r6.s32;
	// twllei r6,0
	// twlgei r5,-1
	// twlgei r4,-1
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d3f304
	if (!ctx.cr6.eq) goto loc_82D3F304;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-4752
	ctx.r10.s64 = ctx.r11.s64 + -4752;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82d3f4a0
	goto loc_82D3F4A0;
loc_82D3F304:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d3f324
	if (!ctx.cr6.eq) goto loc_82D3F324;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82d3f324
	if (!ctx.cr6.eq) goto loc_82D3F324;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-4760
	ctx.r10.s64 = ctx.r11.s64 + -4760;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82d3f4a0
	goto loc_82D3F4A0;
loc_82D3F324:
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d3f3b8
	if (!ctx.cr6.eq) goto loc_82D3F3B8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82d3f36c
	if (!ctx.cr6.eq) goto loc_82D3F36C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82d3f35c
	if (ctx.cr6.eq) goto loc_82D3F35C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82d3f35c
	if (!ctx.cr6.gt) goto loc_82D3F35C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-3640
	ctx.r10.s64 = ctx.r11.s64 + -3640;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82d3f46c
	goto loc_82D3F46C;
loc_82D3F35C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-4520
	ctx.r10.s64 = ctx.r11.s64 + -4520;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82d3f46c
	goto loc_82D3F46C;
loc_82D3F36C:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d3f3b8
	if (!ctx.cr6.eq) goto loc_82D3F3B8;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82d3f3b8
	if (!ctx.cr6.eq) goto loc_82D3F3B8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82d3f3a8
	if (ctx.cr6.eq) goto loc_82D3F3A8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82d3f3a8
	if (!ctx.cr6.gt) goto loc_82D3F3A8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-3632
	ctx.r10.s64 = ctx.r11.s64 + -3632;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r23,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r23.u32);
	// b 0x82d3f46c
	goto loc_82D3F46C;
loc_82D3F3A8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-4416
	ctx.r10.s64 = ctx.r11.s64 + -4416;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82d3f46c
	goto loc_82D3F46C;
loc_82D3F3B8:
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r6,r10,r8
	ctx.r6.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// andc r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// twllei r8,0
	// subf. r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twlgei r7,-1
	// bne 0x82d3f450
	if (!ctx.cr0.eq) goto loc_82D3F450;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r6,r9,r11
	ctx.r6.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// andc r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// twllei r11,0
	// subf. r3,r5,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twlgei r7,-1
	// bne 0x82d3f450
	if (!ctx.cr0.eq) goto loc_82D3F450;
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r4,r10,r8
	ctx.r4.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// lis r5,-32044
	ctx.r5.s64 = -2100035584;
	// add r10,r27,r26
	ctx.r10.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r6,r27,r26
	ctx.r6.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r5,r5,-4736
	ctx.r5.s64 = ctx.r5.s64 + -4736;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// andc r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// stb r4,140(r10)
	PPC_STORE_U8(ctx.r10.u32 + 140, ctx.r4.u8);
	// twllei r8,0
	// stb r9,150(r6)
	PPC_STORE_U8(ctx.r6.u32 + 150, ctx.r9.u8);
	// twllei r11,0
	// twlgei r3,-1
	// twlgei r7,-1
	// b 0x82d3f46c
	goto loc_82D3F46C;
loc_82D3F450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D3F46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D3F46C:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r22,316(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d34280
	ctx.lr = 0x82D3F480;
	sub_82D34280(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D3F49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-40(r30)
	PPC_STORE_U32(ctx.r30.u32 + -40, ctx.r3.u32);
loc_82D3F4A0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d3f294
	if (ctx.cr6.lt) goto loc_82D3F294;
loc_82D3F4B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82D3F4C0"))) PPC_WEAK_FUNC(sub_82D3F4C0);
PPC_FUNC_IMPL(__imp__sub_82D3F4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D3F4C8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,460(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3F4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3F50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D3F52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3F54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r7,91
	ctx.r7.s64 = 5963776;
	// lis r8,-227
	ctx.r8.s64 = -14876672;
	// lis r9,-179
	ctx.r9.s64 = -11730944;
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// lis r30,0
	ctx.r30.s64 = 0;
	// lis r29,-44
	ctx.r29.s64 = -2883584;
	// ori r3,r6,26345
	ctx.r3.u64 = ctx.r6.u64 | 26345;
	// ori r4,r5,50594
	ctx.r4.u64 = ctx.r5.u64 | 50594;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r7,26880
	ctx.r7.u64 = ctx.r7.u64 | 26880;
	// ori r8,r8,44800
	ctx.r8.u64 = ctx.r8.u64 | 44800;
	// ori r9,r9,2944
	ctx.r9.u64 = ctx.r9.u64 | 2944;
	// ori r10,r10,36096
	ctx.r10.u64 = ctx.r10.u64 | 36096;
	// ori r5,r30,46802
	ctx.r5.u64 = ctx.r30.u64 | 46802;
	// ori r6,r29,51994
	ctx.r6.u64 = ctx.r29.u64 | 51994;
loc_82D3F594:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r29,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 16;
	// srawi r28,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 16;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r7,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u32);
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r10,r10,-22554
	ctx.r10.s64 = ctx.r10.s64 + -22554;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d3f594
	if (!ctx.cr6.lt) goto loc_82D3F594;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D3F5E0"))) PPC_WEAK_FUNC(sub_82D3F5E0);
PPC_FUNC_IMPL(__imp__sub_82D3F5E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D3F5E8;
	sub_82CA2BD0(ctx, base);
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// addic. r23,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r23.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r24,112(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r7,328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r26,20(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blt 0x82d3f6b0
	if (ctx.cr0.lt) goto loc_82D3F6B0;
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D3F610:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r11,r25,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// lwzx r8,r5,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r25.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// beq cr6,0x82d3f6a8
	if (ctx.cr6.eq) goto loc_82D3F6A8;
	// subf r30,r11,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r31,r11,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82D3F648:
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r3,r5,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r22,r5,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r3,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lwzx r5,r3,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// lwzx r3,r22,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r26.u32);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r5,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 16;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lwzx r5,r22,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r28.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bne 0x82d3f648
	if (!ctx.cr0.eq) goto loc_82D3F648;
loc_82D3F6A8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge 0x82d3f610
	if (!ctx.cr0.lt) goto loc_82D3F610;
loc_82D3F6B0:
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82D3F6B4"))) PPC_WEAK_FUNC(sub_82D3F6B4);
PPC_FUNC_IMPL(__imp__sub_82D3F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3F6B8"))) PPC_WEAK_FUNC(sub_82D3F6B8);
PPC_FUNC_IMPL(__imp__sub_82D3F6B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D3F6C0;
	sub_82CA2BEC(ctx, base);
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addic. r30,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r30.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blt 0x82d3f738
	if (ctx.cr0.lt) goto loc_82D3F738;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D3F6D4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d3f728
	if (!ctx.cr6.gt) goto loc_82D3F728;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_82D3F6E4:
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r29,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// beq cr6,0x82d3f718
	if (ctx.cr6.eq) goto loc_82D3F718;
loc_82D3F700:
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r29,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r29.u8);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bne 0x82d3f700
	if (!ctx.cr0.eq) goto loc_82D3F700;
loc_82D3F718:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d3f6e4
	if (ctx.cr6.lt) goto loc_82D3F6E4;
loc_82D3F728:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bge 0x82d3f6d4
	if (!ctx.cr0.lt) goto loc_82D3F6D4;
loc_82D3F738:
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D3F73C"))) PPC_WEAK_FUNC(sub_82D3F73C);
PPC_FUNC_IMPL(__imp__sub_82D3F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3F740"))) PPC_WEAK_FUNC(sub_82D3F740);
PPC_FUNC_IMPL(__imp__sub_82D3F740) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82d342b0
	sub_82D342B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3F75C"))) PPC_WEAK_FUNC(sub_82D3F75C);
PPC_FUNC_IMPL(__imp__sub_82D3F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3F760"))) PPC_WEAK_FUNC(sub_82D3F760);
PPC_FUNC_IMPL(__imp__sub_82D3F760) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addic. r31,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r31.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82d3f7bc
	if (ctx.cr0.lt) goto loc_82D3F7BC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D3F774:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// beq cr6,0x82d3f7b4
	if (ctx.cr6.eq) goto loc_82D3F7B4;
loc_82D3F794:
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// blt cr6,0x82d3f794
	if (ctx.cr6.lt) goto loc_82D3F794;
loc_82D3F7B4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82d3f774
	if (!ctx.cr0.lt) goto loc_82D3F774;
loc_82D3F7BC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D3F7C4"))) PPC_WEAK_FUNC(sub_82D3F7C4);
PPC_FUNC_IMPL(__imp__sub_82D3F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3F7C8"))) PPC_WEAK_FUNC(sub_82D3F7C8);
PPC_FUNC_IMPL(__imp__sub_82D3F7C8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D3F7D0;
	sub_82CA2BCC(ctx, base);
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// addic. r23,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r23.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r24,112(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r8,328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r25,20(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blt 0x82d3f8b8
	if (ctx.cr0.lt) goto loc_82D3F8B8;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D3F7F8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lwzx r7,r5,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// lwzx r5,r29,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// beq cr6,0x82d3f8b0
	if (ctx.cr6.eq) goto loc_82D3F8B0;
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r31,r11,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r30,r11,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82D3F83C:
	// lbzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbzx r22,r3,r11
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// rotlwi r21,r5,2
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r7,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subf r5,r22,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r22.s64;
	// lbz r5,255(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 255);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lwzx r7,r7,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r5,r21,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r25.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r5,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subf r5,r22,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r22.s64;
	// lbz r7,255(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 255);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwzx r5,r21,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r27.u32);
	// subf r7,r5,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subf r5,r22,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r22.s64;
	// lbz r7,255(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 255);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d3f83c
	if (!ctx.cr0.eq) goto loc_82D3F83C;
loc_82D3F8B0:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge 0x82d3f7f8
	if (!ctx.cr0.lt) goto loc_82D3F7F8;
loc_82D3F8B8:
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D3F8BC"))) PPC_WEAK_FUNC(sub_82D3F8BC);
PPC_FUNC_IMPL(__imp__sub_82D3F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3F8C0"))) PPC_WEAK_FUNC(sub_82D3F8C0);
PPC_FUNC_IMPL(__imp__sub_82D3F8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x82D3F8C8;
	sub_82CA2BB4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,460(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3F8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3F90C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D3F92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3F94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3F96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D3F98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3F9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D3F9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D3F9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D3FA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r6,r9,65153
	ctx.r6.u64 = ctx.r9.u64 | 65153;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lis r25,-75
	ctx.r25.s64 = -4915200;
	// lis r29,-5
	ctx.r29.s64 = -327680;
	// lis r30,-34
	ctx.r30.s64 = -2228224;
	// lis r26,-87
	ctx.r26.s64 = -5701632;
	// lis r3,-23
	ctx.r3.s64 = -1507328;
	// lis r4,-9
	ctx.r4.s64 = -589824;
	// lis r5,-25
	ctx.r5.s64 = -1638400;
	// lis r27,-76
	ctx.r27.s64 = -4980736;
	// lis r28,-66
	ctx.r28.s64 = -4325376;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r25,r25,56095
	ctx.r25.u64 = ctx.r25.u64 | 56095;
	// ori r29,r29,47199
	ctx.r29.u64 = ctx.r29.u64 | 47199;
	// ori r30,r30,44063
	ctx.r30.u64 = ctx.r30.u64 | 44063;
	// ori r26,r26,24607
	ctx.r26.u64 = ctx.r26.u64 | 24607;
	// ori r3,r3,42015
	ctx.r3.u64 = ctx.r3.u64 | 42015;
	// ori r4,r4,2335
	ctx.r4.u64 = ctx.r4.u64 | 2335;
	// ori r5,r5,60767
	ctx.r5.u64 = ctx.r5.u64 | 60767;
	// ori r27,r27,40991
	ctx.r27.u64 = ctx.r27.u64 | 40991;
	// ori r28,r28,12319
	ctx.r28.u64 = ctx.r28.u64 | 12319;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r17,63
	ctx.r17.s64 = 63;
	// ori r10,r10,257
	ctx.r10.u64 = ctx.r10.u64 | 257;
	// ori r16,r9,65280
	ctx.r16.u64 = ctx.r9.u64 | 65280;
loc_82D3FA9C:
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// bge cr6,0x82d3faac
	if (!ctx.cr6.lt) goto loc_82D3FAAC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x82d3fab4
	goto loc_82D3FAB4;
loc_82D3FAAC:
	// divw r9,r28,r17
	ctx.r9.s32 = ctx.r28.s32 / ctx.r17.s32;
	// subfic r9,r9,22464
	ctx.xer.ca = ctx.r9.u32 <= 22464;
	ctx.r9.s64 = 22464 - ctx.r9.s64;
loc_82D3FAB4:
	// lwz r15,24(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// bge cr6,0x82d3facc
	if (!ctx.cr6.lt) goto loc_82D3FACC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// b 0x82d3fad4
	goto loc_82D3FAD4;
loc_82D3FACC:
	// divw r9,r27,r17
	ctx.r9.s32 = ctx.r27.s32 / ctx.r17.s32;
	// subfic r9,r9,25728
	ctx.xer.ca = ctx.r9.u32 <= 25728;
	ctx.r9.s64 = 25728 - ctx.r9.s64;
loc_82D3FAD4:
	// lwz r15,28(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// bge cr6,0x82d3fb00
	if (!ctx.cr6.lt) goto loc_82D3FB00;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x82d3fb10
	goto loc_82D3FB10;
loc_82D3FB00:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r5,r17
	ctx.r15.s32 = ctx.r5.s32 / ctx.r17.s32;
	// ori r9,r9,47232
	ctx.r9.u64 = ctx.r9.u64 | 47232;
	// subf r9,r15,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r15.s64;
loc_82D3FB10:
	// lwz r15,32(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// bge cr6,0x82d3fb3c
	if (!ctx.cr6.lt) goto loc_82D3FB3C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// b 0x82d3fb44
	goto loc_82D3FB44;
loc_82D3FB3C:
	// divw r9,r4,r17
	ctx.r9.s32 = ctx.r4.s32 / ctx.r17.s32;
	// subf r9,r9,r16
	ctx.r9.s64 = ctx.r16.s64 - ctx.r9.s64;
loc_82D3FB44:
	// lwz r15,36(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// bge cr6,0x82d3fb70
	if (!ctx.cr6.lt) goto loc_82D3FB70;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// b 0x82d3fb80
	goto loc_82D3FB80;
loc_82D3FB70:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r3,r17
	ctx.r15.s32 = ctx.r3.s32 / ctx.r17.s32;
	// ori r9,r9,60672
	ctx.r9.u64 = ctx.r9.u64 | 60672;
	// subf r9,r15,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r15.s64;
loc_82D3FB80:
	// lwz r15,40(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// bge cr6,0x82d3fbac
	if (!ctx.cr6.lt) goto loc_82D3FBAC;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// b 0x82d3fbb4
	goto loc_82D3FBB4;
loc_82D3FBAC:
	// divw r9,r26,r17
	ctx.r9.s32 = ctx.r26.s32 / ctx.r17.s32;
	// subfic r9,r9,29568
	ctx.xer.ca = ctx.r9.u32 <= 29568;
	ctx.r9.s64 = 29568 - ctx.r9.s64;
loc_82D3FBB4:
	// lwz r15,44(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// bge cr6,0x82d3fbe0
	if (!ctx.cr6.lt) goto loc_82D3FBE0;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// b 0x82d3fbf0
	goto loc_82D3FBF0;
loc_82D3FBE0:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r30,r17
	ctx.r15.s32 = ctx.r30.s32 / ctx.r17.s32;
	// ori r9,r9,39936
	ctx.r9.u64 = ctx.r9.u64 | 39936;
	// subf r9,r15,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r15.s64;
loc_82D3FBF0:
	// lwz r15,48(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x82d3fc1c
	if (ctx.cr6.lt) goto loc_82D3FC1C;
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
loc_82D3FC1C:
	// lwz r15,52(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// bge cr6,0x82d3fc48
	if (!ctx.cr6.lt) goto loc_82D3FC48;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x82d3fc58
	goto loc_82D3FC58;
loc_82D3FC48:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r29,r17
	ctx.r15.s32 = ctx.r29.s32 / ctx.r17.s32;
	// ori r9,r9,63936
	ctx.r9.u64 = ctx.r9.u64 | 63936;
	// subf r9,r15,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r15.s64;
loc_82D3FC58:
	// lwz r15,56(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// bge cr6,0x82d3fc84
	if (!ctx.cr6.lt) goto loc_82D3FC84;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// b 0x82d3fc8c
	goto loc_82D3FC8C;
loc_82D3FC84:
	// divw r9,r25,r17
	ctx.r9.s32 = ctx.r25.s32 / ctx.r17.s32;
	// subfic r9,r9,32448
	ctx.xer.ca = ctx.r9.u32 <= 32448;
	ctx.r9.s64 = 32448 - ctx.r9.s64;
loc_82D3FC8C:
	// lwz r15,60(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r7,r7,-223
	ctx.r7.s64 = ctx.r7.s64 + -223;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r28,r28,22464
	ctx.r28.s64 = ctx.r28.s64 + 22464;
	// addi r24,r24,-206
	ctx.r24.s64 = ctx.r24.s64 + -206;
	// addi r27,r27,25728
	ctx.r27.s64 = ctx.r27.s64 + 25728;
	// stwx r9,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r9.u32);
	// addi r23,r23,-94
	ctx.r23.s64 = ctx.r23.s64 + -94;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r5,8217
	ctx.r5.s64 = ctx.r5.s64 + 8217;
	// addi r4,r4,3060
	ctx.r4.s64 = ctx.r4.s64 + 3060;
	// addi r22,r22,-24
	ctx.r22.s64 = ctx.r22.s64 + -24;
	// addi r3,r3,7632
	ctx.r3.s64 = ctx.r3.s64 + 7632;
	// addi r21,r21,-186
	ctx.r21.s64 = ctx.r21.s64 + -186;
	// addi r26,r26,29568
	ctx.r26.s64 = ctx.r26.s64 + 29568;
	// addi r20,r20,-132
	ctx.r20.s64 = ctx.r20.s64 + -132;
	// addi r30,r30,11376
	ctx.r30.s64 = ctx.r30.s64 + 11376;
	// addi r19,r19,-7
	ctx.r19.s64 = ctx.r19.s64 + -7;
	// addi r29,r29,1461
	ctx.r29.s64 = ctx.r29.s64 + 1461;
	// addi r18,r18,-171
	ctx.r18.s64 = ctx.r18.s64 + -171;
	// addi r25,r25,25308
	ctx.r25.s64 = ctx.r25.s64 + 25308;
	// cmpwi cr6,r7,8288
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8288, ctx.xer);
	// lwzx r15,r11,r9
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge cr6,0x82d3fa9c
	if (!ctx.cr6.lt) goto loc_82D3FA9C;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c04
	// ERROR 82CA2C04
	return;
}

__attribute__((alias("__imp__sub_82D3FD04"))) PPC_WEAK_FUNC(sub_82D3FD04);
PPC_FUNC_IMPL(__imp__sub_82D3FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D3FD08"))) PPC_WEAK_FUNC(sub_82D3FD08);
PPC_FUNC_IMPL(__imp__sub_82D3FD08) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D3FD10;
	sub_82CA2BB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r3.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r3.u32);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// lwz r17,112(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r27,28(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r26,32(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r25,36(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r24,40(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r23,44(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r22,48(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r21,52(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r20,56(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r19,60(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// blt 0x82d3fe74
	if (ctx.cr0.lt) goto loc_82D3FE74;
	// rlwinm r18,r5,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D3FD54:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwzx r9,r18,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// lwzx r11,r18,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r8.u32);
	// lwzx r8,r18,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r5.u32);
	// lwzx r5,r18,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// beq cr6,0x82d3fe68
	if (ctx.cr6.eq) goto loc_82D3FE68;
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r28,r11,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
loc_82D3FD9C:
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// subfic r9,r9,255
	ctx.xer.ca = ctx.r9.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r9.s64;
	// lbzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// subfic r5,r6,255
	ctx.xer.ca = ctx.r6.u32 <= 255;
	ctx.r5.s64 = 255 - ctx.r6.s64;
	// subfic r3,r3,255
	ctx.xer.ca = ctx.r3.u32 <= 255;
	ctx.r3.s64 = 255 - ctx.r3.s64;
	// subfic r31,r31,255
	ctx.xer.ca = ctx.r31.u32 <= 255;
	ctx.r31.s64 = 255 - ctx.r31.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r31,r6,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r16,r9,r7
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r15,r5,r24
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// mullw r31,r31,r16
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r16.s32);
	// lwzx r16,r3,r21
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r21.u32);
	// rlwinm r31,r31,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// mullw r31,r31,r15
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r15.s32);
	// rlwinm r31,r31,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// mullw r31,r31,r16
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r16.s32);
	// rlwinm r31,r31,8,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFF;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lwzx r31,r3,r20
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r20.u32);
	// lwzx r16,r6,r26
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lwzx r14,r9,r7
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r15,r5,r23
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// mullw r15,r15,r14
	ctx.r15.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r14.s32);
	// rlwinm r15,r15,16,16,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF;
	// mullw r31,r15,r31
	ctx.r31.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r31.s32);
	// rlwinm r31,r31,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// mullw r31,r31,r16
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r16.s32);
	// rlwinm r31,r31,8,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFF;
	// stb r31,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r31.u8);
	// lwzx r6,r6,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// lwzx r5,r5,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r3,r3,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r19.u32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// rlwinm r3,r6,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// mullw r9,r3,r5
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bne 0x82d3fd9c
	if (!ctx.cr0.eq) goto loc_82D3FD9C;
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r3,52(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
loc_82D3FE68:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r3.u32);
	// bge 0x82d3fd54
	if (!ctx.cr0.lt) goto loc_82D3FD54;
loc_82D3FE74:
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D3FE78"))) PPC_WEAK_FUNC(sub_82D3FE78);
PPC_FUNC_IMPL(__imp__sub_82D3FE78) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D3FE80;
	sub_82CA2BB0(ctx, base);
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// addic. r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r29.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r7,112(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// stw r29,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r29.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r25,28(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r24,32(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r23,36(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r22,40(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r21,44(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r19,52(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r18,56(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r17,60(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r16,8(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r15,12(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// blt 0x82d40044
	if (ctx.cr0.lt) goto loc_82D40044;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D3FEE4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r28,12(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r11,r5,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r30,r28,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// stw r9,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// beq cr6,0x82d40038
	if (ctx.cr6.eq) goto loc_82D40038;
	// subf r28,r11,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r27,r11,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r26,r11,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82D3FF2C:
	// lbzx r8,r27,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r8,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r30,-172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// rotlwi r4,r9,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r6,-176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lbzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r14,r26,r11
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwzx r5,r4,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r30,r29,r16
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r16.u32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwzx r29,r4,r15
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// add r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 + ctx.r9.u64;
	// srawi r5,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 16;
	// subfic r8,r14,255
	ctx.xer.ca = ctx.r14.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r14.s64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rotlwi r6,r4,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lbzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r4,r8,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lbzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r30,r6,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mullw r4,r30,r4
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// lwzx r30,r5,r22
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// lwzx r29,r9,r19
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// rlwinm r4,r4,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r4,r30
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// rlwinm r4,r4,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// rlwinm r4,r4,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lwzx r4,r9,r18
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	// lwzx r30,r6,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// lwzx r29,r5,r21
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r14,r8,r31
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mullw r29,r29,r14
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r14.s32);
	// rlwinm r29,r29,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r29,r4
	ctx.r4.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r4,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r4,r30
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// rlwinm r4,r4,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lwzx r6,r6,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// lwzx r5,r5,r20
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// lwzx r4,r9,r17
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r17.u32);
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r4,r8,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// mullw r6,r8,r5
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r6,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bne 0x82d3ff2c
	if (!ctx.cr0.eq) goto loc_82D3FF2C;
	// lwz r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r7,-164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r29,52(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
loc_82D40038:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r29.u32);
	// bge 0x82d3fee4
	if (!ctx.cr0.lt) goto loc_82D3FEE4;
loc_82D40044:
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D40048"))) PPC_WEAK_FUNC(sub_82D40048);
PPC_FUNC_IMPL(__imp__sub_82D40048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D40050;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D40070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32099
	ctx.r9.s64 = -2103640064;
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// addi r8,r9,-6032
	ctx.r8.s64 = ctx.r9.s64 + -6032;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82d400f0
	if (ctx.cr6.gt) goto loc_82D400F0;
	// lis r12,-32044
	ctx.r12.s64 = -2100035584;
	// addi r12,r12,172
	ctx.r12.s64 = ctx.r12.s64 + 172;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D400C0;
	case 1:
		goto loc_82D400D0;
	case 2:
		goto loc_82D400D0;
	case 3:
		goto loc_82D400E0;
	case 4:
		goto loc_82D400E0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,192(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 192);
	// lwz r22,208(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 208);
	// lwz r22,208(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 208);
	// lwz r22,224(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 224);
	// lwz r22,224(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 224);
loc_82D400C0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82d4011c
	if (ctx.cr6.eq) goto loc_82D4011C;
	// b 0x82d400fc
	goto loc_82D400FC;
loc_82D400D0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82d4011c
	if (ctx.cr6.eq) goto loc_82D4011C;
	// b 0x82d400fc
	goto loc_82D400FC;
loc_82D400E0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82d4011c
	if (ctx.cr6.eq) goto loc_82D4011C;
	// b 0x82d400fc
	goto loc_82D400FC;
loc_82D400F0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82d4011c
	if (!ctx.cr6.lt) goto loc_82D4011C;
loc_82D400FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D4011C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D4011C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82d40264
	if (ctx.cr6.eq) goto loc_82D40264;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d401a4
	if (ctx.cr6.eq) goto loc_82D401A4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82d40160
	if (ctx.cr6.eq) goto loc_82D40160;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d4027c
	if (!ctx.cr6.eq) goto loc_82D4027C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r9,r10,-2376
	ctx.r9.s64 = ctx.r10.s64 + -2376;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D40160:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82d4018c
	if (!ctx.cr6.eq) goto loc_82D4018C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2104
	ctx.r10.s64 = ctx.r11.s64 + -2104;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x82d3f4c0
	ctx.lr = 0x82D40188;
	sub_82D3F4C0(ctx, base);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D4018C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82d4027c
	if (!ctx.cr6.eq) goto loc_82D4027C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-2376
	ctx.r10.s64 = ctx.r11.s64 + -2376;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D401A4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82d401d0
	if (!ctx.cr6.eq) goto loc_82D401D0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2592
	ctx.r10.s64 = ctx.r11.s64 + -2592;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x82d3f4c0
	ctx.lr = 0x82D401CC;
	sub_82D3F4C0(ctx, base);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D401D0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d401e8
	if (!ctx.cr6.eq) goto loc_82D401E8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-2208
	ctx.r10.s64 = ctx.r11.s64 + -2208;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D401E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d40200
	if (!ctx.cr6.eq) goto loc_82D40200;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-2376
	ctx.r10.s64 = ctx.r11.s64 + -2376;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D40200:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d40220
	if (!ctx.cr6.eq) goto loc_82D40220;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-760
	ctx.r10.s64 = ctx.r11.s64 + -760;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x82d3f8c0
	ctx.lr = 0x82D4021C;
	sub_82D3F8C0(ctx, base);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D40220:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82d40244
	if (!ctx.cr6.eq) goto loc_82D40244;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r11,-392
	ctx.r10.s64 = ctx.r11.s64 + -392;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x82d3f4c0
	ctx.lr = 0x82D40238;
	sub_82D3F4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3f8c0
	ctx.lr = 0x82D40240;
	sub_82D3F8C0(ctx, base);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D40244:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D40260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D40264:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82d402a0
	if (ctx.cr6.eq) goto loc_82D402A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82d402a0
	if (ctx.cr6.eq) goto loc_82D402A0;
loc_82D4027C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D4029C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d402e4
	goto loc_82D402E4;
loc_82D402A0:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-2240
	ctx.r9.s64 = ctx.r10.s64 + -2240;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82d402e4
	if (!ctx.cr6.gt) goto loc_82D402E4;
	// li r10,84
	ctx.r10.s64 = 84;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D402C4:
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// stw r8,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d402c4
	if (ctx.cr6.lt) goto loc_82D402C4;
loc_82D402E4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d402fc
	if (ctx.cr6.eq) goto loc_82D402FC;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D402FC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D4030C"))) PPC_WEAK_FUNC(sub_82D4030C);
PPC_FUNC_IMPL(__imp__sub_82D4030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D40310"))) PPC_WEAK_FUNC(sub_82D40310);
PPC_FUNC_IMPL(__imp__sub_82D40310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D40318;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,456(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4033C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D4035C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D4037C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r7,91
	ctx.r7.s64 = 5963776;
	// lis r8,-227
	ctx.r8.s64 = -14876672;
	// lis r9,-179
	ctx.r9.s64 = -11730944;
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// lis r30,0
	ctx.r30.s64 = 0;
	// lis r29,-44
	ctx.r29.s64 = -2883584;
	// ori r3,r6,26345
	ctx.r3.u64 = ctx.r6.u64 | 26345;
	// ori r4,r5,50594
	ctx.r4.u64 = ctx.r5.u64 | 50594;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r7,26880
	ctx.r7.u64 = ctx.r7.u64 | 26880;
	// ori r8,r8,44800
	ctx.r8.u64 = ctx.r8.u64 | 44800;
	// ori r9,r9,2944
	ctx.r9.u64 = ctx.r9.u64 | 2944;
	// ori r10,r10,36096
	ctx.r10.u64 = ctx.r10.u64 | 36096;
	// ori r5,r30,46802
	ctx.r5.u64 = ctx.r30.u64 | 46802;
	// ori r6,r29,51994
	ctx.r6.u64 = ctx.r29.u64 | 51994;
loc_82D403E4:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r29,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 16;
	// srawi r28,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 16;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r7,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u32);
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r10,r10,-22554
	ctx.r10.s64 = ctx.r10.s64 + -22554;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d403e4
	if (!ctx.cr6.lt) goto loc_82D403E4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D40430"))) PPC_WEAK_FUNC(sub_82D40430);
PPC_FUNC_IMPL(__imp__sub_82D40430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D40448"))) PPC_WEAK_FUNC(sub_82D40448);
PPC_FUNC_IMPL(__imp__sub_82D40448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D40450;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,456(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d404a4
	if (ctx.cr6.eq) goto loc_82D404A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82d342b0
	ctx.lr = 0x82D40494;
	sub_82D342B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// b 0x82d40514
	goto loc_82D40514;
loc_82D404A4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82d404b8
	if (!ctx.cr6.lt) goto loc_82D404B8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D404B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d404cc
	if (!ctx.cr6.gt) goto loc_82D404CC;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82D404CC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x82d404f0
	if (!ctx.cr6.gt) goto loc_82D404F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82d40500
	goto loc_82D40500;
loc_82D404F0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_82D40500:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D40514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D40514:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d40544
	if (!ctx.cr6.eq) goto loc_82D40544;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D40544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D4054C"))) PPC_WEAK_FUNC(sub_82D4054C);
PPC_FUNC_IMPL(__imp__sub_82D4054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D40550"))) PPC_WEAK_FUNC(sub_82D40550);
PPC_FUNC_IMPL(__imp__sub_82D40550) {
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
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D4058C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82D405BC"))) PPC_WEAK_FUNC(sub_82D405BC);
PPC_FUNC_IMPL(__imp__sub_82D405BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D405C0"))) PPC_WEAK_FUNC(sub_82D405C0);
PPC_FUNC_IMPL(__imp__sub_82D405C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D405C8;
	sub_82CA2BD4(ctx, base);
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,112(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r28,16(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r27,20(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r26,24(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r25,28(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// beq cr6,0x82d406a8
	if (ctx.cr6.eq) goto loc_82D406A8;
loc_82D40610:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// lbz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rotlwi r29,r9,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r24,r31,2
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwzx r30,r29,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwzx r31,r24,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// lwzx r5,r29,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// add r23,r9,r30
	ctx.r23.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwzx r29,r24,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r27.u32);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r24,r9,r29
	ctx.r24.u64 = ctx.r9.u64 + ctx.r29.u64;
	// srawi r31,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 16;
	// lbzx r23,r23,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r23,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r23.u8);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bne 0x82d40610
	if (!ctx.cr0.eq) goto loc_82D40610;
loc_82D406A8:
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d40708
	if (ctx.cr6.eq) goto loc_82D40708;
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r7,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r6,r5,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r25.u32);
	// lwzx r7,r7,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r8,r5,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 16;
	// lbzx r6,r4,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
loc_82D40708:
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D4070C"))) PPC_WEAK_FUNC(sub_82D4070C);
PPC_FUNC_IMPL(__imp__sub_82D4070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D40710"))) PPC_WEAK_FUNC(sub_82D40710);
PPC_FUNC_IMPL(__imp__sub_82D40710) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D40718;
	sub_82CA2BCC(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// rlwinm r28,r4,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r26,16(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r25,20(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r24,24(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r23,28(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// beq cr6,0x82d40868
	if (ctx.cr6.eq) goto loc_82D40868;
loc_82D40770:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r22,r7,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwzx r7,r6,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lwzx r27,r22,r23
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// lwzx r8,r6,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r21,r5,r7
	ctx.r21.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwzx r6,r22,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// add r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 + ctx.r8.u64;
	// add r27,r5,r6
	ctx.r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// lbzx r22,r21,r11
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stb r22,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r22.u8);
	// lbzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lbzx r5,r27,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r27,r5,r7
	ctx.r27.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r22,r5,r8
	ctx.r22.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r27,r27,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// lbzx r27,r22,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r27,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r27.u8);
	// lbzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r27,r5,r7
	ctx.r27.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r22,r5,r8
	ctx.r22.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r27,r27,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stb r27,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbzx r27,r22,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// stb r27,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
	// lbzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r5,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r5.u8);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r5,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r5.u8);
	// lbzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r8,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// bne 0x82d40770
	if (!ctx.cr0.eq) goto loc_82D40770;
loc_82D40868:
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d408f0
	if (ctx.cr6.eq) goto loc_82D408F0;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r5,r7,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r6,r5,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// lwzx r4,r3,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	// lwzx r7,r5,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// add r31,r8,r6
	ctx.r31.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r5,r3,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lbzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r7,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
loc_82D408F0:
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D408F4"))) PPC_WEAK_FUNC(sub_82D408F4);
PPC_FUNC_IMPL(__imp__sub_82D408F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D408F8"))) PPC_WEAK_FUNC(sub_82D408F8);
PPC_FUNC_IMPL(__imp__sub_82D408F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d40710
	sub_82D40710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D408FC"))) PPC_WEAK_FUNC(sub_82D408FC);
PPC_FUNC_IMPL(__imp__sub_82D408FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D40900"))) PPC_WEAK_FUNC(sub_82D40900);
PPC_FUNC_IMPL(__imp__sub_82D40900) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D40930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 456, ctx.r31.u32);
	// addi r8,r9,1072
	ctx.r8.s64 = ctx.r9.s64 + 1072;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r4,316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82d409a4
	if (!ctx.cr6.eq) goto loc_82D409A4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r9,r11,1096
	ctx.r9.s64 = ctx.r11.s64 + 1096;
	// addi r8,r10,2296
	ctx.r8.s64 = ctx.r10.s64 + 2296;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D4099C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x82d409c0
	goto loc_82D409C0;
loc_82D409A4:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r8,r10,1360
	ctx.r8.s64 = ctx.r10.s64 + 1360;
	// addi r7,r9,1472
	ctx.r7.s64 = ctx.r9.s64 + 1472;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_82D409C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d40310
	ctx.lr = 0x82D409C8;
	sub_82D40310(ctx, base);
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

__attribute__((alias("__imp__sub_82D409E0"))) PPC_WEAK_FUNC(sub_82D409E0);
PPC_FUNC_IMPL(__imp__sub_82D409E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D409E8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r31,344(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82d40adc
	if (!ctx.cr6.lt) goto loc_82D40ADC;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82D40A18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82d40a50
	if (!ctx.cr6.lt) goto loc_82D40A50;
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D40A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D40A50:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82d40adc
	if (!ctx.cr6.eq) goto loc_82D40ADC;
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D40A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d40ac0
	if (ctx.cr6.eq) goto loc_82D40AC0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d40a98
	if (ctx.cr6.eq) goto loc_82D40A98;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_82D40A98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d40a18
	if (ctx.cr6.lt) goto loc_82D40A18;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82D40AC0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d40adc
	if (!ctx.cr6.eq) goto loc_82D40ADC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_82D40ADC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D40AE4"))) PPC_WEAK_FUNC(sub_82D40AE4);
PPC_FUNC_IMPL(__imp__sub_82D40AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D40AE8"))) PPC_WEAK_FUNC(sub_82D40AE8);
PPC_FUNC_IMPL(__imp__sub_82D40AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82d40b2c
	if (ctx.cr6.eq) goto loc_82D40B2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82D40B2C:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r9,r10,2528
	ctx.r9.s64 = ctx.r10.s64 + 2528;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D40B3C"))) PPC_WEAK_FUNC(sub_82D40B3C);
PPC_FUNC_IMPL(__imp__sub_82D40B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D40B40"))) PPC_WEAK_FUNC(sub_82D40B40);
PPC_FUNC_IMPL(__imp__sub_82D40B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D40B48;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D40B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// addi r8,r9,2792
	ctx.r8.s64 = ctx.r9.s64 + 2792;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82d40c18
	if (!ctx.cr6.eq) goto loc_82D40C18;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d40bb8
	if (ctx.cr6.eq) goto loc_82D40BB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D40BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82D40BB8:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d40c18
	if (!ctx.cr6.gt) goto loc_82D40C18;
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
loc_82D40BD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D40BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d40bd4
	if (ctx.cr6.lt) goto loc_82D40BD4;
loc_82D40C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D40C20"))) PPC_WEAK_FUNC(sub_82D40C20);
PPC_FUNC_IMPL(__imp__sub_82D40C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82d40c48
	if (!ctx.cr6.gt) goto loc_82D40C48;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
loc_82D40C48:
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82d40c78
	if (!ctx.cr6.lt) goto loc_82D40C78;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
loc_82D40C78:
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

