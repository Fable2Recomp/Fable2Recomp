#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C9D008"))) PPC_WEAK_FUNC(sub_82C9D008);
PPC_FUNC_IMPL(__imp__sub_82C9D008) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9d0a4
	if (ctx.cr6.eq) goto loc_82C9D0A4;
	// cmpwi cr6,r4,17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 17, ctx.xer);
	// beq cr6,0x82c9d070
	if (ctx.cr6.eq) goto loc_82C9D070;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x82c9d054
	if (ctx.cr6.eq) goto loc_82C9D054;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9d040
	if (!ctx.cr6.eq) goto loc_82C9D040;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9d040
	if (!ctx.cr6.eq) goto loc_82C9D040;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9D040:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = ctx.r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D054:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r8,r11,-18696
	ctx.r8.s64 = ctx.r11.s64 + -18696;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82C9D070:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c9d090
	if (ctx.cr6.eq) goto loc_82C9D090;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C9D090:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r11,r11,7832
	ctx.r11.s64 = ctx.r11.s64 + 7832;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C9D0A4:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D0AC"))) PPC_WEAK_FUNC(sub_82C9D0AC);
PPC_FUNC_IMPL(__imp__sub_82C9D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9D0B0"))) PPC_WEAK_FUNC(sub_82C9D0B0);
PPC_FUNC_IMPL(__imp__sub_82C9D0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C9D0B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 15, ctx.xer);
	// beq cr6,0x82c9d1bc
	if (ctx.cr6.eq) goto loc_82C9D1BC;
	// cmpwi cr6,r27,20
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 20, ctx.xer);
	// beq cr6,0x82c9d100
	if (ctx.cr6.eq) goto loc_82C9D100;
	// cmpwi cr6,r27,27
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 27, ctx.xer);
	// bne cr6,0x82c9d1c8
	if (!ctx.cr6.eq) goto loc_82C9D1C8;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r10,r11,6656
	ctx.r10.s64 = ctx.r11.s64 + 6656;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D100:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3128
	ctx.r30.s64 = ctx.r11.s64 + 3128;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9d148
	if (ctx.cr6.eq) goto loc_82C9D148;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r10,r11,6656
	ctx.r10.s64 = ctx.r11.s64 + 6656;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D148:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9d188
	if (ctx.cr6.eq) goto loc_82C9D188;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r10,r11,6656
	ctx.r10.s64 = ctx.r11.s64 + 6656;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D188:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9d1c8
	if (ctx.cr6.eq) goto loc_82C9D1C8;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-18992
	ctx.r10.s64 = ctx.r11.s64 + -18992;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82C9D1BC:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D1C8:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9d1e8
	if (!ctx.cr6.eq) goto loc_82C9D1E8;
	// cmpwi cr6,r27,28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 28, ctx.xer);
	// bne cr6,0x82c9d1e8
	if (!ctx.cr6.eq) goto loc_82C9D1E8;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D1E8:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9D200"))) PPC_WEAK_FUNC(sub_82C9D200);
PPC_FUNC_IMPL(__imp__sub_82C9D200) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9d274
	if (ctx.cr6.eq) goto loc_82C9D274;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// beq cr6,0x82c9d268
	if (ctx.cr6.eq) goto loc_82C9D268;
	// cmpwi cr6,r4,36
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 36, ctx.xer);
	// beq cr6,0x82c9d24c
	if (ctx.cr6.eq) goto loc_82C9D24C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9d238
	if (!ctx.cr6.eq) goto loc_82C9D238;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9d238
	if (!ctx.cr6.eq) goto loc_82C9D238;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9D238:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D24C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r3,46
	ctx.r3.s64 = 46;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82C9D268:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-9576
	ctx.r9.s64 = ctx.r10.s64 + -9576;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82C9D274:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D27C"))) PPC_WEAK_FUNC(sub_82C9D27C);
PPC_FUNC_IMPL(__imp__sub_82C9D27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9D280"))) PPC_WEAK_FUNC(sub_82C9D280);
PPC_FUNC_IMPL(__imp__sub_82C9D280) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-15
	ctx.r10.s64 = ctx.r4.s64 + -15;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// bgt cr6,0x82c9d3e8
	if (ctx.cr6.gt) {
		sub_82C9D3E8(ctx, base);
		return;
	}
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-11608
	ctx.r12.s64 = ctx.r12.s64 + -11608;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82C9D308
		return;
	case 1:
		// ERROR: 0x82C9D3E8
		return;
	case 2:
		// ERROR: 0x82C9D3E8
		return;
	case 3:
		// ERROR: 0x82C9D3E8
		return;
	case 4:
		// ERROR: 0x82C9D3E8
		return;
	case 5:
		// ERROR: 0x82C9D3E8
		return;
	case 6:
		// ERROR: 0x82C9D3D4
		return;
	case 7:
		// ERROR: 0x82C9D3E8
		return;
	case 8:
		// ERROR: 0x82C9D3E8
		return;
	case 9:
		// ERROR: 0x82C9D310
		return;
	case 10:
		// ERROR: 0x82C9D3E8
		return;
	case 11:
		// ERROR: 0x82C9D3E8
		return;
	case 12:
		// ERROR: 0x82C9D3E8
		return;
	case 13:
		// ERROR: 0x82C9D3E8
		return;
	case 14:
		// ERROR: 0x82C9D3E8
		return;
	case 15:
		// ERROR: 0x82C9D3E8
		return;
	case 16:
		// ERROR: 0x82C9D3E8
		return;
	case 17:
		// ERROR: 0x82C9D3E8
		return;
	case 18:
		// ERROR: 0x82C9D3E8
		return;
	case 19:
		// ERROR: 0x82C9D3E8
		return;
	case 20:
		// ERROR: 0x82C9D368
		return;
	case 21:
		// ERROR: 0x82C9D33C
		return;
	case 22:
		// ERROR: 0x82C9D394
		return;
	case 23:
		// ERROR: 0x82C9D3C0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C9D2A8"))) PPC_WEAK_FUNC(sub_82C9D2A8);
PPC_FUNC_IMPL(__imp__sub_82C9D2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-11512(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11512);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11308(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11308);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11504(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11504);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11416(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11416);
	// lwz r22,-11460(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11460);
	// lwz r22,-11372(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11372);
	// lwz r22,-11328(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11328);
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D310"))) PPC_WEAK_FUNC(sub_82C9D310);
PPC_FUNC_IMPL(__imp__sub_82C9D310) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d334
	if (!ctx.cr0.eq) goto loc_82C9D334;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82C9D334:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D33C"))) PPC_WEAK_FUNC(sub_82C9D33C);
PPC_FUNC_IMPL(__imp__sub_82C9D33C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d360
	if (!ctx.cr0.eq) goto loc_82C9D360;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82C9D360:
	// li r3,46
	ctx.r3.s64 = 46;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D368"))) PPC_WEAK_FUNC(sub_82C9D368);
PPC_FUNC_IMPL(__imp__sub_82C9D368) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d38c
	if (!ctx.cr0.eq) goto loc_82C9D38C;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82C9D38C:
	// li r3,47
	ctx.r3.s64 = 47;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D394"))) PPC_WEAK_FUNC(sub_82C9D394);
PPC_FUNC_IMPL(__imp__sub_82C9D394) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d3b8
	if (!ctx.cr0.eq) goto loc_82C9D3B8;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82C9D3B8:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D3C0"))) PPC_WEAK_FUNC(sub_82C9D3C0);
PPC_FUNC_IMPL(__imp__sub_82C9D3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,50
	ctx.r3.s64 = 50;
	// addi r9,r10,-9472
	ctx.r9.s64 = ctx.r10.s64 + -9472;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D3D4"))) PPC_WEAK_FUNC(sub_82C9D3D4);
PPC_FUNC_IMPL(__imp__sub_82C9D3D4) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r9,r10,-9472
	ctx.r9.s64 = ctx.r10.s64 + -9472;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D3E8"))) PPC_WEAK_FUNC(sub_82C9D3E8);
PPC_FUNC_IMPL(__imp__sub_82C9D3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9d404
	if (!ctx.cr6.eq) goto loc_82C9D404;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9d404
	if (!ctx.cr6.eq) goto loc_82C9D404;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9D404:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D418"))) PPC_WEAK_FUNC(sub_82C9D418);
PPC_FUNC_IMPL(__imp__sub_82C9D418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C9D420;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 15, ctx.xer);
	// beq cr6,0x82c9d480
	if (ctx.cr6.eq) goto loc_82C9D480;
	// cmpwi cr6,r27,18
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 18, ctx.xer);
	// bne cr6,0x82c9d4c8
	if (!ctx.cr6.eq) goto loc_82C9D4C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3156
	ctx.r30.s64 = ctx.r11.s64 + 3156;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9d48c
	if (ctx.cr6.eq) goto loc_82C9D48C;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-18896
	ctx.r10.s64 = ctx.r11.s64 + -18896;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82C9D480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D48C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9D4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9d4c8
	if (ctx.cr6.eq) goto loc_82C9D4C8;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-18792
	ctx.r10.s64 = ctx.r11.s64 + -18792;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D4C8:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9d4e8
	if (!ctx.cr6.eq) goto loc_82C9D4E8;
	// cmpwi cr6,r27,28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 28, ctx.xer);
	// bne cr6,0x82c9d4e8
	if (!ctx.cr6.eq) goto loc_82C9D4E8;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9D4E8:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9D500"))) PPC_WEAK_FUNC(sub_82C9D500);
PPC_FUNC_IMPL(__imp__sub_82C9D500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C9D508;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-11008
	ctx.r10.s64 = ctx.r11.s64 + -11008;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9D548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// stw r6,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r6.u32);
	// bgt cr6,0x82c9d694
	if (ctx.cr6.gt) goto loc_82C9D694;
loc_82C9D55C:
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-10892
	ctx.r12.s64 = ctx.r12.s64 + -10892;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C9D6A0;
	case 1:
		goto loc_82C9D694;
	case 2:
		goto loc_82C9D694;
	case 3:
		goto loc_82C9D694;
	case 4:
		goto loc_82C9D694;
	case 5:
		goto loc_82C9D694;
	case 6:
		goto loc_82C9D694;
	case 7:
		goto loc_82C9D694;
	case 8:
		goto loc_82C9D694;
	case 9:
		goto loc_82C9D694;
	case 10:
		goto loc_82C9D694;
	case 11:
		goto loc_82C9D6E8;
	case 12:
		goto loc_82C9D694;
	case 13:
		goto loc_82C9D72C;
	case 14:
		goto loc_82C9D714;
	case 15:
		goto loc_82C9D704;
	case 16:
		goto loc_82C9D694;
	case 17:
		goto loc_82C9D694;
	case 18:
		goto loc_82C9D694;
	case 19:
		goto loc_82C9D694;
	case 20:
		goto loc_82C9D694;
	case 21:
		goto loc_82C9D694;
	case 22:
		goto loc_82C9D694;
	case 23:
		goto loc_82C9D694;
	case 24:
		goto loc_82C9D694;
	case 25:
		goto loc_82C9D694;
	case 26:
		goto loc_82C9D610;
	case 27:
		goto loc_82C9D694;
	case 28:
		goto loc_82C9D624;
	case 29:
		goto loc_82C9D694;
	case 30:
		goto loc_82C9D5F0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-10592(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10592);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10520(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10520);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10452(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10452);
	// lwz r22,-10476(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10476);
	// lwz r22,-10492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10492);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10736(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10736);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10716(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10716);
	// lwz r22,-10604(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10768(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10768);
loc_82C9D5F0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9d640
	if (ctx.cr6.eq) goto loc_82C9D640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82C9D60C;
	sub_82C98FD8(ctx, base);
	// b 0x82c9d63c
	goto loc_82C9D63C;
loc_82C9D610:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c810
	ctx.lr = 0x82C9D620;
	sub_82C9C810(ctx, base);
	// b 0x82c9d634
	goto loc_82C9D634;
loc_82C9D624:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c918
	ctx.lr = 0x82C9D634;
	sub_82C9C918(ctx, base);
loc_82C9D634:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9d6f8
	if (ctx.cr6.eq) goto loc_82C9D6F8;
loc_82C9D63C:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C9D640:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r6,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r6.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82c9d6c8
	if (ctx.cr6.eq) goto loc_82C9D6C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82c9d6d8
	if (ctx.cr6.eq) goto loc_82C9D6D8;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// stw r6,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r6.u32);
	// ble cr6,0x82c9d55c
	if (!ctx.cr6.gt) goto loc_82C9D55C;
loc_82C9D694:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82C9D6A0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9d6d8
	if (ctx.cr6.eq) goto loc_82C9D6D8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82C9D6BC;
	sub_82C98FD8(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c9d6d4
	if (!ctx.cr6.eq) goto loc_82C9D6D4;
loc_82C9D6C8:
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82C9D6D4:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C9D6D8:
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82C9D6E8:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82C9D6F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82C9D704:
	// stw r6,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r6.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82C9D714:
	// lbz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9d6e8
	if (ctx.cr6.eq) goto loc_82C9D6E8;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82C9D72C:
	// lbz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9d6e8
	if (ctx.cr6.eq) goto loc_82C9D6E8;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9D744"))) PPC_WEAK_FUNC(sub_82C9D744);
PPC_FUNC_IMPL(__imp__sub_82C9D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9D748"))) PPC_WEAK_FUNC(sub_82C9D748);
PPC_FUNC_IMPL(__imp__sub_82C9D748) {
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
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x82c9be58
	ctx.lr = 0x82C9D768;
	sub_82C9BE58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9d7e0
	if (!ctx.cr6.eq) goto loc_82C9D7E0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9d7a0
	if (!ctx.cr6.eq) goto loc_82C9D7A0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82c9d7a0
	if (ctx.cr0.eq) goto loc_82C9D7A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82c9d7a0
	if (!ctx.cr6.eq) goto loc_82C9D7A0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82C9D7A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c9d7c4
	if (!ctx.cr6.eq) goto loc_82C9D7C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c99808
	ctx.lr = 0x82C9D7B8;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9d7f8
	if (ctx.cr6.eq) goto loc_82C9D7F8;
loc_82C9D7C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_82C9D7E0:
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
loc_82C9D7F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c9d7e0
	goto loc_82C9D7E0;
}

__attribute__((alias("__imp__sub_82C9D800"))) PPC_WEAK_FUNC(sub_82C9D800);
PPC_FUNC_IMPL(__imp__sub_82C9D800) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 15, ctx.xer);
	// beq cr6,0x82c9d868
	if (ctx.cr6.eq) goto loc_82C9D868;
	// cmpwi cr6,r31,17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 17, ctx.xer);
	// beq cr6,0x82c9d8b4
	if (ctx.cr6.eq) goto loc_82C9D8B4;
	// cmpwi cr6,r31,18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 18, ctx.xer);
	// bne cr6,0x82c9d884
	if (!ctx.cr6.eq) goto loc_82C9D884;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r11,3180
	ctx.r6.s64 = ctx.r11.s64 + 3180;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9d884
	if (ctx.cr6.eq) goto loc_82C9D884;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-12584
	ctx.r10.s64 = ctx.r11.s64 + -12584;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82C9D868:
	// li r3,11
	ctx.r3.s64 = 11;
loc_82C9D86C:
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
loc_82C9D884:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9d8a0
	if (!ctx.cr6.eq) goto loc_82C9D8A0;
	// cmpwi cr6,r31,28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 28, ctx.xer);
	// bne cr6,0x82c9d8a0
	if (!ctx.cr6.eq) goto loc_82C9D8A0;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82c9d86c
	goto loc_82C9D86C;
loc_82C9D8A0:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82c9d86c
	goto loc_82C9D86C;
loc_82C9D8B4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c9d8d4
	if (ctx.cr6.eq) goto loc_82C9D8D4;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82c9d86c
	goto loc_82C9D86C;
loc_82C9D8D4:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r11,r11,7832
	ctx.r11.s64 = ctx.r11.s64 + 7832;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82c9d86c
	goto loc_82C9D86C;
}

__attribute__((alias("__imp__sub_82C9D8E8"))) PPC_WEAK_FUNC(sub_82C9D8E8);
PPC_FUNC_IMPL(__imp__sub_82C9D8E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9d940
	if (ctx.cr6.eq) goto loc_82C9D940;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x82c9d92c
	if (ctx.cr6.eq) goto loc_82C9D92C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9d918
	if (!ctx.cr6.eq) goto loc_82C9D918;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9d918
	if (!ctx.cr6.eq) goto loc_82C9D918;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9D918:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D92C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r9,r10,-12480
	ctx.r9.s64 = ctx.r10.s64 + -12480;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D940:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D948"))) PPC_WEAK_FUNC(sub_82C9D948);
PPC_FUNC_IMPL(__imp__sub_82C9D948) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9d9a0
	if (ctx.cr6.eq) goto loc_82C9D9A0;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x82c9d98c
	if (ctx.cr6.eq) goto loc_82C9D98C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9d978
	if (!ctx.cr6.eq) goto loc_82C9D978;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9d978
	if (!ctx.cr6.eq) goto loc_82C9D978;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9D978:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D98C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r9,r10,-12280
	ctx.r9.s64 = ctx.r10.s64 + -12280;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D9A0:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D9A8"))) PPC_WEAK_FUNC(sub_82C9D9A8);
PPC_FUNC_IMPL(__imp__sub_82C9D9A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9da14
	if (ctx.cr6.eq) goto loc_82C9DA14;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// beq cr6,0x82c9da08
	if (ctx.cr6.eq) goto loc_82C9DA08;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// beq cr6,0x82c9d9f4
	if (ctx.cr6.eq) goto loc_82C9D9F4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9d9e0
	if (!ctx.cr6.eq) goto loc_82C9D9E0;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9d9e0
	if (!ctx.cr6.eq) goto loc_82C9D9E0;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9D9E0:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D9F4:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r9,r10,-12112
	ctx.r9.s64 = ctx.r10.s64 + -12112;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DA08:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-6024
	ctx.r9.s64 = ctx.r10.s64 + -6024;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82C9DA14:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DA1C"))) PPC_WEAK_FUNC(sub_82C9DA1C);
PPC_FUNC_IMPL(__imp__sub_82C9DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9DA20"))) PPC_WEAK_FUNC(sub_82C9DA20);
PPC_FUNC_IMPL(__imp__sub_82C9DA20) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9da8c
	if (ctx.cr6.eq) goto loc_82C9DA8C;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// beq cr6,0x82c9da80
	if (ctx.cr6.eq) goto loc_82C9DA80;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// beq cr6,0x82c9da6c
	if (ctx.cr6.eq) goto loc_82C9DA6C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9da58
	if (!ctx.cr6.eq) goto loc_82C9DA58;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9da58
	if (!ctx.cr6.eq) goto loc_82C9DA58;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9DA58:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DA6C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r9,r10,-12112
	ctx.r9.s64 = ctx.r10.s64 + -12112;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DA80:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-5800
	ctx.r9.s64 = ctx.r10.s64 + -5800;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82C9DA8C:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DA94"))) PPC_WEAK_FUNC(sub_82C9DA94);
PPC_FUNC_IMPL(__imp__sub_82C9DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9DA98"))) PPC_WEAK_FUNC(sub_82C9DA98);
PPC_FUNC_IMPL(__imp__sub_82C9DA98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9daf8
	if (ctx.cr6.eq) goto loc_82C9DAF8;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82c9dae4
	if (ctx.cr6.eq) goto loc_82C9DAE4;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// beq cr6,0x82c9dae4
	if (ctx.cr6.eq) goto loc_82C9DAE4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9dad0
	if (!ctx.cr6.eq) goto loc_82C9DAD0;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9dad0
	if (!ctx.cr6.eq) goto loc_82C9DAD0;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9DAD0:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DAE4:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r9,r10,-11776
	ctx.r9.s64 = ctx.r10.s64 + -11776;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DAF8:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DB00"))) PPC_WEAK_FUNC(sub_82C9DB00);
PPC_FUNC_IMPL(__imp__sub_82C9DB00) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-15
	ctx.r10.s64 = ctx.r4.s64 + -15;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bgt cr6,0x82c9dc00
	if (ctx.cr6.gt) {
		sub_82C9DC00(ctx, base);
		return;
	}
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-9432
	ctx.r12.s64 = ctx.r12.s64 + -9432;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82C9DB94
		return;
	case 1:
		// ERROR: 0x82C9DC00
		return;
	case 2:
		// ERROR: 0x82C9DC00
		return;
	case 3:
		// ERROR: 0x82C9DBB0
		return;
	case 4:
		// ERROR: 0x82C9DC00
		return;
	case 5:
		// ERROR: 0x82C9DC00
		return;
	case 6:
		// ERROR: 0x82C9DC00
		return;
	case 7:
		// ERROR: 0x82C9DC00
		return;
	case 8:
		// ERROR: 0x82C9DB9C
		return;
	case 9:
		// ERROR: 0x82C9DC00
		return;
	case 10:
		// ERROR: 0x82C9DC00
		return;
	case 11:
		// ERROR: 0x82C9DC00
		return;
	case 12:
		// ERROR: 0x82C9DC00
		return;
	case 13:
		// ERROR: 0x82C9DC00
		return;
	case 14:
		// ERROR: 0x82C9DC00
		return;
	case 15:
		// ERROR: 0x82C9DBC4
		return;
	case 16:
		// ERROR: 0x82C9DBD8
		return;
	case 17:
		// ERROR: 0x82C9DBEC
		return;
	case 18:
		// ERROR: 0x82C9DC00
		return;
	case 19:
		// ERROR: 0x82C9DC00
		return;
	case 20:
		// ERROR: 0x82C9DC00
		return;
	case 21:
		// ERROR: 0x82C9DC00
		return;
	case 22:
		// ERROR: 0x82C9DC00
		return;
	case 23:
		// ERROR: 0x82C9DC00
		return;
	case 24:
		// ERROR: 0x82C9DC00
		return;
	case 25:
		// ERROR: 0x82C9DC00
		return;
	case 26:
		// ERROR: 0x82C9DBB0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C9DB28"))) PPC_WEAK_FUNC(sub_82C9DB28);
PPC_FUNC_IMPL(__imp__sub_82C9DB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-9324(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9324);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9296(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9296);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9316(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9316);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9276(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9276);
	// lwz r22,-9256(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9256);
	// lwz r22,-9236(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9236);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9296(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9296);
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DB9C"))) PPC_WEAK_FUNC(sub_82C9DB9C);
PPC_FUNC_IMPL(__imp__sub_82C9DB9C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DBB0"))) PPC_WEAK_FUNC(sub_82C9DBB0);
PPC_FUNC_IMPL(__imp__sub_82C9DBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DBC4"))) PPC_WEAK_FUNC(sub_82C9DBC4);
PPC_FUNC_IMPL(__imp__sub_82C9DBC4) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,53
	ctx.r3.s64 = 53;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DBD8"))) PPC_WEAK_FUNC(sub_82C9DBD8);
PPC_FUNC_IMPL(__imp__sub_82C9DBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DBEC"))) PPC_WEAK_FUNC(sub_82C9DBEC);
PPC_FUNC_IMPL(__imp__sub_82C9DBEC) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DC00"))) PPC_WEAK_FUNC(sub_82C9DC00);
PPC_FUNC_IMPL(__imp__sub_82C9DC00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9dc1c
	if (!ctx.cr6.eq) goto loc_82C9DC1C;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9dc1c
	if (!ctx.cr6.eq) goto loc_82C9DC1C;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9DC1C:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DC30"))) PPC_WEAK_FUNC(sub_82C9DC30);
PPC_FUNC_IMPL(__imp__sub_82C9DC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82C9DC38;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r28,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r14,356(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// addi r30,r14,20
	ctx.r30.s64 = ctx.r14.s64 + 20;
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// bl 0x82c99298
	ctx.lr = 0x82C9DC78;
	sub_82C99298(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82c9dce0
	if (!ctx.cr6.eq) goto loc_82C9DCE0;
	// addi r3,r14,80
	ctx.r3.s64 = ctx.r14.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82c9b268
	ctx.lr = 0x82C9DC90;
	sub_82C9B268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82c9dca8
	if (!ctx.cr6.eq) goto loc_82C9DCA8;
loc_82C9DC9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82C9DCA8:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c99298
	ctx.lr = 0x82C9DCB4;
	sub_82C99298(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
	// lbz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9dce0
	if (ctx.cr6.eq) goto loc_82C9DCE0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9aad0
	ctx.lr = 0x82C9DCD8;
	sub_82C9AAD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
loc_82C9DCE0:
	// lwz r21,12(r17)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,392(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9DD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// add r11,r25,r21
	ctx.r11.u64 = ctx.r25.u64 + ctx.r21.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82c9dd60
	if (!ctx.cr6.gt) goto loc_82C9DD60;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9DD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
	// stw r6,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r6.u32);
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82c9dd60
	if (!ctx.cr6.gt) goto loc_82C9DD60;
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9DD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C9DD60:
	// lwz r18,392(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r22,2
	ctx.r22.s64 = 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82c9df10
	if (!ctx.cr6.gt) goto loc_82C9DF10;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82C9DD80:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwzx r29,r27,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9DDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c9c0
	ctx.lr = 0x82C9DDB4;
	sub_82C9C9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c9df64
	if (!ctx.cr6.eq) goto loc_82C9DF64;
	// stb r23,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r23.u8);
	// addi r28,r20,1
	ctx.r28.s64 = ctx.r20.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c9de84
	if (!ctx.cr6.eq) goto loc_82C9DE84;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9de50
	if (ctx.cr6.eq) goto loc_82C9DE50;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82c9de50
	if (!ctx.cr6.gt) goto loc_82C9DE50;
	// lwz r8,20(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82C9DE1C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82c9de3c
	if (ctx.cr6.eq) goto loc_82C9DE3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82c9de1c
	if (ctx.cr6.lt) goto loc_82C9DE1C;
	// b 0x82c9de50
	goto loc_82C9DE50;
loc_82C9DE3C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
loc_82C9DE50:
	// addi r8,r31,416
	ctx.r8.s64 = ctx.r31.s64 + 416;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9d748
	ctx.lr = 0x82C9DE68;
	sub_82C9D748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9e614
	if (!ctx.cr6.eq) goto loc_82C9E614;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// b 0x82c9deac
	goto loc_82C9DEAC;
loc_82C9DE84:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82c9b2f8
	ctx.lr = 0x82C9DE98;
	sub_82C9B2F8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_82C9DEAC:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c9def8
	if (ctx.cr6.eq) goto loc_82C9DEF8;
	// lbz r11,9(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9deec
	if (ctx.cr6.eq) goto loc_82C9DEEC;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98ad0
	ctx.lr = 0x82C9DED8;
	sub_82C98AD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9e614
	if (!ctx.cr6.eq) goto loc_82C9E614;
	// addi r20,r28,-1
	ctx.r20.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c9df00
	goto loc_82C9DF00;
loc_82C9DEEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stb r22,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r22.u8);
loc_82C9DEF8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r20,r28,1
	ctx.r20.s64 = ctx.r28.s64 + 1;
loc_82C9DF00:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82c9dd80
	if (ctx.cr6.lt) goto loc_82C9DD80;
loc_82C9DF10:
	// stw r20,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r20.u32);
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9df94
	if (ctx.cr6.eq) goto loc_82C9DF94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c9df94
	if (ctx.cr6.eq) goto loc_82C9DF94;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82c9df9c
	if (!ctx.cr6.gt) goto loc_82C9DF9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82C9DF44:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82c9df8c
	if (ctx.cr6.eq) goto loc_82C9DF8C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82c9df44
	if (ctx.cr6.lt) goto loc_82C9DF44;
	// b 0x82c9df9c
	goto loc_82C9DF9C;
loc_82C9DF64:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c9df80
	if (!ctx.cr6.eq) goto loc_82C9DF80;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// rlwinm r10,r24,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
loc_82C9DF80:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82C9DF8C:
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// b 0x82c9df9c
	goto loc_82C9DF9C;
loc_82C9DF94:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
loc_82C9DF9C:
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82c9e06c
	if (!ctx.cr6.gt) goto loc_82C9E06C;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// add r30,r11,r18
	ctx.r30.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_82C9DFB4:
	// lwz r11,20(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c9e05c
	if (!ctx.cr6.eq) goto loc_82C9E05C;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c9e05c
	if (ctx.cr6.eq) goto loc_82C9E05C;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c9e034
	if (ctx.cr6.eq) goto loc_82C9E034;
	// lbz r9,9(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c9e00c
	if (ctx.cr6.eq) goto loc_82C9E00C;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98ad0
	ctx.lr = 0x82C9E000;
	sub_82C98AD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9e614
	if (!ctx.cr6.eq) goto loc_82C9E614;
	// b 0x82c9e05c
	goto loc_82C9E05C;
loc_82C9E00C:
	// stb r22,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r22.u8);
	// addi r9,r20,1
	ctx.r9.s64 = ctx.r20.s64 + 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r20,r9,1
	ctx.r20.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// b 0x82c9e054
	goto loc_82C9E054;
loc_82C9E034:
	// stb r23,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r23.u8);
	// addi r9,r20,1
	ctx.r9.s64 = ctx.r20.s64 + 1;
	// addi r20,r9,1
	ctx.r20.s64 = ctx.r9.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
loc_82C9E054:
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
loc_82C9E05C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82c9dfb4
	if (ctx.cr6.lt) goto loc_82C9DFB4;
loc_82C9E06C:
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stwx r16,r11,r18
	PPC_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r16.u32);
	// beq cr6,0x82c9e41c
	if (ctx.cr6.eq) goto loc_82C9E41C;
	// lbz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 404);
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sraw. r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// slw r22,r23,r8
	ctx.r22.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r8.u8 & 0x3F));
	// beq 0x82c9e100
	if (ctx.cr0.eq) goto loc_82C9E100;
loc_82C9E09C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sraw. r9,r19,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r19.s32 < 0) & (((ctx.r19.s32 >> temp.u32) << temp.u32) != ctx.r19.s32);
	ctx.r9.s64 = ctx.r19.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// bne 0x82c9e09c
	if (!ctx.cr0.eq) goto loc_82C9E09C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r11.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82c9e0cc
	if (!ctx.cr6.lt) goto loc_82C9E0CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r11.u8);
loc_82C9E0CC:
	// lbz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 404);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// slw r22,r23,r11
	ctx.r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9E0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// b 0x82c9e108
	goto loc_82C9E108;
loc_82C9E100:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c9e138
	if (!ctx.cr6.eq) goto loc_82C9E138;
loc_82C9E108:
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82c9e138
	if (ctx.cr6.eq) goto loc_82C9E138;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C9E124:
	// lwz r8,396(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x82c9e124
	if (!ctx.cr0.eq) goto loc_82C9E124;
loc_82C9E138:
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r24,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r24.u32);
	// ble cr6,0x82c9e450
	if (!ctx.cr6.gt) goto loc_82C9E450;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// ori r25,r11,16963
	ctx.r25.u64 = ctx.r11.u64 | 16963;
loc_82C9E154:
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lbz r11,-1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// stb r16,-1(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1, ctx.r16.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82c9e3fc
	if (!ctx.cr6.eq) goto loc_82C9E3FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r14,40
	ctx.r3.s64 = ctx.r14.s64 + 40;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// bl 0x82c99298
	ctx.lr = 0x82C9E17C;
	sub_82C99298(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c9e410
	if (ctx.cr6.eq) goto loc_82C9E410;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c9e1f8
	if (!ctx.cr6.gt) goto loc_82C9E1F8;
loc_82C9E19C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lbzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// bne cr6,0x82c9e1c8
	if (!ctx.cr6.eq) goto loc_82C9E1C8;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99808
	ctx.lr = 0x82C9E1BC;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
loc_82C9E1C8:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// mullw r9,r27,r25
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r8,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r8.u32);
	// lwz r7,20(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// xor r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82c9e19c
	if (ctx.cr6.lt) goto loc_82C9E19C;
loc_82C9E1F8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82c9e1f8
	if (!ctx.cr6.eq) goto loc_82C9E1F8;
loc_82C9E208:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lbz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c9e230
	if (!ctx.cr6.eq) goto loc_82C9E230;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99808
	ctx.lr = 0x82C9E224;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
loc_82C9E230:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r9,428(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mullw r8,r27,r25
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// xor r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r7.u32);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x82c9e208
	if (!ctx.cr6.eq) goto loc_82C9E208;
	// addi r8,r22,-1
	ctx.r8.s64 = ctx.r22.s64 + -1;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// and r29,r8,r27
	ctx.r29.u64 = ctx.r8.u64 & ctx.r27.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82c9e354
	if (!ctx.cr6.eq) goto loc_82C9E354;
loc_82C9E28C:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c9e2f0
	if (!ctx.cr6.eq) goto loc_82C9E2F0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82c9e2e4
	if (!ctx.cr6.eq) goto loc_82C9E2E4;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82C9E2C0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c9e2e4
	if (ctx.cr6.eq) goto loc_82C9E2E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82c9e2c0
	if (ctx.cr6.eq) goto loc_82C9E2C0;
loc_82C9E2E4:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9df80
	if (ctx.cr6.eq) goto loc_82C9DF80;
loc_82C9E2F0:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9e31c
	if (!ctx.cr6.eq) goto loc_82C9E31C;
	// lbz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 404);
	// andc r10,r27,r8
	ctx.r10.u64 = ctx.r27.u64 & ~ctx.r8.u64;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 | 1;
loc_82C9E31C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82c9e334
	if (!ctx.cr6.lt) goto loc_82C9E334;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// b 0x82c9e338
	goto loc_82C9E338;
loc_82C9E334:
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82C9E338:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82c9e28c
	if (ctx.cr6.eq) goto loc_82C9E28C;
loc_82C9E354:
	// lbz r11,237(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 237);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9e3bc
	if (ctx.cr6.eq) goto loc_82C9E3BC;
	// lbz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 472);
	// stb r11,-1(r7)
	PPC_STORE_U8(ctx.r7.u32 + -1, ctx.r11.u8);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82C9E370:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c9e394
	if (!ctx.cr6.eq) goto loc_82C9E394;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99808
	ctx.lr = 0x82C9E388;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
loc_82C9E394:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r7.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c9e370
	if (!ctx.cr6.eq) goto loc_82C9E370;
loc_82C9E3BC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r7,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r7.u32);
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// lwz r7,396(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stwx r24,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r24.u32);
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r27.u32);
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// beq 0x82c9e41c
	if (ctx.cr0.eq) goto loc_82C9E41C;
loc_82C9E3FC:
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82c9e154
	if (ctx.cr6.lt) goto loc_82C9E154;
	// b 0x82c9e450
	goto loc_82C9E450;
loc_82C9E410:
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82C9E41C:
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x82c9e450
	if (!ctx.cr6.lt) goto loc_82C9E450;
	// subf r10,r21,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r21.s64;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r10,r11,r18
	ctx.r10.u64 = ctx.r11.u64 + ctx.r18.u64;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C9E43C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r16,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r16.u8);
	// bne 0x82c9e43c
	if (!ctx.cr0.eq) goto loc_82C9E43C;
loc_82C9E450:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9e474
	if (ctx.cr6.eq) goto loc_82C9E474;
loc_82C9E45C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r16,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r16.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9e45c
	if (!ctx.cr6.eq) goto loc_82C9E45C;
loc_82C9E474:
	// lbz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9e610
	if (ctx.cr6.eq) goto loc_82C9E610;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9e4b4
	if (ctx.cr6.eq) goto loc_82C9E4B4;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c9e410
	if (ctx.cr6.eq) goto loc_82C9E410;
	// lwz r24,284(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_82C9E4A0:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82c9e4a0
	if (!ctx.cr6.eq) goto loc_82C9E4A0;
	// b 0x82c9e4cc
	goto loc_82C9E4CC;
loc_82C9E4B4:
	// lwz r30,156(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 156);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c9e610
	if (ctx.cr6.eq) goto loc_82C9E610;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C9E4CC:
	// lbz r11,237(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 237);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9e500
	if (ctx.cr6.eq) goto loc_82C9E500;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c9e500
	if (ctx.cr6.eq) goto loc_82C9E500;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82C9E4F0:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c9e4f0
	if (!ctx.cr6.eq) goto loc_82C9E4F0;
loc_82C9E500:
	// stw r25,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r25.u32);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r26,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r26.u32);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
loc_82C9E520:
	// lbzx r11,r25,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r28.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9e520
	if (!ctx.cr6.eq) goto loc_82C9E520;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82c9e5b8
	if (!ctx.cr6.gt) goto loc_82C9E5B8;
	// addi r27,r11,24
	ctx.r27.s64 = ctx.r11.s64 + 24;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9E55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c9dc9c
	if (ctx.cr6.eq) goto loc_82C9DC9C;
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x82C9E578;
	sub_82CA2C60(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9e5a4
	if (ctx.cr6.eq) goto loc_82C9E5A4;
loc_82C9E584:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c9e598
	if (!ctx.cr6.eq) goto loc_82C9E598;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_82C9E598:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9e584
	if (!ctx.cr6.eq) goto loc_82C9E584;
loc_82C9E5A4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9E5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_82C9E5B8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C9E5D4;
	sub_82CA2C60(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82c9e608
	if (ctx.cr6.eq) goto loc_82C9E608;
	// lbz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 472);
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9e5f4
	if (ctx.cr6.eq) goto loc_82C9E5F4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_82C9E5F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ca2c60
	ctx.lr = 0x82C9E608;
	sub_82CA2C60(ctx, base);
loc_82C9E608:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_82C9E610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9E614:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9E61C"))) PPC_WEAK_FUNC(sub_82C9E61C);
PPC_FUNC_IMPL(__imp__sub_82C9E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9E620"))) PPC_WEAK_FUNC(sub_82C9E620);
PPC_FUNC_IMPL(__imp__sub_82C9E620) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9e678
	if (ctx.cr6.eq) goto loc_82C9E678;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x82c9e664
	if (ctx.cr6.eq) goto loc_82C9E664;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9e650
	if (!ctx.cr6.eq) goto loc_82C9E650;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9e650
	if (!ctx.cr6.eq) goto loc_82C9E650;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9E650:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9E664:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r9,r10,-10240
	ctx.r9.s64 = ctx.r10.s64 + -10240;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9E678:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9E680"))) PPC_WEAK_FUNC(sub_82C9E680);
PPC_FUNC_IMPL(__imp__sub_82C9E680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C9E688;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 15, ctx.xer);
	// beq cr6,0x82c9e710
	if (ctx.cr6.eq) goto loc_82C9E710;
	// cmpwi cr6,r27,18
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 18, ctx.xer);
	// beq cr6,0x82c9e6d8
	if (ctx.cr6.eq) goto loc_82C9E6D8;
	// cmpwi cr6,r27,27
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 27, ctx.xer);
	// bne cr6,0x82c9e758
	if (!ctx.cr6.eq) goto loc_82C9E758;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r11,-18696
	ctx.r9.s64 = ctx.r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9E6D8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3228
	ctx.r30.s64 = ctx.r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9E6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9e71c
	if (ctx.cr6.eq) goto loc_82C9E71C;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-12480
	ctx.r10.s64 = ctx.r11.s64 + -12480;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82C9E710:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9E71C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9E738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9e758
	if (ctx.cr6.eq) goto loc_82C9E758;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r10,r11,-10008
	ctx.r10.s64 = ctx.r11.s64 + -10008;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9E758:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9e778
	if (!ctx.cr6.eq) goto loc_82C9E778;
	// cmpwi cr6,r27,28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 28, ctx.xer);
	// bne cr6,0x82c9e778
	if (!ctx.cr6.eq) goto loc_82C9E778;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9E778:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9E790"))) PPC_WEAK_FUNC(sub_82C9E790);
PPC_FUNC_IMPL(__imp__sub_82C9E790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C9E798;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 15, ctx.xer);
	// beq cr6,0x82c9e7f8
	if (ctx.cr6.eq) goto loc_82C9E7F8;
	// cmpwi cr6,r27,18
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 18, ctx.xer);
	// bne cr6,0x82c9e840
	if (!ctx.cr6.eq) goto loc_82C9E840;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3228
	ctx.r30.s64 = ctx.r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9E7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9e804
	if (ctx.cr6.eq) goto loc_82C9E804;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-12384
	ctx.r10.s64 = ctx.r11.s64 + -12384;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82C9E7F8:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9E804:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9E820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9e840
	if (ctx.cr6.eq) goto loc_82C9E840;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r10,r11,-9912
	ctx.r10.s64 = ctx.r11.s64 + -9912;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9E840:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9e860
	if (!ctx.cr6.eq) goto loc_82C9E860;
	// cmpwi cr6,r27,28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 28, ctx.xer);
	// bne cr6,0x82c9e860
	if (!ctx.cr6.eq) goto loc_82C9E860;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82C9E860:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9E878"))) PPC_WEAK_FUNC(sub_82C9E878);
PPC_FUNC_IMPL(__imp__sub_82C9E878) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-15
	ctx.r11.s64 = ctx.r4.s64 + -15;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x82c9e928
	if (ctx.cr6.gt) {
		sub_82C9E928(ctx, base);
		return;
	}
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-5984
	ctx.r12.s64 = ctx.r12.s64 + -5984;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C9E90C
		return;
	case 1:
		// ERROR: 0x82C9E928
		return;
	case 2:
		// ERROR: 0x82C9E928
		return;
	case 3:
		// ERROR: 0x82C9E914
		return;
	case 4:
		// ERROR: 0x82C9E914
		return;
	case 5:
		// ERROR: 0x82C9E928
		return;
	case 6:
		// ERROR: 0x82C9E928
		return;
	case 7:
		// ERROR: 0x82C9E928
		return;
	case 8:
		// ERROR: 0x82C9E928
		return;
	case 9:
		// ERROR: 0x82C9E928
		return;
	case 10:
		// ERROR: 0x82C9E928
		return;
	case 11:
		// ERROR: 0x82C9E928
		return;
	case 12:
		// ERROR: 0x82C9E928
		return;
	case 13:
		// ERROR: 0x82C9E928
		return;
	case 14:
		// ERROR: 0x82C9E928
		return;
	case 15:
		// ERROR: 0x82C9E928
		return;
	case 16:
		// ERROR: 0x82C9E928
		return;
	case 17:
		// ERROR: 0x82C9E928
		return;
	case 18:
		// ERROR: 0x82C9E928
		return;
	case 19:
		// ERROR: 0x82C9E928
		return;
	case 20:
		// ERROR: 0x82C9E928
		return;
	case 21:
		// ERROR: 0x82C9E928
		return;
	case 22:
		// ERROR: 0x82C9E928
		return;
	case 23:
		// ERROR: 0x82C9E928
		return;
	case 24:
		// ERROR: 0x82C9E928
		return;
	case 25:
		// ERROR: 0x82C9E928
		return;
	case 26:
		// ERROR: 0x82C9E914
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C9E8A0"))) PPC_WEAK_FUNC(sub_82C9E8A0);
PPC_FUNC_IMPL(__imp__sub_82C9E8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-5876(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5876);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5868(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5868);
	// lwz r22,-5868(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5868);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5868(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5868);
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9E914"))) PPC_WEAK_FUNC(sub_82C9E914);
PPC_FUNC_IMPL(__imp__sub_82C9E914) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r9,r11,-9816
	ctx.r9.s64 = ctx.r11.s64 + -9816;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9E928"))) PPC_WEAK_FUNC(sub_82C9E928);
PPC_FUNC_IMPL(__imp__sub_82C9E928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9e944
	if (!ctx.cr6.eq) goto loc_82C9E944;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9e944
	if (!ctx.cr6.eq) goto loc_82C9E944;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9E944:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = ctx.r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9E958"))) PPC_WEAK_FUNC(sub_82C9E958);
PPC_FUNC_IMPL(__imp__sub_82C9E958) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9e9b0
	if (ctx.cr6.eq) goto loc_82C9E9B0;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82c9e99c
	if (ctx.cr6.eq) goto loc_82C9E99C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9e988
	if (!ctx.cr6.eq) goto loc_82C9E988;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9e988
	if (!ctx.cr6.eq) goto loc_82C9E988;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9E988:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9E99C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r9,r10,-9696
	ctx.r9.s64 = ctx.r10.s64 + -9696;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9E9B0:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9E9B8"))) PPC_WEAK_FUNC(sub_82C9E9B8);
PPC_FUNC_IMPL(__imp__sub_82C9E9B8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-15
	ctx.r10.s64 = ctx.r4.s64 + -15;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// bgt cr6,0x82c9ea8c
	if (ctx.cr6.gt) {
		sub_82C9EA8C(ctx, base);
		return;
	}
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-5664
	ctx.r12.s64 = ctx.r12.s64 + -5664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82C9EA38
		return;
	case 1:
		// ERROR: 0x82C9EA8C
		return;
	case 2:
		// ERROR: 0x82C9EA8C
		return;
	case 3:
		// ERROR: 0x82C9EA8C
		return;
	case 4:
		// ERROR: 0x82C9EA8C
		return;
	case 5:
		// ERROR: 0x82C9EA8C
		return;
	case 6:
		// ERROR: 0x82C9EA78
		return;
	case 7:
		// ERROR: 0x82C9EA8C
		return;
	case 8:
		// ERROR: 0x82C9EA8C
		return;
	case 9:
		// ERROR: 0x82C9EA40
		return;
	case 10:
		// ERROR: 0x82C9EA8C
		return;
	case 11:
		// ERROR: 0x82C9EA8C
		return;
	case 12:
		// ERROR: 0x82C9EA8C
		return;
	case 13:
		// ERROR: 0x82C9EA8C
		return;
	case 14:
		// ERROR: 0x82C9EA8C
		return;
	case 15:
		// ERROR: 0x82C9EA8C
		return;
	case 16:
		// ERROR: 0x82C9EA8C
		return;
	case 17:
		// ERROR: 0x82C9EA8C
		return;
	case 18:
		// ERROR: 0x82C9EA8C
		return;
	case 19:
		// ERROR: 0x82C9EA8C
		return;
	case 20:
		// ERROR: 0x82C9EA8C
		return;
	case 21:
		// ERROR: 0x82C9EA5C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C9E9E0"))) PPC_WEAK_FUNC(sub_82C9E9E0);
PPC_FUNC_IMPL(__imp__sub_82C9E9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-5576(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5576);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5512(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5512);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5568(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5568);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5540(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5540);
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9EA40"))) PPC_WEAK_FUNC(sub_82C9EA40);
PPC_FUNC_IMPL(__imp__sub_82C9EA40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r3,45
	ctx.r3.s64 = 45;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9EA5C"))) PPC_WEAK_FUNC(sub_82C9EA5C);
PPC_FUNC_IMPL(__imp__sub_82C9EA5C) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r3,46
	ctx.r3.s64 = 46;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9EA78"))) PPC_WEAK_FUNC(sub_82C9EA78);
PPC_FUNC_IMPL(__imp__sub_82C9EA78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r9,r10,-9576
	ctx.r9.s64 = ctx.r10.s64 + -9576;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9EA8C"))) PPC_WEAK_FUNC(sub_82C9EA8C);
PPC_FUNC_IMPL(__imp__sub_82C9EA8C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9eaa8
	if (!ctx.cr6.eq) goto loc_82C9EAA8;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9eaa8
	if (!ctx.cr6.eq) goto loc_82C9EAA8;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9EAA8:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9EABC"))) PPC_WEAK_FUNC(sub_82C9EABC);
PPC_FUNC_IMPL(__imp__sub_82C9EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9EAC0"))) PPC_WEAK_FUNC(sub_82C9EAC0);
PPC_FUNC_IMPL(__imp__sub_82C9EAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x82C9EAC8;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// lwz r20,356(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c9eb04
	if (!ctx.cr6.eq) goto loc_82C9EB04;
	// addi r22,r31,288
	ctx.r22.s64 = ctx.r31.s64 + 288;
	// addi r23,r31,292
	ctx.r23.s64 = ctx.r31.s64 + 292;
	// b 0x82c9eb0c
	goto loc_82C9EB0C;
loc_82C9EB04:
	// lwz r22,300(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r23,r22,4
	ctx.r23.s64 = ctx.r22.s64 + 4;
loc_82C9EB0C:
	// stw r6,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r6.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r17,10
	ctx.r17.s64 = 10;
loc_82C9EB1C:
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9EB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// stw r5,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r5.u32);
	// bgt cr6,0x82c9f514
	if (ctx.cr6.gt) goto loc_82C9F514;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-5272
	ctx.r12.s64 = ctx.r12.s64 + -5272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C9F6E0;
	case 1:
		goto loc_82C9F5F4;
	case 2:
		goto loc_82C9F564;
	case 3:
		goto loc_82C9F648;
	case 4:
		goto loc_82C9F630;
	case 5:
		goto loc_82C9F620;
	case 6:
		goto loc_82C9ED84;
	case 7:
		goto loc_82C9ED84;
	case 8:
		goto loc_82C9EF84;
	case 9:
		goto loc_82C9EF84;
	case 10:
		goto loc_82C9F114;
	case 11:
		goto loc_82C9F3EC;
	case 12:
		goto loc_82C9F344;
	case 13:
		goto loc_82C9F36C;
	case 14:
		goto loc_82C9EBB4;
	case 15:
		goto loc_82C9F2FC;
	case 16:
		goto loc_82C9F4D4;
	case 17:
		goto loc_82C9F6D4;
	case 18:
		goto loc_82C9F4F4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-2336(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2336);
	// lwz r22,-2572(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2572);
	// lwz r22,-2716(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2716);
	// lwz r22,-2488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2488);
	// lwz r22,-2512(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2512);
	// lwz r22,-2528(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2528);
	// lwz r22,-4732(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4732);
	// lwz r22,-4732(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4732);
	// lwz r22,-4220(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4220);
	// lwz r22,-4220(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4220);
	// lwz r22,-3820(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3820);
	// lwz r22,-3092(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3092);
	// lwz r22,-3260(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3260);
	// lwz r22,-3220(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3220);
	// lwz r22,-5196(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5196);
	// lwz r22,-3332(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3332);
	// lwz r22,-2860(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2860);
	// lwz r22,-2348(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2348);
	// lwz r22,-2828(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2828);
loc_82C9EBB4:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9EBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c9ec1c
	if (ctx.cr6.eq) goto loc_82C9EC1C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9ec08
	if (ctx.cr6.eq) goto loc_82C9EC08;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9EC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9EC08:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f534
	if (ctx.cr6.eq) goto loc_82C9F534;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82c9f524
	goto loc_82C9F524;
loc_82C9EC1C:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r20,80
	ctx.r3.s64 = ctx.r20.s64 + 80;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82C9EC3C;
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c9f6ac
	if (ctx.cr6.eq) goto loc_82C9F6AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82c99298
	ctx.lr = 0x82C9EC58;
	sub_82C99298(ctx, base);
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// lbz r10,129(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 129);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,92(r20)
	PPC_STORE_U32(ctx.r20.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82c9eca8
	if (ctx.cr6.eq) goto loc_82C9ECA8;
	// lbz r11,130(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 130);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9eca8
	if (!ctx.cr6.eq) goto loc_82C9ECA8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c9ecbc
	if (!ctx.cr6.eq) goto loc_82C9ECBC;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9ec08
	if (ctx.cr6.eq) goto loc_82C9EC08;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9ECA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ECA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c9f660
	if (ctx.cr6.eq) goto loc_82C9F660;
	// lbz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f66c
	if (ctx.cr6.eq) goto loc_82C9F66C;
loc_82C9ECBC:
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9f678
	if (!ctx.cr6.eq) goto loc_82C9F678;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9f684
	if (!ctx.cr6.eq) goto loc_82C9F684;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9ed2c
	if (ctx.cr6.eq) goto loc_82C9ED2C;
	// lbz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9ed10
	if (!ctx.cr6.eq) goto loc_82C9ED10;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9ec08
	if (ctx.cr6.eq) goto loc_82C9EC08;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9ED0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ED10:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98df8
	ctx.lr = 0x82C9ED20;
	sub_82C98DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9f7bc
	if (!ctx.cr6.eq) goto loc_82C9F7BC;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ED2C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9ec08
	if (ctx.cr6.eq) goto loc_82C9EC08;
	// stb r19,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r19.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9abf8
	ctx.lr = 0x82C9ED44;
	sub_82C9ABF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r24,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r24.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c9f6ac
	if (ctx.cr6.eq) goto loc_82C9F6AC;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9ED70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9f690
	if (ctx.cr6.eq) goto loc_82C9F690;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ED84:
	// lwz r30,368(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c9ed9c
	if (ctx.cr6.eq) goto loc_82C9ED9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// b 0x82c9eddc
	goto loc_82C9EDDC;
loc_82C9ED9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,48
	ctx.r3.s64 = 48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9EDAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c9f6ac
	if (ctx.cr6.eq) goto loc_82C9F6AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,32
	ctx.r3.s64 = 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9EDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c9f69c
	if (ctx.cr6.eq) goto loc_82C9F69C;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_82C9EDDC:
	// stw r24,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r24.u32);
	// addi r25,r30,44
	ctx.r25.s64 = ctx.r30.s64 + 44;
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// lwz r10,68(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9EE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9EE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// subf r27,r8,r7
	ctx.r27.s64 = ctx.r7.s64 - ctx.r8.s64;
	// beq cr6,0x82c9eef4
	if (ctx.cr6.eq) goto loc_82C9EEF4;
loc_82C9EE7C:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9EE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c9f6ac
	if (ctx.cr6.eq) goto loc_82C9F6AC;
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + ctx.r27.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r9,60(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9EEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// subf r27,r7,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r7.s64;
	// bne cr6,0x82c9ee7c
	if (!ctx.cr6.eq) goto loc_82C9EE7C;
loc_82C9EEF4:
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r24,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r24.u8);
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c9dc30
	ctx.lr = 0x82C9EF24;
	sub_82C9DC30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9f7bc
	if (!ctx.cr6.eq) goto loc_82C9F7BC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9ef58
	if (ctx.cr6.eq) goto loc_82C9EF58;
	// lwz r5,392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9EF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82C9EF54;
	sub_82C99728(ctx, base);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9EF58:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9ef78
	if (ctx.cr6.eq) goto loc_82C9EF78;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c98fd8
	ctx.lr = 0x82C9EF78;
	sub_82C98FD8(ctx, base);
loc_82C9EF78:
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82C9EF80;
	sub_82C99728(ctx, base);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9EF84:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r27,r31,416
	ctx.r27.s64 = ctx.r31.s64 + 416;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9EFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r6,r3,r30
	ctx.r6.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82C9EFC4;
	sub_82C9B2F8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c9f6ac
	if (ctx.cr6.eq) goto loc_82C9F6AC;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82c9dc30
	ctx.lr = 0x82C9EFF0;
	sub_82C9DC30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9f7bc
	if (!ctx.cr6.eq) goto loc_82C9F7BC;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// beq cr6,0x82c9f028
	if (ctx.cr6.eq) goto loc_82C9F028;
	// lwz r5,392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82C9F028:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f060
	if (ctx.cr6.eq) goto loc_82C9F060;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f048
	if (ctx.cr6.eq) goto loc_82C9F048;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82C9F048:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82C9F060:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f08c
	if (ctx.cr6.eq) goto loc_82C9F08C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f08c
	if (ctx.cr6.eq) goto loc_82C9F08C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c98fd8
	ctx.lr = 0x82C9F08C;
	sub_82C98FD8(ctx, base);
loc_82C9F08C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c99728
	ctx.lr = 0x82C9F094;
	sub_82C99728(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c9f0ec
	if (ctx.cr6.eq) goto loc_82C9F0EC;
loc_82C9F0A0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f0c4
	if (ctx.cr6.eq) goto loc_82C9F0C4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C9F0C4:
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r29,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bne cr6,0x82c9f0a0
	if (!ctx.cr6.eq) goto loc_82C9F0A0;
loc_82C9F0EC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9f534
	if (!ctx.cr6.eq) goto loc_82C9F534;
loc_82C9F0F8:
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9d500
	ctx.lr = 0x82C9F10C;
	sub_82C9D500(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F114:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// beq cr6,0x82c9f614
	if (ctx.cr6.eq) goto loc_82C9F614;
	// lwz r30,364(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C9F15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82c9f6b8
	if (!ctx.cr6.eq) goto loc_82C9F6B8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c9f1a0
	if (ctx.cr6.eq) goto loc_82C9F1A0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C9F180:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82c9f1a0
	if (!ctx.cr0.eq) goto loc_82C9F1A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82c9f180
	if (!ctx.cr6.eq) goto loc_82C9F180;
loc_82C9F1A0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c9f6b8
	if (!ctx.cr6.eq) goto loc_82C9F6B8;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// beq cr6,0x82c9f26c
	if (ctx.cr6.eq) goto loc_82C9F26C;
	// lbz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 236);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f254
	if (ctx.cr6.eq) goto loc_82C9F254;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c9f254
	if (ctx.cr6.eq) goto loc_82C9F254;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x82c9f208
	if (ctx.cr6.eq) goto loc_82C9F208;
loc_82C9F1F0:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c9f1f0
	if (!ctx.cr6.eq) goto loc_82C9F1F0;
loc_82C9F208:
	// lbz r9,237(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 237);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c9f250
	if (ctx.cr6.eq) goto loc_82C9F250;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c9f250
	if (ctx.cr6.eq) goto loc_82C9F250;
	// lbz r9,472(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 472);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c9f250
	if (ctx.cr6.eq) goto loc_82C9F250;
loc_82C9F238:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c9f238
	if (!ctx.cr6.eq) goto loc_82C9F238;
loc_82C9F250:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_82C9F254:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f28c
	goto loc_82C9F28C;
loc_82C9F26C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f28c
	if (ctx.cr6.eq) goto loc_82C9F28C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c98fd8
	ctx.lr = 0x82C9F28C;
	sub_82C98FD8(ctx, base);
loc_82C9F28C:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f2ec
	if (ctx.cr6.eq) goto loc_82C9F2EC;
loc_82C9F298:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r29,44(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f2bc
	if (ctx.cr6.eq) goto loc_82C9F2BC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C9F2BC:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// lwz r9,376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r29,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82c9f298
	if (!ctx.cr6.eq) goto loc_82C9F298;
loc_82C9F2EC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c9f0f8
	if (ctx.cr6.eq) goto loc_82C9F0F8;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F2FC:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c9f6c8
	if (ctx.cr6.lt) goto loc_82C9F6C8;
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c9ec08
	if (ctx.cr6.eq) goto loc_82C9EC08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c97790
	ctx.lr = 0x82C9F32C;
	sub_82C97790(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82C9F340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F344:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f514
	if (ctx.cr6.eq) goto loc_82C9F514;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r17,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r17.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F36C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f388
	if (ctx.cr6.eq) goto loc_82C9F388;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f3a8
	goto loc_82C9F3A8;
loc_82C9F388:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f3a8
	if (ctx.cr6.eq) goto loc_82C9F3A8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82C9F3A8;
	sub_82C98FD8(ctx, base);
loc_82C9F3A8:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9a490
	ctx.lr = 0x82C9F3C4;
	sub_82C9A490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c9f7bc
	if (!ctx.cr6.eq) goto loc_82C9F7BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9f534
	if (!ctx.cr6.eq) goto loc_82C9F534;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-17840
	ctx.r10.s64 = ctx.r11.s64 + -17840;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F3EC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f514
	if (ctx.cr6.eq) goto loc_82C9F514;
	// lbz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c9f4bc
	if (!ctx.cr6.eq) goto loc_82C9F4BC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C9F44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c9f534
	if (ctx.cr6.eq) goto loc_82C9F534;
loc_82C9F45C:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C9F4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c9f45c
	if (!ctx.cr6.eq) goto loc_82C9F45C;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F4BC:
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F4D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F4D4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c810
	ctx.lr = 0x82C9F4E8;
	sub_82C9C810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9f6ac
	if (ctx.cr6.eq) goto loc_82C9F6AC;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F4F4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c918
	ctx.lr = 0x82C9F508;
	sub_82C9C918(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9f6ac
	if (ctx.cr6.eq) goto loc_82C9F6AC;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F514:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f534
	if (ctx.cr6.eq) goto loc_82C9F534;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82C9F524:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82C9F534;
	sub_82C98FD8(ctx, base);
loc_82C9F534:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82c9f7b8
	if (ctx.cr6.eq) goto loc_82C9F7B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82c9eb1c
	if (!ctx.cr6.eq) goto loc_82C9EB1C;
	// stw r10,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F564:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f584
	if (ctx.cr6.eq) goto loc_82C9F584;
loc_82C9F570:
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F584:
	// stw r21,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r21.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f5b0
	if (ctx.cr6.eq) goto loc_82C9F5B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r17,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r17.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f5d0
	goto loc_82C9F5D0;
loc_82C9F5B0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f5d0
	if (ctx.cr6.eq) goto loc_82C9F5D0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82C9F5D0;
	sub_82C98FD8(ctx, base);
loc_82C9F5D0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82c9f790
	if (ctx.cr6.eq) goto loc_82C9F790;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x82c9f614
	if (!ctx.cr6.eq) goto loc_82C9F614;
loc_82C9F5E4:
	// stw r21,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F5F4:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9f570
	if (!ctx.cr6.eq) goto loc_82C9F570;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82c9f790
	if (!ctx.cr6.gt) goto loc_82C9F790;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// beq cr6,0x82c9f570
	if (ctx.cr6.eq) goto loc_82C9F570;
loc_82C9F614:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F620:
	// stw r5,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r5.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F630:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9f570
	if (!ctx.cr6.eq) goto loc_82C9F570;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F648:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9f570
	if (!ctx.cr6.eq) goto loc_82C9F570;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F660:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F66C:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F678:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F684:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F690:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F69C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C9F6AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F6B8:
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F6C8:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F6D4:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F6E0:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9f570
	if (!ctx.cr6.eq) goto loc_82C9F570;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f764
	if (ctx.cr6.eq) goto loc_82C9F764;
	// lbz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c9f74c
	if (!ctx.cr6.eq) goto loc_82C9F74C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r5,r4,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r4.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C9F748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f784
	goto loc_82C9F784;
loc_82C9F74C:
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r5,r4,r21
	ctx.r5.s64 = ctx.r21.s64 - ctx.r4.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9F760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c9f784
	goto loc_82C9F784;
loc_82C9F764:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9f784
	if (ctx.cr6.eq) goto loc_82C9F784;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82C9F784;
	sub_82C98FD8(ctx, base);
loc_82C9F784:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82c9f79c
	if (!ctx.cr6.eq) goto loc_82C9F79C;
	// stw r21,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
loc_82C9F790:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F79C:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// beq cr6,0x82c9f5e4
	if (ctx.cr6.eq) goto loc_82C9F5E4;
	// stw r21,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82C9F7B8:
	// li r3,35
	ctx.r3.s64 = 35;
loc_82C9F7BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F7C4"))) PPC_WEAK_FUNC(sub_82C9F7C4);
PPC_FUNC_IMPL(__imp__sub_82C9F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9F7C8"))) PPC_WEAK_FUNC(sub_82C9F7C8);
PPC_FUNC_IMPL(__imp__sub_82C9F7C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9f820
	if (ctx.cr6.eq) goto loc_82C9F820;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82c9f80c
	if (ctx.cr6.eq) goto loc_82C9F80C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9f7f8
	if (!ctx.cr6.eq) goto loc_82C9F7F8;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9f7f8
	if (!ctx.cr6.eq) goto loc_82C9F7F8;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9F7F8:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F80C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r9,r10,-6528
	ctx.r9.s64 = ctx.r10.s64 + -6528;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F820:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9F828"))) PPC_WEAK_FUNC(sub_82C9F828);
PPC_FUNC_IMPL(__imp__sub_82C9F828) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9f880
	if (ctx.cr6.eq) goto loc_82C9F880;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x82c9f86c
	if (ctx.cr6.eq) goto loc_82C9F86C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9f858
	if (!ctx.cr6.eq) goto loc_82C9F858;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9f858
	if (!ctx.cr6.eq) goto loc_82C9F858;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9F858:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F86C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r9,r10,-6624
	ctx.r9.s64 = ctx.r10.s64 + -6624;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F880:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9F888"))) PPC_WEAK_FUNC(sub_82C9F888);
PPC_FUNC_IMPL(__imp__sub_82C9F888) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9f8e0
	if (ctx.cr6.eq) goto loc_82C9F8E0;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82c9f8cc
	if (ctx.cr6.eq) goto loc_82C9F8CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9f8b8
	if (!ctx.cr6.eq) goto loc_82C9F8B8;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9f8b8
	if (!ctx.cr6.eq) goto loc_82C9F8B8;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9F8B8:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F8CC:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r9,r10,-6256
	ctx.r9.s64 = ctx.r10.s64 + -6256;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F8E0:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9F8E8"))) PPC_WEAK_FUNC(sub_82C9F8E8);
PPC_FUNC_IMPL(__imp__sub_82C9F8E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82c9f938
	if (ctx.cr6.eq) goto loc_82C9F938;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x82c9f92c
	if (ctx.cr6.eq) goto loc_82C9F92C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c9f918
	if (!ctx.cr6.eq) goto loc_82C9F918;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82c9f918
	if (!ctx.cr6.eq) goto loc_82C9F918;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9F918:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F92C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-5800
	ctx.r9.s64 = ctx.r10.s64 + -5800;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82C9F938:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9F940"))) PPC_WEAK_FUNC(sub_82C9F940);
PPC_FUNC_IMPL(__imp__sub_82C9F940) {
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
	// addi r11,r30,-15
	ctx.r11.s64 = ctx.r30.s64 + -15;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x82c9fa90
	if (ctx.cr6.gt) goto loc_82C9FA90;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-1660
	ctx.r12.s64 = ctx.r12.s64 + -1660;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C9F9F0;
	case 1:
		goto loc_82C9FA90;
	case 2:
		goto loc_82C9FA90;
	case 3:
		goto loc_82C9FA50;
	case 4:
		goto loc_82C9FA90;
	case 5:
		goto loc_82C9F9F8;
	case 6:
		goto loc_82C9FA90;
	case 7:
		goto loc_82C9FA90;
	case 8:
		goto loc_82C9FA34;
	case 9:
		goto loc_82C9FA90;
	case 10:
		goto loc_82C9FA90;
	case 11:
		goto loc_82C9FA90;
	case 12:
		goto loc_82C9FA90;
	case 13:
		goto loc_82C9FA90;
	case 14:
		goto loc_82C9FA90;
	case 15:
		goto loc_82C9FA60;
	case 16:
		goto loc_82C9FA70;
	case 17:
		goto loc_82C9FA80;
	case 18:
		goto loc_82C9FA90;
	case 19:
		goto loc_82C9FA90;
	case 20:
		goto loc_82C9FA90;
	case 21:
		goto loc_82C9FA90;
	case 22:
		goto loc_82C9FA90;
	case 23:
		goto loc_82C9FA90;
	case 24:
		goto loc_82C9FA90;
	case 25:
		goto loc_82C9FA90;
	case 26:
		goto loc_82C9FA50;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-1552(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1552);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1456(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1456);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1544(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1544);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1484(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1484);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1440(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1440);
	// lwz r22,-1424(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1424);
	// lwz r22,-1408(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1408);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1456(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1456);
loc_82C9F9F0:
	// li r3,39
	ctx.r3.s64 = 39;
	// b 0x82c9fabc
	goto loc_82C9FABC;
loc_82C9F9F8:
	// lwz r11,68(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// addi r6,r9,3220
	ctx.r6.s64 = ctx.r9.s64 + 3220;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C9FA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c9fa90
	if (ctx.cr6.eq) goto loc_82C9FA90;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,43
	ctx.r3.s64 = 43;
	// addi r10,r11,-5704
	ctx.r10.s64 = ctx.r11.s64 + -5704;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA34:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-9472
	ctx.r9.s64 = ctx.r11.s64 + -9472;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82c9fabc
	goto loc_82C9FABC;
loc_82C9FA50:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r10,r11,-11648
	ctx.r10.s64 = ctx.r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA60:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,53
	ctx.r3.s64 = 53;
	// addi r10,r11,-11648
	ctx.r10.s64 = ctx.r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA70:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r10,r11,-11648
	ctx.r10.s64 = ctx.r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA80:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r10,r11,-11648
	ctx.r10.s64 = ctx.r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA90:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c9faac
	if (!ctx.cr6.eq) goto loc_82C9FAAC;
	// cmpwi cr6,r30,28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 28, ctx.xer);
	// bne cr6,0x82c9faac
	if (!ctx.cr6.eq) goto loc_82C9FAAC;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82c9fabc
	goto loc_82C9FABC;
loc_82C9FAAC:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
loc_82C9FAB8:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82C9FABC:
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

__attribute__((alias("__imp__sub_82C9FAD4"))) PPC_WEAK_FUNC(sub_82C9FAD4);
PPC_FUNC_IMPL(__imp__sub_82C9FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9FAD8"))) PPC_WEAK_FUNC(sub_82C9FAD8);
PPC_FUNC_IMPL(__imp__sub_82C9FAD8) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c9eac0
	ctx.lr = 0x82C9FB14;
	sub_82C9EAC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82c9fb38
	if (!ctx.cr6.eq) goto loc_82C9FB38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98970
	ctx.lr = 0x82C9FB28;
	sub_82C98970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9fb3c
	if (ctx.cr6.eq) goto loc_82C9FB3C;
loc_82C9FB38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C9FB3C:
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

__attribute__((alias("__imp__sub_82C9FB54"))) PPC_WEAK_FUNC(sub_82C9FB54);
PPC_FUNC_IMPL(__imp__sub_82C9FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9FB58"))) PPC_WEAK_FUNC(sub_82C9FB58);
PPC_FUNC_IMPL(__imp__sub_82C9FB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82C9FB60;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r27,356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c9fba4
	if (!ctx.cr6.eq) goto loc_82C9FBA4;
	// addi r19,r31,288
	ctx.r19.s64 = ctx.r31.s64 + 288;
	// addi r22,r31,292
	ctx.r22.s64 = ctx.r31.s64 + 292;
	// b 0x82c9fbac
	goto loc_82C9FBAC;
loc_82C9FBA4:
	// lwz r19,300(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r22,r19,4
	ctx.r22.s64 = ctx.r19.s64 + 4;
loc_82C9FBAC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r16,41
	ctx.r16.s64 = 41;
	// addi r20,r11,3060
	ctx.r20.s64 = ctx.r11.s64 + 3060;
	// li r15,3
	ctx.r15.s64 = 3;
	// li r18,4
	ctx.r18.s64 = 4;
loc_82C9FBC8:
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82c9fc34
	if (ctx.cr6.gt) goto loc_82C9FC34;
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9fbf4
	if (ctx.cr6.eq) goto loc_82C9FBF4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82ca11d8
	if (!ctx.cr6.eq) goto loc_82CA11D8;
loc_82C9FBF4:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82c9fc2c
	if (ctx.cr6.gt) goto loc_82C9FC2C;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-1000
	ctx.r12.s64 = ctx.r12.s64 + -1000;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CA1214;
	case 1:
		goto loc_82C9FC2C;
	case 2:
		goto loc_82CA1208;
	case 3:
		goto loc_82CA11FC;
	case 4:
		goto loc_82CA11E8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,4628(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4628);
	// lwz r22,-980(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -980);
	// lwz r22,4616(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4616);
	// lwz r22,4604(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4604);
	// lwz r22,4584(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4584);
loc_82C9FC2C:
	// stw r17,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r17.u32);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
loc_82C9FC34:
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9FC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bgt cr6,0x82ca0c04
	if (ctx.cr6.gt) goto loc_82CA0C04;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,-900
	ctx.r12.s64 = ctx.r12.s64 + -900;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CA1370;
	case 1:
		goto loc_82CA11A8;
	case 2:
		goto loc_82C9FD74;
	case 3:
		goto loc_82CA129C;
	case 4:
		goto loc_82CA11B4;
	case 5:
		goto loc_82C9FD98;
	case 6:
		goto loc_82CA0534;
	case 7:
		goto loc_82C9FE38;
	case 8:
		goto loc_82C9FDDC;
	case 9:
		goto loc_82C9FF48;
	case 10:
		goto loc_82CA0788;
	case 11:
		goto loc_82CA0860;
	case 12:
		goto loc_82CA11BC;
	case 13:
		goto loc_82CA0470;
	case 14:
		goto loc_82CA05EC;
	case 15:
		goto loc_82C9FEC8;
	case 16:
		goto loc_82CA0654;
	case 17:
		goto loc_82CA06B4;
	case 18:
		goto loc_82CA11D0;
	case 19:
		goto loc_82CA0910;
	case 20:
		goto loc_82CA09B8;
	case 21:
		goto loc_82CA0A28;
	case 22:
		goto loc_82CA0950;
	case 23:
		goto loc_82CA0090;
	case 24:
		goto loc_82CA00C0;
	case 25:
		goto loc_82CA00CC;
	case 26:
		goto loc_82CA00D8;
	case 27:
		goto loc_82CA00E0;
	case 28:
		goto loc_82CA00E8;
	case 29:
		goto loc_82CA00F0;
	case 30:
		goto loc_82CA00F8;
	case 31:
		goto loc_82CA0100;
	case 32:
		goto loc_82CA011C;
	case 33:
		goto loc_82CA011C;
	case 34:
		goto loc_82CA0108;
	case 35:
		goto loc_82CA0064;
	case 36:
		goto loc_82CA01E8;
	case 37:
		goto loc_82CA01E8;
	case 38:
		goto loc_82CA0310;
	case 39:
		goto loc_82CA0310;
	case 40:
		goto loc_82CA0BF4;
	case 41:
		goto loc_82CA0EA0;
	case 42:
		goto loc_82CA0EDC;
	case 43:
		goto loc_82CA0EDC;
	case 44:
		goto loc_82CA0F5C;
	case 45:
		goto loc_82CA0ADC;
	case 46:
		goto loc_82CA1058;
	case 47:
		goto loc_82CA1068;
	case 48:
		goto loc_82CA1060;
	case 49:
		goto loc_82CA1070;
	case 50:
		goto loc_82CA0C70;
	case 51:
		goto loc_82CA0BCC;
	case 52:
		goto loc_82CA0F94;
	case 53:
		goto loc_82CA0FA4;
	case 54:
		goto loc_82CA0F9C;
	case 55:
		goto loc_82CA0FAC;
	case 56:
		goto loc_82CA1168;
	case 57:
		goto loc_82CA1188;
	case 58:
		goto loc_82C9FE14;
	case 59:
		goto loc_82CA0A74;
	case 60:
		goto loc_82CA0CF0;
	case 61:
		goto loc_82CA0CF0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,4976(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4976);
	// lwz r22,4520(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4520);
	// lwz r22,-652(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -652);
	// lwz r22,4764(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4764);
	// lwz r22,4532(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4532);
	// lwz r22,-616(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -616);
	// lwz r22,1332(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1332);
	// lwz r22,-456(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -456);
	// lwz r22,-548(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -548);
	// lwz r22,-184(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -184);
	// lwz r22,1928(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1928);
	// lwz r22,2144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	// lwz r22,4540(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4540);
	// lwz r22,1136(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// lwz r22,1516(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// lwz r22,-312(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -312);
	// lwz r22,1620(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1620);
	// lwz r22,1716(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// lwz r22,4560(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4560);
	// lwz r22,2320(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2320);
	// lwz r22,2488(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2488);
	// lwz r22,2600(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2600);
	// lwz r22,2384(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2384);
	// lwz r22,144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r22,192(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r22,204(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r22,216(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// lwz r22,224(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// lwz r22,232(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r22,240(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// lwz r22,248(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// lwz r22,256(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// lwz r22,284(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// lwz r22,284(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// lwz r22,264(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// lwz r22,100(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r22,488(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// lwz r22,488(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// lwz r22,784(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// lwz r22,784(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// lwz r22,3060(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// lwz r22,3744(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3744);
	// lwz r22,3804(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3804);
	// lwz r22,3804(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3804);
	// lwz r22,3932(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3932);
	// lwz r22,2780(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2780);
	// lwz r22,4184(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4184);
	// lwz r22,4200(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4200);
	// lwz r22,4192(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4192);
	// lwz r22,4208(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4208);
	// lwz r22,3184(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3184);
	// lwz r22,3020(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3020);
	// lwz r22,3988(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3988);
	// lwz r22,4004(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4004);
	// lwz r22,3996(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3996);
	// lwz r22,4012(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4012);
	// lwz r22,4456(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// lwz r22,4488(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4488);
	// lwz r22,-492(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// lwz r22,2676(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2676);
	// lwz r22,3312(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3312);
	// lwz r22,3312(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3312);
loc_82C9FD74:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9bbc0
	ctx.lr = 0x82C9FD88;
	sub_82C9BBC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca13e4
	if (!ctx.cr6.eq) goto loc_82CA13E4;
	// lwz r23,144(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82C9FD98:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9fdd4
	if (ctx.cr6.eq) goto loc_82C9FDD4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c9b2f8
	ctx.lr = 0x82C9FDB8;
	sub_82C9B2F8(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r25.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_82C9FDD4:
	// stw r25,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82C9FDDC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9FE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r25.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82C9FE10;
	sub_82C99728(ctx, base);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82C9FE14:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9bbc0
	ctx.lr = 0x82C9FE28;
	sub_82C9BBC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca13e4
	if (!ctx.cr6.eq) goto loc_82CA13E4;
	// lwz r23,144(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82C9FE38:
	// stb r25,489(r31)
	PPC_STORE_U8(ctx.r31.u32 + 489, ctx.r25.u8);
	// addi r4,r20,-88
	ctx.r4.s64 = ctx.r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x82c99298
	ctx.lr = 0x82C9FE4C;
	sub_82C99298(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// stb r21,129(r27)
	PPC_STORE_U8(ctx.r27.u32 + 129, ctx.r21.u8);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c9fec8
	if (ctx.cr6.eq) goto loc_82C9FEC8;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9FE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1284
	if (ctx.cr6.eq) goto loc_82CA1284;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82C9FEA8;
	sub_82C9B2F8(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// bl 0x82c99200
	ctx.lr = 0x82C9FEB8;
	sub_82C99200(ctx, base);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// b 0x82c9feec
	goto loc_82C9FEEC;
loc_82C9FEC8:
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9FEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1284
	if (ctx.cr6.eq) goto loc_82CA1284;
loc_82C9FEEC:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82C9FF20;
	sub_82C9B2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// bl 0x82c99200
	ctx.lr = 0x82C9FF2C;
	sub_82C99200(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// stw r10,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r10.u32);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82C9FF48:
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c9ff7c
	if (ctx.cr6.eq) goto loc_82C9FF7C;
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9FF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82C9FF78;
	sub_82C99728(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82C9FF7C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c9ff94
	if (!ctx.cr6.eq) goto loc_82C9FF94;
	// lbz r11,489(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 489);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0048
	if (ctx.cr6.eq) goto loc_82CA0048;
loc_82C9FF94:
	// stb r21,129(r27)
	PPC_STORE_U8(ctx.r27.u32 + 129, ctx.r21.u8);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca0044
	if (ctx.cr6.eq) goto loc_82CA0044;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0044
	if (ctx.cr6.eq) goto loc_82CA0044;
	// addi r4,r20,-88
	ctx.r4.s64 = ctx.r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x82c99298
	ctx.lr = 0x82C9FFC0;
	sub_82C99298(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lbz r10,489(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 489);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c9ffe0
	if (ctx.cr6.eq) goto loc_82C9FFE0;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82C9FFE0:
	// stb r25,131(r27)
	PPC_STORE_U8(ctx.r27.u32 + 131, ctx.r25.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1290
	if (ctx.cr6.eq) goto loc_82CA1290;
	// lbz r11,131(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 131);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0044
	if (ctx.cr6.eq) goto loc_82CA0044;
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca0044
	if (!ctx.cr6.eq) goto loc_82CA0044;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0044
	if (ctx.cr6.eq) goto loc_82CA0044;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA003C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca0d34
	if (ctx.cr6.eq) goto loc_82CA0D34;
loc_82CA0044:
	// stb r25,489(r31)
	PPC_STORE_U8(ctx.r31.u32 + 489, ctx.r25.u8);
loc_82CA0048:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0064:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9b388
	ctx.lr = 0x82CA0078;
	sub_82C9B388(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ca0108
	if (!ctx.cr6.eq) goto loc_82CA0108;
loc_82CA0084:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA0090:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c9c0
	ctx.lr = 0x82CA00A4;
	sub_82C9C9C0(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// stb r25,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r25.u8);
	// stw r25,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r25.u32);
	// stb r25,353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 353, ctx.r25.u8);
	// b 0x82ca0108
	goto loc_82CA0108;
loc_82CA00C0:
	// addi r11,r20,-84
	ctx.r11.s64 = ctx.r20.s64 + -84;
	// stb r21,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r21.u8);
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00CC:
	// addi r11,r20,-76
	ctx.r11.s64 = ctx.r20.s64 + -76;
	// stb r21,353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 353, ctx.r21.u8);
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00D8:
	// addi r11,r20,-72
	ctx.r11.s64 = ctx.r20.s64 + -72;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00E0:
	// addi r11,r20,-64
	ctx.r11.s64 = ctx.r20.s64 + -64;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00E8:
	// addi r11,r20,-56
	ctx.r11.s64 = ctx.r20.s64 + -56;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00F0:
	// addi r11,r20,-48
	ctx.r11.s64 = ctx.r20.s64 + -48;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00F8:
	// addi r11,r20,-36
	ctx.r11.s64 = ctx.r20.s64 + -36;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA0100:
	// addi r11,r20,-28
	ctx.r11.s64 = ctx.r20.s64 + -28;
loc_82CA0104:
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_82CA0108:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA011C:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0148
	if (ctx.cr6.eq) goto loc_82CA0148;
	// addi r29,r20,-4
	ctx.r29.s64 = ctx.r20.s64 + -4;
	// b 0x82ca0158
	goto loc_82CA0158;
loc_82CA0148:
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// addi r29,r20,-16
	ctx.r29.s64 = ctx.r20.s64 + -16;
	// beq cr6,0x82ca0158
	if (ctx.cr6.eq) goto loc_82CA0158;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82CA0158:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r30,r31,416
	ctx.r30.s64 = ctx.r31.s64 + 416;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca01b4
	if (ctx.cr6.eq) goto loc_82CA01B4;
loc_82CA0168:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca018c
	if (!ctx.cr6.eq) goto loc_82CA018C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c99808
	ctx.lr = 0x82CA0180;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
loc_82CA018C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ca0168
	if (!ctx.cr6.eq) goto loc_82CA0168;
loc_82CA01B4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c9b1a8
	ctx.lr = 0x82CA01D4;
	sub_82C9B1A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA01E8:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lbz r6,353(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 353);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 352);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82c990a8
	ctx.lr = 0x82CA0210;
	sub_82C990A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x82ca0254
	if (ctx.cr6.eq) goto loc_82CA0254;
	// cmpwi cr6,r10,78
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 78, ctx.xer);
	// bne cr6,0x82ca02cc
	if (!ctx.cr6.eq) goto loc_82CA02CC;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,79
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 79, ctx.xer);
	// bne cr6,0x82ca02cc
	if (!ctx.cr6.eq) goto loc_82CA02CC;
loc_82CA0254:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca0278
	if (!ctx.cr6.eq) goto loc_82CA0278;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99808
	ctx.lr = 0x82CA026C;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
loc_82CA0278:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca02ac
	if (!ctx.cr6.eq) goto loc_82CA02AC;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99808
	ctx.lr = 0x82CA02A0;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
loc_82CA02AC:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
loc_82CA02CC:
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// addi r11,r28,-36
	ctx.r11.s64 = ctx.r28.s64 + -36;
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82CA030C;
	sub_82C99728(ctx, base);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0310:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// addi r8,r27,80
	ctx.r8.s64 = ctx.r27.s64 + 80;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 352);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9d748
	ctx.lr = 0x82CA0340;
	sub_82C9D748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca13e4
	if (!ctx.cr6.eq) goto loc_82CA13E4;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r30,96(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// lbz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 352);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82c990a8
	ctx.lr = 0x82CA0370;
	sub_82C990A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x82ca03b4
	if (ctx.cr6.eq) goto loc_82CA03B4;
	// cmpwi cr6,r10,78
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 78, ctx.xer);
	// bne cr6,0x82ca042c
	if (!ctx.cr6.eq) goto loc_82CA042C;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,79
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 79, ctx.xer);
	// bne cr6,0x82ca042c
	if (!ctx.cr6.eq) goto loc_82CA042C;
loc_82CA03B4:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca03d8
	if (!ctx.cr6.eq) goto loc_82CA03D8;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99808
	ctx.lr = 0x82CA03CC;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
loc_82CA03D8:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca040c
	if (!ctx.cr6.eq) goto loc_82CA040C;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99808
	ctx.lr = 0x82CA0400;
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
loc_82CA040C:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
loc_82CA042C:
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// addi r11,r28,-38
	ctx.r11.s64 = ctx.r28.s64 + -38;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82CA046C;
	sub_82C99728(ctx, base);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0470:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9c3a8
	ctx.lr = 0x82CA0498;
	sub_82C9C3A8(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0518
	if (ctx.cr6.eq) goto loc_82CA0518;
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,120(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// lwz r8,116(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r5,116(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// stw r5,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r5.u32);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ca0520
	if (ctx.cr6.eq) goto loc_82CA0520;
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,136(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r5,33(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82CA0510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82ca0520
	goto loc_82CA0520;
loc_82CA0518:
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// stw r11,116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 116, ctx.r11.u32);
loc_82CA0520:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA0534:
	// stb r25,489(r31)
	PPC_STORE_U8(ctx.r31.u32 + 489, ctx.r25.u8);
	// stb r21,129(r27)
	PPC_STORE_U8(ctx.r27.u32 + 129, ctx.r21.u8);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0580
	if (ctx.cr6.eq) goto loc_82CA0580;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA0564;
	sub_82C9B2F8(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// b 0x82ca0588
	goto loc_82CA0588;
loc_82CA0580:
	// addi r11,r20,-88
	ctx.r11.s64 = ctx.r20.s64 + -88;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
loc_82CA0588:
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca05c0
	if (!ctx.cr6.eq) goto loc_82CA05C0;
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca05c0
	if (!ctx.cr6.eq) goto loc_82CA05C0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca05c0
	if (ctx.cr6.eq) goto loc_82CA05C0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA05B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca0d34
	if (ctx.cr6.eq) goto loc_82CA0D34;
loc_82CA05C0:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca05ec
	if (!ctx.cr6.eq) goto loc_82CA05EC;
	// addi r4,r20,-88
	ctx.r4.s64 = ctx.r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x82c99298
	ctx.lr = 0x82CA05DC;
	sub_82C99298(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
loc_82CA05EC:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA0620;
	sub_82C9B2F8(ctx, base);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r3,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// stw r9,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0654:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r5,33(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82CA06B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA06B4:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA06E0;
	sub_82C9B2F8(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca073c
	if (ctx.cr6.eq) goto loc_82CA073C;
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA0738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA073C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82CA0784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0788:
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA07A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca07b0
	if (ctx.cr6.eq) goto loc_82CA07B0;
	// stw r25,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA07B0:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0804
	if (ctx.cr6.eq) goto loc_82CA0804;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA07D0;
	sub_82C9B2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c99298
	ctx.lr = 0x82CA07EC;
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ca0814
	if (ctx.cr6.eq) goto loc_82CA0814;
loc_82CA0804:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// stw r11,92(r27)
	PPC_STORE_U32(ctx.r27.u32 + 92, ctx.r11.u32);
	// stw r25,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0814:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stb r25,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, ctx.r25.u8);
	// lwz r8,476(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ca0848
	if (!ctx.cr6.eq) goto loc_82CA0848;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82ca084c
	if (ctx.cr6.eq) goto loc_82CA084C;
loc_82CA0848:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CA084C:
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stb r11,34(r10)
	PPC_STORE_U8(ctx.r10.u32 + 34, ctx.r11.u8);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0860:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0804
	if (ctx.cr6.eq) goto loc_82CA0804;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA0880;
	sub_82C9B2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x82c99298
	ctx.lr = 0x82CA089C;
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ca08c4
	if (ctx.cr6.eq) goto loc_82CA08C4;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// stw r11,92(r27)
	PPC_STORE_U32(ctx.r27.u32 + 92, ctx.r11.u32);
	// stw r25,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA08C4:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stb r21,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, ctx.r21.u8);
	// lwz r8,476(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ca08f8
	if (!ctx.cr6.eq) goto loc_82CA08F8;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82ca08fc
	if (ctx.cr6.eq) goto loc_82CA08FC;
loc_82CA08F8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CA08FC:
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stb r11,34(r10)
	PPC_STORE_U8(ctx.r10.u32 + 34, ctx.r11.u8);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0910:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r25,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r25,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r25.u32);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA0938;
	sub_82C9B2F8(ctx, base);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0950:
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA096C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1284
	if (ctx.cr6.eq) goto loc_82CA1284;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA099C;
	sub_82C9B2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// bl 0x82c99200
	ctx.lr = 0x82CA09A8;
	sub_82C99200(ctx, base);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA09B8:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0a1c
	if (ctx.cr6.eq) goto loc_82CA0A1C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0a1c
	if (ctx.cr6.eq) goto loc_82CA0A1C;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA09EC;
	sub_82C9B2F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82CA0A1C:
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82CA0A24;
	sub_82C99728(ctx, base);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0A28:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0a68
	if (ctx.cr6.eq) goto loc_82CA0A68;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0a68
	if (ctx.cr6.eq) goto loc_82CA0A68;
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82CA0A68:
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c99728
	ctx.lr = 0x82CA0A70;
	sub_82C99728(ctx, base);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0A74:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0a94
	if (ctx.cr6.eq) goto loc_82CA0A94;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82CA0A94;
	sub_82C98FD8(ctx, base);
loc_82CA0A94:
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x82c9a840
	ctx.lr = 0x82CA0AB4;
	sub_82C9A840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca13e4
	if (!ctx.cr6.eq) goto loc_82CA13E4;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca0c04
	if (!ctx.cr6.eq) goto loc_82CA0C04;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-17600
	ctx.r10.s64 = ctx.r11.s64 + -17600;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA0ADC:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ca0b6c
	if (ctx.cr6.lt) goto loc_82CA0B6C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0b48
	if (ctx.cr6.eq) goto loc_82CA0B48;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// stw r4,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// stw r3,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r3.u32);
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0b6c
	if (ctx.cr6.eq) goto loc_82CA0B6C;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA0B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// stw r3,184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 184, ctx.r3.u32);
	// b 0x82ca0b6c
	goto loc_82CA0B6C;
loc_82CA0B48:
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA0B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
loc_82CA0B6C:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stbx r25,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u8);
	// lbz r9,160(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c99a08
	ctx.lr = 0x82CA0B8C;
	sub_82C99A08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ca0084
	if (ctx.cr6.lt) goto loc_82CA0084;
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// lwz r9,184(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,6
	ctx.r7.s64 = 6;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// lwz r6,164(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 180, ctx.r5.u32);
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0BCC:
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,124
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 124, ctx.xer);
	// beq cr6,0x82ca1380
	if (ctx.cr6.eq) goto loc_82CA1380;
	// li r9,44
	ctx.r9.s64 = 44;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbz r8,160(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
loc_82CA0BF4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_82CA0BF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82CA0BFC:
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
loc_82CA0C00:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82CA0C04:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c30
	if (ctx.cr6.eq) goto loc_82CA0C30;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c30
	if (ctx.cr6.eq) goto loc_82CA0C30;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98fd8
	ctx.lr = 0x82CA0C30;
	sub_82C98FD8(ctx, base);
loc_82CA0C30:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ca13e0
	if (ctx.cr6.eq) goto loc_82CA13E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ca13c8
	if (ctx.cr6.eq) goto loc_82CA13C8;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r6,r1,316
	ctx.r6.s64 = ctx.r1.s64 + 316;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,324(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82c9fbc8
	goto loc_82C9FBC8;
loc_82CA0C70:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x82ca1380
	if (ctx.cr6.eq) goto loc_82CA1380;
	// lbz r10,160(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca0cdc
	if (ctx.cr6.eq) goto loc_82CA0CDC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca0cdc
	if (!ctx.cr6.eq) goto loc_82CA0CDC;
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// lwz r10,184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82ca0cdc
	if (ctx.cr6.eq) goto loc_82CA0CDC;
	// li r9,5
	ctx.r9.s64 = 5;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ca0cdc
	if (ctx.cr6.eq) goto loc_82CA0CDC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82CA0CDC:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// li r10,124
	ctx.r10.s64 = 124;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0CF0:
	// stb r21,129(r27)
	PPC_STORE_U8(ctx.r27.u32 + 129, ctx.r21.u8);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca0d40
	if (!ctx.cr6.eq) goto loc_82CA0D40;
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// stb r11,128(r27)
	PPC_STORE_U8(ctx.r27.u32 + 128, ctx.r11.u8);
loc_82CA0D08:
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca0c04
	if (!ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca0c04
	if (!ctx.cr6.eq) goto loc_82CA0C04;
loc_82CA0D34:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA0D40:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82c9b2f8
	ctx.lr = 0x82CA0D5C;
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x82c99298
	ctx.lr = 0x82CA0D78;
	sub_82C99298(ctx, base);
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,92(r27)
	PPC_STORE_U32(ctx.r27.u32 + 92, ctx.r11.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ca0e08
	if (ctx.cr6.eq) goto loc_82CA0E08;
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0da4
	if (ctx.cr6.eq) goto loc_82CA0DA4;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// b 0x82ca0da8
	goto loc_82CA0DA8;
loc_82CA0DA4:
	// lbz r11,129(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 129);
loc_82CA0DA8:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca0e08
	if (ctx.cr6.eq) goto loc_82CA0E08;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca13a4
	if (ctx.cr6.eq) goto loc_82CA13A4;
	// lbz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca13b0
	if (ctx.cr6.eq) goto loc_82CA13B0;
loc_82CA0DCC:
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca13bc
	if (!ctx.cr6.eq) goto loc_82CA13BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0e44
	if (ctx.cr6.eq) goto loc_82CA0E44;
	// addi r11,r28,-60
	ctx.r11.s64 = ctx.r28.s64 + -60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c98df8
	ctx.lr = 0x82CA0DFC;
	sub_82C98DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca13e4
	if (!ctx.cr6.eq) goto loc_82CA13E4;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0E08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca0dcc
	if (!ctx.cr6.eq) goto loc_82CA0DCC;
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// cmpwi cr6,r28,60
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 60, ctx.xer);
	// stb r11,128(r27)
	PPC_STORE_U8(ctx.r27.u32 + 128, ctx.r11.u8);
	// bne cr6,0x82ca0c04
	if (!ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0E44:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0e94
	if (ctx.cr6.eq) goto loc_82CA0E94;
	// stb r25,131(r27)
	PPC_STORE_U8(ctx.r27.u32 + 131, ctx.r25.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r21,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r21.u8);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r25,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r25.u8);
	// beq cr6,0x82ca1290
	if (ctx.cr6.eq) goto loc_82CA1290;
	// lbz r11,131(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 131);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca0d08
	if (!ctx.cr6.eq) goto loc_82CA0D08;
loc_82CA0E94:
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// stb r11,128(r27)
	PPC_STORE_U8(ctx.r27.u32 + 128, ctx.r11.u8);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0EA0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9b388
	ctx.lr = 0x82CA0EC0;
	sub_82C9B388(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// stw r25,180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 180, ctx.r25.u32);
	// stw r25,176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 176, ctx.r25.u32);
	// stb r21,160(r27)
	PPC_STORE_U8(ctx.r27.u32 + 160, ctx.r21.u8);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0EDC:
	// lbz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0f54
	if (ctx.cr6.eq) goto loc_82CA0F54;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,20
	ctx.r3.s64 = 20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// addi r11,r28,-41
	ctx.r11.s64 = ctx.r28.s64 + -41;
	// stw r25,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r25.u32);
	// stw r25,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r25.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r25,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r25.u32);
	// stw r25,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r25.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// lwz r7,344(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA0F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82CA0F54:
	// stb r25,160(r27)
	PPC_STORE_U8(ctx.r27.u32 + 160, ctx.r25.u8);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0F5C:
	// lbz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r10,180(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// lwz r11,184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,164(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,-4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// mulli r6,r7,28
	ctx.r6.s64 = ctx.r7.s64 * 28;
	// stwx r15,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r15.u32);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0F94:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x82ca0fb0
	goto loc_82CA0FB0;
loc_82CA0F9C:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x82ca0fb0
	goto loc_82CA0FB0;
loc_82CA0FA4:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82ca0fb0
	goto loc_82CA0FB0;
loc_82CA0FAC:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_82CA0FB0:
	// lbz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82ca0fcc
	if (!ctx.cr6.eq) goto loc_82CA0FCC;
	// lwz r28,316(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// b 0x82ca0fd8
	goto loc_82CA0FD8;
loc_82CA0FCC:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82CA0FD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c99a08
	ctx.lr = 0x82CA0FE0;
	sub_82C99A08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ca0084
	if (ctx.cr6.lt) goto loc_82CA0084;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mulli r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 * 28;
	// stwx r18,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r18.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// bl 0x82c9b388
	ctx.lr = 0x82CA1014;
	sub_82C9B388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r9,164(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82CA1030:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ca1030
	if (!ctx.cr6.eq) goto loc_82CA1030;
	// lwz r10,168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r11.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA1058:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// b 0x82ca1074
	goto loc_82CA1074;
loc_82CA1060:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// b 0x82ca1074
	goto loc_82CA1074;
loc_82CA1068:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82ca1074
	goto loc_82CA1074;
loc_82CA1070:
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_82CA1074:
	// lbz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca1090
	if (ctx.cr6.eq) goto loc_82CA1090;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82CA1090:
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// lwz r8,184(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,164(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// stw r11,180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 180, ctx.r11.u32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 * 28;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r4,180(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82ca0c04
	if (!ctx.cr6.eq) goto loc_82CA0C04;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca115c
	if (!ctx.cr6.eq) goto loc_82CA115C;
	// lwz r29,356(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA10F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82c99b50
	ctx.lr = 0x82CA113C;
	sub_82C99B50(ctx, base);
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA115C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA115C:
	// stb r25,160(r27)
	PPC_STORE_U8(ctx.r27.u32 + 160, ctx.r25.u8);
	// stw r25,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA1168:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c810
	ctx.lr = 0x82CA117C;
	sub_82C9C810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA1188:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9c918
	ctx.lr = 0x82CA119C;
	sub_82C9C918(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA11A8:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// bne cr6,0x82ca0c04
	if (!ctx.cr6.eq) goto loc_82CA0C04;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA11B4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA11BC:
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca0c04
	if (ctx.cr6.eq) goto loc_82CA0C04;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA11D0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA11D8:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA11E8:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA11FC:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA1208:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA1214:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca1230
	if (ctx.cr6.eq) goto loc_82CA1230;
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ca11d8
	if (ctx.cr6.eq) goto loc_82CA11D8;
loc_82CA1230:
	// lbz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 488);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca1250
	if (!ctx.cr6.eq) goto loc_82CA1250;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ca1250
	if (!ctx.cr6.eq) goto loc_82CA1250;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA1250:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,-4
	ctx.r4.s64 = -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA1270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca11d8
	if (!ctx.cr6.eq) goto loc_82CA11D8;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA1284:
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA1290:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA129C:
	// lbz r11,489(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 489);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca1348
	if (ctx.cr6.eq) goto loc_82CA1348;
	// stb r21,129(r27)
	PPC_STORE_U8(ctx.r27.u32 + 129, ctx.r21.u8);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca1348
	if (ctx.cr6.eq) goto loc_82CA1348;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca1348
	if (ctx.cr6.eq) goto loc_82CA1348;
	// addi r4,r20,-88
	ctx.r4.s64 = ctx.r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x82c99298
	ctx.lr = 0x82CA12D4;
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca0084
	if (ctx.cr6.eq) goto loc_82CA0084;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r25,131(r27)
	PPC_STORE_U8(ctx.r27.u32 + 131, ctx.r25.u8);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA1308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1290
	if (ctx.cr6.eq) goto loc_82CA1290;
	// lbz r11,131(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 131);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca1348
	if (ctx.cr6.eq) goto loc_82CA1348;
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca1348
	if (!ctx.cr6.eq) goto loc_82CA1348;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca1348
	if (ctx.cr6.eq) goto loc_82CA1348;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA1340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca0d34
	if (ctx.cr6.eq) goto loc_82CA0D34;
loc_82CA1348:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r10,r11,-1320
	ctx.r10.s64 = ctx.r11.s64 + -1320;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9fad8
	ctx.lr = 0x82CA1368;
	sub_82C9FAD8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA1370:
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// beq cr6,0x82ca1398
	if (ctx.cr6.eq) goto loc_82CA1398;
	// cmpwi cr6,r30,28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 28, ctx.xer);
	// beq cr6,0x82ca138c
	if (ctx.cr6.eq) goto loc_82CA138C;
loc_82CA1380:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA138C:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA1398:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA13A4:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA13B0:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA13BC:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA13C8:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82CA13E0:
	// li r3,35
	ctx.r3.s64 = 35;
loc_82CA13E4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA13EC"))) PPC_WEAK_FUNC(sub_82CA13EC);
PPC_FUNC_IMPL(__imp__sub_82CA13EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA13F0"))) PPC_WEAK_FUNC(sub_82CA13F0);
PPC_FUNC_IMPL(__imp__sub_82CA13F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA13F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 15, ctx.xer);
	// beq cr6,0x82ca1480
	if (ctx.cr6.eq) goto loc_82CA1480;
	// cmpwi cr6,r27,18
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 18, ctx.xer);
	// beq cr6,0x82ca1448
	if (ctx.cr6.eq) goto loc_82CA1448;
	// cmpwi cr6,r27,27
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 27, ctx.xer);
	// bne cr6,0x82ca14c8
	if (!ctx.cr6.eq) goto loc_82CA14C8;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r11,-18696
	ctx.r9.s64 = ctx.r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1448:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3228
	ctx.r30.s64 = ctx.r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA146C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca148c
	if (ctx.cr6.eq) goto loc_82CA148C;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-6624
	ctx.r10.s64 = ctx.r11.s64 + -6624;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82CA1480:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA148C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA14A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca14c8
	if (ctx.cr6.eq) goto loc_82CA14C8;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r10,r11,-2008
	ctx.r10.s64 = ctx.r11.s64 + -2008;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA14C8:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca14e8
	if (!ctx.cr6.eq) goto loc_82CA14E8;
	// cmpwi cr6,r27,28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 28, ctx.xer);
	// bne cr6,0x82ca14e8
	if (!ctx.cr6.eq) goto loc_82CA14E8;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA14E8:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1500"))) PPC_WEAK_FUNC(sub_82CA1500);
PPC_FUNC_IMPL(__imp__sub_82CA1500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CA1508;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r25,15
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 15, ctx.xer);
	// beq cr6,0x82ca1544
	if (ctx.cr6.eq) goto loc_82CA1544;
	// cmpwi cr6,r25,18
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 18, ctx.xer);
	// beq cr6,0x82ca1550
	if (ctx.cr6.eq) goto loc_82CA1550;
	// cmpwi cr6,r25,23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 23, ctx.xer);
	// bne cr6,0x82ca15f0
	if (!ctx.cr6.eq) goto loc_82CA15F0;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r10,r11,-6024
	ctx.r10.s64 = ctx.r11.s64 + -6024;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_82CA1544:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA1550:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-5588
	ctx.r28.s64 = ctx.r11.s64 + -5588;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82CA1560:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA157C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca15d8
	if (!ctx.cr6.eq) goto loc_82CA15D8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ca1560
	if (ctx.cr6.lt) goto loc_82CA1560;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r6,r11,3208
	ctx.r6.s64 = ctx.r11.s64 + 3208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA15B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca15f0
	if (ctx.cr6.eq) goto loc_82CA15F0;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r10,r11,-1816
	ctx.r10.s64 = ctx.r11.s64 + -1816;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA15D8:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r3,r29,23
	ctx.r3.s64 = ctx.r29.s64 + 23;
	// addi r10,r11,-12112
	ctx.r10.s64 = ctx.r11.s64 + -12112;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA15F0:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca1610
	if (!ctx.cr6.eq) goto loc_82CA1610;
	// cmpwi cr6,r25,28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 28, ctx.xer);
	// bne cr6,0x82ca1610
	if (!ctx.cr6.eq) goto loc_82CA1610;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA1610:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1628"))) PPC_WEAK_FUNC(sub_82CA1628);
PPC_FUNC_IMPL(__imp__sub_82CA1628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA1630;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 15, ctx.xer);
	// beq cr6,0x82ca1748
	if (ctx.cr6.eq) goto loc_82CA1748;
	// cmpwi cr6,r27,18
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 18, ctx.xer);
	// beq cr6,0x82ca1680
	if (ctx.cr6.eq) goto loc_82CA1680;
	// cmpwi cr6,r27,23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 23, ctx.xer);
	// bne cr6,0x82ca1710
	if (!ctx.cr6.eq) goto loc_82CA1710;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1728
	ctx.r9.s64 = ctx.r11.s64 + -1728;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1680:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3064
	ctx.r30.s64 = ctx.r11.s64 + 3064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA16A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca16cc
	if (ctx.cr6.eq) goto loc_82CA16CC;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r9,r11,-18696
	ctx.r9.s64 = ctx.r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// li r3,42
	ctx.r3.s64 = 42;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA16CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA16E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1710
	if (ctx.cr6.eq) goto loc_82CA1710;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r9,r11,-18696
	ctx.r9.s64 = ctx.r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// li r3,41
	ctx.r3.s64 = 41;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1710:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca1730
	if (!ctx.cr6.eq) goto loc_82CA1730;
	// cmpwi cr6,r27,28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 28, ctx.xer);
	// bne cr6,0x82ca1730
	if (!ctx.cr6.eq) goto loc_82CA1730;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1730:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1748:
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1754"))) PPC_WEAK_FUNC(sub_82CA1754);
PPC_FUNC_IMPL(__imp__sub_82CA1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1758"))) PPC_WEAK_FUNC(sub_82CA1758);
PPC_FUNC_IMPL(__imp__sub_82CA1758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA1760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA1790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9fb58
	ctx.lr = 0x82CA17BC;
	sub_82C9FB58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA17C4"))) PPC_WEAK_FUNC(sub_82CA17C4);
PPC_FUNC_IMPL(__imp__sub_82CA17C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA17C8"))) PPC_WEAK_FUNC(sub_82CA17C8);
PPC_FUNC_IMPL(__imp__sub_82CA17C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CA17D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r29,300(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ca17fc
	if (!ctx.cr6.eq) goto loc_82CA17FC;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA17FC:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r8,33(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ca1864
	if (ctx.cr6.eq) goto loc_82CA1864;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA183C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9fb58
	ctx.lr = 0x82CA1860;
	sub_82C9FB58(ctx, base);
	// b 0x82ca1884
	goto loc_82CA1884;
loc_82CA1864:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,228(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9eac0
	ctx.lr = 0x82CA1884;
	sub_82C9EAC0(ctx, base);
loc_82CA1884:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca197c
	if (!ctx.cr6.eq) goto loc_82CA197C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca18b8
	if (ctx.cr6.eq) goto loc_82CA18B8;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82ca18b8
	if (!ctx.cr6.eq) goto loc_82CA18B8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA18B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// lbz r8,33(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ca193c
	if (ctx.cr6.eq) goto loc_82CA193C;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5976
	ctx.r10.s64 = ctx.r11.s64 + 5976;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA1908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9fb58
	ctx.lr = 0x82CA1934;
	sub_82C9FB58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA193C:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lwz r10,476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lbz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r7,r11,-1320
	ctx.r7.s64 = ctx.r11.s64 + -1320;
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r7,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// cntlzw r4,r9
	ctx.r4.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r4,r3,1
	ctx.r4.u64 = ctx.r3.u64 ^ 1;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9eac0
	ctx.lr = 0x82CA197C;
	sub_82C9EAC0(ctx, base);
loc_82CA197C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1984"))) PPC_WEAK_FUNC(sub_82CA1984);
PPC_FUNC_IMPL(__imp__sub_82CA1984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1988"))) PPC_WEAK_FUNC(sub_82CA1988);
PPC_FUNC_IMPL(__imp__sub_82CA1988) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82ca19e0
	if (ctx.cr6.eq) goto loc_82CA19E0;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82ca19e8
	if (ctx.cr6.eq) goto loc_82CA19E8;
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x82ca19d4
	if (ctx.cr6.eq) goto loc_82CA19D4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca19c0
	if (!ctx.cr6.eq) goto loc_82CA19C0;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca19c0
	if (!ctx.cr6.eq) goto loc_82CA19C0;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA19C0:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA19D4:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-2104
	ctx.r9.s64 = ctx.r10.s64 + -2104;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82CA19E0:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_82CA19E8:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r9,r10,5104
	ctx.r9.s64 = ctx.r10.s64 + 5104;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA19FC"))) PPC_WEAK_FUNC(sub_82CA19FC);
PPC_FUNC_IMPL(__imp__sub_82CA19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1A00"))) PPC_WEAK_FUNC(sub_82CA1A00);
PPC_FUNC_IMPL(__imp__sub_82CA1A00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-15
	ctx.r11.s64 = ctx.r4.s64 + -15;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x82ca1ae4
	if (ctx.cr6.gt) {
		sub_82CA1AE4(ctx, base);
		return;
	}
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,6696
	ctx.r12.s64 = ctx.r12.s64 + 6696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82CA1A94
		return;
	case 1:
		// ERROR: 0x82CA1AE4
		return;
	case 2:
		// ERROR: 0x82CA1A9C
		return;
	case 3:
		// ERROR: 0x82CA1AD0
		return;
	case 4:
		// ERROR: 0x82CA1AE4
		return;
	case 5:
		// ERROR: 0x82CA1AE4
		return;
	case 6:
		// ERROR: 0x82CA1AE4
		return;
	case 7:
		// ERROR: 0x82CA1AE4
		return;
	case 8:
		// ERROR: 0x82CA1AE4
		return;
	case 9:
		// ERROR: 0x82CA1AE4
		return;
	case 10:
		// ERROR: 0x82CA1AE4
		return;
	case 11:
		// ERROR: 0x82CA1AE4
		return;
	case 12:
		// ERROR: 0x82CA1AE4
		return;
	case 13:
		// ERROR: 0x82CA1AE4
		return;
	case 14:
		// ERROR: 0x82CA1AE4
		return;
	case 15:
		// ERROR: 0x82CA1AE4
		return;
	case 16:
		// ERROR: 0x82CA1AE4
		return;
	case 17:
		// ERROR: 0x82CA1AE4
		return;
	case 18:
		// ERROR: 0x82CA1AE4
		return;
	case 19:
		// ERROR: 0x82CA1AE4
		return;
	case 20:
		// ERROR: 0x82CA1AE4
		return;
	case 21:
		// ERROR: 0x82CA1AE4
		return;
	case 22:
		// ERROR: 0x82CA1AE4
		return;
	case 23:
		// ERROR: 0x82CA1AE4
		return;
	case 24:
		// ERROR: 0x82CA1AE4
		return;
	case 25:
		// ERROR: 0x82CA1AE4
		return;
	case 26:
		// ERROR: 0x82CA1AD0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82CA1A28"))) PPC_WEAK_FUNC(sub_82CA1A28);
PPC_FUNC_IMPL(__imp__sub_82CA1A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,6804(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6804);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6812(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6812);
	// lwz r22,6864(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6864);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6864(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6864);
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1A9C"))) PPC_WEAK_FUNC(sub_82CA1A9C);
PPC_FUNC_IMPL(__imp__sub_82CA1A9C) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca1abc
	if (ctx.cr6.eq) goto loc_82CA1ABC;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82CA1ABC:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r11,r11,7832
	ctx.r11.s64 = ctx.r11.s64 + 7832;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1AD0"))) PPC_WEAK_FUNC(sub_82CA1AD0);
PPC_FUNC_IMPL(__imp__sub_82CA1AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r9,r11,5376
	ctx.r9.s64 = ctx.r11.s64 + 5376;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1AE4"))) PPC_WEAK_FUNC(sub_82CA1AE4);
PPC_FUNC_IMPL(__imp__sub_82CA1AE4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca1b00
	if (!ctx.cr6.eq) goto loc_82CA1B00;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca1b00
	if (!ctx.cr6.eq) goto loc_82CA1B00;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA1B00:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = ctx.r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1B14"))) PPC_WEAK_FUNC(sub_82CA1B14);
PPC_FUNC_IMPL(__imp__sub_82CA1B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1B18"))) PPC_WEAK_FUNC(sub_82CA1B18);
PPC_FUNC_IMPL(__imp__sub_82CA1B18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82ca1b78
	if (ctx.cr6.eq) goto loc_82CA1B78;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82ca1b64
	if (ctx.cr6.eq) goto loc_82CA1B64;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// beq cr6,0x82ca1b64
	if (ctx.cr6.eq) goto loc_82CA1B64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca1b50
	if (!ctx.cr6.eq) goto loc_82CA1B50;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca1b50
	if (!ctx.cr6.eq) goto loc_82CA1B50;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA1B50:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA1B64:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r9,r10,5672
	ctx.r9.s64 = ctx.r10.s64 + 5672;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA1B78:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1B80"))) PPC_WEAK_FUNC(sub_82CA1B80);
PPC_FUNC_IMPL(__imp__sub_82CA1B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA1B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82c9aa48
	ctx.lr = 0x82CA1BA0;
	sub_82C9AA48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca1bc8
	if (!ctx.cr6.eq) goto loc_82CA1BC8;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r10,r11,5976
	ctx.r10.s64 = ctx.r11.s64 + 5976;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca1758
	ctx.lr = 0x82CA1BC8;
	sub_82CA1758(ctx, base);
loc_82CA1BC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1BD0"))) PPC_WEAK_FUNC(sub_82CA1BD0);
PPC_FUNC_IMPL(__imp__sub_82CA1BD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82ca1c30
	if (ctx.cr6.eq) goto loc_82CA1C30;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82ca1c1c
	if (ctx.cr6.eq) goto loc_82CA1C1C;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// beq cr6,0x82ca1c1c
	if (ctx.cr6.eq) goto loc_82CA1C1C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca1c08
	if (!ctx.cr6.eq) goto loc_82CA1C08;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca1c08
	if (!ctx.cr6.eq) goto loc_82CA1C08;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA1C08:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA1C1C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,34
	ctx.r3.s64 = 34;
	// addi r9,r10,6656
	ctx.r9.s64 = ctx.r10.s64 + 6656;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA1C30:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1C38"))) PPC_WEAK_FUNC(sub_82CA1C38);
PPC_FUNC_IMPL(__imp__sub_82CA1C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA1C40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82ca1e60
	if (ctx.cr6.gt) goto loc_82CA1E60;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,7292
	ctx.r12.s64 = ctx.r12.s64 + 7292;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CA1D00;
	case 1:
		goto loc_82CA1E60;
	case 2:
		goto loc_82CA1E60;
	case 3:
		goto loc_82CA1E60;
	case 4:
		goto loc_82CA1E60;
	case 5:
		goto loc_82CA1E60;
	case 6:
		goto loc_82CA1E60;
	case 7:
		goto loc_82CA1E60;
	case 8:
		goto loc_82CA1E60;
	case 9:
		goto loc_82CA1E60;
	case 10:
		goto loc_82CA1E60;
	case 11:
		goto loc_82CA1E60;
	case 12:
		goto loc_82CA1E60;
	case 13:
		goto loc_82CA1E60;
	case 14:
		goto loc_82CA1E60;
	case 15:
		goto loc_82CA1E24;
	case 16:
		goto loc_82CA1E60;
	case 17:
		goto loc_82CA1E30;
	case 18:
		goto loc_82CA1E60;
	case 19:
		goto loc_82CA1D00;
	case 20:
		goto loc_82CA1D0C;
	case 21:
		goto loc_82CA1E60;
	case 22:
		goto loc_82CA1E60;
	case 23:
		goto loc_82CA1E60;
	case 24:
		goto loc_82CA1E60;
	case 25:
		goto loc_82CA1E60;
	case 26:
		goto loc_82CA1E60;
	case 27:
		goto loc_82CA1E60;
	case 28:
		goto loc_82CA1E60;
	case 29:
		goto loc_82CA1E60;
	case 30:
		goto loc_82CA1E48;
	case 31:
		goto loc_82CA1E60;
	case 32:
		goto loc_82CA1E3C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,7424(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7424);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7716(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7716);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7728(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7728);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7424(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7424);
	// lwz r22,7436(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7436);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7752(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7752);
	// lwz r22,7776(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7740(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7740);
loc_82CA1D00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1D0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3208
	ctx.r30.s64 = ctx.r11.s64 + 3208;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r30,-88
	ctx.r6.s64 = ctx.r30.s64 + -88;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA1D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1d58
	if (ctx.cr6.eq) goto loc_82CA1D58;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r10,r11,6536
	ctx.r10.s64 = ctx.r11.s64 + 6536;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1D58:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r6,r30,-140
	ctx.r6.s64 = ctx.r30.s64 + -140;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA1D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1d9c
	if (ctx.cr6.eq) goto loc_82CA1D9C;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r10,r11,7120
	ctx.r10.s64 = ctx.r11.s64 + 7120;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1D9C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r6,r30,-116
	ctx.r6.s64 = ctx.r30.s64 + -116;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA1DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1de0
	if (ctx.cr6.eq) goto loc_82CA1DE0;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r10,r11,6936
	ctx.r10.s64 = ctx.r11.s64 + 6936;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1DE0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA1E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca1e60
	if (ctx.cr6.eq) goto loc_82CA1E60;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r10,r11,-1912
	ctx.r10.s64 = ctx.r11.s64 + -1912;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1E24:
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1E30:
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1E3C:
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1E48:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,-19216
	ctx.r10.s64 = ctx.r11.s64 + -19216;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1E60:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca1e80
	if (!ctx.cr6.eq) goto loc_82CA1E80;
	// cmpwi cr6,r26,28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 28, ctx.xer);
	// bne cr6,0x82ca1e80
	if (!ctx.cr6.eq) goto loc_82CA1E80;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA1E80:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1E98"))) PPC_WEAK_FUNC(sub_82CA1E98);
PPC_FUNC_IMPL(__imp__sub_82CA1E98) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,38
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 38, ctx.xer);
	// bgt cr6,0x82ca1fd0
	if (ctx.cr6.gt) {
		sub_82CA1FD0(ctx, base);
		return;
	}
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,7872
	ctx.r12.s64 = ctx.r12.s64 + 7872;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82CA1F94
		return;
	case 1:
		// ERROR: 0x82CA1FD0
		return;
	case 2:
		// ERROR: 0x82CA1FD0
		return;
	case 3:
		// ERROR: 0x82CA1FD0
		return;
	case 4:
		// ERROR: 0x82CA1FD0
		return;
	case 5:
		// ERROR: 0x82CA1FD0
		return;
	case 6:
		// ERROR: 0x82CA1FD0
		return;
	case 7:
		// ERROR: 0x82CA1FD0
		return;
	case 8:
		// ERROR: 0x82CA1FD0
		return;
	case 9:
		// ERROR: 0x82CA1FD0
		return;
	case 10:
		// ERROR: 0x82CA1FD0
		return;
	case 11:
		// ERROR: 0x82CA1FD0
		return;
	case 12:
		// ERROR: 0x82CA1FD0
		return;
	case 13:
		// ERROR: 0x82CA1FD0
		return;
	case 14:
		// ERROR: 0x82CA1FD0
		return;
	case 15:
		// ERROR: 0x82CA1FD0
		return;
	case 16:
		// ERROR: 0x82CA1FD0
		return;
	case 17:
		// ERROR: 0x82CA1FD0
		return;
	case 18:
		// ERROR: 0x82CA1FD0
		return;
	case 19:
		// ERROR: 0x82CA1F8C
		return;
	case 20:
		// ERROR: 0x82CA1FD0
		return;
	case 21:
		// ERROR: 0x82CA1FD0
		return;
	case 22:
		// ERROR: 0x82CA1FD0
		return;
	case 23:
		// ERROR: 0x82CA1FD0
		return;
	case 24:
		// ERROR: 0x82CA1FD0
		return;
	case 25:
		// ERROR: 0x82CA1FD0
		return;
	case 26:
		// ERROR: 0x82CA1FD0
		return;
	case 27:
		// ERROR: 0x82CA1FD0
		return;
	case 28:
		// ERROR: 0x82CA1FD0
		return;
	case 29:
		// ERROR: 0x82CA1FD0
		return;
	case 30:
		// ERROR: 0x82CA1FA0
		return;
	case 31:
		// ERROR: 0x82CA1FD0
		return;
	case 32:
		// ERROR: 0x82CA1FD0
		return;
	case 33:
		// ERROR: 0x82CA1FD0
		return;
	case 34:
		// ERROR: 0x82CA1FD0
		return;
	case 35:
		// ERROR: 0x82CA1FD0
		return;
	case 36:
		// ERROR: 0x82CA1FD0
		return;
	case 37:
		// ERROR: 0x82CA1F5C
		return;
	case 38:
		// ERROR: 0x82CA1F70
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82CA1EC0"))) PPC_WEAK_FUNC(sub_82CA1EC0);
PPC_FUNC_IMPL(__imp__sub_82CA1EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,8084(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8084);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8076(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8076);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8096(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8096);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8028(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8028);
	// lwz r22,8048(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8048);
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-11240
	ctx.r9.s64 = ctx.r10.s64 + -11240;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1F70"))) PPC_WEAK_FUNC(sub_82CA1F70);
PPC_FUNC_IMPL(__imp__sub_82CA1F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca1fa0
	if (ctx.cr6.eq) {
		// ERROR 82CA1FA0
		return;
	}
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1F8C"))) PPC_WEAK_FUNC(sub_82CA1F8C);
PPC_FUNC_IMPL(__imp__sub_82CA1F8C) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1F94"))) PPC_WEAK_FUNC(sub_82CA1F94);
PPC_FUNC_IMPL(__imp__sub_82CA1F94) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca1f8c
	if (ctx.cr6.eq) {
		sub_82CA1F8C(ctx, base);
		return;
	}
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca1fbc
	if (!ctx.cr6.eq) goto loc_82CA1FBC;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca1fbc
	if (!ctx.cr6.eq) goto loc_82CA1FBC;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA1FBC:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1FD0"))) PPC_WEAK_FUNC(sub_82CA1FD0);
PPC_FUNC_IMPL(__imp__sub_82CA1FD0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82ca1c38
	sub_82CA1C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1FD8"))) PPC_WEAK_FUNC(sub_82CA1FD8);
PPC_FUNC_IMPL(__imp__sub_82CA1FD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82ca204c
	if (ctx.cr6.eq) goto loc_82CA204C;
	// cmpwi cr6,r4,17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 17, ctx.xer);
	// beq cr6,0x82ca2038
	if (ctx.cr6.eq) goto loc_82CA2038;
	// cmpwi cr6,r4,25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 25, ctx.xer);
	// beq cr6,0x82ca2024
	if (ctx.cr6.eq) goto loc_82CA2024;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca2010
	if (!ctx.cr6.eq) goto loc_82CA2010;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca2010
	if (!ctx.cr6.eq) goto loc_82CA2010;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA2010:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA2024:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r9,r10,7224
	ctx.r9.s64 = ctx.r10.s64 + 7224;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA2038:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r9,r10,-19424
	ctx.r9.s64 = ctx.r10.s64 + -19424;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA204C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2054"))) PPC_WEAK_FUNC(sub_82CA2054);
PPC_FUNC_IMPL(__imp__sub_82CA2054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2058"))) PPC_WEAK_FUNC(sub_82CA2058);
PPC_FUNC_IMPL(__imp__sub_82CA2058) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82ca20b0
	if (ctx.cr6.eq) goto loc_82CA20B0;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x82ca209c
	if (ctx.cr6.eq) goto loc_82CA209C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca2088
	if (!ctx.cr6.eq) goto loc_82CA2088;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca2088
	if (!ctx.cr6.eq) goto loc_82CA2088;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA2088:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA209C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r9,r10,8152
	ctx.r9.s64 = ctx.r10.s64 + 8152;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA20B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA20B8"))) PPC_WEAK_FUNC(sub_82CA20B8);
PPC_FUNC_IMPL(__imp__sub_82CA20B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82ca2110
	if (ctx.cr6.eq) goto loc_82CA2110;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x82ca20fc
	if (ctx.cr6.eq) goto loc_82CA20FC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca20e8
	if (!ctx.cr6.eq) goto loc_82CA20E8;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca20e8
	if (!ctx.cr6.eq) goto loc_82CA20E8;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA20E8:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA20FC:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r9,r10,8280
	ctx.r9.s64 = ctx.r10.s64 + 8280;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA2110:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2118"))) PPC_WEAK_FUNC(sub_82CA2118);
PPC_FUNC_IMPL(__imp__sub_82CA2118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA2120;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r26,-15
	ctx.r11.s64 = ctx.r26.s64 + -15;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82ca2244
	if (ctx.cr6.gt) goto loc_82CA2244;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,8540
	ctx.r12.s64 = ctx.r12.s64 + 8540;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CA2188;
	case 1:
		goto loc_82CA2244;
	case 2:
		goto loc_82CA21AC;
	case 3:
		goto loc_82CA21C4;
	case 4:
		goto loc_82CA2244;
	case 5:
		goto loc_82CA2244;
	case 6:
		goto loc_82CA2244;
	case 7:
		goto loc_82CA2244;
	case 8:
		goto loc_82CA2244;
	case 9:
		goto loc_82CA2244;
	case 10:
		goto loc_82CA2194;
	default:
		__builtin_unreachable();
	}
	// lwz r22,8584(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8584);
	// lwz r22,8772(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8620(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8620);
	// lwz r22,8644(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8644);
	// lwz r22,8772(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8596(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8596);
loc_82CA2188:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA2194:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r10,r11,7224
	ctx.r10.s64 = ctx.r11.s64 + 7224;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA21AC:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r10,r11,-19424
	ctx.r10.s64 = ctx.r11.s64 + -19424;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA21C4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,3228
	ctx.r30.s64 = ctx.r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA21E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca2208
	if (ctx.cr6.eq) goto loc_82CA2208;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8280
	ctx.r10.s64 = ctx.r11.s64 + 8280;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA2208:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA2224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca2244
	if (ctx.cr6.eq) goto loc_82CA2244;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8376
	ctx.r10.s64 = ctx.r11.s64 + 8376;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA2244:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca2264
	if (!ctx.cr6.eq) goto loc_82CA2264;
	// cmpwi cr6,r26,28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 28, ctx.xer);
	// bne cr6,0x82ca2264
	if (!ctx.cr6.eq) goto loc_82CA2264;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA2264:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA227C"))) PPC_WEAK_FUNC(sub_82CA227C);
PPC_FUNC_IMPL(__imp__sub_82CA227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2280"))) PPC_WEAK_FUNC(sub_82CA2280);
PPC_FUNC_IMPL(__imp__sub_82CA2280) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82ca22e0
	if (ctx.cr6.eq) goto loc_82CA22E0;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x82ca22cc
	if (ctx.cr6.eq) goto loc_82CA22CC;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// beq cr6,0x82ca22cc
	if (ctx.cr6.eq) goto loc_82CA22CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca22b8
	if (!ctx.cr6.eq) goto loc_82CA22B8;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
	// bne cr6,0x82ca22b8
	if (!ctx.cr6.eq) goto loc_82CA22B8;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA22B8:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA22CC:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r9,r10,8472
	ctx.r9.s64 = ctx.r10.s64 + 8472;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA22E0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA22E8"))) PPC_WEAK_FUNC(sub_82CA22E8);
PPC_FUNC_IMPL(__imp__sub_82CA22E8) {
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
	// addi r11,r31,-11
	ctx.r11.s64 = ctx.r31.s64 + -11;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x82ca23d8
	if (ctx.cr6.gt) goto loc_82CA23D8;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,9004
	ctx.r12.s64 = ctx.r12.s64 + 9004;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CA2380;
	case 1:
		goto loc_82CA23D8;
	case 2:
		goto loc_82CA2388;
	case 3:
		goto loc_82CA2378;
	case 4:
		goto loc_82CA2378;
	case 5:
		goto loc_82CA2390;
	case 6:
		goto loc_82CA23D8;
	case 7:
		goto loc_82CA23D8;
	case 8:
		goto loc_82CA23D8;
	case 9:
		goto loc_82CA23D8;
	case 10:
		goto loc_82CA23D8;
	case 11:
		goto loc_82CA23D8;
	case 12:
		goto loc_82CA23D8;
	case 13:
		goto loc_82CA23D8;
	case 14:
		goto loc_82CA23D8;
	case 15:
		goto loc_82CA23D8;
	case 16:
		goto loc_82CA23D8;
	case 17:
		goto loc_82CA23D8;
	case 18:
		goto loc_82CA23D0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,9088(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9096(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9096);
	// lwz r22,9080(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9080);
	// lwz r22,9080(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9080);
	// lwz r22,9104(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9168(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9168);
loc_82CA2378:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca2404
	goto loc_82CA2404;
loc_82CA2380:
	// li r3,55
	ctx.r3.s64 = 55;
	// b 0x82ca2404
	goto loc_82CA2404;
loc_82CA2388:
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x82ca2404
	goto loc_82CA2404;
loc_82CA2390:
	// lwz r11,68(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,3084
	ctx.r6.s64 = ctx.r9.s64 + 3084;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA23B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca23d8
	if (ctx.cr6.eq) goto loc_82CA23D8;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8832
	ctx.r10.s64 = ctx.r11.s64 + 8832;
	// b 0x82ca2400
	goto loc_82CA2400;
loc_82CA23D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ca23f8
	goto loc_82CA23F8;
loc_82CA23D8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca23f4
	if (!ctx.cr6.eq) goto loc_82CA23F4;
	// cmpwi cr6,r31,28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 28, ctx.xer);
	// bne cr6,0x82ca23f4
	if (!ctx.cr6.eq) goto loc_82CA23F4;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82ca2404
	goto loc_82CA2404;
loc_82CA23F4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA23F8:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
loc_82CA2400:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82CA2404:
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

__attribute__((alias("__imp__sub_82CA241C"))) PPC_WEAK_FUNC(sub_82CA241C);
PPC_FUNC_IMPL(__imp__sub_82CA241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2420"))) PPC_WEAK_FUNC(sub_82CA2420);
PPC_FUNC_IMPL(__imp__sub_82CA2420) {
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
	// addi r11,r30,-11
	ctx.r11.s64 = ctx.r30.s64 + -11;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x82ca2540
	if (ctx.cr6.gt) goto loc_82CA2540;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// addi r12,r12,9316
	ctx.r12.s64 = ctx.r12.s64 + 9316;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CA24D0;
	case 1:
		goto loc_82CA24C0;
	case 2:
		goto loc_82CA24E0;
	case 3:
		goto loc_82CA24F0;
	case 4:
		goto loc_82CA24B0;
	case 5:
		goto loc_82CA24F8;
	case 6:
		goto loc_82CA2540;
	case 7:
		goto loc_82CA2540;
	case 8:
		goto loc_82CA2540;
	case 9:
		goto loc_82CA2540;
	case 10:
		goto loc_82CA2540;
	case 11:
		goto loc_82CA2540;
	case 12:
		goto loc_82CA2540;
	case 13:
		goto loc_82CA2540;
	case 14:
		goto loc_82CA2540;
	case 15:
		goto loc_82CA2540;
	case 16:
		goto loc_82CA2540;
	case 17:
		goto loc_82CA2540;
	case 18:
		goto loc_82CA2538;
	default:
		__builtin_unreachable();
	}
	// lwz r22,9424(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9424);
	// lwz r22,9408(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9408);
	// lwz r22,9440(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9440);
	// lwz r22,9456(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9456);
	// lwz r22,9392(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9392);
	// lwz r22,9464(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9464);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9528(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9528);
loc_82CA24B0:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,8936
	ctx.r10.s64 = ctx.r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24C0:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,8936
	ctx.r10.s64 = ctx.r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24D0:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r10,r11,8936
	ctx.r10.s64 = ctx.r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24E0:
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r10,r11,8936
	ctx.r10.s64 = ctx.r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca256c
	goto loc_82CA256C;
loc_82CA24F8:
	// lwz r11,68(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,3084
	ctx.r6.s64 = ctx.r9.s64 + 3084;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA2520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca2540
	if (ctx.cr6.eq) goto loc_82CA2540;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8832
	ctx.r10.s64 = ctx.r11.s64 + 8832;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA2538:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ca2560
	goto loc_82CA2560;
loc_82CA2540:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca255c
	if (!ctx.cr6.eq) goto loc_82CA255C;
	// cmpwi cr6,r30,28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 28, ctx.xer);
	// bne cr6,0x82ca255c
	if (!ctx.cr6.eq) goto loc_82CA255C;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82ca256c
	goto loc_82CA256C;
loc_82CA255C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA2560:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r10,r11,-11496
	ctx.r10.s64 = ctx.r11.s64 + -11496;
loc_82CA2568:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CA256C:
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

__attribute__((alias("__imp__sub_82CA2584"))) PPC_WEAK_FUNC(sub_82CA2584);
PPC_FUNC_IMPL(__imp__sub_82CA2584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2588"))) PPC_WEAK_FUNC(sub_82CA2588);
PPC_FUNC_IMPL(__imp__sub_82CA2588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA2590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r11,7040
	ctx.r9.s64 = ctx.r11.s64 + 7040;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// addi r8,r10,9248
	ctx.r8.s64 = ctx.r10.s64 + 9248;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// beq cr6,0x82ca25d8
	if (ctx.cr6.eq) goto loc_82CA25D8;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82c9b268
	ctx.lr = 0x82CA25D4;
	sub_82C9B268(ctx, base);
	// b 0x82ca25dc
	goto loc_82CA25DC;
loc_82CA25D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CA25DC:
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82c98268
	ctx.lr = 0x82CA25F4;
	sub_82C98268(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r31.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stb r30,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r30.u8);
	// stb r30,353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 353, ctx.r30.u8);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stb r29,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r29.u8);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stb r30,488(r31)
	PPC_STORE_U8(ctx.r31.u32 + 488, ctx.r30.u8);
	// stb r30,489(r31)
	PPC_STORE_U8(ctx.r31.u32 + 489, ctx.r30.u8);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA26EC"))) PPC_WEAK_FUNC(sub_82CA26EC);
PPC_FUNC_IMPL(__imp__sub_82CA26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA26F0"))) PPC_WEAK_FUNC(sub_82CA26F0);
PPC_FUNC_IMPL(__imp__sub_82CA26F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA26F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,496
	ctx.r3.s64 = 496;
	// beq cr6,0x82ca274c
	if (ctx.cr6.eq) goto loc_82CA274C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA2724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca2958
	if (ctx.cr6.eq) goto loc_82CA2958;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x82ca2780
	goto loc_82CA2780;
loc_82CA274C:
	// bl 0x82ca3c68
	ctx.lr = 0x82CA2750;
	sub_82CA3C68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca2958
	if (ctx.cr6.eq) goto loc_82CA2958;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lis r9,-32054
	ctx.r9.s64 = -2100690944;
	// addi r8,r11,15464
	ctx.r8.s64 = ctx.r11.s64 + 15464;
	// addi r7,r10,-31376
	ctx.r7.s64 = ctx.r10.s64 + -31376;
	// addi r6,r9,24000
	ctx.r6.s64 = ctx.r9.s64 + 24000;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
loc_82CA2780:
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA27A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// bne cr6,0x82ca27d0
	if (!ctx.cr6.eq) goto loc_82CA27D0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA27C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA27D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA27E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x82ca2818
	if (!ctx.cr6.eq) goto loc_82CA2818;
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA27FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA280C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA2818:
	// addi r11,r3,1024
	ctx.r11.s64 = ctx.r3.s64 + 1024;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x82ca28c8
	if (ctx.cr6.eq) goto loc_82CA28C8;
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
loc_82CA282C:
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stb r11,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r11.u8);
	// stb r30,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r30.u8);
	// stb r30,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r30.u8);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r29,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r29,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r29.u32);
	// bl 0x82ca2588
	ctx.lr = 0x82CA28A0;
	sub_82CA2588(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ca2918
	if (ctx.cr6.eq) goto loc_82CA2918;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca2918
	if (!ctx.cr6.eq) goto loc_82CA2918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9b770
	ctx.lr = 0x82CA28BC;
	sub_82C9B770(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA28C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c9af98
	ctx.lr = 0x82CA28D0;
	sub_82C9AF98(ctx, base);
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ca282c
	if (!ctx.cr6.eq) goto loc_82CA282C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA28EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA28FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA290C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA2918:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ca294c
	if (ctx.cr6.eq) goto loc_82CA294C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,-1240
	ctx.r11.s64 = ctx.r10.s64 + -1240;
	// addi r9,r11,-368
	ctx.r9.s64 = ctx.r11.s64 + -368;
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// lbz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// stb r8,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82CA294C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1240
	ctx.r10.s64 = ctx.r11.s64 + -1240;
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
loc_82CA2958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2964"))) PPC_WEAK_FUNC(sub_82CA2964);
PPC_FUNC_IMPL(__imp__sub_82CA2964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2968"))) PPC_WEAK_FUNC(sub_82CA2968);
PPC_FUNC_IMPL(__imp__sub_82CA2968) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ca26f0
	ctx.lr = 0x82CA2980;
	sub_82CA26F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca29d0
	if (ctx.cr6.eq) goto loc_82CA29D0;
	// lbz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca29d0
	if (ctx.cr6.eq) goto loc_82CA29D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,2928
	ctx.r4.s64 = ctx.r11.s64 + 2928;
	// bl 0x82c9cc38
	ctx.lr = 0x82CA29A4;
	sub_82C9CC38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca29d0
	if (!ctx.cr6.eq) goto loc_82CA29D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9b770
	ctx.lr = 0x82CA29B8;
	sub_82C9B770(ctx, base);
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
loc_82CA29D0:
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

__attribute__((alias("__imp__sub_82CA29E8"))) PPC_WEAK_FUNC(sub_82CA29E8);
PPC_FUNC_IMPL(__imp__sub_82CA29E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c87a68
	sub_82C87A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA29EC"))) PPC_WEAK_FUNC(sub_82CA29EC);
PPC_FUNC_IMPL(__imp__sub_82CA29EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA29F0"))) PPC_WEAK_FUNC(sub_82CA29F0);
PPC_FUNC_IMPL(__imp__sub_82CA29F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2A08"))) PPC_WEAK_FUNC(sub_82CA2A08);
PPC_FUNC_IMPL(__imp__sub_82CA2A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA2A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82c82220
	ctx.lr = 0x82CA2A28;
	sub_82C82220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca2a58
	if (ctx.cr6.eq) goto loc_82CA2A58;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82c823d8
	ctx.lr = 0x82CA2A4C;
	sub_82C823D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82c823d8
	ctx.lr = 0x82CA2A58;
	sub_82C823D8(ctx, base);
loc_82CA2A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2A64"))) PPC_WEAK_FUNC(sub_82CA2A64);
PPC_FUNC_IMPL(__imp__sub_82CA2A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2A68"))) PPC_WEAK_FUNC(sub_82CA2A68);
PPC_FUNC_IMPL(__imp__sub_82CA2A68) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2A6C"))) PPC_WEAK_FUNC(sub_82CA2A6C);
PPC_FUNC_IMPL(__imp__sub_82CA2A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2A70"))) PPC_WEAK_FUNC(sub_82CA2A70);
PPC_FUNC_IMPL(__imp__sub_82CA2A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24528(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24528);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA2A80;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca2ae8
	if (!ctx.cr6.eq) goto loc_82CA2AE8;
	// bl 0x82cab770
	ctx.lr = 0x82CA2AC0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA2AE0;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca2b54
	goto loc_82CA2B54;
loc_82CA2AE8:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82240578
	ctx.lr = 0x82CA2AF8;
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ca88e0
	ctx.lr = 0x82CA2B04;
	sub_82CA88E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82240578
	ctx.lr = 0x82CA2B0C;
	sub_82240578(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82cab4e0
	ctx.lr = 0x82CA2B14;
	sub_82CAB4E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82240578
	ctx.lr = 0x82CA2B1C;
	sub_82240578(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223f990
	ctx.lr = 0x82CA2B30;
	sub_8223F990(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82240578
	ctx.lr = 0x82CA2B38;
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cab5b8
	ctx.lr = 0x82CA2B44;
	sub_82CAB5B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82ca2b5c
	ctx.lr = 0x82CA2B50;
	sub_82CA2B5C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82CA2B54:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2A78"))) PPC_WEAK_FUNC(sub_82CA2A78);
PPC_FUNC_IMPL(__imp__sub_82CA2A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA2A80;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca2ae8
	if (!ctx.cr6.eq) goto loc_82CA2AE8;
	// bl 0x82cab770
	ctx.lr = 0x82CA2AC0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA2AE0;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca2b54
	goto loc_82CA2B54;
loc_82CA2AE8:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82240578
	ctx.lr = 0x82CA2AF8;
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ca88e0
	ctx.lr = 0x82CA2B04;
	sub_82CA88E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82240578
	ctx.lr = 0x82CA2B0C;
	sub_82240578(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82cab4e0
	ctx.lr = 0x82CA2B14;
	sub_82CAB4E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82240578
	ctx.lr = 0x82CA2B1C;
	sub_82240578(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223f990
	ctx.lr = 0x82CA2B30;
	sub_8223F990(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82240578
	ctx.lr = 0x82CA2B38;
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cab5b8
	ctx.lr = 0x82CA2B44;
	sub_82CAB5B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82ca2b5c
	ctx.lr = 0x82CA2B50;
	sub_82CA2B5C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82CA2B54:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2B5C"))) PPC_WEAK_FUNC(sub_82CA2B5C);
PPC_FUNC_IMPL(__imp__sub_82CA2B5C) {
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
	// bl 0x82240578
	ctx.lr = 0x82CA2B6C;
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ca8970
	ctx.lr = 0x82CA2B78;
	sub_82CA8970(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2B88"))) PPC_WEAK_FUNC(sub_82CA2B88);
PPC_FUNC_IMPL(__imp__sub_82CA2B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,-3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3840);
	// lwz r10,26816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26816);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2BAC"))) PPC_WEAK_FUNC(sub_82CA2BAC);
PPC_FUNC_IMPL(__imp__sub_82CA2BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp____savegprlr_14"))) PPC_WEAK_FUNC(__savegprlr_14);
PPC_FUNC_IMPL(__imp____savegprlr_14) {
	PPC_FUNC_PROLOGUE();
	// std r14,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r14.u64);
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_15"))) PPC_WEAK_FUNC(__savegprlr_15);
PPC_FUNC_IMPL(__imp____savegprlr_15) {
	PPC_FUNC_PROLOGUE();
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_16"))) PPC_WEAK_FUNC(__savegprlr_16);
PPC_FUNC_IMPL(__imp____savegprlr_16) {
	PPC_FUNC_PROLOGUE();
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_17"))) PPC_WEAK_FUNC(__savegprlr_17);
PPC_FUNC_IMPL(__imp____savegprlr_17) {
	PPC_FUNC_PROLOGUE();
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_18"))) PPC_WEAK_FUNC(__savegprlr_18);
PPC_FUNC_IMPL(__imp____savegprlr_18) {
	PPC_FUNC_PROLOGUE();
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_19"))) PPC_WEAK_FUNC(__savegprlr_19);
PPC_FUNC_IMPL(__imp____savegprlr_19) {
	PPC_FUNC_PROLOGUE();
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_20"))) PPC_WEAK_FUNC(__savegprlr_20);
PPC_FUNC_IMPL(__imp____savegprlr_20) {
	PPC_FUNC_PROLOGUE();
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_21"))) PPC_WEAK_FUNC(__savegprlr_21);
PPC_FUNC_IMPL(__imp____savegprlr_21) {
	PPC_FUNC_PROLOGUE();
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_22"))) PPC_WEAK_FUNC(__savegprlr_22);
PPC_FUNC_IMPL(__imp____savegprlr_22) {
	PPC_FUNC_PROLOGUE();
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_23"))) PPC_WEAK_FUNC(__savegprlr_23);
PPC_FUNC_IMPL(__imp____savegprlr_23) {
	PPC_FUNC_PROLOGUE();
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_24"))) PPC_WEAK_FUNC(__savegprlr_24);
PPC_FUNC_IMPL(__imp____savegprlr_24) {
	PPC_FUNC_PROLOGUE();
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_25"))) PPC_WEAK_FUNC(__savegprlr_25);
PPC_FUNC_IMPL(__imp____savegprlr_25) {
	PPC_FUNC_PROLOGUE();
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_26"))) PPC_WEAK_FUNC(__savegprlr_26);
PPC_FUNC_IMPL(__imp____savegprlr_26) {
	PPC_FUNC_PROLOGUE();
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_27"))) PPC_WEAK_FUNC(__savegprlr_27);
PPC_FUNC_IMPL(__imp____savegprlr_27) {
	PPC_FUNC_PROLOGUE();
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_28"))) PPC_WEAK_FUNC(__savegprlr_28);
PPC_FUNC_IMPL(__imp____savegprlr_28) {
	PPC_FUNC_PROLOGUE();
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_29"))) PPC_WEAK_FUNC(__savegprlr_29);
PPC_FUNC_IMPL(__imp____savegprlr_29) {
	PPC_FUNC_PROLOGUE();
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_30"))) PPC_WEAK_FUNC(__savegprlr_30);
PPC_FUNC_IMPL(__imp____savegprlr_30) {
	PPC_FUNC_PROLOGUE();
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_31"))) PPC_WEAK_FUNC(__savegprlr_31);
PPC_FUNC_IMPL(__imp____savegprlr_31) {
	PPC_FUNC_PROLOGUE();
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_14"))) PPC_WEAK_FUNC(__restgprlr_14);
PPC_FUNC_IMPL(__imp____restgprlr_14) {
	PPC_FUNC_PROLOGUE();
	// ld r14,-152(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_15"))) PPC_WEAK_FUNC(__restgprlr_15);
PPC_FUNC_IMPL(__imp____restgprlr_15) {
	PPC_FUNC_PROLOGUE();
	// ld r15,-144(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_16"))) PPC_WEAK_FUNC(__restgprlr_16);
PPC_FUNC_IMPL(__imp____restgprlr_16) {
	PPC_FUNC_PROLOGUE();
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_17"))) PPC_WEAK_FUNC(__restgprlr_17);
PPC_FUNC_IMPL(__imp____restgprlr_17) {
	PPC_FUNC_PROLOGUE();
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_18"))) PPC_WEAK_FUNC(__restgprlr_18);
PPC_FUNC_IMPL(__imp____restgprlr_18) {
	PPC_FUNC_PROLOGUE();
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_19"))) PPC_WEAK_FUNC(__restgprlr_19);
PPC_FUNC_IMPL(__imp____restgprlr_19) {
	PPC_FUNC_PROLOGUE();
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_20"))) PPC_WEAK_FUNC(__restgprlr_20);
PPC_FUNC_IMPL(__imp____restgprlr_20) {
	PPC_FUNC_PROLOGUE();
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_21"))) PPC_WEAK_FUNC(__restgprlr_21);
PPC_FUNC_IMPL(__imp____restgprlr_21) {
	PPC_FUNC_PROLOGUE();
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_22"))) PPC_WEAK_FUNC(__restgprlr_22);
PPC_FUNC_IMPL(__imp____restgprlr_22) {
	PPC_FUNC_PROLOGUE();
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_23"))) PPC_WEAK_FUNC(__restgprlr_23);
PPC_FUNC_IMPL(__imp____restgprlr_23) {
	PPC_FUNC_PROLOGUE();
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_24"))) PPC_WEAK_FUNC(__restgprlr_24);
PPC_FUNC_IMPL(__imp____restgprlr_24) {
	PPC_FUNC_PROLOGUE();
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_25"))) PPC_WEAK_FUNC(__restgprlr_25);
PPC_FUNC_IMPL(__imp____restgprlr_25) {
	PPC_FUNC_PROLOGUE();
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_26"))) PPC_WEAK_FUNC(__restgprlr_26);
PPC_FUNC_IMPL(__imp____restgprlr_26) {
	PPC_FUNC_PROLOGUE();
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_27"))) PPC_WEAK_FUNC(__restgprlr_27);
PPC_FUNC_IMPL(__imp____restgprlr_27) {
	PPC_FUNC_PROLOGUE();
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_28"))) PPC_WEAK_FUNC(__restgprlr_28);
PPC_FUNC_IMPL(__imp____restgprlr_28) {
	PPC_FUNC_PROLOGUE();
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_29"))) PPC_WEAK_FUNC(__restgprlr_29);
PPC_FUNC_IMPL(__imp____restgprlr_29) {
	PPC_FUNC_PROLOGUE();
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_30"))) PPC_WEAK_FUNC(__restgprlr_30);
PPC_FUNC_IMPL(__imp____restgprlr_30) {
	PPC_FUNC_PROLOGUE();
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_31"))) PPC_WEAK_FUNC(__restgprlr_31);
PPC_FUNC_IMPL(__imp____restgprlr_31) {
	PPC_FUNC_PROLOGUE();
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2C54"))) PPC_WEAK_FUNC(sub_82CA2C54);
PPC_FUNC_IMPL(__imp__sub_82CA2C54) {
	PPC_FUNC_PROLOGUE();
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	ctx.r12.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82CA2C60"))) PPC_WEAK_FUNC(sub_82CA2C60);
PPC_FUNC_IMPL(__imp__sub_82CA2C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// clrlwi r6,r3,29
	ctx.r6.u64 = ctx.r3.u32 & 0x7;
	// dcbt r0,r4
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,8
	ctx.xer.ca = ctx.r6.u32 <= 8;
	ctx.r6.s64 = 8 - ctx.r6.s64;
	// beq 0x82ca2cc4
	if (ctx.cr0.eq) goto loc_82CA2CC4;
	// cmplw r5,r6
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble 0x82ca2ce0
	if (!ctx.cr0.gt) goto loc_82CA2CE0;
	// cmplwi r6,4
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq 0x82ca2cb0
	if (ctx.cr0.eq) goto loc_82CA2CB0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CA2C98:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2C98;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82ca2cc4
	goto loc_82CA2CC4;
loc_82CA2CB0:
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_82CA2CC4:
	// clrlwi r6,r4,29
	ctx.r6.u64 = ctx.r4.u32 & 0x7;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// cmplwi cr1,r6,0
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// cmplwi cr7,r5,128
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// beq cr6,0x82ca2ea8
	if (ctx.cr6.eq) goto loc_82CA2EA8;
	// bne cr1,0x82ca2fd8
	if (!ctx.cr1.eq) goto loc_82CA2FD8;
	// bge cr7,0x82ca2d7c
	if (!ctx.cr7.lt) goto loc_82CA2D7C;
loc_82CA2CE0:
	// dcbtst r0,r3
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
loc_82CA2CEC:
	// rlwinm r7,r5,29,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0xF;
	// clrlwi r6,r5,29
	ctx.r6.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x82ca2d10
	if (ctx.cr1.eq) goto loc_82CA2D10;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82CA2D04:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2d04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2D04;
loc_82CA2D10:
	// cmplwi cr1,r6,4
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x82ca2d34
	if (ctx.cr6.eq) goto loc_82CA2D34;
	// beq cr1,0x82ca2d3c
	if (ctx.cr1.eq) goto loc_82CA2D3C;
	// addi r3,r3,7
	ctx.r3.s64 = ctx.r3.s64 + 7;
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CA2D28:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2d28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2D28;
loc_82CA2D34:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82CA2D3C:
	// clrlwi r6,r3,30
	ctx.r6.u64 = ctx.r3.u32 & 0x3;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x82ca2d58
	if (!ctx.cr0.eq) goto loc_82CA2D58;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82CA2D58:
	// lbz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r7,9(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r6,10(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stb r7,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// stb r6,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r6.u8);
	// stb r5,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r5.u8);
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82CA2D7C:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82ca2dac
	if (ctx.cr0.eq) goto loc_82CA2DAC;
	// rlwinm r7,r6,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82CA2DA0:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2DA0;
loc_82CA2DAC:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82ca2cec
	if (ctx.cr0.eq) goto loc_82CA2CEC;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CA2DDC:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82ca2ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2DDC;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.s64 = ctx.r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CA2DFC:
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// ld r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// ld r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r7,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// ld r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// ld r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// ld r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r7,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r7.u64);
	// ld r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// ld r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r7,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// ld r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r8,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// ld r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r6,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r6.u64);
	// ld r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r7,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// ld r7,112(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 112);
	// std r8,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r8.u64);
	// ld r8,120(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r6,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r6.u64);
	// ldu r6,128(r4)
	ea = 128 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// std r7,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r7.u64);
	// std r8,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r8.u64);
	// stdu r6,128(r3)
	ea = 128 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r3.u32 = ea;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x82ca2e90
	if (!ctx.cr0.lt) goto loc_82CA2E90;
	// dcbt r9,r4
	// bdnz 0x82ca2dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2DFC;
	// b 0x82ca2cec
	goto loc_82CA2CEC;
loc_82CA2E90:
	// beq cr1,0x82ca2ea0
	if (ctx.cr1.eq) goto loc_82CA2EA0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_82CA2EA0:
	// bdnz 0x82ca2dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2DFC;
	// b 0x82ca2cec
	goto loc_82CA2CEC;
loc_82CA2EA8:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// bge cr7,0x82ca2f00
	if (!ctx.cr7.lt) goto loc_82CA2F00;
	// dcbtst r0,r3
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_82CA2EB8:
	// rlwinm r7,r5,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1F;
	// clrlwi r6,r5,30
	ctx.r6.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x82ca2edc
	if (ctx.cr1.eq) goto loc_82CA2EDC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82CA2ED0:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2ED0;
loc_82CA2EDC:
	// beq cr6,0x82ca2ef8
	if (ctx.cr6.eq) goto loc_82CA2EF8;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CA2EEC:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2eec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2EEC;
loc_82CA2EF8:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82CA2F00:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82ca2f2c
	if (ctx.cr0.eq) goto loc_82CA2F2C;
	// rlwinm r7,r6,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82CA2F20:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2F20;
loc_82CA2F2C:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82ca2eb8
	if (ctx.cr0.eq) goto loc_82CA2EB8;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CA2F5C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82ca2f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2F5C;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.s64 = ctx.r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CA2F7C:
	// li r6,8
	ctx.r6.s64 = 8;
loc_82CA2F80:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r0,4(r4)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r0,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r0.u32);
	// lwzu r0,16(r4)
	ea = 16 + ctx.r4.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stwu r0,16(r3)
	ea = 16 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r0.u32);
	ctx.r3.u32 = ea;
	// bne 0x82ca2f80
	if (!ctx.cr0.eq) goto loc_82CA2F80;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x82ca2fc0
	if (!ctx.cr0.lt) goto loc_82CA2FC0;
	// dcbt r9,r4
	// bdnz 0x82ca2f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2F7C;
	// b 0x82ca2eb8
	goto loc_82CA2EB8;
loc_82CA2FC0:
	// beq cr1,0x82ca2fd0
	if (ctx.cr1.eq) goto loc_82CA2FD0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_82CA2FD0:
	// bdnz 0x82ca2f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2F7C;
	// b 0x82ca2eb8
	goto loc_82CA2EB8;
loc_82CA2FD8:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// bge cr7,0x82ca300c
	if (!ctx.cr7.lt) goto loc_82CA300C;
	// dcbtst r0,r3
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82CA2FE8:
	// clrlwi r6,r5,25
	ctx.r6.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// beq 0x82ca3004
	if (ctx.cr0.eq) goto loc_82CA3004;
loc_82CA2FF8:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca2ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA2FF8;
loc_82CA3004:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82CA300C:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82ca3034
	if (ctx.cr0.eq) goto loc_82CA3034;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CA3028:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82ca3028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA3028;
loc_82CA3034:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82ca2fe8
	if (ctx.cr0.eq) goto loc_82CA2FE8;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CA3064:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82ca3064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA3064;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r9,r12
	ctx.r11.s64 = ctx.r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CA3084:
	// li r6,32
	ctx.r6.s64 = 32;
loc_82CA3088:
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r7,1(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1, ctx.r7.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82ca3088
	if (!ctx.cr0.eq) goto loc_82CA3088;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x82ca30d0
	if (!ctx.cr0.lt) goto loc_82CA30D0;
	// dcbt r9,r4
	// bdnz 0x82ca3084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA3084;
	// b 0x82ca2fe8
	goto loc_82CA2FE8;
loc_82CA30D0:
	// beq cr1,0x82ca30e0
	if (ctx.cr1.eq) goto loc_82CA30E0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_82CA30E0:
	// bdnz 0x82ca3084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA3084;
	// b 0x82ca2fe8
	goto loc_82CA2FE8;
}

__attribute__((alias("__imp__sub_82CA30E8"))) PPC_WEAK_FUNC(sub_82CA30E8);
PPC_FUNC_IMPL(__imp__sub_82CA30E8) {
	PPC_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x82ca310c
	goto loc_82CA310C;
loc_82CA30F8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82CA310C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x82ca30f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_82CA30F8;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x82ca313c
	if (ctx.cr0.eq) goto loc_82CA313C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x82ca3160
	if (!ctx.cr0.eq) goto loc_82CA3160;
loc_82CA3128:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x82ca3128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA3128;
loc_82CA313C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_82CA3148:
	// lbz r0,0(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x82ca3148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA3148;
	// blr 
	return;
loc_82CA3160:
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82ca3160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA3160;
	// b 0x82ca313c
	goto loc_82CA313C;
}

__attribute__((alias("__imp__sub_82CA3190"))) PPC_WEAK_FUNC(sub_82CA3190);
PPC_FUNC_IMPL(__imp__sub_82CA3190) {
	PPC_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// b 0x82ca31ac
	goto loc_82CA31AC;
loc_82CA31A0:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82CA31AC:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x82ca31a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_82CA31A0;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x82ca31e0
	if (ctx.cr0.eq) goto loc_82CA31E0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_82CA31C8:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz+ 0x82ca31c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA31C8;
loc_82CA31E0:
	// rlwinm. r0,r5,30,30,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x82ca320c
	if (ctx.cr0.eq) goto loc_82CA320C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x82ca320c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82CA320C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x82ca320c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82CA320C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_82CA320C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
}

__attribute__((alias("__imp__sub_82CA3220"))) PPC_WEAK_FUNC(sub_82CA3220);
PPC_FUNC_IMPL(__imp__sub_82CA3220) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
}

__attribute__((alias("__imp__sub_82CA3228"))) PPC_WEAK_FUNC(sub_82CA3228);
PPC_FUNC_IMPL(__imp__sub_82CA3228) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3230"))) PPC_WEAK_FUNC(sub_82CA3230);
PPC_FUNC_IMPL(__imp__sub_82CA3230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca44c8
	ctx.lr = 0x82CA3268;
	sub_82CA44C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3278"))) PPC_WEAK_FUNC(sub_82CA3278);
PPC_FUNC_IMPL(__imp__sub_82CA3278) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r30,r8,-3832
	ctx.r30.s64 = ctx.r8.s64 + -3832;
	// addi r11,r11,-15504
	ctx.r11.s64 = ctx.r11.s64 + -15504;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// stw r11,-3832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3832, ctx.r11.u32);
	// lis r31,-32053
	ctx.r31.s64 = -2100625408;
	// addi r10,r10,-17696
	ctx.r10.s64 = ctx.r10.s64 + -17696;
	// addi r9,r9,-17712
	ctx.r9.s64 = ctx.r9.s64 + -17712;
	// addi r11,r31,-17704
	ctx.r11.s64 = ctx.r31.s64 + -17704;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lis r3,-32053
	ctx.r3.s64 = -2100625408;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lis r4,-32053
	ctx.r4.s64 = -2100625408;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r5,-32216
	ctx.r5.s64 = -2111307776;
	// addi r10,r3,-17840
	ctx.r10.s64 = ctx.r3.s64 + -17840;
	// addi r9,r4,-15504
	ctx.r9.s64 = ctx.r4.s64 + -15504;
	// addi r11,r5,-30064
	ctx.r11.s64 = ctx.r5.s64 + -30064;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lis r6,-32053
	ctx.r6.s64 = -2100625408;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// addi r10,r6,-17808
	ctx.r10.s64 = ctx.r6.s64 + -17808;
	// addi r9,r7,-10280
	ctx.r9.s64 = ctx.r7.s64 + -10280;
	// addi r11,r8,-18000
	ctx.r11.s64 = ctx.r8.s64 + -18000;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA330C"))) PPC_WEAK_FUNC(sub_82CA330C);
PPC_FUNC_IMPL(__imp__sub_82CA330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3310"))) PPC_WEAK_FUNC(sub_82CA3310);
PPC_FUNC_IMPL(__imp__sub_82CA3310) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3278
	sub_82CA3278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3314"))) PPC_WEAK_FUNC(sub_82CA3314);
PPC_FUNC_IMPL(__imp__sub_82CA3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3318"))) PPC_WEAK_FUNC(sub_82CA3318);
PPC_FUNC_IMPL(__imp__sub_82CA3318) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca334c
	if (ctx.cr6.eq) goto loc_82CA334C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,3260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca3370
	if (ctx.cr6.eq) goto loc_82CA3370;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA3348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca3370
	goto loc_82CA3370;
loc_82CA334C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,3264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca3368
	if (ctx.cr6.eq) goto loc_82CA3368;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA3368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA3368:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cac700
	ctx.lr = 0x82CA3370;
	sub_82CAC700(ctx, base);
loc_82CA3370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3380"))) PPC_WEAK_FUNC(sub_82CA3380);
PPC_FUNC_IMPL(__imp__sub_82CA3380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24504(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24504);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac610
	ctx.lr = 0x82CA33A0;
	sub_82CAC610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA33BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82cac520
	ctx.lr = 0x82CA33C0;
	sub_82CAC520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ca33d8
	if (ctx.cr0.eq) goto loc_82CA33D8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca33d8
	if (ctx.cr6.eq) goto loc_82CA33D8;
	// bl 0x82cbbf60
	ctx.lr = 0x82CA33D8;
	sub_82CBBF60(ctx, base);
loc_82CA33D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0728
	ctx.lr = 0x82CA33E0;
	sub_82CC0728(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82ca97a8
	ctx.lr = 0x82CA33E8;
	sub_82CA97A8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = ctx.r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3388"))) PPC_WEAK_FUNC(sub_82CA3388);
PPC_FUNC_IMPL(__imp__sub_82CA3388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac610
	ctx.lr = 0x82CA33A0;
	sub_82CAC610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA33BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82cac520
	ctx.lr = 0x82CA33C0;
	sub_82CAC520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ca33d8
	if (ctx.cr0.eq) goto loc_82CA33D8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca33d8
	if (ctx.cr6.eq) goto loc_82CA33D8;
	// bl 0x82cbbf60
	ctx.lr = 0x82CA33D8;
	sub_82CBBF60(ctx, base);
loc_82CA33D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0728
	ctx.lr = 0x82CA33E0;
	sub_82CC0728(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82ca97a8
	ctx.lr = 0x82CA33E8;
	sub_82CA97A8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = ctx.r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA33FC"))) PPC_WEAK_FUNC(sub_82CA33FC);
PPC_FUNC_IMPL(__imp__sub_82CA33FC) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cac8c8
	ctx.lr = 0x82CA3418;
	sub_82CAC8C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA342C"))) PPC_WEAK_FUNC(sub_82CA342C);
PPC_FUNC_IMPL(__imp__sub_82CA342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3430"))) PPC_WEAK_FUNC(sub_82CA3430);
PPC_FUNC_IMPL(__imp__sub_82CA3430) {
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
	// bl 0x82cac428
	ctx.lr = 0x82CA3448;
	sub_82CAC428(ctx, base);
	// bl 0x82cac418
	ctx.lr = 0x82CA344C;
	sub_82CAC418(ctx, base);
	// bl 0x82cac3d0
	ctx.lr = 0x82CA3450;
	sub_82CAC3D0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca3474
	if (!ctx.cr0.eq) goto loc_82CA3474;
	// bl 0x82cac418
	ctx.lr = 0x82CA345C;
	sub_82CAC418(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cac480
	ctx.lr = 0x82CA3464;
	sub_82CAC480(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ca3494
	if (!ctx.cr0.eq) goto loc_82CA3494;
	// bl 0x82cc0758
	ctx.lr = 0x82CA3470;
	sub_82CC0758(ctx, base);
	// bl 0x82cc0728
	ctx.lr = 0x82CA3474;
	sub_82CC0728(ctx, base);
loc_82CA3474:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82cac650
	ctx.lr = 0x82CA3494;
	sub_82CAC650(ctx, base);
loc_82CA3494:
	// bl 0x82ca3388
	ctx.lr = 0x82CA3498;
	sub_82CA3388(ctx, base);
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
}

__attribute__((alias("__imp__sub_82CA34B0"))) PPC_WEAK_FUNC(sub_82CA34B0);
PPC_FUNC_IMPL(__imp__sub_82CA34B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA34B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca3500
	if (!ctx.cr6.eq) goto loc_82CA3500;
	// bl 0x82cab770
	ctx.lr = 0x82CA34D8;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA34F8;
	sub_82CAB630(ctx, base);
loc_82CA34F8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca3590
	goto loc_82CA3590;
loc_82CA3500:
	// bl 0x82cac428
	ctx.lr = 0x82CA3504;
	sub_82CAC428(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82caae18
	ctx.lr = 0x82CA3510;
	sub_82CAAE18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ca3570
	if (ctx.cr0.eq) goto loc_82CA3570;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cac508
	ctx.lr = 0x82CA3524;
	sub_82CAC508(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13360
	ctx.r5.s64 = ctx.r11.s64 + 13360;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd280
	ctx.lr = 0x82CA354C;
	sub_82CBD280(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// beq 0x82ca3568
	if (ctx.cr0.eq) goto loc_82CA3568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc1610
	ctx.lr = 0x82CA3560;
	sub_82CC1610(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca358c
	if (!ctx.cr6.eq) goto loc_82CA358C;
loc_82CA3568:
	// bl 0x82cc0758
	ctx.lr = 0x82CA356C;
	sub_82CC0758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CA3570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca5dc0
	ctx.lr = 0x82CA3578;
	sub_82CA5DC0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca34f8
	if (ctx.cr6.eq) goto loc_82CA34F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82240508
	ctx.lr = 0x82CA3588;
	sub_82240508(ctx, base);
	// b 0x82ca34f8
	goto loc_82CA34F8;
loc_82CA358C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CA3590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3598"))) PPC_WEAK_FUNC(sub_82CA3598);
PPC_FUNC_IMPL(__imp__sub_82CA3598) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82caae18
	ctx.lr = 0x82CA35B0;
	sub_82CAAE18(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,29896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29896, ctx.r11.u32);
	// stw r11,29892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29892, ctx.r11.u32);
	// bne 0x82ca35d0
	if (!ctx.cr0.eq) goto loc_82CA35D0;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x82ca35dc
	goto loc_82CA35DC;
loc_82CA35D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82CA35DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA35EC"))) PPC_WEAK_FUNC(sub_82CA35EC);
PPC_FUNC_IMPL(__imp__sub_82CA35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA35F0"))) PPC_WEAK_FUNC(sub_82CA35F0);
PPC_FUNC_IMPL(__imp__sub_82CA35F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24480(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24480);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CA3600;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82ca95c8
	ctx.lr = 0x82CA3610;
	sub_82CA95C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-31921
	ctx.r24.s64 = -2091974656;
	// lis r25,-31921
	ctx.r25.s64 = -2091974656;
	// lwz r30,29892(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29892);
	// lwz r28,29896(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 29896);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ca36bc
	if (ctx.cr6.lt) goto loc_82CA36BC;
	// subf r26,r28,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x82ca36bc
	if (ctx.cr6.lt) goto loc_82CA36BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82caacd0
	ctx.lr = 0x82CA3644;
	sub_82CAACD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82ca36a8
	if (!ctx.cr6.lt) goto loc_82CA36A8;
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82ca3660
	if (ctx.cr6.lt) goto loc_82CA3660;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_82CA3660:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca367c
	if (ctx.cr6.lt) goto loc_82CA367C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca8570
	ctx.lr = 0x82CA3674;
	sub_82CA8570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ca3698
	if (!ctx.cr0.eq) goto loc_82CA3698;
loc_82CA367C:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca36bc
	if (ctx.cr6.lt) goto loc_82CA36BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca8570
	ctx.lr = 0x82CA3690;
	sub_82CA8570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ca36bc
	if (ctx.cr0.eq) goto loc_82CA36BC;
loc_82CA3698:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,29896(r25)
	PPC_STORE_U32(ctx.r25.u32 + 29896, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82CA36A8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,29892(r24)
	PPC_STORE_U32(ctx.r24.u32 + 29892, ctx.r11.u32);
	// b 0x82ca36c4
	goto loc_82CA36C4;
loc_82CA36BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82CA36C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82ca36dc
	ctx.lr = 0x82CA36D0;
	sub_82CA36DC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA35F8"))) PPC_WEAK_FUNC(sub_82CA35F8);
PPC_FUNC_IMPL(__imp__sub_82CA35F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CA3600;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82ca95c8
	ctx.lr = 0x82CA3610;
	sub_82CA95C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-31921
	ctx.r24.s64 = -2091974656;
	// lis r25,-31921
	ctx.r25.s64 = -2091974656;
	// lwz r30,29892(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29892);
	// lwz r28,29896(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 29896);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ca36bc
	if (ctx.cr6.lt) goto loc_82CA36BC;
	// subf r26,r28,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x82ca36bc
	if (ctx.cr6.lt) goto loc_82CA36BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82caacd0
	ctx.lr = 0x82CA3644;
	sub_82CAACD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82ca36a8
	if (!ctx.cr6.lt) goto loc_82CA36A8;
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82ca3660
	if (ctx.cr6.lt) goto loc_82CA3660;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_82CA3660:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca367c
	if (ctx.cr6.lt) goto loc_82CA367C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca8570
	ctx.lr = 0x82CA3674;
	sub_82CA8570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ca3698
	if (!ctx.cr0.eq) goto loc_82CA3698;
loc_82CA367C:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca36bc
	if (ctx.cr6.lt) goto loc_82CA36BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca8570
	ctx.lr = 0x82CA3690;
	sub_82CA8570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ca36bc
	if (ctx.cr0.eq) goto loc_82CA36BC;
loc_82CA3698:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,29896(r25)
	PPC_STORE_U32(ctx.r25.u32 + 29896, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82CA36A8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,29892(r24)
	PPC_STORE_U32(ctx.r24.u32 + 29892, ctx.r11.u32);
	// b 0x82ca36c4
	goto loc_82CA36C4;
loc_82CA36BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82CA36C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82ca36dc
	ctx.lr = 0x82CA36D0;
	sub_82CA36DC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA36DC"))) PPC_WEAK_FUNC(sub_82CA36DC);
PPC_FUNC_IMPL(__imp__sub_82CA36DC) {
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
	// bl 0x82ca95d0
	ctx.lr = 0x82CA36EC;
	sub_82CA95D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA36FC"))) PPC_WEAK_FUNC(sub_82CA36FC);
PPC_FUNC_IMPL(__imp__sub_82CA36FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3700"))) PPC_WEAK_FUNC(sub_82CA3700);
PPC_FUNC_IMPL(__imp__sub_82CA3700) {
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
	// bl 0x82ca35f8
	ctx.lr = 0x82CA3710;
	sub_82CA35F8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA372C"))) PPC_WEAK_FUNC(sub_82CA372C);
PPC_FUNC_IMPL(__imp__sub_82CA372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3730"))) PPC_WEAK_FUNC(sub_82CA3730);
PPC_FUNC_IMPL(__imp__sub_82CA3730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA3738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca3758
	if (!ctx.cr6.eq) goto loc_82CA3758;
loc_82CA3750:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca3788
	goto loc_82CA3788;
loc_82CA3758:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ca3790
	if (!ctx.cr6.eq) goto loc_82CA3790;
	// bl 0x82cab770
	ctx.lr = 0x82CA3764;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA3784;
	sub_82CAB630(ctx, base);
loc_82CA3784:
	// li r3,22
	ctx.r3.s64 = 22;
loc_82CA3788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA3790:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca37b0
	if (ctx.cr6.eq) goto loc_82CA37B0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82ca37b0
	if (ctx.cr6.lt) goto loc_82CA37B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CA37AC;
	sub_82CA2C60(ctx, base);
	// b 0x82ca3750
	goto loc_82CA3750;
loc_82CA37B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CA37BC;
	sub_82CA3190(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ca37f0
	if (!ctx.cr6.eq) goto loc_82CA37F0;
	// bl 0x82cab770
	ctx.lr = 0x82CA37C8;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CA37CC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA37E8;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca3788
	goto loc_82CA3788;
loc_82CA37F0:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82ca3784
	if (!ctx.cr6.lt) goto loc_82CA3784;
	// bl 0x82cab770
	ctx.lr = 0x82CA37FC;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82ca37cc
	goto loc_82CA37CC;
}

__attribute__((alias("__imp__sub_82CA3804"))) PPC_WEAK_FUNC(sub_82CA3804);
PPC_FUNC_IMPL(__imp__sub_82CA3804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3808"))) PPC_WEAK_FUNC(sub_82CA3808);
PPC_FUNC_IMPL(__imp__sub_82CA3808) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ca38ac
	if (ctx.cr6.eq) goto loc_82CA38AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ca3858
	if (!ctx.cr6.eq) goto loc_82CA3858;
	// bl 0x82cab770
	ctx.lr = 0x82CA3830;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA3850;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca38b0
	goto loc_82CA38B0;
loc_82CA3858:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca388c
	if (!ctx.cr6.eq) goto loc_82CA388C;
	// bl 0x82cab770
	ctx.lr = 0x82CA3864;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CA3868:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA3884;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca38b0
	goto loc_82CA38B0;
loc_82CA388C:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ca38a0
	if (!ctx.cr6.lt) goto loc_82CA38A0;
	// bl 0x82cab770
	ctx.lr = 0x82CA3898;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82ca3868
	goto loc_82CA3868;
loc_82CA38A0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82CA38AC;
	sub_82CAA2E0(ctx, base);
loc_82CA38AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA38B0:
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

__attribute__((alias("__imp__sub_82CA38C4"))) PPC_WEAK_FUNC(sub_82CA38C4);
PPC_FUNC_IMPL(__imp__sub_82CA38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA38C8"))) PPC_WEAK_FUNC(sub_82CA38C8);
PPC_FUNC_IMPL(__imp__sub_82CA38C8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,26892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26892);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ca38ec
	if (ctx.cr0.eq) goto loc_82CA38EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA38EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA38EC:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82cacab8
	ctx.lr = 0x82CA38F4;
	sub_82CACAB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca5da0
	ctx.lr = 0x82CA3900;
	sub_82CA5DA0(ctx, base);
	// bl 0x82ca5cf0
	ctx.lr = 0x82CA3904;
	sub_82CA5CF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3914"))) PPC_WEAK_FUNC(sub_82CA3914);
PPC_FUNC_IMPL(__imp__sub_82CA3914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3918"))) PPC_WEAK_FUNC(sub_82CA3918);
PPC_FUNC_IMPL(__imp__sub_82CA3918) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA391C"))) PPC_WEAK_FUNC(sub_82CA391C);
PPC_FUNC_IMPL(__imp__sub_82CA391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3920"))) PPC_WEAK_FUNC(sub_82CA3920);
PPC_FUNC_IMPL(__imp__sub_82CA3920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr. r0,r5
	ctx.r0.u64 = ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// ble 0x82ca3964
	if (!ctx.cr0.gt) goto loc_82CA3964;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr1,r8,0
	ctx.cr1.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfc. r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdnzf 4*cr1+eq,0x82ca3948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr1.eq) goto loc_82CA3948;
	// blr 
	return;
loc_82CA3948:
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmpwi cr1,r8,0
	ctx.cr1.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfc. r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdnzf 4*cr1+eq,0x82ca3948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr1.eq) goto loc_82CA3948;
	// blr 
	return;
loc_82CA3964:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA396C"))) PPC_WEAK_FUNC(sub_82CA396C);
PPC_FUNC_IMPL(__imp__sub_82CA396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3970"))) PPC_WEAK_FUNC(sub_82CA3970);
PPC_FUNC_IMPL(__imp__sub_82CA3970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r6,r11,-3224
	ctx.r6.s64 = ctx.r11.s64 + -3224;
	// b 0x822d6f90
	sub_822D6F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA397C"))) PPC_WEAK_FUNC(sub_82CA397C);
PPC_FUNC_IMPL(__imp__sub_82CA397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3980"))) PPC_WEAK_FUNC(sub_82CA3980);
PPC_FUNC_IMPL(__imp__sub_82CA3980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82ca39a4
	if (ctx.cr0.eq) goto loc_82CA39A4;
loc_82CA398C:
	// cmpwi cr1,r6,0
	ctx.cr1.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr1,0x82ca39b4
	if (ctx.cr1.eq) goto loc_82CA39B4;
	// beq 0x82ca39b8
	if (ctx.cr0.eq) goto loc_82CA39B8;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x82ca398c
	goto loc_82CA398C;
loc_82CA39A4:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82ca39b8
	if (ctx.cr0.eq) goto loc_82CA39B8;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x82ca39a4
	goto loc_82CA39A4;
loc_82CA39B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA39B8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA39BC"))) PPC_WEAK_FUNC(sub_82CA39BC);
PPC_FUNC_IMPL(__imp__sub_82CA39BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA39C0"))) PPC_WEAK_FUNC(sub_82CA39C0);
PPC_FUNC_IMPL(__imp__sub_82CA39C0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ca3a04
	if (!ctx.cr6.eq) goto loc_82CA3A04;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca3a0c
	if (!ctx.cr6.eq) goto loc_82CA3A0C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca3a14
	if (!ctx.cr6.eq) goto loc_82CA3A14;
loc_82CA39EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA39F0:
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
loc_82CA3A04:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca3a14
	if (ctx.cr6.eq) goto loc_82CA3A14;
loc_82CA3A0C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca3a40
	if (!ctx.cr6.eq) goto loc_82CA3A40;
loc_82CA3A14:
	// bl 0x82cab770
	ctx.lr = 0x82CA3A18;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA3A38;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca39f0
	goto loc_82CA39F0;
loc_82CA3A40:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ca3a54
	if (!ctx.cr6.eq) goto loc_82CA3A54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x82ca39ec
	goto loc_82CA39EC;
loc_82CA3A54:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca3a90
	if (!ctx.cr6.eq) goto loc_82CA3A90;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// bl 0x82cab770
	ctx.lr = 0x82CA3A68;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CA3A6C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA3A88;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca39f0
	goto loc_82CA39F0;
loc_82CA3A90:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82ca3ac8
	if (!ctx.cr6.eq) goto loc_82CA3AC8;
loc_82CA3AA4:
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x82ca3afc
	if (ctx.cr0.eq) goto loc_82CA3AFC;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ca3aa4
	if (!ctx.cr0.eq) goto loc_82CA3AA4;
	// b 0x82ca3afc
	goto loc_82CA3AFC;
loc_82CA3AC8:
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x82ca3af0
	if (ctx.cr0.eq) goto loc_82CA3AF0;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ca3af0
	if (ctx.cr0.eq) goto loc_82CA3AF0;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82ca3ac8
	if (!ctx.cr0.eq) goto loc_82CA3AC8;
loc_82CA3AF0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ca3afc
	if (!ctx.cr6.eq) goto loc_82CA3AFC;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82CA3AFC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ca39ec
	if (!ctx.cr6.eq) goto loc_82CA39EC;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82ca3b1c
	if (!ctx.cr6.eq) goto loc_82CA3B1C;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// b 0x82ca39f0
	goto loc_82CA39F0;
loc_82CA3B1C:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// bl 0x82cab770
	ctx.lr = 0x82CA3B24;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82ca3a6c
	goto loc_82CA3A6C;
}

__attribute__((alias("__imp__sub_82CA3B2C"))) PPC_WEAK_FUNC(sub_82CA3B2C);
PPC_FUNC_IMPL(__imp__sub_82CA3B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3B30"))) PPC_WEAK_FUNC(sub_82CA3B30);
PPC_FUNC_IMPL(__imp__sub_82CA3B30) {
	PPC_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca62e0
	sub_82CA62E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3B3C"))) PPC_WEAK_FUNC(sub_82CA3B3C);
PPC_FUNC_IMPL(__imp__sub_82CA3B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3B40"))) PPC_WEAK_FUNC(sub_82CA3B40);
PPC_FUNC_IMPL(__imp__sub_82CA3B40) {
	PPC_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82caa180
	sub_82CAA180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3B4C"))) PPC_WEAK_FUNC(sub_82CA3B4C);
PPC_FUNC_IMPL(__imp__sub_82CA3B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3B50"))) PPC_WEAK_FUNC(sub_82CA3B50);
PPC_FUNC_IMPL(__imp__sub_82CA3B50) {
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
	// bl 0x82cac610
	ctx.lr = 0x82CA3B68;
	sub_82CAC610(ctx, base);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82CA3B80"))) PPC_WEAK_FUNC(sub_82CA3B80);
PPC_FUNC_IMPL(__imp__sub_82CA3B80) {
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
	// bl 0x82cac610
	ctx.lr = 0x82CA3B90;
	sub_82CAC610(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3BC0"))) PPC_WEAK_FUNC(sub_82CA3BC0);
PPC_FUNC_IMPL(__imp__sub_82CA3BC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ca3be8
	if (ctx.cr6.eq) goto loc_82CA3BE8;
loc_82CA3BCC:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca3be8
	if (ctx.cr6.eq) goto loc_82CA3BE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82ca3bcc
	if (ctx.cr6.lt) goto loc_82CA3BCC;
loc_82CA3BE8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3BF0"))) PPC_WEAK_FUNC(sub_82CA3BF0);
PPC_FUNC_IMPL(__imp__sub_82CA3BF0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ca3c60
	if (ctx.cr0.eq) goto loc_82CA3C60;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82CA3C0C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca3c40
	if (ctx.cr6.eq) goto loc_82CA3C40;
loc_82CA3C18:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ca3c40
	if (ctx.cr0.eq) goto loc_82CA3C40;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ca3c40
	if (!ctx.cr0.eq) goto loc_82CA3C40;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ca3c18
	if (!ctx.cr0.eq) goto loc_82CA3C18;
loc_82CA3C40:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ca3c0c
	if (!ctx.cr0.eq) goto loc_82CA3C0C;
loc_82CA3C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3C68"))) PPC_WEAK_FUNC(sub_82CA3C68);
PPC_FUNC_IMPL(__imp__sub_82CA3C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA3C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ca3d0c
	if (ctx.cr6.gt) goto loc_82CA3D0C;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82CA3C88:
	// bl 0x82239798
	ctx.lr = 0x82CA3C8C;
	sub_82239798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ca3ca8
	if (!ctx.cr0.eq) goto loc_82CA3CA8;
	// bl 0x82cacb00
	ctx.lr = 0x82CA3C98;
	sub_82CACB00(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82cacab8
	ctx.lr = 0x82CA3CA0;
	sub_82CACAB8(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82ca95c0
	ctx.lr = 0x82CA3CA8;
	sub_82CA95C0(ctx, base);
loc_82CA3CA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x82ca3cb8
	if (!ctx.cr6.eq) goto loc_82CA3CB8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CA3CB8:
	// bl 0x82239798
	ctx.lr = 0x82CA3CBC;
	sub_82239798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82238790
	ctx.lr = 0x82CA3CC8;
	sub_82238790(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82ca3d04
	if (!ctx.cr0.eq) goto loc_82CA3D04;
	// lwz r11,26932(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26932);
	// li r31,12
	ctx.r31.s64 = 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca3cf4
	if (ctx.cr6.eq) goto loc_82CA3CF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cacc10
	ctx.lr = 0x82CA3CE8;
	sub_82CACC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ca3c88
	if (!ctx.cr0.eq) goto loc_82CA3C88;
	// b 0x82ca3cfc
	goto loc_82CA3CFC;
loc_82CA3CF4:
	// bl 0x82cab770
	ctx.lr = 0x82CA3CF8;
	sub_82CAB770(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82CA3CFC:
	// bl 0x82cab770
	ctx.lr = 0x82CA3D00;
	sub_82CAB770(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82CA3D04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ca3d28
	goto loc_82CA3D28;
loc_82CA3D0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cacc10
	ctx.lr = 0x82CA3D14;
	sub_82CACC10(ctx, base);
	// bl 0x82cab770
	ctx.lr = 0x82CA3D18;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82CA3D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3D30"))) PPC_WEAK_FUNC(sub_82CA3D30);
PPC_FUNC_IMPL(__imp__sub_82CA3D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca7000
	ctx.lr = 0x82CA3D68;
	sub_82CA7000(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3D78"))) PPC_WEAK_FUNC(sub_82CA3D78);
PPC_FUNC_IMPL(__imp__sub_82CA3D78) {
	PPC_FUNC_PROLOGUE();
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,3376(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3DAC"))) PPC_WEAK_FUNC(sub_82CA3DAC);
PPC_FUNC_IMPL(__imp__sub_82CA3DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3DB0"))) PPC_WEAK_FUNC(sub_82CA3DB0);
PPC_FUNC_IMPL(__imp__sub_82CA3DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,3376(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// rlwimi r8,r11,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3DE0"))) PPC_WEAK_FUNC(sub_82CA3DE0);
PPC_FUNC_IMPL(__imp__sub_82CA3DE0) {
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
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82ca3e38
	if (!ctx.cr6.eq) goto loc_82CA3E38;
	// bl 0x82cacb78
	ctx.lr = 0x82CA3E04;
	sub_82CACB78(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82ca3e30
	if (ctx.cr6.eq) goto loc_82CA3E30;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82ca3e28
	if (ctx.cr6.eq) goto loc_82CA3E28;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x82ca3ea4
	goto loc_82CA3EA4;
loc_82CA3E28:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82ca3ea4
	goto loc_82CA3EA4;
loc_82CA3E30:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x82ca3ea4
	goto loc_82CA3EA4;
loc_82CA3E38:
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca3e74
	if (!ctx.cr6.eq) goto loc_82CA3E74;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ca3e5c
	if (!ctx.cr0.eq) goto loc_82CA3E5C;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca3e74
	if (ctx.cr6.eq) goto loc_82CA3E74;
loc_82CA3E5C:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x82ca3ea4
	goto loc_82CA3EA4;
loc_82CA3E74:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfd f0,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82ca3e98
	if (!ctx.cr6.eq) goto loc_82CA3E98;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x82ca3ea4
	goto loc_82CA3EA4;
loc_82CA3E98:
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
loc_82CA3EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3EB4"))) PPC_WEAK_FUNC(sub_82CA3EB4);
PPC_FUNC_IMPL(__imp__sub_82CA3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3EB8"))) PPC_WEAK_FUNC(sub_82CA3EB8);
PPC_FUNC_IMPL(__imp__sub_82CA3EB8) {
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
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca3f20
	if (!ctx.cr6.eq) goto loc_82CA3F20;
loc_82CA3EF4:
	// bl 0x82cab770
	ctx.lr = 0x82CA3EF8;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA3F18;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca3fb0
	goto loc_82CA3FB0;
loc_82CA3F20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca3f30
	if (ctx.cr6.eq) goto loc_82CA3F30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca3ef4
	if (ctx.cr6.eq) goto loc_82CA3EF4;
loc_82CA3F30:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r8,r1,200
	ctx.r8.s64 = ctx.r1.s64 + 200;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bgt cr6,0x82ca3f54
	if (ctx.cr6.gt) goto loc_82CA3F54;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82CA3F54:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8223f990
	ctx.lr = 0x82CA3F74;
	sub_8223F990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca3fac
	if (ctx.cr6.eq) goto loc_82CA3FAC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x82ca3fa0
	if (ctx.cr0.lt) goto loc_82CA3FA0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82ca3fac
	goto loc_82CA3FAC;
loc_82CA3FA0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	ctx.lr = 0x82CA3FAC;
	sub_82CAB7E0(ctx, base);
loc_82CA3FAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CA3FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82CA3FC8"))) PPC_WEAK_FUNC(sub_82CA3FC8);
PPC_FUNC_IMPL(__imp__sub_82CA3FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r11,r11,-5216
	ctx.r11.s64 = ctx.r11.s64 + -5216;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82ca4004
	if (!ctx.cr6.gt) goto loc_82CA4004;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r4.s64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(ctx.f0.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82ca4020
	goto loc_82CA4020;
loc_82CA4004:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82ca4020
	if (!ctx.cr6.eq) goto loc_82CA4020;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82CA4020:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64;
	// lfd f12,120(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64;
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64;
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64;
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64;
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64;
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f7.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fmadd f0,f12,f0,f6
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f6.f64;
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// bne cr6,0x82ca40a0
	if (!ctx.cr6.eq) goto loc_82CA40A0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfdx f13,r10,r11
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
loc_82CA40A0:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// lfdx f12,r10,r11
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fsel f1,f1,f13,f0
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA40C0"))) PPC_WEAK_FUNC(sub_82CA40C0);
PPC_FUNC_IMPL(__imp__sub_82CA40C0) {
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
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r9,32752
	ctx.r9.s64 = 2146435072;
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f31.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ca4148
	if (!ctx.cr6.eq) goto loc_82CA4148;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca4184
	if (!ctx.cr6.eq) goto loc_82CA4184;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3248(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82ca412c
	if (!ctx.cr6.gt) goto loc_82CA412C;
loc_82CA4120:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lfd f0,-3216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3216);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA412C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ca4140
	if (!ctx.cr6.lt) goto loc_82CA4140;
loc_82CA4134:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA4140:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// b 0x82ca4228
	goto loc_82CA4228;
loc_82CA4148:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca4184
	if (!ctx.cr6.eq) goto loc_82CA4184;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca4184
	if (!ctx.cr6.eq) goto loc_82CA4184;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ca4134
	if (ctx.cr6.gt) goto loc_82CA4134;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ca4120
	if (ctx.cr6.lt) goto loc_82CA4120;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfd f0,-3208(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3208);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA4184:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ca41bc
	if (!ctx.cr6.eq) goto loc_82CA41BC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca4228
	if (!ctx.cr6.eq) goto loc_82CA4228;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82ca4120
	if (ctx.cr6.gt) goto loc_82CA4120;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3248(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fsel f0,f31,f13,f0
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA41BC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca4228
	if (!ctx.cr6.eq) goto loc_82CA4228;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca4228
	if (!ctx.cr6.eq) goto loc_82CA4228;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821fe308
	ctx.lr = 0x82CA41D8;
	sub_821FE308(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82ca4200
	if (!ctx.cr6.gt) goto loc_82CA4200;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f0,-3216(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3216);
	// bne cr6,0x82ca4224
	if (!ctx.cr6.eq) goto loc_82CA4224;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA4200:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82ca421c
	if (!ctx.cr6.lt) goto loc_82CA421C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82ca4224
	if (!ctx.cr6.eq) goto loc_82CA4224;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lfd f0,-3184(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3184);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA421C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
loc_82CA4224:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
loc_82CA4228:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82CA4248"))) PPC_WEAK_FUNC(sub_82CA4248);
PPC_FUNC_IMPL(__imp__sub_82CA4248) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821882a8
	ctx.lr = 0x82CA425C;
	sub_821882A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,26824(r9)
	PPC_STORE_U64(ctx.r9.u32 + 26824, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4288"))) PPC_WEAK_FUNC(sub_82CA4288);
PPC_FUNC_IMPL(__imp__sub_82CA4288) {
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
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// bgt cr6,0x82ca42b8
	if (ctx.cr6.gt) goto loc_82CA42B8;
	// bl 0x82ca6ad0
	ctx.lr = 0x82CA42A8;
	sub_82CA6AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82ca42b8
	if (ctx.cr0.eq) goto loc_82CA42B8;
	// bl 0x821ee9e8
	ctx.lr = 0x82CA42B8;
	sub_821EE9E8(ctx, base);
loc_82CA42B8:
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

__attribute__((alias("__imp__sub_82CA42CC"))) PPC_WEAK_FUNC(sub_82CA42CC);
PPC_FUNC_IMPL(__imp__sub_82CA42CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA42D0"))) PPC_WEAK_FUNC(sub_82CA42D0);
PPC_FUNC_IMPL(__imp__sub_82CA42D0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca42f0
	if (ctx.cr6.eq) goto loc_82CA42F0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca431c
	if (!ctx.cr6.eq) goto loc_82CA431C;
loc_82CA42F0:
	// bl 0x82cab770
	ctx.lr = 0x82CA42F4;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4314;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca439c
	goto loc_82CA439C;
loc_82CA431C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca4358
	if (!ctx.cr6.eq) goto loc_82CA4358;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// bl 0x82cab770
	ctx.lr = 0x82CA4330;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CA4334:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4350;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca439c
	goto loc_82CA439C;
loc_82CA4358:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CA435C:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82ca437c
	if (ctx.cr0.eq) goto loc_82CA437C;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82ca435c
	if (!ctx.cr0.eq) goto loc_82CA435C;
loc_82CA437C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca4398
	if (!ctx.cr6.eq) goto loc_82CA4398;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// bl 0x82cab770
	ctx.lr = 0x82CA4390;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82ca4334
	goto loc_82CA4334;
loc_82CA4398:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA439C:
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

__attribute__((alias("__imp__sub_82CA43B0"))) PPC_WEAK_FUNC(sub_82CA43B0);
PPC_FUNC_IMPL(__imp__sub_82CA43B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA43B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca4400
	if (!ctx.cr6.eq) goto loc_82CA4400;
loc_82CA43D4:
	// bl 0x82cab770
	ctx.lr = 0x82CA43D8;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA43F8;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca44c0
	goto loc_82CA44C0;
loc_82CA4400:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca4410
	if (ctx.cr6.eq) goto loc_82CA4410;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca43d4
	if (ctx.cr6.eq) goto loc_82CA43D4;
loc_82CA4410:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82ca4428
	if (ctx.cr6.gt) goto loc_82CA4428;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82CA4428:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA444C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca4460
	if (!ctx.cr6.eq) goto loc_82CA4460;
loc_82CA4458:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ca44c0
	goto loc_82CA44C0;
loc_82CA4460:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ca449c
	if (ctx.cr6.lt) goto loc_82CA449C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82ca4488
	if (ctx.cr0.lt) goto loc_82CA4488;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82ca4458
	goto loc_82CA4458;
loc_82CA4488:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	ctx.lr = 0x82CA4494;
	sub_82CAB7E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca4458
	if (!ctx.cr6.eq) goto loc_82CA4458;
loc_82CA449C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_82CA44C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA44C8"))) PPC_WEAK_FUNC(sub_82CA44C8);
PPC_FUNC_IMPL(__imp__sub_82CA44C8) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca44f4
	if (!ctx.cr6.eq) goto loc_82CA44F4;
loc_82CA44E8:
	// bl 0x82cab770
	ctx.lr = 0x82CA44EC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82ca4540
	goto loc_82CA4540;
loc_82CA44F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca44e8
	if (ctx.cr6.eq) goto loc_82CA44E8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ca44e8
	if (ctx.cr6.eq) goto loc_82CA44E8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// bl 0x82ca43b0
	ctx.lr = 0x82CA4520;
	sub_82CA43B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ca4530
	if (!ctx.cr0.lt) goto loc_82CA4530;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82CA4530:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82ca4560
	if (!ctx.cr6.eq) goto loc_82CA4560;
	// bl 0x82cab770
	ctx.lr = 0x82CA453C;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
loc_82CA4540:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA455C;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA4560:
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

__attribute__((alias("__imp__sub_82CA4574"))) PPC_WEAK_FUNC(sub_82CA4574);
PPC_FUNC_IMPL(__imp__sub_82CA4574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4578"))) PPC_WEAK_FUNC(sub_82CA4578);
PPC_FUNC_IMPL(__imp__sub_82CA4578) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ca44c8
	sub_82CA44C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4584"))) PPC_WEAK_FUNC(sub_82CA4584);
PPC_FUNC_IMPL(__imp__sub_82CA4584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4588"))) PPC_WEAK_FUNC(sub_82CA4588);
PPC_FUNC_IMPL(__imp__sub_82CA4588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CA4590;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ca45e4
	if (!ctx.cr6.eq) goto loc_82CA45E4;
loc_82CA45B4:
	// bl 0x82cab770
	ctx.lr = 0x82CA45B8;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82CA45BC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA45D8;
	sub_82CAB630(ctx, base);
loc_82CA45D8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA45DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA45E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82ca4604
	if (!ctx.cr6.eq) goto loc_82CA4604;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca460c
	if (!ctx.cr6.eq) goto loc_82CA460C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca45b4
	if (!ctx.cr6.eq) goto loc_82CA45B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca45dc
	goto loc_82CA45DC;
loc_82CA4604:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca45b4
	if (ctx.cr6.eq) goto loc_82CA45B4;
loc_82CA460C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca45b4
	if (ctx.cr6.eq) goto loc_82CA45B4;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82ca466c
	if (!ctx.cr6.gt) goto loc_82CA466C;
	// bl 0x82cab770
	ctx.lr = 0x82CA4624;
	sub_82CAB770(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r25,1
	ctx.r5.s64 = ctx.r25.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// bl 0x82ca43b0
	ctx.lr = 0x82CA4648;
	sub_82CA43B0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82ca46c8
	if (!ctx.cr6.eq) goto loc_82CA46C8;
	// bl 0x82cab770
	ctx.lr = 0x82CA4654;
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82ca45d8
	if (!ctx.cr6.eq) goto loc_82CA45D8;
	// bl 0x82cab770
	ctx.lr = 0x82CA4664;
	sub_82CAB770(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x82ca45d8
	goto loc_82CA45D8;
loc_82CA466C:
	// bl 0x82cab770
	ctx.lr = 0x82CA4670;
	sub_82CAB770(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// bl 0x82ca43b0
	ctx.lr = 0x82CA4694;
	sub_82CA43B0(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r24.u8);
	// bne cr6,0x82ca46c8
	if (!ctx.cr6.eq) goto loc_82CA46C8;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x82ca46d0
	if (!ctx.cr6.eq) goto loc_82CA46D0;
	// bl 0x82cab770
	ctx.lr = 0x82CA46B0;
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82ca45d8
	if (!ctx.cr6.eq) goto loc_82CA45D8;
	// bl 0x82cab770
	ctx.lr = 0x82CA46C0;
	sub_82CAB770(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// b 0x82ca45d8
	goto loc_82CA45D8;
loc_82CA46C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ca45dc
	if (!ctx.cr6.lt) goto loc_82CA45DC;
loc_82CA46D0:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// bne cr6,0x82ca45d8
	if (!ctx.cr6.eq) goto loc_82CA45D8;
	// bl 0x82cab770
	ctx.lr = 0x82CA46E0;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82ca45bc
	goto loc_82CA45BC;
}

__attribute__((alias("__imp__sub_82CA46E8"))) PPC_WEAK_FUNC(sub_82CA46E8);
PPC_FUNC_IMPL(__imp__sub_82CA46E8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82ca4588
	sub_82CA4588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA46F4"))) PPC_WEAK_FUNC(sub_82CA46F4);
PPC_FUNC_IMPL(__imp__sub_82CA46F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA46F8"))) PPC_WEAK_FUNC(sub_82CA46F8);
PPC_FUNC_IMPL(__imp__sub_82CA46F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24456(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24456);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA4708;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca4764
	if (!ctx.cr6.eq) goto loc_82CA4764;
loc_82CA4738:
	// bl 0x82cab770
	ctx.lr = 0x82CA473C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA475C;
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA4764:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca4738
	if (ctx.cr6.eq) goto loc_82CA4738;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca4738
	if (ctx.cr6.eq) goto loc_82CA4738;
	// bl 0x82caf298
	ctx.lr = 0x82CA4798;
	sub_82CAF298(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bne 0x82ca47bc
	if (!ctx.cr0.eq) goto loc_82CA47BC;
	// bl 0x82cab770
	ctx.lr = 0x82CA47A8;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA47BC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca47fc
	if (!ctx.cr6.eq) goto loc_82CA47FC;
	// bl 0x82cab770
	ctx.lr = 0x82CA47D4;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r10,18472
	ctx.r4.s64 = ctx.r10.s64 + 18472;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bl 0x82caf450
	ctx.lr = 0x82CA47F4;
	sub_82CAF450(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca4828
	goto loc_82CA4828;
loc_82CA47FC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf038
	ctx.lr = 0x82CA4810;
	sub_82CAF038(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82ca4854
	ctx.lr = 0x82CA4820;
	sub_82CA4854(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA4828:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82CA482C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4700"))) PPC_WEAK_FUNC(sub_82CA4700);
PPC_FUNC_IMPL(__imp__sub_82CA4700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA4708;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca4764
	if (!ctx.cr6.eq) goto loc_82CA4764;
loc_82CA4738:
	// bl 0x82cab770
	ctx.lr = 0x82CA473C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA475C;
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA4764:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca4738
	if (ctx.cr6.eq) goto loc_82CA4738;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca4738
	if (ctx.cr6.eq) goto loc_82CA4738;
	// bl 0x82caf298
	ctx.lr = 0x82CA4798;
	sub_82CAF298(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bne 0x82ca47bc
	if (!ctx.cr0.eq) goto loc_82CA47BC;
	// bl 0x82cab770
	ctx.lr = 0x82CA47A8;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA47BC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca47fc
	if (!ctx.cr6.eq) goto loc_82CA47FC;
	// bl 0x82cab770
	ctx.lr = 0x82CA47D4;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r10,18472
	ctx.r4.s64 = ctx.r10.s64 + 18472;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bl 0x82caf450
	ctx.lr = 0x82CA47F4;
	sub_82CAF450(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca4828
	goto loc_82CA4828;
loc_82CA47FC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf038
	ctx.lr = 0x82CA4810;
	sub_82CAF038(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82ca4854
	ctx.lr = 0x82CA4820;
	sub_82CA4854(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA4828:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82CA482C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4834"))) PPC_WEAK_FUNC(sub_82CA4834);
PPC_FUNC_IMPL(__imp__sub_82CA4834) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82ca486c
	goto loc_82CA486C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA486C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA4874;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4854"))) PPC_WEAK_FUNC(sub_82CA4854);
PPC_FUNC_IMPL(__imp__sub_82CA4854) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA4874;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA488C"))) PPC_WEAK_FUNC(sub_82CA488C);
PPC_FUNC_IMPL(__imp__sub_82CA488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4890"))) PPC_WEAK_FUNC(sub_82CA4890);
PPC_FUNC_IMPL(__imp__sub_82CA4890) {
	PPC_FUNC_PROLOGUE();
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x82ca4700
	sub_82CA4700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4898"))) PPC_WEAK_FUNC(sub_82CA4898);
PPC_FUNC_IMPL(__imp__sub_82CA4898) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca48e8
	if (!ctx.cr6.eq) goto loc_82CA48E8;
	// bl 0x82cab770
	ctx.lr = 0x82CA48C0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA48E0;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca490c
	goto loc_82CA490C;
loc_82CA48E8:
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82ca4700
	ctx.lr = 0x82CA48F0;
	sub_82CA4700(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ca4904
	if (ctx.cr0.eq) goto loc_82CA4904;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca490c
	goto loc_82CA490C;
loc_82CA4904:
	// bl 0x82cab770
	ctx.lr = 0x82CA4908;
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CA490C:
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

__attribute__((alias("__imp__sub_82CA4920"))) PPC_WEAK_FUNC(sub_82CA4920);
PPC_FUNC_IMPL(__imp__sub_82CA4920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA4928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca4968
	if (!ctx.cr6.eq) goto loc_82CA4968;
	// bl 0x82cab770
	ctx.lr = 0x82CA4940;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4960;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca49c8
	goto loc_82CA49C8;
loc_82CA4968:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca49c0
	if (ctx.cr0.eq) goto loc_82CA49C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca4e68
	ctx.lr = 0x82CA4984;
	sub_82CA4E68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caf720
	ctx.lr = 0x82CA4990;
	sub_82CAF720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA4998;
	sub_82CAF6C8(ctx, base);
	// bl 0x82caf558
	ctx.lr = 0x82CA499C;
	sub_82CAF558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ca49ac
	if (!ctx.cr0.lt) goto loc_82CA49AC;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82ca49c0
	goto loc_82CA49C0;
loc_82CA49AC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca49c0
	if (ctx.cr6.eq) goto loc_82CA49C0;
	// bl 0x82ca5dc0
	ctx.lr = 0x82CA49BC;
	sub_82CA5DC0(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82CA49C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82CA49C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA49D0"))) PPC_WEAK_FUNC(sub_82CA49D0);
PPC_FUNC_IMPL(__imp__sub_82CA49D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24432(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24432);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca4a40
	if (!ctx.cr6.eq) goto loc_82CA4A40;
	// bl 0x82cab770
	ctx.lr = 0x82CA4A18;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4A38;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca4a80
	goto loc_82CA4A80;
loc_82CA4A40:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca4a58
	if (ctx.cr0.eq) goto loc_82CA4A58;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82ca4a7c
	goto loc_82CA4A7C;
loc_82CA4A58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CA4A60;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4920
	ctx.lr = 0x82CA4A6C;
	sub_82CA4920(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca4ab8
	ctx.lr = 0x82CA4A7C;
	sub_82CA4AB8(ctx, base);
loc_82CA4A7C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CA4A80:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CA49D8"))) PPC_WEAK_FUNC(sub_82CA49D8);
PPC_FUNC_IMPL(__imp__sub_82CA49D8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca4a40
	if (!ctx.cr6.eq) goto loc_82CA4A40;
	// bl 0x82cab770
	ctx.lr = 0x82CA4A18;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4A38;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca4a80
	goto loc_82CA4A80;
loc_82CA4A40:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca4a58
	if (ctx.cr0.eq) goto loc_82CA4A58;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82ca4a7c
	goto loc_82CA4A7C;
loc_82CA4A58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CA4A60;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4920
	ctx.lr = 0x82CA4A6C;
	sub_82CA4920(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca4ab8
	ctx.lr = 0x82CA4A7C;
	sub_82CA4AB8(ctx, base);
loc_82CA4A7C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CA4A80:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CA4A98"))) PPC_WEAK_FUNC(sub_82CA4A98);
PPC_FUNC_IMPL(__imp__sub_82CA4A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82ca4ad0
	goto loc_82CA4AD0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA4AD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA4AD8;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4AB8"))) PPC_WEAK_FUNC(sub_82CA4AB8);
PPC_FUNC_IMPL(__imp__sub_82CA4AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA4AD8;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4AF0"))) PPC_WEAK_FUNC(sub_82CA4AF0);
PPC_FUNC_IMPL(__imp__sub_82CA4AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CA4AF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ca4b48
	if (ctx.cr6.eq) goto loc_82CA4B48;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ca4b48
	if (ctx.cr6.eq) goto loc_82CA4B48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca4b54
	if (!ctx.cr6.eq) goto loc_82CA4B54;
loc_82CA4B24:
	// bl 0x82cab770
	ctx.lr = 0x82CA4B28;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4B48;
	sub_82CAB630(ctx, base);
loc_82CA4B48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA4B4C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82CA4B54:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ca4b24
	if (ctx.cr6.eq) goto loc_82CA4B24;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r25,0
	// divwu r11,r11,r25
	ctx.r11.u32 = ctx.r11.u32 / ctx.r25.u32;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ca4b24
	if (ctx.cr6.gt) goto loc_82CA4B24;
	// mullw r26,r25,r24
	ctx.r26.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x82240578
	ctx.lr = 0x82CA4B7C;
	sub_82240578(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca4d08
	if (ctx.cr6.eq) goto loc_82CA4D08;
	// bl 0x82240578
	ctx.lr = 0x82CA4B8C;
	sub_82240578(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca4d08
	if (ctx.cr6.eq) goto loc_82CA4D08;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca4bb0
	if (ctx.cr0.eq) goto loc_82CA4BB0;
	// lwz r27,24(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x82ca4bb4
	goto loc_82CA4BB4;
loc_82CA4BB0:
	// li r27,4096
	ctx.r27.s64 = 4096;
loc_82CA4BB4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ca4d4c
	if (ctx.cr6.eq) goto loc_82CA4D4C;
loc_82CA4BBC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca4c1c
	if (ctx.cr0.eq) goto loc_82CA4C1C;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ca4c1c
	if (ctx.cr6.eq) goto loc_82CA4C1C;
	// blt cr6,0x82ca4c9c
	if (ctx.cr6.lt) goto loc_82CA4C9C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82ca4be8
	if (!ctx.cr6.lt) goto loc_82CA4BE8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82CA4BE8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CA4BF8;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82ca4cec
	goto loc_82CA4CEC;
loc_82CA4C1C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ca4cb8
	if (ctx.cr6.lt) goto loc_82CA4CB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca4c3c
	if (ctx.cr6.eq) goto loc_82CA4C3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4e68
	ctx.lr = 0x82CA4C34;
	sub_82CA4E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ca4cf8
	if (!ctx.cr0.eq) goto loc_82CA4CF8;
loc_82CA4C3C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ca4c5c
	if (ctx.cr6.eq) goto loc_82CA4C5C;
	// divwu r11,r31,r27
	ctx.r11.u32 = ctx.r31.u32 / ctx.r27.u32;
	// twllei r27,0
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r29,r11,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x82ca4c60
	goto loc_82CA4C60;
loc_82CA4C5C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82CA4C60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA4C68;
	sub_82CAF6C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82caf9e0
	ctx.lr = 0x82CA4C74;
	sub_82CAF9E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca4c9c
	if (ctx.cr6.eq) goto loc_82CA4C9C;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82ca4c8c
	if (ctx.cr6.gt) goto loc_82CA4C8C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CA4C8C:
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82ca4cec
	if (!ctx.cr6.lt) goto loc_82CA4CEC;
loc_82CA4C9C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r10,r31,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r31.s64;
	// twllei r25,0
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82ca4b4c
	goto loc_82CA4B4C;
loc_82CA4CB8:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cab7e0
	ctx.lr = 0x82CA4CC8;
	sub_82CAB7E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca4cf8
	if (ctx.cr6.eq) goto loc_82CA4CF8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bgt cr6,0x82ca4cec
	if (ctx.cr6.gt) goto loc_82CA4CEC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82CA4CEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca4bbc
	if (!ctx.cr6.eq) goto loc_82CA4BBC;
	// b 0x82ca4d4c
	goto loc_82CA4D4C;
loc_82CA4CF8:
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// twllei r25,0
	// divwu r3,r11,r25
	ctx.r3.u32 = ctx.r11.u32 / ctx.r25.u32;
	// b 0x82ca4b4c
	goto loc_82CA4B4C;
loc_82CA4D08:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ca4d4c
	if (ctx.cr6.eq) goto loc_82CA4D4C;
loc_82CA4D10:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt cr6,0x82ca4d20
	if (ctx.cr6.lt) goto loc_82CA4D20;
	// li r30,255
	ctx.r30.s64 = 255;
loc_82CA4D20:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca2c60
	ctx.lr = 0x82CA4D30;
	sub_82CA2C60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x82170010
	ctx.lr = 0x82CA4D44;
	sub_82170010(ctx, base);
	// subf. r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82ca4d10
	if (!ctx.cr0.eq) goto loc_82CA4D10;
loc_82CA4D4C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82ca4b4c
	goto loc_82CA4B4C;
}

__attribute__((alias("__imp__sub_82CA4D54"))) PPC_WEAK_FUNC(sub_82CA4D54);
PPC_FUNC_IMPL(__imp__sub_82CA4D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4D58"))) PPC_WEAK_FUNC(sub_82CA4D58);
PPC_FUNC_IMPL(__imp__sub_82CA4D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24408(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24408);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA4D68;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca4dcc
	if (ctx.cr6.eq) goto loc_82CA4DCC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ca4dcc
	if (ctx.cr6.eq) goto loc_82CA4DCC;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca4dd8
	if (!ctx.cr6.eq) goto loc_82CA4DD8;
	// bl 0x82cab770
	ctx.lr = 0x82CA4DAC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4DCC;
	sub_82CAB630(ctx, base);
loc_82CA4DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA4DD0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82CA4DD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CA4DE0;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca4af0
	ctx.lr = 0x82CA4DF8;
	sub_82CA4AF0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca4e30
	ctx.lr = 0x82CA4E08;
	sub_82CA4E30(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82ca4dd0
	goto loc_82CA4DD0;
}

__attribute__((alias("__imp__sub_82CA4D60"))) PPC_WEAK_FUNC(sub_82CA4D60);
PPC_FUNC_IMPL(__imp__sub_82CA4D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA4D68;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca4dcc
	if (ctx.cr6.eq) goto loc_82CA4DCC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ca4dcc
	if (ctx.cr6.eq) goto loc_82CA4DCC;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca4dd8
	if (!ctx.cr6.eq) goto loc_82CA4DD8;
	// bl 0x82cab770
	ctx.lr = 0x82CA4DAC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA4DCC;
	sub_82CAB630(ctx, base);
loc_82CA4DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA4DD0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82CA4DD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CA4DE0;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca4af0
	ctx.lr = 0x82CA4DF8;
	sub_82CA4AF0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca4e30
	ctx.lr = 0x82CA4E08;
	sub_82CA4E30(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82ca4dd0
	goto loc_82CA4DD0;
}

__attribute__((alias("__imp__sub_82CA4E10"))) PPC_WEAK_FUNC(sub_82CA4E10);
PPC_FUNC_IMPL(__imp__sub_82CA4E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,188(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// b 0x82ca4e48
	goto loc_82CA4E48;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA4E48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA4E50;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4E30"))) PPC_WEAK_FUNC(sub_82CA4E30);
PPC_FUNC_IMPL(__imp__sub_82CA4E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA4E50;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4E68"))) PPC_WEAK_FUNC(sub_82CA4E68);
PPC_FUNC_IMPL(__imp__sub_82CA4E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA4E70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82ca4ee0
	if (!ctx.cr6.eq) goto loc_82CA4EE0;
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca4ee0
	if (ctx.cr0.eq) goto loc_82CA4EE0;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r30,r29,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82ca4ee0
	if (!ctx.cr0.gt) goto loc_82CA4EE0;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA4EAC;
	sub_82CAF6C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82caf9e0
	ctx.lr = 0x82CA4EB8;
	sub_82CAF9E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82ca4ed4
	if (!ctx.cr6.eq) goto loc_82CA4ED4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ca4ee0
	if (ctx.cr0.eq) goto loc_82CA4EE0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x82ca4edc
	goto loc_82CA4EDC;
loc_82CA4ED4:
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82CA4EDC:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82CA4EE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4EFC"))) PPC_WEAK_FUNC(sub_82CA4EFC);
PPC_FUNC_IMPL(__imp__sub_82CA4EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4F00"))) PPC_WEAK_FUNC(sub_82CA4F00);
PPC_FUNC_IMPL(__imp__sub_82CA4F00) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca4f24
	if (!ctx.cr6.eq) goto loc_82CA4F24;
	// bl 0x82ca4f80
	ctx.lr = 0x82CA4F20;
	sub_82CA4F80(ctx, base);
	// b 0x82ca4f64
	goto loc_82CA4F64;
loc_82CA4F24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca4e68
	ctx.lr = 0x82CA4F2C;
	sub_82CA4E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ca4f3c
	if (ctx.cr0.eq) goto loc_82CA4F3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca4f64
	goto loc_82CA4F64;
loc_82CA4F3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca4f60
	if (ctx.cr0.eq) goto loc_82CA4F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA4F50;
	sub_82CAF6C8(ctx, base);
	// bl 0x82cafb78
	ctx.lr = 0x82CA4F54;
	sub_82CAFB78(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82ca4f64
	goto loc_82CA4F64;
loc_82CA4F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA4F64:
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

__attribute__((alias("__imp__sub_82CA4F78"))) PPC_WEAK_FUNC(sub_82CA4F78);
PPC_FUNC_IMPL(__imp__sub_82CA4F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24384);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA4F88;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x82caff48
	ctx.lr = 0x82CA4FAC;
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r29,r11,29904
	ctx.r29.s64 = ctx.r11.s64 + 29904;
	// addi r10,r10,29908
	ctx.r10.s64 = ctx.r10.s64 + 29908;
loc_82CA4FC0:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ca507c
	if (!ctx.cr6.lt) goto loc_82CA507C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ca5070
	if (ctx.cr6.eq) goto loc_82CA5070;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca5070
	if (ctx.cr0.eq) goto loc_82CA5070;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca88e0
	ctx.lr = 0x82CA5000;
	sub_82CA88E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ca5064
	if (ctx.cr0.eq) goto loc_82CA5064;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82ca5040
	if (!ctx.cr6.eq) goto loc_82CA5040;
	// bl 0x82ca4f00
	ctx.lr = 0x82CA5028;
	sub_82CA4F00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca5064
	if (ctx.cr6.eq) goto loc_82CA5064;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82ca5064
	goto loc_82CA5064;
loc_82CA5040:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ca5064
	if (!ctx.cr6.eq) goto loc_82CA5064;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca5064
	if (ctx.cr0.eq) goto loc_82CA5064;
	// bl 0x82ca4f00
	ctx.lr = 0x82CA5054;
	sub_82CA4F00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca5064
	if (!ctx.cr6.eq) goto loc_82CA5064;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82CA5064:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca50f4
	ctx.lr = 0x82CA5070;
	sub_82CA50F4(ctx, base);
loc_82CA5070:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82ca4fc0
	goto loc_82CA4FC0;
loc_82CA507C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca50a4
	ctx.lr = 0x82CA5088;
	sub_82CA50A4(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq cr6,0x82ca509c
	if (ctx.cr6.eq) goto loc_82CA509C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82CA509C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4F80"))) PPC_WEAK_FUNC(sub_82CA4F80);
PPC_FUNC_IMPL(__imp__sub_82CA4F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA4F88;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x82caff48
	ctx.lr = 0x82CA4FAC;
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r29,r11,29904
	ctx.r29.s64 = ctx.r11.s64 + 29904;
	// addi r10,r10,29908
	ctx.r10.s64 = ctx.r10.s64 + 29908;
loc_82CA4FC0:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ca507c
	if (!ctx.cr6.lt) goto loc_82CA507C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ca5070
	if (ctx.cr6.eq) goto loc_82CA5070;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca5070
	if (ctx.cr0.eq) goto loc_82CA5070;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca88e0
	ctx.lr = 0x82CA5000;
	sub_82CA88E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ca5064
	if (ctx.cr0.eq) goto loc_82CA5064;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82ca5040
	if (!ctx.cr6.eq) goto loc_82CA5040;
	// bl 0x82ca4f00
	ctx.lr = 0x82CA5028;
	sub_82CA4F00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca5064
	if (ctx.cr6.eq) goto loc_82CA5064;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82ca5064
	goto loc_82CA5064;
loc_82CA5040:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ca5064
	if (!ctx.cr6.eq) goto loc_82CA5064;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca5064
	if (ctx.cr0.eq) goto loc_82CA5064;
	// bl 0x82ca4f00
	ctx.lr = 0x82CA5054;
	sub_82CA4F00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca5064
	if (!ctx.cr6.eq) goto loc_82CA5064;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82CA5064:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca50f4
	ctx.lr = 0x82CA5070;
	sub_82CA50F4(ctx, base);
loc_82CA5070:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82ca4fc0
	goto loc_82CA4FC0;
loc_82CA507C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca50a4
	ctx.lr = 0x82CA5088;
	sub_82CA50A4(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq cr6,0x82ca509c
	if (ctx.cr6.eq) goto loc_82CA509C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82CA509C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA50A4"))) PPC_WEAK_FUNC(sub_82CA50A4);
PPC_FUNC_IMPL(__imp__sub_82CA50A4) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cafde8
	ctx.lr = 0x82CA50B8;
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA50C8"))) PPC_WEAK_FUNC(sub_82CA50C8);
PPC_FUNC_IMPL(__imp__sub_82CA50C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r11,29904
	ctx.r29.s64 = ctx.r11.s64 + 29904;
	// b 0x82ca5110
	goto loc_82CA5110;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA5110:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82ca8970
	ctx.lr = 0x82CA5124;
	sub_82CA8970(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,29904
	ctx.r29.s64 = ctx.r10.s64 + 29904;
	// addi r10,r11,29908
	ctx.r10.s64 = ctx.r11.s64 + 29908;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA50F4"))) PPC_WEAK_FUNC(sub_82CA50F4);
PPC_FUNC_IMPL(__imp__sub_82CA50F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82ca8970
	ctx.lr = 0x82CA5124;
	sub_82CA8970(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,29904
	ctx.r29.s64 = ctx.r10.s64 + 29904;
	// addi r10,r11,29908
	ctx.r10.s64 = ctx.r11.s64 + 29908;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5158"))) PPC_WEAK_FUNC(sub_82CA5158);
PPC_FUNC_IMPL(__imp__sub_82CA5158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24344(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24344);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x82240578
	ctx.lr = 0x82CA5184;
	sub_82240578(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca51e0
	if (ctx.cr6.eq) goto loc_82CA51E0;
	// bl 0x82240578
	ctx.lr = 0x82CA5194;
	sub_82240578(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca51e0
	if (ctx.cr6.eq) goto loc_82CA51E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca51b4
	if (!ctx.cr6.eq) goto loc_82CA51B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca4f80
	ctx.lr = 0x82CA51B0;
	sub_82CA4F80(ctx, base);
	// b 0x82ca51e4
	goto loc_82CA51E4;
loc_82CA51B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CA51BC;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4f00
	ctx.lr = 0x82CA51C8;
	sub_82CA4F00(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca521c
	ctx.lr = 0x82CA51D8;
	sub_82CA521C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82ca51e4
	goto loc_82CA51E4;
loc_82CA51E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA51E4:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CA5160"))) PPC_WEAK_FUNC(sub_82CA5160);
PPC_FUNC_IMPL(__imp__sub_82CA5160) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x82240578
	ctx.lr = 0x82CA5184;
	sub_82240578(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca51e0
	if (ctx.cr6.eq) goto loc_82CA51E0;
	// bl 0x82240578
	ctx.lr = 0x82CA5194;
	sub_82240578(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca51e0
	if (ctx.cr6.eq) goto loc_82CA51E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca51b4
	if (!ctx.cr6.eq) goto loc_82CA51B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca4f80
	ctx.lr = 0x82CA51B0;
	sub_82CA4F80(ctx, base);
	// b 0x82ca51e4
	goto loc_82CA51E4;
loc_82CA51B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CA51BC;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4f00
	ctx.lr = 0x82CA51C8;
	sub_82CA4F00(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca521c
	ctx.lr = 0x82CA51D8;
	sub_82CA521C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82ca51e4
	goto loc_82CA51E4;
loc_82CA51E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA51E4:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CA51FC"))) PPC_WEAK_FUNC(sub_82CA51FC);
PPC_FUNC_IMPL(__imp__sub_82CA51FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82ca5234
	goto loc_82CA5234;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA5234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA523C;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA521C"))) PPC_WEAK_FUNC(sub_82CA521C);
PPC_FUNC_IMPL(__imp__sub_82CA521C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA523C;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5254"))) PPC_WEAK_FUNC(sub_82CA5254);
PPC_FUNC_IMPL(__imp__sub_82CA5254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

