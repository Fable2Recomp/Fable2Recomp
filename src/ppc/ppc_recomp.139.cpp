#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82D78C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,44
	r11.s64 = 44;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d80d60
	sub_82D80D60(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x82d78b10
	sub_82D78B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D78C58) {
	__imp__sub_82D78C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d78d20
	if (cr6.eq) goto loc_82D78D20;
	// li r11,9
	r11.s64 = 9;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d86988
	sub_82D86988(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82D78D20:
	// li r28,1
	r28.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d78d5c
	if (!cr6.eq) goto loc_82D78D5C;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82d78d5c
	if (!cr6.eq) goto loc_82D78D5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d773a8
	sub_82D773A8(ctx, base);
loc_82D78D5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d8f530
	sub_82D8F530(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82d78da0
	if (!cr0.eq) goto loc_82D78DA0;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d78da0
	if (cr6.eq) goto loc_82D78DA0;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d78da0
	if (!cr6.eq) goto loc_82D78DA0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82d86f78
	sub_82D86F78(ctx, base);
loc_82D78DA0:
	// stb r28,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D78CD0) {
	__imp__sub_82D78CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d78df4
	if (cr6.eq) goto loc_82D78DF4;
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d86988
	sub_82D86988(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82D78DF4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82d773a8
	sub_82D773A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D78DB0) {
	__imp__sub_82D78DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(132) );
	// lwz r10,136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(136) );
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82d78e5c
	if (cr0.eq) goto loc_82D78E5C;
	// li r11,15
	r11.s64 = 15;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(124) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r31.u16);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d86988
	sub_82D86988(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c1c
	return;
loc_82D78E5C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r23,4
	r23.s64 = 4;
	// li r25,0
	r25.s64 = 0;
	// lis r24,-32768
	r24.s64 = -2147483648;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// lwzx r11,r23,r22
	r11.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82d78ea8
	if (cr6.gt) goto loc_82D78EA8;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// b 0x82d78ebc
	goto loc_82D78EBC;
loc_82D78EA8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D78EBC:
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r23,r22
	r11.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// or r30,r31,r24
	r30.u64 = r31.u64 | r24.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// rlwinm r4,r10,0,0,27
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82d78f04
	if (cr6.gt) goto loc_82D78F04;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// b 0x82d78f1c
	goto loc_82D78F1C;
loc_82D78F04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D78F1C:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// ble cr6,0x82d79008
	if (!cr6.gt) goto loc_82D79008;
	// addi r30,r28,224
	r30.s64 = r28.s64 + 224;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82D78F48:
	// lwzx r31,r29,r21
	r31.u64 = PPC_LOAD_U32(r29.u32 + r21.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d78f70
	if (!cr6.eq) goto loc_82D78F70;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82D78F70:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r11,r29,r10
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// add r4,r27,r11
	ctx.r4.u64 = r27.u64 + r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d79ff8
	sub_82D79FF8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d78fc4
	if (!cr6.eq) goto loc_82D78FC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D78FC4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82d8e0d8
	sub_82D8E0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d85cc0
	sub_82D85CC0(ctx, base);
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82d78f48
	if (!cr6.eq) goto loc_82D78F48;
loc_82D79008:
	// lwzx r11,r23,r22
	r11.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r31,760(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(760) );
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// rlwinm r4,r9,3,0,27
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82d79040
	if (cr6.gt) goto loc_82D79040;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// b 0x82d79058
	goto loc_82D79058;
loc_82D79040:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D79058:
	// or r11,r31,r24
	r11.u64 = r31.u64 | r24.u64;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(112) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82d7909c
	if (!cr6.eq) goto loc_82D7909C;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_82D7909C:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(88) );
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x82db8fb8
	sub_82DB8FB8(ctx, base);
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(132) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// bne 0x82d790e0
	if (!cr0.eq) goto loc_82D790E0;
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(128) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d790e0
	if (cr6.eq) goto loc_82D790E0;
	// lbz r11,140(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d790e0
	if (!cr6.eq) goto loc_82D790E0;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(124) );
	// stw r25,128(r28)
	PPC_STORE_U32(r28.u32 + 128, r25.u32);
	// bl 0x82d86f78
	sub_82D86F78(ctx, base);
loc_82D790E0:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82d79108
	if (!cr6.eq) goto loc_82D79108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D79108:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7912c
	if (!cr6.eq) goto loc_82D7912C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7912C:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82d79154
	if (!cr6.eq) goto loc_82D79154;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D79154:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d79178
	if (!cr6.eq) goto loc_82D79178;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D79178:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82d791a0
	if (!cr6.eq) goto loc_82D791A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D791A0:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d791c4
	if (!cr6.eq) goto loc_82D791C4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D791C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82D78E10) {
	__imp__sub_82D78E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D791D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82d7921c
	if (cr0.eq) goto loc_82D7921C;
	// li r11,16
	r11.s64 = 16;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r26.u16);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d86988
	sub_82D86988(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	return;
loc_82D7921C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r23,4
	r23.s64 = 4;
	// li r24,0
	r24.s64 = 0;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwzx r11,r23,r22
	r11.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82d79268
	if (cr6.gt) goto loc_82D79268;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// b 0x82d79280
	goto loc_82D79280;
loc_82D79268:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D79280:
	// or r11,r26,r27
	r11.u64 = r26.u64 | r27.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// ble cr6,0x82d792e8
	if (!cr6.gt) goto loc_82D792E8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82D792A0:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r10,r30,36
	ctx.r10.s64 = r30.s64 + 36;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d8e1b8
	sub_82D8E1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d85c50
	sub_82D85C50(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82d792a0
	if (!cr6.eq) goto loc_82D792A0;
loc_82D792E8:
	// lwzx r11,r23,r22
	r11.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r30,760(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(760) );
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// rlwinm r4,r10,3,0,27
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82d79320
	if (cr6.gt) goto loc_82D79320;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// b 0x82d79334
	goto loc_82D79334;
loc_82D79320:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D79334:
	// or r10,r30,r27
	ctx.r10.u64 = r30.u64 | r27.u64;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// bl 0x82db9078
	sub_82DB9078(ctx, base);
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82d7939c
	if (!cr6.eq) goto loc_82D7939C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7939C:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d793c0
	if (!cr6.eq) goto loc_82D793C0;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D793C0:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82d79460
	if (!cr6.gt) goto loc_82D79460;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82D793CC:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r24,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r24.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d79404
	if (!cr6.gt) goto loc_82D79404;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(224) );
loc_82D793E8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82d79408
	if (cr6.eq) goto loc_82D79408;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d793e8
	if (cr6.lt) goto loc_82D793E8;
loc_82D79404:
	// li r11,-1
	r11.s64 = -1;
loc_82D79408:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(224) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d79448
	if (!cr6.eq) goto loc_82D79448;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D79448:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7a018
	sub_82D7A018(ctx, base);
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82d793cc
	if (!cr6.eq) goto loc_82D793CC;
loc_82D79460:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82d79494
	if (!cr0.eq) goto loc_82D79494;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d79494
	if (cr6.eq) goto loc_82D79494;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d79494
	if (!cr6.eq) goto loc_82D79494;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r24,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r24.u32);
	// bl 0x82d86f78
	sub_82D86F78(ctx, base);
loc_82D79494:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82d794bc
	if (!cr6.eq) goto loc_82D794BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D794BC:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d794e0
	if (!cr6.eq) goto loc_82D794E0;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D794E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82D791D0) {
	__imp__sub_82D791D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D794E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82d795bc
	if (!cr6.gt) goto loc_82D795BC;
	// rotlwi r9,r5,0
	ctx.r9.u64 = rotl32(ctx.r5.u32, 0);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d79544
	if (!cr6.gt) goto loc_82D79544;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_82D7951C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d7953c
	if (cr6.eq) goto loc_82D7953C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7951c
	if (cr6.lt) goto loc_82D7951C;
	// b 0x82d79544
	goto loc_82D79544;
loc_82D7953C:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82d79568
	if (!cr6.eq) goto loc_82D79568;
loc_82D79544:
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = r11.u64 ^ 1;
	// bl 0x82d77fe8
	sub_82D77FE8(ctx, base);
	// b 0x82d795bc
	goto loc_82D795BC;
loc_82D79568:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82d795bc
	if (!cr6.gt) goto loc_82D795BC;
	// li r30,0
	r30.s64 = 0;
loc_82D79578:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d795a8
	if (cr6.eq) goto loc_82D795A8;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x82d723b0
	sub_82D723B0(ctx, base);
loc_82D795A8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d79578
	if (cr6.lt) goto loc_82D79578;
loc_82D795BC:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82d79660
	if (!cr6.gt) goto loc_82D79660;
	// rotlwi r9,r5,0
	ctx.r9.u64 = rotl32(ctx.r5.u32, 0);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d79610
	if (!cr6.gt) goto loc_82D79610;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
loc_82D795DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d79608
	if (cr6.eq) goto loc_82D79608;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d795dc
	if (cr6.lt) goto loc_82D795DC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// bl 0x82d78e10
	sub_82D78E10(ctx, base);
	// b 0x82d79660
	goto loc_82D79660;
loc_82D79608:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82d79620
	if (!cr6.eq) goto loc_82D79620;
loc_82D79610:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// bl 0x82d78e10
	sub_82D78E10(ctx, base);
	// b 0x82d79660
	goto loc_82D79660;
loc_82D79620:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82d79660
	if (!cr6.gt) goto loc_82D79660;
	// li r30,0
	r30.s64 = 0;
loc_82D79630:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7964c
	if (cr6.eq) goto loc_82D7964C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x82d73b40
	sub_82D73B40(ctx, base);
loc_82D7964C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d79630
	if (cr6.lt) goto loc_82D79630;
loc_82D79660:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d796a4
	if (!cr6.gt) goto loc_82D796A4;
	// li r30,0
	r30.s64 = 0;
loc_82D79674:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d79690
	if (cr6.eq) goto loc_82D79690;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x82d771b8
	sub_82D771B8(ctx, base);
loc_82D79690:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d79674
	if (cr6.lt) goto loc_82D79674;
loc_82D796A4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d79700
	if (!cr6.gt) goto loc_82D79700;
	// li r30,0
	r30.s64 = 0;
loc_82D796B8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d796ec
	if (cr6.eq) goto loc_82D796EC;
	// rotlwi r4,r10,0
	ctx.r4.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d796e4
	if (!cr6.eq) goto loc_82D796E4;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d796ec
	if (cr6.eq) goto loc_82D796EC;
loc_82D796E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d78b10
	sub_82D78B10(ctx, base);
loc_82D796EC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d796b8
	if (cr6.lt) goto loc_82D796B8;
loc_82D79700:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D794E8) {
	__imp__sub_82D794E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d79764
	if (!cr6.gt) goto loc_82D79764;
	// li r31,0
	r31.s64 = 0;
loc_82D79730:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d79750
	if (cr6.eq) goto loc_82D79750;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r10,0
	ctx.r5.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x82d78cd0
	sub_82D78CD0(ctx, base);
loc_82D79750:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d79730
	if (cr6.lt) goto loc_82D79730;
loc_82D79764:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d797d4
	if (!cr6.gt) goto loc_82D797D4;
	// li r31,0
	r31.s64 = 0;
	// li r28,11
	r28.s64 = 11;
loc_82D7977C:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d797c0
	if (cr6.eq) goto loc_82D797C0;
	// lwz r10,132(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(132) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d797b4
	if (cr6.eq) goto loc_82D797B4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(124) );
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82d86988
	sub_82D86988(ctx, base);
	// b 0x82d797c0
	goto loc_82D797C0;
loc_82D797B4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82d773a8
	sub_82D773A8(ctx, base);
loc_82D797C0:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d7977c
	if (cr6.lt) goto loc_82D7977C;
loc_82D797D4:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d79820
	if (!cr6.gt) goto loc_82D79820;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
loc_82D797E8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d79818
	if (cr6.eq) goto loc_82D79818;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d797e8
	if (cr6.lt) goto loc_82D797E8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82d78710
	sub_82D78710(ctx, base);
	// b 0x82d7987c
	goto loc_82D7987C;
loc_82D79818:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82d79834
	if (!cr6.eq) goto loc_82D79834;
loc_82D79820:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82d78710
	sub_82D78710(ctx, base);
	// b 0x82d7987c
	goto loc_82D7987C;
loc_82D79834:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d7987c
	if (!cr6.gt) goto loc_82D7987C;
	// li r31,0
	r31.s64 = 0;
loc_82D79848:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d79868
	if (cr6.eq) goto loc_82D79868;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r10,0
	ctx.r5.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x82d72550
	sub_82D72550(ctx, base);
loc_82D79868:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d79848
	if (cr6.lt) goto loc_82D79848;
loc_82D7987C:
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d798cc
	if (!cr6.gt) goto loc_82D798CC;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
loc_82D79890:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d798c4
	if (cr6.eq) goto loc_82D798C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d79890
	if (cr6.lt) goto loc_82D79890;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// bl 0x82d791d0
	sub_82D791D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82D798C4:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82d798e4
	if (!cr6.eq) goto loc_82D798E4;
loc_82D798CC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// bl 0x82d791d0
	sub_82D791D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82D798E4:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d79928
	if (!cr6.gt) goto loc_82D79928;
	// li r31,0
	r31.s64 = 0;
loc_82D798F8:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d79914
	if (cr6.eq) goto loc_82D79914;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x82d72680
	sub_82D72680(ctx, base);
loc_82D79914:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82d798f8
	if (cr6.lt) goto loc_82D798F8;
loc_82D79928:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D79708) {
	__imp__sub_82D79708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82d79984
	if (!cr6.eq) goto loc_82D79984;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,48
	r11.s64 = 48;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d79bc0
	sub_82D79BC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82d7999c
	goto loc_82D7999C;
loc_82D79984:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7999c
	if (cr6.eq) goto loc_82D7999C;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D7999C:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(112) );
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d799d8
	if (cr6.eq) goto loc_82D799D8;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82d799d8
	if (!cr6.eq) goto loc_82D799D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D799D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r31.u32);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// bne cr6,0x82d799ec
	if (!cr6.eq) goto loc_82D799EC;
	// li r11,0
	r11.s64 = 0;
loc_82D799EC:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// extsb r9,r29
	ctx.r9.s64 = r29.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// beq cr6,0x82d79a10
	if (cr6.eq) goto loc_82D79A10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d77ba8
	sub_82D77BA8(ctx, base);
loc_82D79A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D79930) {
	__imp__sub_82D79930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82db8f88
	sub_82DB8F88(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79a94
	if (cr6.eq) goto loc_82D79A94;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d79a94
	if (cr6.eq) goto loc_82D79A94;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(148) );
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d79a7c
	if (cr6.lt) goto loc_82D79A7C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82d79a94
	goto loc_82D79A94;
loc_82D79A7C:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(148) );
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r31,144(r11)
	PPC_STORE_U32(r11.u32 + 144, r31.u32);
loc_82D79A94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79A18) {
	__imp__sub_82D79A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d868e8
	sub_82D868E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79b2c
	if (cr6.eq) goto loc_82D79B2C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d79b2c
	if (cr6.eq) goto loc_82D79B2C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d79b14
	if (cr6.lt) goto loc_82D79B14;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82d79b2c
	goto loc_82D79B2C;
loc_82D79B14:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(104) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r31,104(r11)
	PPC_STORE_U32(r11.u32 + 104, r31.u32);
loc_82D79B2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79AB0) {
	__imp__sub_82D79AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79B48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82d79d30
	sub_82D79D30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79B48) {
	__imp__sub_82D79B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79B50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79B50) {
	__imp__sub_82D79B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d79ba4
	if (cr6.eq) goto loc_82D79BA4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D79BA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79B58) {
	__imp__sub_82D79B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r31,1
	r31.s64 = 1;
	// addi r11,r11,-31352
	r11.s64 = r11.s64 + -31352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r31.u16);
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r7,r7,-31144
	ctx.r7.s64 = ctx.r7.s64 + -31144;
	// addi r6,r6,-31156
	ctx.r6.s64 = ctx.r6.s64 + -31156;
	// addi r5,r5,-31176
	ctx.r5.s64 = ctx.r5.s64 + -31176;
	// addi r11,r11,-31188
	r11.s64 = r11.s64 + -31188;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r4,r4,-31200
	ctx.r4.s64 = ctx.r4.s64 + -31200;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79BC0) {
	__imp__sub_82D79BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82db9610
	sub_82DB9610(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79c90
	if (cr6.eq) goto loc_82D79C90;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D79C90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79C48) {
	__imp__sub_82D79C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CB0) {
	__imp__sub_82D79CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CB8) {
	__imp__sub_82D79CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CC0) {
	__imp__sub_82D79CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CC8) {
	__imp__sub_82D79CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d79d18
	if (cr6.eq) goto loc_82D79D18;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D79D18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79CD0) {
	__imp__sub_82D79CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// bne cr6,0x82d79d54
	if (!cr6.eq) goto loc_82D79D54;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D79D54:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-31340
	r11.s64 = r11.s64 + -31340;
	// addi r10,r10,14712
	ctx.r10.s64 = ctx.r10.s64 + 14712;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d79d94
	if (cr6.eq) goto loc_82D79D94;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D79D94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79D30) {
	__imp__sub_82D79D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79e14
	if (cr6.eq) goto loc_82D79E14;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-20792
	r30.s64 = r11.s64 + -20792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82184450
	sub_82184450(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79e04
	if (cr6.eq) goto loc_82D79E04;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
loc_82D79E04:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,32(r30)
	PPC_STORE_U64(r30.u32 + 32, r11.u64);
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82D79E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79DB0) {
	__imp__sub_82D79DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r31,r29,40
	r31.s64 = r29.s64 + 40;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82d79ea0
	if (cr6.eq) goto loc_82D79EA0;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-20792
	r30.s64 = r11.s64 + -20792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82184450
	sub_82184450(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79e88
	if (cr6.eq) goto loc_82D79E88;
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
loc_82D79E88:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// std r11,32(r30)
	PPC_STORE_U64(r30.u32 + 32, r11.u64);
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82D79EA0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b259c
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D79E30) {
	__imp__sub_82D79E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82d79db0
	sub_82D79DB0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79f40
	if (cr6.eq) goto loc_82D79F40;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d79f40
	if (cr6.eq) goto loc_82D79F40;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d79f28
	if (cr6.lt) goto loc_82D79F28;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82d79f40
	goto loc_82D79F40;
loc_82D79F28:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r31,96(r11)
	PPC_STORE_U32(r11.u32 + 96, r31.u32);
loc_82D79F40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79EC0) {
	__imp__sub_82D79EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d761a0
	sub_82D761A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d79fa8
	if (cr6.eq) goto loc_82D79FA8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,46
	ctx.r6.s64 = 46;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D79FA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79F60) {
	__imp__sub_82D79F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79FC8) {
	__imp__sub_82D79FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(180) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,-1
	r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79FD0) {
	__imp__sub_82D79FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79FF4) {
	__imp__sub_82D79FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79FF8) {
	__imp__sub_82D79FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7A018) {
	__imp__sub_82D7A018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A050) {
	__imp__sub_82D7A050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A058) {
	__imp__sub_82D7A058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A060) {
	__imp__sub_82D7A060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A068) {
	__imp__sub_82D7A068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7a0b4
	if (!cr6.gt) goto loc_82D7A0B4;
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
loc_82D7A098:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82d7a0f8
	if (cr6.eq) goto loc_82D7A0F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7a098
	if (cr6.lt) goto loc_82D7A098;
loc_82D7A0B4:
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d7a0d8
	if (!cr6.eq) goto loc_82D7A0D8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D7A0D8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82D7A0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7A070) {
	__imp__sub_82D7A070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7a138
	if (!cr6.gt) goto loc_82D7A138;
	// lwz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(116) );
	// addi r7,r4,116
	ctx.r7.s64 = ctx.r4.s64 + 116;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82D7A11C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d7a144
	if (cr6.eq) goto loc_82D7A144;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7a11c
	if (cr6.lt) goto loc_82D7A11C;
loc_82D7A138:
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
loc_82D7A144:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// std r8,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r8.u64);
	// bge cr6,0x82d7a1a4
	if (!cr6.lt) goto loc_82D7A1A4;
loc_82D7A174:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r8.u64);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82d7a174
	if (cr6.lt) goto loc_82D7A174;
loc_82D7A1A4:
	// ld r11,-8(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A100) {
	__imp__sub_82D7A100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82D7A1C8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d7a1e8
	if (cr6.eq) goto loc_82D7A1E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7a1c8
	if (cr6.lt) goto loc_82D7A1C8;
	// blr 
	return;
loc_82D7A1E8:
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// std r5,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r5.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A1B0) {
	__imp__sub_82D7A1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(180) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82184450
	sub_82184450(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A1F8) {
	__imp__sub_82D7A1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A214) {
	__imp__sub_82D7A214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7a264
	if (cr6.eq) goto loc_82D7A264;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7a264
	if (cr6.eq) goto loc_82D7A264;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82D7A264:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7a27c
	if (cr6.eq) goto loc_82D7A27C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
loc_82D7A27C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A218) {
	__imp__sub_82D7A218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7a2dc
	if (cr6.eq) goto loc_82D7A2DC;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7a2dc
	if (cr6.eq) goto loc_82D7A2DC;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82D7A2DC:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7a318
	if (cr6.eq) goto loc_82D7A318;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// bne cr6,0x82d7a318
	if (!cr6.eq) goto loc_82D7A318;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7A318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A290) {
	__imp__sub_82D7A290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29892
	ctx.r4.s64 = r11.s64 + -29892;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7a3a8
	if (!cr6.eq) goto loc_82D7A3A8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// addi r4,r10,-29904
	ctx.r4.s64 = ctx.r10.s64 + -29904;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7A3A8:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// rlwinm r11,r10,0,0,0
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7a3e8
	if (!cr6.eq) goto loc_82D7A3E8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,-29916
	ctx.r4.s64 = r11.s64 + -29916;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7A3E8:
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82d7a420
	if (cr6.eq) goto loc_82D7A420;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lhz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-29932
	ctx.r4.s64 = r11.s64 + -29932;
	// rotlwi r7,r9,5
	ctx.r7.u64 = rotl32(ctx.r9.u32, 5);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7A420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A328) {
	__imp__sub_82D7A328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29880
	r11.s64 = r11.s64 + -29880;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// bl 0x82daff88
	sub_82DAFF88(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82d7a480
	if (cr6.eq) goto loc_82D7A480;
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
loc_82D7A480:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r9,-47
	ctx.r9.s64 = -47;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// beq cr6,0x82d7a4b4
	if (cr6.eq) goto loc_82D7A4B4;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
loc_82D7A4B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7A438) {
	__imp__sub_82D7A438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-29880
	r11.s64 = r11.s64 + -29880;
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// li r9,127
	ctx.r9.s64 = 127;
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// sth r10,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r10.u16);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// stb r5,4(r28)
	PPC_STORE_U8(r28.u32 + 4, ctx.r5.u8);
	// stw r30,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r30.u32);
	// stb r9,5(r28)
	PPC_STORE_U8(r28.u32 + 5, ctx.r9.u8);
	// bl 0x82daff88
	sub_82DAFF88(ctx, base);
	// subf r9,r28,r31
	ctx.r9.s64 = r31.s64 - r28.s64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r10,-47
	ctx.r10.s64 = -47;
	// subf r8,r31,r29
	ctx.r8.s64 = r29.s64 - r31.s64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stb r9,5(r28)
	PPC_STORE_U8(r28.u32 + 5, ctx.r9.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// sth r30,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r30.u16);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,104(r29)
	PPC_STORE_U32(r29.u32 + 104, ctx.r10.u32);
	// sth r30,108(r29)
	PPC_STORE_U16(r29.u32 + 108, r30.u16);
	// stw r30,112(r29)
	PPC_STORE_U32(r29.u32 + 112, r30.u32);
	// stw r30,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r30.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(r29.u32 + 120, r30.u32);
	// stw r11,124(r29)
	PPC_STORE_U32(r29.u32 + 124, r11.u32);
	// stb r8,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r8.u8);
	// beq cr6,0x82d7a598
	if (cr6.eq) goto loc_82D7A598;
	// lhz r11,4(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7a598
	if (cr6.eq) goto loc_82D7A598;
	// lhz r11,6(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r27)
	PPC_STORE_U16(r27.u32 + 6, r11.u16);
loc_82D7A598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D7A4C0) {
	__imp__sub_82D7A4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29880
	r11.s64 = r11.s64 + -29880;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d7a604
	if (cr6.eq) goto loc_82D7A604;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7a604
	if (cr6.eq) goto loc_82D7A604;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82d7a604
	if (!cr6.eq) goto loc_82D7A604;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7A604:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7a630
	if (!cr6.eq) goto loc_82D7A630;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7A630:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7a65c
	if (!cr6.eq) goto loc_82D7A65C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7A65C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A5A0) {
	__imp__sub_82D7A5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d7a5a0
	sub_82D7A5A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7a6c8
	if (cr6.eq) goto loc_82D7A6C8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,20
	ctx.r6.s64 = 20;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7A6C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A680) {
	__imp__sub_82D7A680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A6E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A6E8) {
	__imp__sub_82D7A6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A6F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d86028
	sub_82D86028(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A6F0) {
	__imp__sub_82D7A6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7a76c
	if (cr6.eq) goto loc_82D7A76C;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7a74c
	if (cr6.eq) goto loc_82D7A74C;
	// li r11,5
	r11.s64 = 5;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7a830
	goto loc_82D7A830;
loc_82D7A74C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7a76c
	if (cr6.eq) goto loc_82D7A76C;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82d91fa0
	sub_82D91FA0(ctx, base);
loc_82D7A76C:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7a784
	if (cr6.eq) goto loc_82D7A784;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r11.u16);
loc_82D7A784:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7a7c8
	if (cr6.eq) goto loc_82D7A7C8;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7a7c8
	if (cr6.eq) goto loc_82D7A7C8;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82d7a7c8
	if (!cr6.eq) goto loc_82D7A7C8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7A7C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7a7e0
	if (cr6.eq) goto loc_82D7A7E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d8e298
	sub_82D8E298(ctx, base);
loc_82D7A7E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d85d30
	sub_82D85D30(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7a82c
	if (cr6.eq) goto loc_82D7A82C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d91d10
	sub_82D91D10(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bne 0x82d7a82c
	if (!cr0.eq) goto loc_82D7A82C;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7a82c
	if (cr6.eq) goto loc_82D7A82C;
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7a82c
	if (!cr6.eq) goto loc_82D7A82C;
	// bl 0x82d72130
	sub_82D72130(ctx, base);
loc_82D7A82C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D7A830:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A6F8) {
	__imp__sub_82D7A6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r4,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r4,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7a8d0
	if (cr6.eq) goto loc_82D7A8D0;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d86180
	sub_82D86180(ctx, base);
loc_82D7A8D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A848) {
	__imp__sub_82D7A848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7a950
	if (cr6.eq) goto loc_82D7A950;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), float(ctx.f1.f64)));
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d86180
	sub_82D86180(ctx, base);
loc_82D7A950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A8E8) {
	__imp__sub_82D7A8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,160
	ctx.r4.s64 = r11.s64 + 160;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,108(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(108) );
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7A968) {
	__imp__sub_82D7A968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d7a4c0
	sub_82D7A4C0(ctx, base);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// subf r28,r9,r31
	r28.s64 = r31.s64 - ctx.r9.s64;
	// addi r8,r8,-29796
	ctx.r8.s64 = ctx.r8.s64 + -29796;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r4,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r4.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r10,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, r28.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r30,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r30,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r30,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D7A9A0) {
	__imp__sub_82D7A9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d860e8
	sub_82D860E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7aa88
	if (cr6.eq) goto loc_82D7AA88;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,48
	ctx.r6.s64 = 48;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7AA88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AA40) {
	__imp__sub_82D7AA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// li r30,32
	r30.s64 = 32;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r7,r3,64
	ctx.r7.s64 = ctx.r3.s64 + 64;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r29,16
	r29.s64 = 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f9,2676(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2676);
	ctx.f9.f64 = double(temp.f32);
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// addi r9,r9,16976
	ctx.r9.s64 = ctx.r9.s64 + 16976;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// lfs f11,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r3,128
	ctx.r6.s64 = ctx.r3.s64 + 128;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r31,1
	r31.s64 = 1;
	// stvx128 v13,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// li r4,2
	ctx.r4.s64 = 2;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r28,-1
	r28.s64 = -1;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lfs f13,2968(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2968);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lfs f8,3800(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3800);
	ctx.f8.f64 = double(temp.f32);
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r29
	ea = (r11.u32 + r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r30
	ea = (r11.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r31,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, r31.u8);
	// stfs f0,144(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stb r4,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r4.u8);
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r4,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r4.u8);
	// stfs f11,152(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stb r10,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r10.u8);
	// stfs f10,156(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r31.u8);
	// stfs f9,160(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// sth r28,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r28.u16);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f8,172(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stb r10,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r10.u8);
	// stb r10,181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 181, ctx.r10.u8);
	// stb r10,182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 182, ctx.r10.u8);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D7AAA8) {
	__imp__sub_82D7AAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ABC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ABC8) {
	__imp__sub_82D7ABC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AC18) {
	__imp__sub_82D7AC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AC68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f11,f0,f13
	f0.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsubs f13,f0,f12
	ctx.f13.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// fsel f0,f13,f12,f0
	f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82d7aca8
	if (!cr6.lt) goto loc_82D7ACA8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2704);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
loc_82D7ACA8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3052);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AC68) {
	__imp__sub_82D7AC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ACB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29728
	r11.s64 = r11.s64 + -29728;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82d7d378
	sub_82D7D378(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7ACB8) {
	__imp__sub_82D7ACB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ACC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ACC8) {
	__imp__sub_82D7ACC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ACD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82d7ad20
	if (cr6.eq) goto loc_82D7AD20;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,192(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(192) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7ad0c
	if (cr6.eq) goto loc_82D7AD0C;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// lbz r8,711(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 711);
	// lbz r7,710(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 710);
	// lbz r6,709(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 709);
	// b 0x82687fe8
	sub_82687FE8(ctx, base);
	return;
loc_82D7AD0C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// b 0x82687fe8
	sub_82687FE8(ctx, base);
	return;
loc_82D7AD20:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// b 0x82687fe8
	sub_82687FE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7ACD0) {
	__imp__sub_82D7ACD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AD3C) {
	__imp__sub_82D7AD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,217(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 217);
	// addi r11,r11,-255
	r11.s64 = r11.s64 + -255;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AD40) {
	__imp__sub_82D7AD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(208) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7AD60) {
	__imp__sub_82D7AD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(208) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7AD78) {
	__imp__sub_82D7AD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(208) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7AD90) {
	__imp__sub_82D7AD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(208) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7ADA8) {
	__imp__sub_82D7ADA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r4,r11,27936
	ctx.r4.s64 = r11.s64 + 27936;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r8,352
	ctx.r8.s64 = 352;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// vsubfp v0,v12,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v13,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmsum3fp128 v11,v0,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvewx v0,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// lvx128 v0,r31,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vsubfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvewx v0,r0,r6
	PPC_STORE_U32((ctx.r6.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r6.u32) & 0xF) >> 2));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), float(ctx.f12.f64)));
	// stfs f0,384(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ADC0) {
	__imp__sub_82D7ADC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f3,204(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x82d7b0a4
	if (cr6.gt) goto loc_82D7B0A4;
	// lis r12,-32040
	r12.s64 = -2099773440;
	// addi r12,r12,-20716
	r12.s64 = r12.s64 + -20716;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82D7AFE0;
	case 1:
		goto loc_82D7AF38;
	case 2:
		goto loc_82D7AF98;
	case 3:
		goto loc_82D7AF68;
	case 4:
		goto loc_82D7AFC8;
	case 5:
		goto loc_82D7B04C;
	case 6:
		goto loc_82D7B0A4;
	case 7:
		goto loc_82D7AF80;
	case 8:
		goto loc_82D7B074;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-20512(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20512) );
	// lwz r22,-20680(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20680) );
	// lwz r22,-20584(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20584) );
	// lwz r22,-20632(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20632) );
	// lwz r22,-20536(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20536) );
	// lwz r22,-20404(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20404) );
	// lwz r22,-20316(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20316) );
	// lwz r22,-20608(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20608) );
	// lwz r22,-20364(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20364) );
loc_82D7AF38:
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d846d0
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-29692
	r11.s64 = r11.s64 + -29692;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AF68:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95f08
	sub_82D95F08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AF80:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95ea0
	sub_82D95EA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AF98:
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d846d0
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-29588
	r11.s64 = r11.s64 + -29588;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AFC8:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95e58
	sub_82D95E58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AFE0:
	// lfs f12,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsel f10,f11,f13,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f12,f0,f10
	ctx.f12.f64 = static_cast<float>(f0.f64 - ctx.f10.f64);
	// fsubs f11,f0,f13
	ctx.f11.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fsel f12,f12,f0,f10
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// fsel f13,f11,f13,f0
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// lfs f0,2860(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2860);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82d7af68
	if (!cr6.gt) goto loc_82D7AF68;
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d846d0
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-29692
	r11.s64 = r11.s64 + -29692;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B04C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,2632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2632);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95b90
	sub_82D95B90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B074:
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d846d0
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,-29484
	r11.s64 = r11.s64 + -29484;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B0A4:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b0bc
	if (cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95d38
	sub_82D95D38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B0BC:
	// li r31,0
	r31.s64 = 0;
loc_82D7B0C0:
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// beq cr6,0x82d7b110
	if (cr6.eq) goto loc_82D7B110;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7B110:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x825142b0
	sub_825142B0(ctx, base);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r31,189
	ctx.r3.s64 = r31.s64 + 189;
	// bl 0x825142b0
	sub_825142B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D7AEC8) {
	__imp__sub_82D7AEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82d7c918
	sub_82D7C918(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29728
	r11.s64 = r11.s64 + -29728;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// sth r11,150(r31)
	PPC_STORE_U16(r31.u32 + 150, r11.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lbz r11,176(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 176);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82d7b1fc
	if (!cr6.eq) goto loc_82D7B1FC;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b1b4
	if (cr6.eq) goto loc_82D7B1B4;
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82d95d38
	sub_82D95D38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82d7b1b8
	goto loc_82D7B1B8;
loc_82D7B1B4:
	// li r29,0
	r29.s64 = 0;
loc_82D7B1B8:
	// addi r4,r30,164
	ctx.r4.s64 = r30.s64 + 164;
	// addi r3,r29,188
	ctx.r3.s64 = r29.s64 + 188;
	// bl 0x825142b0
	sub_825142B0(ctx, base);
	// addi r4,r30,168
	ctx.r4.s64 = r30.s64 + 168;
	// addi r3,r29,189
	ctx.r3.s64 = r29.s64 + 189;
	// bl 0x825142b0
	sub_825142B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d84638
	sub_82D84638(ctx, base);
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 172);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82d7b290
	if (cr6.gt) goto loc_82D7B290;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3164);
	f0.f64 = double(temp.f32);
	// b 0x82d7b290
	goto loc_82D7B290;
loc_82D7B1FC:
	// addi r29,r31,208
	r29.s64 = r31.s64 + 208;
	// lfs f3,168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r30,128
	ctx.r8.s64 = r30.s64 + 128;
	// lfs f2,164(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r30,80
	ctx.r7.s64 = r30.s64 + 80;
	// lfs f1,144(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x82d7aec8
	sub_82D7AEC8(ctx, base);
	// lbz r11,178(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 178);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// bl 0x82d84638
	sub_82D84638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lbz r11,177(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 177);
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// bl 0x82d7acd0
	sub_82D7ACD0(ctx, base);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 172);
	f0.f64 = double(temp.f32);
loc_82D7B290:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 148);
	f0.f64 = double(temp.f32);
	// stfs f0,388(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 388, temp.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfs f0,152(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 152);
	f0.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 392, temp.u32);
	// beq cr6,0x82d7b310
	if (cr6.eq) goto loc_82D7B310;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7adc0
	sub_82D7ADC0(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82d7b310
	if (cr6.gt) goto loc_82D7B310;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fsel f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fsel f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82d7b304
	if (!cr6.lt) goto loc_82D7B304;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2704);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x82d7b30c
	goto loc_82D7B30C;
loc_82D7B304:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3052);
	f0.f64 = double(temp.f32);
loc_82D7B30C:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
loc_82D7B310:
	// lbz r11,179(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 179);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7b324
	if (cr6.eq) goto loc_82D7B324;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82d7b34c
	goto loc_82D7B34C;
loc_82D7B324:
	// lbz r11,216(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82d7b338
	if (!cr6.eq) goto loc_82D7B338;
	// li r11,1
	r11.s64 = 1;
	// b 0x82d7b34c
	goto loc_82D7B34C;
loc_82D7B338:
	// lbz r11,176(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 176);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// li r11,2
	r11.s64 = 2;
	// beq cr6,0x82d7b34c
	if (cr6.eq) goto loc_82D7B34C;
	// li r11,3
	r11.s64 = 3;
loc_82D7B34C:
	// sth r11,42(r31)
	PPC_STORE_U16(r31.u32 + 42, r11.u16);
	// lbz r11,181(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 181);
	// stb r11,189(r31)
	PPC_STORE_U8(r31.u32 + 189, r11.u8);
	// lbz r11,180(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 180);
	// stb r11,188(r31)
	PPC_STORE_U8(r31.u32 + 188, r11.u8);
	// lbz r11,182(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 182);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7b378
	if (cr6.eq) goto loc_82D7B378;
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r11,33(r31)
	PPC_STORE_U8(r31.u32 + 33, r11.u8);
loc_82D7B378:
	// lfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 156);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,160(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 160);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7B138) {
	__imp__sub_82D7B138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7b3f4
	if (cr6.eq) goto loc_82D7B3F4;
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d7b3f4
	if (cr6.eq) goto loc_82D7B3F4;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r5,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82D7B3F4:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d932d0
	sub_82D932D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B398) {
	__imp__sub_82D7B398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b478
	if (cr6.eq) goto loc_82D7B478;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7b460
	if (cr6.eq) goto loc_82D7B460;
	// li r11,5
	r11.s64 = 5;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
loc_82D7B460:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b478
	if (cr6.eq) goto loc_82D7B478;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c198
	sub_82D7C198(ctx, base);
loc_82D7B478:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7b49c
	if (cr6.eq) goto loc_82D7B49C;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(132) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82d91e50
	sub_82D91E50(ctx, base);
loc_82D7B49C:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7b4bc
	if (cr6.eq) goto loc_82D7B4BC;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r29)
	PPC_STORE_U16(r29.u32 + 6, r11.u16);
loc_82D7B4BC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d7b500
	if (cr6.eq) goto loc_82D7B500;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7b500
	if (cr6.eq) goto loc_82D7B500;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r11.u16);
	// bne cr6,0x82d7b500
	if (!cr6.eq) goto loc_82D7B500;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7B500:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7adc0
	sub_82D7ADC0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d7b538
	if (cr6.eq) goto loc_82D7B538;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3164);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82d7b538
	if (cr6.eq) goto loc_82D7B538;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
loc_82D7B538:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82d7b594
	if (cr6.gt) goto loc_82D7B594;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fsel f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fsel f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82d7b588
	if (!cr6.lt) goto loc_82D7B588;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2704);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x82d7b590
	goto loc_82D7B590;
loc_82D7B588:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3052);
	f0.f64 = double(temp.f32);
loc_82D7B590:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
loc_82D7B594:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b5a8
	if (cr6.eq) goto loc_82D7B5A8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d8dff8
	sub_82D8DFF8(ctx, base);
loc_82D7B5A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d8d638
	sub_82D8D638(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7b5f4
	if (cr6.eq) goto loc_82D7B5F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d91ba0
	sub_82D91BA0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bne 0x82d7b5f4
	if (!cr0.eq) goto loc_82D7B5F4;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7b5f4
	if (cr6.eq) goto loc_82D7B5F4;
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7b5f4
	if (!cr6.eq) goto loc_82D7B5F4;
	// bl 0x82d72130
	sub_82D72130(ctx, base);
loc_82D7B5F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7B410) {
	__imp__sub_82D7B410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82d7adc0
	sub_82D7ADC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B600) {
	__imp__sub_82D7B600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,216(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82d7b66c
	if (cr6.eq) goto loc_82D7B66C;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82d7b66c
	if (cr6.eq) goto loc_82D7B66C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7B66C:
	// lwz r3,488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(488) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B650) {
	__imp__sub_82D7B650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,216(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82d7b694
	if (cr6.eq) goto loc_82D7B694;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82d7b694
	if (cr6.eq) goto loc_82D7B694;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7B694:
	// lwz r3,488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(488) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B678) {
	__imp__sub_82D7B678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7b7b8
	if (cr6.eq) goto loc_82D7B7B8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7b6ec
	if (cr6.eq) goto loc_82D7B6EC;
	// li r11,21
	r11.s64 = 21;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// b 0x82d7b7b8
	goto loc_82D7B7B8;
loc_82D7B6EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7b744
	if (cr6.eq) goto loc_82D7B744;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d892d8
	sub_82D892D8(ctx, base);
loc_82D7B744:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7c158
	sub_82D7C158(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7b788
	if (!cr6.eq) goto loc_82D7B788;
	// lbz r11,198(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 198);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7b77c
	if (cr6.eq) goto loc_82D7B77C;
	// lbz r11,216(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82d7b77c
	if (cr6.eq) goto loc_82D7B77C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
loc_82D7B77C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d8f350
	sub_82D8F350(ctx, base);
loc_82D7B788:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82d7b7b8
	if (!cr0.eq) goto loc_82D7B7B8;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7b7b8
	if (cr6.eq) goto loc_82D7B7B8;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7b7b8
	if (!cr6.eq) goto loc_82D7B7B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d72130
	sub_82D72130(ctx, base);
loc_82D7B7B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B6A0) {
	__imp__sub_82D7B6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7b6a0
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B7D0) {
	__imp__sub_82D7B7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7b6a0
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B818) {
	__imp__sub_82D7B818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7b6a0
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B860) {
	__imp__sub_82D7B860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7b6a0
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B8A8) {
	__imp__sub_82D7B8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7b974
	if (cr6.eq) goto loc_82D7B974;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7b974
	if (cr6.eq) goto loc_82D7B974;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82D7B974:
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7b6a0
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7B8F0) {
	__imp__sub_82D7B8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7ba04
	if (cr6.eq) goto loc_82D7BA04;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7ba04
	if (cr6.eq) goto loc_82D7BA04;
	// li r11,24
	r11.s64 = 24;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// b 0x82d7ba24
	goto loc_82D7BA24;
loc_82D7BA04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7BA24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B9A0) {
	__imp__sub_82D7B9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7baa4
	if (cr6.eq) goto loc_82D7BAA4;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7baa4
	if (cr6.eq) goto loc_82D7BAA4;
	// li r11,25
	r11.s64 = 25;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// b 0x82d7bac4
	goto loc_82D7BAC4;
loc_82D7BAA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7BAC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7BA40) {
	__imp__sub_82D7BA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7bb44
	if (cr6.eq) goto loc_82D7BB44;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7bb44
	if (cr6.eq) goto loc_82D7BB44;
	// li r11,26
	r11.s64 = 26;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// b 0x82d7bb64
	goto loc_82D7BB64;
loc_82D7BB44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7BB64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7BAE0) {
	__imp__sub_82D7BAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7bc04
	if (cr6.eq) goto loc_82D7BC04;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7bc04
	if (cr6.eq) goto loc_82D7BC04;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82D7BC04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7BB80) {
	__imp__sub_82D7BB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7bc94
	if (cr6.eq) goto loc_82D7BC94;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7bc94
	if (cr6.eq) goto loc_82D7BC94;
	// li r11,28
	r11.s64 = 28;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// b 0x82d7bcb4
	goto loc_82D7BCB4;
loc_82D7BC94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7BCB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7BC30) {
	__imp__sub_82D7BC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,16(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7bdb4
	if (cr6.eq) goto loc_82D7BDB4;
	// lbz r11,216(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 216);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82d7bd08
	if (cr6.eq) goto loc_82D7BD08;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82d7bd0c
	if (!cr6.eq) goto loc_82D7BD0C;
loc_82D7BD08:
	// li r11,1
	r11.s64 = 1;
loc_82D7BD0C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7bd70
	if (!cr6.eq) goto loc_82D7BD70;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// beq cr6,0x82d7bd28
	if (cr6.eq) goto loc_82D7BD28;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(r30.s32, 21, xer);
	// bne cr6,0x82d7bd4c
	if (!cr6.eq) goto loc_82D7BD4C;
loc_82D7BD28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7BD4C:
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(r30.s32, 12, xer);
	// bne cr6,0x82d7bd70
	if (!cr6.eq) goto loc_82D7BD70;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82D7BD70:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// bne cr6,0x82d7bd98
	if (!cr6.eq) goto loc_82D7BD98;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82D7BD98:
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(r30.s32, 10, xer);
	// bne cr6,0x82d7bdb4
	if (!cr6.eq) goto loc_82D7BDB4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7BDB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7BCD0) {
	__imp__sub_82D7BCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,416
	ctx.r10.s64 = 416;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,432
	ctx.r8.s64 = 432;
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r29,r31,208
	r29.s64 = r31.s64 + 208;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,182(r30)
	PPC_STORE_U8(r30.u32 + 182, r11.u8);
	// lbz r11,188(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 188);
	// stb r11,180(r30)
	PPC_STORE_U8(r30.u32 + 180, r11.u8);
	// lbz r11,189(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 189);
	// stb r11,181(r30)
	PPC_STORE_U8(r30.u32 + 181, r11.u8);
	// lhz r11,150(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 150);
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// lbz r11,217(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 217);
	// addi r11,r11,-255
	r11.s64 = r11.s64 + -255;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,177(r30)
	PPC_STORE_U8(r30.u32 + 177, r11.u8);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 156, temp.u32);
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// stb r11,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r11.u8);
	// lfs f0,136(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 160, temp.u32);
	// lfs f0,388(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 388);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 148, temp.u32);
	// lfs f0,392(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 392);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 152, temp.u32);
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r31,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d84640
	sub_82D84640(ctx, base);
	// stfs f1,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 144, temp.u32);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r11,14840
	r11.s64 = r11.s64 + 14840;
	// li r7,336
	ctx.r7.s64 = 336;
	// stb r10,176(r30)
	PPC_STORE_U8(r30.u32 + 176, ctx.r10.u8);
	// li r10,272
	ctx.r10.s64 = 272;
	// lbz r9,398(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 398);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,352
	ctx.r5.s64 = 352;
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r9,178(r30)
	PPC_STORE_U8(r30.u32 + 178, ctx.r9.u8);
	// lbz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 396);
	// rotlwi r9,r9,2
	ctx.r9.u64 = rotl32(ctx.r9.u32, 2);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 164, temp.u32);
	// lbz r9,397(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 397);
	// rotlwi r9,r9,2
	ctx.r9.u64 = rotl32(ctx.r9.u32, 2);
	// lfsx f0,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r31,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r31,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,172(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 172, temp.u32);
	// lhz r11,42(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// stb r11,179(r30)
	PPC_STORE_U8(r30.u32 + 179, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7BDC0) {
	__imp__sub_82D7BDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7aaa8
	sub_82D7AAA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7bdc0
	sub_82D7BDC0(ctx, base);
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r29,4
	r29.s64 = 4;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,512
	r11.s64 = 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d7b138
	sub_82D7B138(ctx, base);
	// li r11,18
	r11.s64 = 18;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// subf r9,r30,r31
	ctx.r9.s64 = r31.s64 - r30.s64;
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82D7BF84:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82d7bf84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D7BF84;
	// lwz r11,488(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(488) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7c034
	if (cr6.eq) goto loc_82D7C034;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// li r4,288
	ctx.r4.s64 = 288;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,288
	ctx.r10.s64 = 288;
	// addi r11,r11,-29276
	r11.s64 = r11.s64 + -29276;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// stw r3,488(r30)
	PPC_STORE_U32(r30.u32 + 488, ctx.r3.u32);
	// lwz r11,488(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(488) );
loc_82D7C000:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x82d7c000
	if (cr6.gt) goto loc_82D7C000;
loc_82D7C034:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x82d71a88
	sub_82D71A88(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D7BF18) {
	__imp__sub_82D7BF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29728
	r11.s64 = r11.s64 + -29728;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82d7d378
	sub_82D7D378(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7c0cc
	if (cr6.eq) goto loc_82D7C0CC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7C0CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C078) {
	__imp__sub_82D7C078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7c120
	if (cr6.eq) goto loc_82D7C120;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7c120
	if (cr6.eq) goto loc_82D7C120;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// bl 0x82d963f0
	sub_82D963F0(ctx, base);
loc_82D7C120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C0E8) {
	__imp__sub_82D7C0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,184(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(184) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7c144
	if (!cr6.eq) goto loc_82D7C144;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D7C144:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r11,r11,28,30,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C130) {
	__imp__sub_82D7C130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,184(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(184) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7c16c
	if (!cr6.eq) goto loc_82D7C16C;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D7C16C:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r11,r11,28,30,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C158) {
	__imp__sub_82D7C158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C180) {
	__imp__sub_82D7C180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C188) {
	__imp__sub_82D7C188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C190) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C190) {
	__imp__sub_82D7C190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(84) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d7c1e4
	if (cr6.eq) goto loc_82D7C1E4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lhz r9,80(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// rotlwi r5,r9,5
	ctx.r5.u64 = rotl32(ctx.r9.u32, 5);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	// sth r28,80(r29)
	PPC_STORE_U16(r29.u32 + 80, r28.u16);
	// stw r28,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r28.u32);
loc_82D7C1E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d7c2b8
	if (cr6.eq) goto loc_82D7C2B8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7c2b8
	if (cr6.eq) goto loc_82D7C2B8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(116) );
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7c230
	if (cr6.eq) goto loc_82D7C230;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d7c254
	goto loc_82D7C254;
loc_82D7C230:
	// rlwinm r11,r11,0,10,10
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7c2b8
	if (cr6.eq) goto loc_82D7C2B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,1
	r30.s64 = 1;
loc_82D7C254:
	// lbz r11,216(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82d7c26c
	if (cr6.eq) goto loc_82D7C26C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne cr6,0x82d7c270
	if (!cr6.eq) goto loc_82D7C270;
loc_82D7C26C:
	// li r11,1
	r11.s64 = 1;
loc_82D7C270:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d7c288
	if (cr6.eq) goto loc_82D7C288;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7c2b8
	if (!cr6.eq) goto loc_82D7C2B8;
loc_82D7C288:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r3,80(r29)
	PPC_STORE_U16(r29.u32 + 80, ctx.r3.u16);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// stw r3,84(r29)
	PPC_STORE_U32(r29.u32 + 84, ctx.r3.u32);
loc_82D7C2B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D7C198) {
	__imp__sub_82D7C198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(204) );
	// li r11,0
	r11.s64 = 0;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7c2f4
	if (!cr6.gt) goto loc_82D7C2F4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
loc_82D7C2D8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d7c2f8
	if (cr6.eq) goto loc_82D7C2F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7c2d8
	if (cr6.lt) goto loc_82D7C2D8;
loc_82D7C2F4:
	// li r11,-1
	r11.s64 = -1;
loc_82D7C2F8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C2C0) {
	__imp__sub_82D7C2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r9,500(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7c340
	if (!cr6.gt) goto loc_82D7C340;
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(496) );
loc_82D7C324:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d7c344
	if (cr6.eq) goto loc_82D7C344;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7c324
	if (cr6.lt) goto loc_82D7C324;
loc_82D7C340:
	// li r11,-1
	r11.s64 = -1;
loc_82D7C344:
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(496) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C310) {
	__imp__sub_82D7C310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(96) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7c390
	if (!cr6.gt) goto loc_82D7C390;
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(92) );
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r11,r7,4
	r11.s64 = ctx.r7.s64 + 4;
loc_82D7C374:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82d7c398
	if (cr6.eq) goto loc_82D7C398;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7c374
	if (cr6.lt) goto loc_82D7C374;
loc_82D7C390:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7C398:
	// rlwinm r11,r10,3,0,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C358) {
	__imp__sub_82D7C358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82d7c3d4
	if (!cr6.eq) goto loc_82D7C3D4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82d7c3dc
	goto loc_82D7C3DC;
loc_82D7C3D4:
	// lbz r11,40(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// rlwinm r11,r11,28,30,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
loc_82D7C3DC:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7c424
	if (!cr6.eq) goto loc_82D7C424;
	// lbz r11,216(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82d7c424
	if (cr6.eq) goto loc_82D7C424;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7c424
	if (cr6.eq) goto loc_82D7C424;
	// sth r10,218(r31)
	PPC_STORE_U16(r31.u32 + 218, ctx.r10.u16);
	// sth r10,220(r31)
	PPC_STORE_U16(r31.u32 + 220, ctx.r10.u16);
	// bl 0x82d90440
	sub_82D90440(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lbz r6,711(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 711);
	// lbz r5,710(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 710);
	// lbz r4,709(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 709);
	// bl 0x82688030
	sub_82688030(ctx, base);
loc_82D7C424:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C3A8) {
	__imp__sub_82D7C3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7c464
	if (!cr6.eq) goto loc_82D7C464;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d7c46c
	goto loc_82D7C46C;
loc_82D7C464:
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
loc_82D7C46C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7c524
	if (cr6.eq) goto loc_82D7C524;
	// lbz r11,39(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 39);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7c494
	if (!cr6.eq) goto loc_82D7C494;
	// rlwinm r11,r11,0,0,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7c4dc
	if (cr6.eq) goto loc_82D7C4DC;
loc_82D7C494:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,164(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(164) );
	// stw r9,164(r11)
	PPC_STORE_U32(r11.u32 + 164, ctx.r9.u32);
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 39);
	// andi. r9,r9,207
	ctx.r9.u64 = ctx.r9.u64 & 207;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r9,39(r11)
	PPC_STORE_U8(r11.u32 + 39, ctx.r9.u8);
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 39);
	// rlwimi r9,r10,6,0,25
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,39(r11)
	PPC_STORE_U8(r11.u32 + 39, ctx.r9.u8);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82d92f48
	sub_82D92F48(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,164(r11)
	PPC_STORE_U32(r11.u32 + 164, r30.u32);
loc_82D7C4DC:
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// li r11,0
	r11.s64 = 0;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d7c51c
	if (!cr6.gt) goto loc_82D7C51C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(76) );
	// lfs f0,3164(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3164);
	f0.f64 = double(temp.f32);
loc_82D7C4FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,460(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// stfs f0,476(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 476, temp.u32);
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7c4fc
	if (cr6.lt) goto loc_82D7C4FC;
loc_82D7C51C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82d90318
	sub_82D90318(ctx, base);
loc_82D7C524:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C438) {
	__imp__sub_82D7C438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7c58c
	if (cr6.eq) goto loc_82D7C58C;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7c58c
	if (cr6.eq) goto loc_82D7C58C;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82D7C58C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C540) {
	__imp__sub_82D7C540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7c5f4
	if (cr6.eq) goto loc_82D7C5F4;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7c5f4
	if (cr6.eq) goto loc_82D7C5F4;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82D7C5F4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d7c438
	sub_82D7C438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C5A8) {
	__imp__sub_82D7C5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,156(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(164) );
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C610) {
	__imp__sub_82D7C610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,156(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x82d7c644
	if (!cr6.lt) goto loc_82D7C644;
	// rlwinm r11,r4,1,0,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(152) );
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
loc_82D7C644:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(160) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C620) {
	__imp__sub_82D7C620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,156(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x82d7c67c
	if (!cr6.lt) goto loc_82D7C67C;
	// rlwinm r11,r4,1,0,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(152) );
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
loc_82D7C67C:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(160) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C658) {
	__imp__sub_82D7C658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,30388
	ctx.r4.s64 = r11.s64 + 30388;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d567e8
	sub_82D567E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,-28768
	ctx.r4.s64 = r11.s64 + -28768;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,502(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 502);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7c744
	if (!cr6.eq) goto loc_82D7C744;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lhz r7,500(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 500);
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwz r6,496(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(496) );
	// addi r4,r10,-28784
	ctx.r4.s64 = ctx.r10.s64 + -28784;
	// rotlwi r7,r7,2
	ctx.r7.u64 = rotl32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7C744:
	// lwz r6,204(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(204) );
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82d7c800
	if (cr6.eq) goto loc_82D7C800;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-28808
	ctx.r4.s64 = r11.s64 + -28808;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(204) );
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 14);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d7c7bc
	if (!cr6.eq) goto loc_82D7C7BC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r4,r9,-28824
	ctx.r4.s64 = ctx.r9.s64 + -28824;
	// rotlwi r7,r7,2
	ctx.r7.u64 = rotl32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7C7BC:
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(204) );
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d7c800
	if (!cr6.eq) goto loc_82D7C800;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r4,r9,-28844
	ctx.r4.s64 = ctx.r9.s64 + -28844;
	// rotlwi r7,r7,2
	ctx.r7.u64 = rotl32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7C800:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7a328
	sub_82D7A328(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r6,488(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(488) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-28856
	ctx.r4.s64 = r11.s64 + -28856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C690) {
	__imp__sub_82D7C690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,496
	r31.s64 = ctx.r3.s64 + 496;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7c8ac
	if (!cr6.gt) goto loc_82D7C8AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82D7C890:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d7c900
	if (cr6.eq) goto loc_82D7C900;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7c890
	if (cr6.lt) goto loc_82D7C890;
loc_82D7C8AC:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// clrlwi r11,r11,18
	r11.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82d7c8cc
	if (!cr6.eq) goto loc_82D7C8CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d54f78
	sub_82D54F78(ctx, base);
loc_82D7C8CC:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rotlwi r11,r11,2
	r11.u64 = rotl32(r11.u32, 2);
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
loc_82D7C8E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D7C900:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82d7c8ac
	if (cr6.lt) goto loc_82D7C8AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// b 0x82d7c8e8
	goto loc_82D7C8E8;
}

PPC_WEAK_FUNC(sub_82D7C860) {
	__imp__sub_82D7C860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d7a4c0
	sub_82D7A4C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// li r7,3
	ctx.r7.s64 = 3;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,2676(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2676);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r11,-28748
	ctx.r9.s64 = r11.s64 + -28748;
	// li r11,0
	r11.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = r11.u32 & 0xFFFF;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r9,r9,-29276
	ctx.r9.s64 = ctx.r9.s64 + -29276;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// sth r4,156(r31)
	PPC_STORE_U16(r31.u32 + 156, ctx.r4.u16);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r4,158(r31)
	PPC_STORE_U16(r31.u32 + 158, ctx.r4.u16);
	// rotlwi r4,r11,0
	ctx.r4.u64 = rotl32(r11.u32, 0);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// stw r8,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r8.u32);
	// stw r4,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r4.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// stw r8,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r8.u32);
	// stb r9,203(r31)
	PPC_STORE_U8(r31.u32 + 203, ctx.r9.u8);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// sth r11,200(r31)
	PPC_STORE_U16(r31.u32 + 200, r11.u16);
	// stb r7,202(r31)
	PPC_STORE_U8(r31.u32 + 202, ctx.r7.u8);
	// sth r9,214(r31)
	PPC_STORE_U16(r31.u32 + 214, ctx.r9.u16);
	// stw r11,488(r31)
	PPC_STORE_U32(r31.u32 + 488, r11.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r11.u32);
	// sth r11,500(r31)
	PPC_STORE_U16(r31.u32 + 500, r11.u16);
	// sth r10,502(r31)
	PPC_STORE_U16(r31.u32 + 502, ctx.r10.u16);
	// stw r11,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r11.u32);
	// sth r11,508(r31)
	PPC_STORE_U16(r31.u32 + 508, r11.u16);
	// sth r10,510(r31)
	PPC_STORE_U16(r31.u32 + 510, ctx.r10.u16);
	// sth r6,148(r31)
	PPC_STORE_U16(r31.u32 + 148, ctx.r6.u16);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r5,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r5.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stb r11,189(r31)
	PPC_STORE_U8(r31.u32 + 189, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C918) {
	__imp__sub_82D7C918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d7a438
	sub_82D7A438(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-28748
	ctx.r8.s64 = r11.s64 + -28748;
	// li r11,0
	r11.s64 = 0;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r31,208
	ctx.r10.s64 = r31.s64 + 208;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// addi r7,r8,-29276
	ctx.r7.s64 = ctx.r8.s64 + -29276;
	// sth r11,156(r31)
	PPC_STORE_U16(r31.u32 + 156, r11.u16);
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,158(r31)
	PPC_STORE_U16(r31.u32 + 158, ctx.r9.u16);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r6.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// stw r6,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r6.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// sth r11,200(r31)
	PPC_STORE_U16(r31.u32 + 200, r11.u16);
	// stb r5,202(r31)
	PPC_STORE_U8(r31.u32 + 202, ctx.r5.u8);
	// stb r8,203(r31)
	PPC_STORE_U8(r31.u32 + 203, ctx.r8.u8);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r11.u32);
	// sth r11,500(r31)
	PPC_STORE_U16(r31.u32 + 500, r11.u16);
	// sth r9,502(r31)
	PPC_STORE_U16(r31.u32 + 502, ctx.r9.u16);
	// stw r11,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r11.u32);
	// sth r11,508(r31)
	PPC_STORE_U16(r31.u32 + 508, r11.u16);
	// sth r9,510(r31)
	PPC_STORE_U16(r31.u32 + 510, ctx.r9.u16);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lbz r11,216(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82d7cbc8
	if (cr6.gt) goto loc_82D7CBC8;
	// lis r12,-32040
	r12.s64 = -2099773440;
	// addi r12,r12,-13564
	r12.s64 = r12.s64 + -13564;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82D7CB24;
	case 1:
		goto loc_82D7CB38;
	case 2:
		goto loc_82D7CB4C;
	case 3:
		goto loc_82D7CB60;
	case 4:
		goto loc_82D7CB74;
	case 5:
		goto loc_82D7CB88;
	case 6:
		goto loc_82D7CB9C;
	case 7:
		goto loc_82D7CBB0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-13532(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13532) );
	// lwz r22,-13512(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13512) );
	// lwz r22,-13492(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13492) );
	// lwz r22,-13472(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13472) );
	// lwz r22,-13452(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13452) );
	// lwz r22,-13432(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13432) );
	// lwz r22,-13412(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13412) );
	// lwz r22,-13392(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-13392) );
loc_82D7CB24:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29692
	r11.s64 = r11.s64 + -29692;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB38:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29588
	r11.s64 = r11.s64 + -29588;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB4C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29164
	r11.s64 = r11.s64 + -29164;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB60:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29060
	r11.s64 = r11.s64 + -29060;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB74:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,25548
	r11.s64 = r11.s64 + 25548;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB88:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,26196
	r11.s64 = r11.s64 + 26196;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB9C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-28956
	r11.s64 = r11.s64 + -28956;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CBB0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7cbc8
	if (cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29484
	r11.s64 = r11.s64 + -29484;
loc_82D7CBC0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
loc_82D7CBC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7CA30) {
	__imp__sub_82D7CA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(204) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7cc7c
	if (!cr6.eq) goto loc_82D7CC7C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7cc3c
	if (cr6.eq) goto loc_82D7CC3C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7cc48
	goto loc_82D7CC48;
loc_82D7CC3C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82D7CC48:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7cc74
	if (cr6.eq) goto loc_82D7CC74;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// sth r31,4(r11)
	PPC_STORE_U16(r11.u32 + 4, r31.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// sth r31,12(r11)
	PPC_STORE_U16(r11.u32 + 12, r31.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7cc78
	goto loc_82D7CC78;
loc_82D7CC74:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D7CC78:
	// stw r11,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r11.u32);
loc_82D7CC7C:
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(204) );
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7ccbc
	if (!cr6.gt) goto loc_82D7CCBC;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82D7CC9C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d7ccfc
	if (cr6.eq) goto loc_82D7CCFC;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82d7cc9c
	if (cr6.lt) goto loc_82D7CC9C;
loc_82D7CCBC:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// clrlwi r11,r11,18
	r11.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82d7ccd8
	if (!cr6.eq) goto loc_82D7CCD8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d54f78
	sub_82D54F78(ctx, base);
loc_82D7CCD8:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rotlwi r11,r11,2
	r11.u64 = rotl32(r11.u32, 2);
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82D7CCFC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82d7ccbc
	if (cr6.lt) goto loc_82D7CCBC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7CBE8) {
	__imp__sub_82D7CBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7cdac
	if (!cr6.eq) goto loc_82D7CDAC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7cd6c
	if (cr6.eq) goto loc_82D7CD6C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7cd78
	goto loc_82D7CD78;
loc_82D7CD6C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82D7CD78:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7cda4
	if (cr6.eq) goto loc_82D7CDA4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(r11.u32 + 4, r30.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// sth r30,12(r11)
	PPC_STORE_U16(r11.u32 + 12, r30.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7cda8
	goto loc_82D7CDA8;
loc_82D7CDA4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82D7CDA8:
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
loc_82D7CDAC:
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7cde0
	if (!cr6.gt) goto loc_82D7CDE0;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
loc_82D7CDC4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// beq cr6,0x82d7cde4
	if (cr6.eq) goto loc_82D7CDE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7cdc4
	if (cr6.lt) goto loc_82D7CDC4;
loc_82D7CDE0:
	// li r11,-1
	r11.s64 = -1;
loc_82D7CDE4:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7CD18) {
	__imp__sub_82D7CD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7ce8c
	if (!cr6.eq) goto loc_82D7CE8C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7ce4c
	if (cr6.eq) goto loc_82D7CE4C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7ce58
	goto loc_82D7CE58;
loc_82D7CE4C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82D7CE58:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7ce84
	if (cr6.eq) goto loc_82D7CE84;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(r11.u32 + 4, r30.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// sth r30,12(r11)
	PPC_STORE_U16(r11.u32 + 12, r30.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7ce88
	goto loc_82D7CE88;
loc_82D7CE84:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82D7CE88:
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
loc_82D7CE8C:
	// lwz r31,204(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82d7cec8
	if (!cr6.gt) goto loc_82D7CEC8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D7CEA8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d7cf08
	if (cr6.eq) goto loc_82D7CF08;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82d7cea8
	if (cr6.lt) goto loc_82D7CEA8;
loc_82D7CEC8:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// clrlwi r11,r11,18
	r11.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x82d7cee4
	if (!cr6.eq) goto loc_82D7CEE4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d54f78
	sub_82D54F78(ctx, base);
loc_82D7CEE4:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rotlwi r11,r11,2
	r11.u64 = rotl32(r11.u32, 2);
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82D7CF08:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82d7cec8
	if (cr6.lt) goto loc_82D7CEC8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7CDF8) {
	__imp__sub_82D7CDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// addi r31,r28,92
	r31.s64 = r28.s64 + 92;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7cf88
	if (!cr6.eq) goto loc_82D7CF88;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7cf74
	if (!cr6.eq) goto loc_82D7CF74;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7CF74:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwimi r11,r26,31,2,0
	r11.u64 = (rotl32(r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D7CF88:
	// lhz r11,156(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7cfe8
	if (!cr6.eq) goto loc_82D7CFE8;
	// addi r31,r28,152
	r31.s64 = r28.s64 + 152;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7cfd0
	if (!cr6.eq) goto loc_82D7CFD0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,18
	r11.u64 = r11.u32 & 0x3FFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7CFD0:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwinm r11,r11,0,17,17
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r27.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D7CFE8:
	// lwz r11,164(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(164) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7d038
	if (!cr6.eq) goto loc_82D7D038;
	// addi r31,r28,160
	r31.s64 = r28.s64 + 160;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7d024
	if (!cr6.eq) goto loc_82D7D024;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D024:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwimi r11,r26,31,2,0
	r11.u64 = (rotl32(r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D7D038:
	// lwz r11,176(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(176) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7d088
	if (!cr6.eq) goto loc_82D7D088;
	// addi r31,r28,172
	r31.s64 = r28.s64 + 172;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7d074
	if (!cr6.eq) goto loc_82D7D074;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D074:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwimi r11,r26,31,2,0
	r11.u64 = (rotl32(r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D7D088:
	// lhz r10,500(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 500);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7d0c8
	if (cr6.eq) goto loc_82D7D0C8;
	// lwz r10,496(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(496) );
loc_82D7D0A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d7d0c4
	if (!cr6.eq) goto loc_82D7D0C4;
	// lhz r8,500(r28)
	ctx.r8.u64 = PPC_LOAD_U16(r28.u32 + 500);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82d7d0a0
	if (cr6.lt) goto loc_82D7D0A0;
	// b 0x82d7d0c8
	goto loc_82D7D0C8;
loc_82D7D0C4:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82D7D0C8:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7d11c
	if (!cr6.eq) goto loc_82D7D11C;
	// addi r31,r28,496
	r31.s64 = r28.s64 + 496;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d104
	if (!cr6.eq) goto loc_82D7D104;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D104:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwinm r11,r11,0,17,17
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r27.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D7D11C:
	// lwz r31,204(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(204) );
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7d1b8
	if (cr6.eq) goto loc_82D7D1B8;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7d168
	if (cr6.eq) goto loc_82D7D168;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82D7D140:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d7d164
	if (!cr6.eq) goto loc_82D7D164;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7d140
	if (cr6.lt) goto loc_82D7D140;
	// b 0x82d7d168
	goto loc_82D7D168;
loc_82D7D164:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82D7D168:
	// extsb r11,r29
	r11.s64 = r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7d1b8
	if (!cr6.eq) goto loc_82D7D1B8;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d1a0
	if (!cr6.eq) goto loc_82D7D1A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D1A0:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwinm r11,r11,0,17,17
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r27.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D7D1B8:
	// lwz r11,204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(204) );
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7d258
	if (cr6.eq) goto loc_82D7D258;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7d208
	if (cr6.eq) goto loc_82D7D208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82D7D1E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d7d204
	if (!cr6.eq) goto loc_82D7D204;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7d1e0
	if (cr6.lt) goto loc_82D7D1E0;
	// b 0x82d7d208
	goto loc_82D7D208;
loc_82D7D204:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82D7D208:
	// extsb r11,r30
	r11.s64 = r30.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7d258
	if (!cr6.eq) goto loc_82D7D258;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d240
	if (!cr6.eq) goto loc_82D7D240;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D240:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwinm r11,r11,0,17,17
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r27.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D7D258:
	// extsb r11,r29
	r11.s64 = r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7d31c
	if (!cr6.eq) goto loc_82D7D31C;
	// extsb r11,r30
	r11.s64 = r30.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d7d31c
	if (!cr6.eq) goto loc_82D7D31C;
	// lwz r31,204(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(204) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7d318
	if (cr6.eq) goto loc_82D7D318;
	// lhz r11,14(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d2a8
	if (!cr6.eq) goto loc_82D7D2A8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D2A8:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d2d4
	if (!cr6.eq) goto loc_82D7D2D4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D2D4:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d7d300
	if (cr6.lt) goto loc_82D7D300;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82d7d318
	goto loc_82D7D318;
loc_82D7D300:
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(76) );
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r31.u32);
loc_82D7D318:
	// stw r27,204(r28)
	PPC_STORE_U32(r28.u32 + 204, r27.u32);
loc_82D7D31C:
	// lhz r11,508(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 508);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d7d370
	if (!cr6.eq) goto loc_82D7D370;
	// addi r31,r28,504
	r31.s64 = r28.s64 + 504;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d358
	if (!cr6.eq) goto loc_82D7D358;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D358:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwinm r11,r11,0,17,17
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r27.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D7D370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D7CF20) {
	__imp__sub_82D7CF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-28748
	r11.s64 = r11.s64 + -28748;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82d8d718
	sub_82D8D718(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7d3b0
	if (cr6.eq) goto loc_82D7D3B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d7d608
	sub_82D7D608(ctx, base);
loc_82D7D3B0:
	// lhz r11,510(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 510);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d3dc
	if (!cr6.eq) goto loc_82D7D3DC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(504) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D3DC:
	// lhz r11,502(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 502);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d408
	if (!cr6.eq) goto loc_82D7D408;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(496) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D408:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82d95bf8
	sub_82D95BF8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7d43c
	if (!cr6.eq) goto loc_82D7D43C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D43C:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7d468
	if (!cr6.eq) goto loc_82D7D468;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(160) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D468:
	// lhz r11,158(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 158);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d4a0
	if (!cr6.eq) goto loc_82D7D4A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,18
	r11.u64 = r11.u32 & 0x3FFF;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D4A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7a5a0
	sub_82D7A5A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D378) {
	__imp__sub_82D7D378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d95bf8
	sub_82D95BF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7d508
	if (cr6.eq) goto loc_82D7D508;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,45
	ctx.r6.s64 = 45;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D508:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D4C0) {
	__imp__sub_82D7D4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d7d570
	if (cr6.eq) goto loc_82D7D570;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,45
	ctx.r6.s64 = 45;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D570:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D528) {
	__imp__sub_82D7D528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,14(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d5c8
	if (!cr6.eq) goto loc_82D7D5C8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D5C8:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7d5f4
	if (!cr6.eq) goto loc_82D7D5F4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D5F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D588) {
	__imp__sub_82D7D588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d7d588
	sub_82D7D588(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7d684
	if (cr6.eq) goto loc_82D7D684;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7d684
	if (cr6.eq) goto loc_82D7D684;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d7d66c
	if (cr6.lt) goto loc_82D7D66C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82d7d684
	goto loc_82D7D684;
loc_82D7D66C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(r11.u32 + 72, r31.u32);
loc_82D7D684:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D608) {
	__imp__sub_82D7D608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d7d378
	sub_82D7D378(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7d6e8
	if (cr6.eq) goto loc_82D7D6E8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7D6E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D6A0) {
	__imp__sub_82D7D6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lis r29,-32256
	r29.s64 = -2113929216;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r30,32
	r30.s64 = 32;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// li r28,80
	r28.s64 = 80;
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lfs f0,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// li r8,144
	ctx.r8.s64 = 144;
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r11,r30
	ea = (r11.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D7D708) {
	__imp__sub_82D7D708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D890) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,298
	ctx.r4.s64 = 298;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D7D890) {
	__imp__sub_82D7D890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,12
	r11.s64 = 12;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D8A0) {
	__imp__sub_82D7D8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D8B8) {
	__imp__sub_82D7D8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f31.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// beq cr6,0x82d7d944
	if (cr6.eq) goto loc_82D7D944;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d7d948
	if (!cr6.eq) goto loc_82D7D948;
loc_82D7D944:
	// li r11,0
	r11.s64 = 0;
loc_82D7D948:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7d970
	if (cr6.eq) goto loc_82D7D970;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f13,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1828(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1828);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82d7d974
	if (cr6.eq) goto loc_82D7D974;
loc_82D7D970:
	// li r11,0
	r11.s64 = 0;
loc_82D7D974:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7d99c
	if (cr6.eq) goto loc_82D7D99C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d7d9a0
	if (!cr6.lt) goto loc_82D7D9A0;
loc_82D7D99C:
	// li r11,0
	r11.s64 = 0;
loc_82D7D9A0:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7d9c8
	if (cr6.eq) goto loc_82D7D9C8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82d7d9cc
	if (cr6.lt) goto loc_82D7D9CC;
loc_82D7D9C8:
	// li r11,0
	r11.s64 = 0;
loc_82D7D9CC:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7d9f0
	if (cr6.eq) goto loc_82D7D9F0;
	// lfs f0,300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 300);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82d7d9f4
	if (!cr6.gt) goto loc_82D7D9F4;
loc_82D7D9F0:
	// li r11,0
	r11.s64 = 0;
loc_82D7D9F4:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d7da18
	if (cr6.eq) goto loc_82D7DA18;
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,264(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82d7da1c
	if (!cr6.gt) goto loc_82D7DA1C;
loc_82D7DA18:
	// li r11,0
	r11.s64 = 0;
loc_82D7DA1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D8C0) {
	__imp__sub_82D7D8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DA40) {
	__imp__sub_82D7DA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DA68) {
	__imp__sub_82D7DA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r4,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DA90) {
	__imp__sub_82D7DA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAB8) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// b 0x82d593b8
	sub_82D593B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DAB8) {
	__imp__sub_82D7DAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DAC8) {
	__imp__sub_82D7DAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(224) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DAF0) {
	__imp__sub_82D7DAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d7db2c
	if (cr6.eq) goto loc_82D7DB2C;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7db2c
	if (cr6.eq) goto loc_82D7DB2C;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r11.u16);
loc_82D7DB2C:
	// addi r11,r4,56
	r11.s64 = ctx.r4.s64 + 56;
	// rlwinm r31,r11,2,0,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7db78
	if (cr6.eq) goto loc_82D7DB78;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7db78
	if (cr6.eq) goto loc_82D7DB78;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82d7db78
	if (!cr6.eq) goto loc_82D7DB78;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7DB78:
	// stwx r30,r31,r29
	PPC_STORE_U32(r31.u32 + r29.u32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7DAF8) {
	__imp__sub_82D7DAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DB88) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DB88) {
	__imp__sub_82D7DB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(232) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DB98) {
	__imp__sub_82D7DB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBA0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DBA0) {
	__imp__sub_82D7DBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(228) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DBB0) {
	__imp__sub_82D7DBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBB8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DBB8) {
	__imp__sub_82D7DBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,162(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 162);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DBC8) {
	__imp__sub_82D7DBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DBD8) {
	__imp__sub_82D7DBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r28,16
	r28.s64 = 16;
	// vmsum3fp128 v9,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v13,v13
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r29,32
	r29.s64 = 32;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v11,r4,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + r28.u32) & ~0xF), VectorMaskL));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r11,2
	r11.s64 = 2;
	// lvx128 v10,r4,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// stvx128 v9,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v8), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vspltw v9,v9,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// lvx128 v8,r0,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vspltw v8,v8,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v13,v13,v8
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vpermwi128 v8,v0,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v9,v13,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v9,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r8,r8,16896
	ctx.r8.s64 = ctx.r8.s64 + 16896;
loc_82D7DCBC:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// vmrghw v13,v9,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v8.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d7dcbc
	if (!cr6.lt) goto loc_82D7DCBC;
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r11,2
	r11.s64 = 2;
	// lvx128 v11,r30,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r30,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + r29.u32) & ~0xF), VectorMaskL));
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
loc_82D7DD0C:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// vmrghw v13,v9,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v8.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d7dd0c
	if (!cr6.lt) goto loc_82D7DD0C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D7DBE0) {
	__imp__sub_82D7DBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,96
	r31.s64 = r30.s64 + 96;
	// lfs f29,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f29.f64 = double(temp.f32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fadds f0,f31,f30
	f0.f64 = double(float(f31.f64 + f30.f64));
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x82d506f8
	sub_82D506F8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v13,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f30.f64 - f31.f64);
	// vpermwi128 v6,v13,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmsum3fp128 v8,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// addi r11,r11,17024
	r11.s64 = r11.s64 + 17024;
	// vpermwi128 v10,v0,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vmulfp128 v10,v10,v7
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 * f29.f64));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v9,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmaddfp v11,v12,v12,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// li r11,32
	r11.s64 = 32;
	// vspltw v8,v8,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v0,v8,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v10,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r31,r11
	ea = (r31.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,284(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 284, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7DD88) {
	__imp__sub_82D7DD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-28700
	r11.s64 = r11.s64 + -28700;
	// addi r31,r29,224
	r31.s64 = r29.s64 + 224;
	// li r30,3
	r30.s64 = 3;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82D7DE9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7dee0
	if (cr6.eq) goto loc_82D7DEE0;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7dee0
	if (cr6.eq) goto loc_82D7DEE0;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82d7dee0
	if (!cr6.eq) goto loc_82D7DEE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7DEE0:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82d7de9c
	if (!cr6.eq) goto loc_82D7DE9C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D7DE78) {
	__imp__sub_82D7DE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,242(r3)
	PPC_STORE_U8(ctx.r3.u32 + 242, r11.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(40) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DF08) {
	__imp__sub_82D7DF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,19
	r31.s64 = 19;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// addi r7,r10,-28700
	ctx.r7.s64 = ctx.r10.s64 + -28700;
	// lfs f0,3080(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// li r30,17
	r30.s64 = 17;
	// li r29,15
	r29.s64 = 15;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,5
	r28.s64 = 5;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r7,r3,96
	ctx.r7.s64 = ctx.r3.s64 + 96;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r5,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r5.u16);
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
	// sth r31,144(r11)
	PPC_STORE_U16(r11.u32 + 144, r31.u16);
	// li r31,96
	r31.s64 = 96;
	// stb r9,146(r11)
	PPC_STORE_U8(r11.u32 + 146, ctx.r9.u8);
	// sth r10,148(r11)
	PPC_STORE_U16(r11.u32 + 148, ctx.r10.u16);
	// sth r10,150(r11)
	PPC_STORE_U16(r11.u32 + 150, ctx.r10.u16);
	// sth r30,224(r11)
	PPC_STORE_U16(r11.u32 + 224, r30.u16);
	// li r30,100
	r30.s64 = 100;
	// stb r9,226(r11)
	PPC_STORE_U8(r11.u32 + 226, ctx.r9.u8);
	// stb r9,228(r11)
	PPC_STORE_U8(r11.u32 + 228, ctx.r9.u8);
	// sth r29,236(r11)
	PPC_STORE_U16(r11.u32 + 236, r29.u16);
	// stb r9,238(r11)
	PPC_STORE_U8(r11.u32 + 238, ctx.r9.u8);
	// sth r6,256(r11)
	PPC_STORE_U16(r11.u32 + 256, ctx.r6.u16);
	// stb r9,258(r11)
	PPC_STORE_U8(r11.u32 + 258, ctx.r9.u8);
	// stb r10,262(r11)
	PPC_STORE_U8(r11.u32 + 262, ctx.r10.u8);
	// sth r6,276(r11)
	PPC_STORE_U16(r11.u32 + 276, ctx.r6.u16);
	// stb r9,278(r11)
	PPC_STORE_U8(r11.u32 + 278, ctx.r9.u8);
	// stb r10,282(r11)
	PPC_STORE_U8(r11.u32 + 282, ctx.r10.u8);
	// sth r28,296(r11)
	PPC_STORE_U16(r11.u32 + 296, r28.u16);
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// stvx128 v0,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// addi r8,r7,48
	ctx.r8.s64 = ctx.r7.s64 + 48;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,40(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lfs f12,3084(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// li r5,3
	ctx.r5.s64 = 3;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfs f11,-28644(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28644);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r10,243(r3)
	PPC_STORE_U8(ctx.r3.u32 + 243, ctx.r10.u8);
	// lfs f10,-28648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28648);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,2860(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2860);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f9,1828(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1828);
	ctx.f9.f64 = double(temp.f32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stfs f12,248(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stb r5,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r5.u8);
	// stb r10,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r10.u8);
	// sth r31,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, r31.u16);
	// sth r30,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, r30.u16);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f0,284(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// stfs f11,260(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stfs f10,264(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stfs f13,268(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stb r10,255(r3)
	PPC_STORE_U8(ctx.r3.u32 + 255, ctx.r10.u8);
	// lfs f0,-28652(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28652);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f9,280(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stb r9,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r9.u8);
	// stfs f13,288(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stb r10,275(r3)
	PPC_STORE_U8(ctx.r3.u32 + 275, ctx.r10.u8);
	// stfs f0,300(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stb r10,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, ctx.r10.u8);
	// stfs f13,308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stb r10,277(r3)
	PPC_STORE_U8(ctx.r3.u32 + 277, ctx.r10.u8);
	// lfs f12,3176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3176);
	ctx.f12.f64 = double(temp.f32);
	// stb r7,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r7.u8);
	// stfs f12,304(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stb r10,295(r3)
	PPC_STORE_U8(ctx.r3.u32 + 295, ctx.r10.u8);
	// stb r9,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r9.u8);
	// stb r9,297(r3)
	PPC_STORE_U8(ctx.r3.u32 + 297, ctx.r9.u8);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D7DF78) {
	__imp__sub_82D7DF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d7de78
	sub_82D7DE78(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7e1a0
	if (cr6.eq) goto loc_82D7E1A0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E1A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E158) {
	__imp__sub_82D7E158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E1C0) {
	__imp__sub_82D7E1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E1C8) {
	__imp__sub_82D7E1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E1E0) {
	__imp__sub_82D7E1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-28552
	r11.s64 = r11.s64 + -28552;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E1E8) {
	__imp__sub_82D7E1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-28552
	ctx.r3.s64 = r11.s64 + -28552;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E208) {
	__imp__sub_82D7E208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E218) {
	__imp__sub_82D7E218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82d97b60
	sub_82D97B60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E220) {
	__imp__sub_82D7E220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E230) {
	__imp__sub_82D7E230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E238) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d7e240
	sub_82D7E240(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E238) {
	__imp__sub_82D7E238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7e280
	if (!cr6.eq) goto loc_82D7E280;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E280:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7e2ac
	if (!cr6.eq) goto loc_82D7E2AC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E2AC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7e2d8
	if (!cr6.eq) goto loc_82D7E2D8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E2D8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d7e304
	if (!cr6.eq) goto loc_82D7E304;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E304:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E240) {
	__imp__sub_82D7E240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E318) {
	__imp__sub_82D7E318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27820
	r11.s64 = r11.s64 + -27820;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E330) {
	__imp__sub_82D7E330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-27820
	ctx.r3.s64 = r11.s64 + -27820;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E350) {
	__imp__sub_82D7E350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E360) {
	__imp__sub_82D7E360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E368) {
	__imp__sub_82D7E368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E380) {
	__imp__sub_82D7E380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27612
	r11.s64 = r11.s64 + -27612;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E388) {
	__imp__sub_82D7E388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-27612
	ctx.r3.s64 = r11.s64 + -27612;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E3A8) {
	__imp__sub_82D7E3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d7e400
	if (cr6.eq) goto loc_82D7E400;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E3B8) {
	__imp__sub_82D7E3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E418) {
	__imp__sub_82D7E418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82d984b0
	sub_82D984B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E420) {
	__imp__sub_82D7E420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E430) {
	__imp__sub_82D7E430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E438) {
	__imp__sub_82D7E438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d984b0
	sub_82D984B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E450) {
	__imp__sub_82D7E450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E480) {
	__imp__sub_82D7E480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E488) {
	__imp__sub_82D7E488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4A0) {
	__imp__sub_82D7E4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-26700
	r11.s64 = r11.s64 + -26700;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4A8) {
	__imp__sub_82D7E4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-26700
	ctx.r3.s64 = r11.s64 + -26700;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4C8) {
	__imp__sub_82D7E4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4D8) {
	__imp__sub_82D7E4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E4E0) {
	__imp__sub_82D7E4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4F8) {
	__imp__sub_82D7E4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-26284
	r11.s64 = r11.s64 + -26284;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E500) {
	__imp__sub_82D7E500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-26284
	ctx.r3.s64 = r11.s64 + -26284;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E520) {
	__imp__sub_82D7E520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d996e8
	sub_82D996E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7e578
	if (cr6.eq) goto loc_82D7E578;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E530) {
	__imp__sub_82D7E530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E598) {
	__imp__sub_82D7E598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E5A0) {
	__imp__sub_82D7E5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5B8) {
	__imp__sub_82D7E5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25932
	r11.s64 = r11.s64 + -25932;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5C0) {
	__imp__sub_82D7E5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-25932
	ctx.r3.s64 = r11.s64 + -25932;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5E0) {
	__imp__sub_82D7E5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d85040
	sub_82D85040(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7e638
	if (cr6.eq) goto loc_82D7E638;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E638:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5F0) {
	__imp__sub_82D7E5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E658) {
	__imp__sub_82D7E658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E660) {
	__imp__sub_82D7E660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E678) {
	__imp__sub_82D7E678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25716
	r11.s64 = r11.s64 + -25716;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E680) {
	__imp__sub_82D7E680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-25716
	ctx.r3.s64 = r11.s64 + -25716;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6A0) {
	__imp__sub_82D7E6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6B0) {
	__imp__sub_82D7E6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6B8) {
	__imp__sub_82D7E6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E6C0) {
	__imp__sub_82D7E6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6D8) {
	__imp__sub_82D7E6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lbz r9,278(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 278);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-28700
	r11.s64 = r11.s64 + -28700;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,56
	r11.s64 = 56;
	// stb r11,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6E0) {
	__imp__sub_82D7E6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-28700
	ctx.r3.s64 = r11.s64 + -28700;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E718) {
	__imp__sub_82D7E718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E728) {
	__imp__sub_82D7E728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E730) {
	__imp__sub_82D7E730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E748) {
	__imp__sub_82D7E748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lbz r9,154(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24740
	r11.s64 = r11.s64 + -24740;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,16
	r11.s64 = 16;
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E750) {
	__imp__sub_82D7E750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-24740
	ctx.r3.s64 = r11.s64 + -24740;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E788) {
	__imp__sub_82D7E788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E798) {
	__imp__sub_82D7E798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d7e7e0
	if (cr6.eq) goto loc_82D7E7E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d7ca30
	sub_82D7CA30(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-29728
	r11.s64 = r11.s64 + -29728;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82D7E7E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E7B0) {
	__imp__sub_82D7E7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ca30
	sub_82D7CA30(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-29728
	ctx.r3.s64 = r11.s64 + -29728;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E7F8) {
	__imp__sub_82D7E7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E828) {
	__imp__sub_82D7E828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E830) {
	__imp__sub_82D7E830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E848) {
	__imp__sub_82D7E848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24564
	r11.s64 = r11.s64 + -24564;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E850) {
	__imp__sub_82D7E850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-24564
	ctx.r3.s64 = r11.s64 + -24564;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E870) {
	__imp__sub_82D7E870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E880) {
	__imp__sub_82D7E880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E888) {
	__imp__sub_82D7E888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E890) {
	__imp__sub_82D7E890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E898) {
	__imp__sub_82D7E898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82d7e8f8
	sub_82D7E8F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E8B0) {
	__imp__sub_82D7E8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E8C0) {
	__imp__sub_82D7E8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e8f8
	sub_82D7E8F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E8C8) {
	__imp__sub_82D7E8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d7a438
	sub_82D7A438(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,19580
	ctx.r9.s64 = r11.s64 + 19580;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E8F8) {
	__imp__sub_82D7E8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E960) {
	__imp__sub_82D7E960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23716
	r11.s64 = r11.s64 + -23716;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E978) {
	__imp__sub_82D7E978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-23716
	ctx.r3.s64 = r11.s64 + -23716;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E998) {
	__imp__sub_82D7E998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d87c18
	sub_82D87C18(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7e9f0
	if (cr6.eq) goto loc_82D7E9F0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,20
	ctx.r6.s64 = 20;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7E9F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E9A8) {
	__imp__sub_82D7E9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA10) {
	__imp__sub_82D7EA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EA18) {
	__imp__sub_82D7EA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23124
	r11.s64 = r11.s64 + -23124;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA30) {
	__imp__sub_82D7EA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-23124
	ctx.r3.s64 = r11.s64 + -23124;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA50) {
	__imp__sub_82D7EA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d7eaa8
	if (cr6.eq) goto loc_82D7EAA8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,42
	ctx.r6.s64 = 42;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7EAA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA60) {
	__imp__sub_82D7EA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EAC0) {
	__imp__sub_82D7EAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29692
	r11.s64 = r11.s64 + -29692;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EAD8) {
	__imp__sub_82D7EAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-29692
	ctx.r3.s64 = r11.s64 + -29692;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EAF8) {
	__imp__sub_82D7EAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EB08) {
	__imp__sub_82D7EB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22928
	r11.s64 = r11.s64 + -22928;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB20) {
	__imp__sub_82D7EB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-22928
	ctx.r3.s64 = r11.s64 + -22928;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB40) {
	__imp__sub_82D7EB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EB50) {
	__imp__sub_82D7EB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29060
	r11.s64 = r11.s64 + -29060;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB68) {
	__imp__sub_82D7EB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-29060
	ctx.r3.s64 = r11.s64 + -29060;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB88) {
	__imp__sub_82D7EB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EB98) {
	__imp__sub_82D7EB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29588
	r11.s64 = r11.s64 + -29588;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EBB0) {
	__imp__sub_82D7EBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-29588
	ctx.r3.s64 = r11.s64 + -29588;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EBD0) {
	__imp__sub_82D7EBD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EBE0) {
	__imp__sub_82D7EBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82d7ec40
	sub_82D7EC40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7EBF8) {
	__imp__sub_82D7EBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EC08) {
	__imp__sub_82D7EC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ec40
	sub_82D7EC40(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EC10) {
	__imp__sub_82D7EC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d7a438
	sub_82D7A438(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,-22744
	ctx.r9.s64 = r11.s64 + -22744;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EC40) {
	__imp__sub_82D7EC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ECA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d9ac20
	sub_82D9AC20(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d7ecf0
	if (cr6.eq) goto loc_82D7ECF0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,48
	ctx.r6.s64 = 48;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D7ECF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ECA8) {
	__imp__sub_82D7ECA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ED10) {
	__imp__sub_82D7ED10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82d85388
	sub_82D85388(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7ED18) {
	__imp__sub_82D7ED18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ED28) {
	__imp__sub_82D7ED28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7ED30) {
	__imp__sub_82D7ED30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85388
	sub_82D85388(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ED48) {
	__imp__sub_82D7ED48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ED78) {
	__imp__sub_82D7ED78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7ED80) {
	__imp__sub_82D7ED80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ED98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ED98) {
	__imp__sub_82D7ED98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22316
	r11.s64 = r11.s64 + -22316;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EDA0) {
	__imp__sub_82D7EDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-22316
	ctx.r3.s64 = r11.s64 + -22316;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EDC0) {
	__imp__sub_82D7EDC0(ctx, base);
}

