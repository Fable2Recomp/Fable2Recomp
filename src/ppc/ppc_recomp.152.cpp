#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82E49AD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,23824
	r11.s64 = r11.s64 + 23824;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82e49b30
	if (cr6.eq) goto loc_82E49B30;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e49b30
	if (cr6.eq) goto loc_82E49B30;
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
	// bne cr6,0x82e49b30
	if (!cr6.eq) goto loc_82E49B30;
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
loc_82E49B30:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e49b98
	if (!cr6.gt) goto loc_82E49B98;
	// li r30,0
	r30.s64 = 0;
loc_82E49B44:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e49b84
	if (cr6.eq) goto loc_82E49B84;
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
	// bne cr6,0x82e49b84
	if (!cr6.eq) goto loc_82E49B84;
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
loc_82E49B84:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e49b44
	if (cr6.lt) goto loc_82E49B44;
loc_82E49B98:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e49bc4
	if (!cr6.eq) goto loc_82E49BC4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E49BC4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E49AD0) {
	__imp__sub_82E49AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E49BD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e49c24
	if (!cr6.eq) goto loc_82E49C24;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,192
	ctx.r4.s64 = 192;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,192
	r11.s64 = 192;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d7f708
	sub_82D7F708(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82E49C24:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82d72e20
	sub_82D72E20(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d75f10
	sub_82D75F10(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e49cd0
	if (cr6.eq) goto loc_82E49CD0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,80
	r11.s64 = 80;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82e4a3d0
	sub_82E4A3D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82e51b10
	sub_82E51B10(ctx, base);
	// stb r29,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r29.u8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e49cb4
	if (!cr6.eq) goto loc_82E49CB4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E49CB4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E49CD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E49BD8) {
	__imp__sub_82E49BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E49CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	// bl 0x82ca2bb0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,0(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r14,4
	r14.s64 = 4;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r24.u32);
	// lwzx r3,r14,r23
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r23.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r26,68
	r26.s64 = 68;
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// bl 0x82d7ff58
	sub_82D7FF58(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r28,0
	r28.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e49d58
	if (!cr6.gt) goto loc_82E49D58;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82E49D34:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82d804d8
	sub_82D804D8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e49d34
	if (cr6.lt) goto loc_82E49D34;
loc_82E49D58:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e49d90
	if (!cr6.gt) goto loc_82E49D90;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82E49D6C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82d80678
	sub_82D80678(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e49d6c
	if (cr6.lt) goto loc_82E49D6C;
loc_82E49D90:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e49dc8
	if (!cr6.gt) goto loc_82E49DC8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82E49DA4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82d805e8
	sub_82D805E8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e49da4
	if (cr6.lt) goto loc_82E49DA4;
loc_82E49DC8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e49e00
	if (!cr6.gt) goto loc_82E49E00;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82E49DDC:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82d80560
	sub_82D80560(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e49ddc
	if (cr6.lt) goto loc_82E49DDC;
loc_82E49E00:
	// li r5,46
	ctx.r5.s64 = 46;
	// lwzx r3,r14,r23
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r23.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r27,r25,8
	r27.s64 = r25.s64 + 8;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// bl 0x82d7ff58
	sub_82D7FF58(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,29108
	r11.s64 = r11.s64 + 29108;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(60) );
	// stb r28,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r28.u8);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e49e8c
	if (!cr6.gt) goto loc_82E49E8C;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82E49E4C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lbz r11,216(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82e49e78
	if (!cr6.eq) goto loc_82E49E78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d804d8
	sub_82D804D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82d7fd78
	sub_82D7FD78(ctx, base);
	// b 0x82e49e80
	goto loc_82E49E80;
loc_82E49E78:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_82E49E80:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e49e4c
	if (cr6.lt) goto loc_82E49E4C;
loc_82E49E8C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e49ea0
	if (cr6.eq) goto loc_82E49EA0;
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// b 0x82e49ebc
	goto loc_82E49EBC;
loc_82E49EA0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r28.u32);
loc_82E49EBC:
	// li r5,46
	ctx.r5.s64 = 46;
	// lwzx r3,r14,r23
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r23.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// bl 0x82d7ff58
	sub_82D7FF58(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,46
	ctx.r5.s64 = 46;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r11,r11,29080
	r11.s64 = r11.s64 + 29080;
	// li r4,68
	ctx.r4.s64 = 68;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(60) );
	// stb r28,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r28.u8);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// lwzx r3,r14,r23
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r23.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// bl 0x82d7ff58
	sub_82D7FF58(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r18,r25,20
	r18.s64 = r25.s64 + 20;
	// addi r11,r11,29056
	r11.s64 = r11.s64 + 29056;
	// addi r19,r25,32
	r19.s64 = r25.s64 + 32;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(60) );
	// stb r28,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r28.u8);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4a2bc
	if (!cr6.gt) goto loc_82E4A2BC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r16,-32768
	r16.s64 = -2147483648;
	// addi r11,r11,29036
	r11.s64 = r11.s64 + 29036;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82E49F48:
	// li r5,46
	ctx.r5.s64 = 46;
	// lwzx r3,r14,r23
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r23.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,68
	r11.s64 = 68;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d7ff58
	sub_82D7FF58(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r11.u32);
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(60) );
	// stw r11,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d7c158
	sub_82D7C158(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,64(r29)
	PPC_STORE_U8(r29.u32 + 64, r11.u8);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d804d8
	sub_82D804D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82d7fd78
	sub_82D7FD78(ctx, base);
loc_82E49FB0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// mr r20,r28
	r20.u64 = r28.u64;
	// mr r15,r28
	r15.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4a1b4
	if (!cr6.gt) goto loc_82E4A1B4;
	// mr r17,r28
	r17.u64 = r28.u64;
loc_82E49FC8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r21,r11,r17
	r21.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// ble cr6,0x82e4a06c
	if (!cr6.gt) goto loc_82E4A06C;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82E49FE4:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// beq cr6,0x82e4a010
	if (cr6.eq) goto loc_82E4A010;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// beq cr6,0x82e4a010
	if (cr6.eq) goto loc_82E4A010;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x82e4a060
	goto loc_82E4A060;
loc_82E4A010:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r20,1
	r20.s64 = 1;
	// bl 0x82d805e8
	sub_82D805E8(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// xor r5,r11,r21
	ctx.r5.u64 = r11.u64 ^ r21.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e4a054
	if (cr6.eq) goto loc_82E4A054;
	// lbz r11,216(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82e4a054
	if (cr6.eq) goto loc_82E4A054;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e49890
	sub_82E49890(ctx, base);
loc_82E4A054:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82d7fe38
	sub_82D7FE38(ctx, base);
loc_82E4A060:
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e49fe4
	if (cr6.lt) goto loc_82E49FE4;
loc_82E4A06C:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// mr r24,r28
	r24.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4a1a0
	if (!cr6.gt) goto loc_82E4A1A0;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_82E4A080:
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r16.u32);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r27,r28
	r27.u64 = r28.u64;
	// mr r22,r28
	r22.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4a160
	if (!cr6.gt) goto loc_82E4A160;
	// mr r23,r28
	r23.u64 = r28.u64;
loc_82E4A0C4:
	// lwzx r10,r23,r4
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, xer);
	// bne cr6,0x82e4a14c
	if (!cr6.eq) goto loc_82E4A14C;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r20,1
	r20.s64 = 1;
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// bl 0x82d80678
	sub_82D80678(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82d7fec8
	sub_82D7FEC8(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r27,1
	r27.s64 = 1;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4a14c
	if (!cr6.gt) goto loc_82E4A14C;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82E4A10C:
	// lwzx r10,r31,r4
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, xer);
	// beq cr6,0x82e4a13c
	if (cr6.eq) goto loc_82E4A13C;
	// rotlwi r5,r10,0
	ctx.r5.u64 = rotl32(ctx.r10.u32, 0);
	// lbz r10,216(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 216);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x82e4a13c
	if (cr6.eq) goto loc_82E4A13C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e49890
	sub_82E49890(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
loc_82E4A13C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e4a10c
	if (cr6.lt) goto loc_82E4A10C;
loc_82E4A14C:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82e4a0c4
	if (cr6.lt) goto loc_82E4A0C4;
	// lwz r23,96(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
loc_82E4A160:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e4a174
	if (!cr6.eq) goto loc_82E4A174;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
loc_82E4A174:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4a194
	if (!cr6.eq) goto loc_82E4A194;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r14,r23
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r23.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4A194:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x82e4a080
	if (cr6.lt) goto loc_82E4A080;
loc_82E4A1A0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// cmpw cr6,r15,r11
	cr6.compare<int32_t>(r15.s32, r11.s32, xer);
	// blt cr6,0x82e49fc8
	if (cr6.lt) goto loc_82E49FC8;
loc_82E4A1B4:
	// clrlwi r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e49fb0
	if (!cr6.eq) goto loc_82E49FB0;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4a268
	if (!cr6.eq) goto loc_82E4A268;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4a268
	if (!cr6.eq) goto loc_82E4A268;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(184) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e4a208
	if (cr6.eq) goto loc_82E4A208;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82d7c158
	sub_82D7C158(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4a20c
	if (cr6.eq) goto loc_82E4A20C;
loc_82E4A208:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82E4A20C:
	// lbz r11,216(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82e4a220
	if (cr6.eq) goto loc_82E4A220;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
loc_82E4A220:
	// lbz r11,64(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e4a23c
	if (!cr6.eq) goto loc_82E4A23C;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq cr6,0x82e4a240
	if (cr6.eq) goto loc_82E4A240;
loc_82E4A23C:
	// li r11,1
	r11.s64 = 1;
loc_82E4A240:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// bl 0x82d804d8
	sub_82D804D8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e4a2ac
	goto loc_82E4A2AC;
loc_82E4A268:
	// lwz r11,300(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4a290
	if (!cr6.eq) goto loc_82E4A290;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4A290:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E4A2AC:
	// addi r27,r25,8
	r27.s64 = r25.s64 + 8;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82e49f48
	if (cr6.gt) goto loc_82E49F48;
loc_82E4A2BC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e4a2d8
	if (cr6.eq) goto loc_82E4A2D8;
	// lwz r31,300(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// b 0x82e4a2f4
	goto loc_82E4A2F4;
loc_82E4A2D8:
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
	// lwz r31,300(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
loc_82E4A2F4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e4a30c
	if (cr6.eq) goto loc_82E4A30C;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// b 0x82e4a324
	goto loc_82E4A324;
loc_82E4A30C:
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
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82E4A324:
	// addi r29,r25,44
	r29.s64 = r25.s64 + 44;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4a3a8
	if (!cr6.gt) goto loc_82E4A3A8;
	// li r5,46
	ctx.r5.s64 = 46;
	// lwzx r3,r14,r23
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r23.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,68
	r11.s64 = 68;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d7ff58
	sub_82D7FF58(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30532
	r11.s64 = r11.s64 + -30532;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(60) );
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r11,300(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4a3ac
	if (!cr6.gt) goto loc_82E4A3AC;
loc_82E4A380:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82d80560
	sub_82D80560(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e4a380
	if (cr6.lt) goto loc_82E4A380;
	// b 0x82e4a3ac
	goto loc_82E4A3AC;
loc_82E4A3A8:
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
loc_82E4A3AC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E49CD8) {
	__imp__sub_82E49CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4A3D0) {
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
	// bl 0x82d7ff58
	sub_82D7FF58(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27436
	r11.s64 = r11.s64 + 27436;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82E4A3D0) {
	__imp__sub_82E4A3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4A420) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,29156
	r11.s64 = r11.s64 + 29156;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// ble cr6,0x82e4a488
	if (!cr6.gt) goto loc_82E4A488;
	// li r30,0
	r30.s64 = 0;
loc_82E4A450:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e4a474
	if (cr6.eq) goto loc_82E4A474;
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
loc_82E4A474:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4a450
	if (cr6.lt) goto loc_82E4A450;
loc_82E4A488:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4a4b4
	if (!cr6.eq) goto loc_82E4A4B4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4A4B4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E4A420) {
	__imp__sub_82E4A420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-23692
	ctx.r4.s64 = r11.s64 + -23692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82d4f170
	sub_82D4F170(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r25,112
	r25.s64 = 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4a58c
	if (cr6.eq) goto loc_82E4A58C;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r26,r11,-25308
	r26.s64 = r11.s64 + -25308;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x82e4a58c
	if (cr6.eq) goto loc_82E4A58C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,38
	ctx.r5.s64 = 38;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,112
	ctx.r4.s64 = 112;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r25,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r25.u16);
	// bl 0x82dc12e0
	sub_82DC12E0(ctx, base);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4a568
	if (!cr6.eq) goto loc_82E4A568;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4A568:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_82E4A58C:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24412
	ctx.r4.s64 = r11.s64 + -24412;
	// bl 0x82d4f170
	sub_82D4F170(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4a640
	if (cr6.eq) goto loc_82E4A640;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r26,r11,-25580
	r26.s64 = r11.s64 + -25580;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x82e4a640
	if (cr6.eq) goto loc_82E4A640;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,38
	ctx.r5.s64 = 38;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,304
	ctx.r4.s64 = 304;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,304
	r11.s64 = 304;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82dbea08
	sub_82DBEA08(ctx, base);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4a6c4
	if (!cr6.eq) goto loc_82E4A6C4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82E4A640:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23340
	ctx.r4.s64 = r11.s64 + -23340;
	// bl 0x82d4f170
	sub_82D4F170(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4a6f0
	if (cr6.eq) goto loc_82E4A6F0;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r26,r11,-25164
	r26.s64 = r11.s64 + -25164;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x82e4a6f0
	if (cr6.eq) goto loc_82E4A6F0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,38
	ctx.r5.s64 = 38;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,112
	ctx.r4.s64 = 112;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r25,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r25.u16);
	// bl 0x830d9c70
	sub_830D9C70(ctx, base);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4a6c4
	if (!cr6.eq) goto loc_82E4A6C4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4A6C4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82E4A6F0:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31104
	ctx.r4.s64 = r11.s64 + -31104;
	// bl 0x82d4f170
	sub_82D4F170(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4a738
	if (cr6.eq) goto loc_82E4A738;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4a738
	if (cr6.eq) goto loc_82E4A738;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(36) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82e4a738
	if (!cr6.eq) goto loc_82E4A738;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82E4A738:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E4A4C8) {
	__imp__sub_82E4A4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4A740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82e4a8c8
	if (cr6.eq) goto loc_82E4A8C8;
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,168
	ctx.r4.s64 = 168;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// beq cr6,0x82e4a7a4
	if (cr6.eq) goto loc_82E4A7A4;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,168
	r11.s64 = 168;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x830ce928
	sub_830CE928(ctx, base);
	// b 0x82e4a7b4
	goto loc_82E4A7B4;
loc_82E4A7A4:
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,168
	r11.s64 = 168;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x830ce358
	sub_830CE358(ctx, base);
loc_82E4A7B4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// addi r11,r11,29156
	r11.s64 = r11.s64 + 29156;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// sth r28,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, r28.u16);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bne cr6,0x82e4a7ec
	if (!cr6.eq) goto loc_82E4A7EC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_82E4A7EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// bl 0x82d6b300
	sub_82D6B300(ctx, base);
	// li r11,115
	r11.s64 = 115;
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r28.u8);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// li r11,110
	r11.s64 = 110;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// li r11,97
	r11.s64 = 97;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// li r11,112
	r11.s64 = 112;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82e4a860
	if (cr6.eq) goto loc_82E4A860;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d6b310
	sub_82D6B310(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_82E4A860:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r30,r10,27,31,31
	r30.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x82e4a8c0
	if (cr6.eq) goto loc_82E4A8C0;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// bne cr6,0x82e4a8c0
	if (!cr6.eq) goto loc_82E4A8C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4A8C0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e4a420
	sub_82E4A420(ctx, base);
loc_82E4A8C8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stb r30,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82E4A740) {
	__imp__sub_82E4A740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4A8D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e4a940
	if (cr6.eq) goto loc_82E4A940;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e4a940
	if (cr6.eq) goto loc_82E4A940;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,29176
	r11.s64 = r11.s64 + 29176;
	// li r31,0
	r31.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r10,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x830ce1f0
	sub_830CE1F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e4a94c
	if (!cr6.eq) goto loc_82E4A94C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830cde28
	sub_830CDE28(ctx, base);
loc_82E4A940:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
loc_82E4A94C:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-20824
	ctx.r3.s64 = r11.s64 + -20824;
	// bl 0x82d4f130
	sub_82D4F130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d6b180
	sub_82D6B180(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e4a9d4
	if (!cr6.eq) goto loc_82E4A9D4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r4,r11,29188
	ctx.r4.s64 = r11.s64 + 29188;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,23836
	r11.s64 = r11.s64 + 23836;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82E4A990:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d6b250
	sub_82D6B250(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e4a9d4
	if (!cr6.eq) goto loc_82E4A9D4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82e4a990
	if (!cr6.eq) goto loc_82E4A990;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830cde28
	sub_830CDE28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
loc_82E4A9D4:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4a9f8
	if (cr6.eq) goto loc_82E4A9F8;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
loc_82E4A9F8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830cde28
	sub_830CDE28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4A8D8) {
	__imp__sub_82E4A8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4AA10) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82d4f130
	sub_82D4F130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82d6b0c0
	sub_82D6B0C0(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,31220
	ctx.r5.s64 = r11.s64 + 31220;
	// li r11,1
	r11.s64 = 1;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82e4a740
	sub_82E4A740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E4AA10) {
	__imp__sub_82E4AA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4AA90) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-20824
	r30.s64 = r11.s64 + -20824;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82d4f130
	sub_82D4F130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82d6b0c0
	sub_82D6B0C0(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,31220
	ctx.r5.s64 = r11.s64 + 31220;
	// li r11,1
	r11.s64 = 1;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82e4a740
	sub_82E4A740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E4AA90) {
	__imp__sub_82E4AA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4AB18) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e4ab9c
	if (cr6.eq) goto loc_82E4AB9C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e4ab9c
	if (cr6.eq) goto loc_82E4AB9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e49aa0
	sub_82E49AA0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e49bd8
	sub_82E49BD8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4aa90
	sub_82E4AA90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82e49ad0
	sub_82E49AD0(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
loc_82E4AB9C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E4AB18) {
	__imp__sub_82E4AB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4ABB0) {
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
	// bl 0x82e4a420
	sub_82E4A420(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4abf8
	if (cr6.eq) goto loc_82E4ABF8;
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
loc_82E4ABF8:
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

PPC_WEAK_FUNC(sub_82E4ABB0) {
	__imp__sub_82E4ABB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4AC18) {
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
	// bl 0x830cde28
	sub_830CDE28(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4ac60
	if (cr6.eq) goto loc_82E4AC60;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,6
	ctx.r6.s64 = 6;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4AC60:
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

PPC_WEAK_FUNC(sub_82E4AC18) {
	__imp__sub_82E4AC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4AC80) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,60
	r11.s64 = ctx.r1.s64 + 60;
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stfs f1,60(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 60, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r1,-28
	ctx.r6.s64 = ctx.r1.s64 + -28;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v8,v0,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vor v9,v13,v13
	simd::store_i8(ctx.v9.u8, simd::load_i8(ctx.v13.u8));
	// vpermwi128 v10,v13,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v7,v13,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmulfp128 v10,v10,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v11,v13,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vmulfp128 v8,v7,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmsum4fp128 v13,v0,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xFF));
	// vsubfp v10,v8,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vnmsubfp v12,v9,v12,v10
	simd::store_f32_aligned(ctx.v12.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v10.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// vmaddfp v0,v0,v11,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvewx v13,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f0,3140(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lfs f0,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvlx v0,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lfs f13,3084(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v13
	simd::store_u8(ctx.v0.u8, simd::xor_i8(simd::load_u8(ctx.v0.u8), simd::load_u8(ctx.v13.u8)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4AC80) {
	__imp__sub_82E4AC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4AD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lfs f13,3164(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3164);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4AD68) {
	__imp__sub_82E4AD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4ADD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,220
	r11.s64 = ctx.r1.s64 + 220;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v10,v13,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vor v9,v13,v13
	simd::store_i8(ctx.v9.u8, simd::load_i8(ctx.v13.u8));
	// vpermwi128 v7,v13,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v8,v0,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmulfp128 v10,v10,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v11,v13,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vmsum4fp128 v13,v0,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xFF));
	// vmulfp128 v8,v7,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vsubfp v10,v8,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vnmsubfp v12,v9,v12,v10
	simd::store_f32_aligned(ctx.v12.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v10.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// vmaddfp v0,v0,v11,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v13,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f0,21080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21080);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e4aef8
	if (!cr6.gt) goto loc_82E4AEF8;
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82e4af34
	goto loc_82E4AF34;
loc_82E4AEF8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8268a7a0
	sub_8268A7A0(ctx, base);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821db0c8
	sub_821DB0C8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E4AF34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4ADD8) {
	__imp__sub_82E4ADD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4AF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,272
	r11.s64 = 272;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vsubfp128 v127,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v127.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v126,v0,0
	simd::store_i32(v126.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmsum3fp128 v0,v127,v127
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(v127.f32), 0xEF));
	// stvewx v0,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f0,72(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 72);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e4b018
	if (!cr6.gt) goto loc_82E4B018;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// vxor128 v127,v127,v127
	simd::store_u8(v127.u8, simd::zero_i128());
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7b860
	sub_82D7B860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r28,r31,208
	r28.s64 = r31.s64 + 208;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
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
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4B018:
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v7,v0,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vor v9,v0,v0
	simd::store_i8(ctx.v9.u8, simd::load_i8(ctx.v0.u8));
	// vpermwi128 v10,v13,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v8,v13,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vspltw v12,v13,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vmulfp128 v10,v11,v10
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vspltw v11,v0,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmulfp128 v8,v7,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmsum4fp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// vsubfp v10,v8,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vnmsubfp v12,v9,v12,v10
	simd::store_f32_aligned(ctx.v12.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v10.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// vmaddfp v13,v13,v11,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stvewx v0,r0,r9
	PPC_STORE_U32((ctx.r9.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r9.u32) & 0xF) >> 2));
	// lfs f0,3140(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvlx v0,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lfs f13,3084(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e4b0b8
	if (!cr6.lt) goto loc_82E4B0B8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v13
	simd::store_u8(ctx.v0.u8, simd::xor_i8(simd::load_u8(ctx.v0.u8), simd::load_u8(ctx.v13.u8)));
loc_82E4B0B8:
	// li r10,416
	ctx.r10.s64 = 416;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v13,v127
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(v127.f32)));
	// li r11,32
	r11.s64 = 32;
	// li r9,432
	ctx.r9.s64 = 432;
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 64);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lvx128 v13,r31,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v12,r29,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r30,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v126,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(v126.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// li r11,48
	r11.s64 = 48;
	// lvx128 v12,r31,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r29,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v8,v8,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v10,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v7,r29,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// fmuls f12,f0,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// lvx128 v6,r30,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v7,v126,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(v126.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vsubfp v10,v6,v12
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vmaddfp v0,v0,v9,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v11,v10,v7,v8
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)), simd::load_f32_aligned(ctx.v8.f32)));
	// vmsum3fp128 v10,v0,v0
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v10,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v10.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x82e4b158
	if (!cr6.gt) goto loc_82E4B158;
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v10,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vmulfp128 v0,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
loc_82E4B158:
	// lfs f0,68(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 68);
	f0.f64 = double(temp.f32);
	// vmsum3fp128 v10,v11,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 * f31.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// stvewx v10,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v10.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82e4b19c
	if (!cr6.gt) goto loc_82E4B19C;
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v10,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vmulfp128 v11,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v10.f32)));
loc_82E4B19C:
	// vaddfp v12,v12,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vaddfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r30,r31,208
	r30.s64 = r31.s64 + 208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
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
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4AF50) {
	__imp__sub_82E4AF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,244(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,17024
	ctx.r10.s64 = ctx.r10.s64 + 17024;
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r31,352
	r11.s64 = r31.s64 + 352;
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vpermwi128 v7,v0,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v0,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r10,304
	ctx.r10.s64 = 304;
	// vmaddfp v11,v12,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v8,v13,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vmsum3fp128 v5,v0,v13
	simd::store_f32_aligned(ctx.v5.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v4,v13,99
	simd::store_i32(ctx.v4.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v3,v13,135
	simd::store_i32(ctx.v3.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// lvx128 v9,r31,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v7,v7,v4
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v4.f32)));
	// vmulfp128 v6,v6,v3
	simd::store_f32_aligned(ctx.v6.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v3.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v5,v5,0
	simd::store_i32(ctx.v5.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v5.u32), 3));
	// vsubfp v7,v6,v7
	simd::store_f32_aligned(ctx.v7.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmaddfp v0,v5,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v7,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vsubfp v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v0,v0,v8
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r29,r31,208
	r29.s64 = r31.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v11,v0,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v10,v0,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vspltw v9,v0,3
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v7,v13,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v6,v13,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vspltw v12,v13,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vmulfp128 v11,v7,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v10,v6,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vsubfp v11,v10,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vnmsubfp v11,v13,v9,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v11.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// vmsum4fp128 v13,v0,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xFF));
	// vmaddfp v0,v0,v12,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v13,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x82e4b3b0
	if (cr6.lt) goto loc_82E4B3B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82e4b3a8
	if (cr6.gt) goto loc_82E4B3A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	f0.f64 = double(temp.f32);
loc_82E4B3A8:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64;
	// b 0x82e4b3b8
	goto loc_82E4B3B8;
loc_82E4B3B0:
	// bl 0x82260900
	sub_82260900(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_82E4B3B8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82e4b3e4
	if (!cr6.lt) goto loc_82E4B3E4;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// b 0x82e4b410
	goto loc_82E4B410;
loc_82E4B3E4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821db0c8
	sub_821DB0C8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 * f30.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
loc_82E4B410:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E4B218) {
	__imp__sub_82E4B218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f30,260(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r9,17024
	ctx.r9.s64 = ctx.r9.s64 + 17024;
	// addi r10,r10,16912
	ctx.r10.s64 = ctx.r10.s64 + 16912;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r31,288
	r11.s64 = r31.s64 + 288;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r31,352
	ctx.r10.s64 = r31.s64 + 352;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// addi r8,r1,260
	ctx.r8.s64 = ctx.r1.s64 + 260;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r5,48
	ctx.r5.s64 = 48;
	// vpermwi128 v4,v0,135
	simd::store_i32(ctx.v4.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// vspltw v11,v0,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v7,r11,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v3,v0,99
	simd::store_i32(ctx.v3.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r4,16
	ctx.r4.s64 = 16;
	// vspltw v8,v13,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v1,v13,99
	simd::store_i32(ctx.v1.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// vmsum3fp128 v2,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v2.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v31,v13,135
	simd::store_i32(v31.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v6,r11,r5
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v4,v4,v1
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v4.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v1.f32)));
	// vmaddfp v1,v11,v11,v12
	simd::store_f32_aligned(ctx.v1.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v3,v3,v31
	simd::store_f32_aligned(ctx.v3.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(v31.f32)));
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v9,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v9,v9,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// vmulfp128 v13,v13,v1
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v1.f32)));
	// vspltw v12,v9,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// vspltw v9,v2,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v2.u32), 3));
	// vsubfp v4,v3,v4
	simd::store_f32_aligned(ctx.v4.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(ctx.v4.f32)));
	// vmaddfp v0,v9,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v13,v4,v11,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v10,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vsubfp v11,v10,v12
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vaddfp v13,v13,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v0,v0,v7
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v11,v11,v5
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vmaddfp v0,v12,v6,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v6.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum4fp128 v10,v0,v0
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vmulfp128 v127,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v127.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// lvx128 v0,r11,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vaddfp v13,v13,v10
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vsubfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmulfp128 v0,v0,v8
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r29,r31,208
	r29.s64 = r31.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v127,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(v127.u32), 0x78));
	// vpermwi128 v8,v0,99
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vor128 v11,v127,v127
	simd::store_i8(ctx.v11.u8, simd::load_i8(v127.u8));
	// vpermwi128 v7,v0,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmsum4fp128 v6,v0,v127
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v6.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32), 0xFF));
	// vpermwi128 v9,v127,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(v127.u32), 0x9C));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v10,v10,v8
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vspltw128 v13,v127,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(v127.u32), 0));
	// vmulfp128 v9,v9,v7
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vnmsubfp v12,v11,v12,v10
	simd::store_f32_aligned(ctx.v12.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v10.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// vmaddfp v0,v0,v13,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v6,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v6.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82e4b678
	if (cr6.lt) goto loc_82E4B678;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e4b680
	if (cr6.gt) goto loc_82E4B680;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e4b680
	goto loc_82E4B680;
loc_82E4B678:
	// bl 0x82260900
	sub_82260900(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_82E4B680:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82e4b6ac
	if (!cr6.lt) goto loc_82E4B6AC;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// b 0x82e4b6d8
	goto loc_82E4B6D8;
loc_82E4B6AC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821db0c8
	sub_821DB0C8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 * f30.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
loc_82E4B6D8:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E4B448) {
	__imp__sub_82E4B448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B718) {
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
	// addi r11,r11,29208
	r11.s64 = r11.s64 + 29208;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82e4b74c
	if (cr6.eq) goto loc_82E4B74C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E4B74C:
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

PPC_WEAK_FUNC(sub_82E4B718) {
	__imp__sub_82E4B718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e5cd68
	sub_82E5CD68(ctx, base);
	// bl 0x82e5c648
	sub_82E5C648(ctx, base);
	// bl 0x82e5bae8
	sub_82E5BAE8(ctx, base);
	// bl 0x82e5b0a0
	sub_82E5B0A0(ctx, base);
	// bl 0x82e59f38
	sub_82E59F38(ctx, base);
	// bl 0x82e59a90
	sub_82E59A90(ctx, base);
	// bl 0x82e59968
	sub_82E59968(ctx, base);
	// bl 0x82e597d8
	sub_82E597D8(ctx, base);
	// bl 0x82e58a60
	sub_82E58A60(ctx, base);
	// bl 0x82e57ff8
	sub_82E57FF8(ctx, base);
	// bl 0x82e579e8
	sub_82E579E8(ctx, base);
	// bl 0x82e56488
	sub_82E56488(ctx, base);
	// bl 0x82e55418
	sub_82E55418(ctx, base);
	// bl 0x82e54790
	sub_82E54790(ctx, base);
	// bl 0x82e54050
	sub_82E54050(ctx, base);
	// bl 0x82e53430
	sub_82E53430(ctx, base);
	// bl 0x82e52e50
	sub_82E52E50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4B760) {
	__imp__sub_82E4B760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,-80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r11,30376
	ctx.r6.s64 = r11.s64 + 30376;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r5,r11,-29040
	ctx.r5.s64 = r11.s64 + -29040;
	// b 0x82e30440
	sub_82E30440(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4B7C0) {
	__imp__sub_82E4B7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B7E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4B7E0) {
	__imp__sub_82E4B7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,-80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82e30120
	sub_82E30120(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4B7E8) {
	__imp__sub_82E4B7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B7F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4B7F8) {
	__imp__sub_82E4B7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,-84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r6,r11,-30532
	ctx.r6.s64 = r11.s64 + -30532;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r5,r11,-27984
	ctx.r5.s64 = r11.s64 + -27984;
	// b 0x82e30440
	sub_82E30440(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4B800) {
	__imp__sub_82E4B800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4B820) {
	__imp__sub_82E4B820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,-84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82e30120
	sub_82E30120(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4B828) {
	__imp__sub_82E4B828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4B838) {
	__imp__sub_82E4B838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B840) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,-88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4b8a8
	if (cr6.eq) goto loc_82E4B8A8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e4b8a8
	if (cr6.eq) goto loc_82E4B8A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x82e4b8a8
	if (cr6.eq) goto loc_82E4B8A8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r3,-88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-88) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r11,-6472
	ctx.r6.s64 = r11.s64 + -6472;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r5,r11,-29248
	ctx.r5.s64 = r11.s64 + -29248;
	// bl 0x82e30440
	sub_82E30440(ctx, base);
loc_82E4B8A8:
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

PPC_WEAK_FUNC(sub_82E4B840) {
	__imp__sub_82E4B840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B8C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,-88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4b918
	if (cr6.eq) goto loc_82E4B918;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e4b918
	if (cr6.eq) goto loc_82E4B918;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x82e4b918
	if (cr6.eq) goto loc_82E4B918;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-88) );
	// bl 0x82e30120
	sub_82E30120(ctx, base);
loc_82E4B918:
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

PPC_WEAK_FUNC(sub_82E4B8C0) {
	__imp__sub_82E4B8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,-92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-92) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r6,r11,-30128
	ctx.r6.s64 = r11.s64 + -30128;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r5,r11,-28848
	ctx.r5.s64 = r11.s64 + -28848;
	// b 0x82e30440
	sub_82E30440(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4B930) {
	__imp__sub_82E4B930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4B950) {
	__imp__sub_82E4B950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,-92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-92) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82e30120
	sub_82E30120(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4B958) {
	__imp__sub_82E4B958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4B968) {
	__imp__sub_82E4B968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4B970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4bb50
	if (cr6.eq) goto loc_82E4BB50;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e4bb50
	if (cr6.eq) goto loc_82E4BB50;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82d738f8
	sub_82D738F8(ctx, base);
	// addi r30,r31,92
	r30.s64 = r31.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82d73d40
	sub_82D73D40(ctx, base);
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82d73db0
	sub_82D73DB0(ctx, base);
	// addi r25,r31,104
	r25.s64 = r31.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82d73c60
	sub_82D73C60(ctx, base);
	// addi r23,r31,100
	r23.s64 = r31.s64 + 100;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82d73cd0
	sub_82D73CD0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82d735a8
	sub_82D735A8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r24,8
	r31.s64 = r24.s64 + 8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4ba34
	if (!cr6.gt) goto loc_82E4BA34;
	// li r28,0
	r28.s64 = 0;
loc_82E4BA04:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4ba04
	if (cr6.lt) goto loc_82E4BA04;
loc_82E4BA34:
	// addi r29,r24,44
	r29.s64 = r24.s64 + 44;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4ba7c
	if (!cr6.gt) goto loc_82E4BA7C;
	// li r30,0
	r30.s64 = 0;
loc_82E4BA4C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4ba4c
	if (cr6.lt) goto loc_82E4BA4C;
loc_82E4BA7C:
	// addi r29,r24,32
	r29.s64 = r24.s64 + 32;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4bac4
	if (!cr6.gt) goto loc_82E4BAC4;
	// li r30,0
	r30.s64 = 0;
loc_82E4BA94:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4ba94
	if (cr6.lt) goto loc_82E4BA94;
loc_82E4BAC4:
	// addi r29,r24,20
	r29.s64 = r24.s64 + 20;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4bb0c
	if (!cr6.gt) goto loc_82E4BB0C;
	// li r30,0
	r30.s64 = 0;
loc_82E4BADC:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4badc
	if (cr6.lt) goto loc_82E4BADC;
loc_82E4BB0C:
	// lhz r11,4(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4bb48
	if (cr6.eq) goto loc_82E4BB48;
	// lhz r11,6(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r24)
	PPC_STORE_U16(r24.u32 + 6, r11.u16);
	// bne cr6,0x82e4bb48
	if (!cr6.eq) goto loc_82E4BB48;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4BB48:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82d73900
	sub_82D73900(ctx, base);
loc_82E4BB50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82E4B970) {
	__imp__sub_82E4B970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4BB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4bd28
	if (cr6.eq) goto loc_82E4BD28;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e4bd28
	if (cr6.eq) goto loc_82E4BD28;
	// addi r29,r30,92
	r29.s64 = r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82d72840
	sub_82D72840(ctx, base);
	// addi r27,r30,96
	r27.s64 = r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82d72888
	sub_82D72888(ctx, base);
	// addi r26,r30,104
	r26.s64 = r30.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82d727b0
	sub_82D727B0(ctx, base);
	// addi r24,r30,100
	r24.s64 = r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82d727f8
	sub_82D727F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d735a8
	sub_82D735A8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r25,8
	r31.s64 = r25.s64 + 8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4bc14
	if (!cr6.gt) goto loc_82E4BC14;
	// li r28,0
	r28.s64 = 0;
loc_82E4BBE4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e4bbe4
	if (cr6.lt) goto loc_82E4BBE4;
loc_82E4BC14:
	// addi r29,r25,44
	r29.s64 = r25.s64 + 44;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4bc5c
	if (!cr6.gt) goto loc_82E4BC5C;
	// li r30,0
	r30.s64 = 0;
loc_82E4BC2C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4bc2c
	if (cr6.lt) goto loc_82E4BC2C;
loc_82E4BC5C:
	// addi r29,r25,32
	r29.s64 = r25.s64 + 32;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4bca4
	if (!cr6.gt) goto loc_82E4BCA4;
	// li r30,0
	r30.s64 = 0;
loc_82E4BC74:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4bc74
	if (cr6.lt) goto loc_82E4BC74;
loc_82E4BCA4:
	// addi r29,r25,20
	r29.s64 = r25.s64 + 20;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4bcec
	if (!cr6.gt) goto loc_82E4BCEC;
	// li r30,0
	r30.s64 = 0;
loc_82E4BCBC:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4bcbc
	if (cr6.lt) goto loc_82E4BCBC;
loc_82E4BCEC:
	// lhz r11,4(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4bd28
	if (cr6.eq) goto loc_82E4BD28;
	// lhz r11,6(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r25)
	PPC_STORE_U16(r25.u32 + 6, r11.u16);
	// bne cr6,0x82e4bd28
	if (!cr6.eq) goto loc_82E4BD28;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4BD28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E4BB58) {
	__imp__sub_82E4BB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4BD30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(112) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4bd60
	if (!cr6.gt) goto loc_82E4BD60;
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(108) );
loc_82E4BD44:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e4bd68
	if (cr6.eq) goto loc_82E4BD68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4bd44
	if (cr6.lt) goto loc_82E4BD44;
loc_82E4BD60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E4BD68:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4BD30) {
	__imp__sub_82E4BD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4BD70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
loc_82E4BD84:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e4bda4
	if (cr6.eq) goto loc_82E4BDA4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4bd84
	if (cr6.lt) goto loc_82E4BD84;
	// blr 
	return;
loc_82E4BDA4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4BD70) {
	__imp__sub_82E4BD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4BDD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4be2c
	if (cr6.eq) goto loc_82E4BE2C;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4be2c
	if (!cr6.gt) goto loc_82E4BE2C;
	// addi r28,r31,-8
	r28.s64 = r31.s64 + -8;
	// li r30,0
	r30.s64 = 0;
loc_82E4BE08:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82e4bb58
	sub_82E4BB58(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4be08
	if (cr6.lt) goto loc_82E4BE08;
loc_82E4BE2C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// beq cr6,0x82e4be74
	if (cr6.eq) goto loc_82E4BE74;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4be74
	if (!cr6.gt) goto loc_82E4BE74;
	// addi r28,r31,-8
	r28.s64 = r31.s64 + -8;
	// li r30,0
	r30.s64 = 0;
loc_82E4BE50:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82e4b970
	sub_82E4B970(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4be50
	if (cr6.lt) goto loc_82E4BE50;
loc_82E4BE74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E4BDD0) {
	__imp__sub_82E4BDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4BE80) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e4bf5c
	if (!cr6.gt) goto loc_82E4BF5C;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
loc_82E4BEA8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// beq cr6,0x82e4becc
	if (cr6.eq) goto loc_82E4BECC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e4bea8
	if (cr6.lt) goto loc_82E4BEA8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E4BECC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x82e4bf5c
	if (cr6.lt) goto loc_82E4BF5C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bne cr6,0x82e4bee4
	if (!cr6.eq) goto loc_82E4BEE4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4BEE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d72ac8
	sub_82D72AC8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4bf30
	if (!cr6.gt) goto loc_82E4BF30;
	// li r29,0
	r29.s64 = 0;
loc_82E4BF00:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e4bf00
	if (cr6.lt) goto loc_82E4BF00;
loc_82E4BF30:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// bl 0x82e4bb58
	sub_82E4BB58(ctx, base);
loc_82E4BF5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E4BE80) {
	__imp__sub_82E4BE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4BF68) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r29,108
	r30.s64 = r29.s64 + 108;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4bfbc
	if (!cr6.gt) goto loc_82E4BFBC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
loc_82E4BF94:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// beq cr6,0x82e4bfb4
	if (cr6.eq) goto loc_82E4BFB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4bf94
	if (cr6.lt) goto loc_82E4BF94;
	// b 0x82e4bfbc
	goto loc_82E4BFBC;
loc_82E4BFB4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e4c060
	if (!cr6.lt) goto loc_82E4C060;
loc_82E4BFBC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,88
	ctx.r4.s64 = r29.s64 + 88;
	// bne cr6,0x82e4bfcc
	if (!cr6.eq) goto loc_82E4BFCC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E4BFCC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d74130
	sub_82D74130(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4bff4
	if (!cr6.eq) goto loc_82E4BFF4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4BFF4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(124) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4c054
	if (!cr6.gt) goto loc_82E4C054;
	// li r30,0
	r30.s64 = 0;
loc_82E4C024:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(120) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(124) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4c024
	if (cr6.lt) goto loc_82E4C024;
loc_82E4C054:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e4b970
	sub_82E4B970(ctx, base);
loc_82E4C060:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4BF68) {
	__imp__sub_82E4BF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C068) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x82e4be80
	sub_82E4BE80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4C068) {
	__imp__sub_82E4C068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C070) {
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
	// addi r31,r3,120
	r31.s64 = ctx.r3.s64 + 120;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4c0c8
	if (!cr6.gt) goto loc_82E4C0C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82E4C0A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82e4c0c0
	if (cr6.eq) goto loc_82E4C0C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4c0a0
	if (cr6.lt) goto loc_82E4C0A0;
	// b 0x82e4c0c8
	goto loc_82E4C0C8;
loc_82E4C0C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e4c104
	if (!cr6.lt) goto loc_82E4C104;
loc_82E4C0C8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4c0e8
	if (!cr6.eq) goto loc_82E4C0E8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4C0E8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E4C104:
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

PPC_WEAK_FUNC(sub_82E4C070) {
	__imp__sub_82E4C070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	// mflr r12
	// bl 0x82ca2bc4
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r7,r9,-6304
	ctx.r7.s64 = ctx.r9.s64 + -6304;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r9,r9,6
	ctx.r9.u64 = ctx.r9.u64 | 6;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// addi r8,r11,29224
	ctx.r8.s64 = r11.s64 + 29224;
	// addi r5,r9,23880
	ctx.r5.s64 = ctx.r9.s64 + 23880;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,24660
	ctx.r4.s64 = ctx.r9.s64 + 24660;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// addi r31,r9,29208
	r31.s64 = ctx.r9.s64 + 29208;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r30,r9,29348
	r30.s64 = ctx.r9.s64 + 29348;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r19,r8,12
	r19.s64 = ctx.r8.s64 + 12;
	// addi r29,r9,29332
	r29.s64 = ctx.r9.s64 + 29332;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r6,r6,23856
	ctx.r6.s64 = ctx.r6.s64 + 23856;
	// addi r28,r9,29320
	r28.s64 = ctx.r9.s64 + 29320;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r27,r9,29296
	r27.s64 = ctx.r9.s64 + 29296;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r26,r9,29272
	r26.s64 = ctx.r9.s64 + 29272;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r25,r9,29256
	r25.s64 = ctx.r9.s64 + 29256;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r24,r9,29240
	r24.s64 = ctx.r9.s64 + 29240;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r23,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r23.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r19,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r19.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r22,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r22.u32);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r31.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r28,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r28.u32);
	// stw r27,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r27.u32);
	// stw r26,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r26.u32);
	// stw r25,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r25.u32);
	// stw r24,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r24.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r21,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r21.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// stw r20,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r20.u32);
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82E4C120) {
	__imp__sub_82E4C120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C238) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r10,29348
	ctx.r10.s64 = ctx.r10.s64 + 29348;
	// addi r9,r9,29332
	ctx.r9.s64 = ctx.r9.s64 + 29332;
	// addi r11,r11,29320
	r11.s64 = r11.s64 + 29320;
	// addi r8,r8,29296
	ctx.r8.s64 = ctx.r8.s64 + 29296;
	// addi r7,r7,29272
	ctx.r7.s64 = ctx.r7.s64 + 29272;
	// addi r6,r6,29256
	ctx.r6.s64 = ctx.r6.s64 + 29256;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r5,r5,29240
	ctx.r5.s64 = ctx.r5.s64 + 29240;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r7,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// stw r6,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r6.u32);
	// stw r5,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// blt cr6,0x82e4c2d4
	if (cr6.lt) goto loc_82E4C2D4;
	// rlwinm r28,r30,2,0,29
	r28.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E4C2B4:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82e4be80
	sub_82E4BE80(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82e4c2b4
	if (!cr6.lt) goto loc_82E4C2B4;
loc_82E4C2D4:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4c300
	if (!cr6.eq) goto loc_82E4C300;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4C300:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4c32c
	if (!cr6.eq) goto loc_82E4C32C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4C32C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,29208
	r11.s64 = r11.s64 + 29208;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r10,24660
	ctx.r10.s64 = ctx.r10.s64 + 24660;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r9,r9,23880
	ctx.r9.s64 = ctx.r9.s64 + 23880;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r8,r8,23856
	ctx.r8.s64 = ctx.r8.s64 + 23856;
	// addi r7,r7,-6304
	ctx.r7.s64 = ctx.r7.s64 + -6304;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// addi r6,r6,29224
	ctx.r6.s64 = ctx.r6.s64 + 29224;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r7.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(52) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4c3a0
	if (!cr6.eq) goto loc_82E4C3A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4C3A0:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4c3cc
	if (!cr6.eq) goto loc_82E4C3CC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4C3CC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4C238) {
	__imp__sub_82E4C238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C3E0) {
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
	// addi r11,r11,29224
	r11.s64 = r11.s64 + 29224;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4c42c
	if (!cr6.eq) goto loc_82E4C42C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4C42C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4c458
	if (!cr6.eq) goto loc_82E4C458;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4C458:
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

PPC_WEAK_FUNC(sub_82E4C3E0) {
	__imp__sub_82E4C3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C470) {
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
	// bl 0x82e4c3e0
	sub_82E4C3E0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4c4a8
	if (cr6.eq) goto loc_82E4C4A8;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E4C4A8:
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

PPC_WEAK_FUNC(sub_82E4C470) {
	__imp__sub_82E4C470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r11,22060
	ctx.r3.s64 = r11.s64 + 22060;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4C4C0) {
	__imp__sub_82E4C4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C4D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x82e4c500
	sub_82E4C500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4C4D0) {
	__imp__sub_82E4C4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C4D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x82e4c500
	sub_82E4C500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4C4D8) {
	__imp__sub_82E4C4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C4E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-92
	ctx.r3.s64 = ctx.r3.s64 + -92;
	// b 0x82e4c500
	sub_82E4C500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4C4E0) {
	__imp__sub_82E4C4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C4E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-96
	ctx.r3.s64 = ctx.r3.s64 + -96;
	// b 0x82e4c500
	sub_82E4C500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4C4E8) {
	__imp__sub_82E4C4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C4F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// b 0x82e4c500
	sub_82E4C500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4C4F0) {
	__imp__sub_82E4C4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C4F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e4c500
	sub_82E4C500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4C4F8) {
	__imp__sub_82E4C4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C500) {
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
	// bl 0x82e4c238
	sub_82E4C238(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4c548
	if (cr6.eq) goto loc_82E4C548;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4C548:
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

PPC_WEAK_FUNC(sub_82E4C500) {
	__imp__sub_82E4C500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C568) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d843f0
	sub_82D843F0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,24196
	r11.s64 = r11.s64 + 24196;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r11,r11,16976
	r11.s64 = r11.s64 + 16976;
	// lfs f13,26348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26348);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82E4C568) {
	__imp__sub_82E4C568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C5D0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e4c600
	if (cr6.eq) goto loc_82E4C600;
loc_82E4C5F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e4c65c
	goto loc_82E4C65C;
loc_82E4C600:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4c5f8
	if (!cr6.eq) goto loc_82E4C5F8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82e4c568
	sub_82E4C568(ctx, base);
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
loc_82E4C65C:
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

PPC_WEAK_FUNC(sub_82E4C5D0) {
	__imp__sub_82E4C5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lfs f0,2968(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2968);
	f0.f64 = double(temp.f32);
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r10,r30,336
	ctx.r10.s64 = r30.s64 + 336;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vor v10,v0,v0
	simd::store_i8(ctx.v10.u8, simd::load_i8(ctx.v0.u8));
	// vpermwi128 v9,v0,135
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r9,r29,336
	ctx.r9.s64 = r29.s64 + 336;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v13,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmsum3fp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vpermwi128 v6,v13,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vor v7,v13,v13
	simd::store_i8(ctx.v7.u8, simd::load_i8(ctx.v13.u8));
	// vspltw v13,v13,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vmulfp128 v11,v8,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v9,v6,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// stvewx v0,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// vsubfp v9,v9,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// addi r28,r11,48
	r28.s64 = r11.s64 + 48;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// fmsubs f0,f0,f13,f12
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f13.f64), -float(ctx.f12.f64)));
	// vpermwi128 v8,v0,99
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v11,r0,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v10,v13,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// vpermwi128 v9,v0,135
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmaddfp v13,v7,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vxor v13,v13,v11
	simd::store_u8(ctx.v13.u8, simd::xor_i8(simd::load_u8(ctx.v13.u8), simd::load_u8(ctx.v11.u8)));
	// vspltw v11,v0,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v7,v13,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vspltw v12,v13,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// stvewx v10,r0,r7
	PPC_STORE_U32((ctx.r7.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v10.u32), 3 - ((ctx.r7.u32) & 0xF) >> 2));
	// vpermwi128 v10,v13,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// vmulfp128 v10,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmulfp128 v9,v8,v7
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v13,v13,v11,v10
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v0,v12,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,432
	r11.s64 = 432;
	// stfs f0,124(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r29,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vsubfp128 v127,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v127.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// fmr f1,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = f0.f64;
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82e4c7e4
	if (cr6.lt) goto loc_82E4C7E4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e4c7ec
	if (cr6.gt) goto loc_82E4C7EC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e4c7ec
	goto loc_82E4C7EC;
loc_82E4C7E4:
	// bl 0x82260900
	sub_82260900(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_82E4C7EC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32252
	r11.s64 = -2113667072;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e4c834
	if (!cr6.gt) goto loc_82E4C834;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
loc_82E4C834:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvlx v12,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmulfp128 v13,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v0,v12,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(208) );
	// addi r3,r30,208
	ctx.r3.s64 = r30.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vxor v0,v13,v0
	simd::store_u8(ctx.v0.u8, simd::xor_i8(simd::load_u8(ctx.v13.u8), simd::load_u8(ctx.v0.u8)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(208) );
	// addi r3,r29,208
	ctx.r3.s64 = r29.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4C678) {
	__imp__sub_82E4C678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C8E0) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r11,r11,24748
	r11.s64 = r11.s64 + 24748;
	// addi r10,r10,24736
	ctx.r10.s64 = ctx.r10.s64 + 24736;
	// addi r9,r9,24716
	ctx.r9.s64 = ctx.r9.s64 + 24716;
	// addi r8,r8,24704
	ctx.r8.s64 = ctx.r8.s64 + 24704;
	// addi r7,r7,24692
	ctx.r7.s64 = ctx.r7.s64 + 24692;
	// addi r6,r6,24676
	ctx.r6.s64 = ctx.r6.s64 + 24676;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// beq cr6,0x82e4c980
	if (cr6.eq) goto loc_82E4C980;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4c980
	if (cr6.eq) goto loc_82E4C980;
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
	// bne cr6,0x82e4c980
	if (!cr6.eq) goto loc_82E4C980;
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
loc_82E4C980:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,24660
	r11.s64 = r11.s64 + 24660;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x82689520
	sub_82689520(ctx, base);
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

PPC_WEAK_FUNC(sub_82E4C8E0) {
	__imp__sub_82E4C8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4C9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e4c9d8
	if (!cr6.eq) goto loc_82E4C9D8;
	// lbz r11,16(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r28,r11,r5
	r28.u64 = r11.u64 + ctx.r5.u64;
	// b 0x82e4c9dc
	goto loc_82E4C9DC;
loc_82E4C9D8:
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82E4C9DC:
	// lbz r11,24(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e4c9f8
	if (!cr6.eq) goto loc_82E4C9F8;
	// lbz r11,16(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r31,r11,r6
	r31.u64 = r11.u64 + ctx.r6.u64;
	// b 0x82e4c9fc
	goto loc_82E4C9FC;
loc_82E4C9F8:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82E4C9FC:
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(44) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4ca40
	if (cr6.eq) goto loc_82E4CA40;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e4ca40
	if (!cr6.eq) goto loc_82E4CA40;
loc_82E4CA30:
	// stb r25,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r25.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82E4CA40:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e4cafc
	if (cr6.eq) goto loc_82E4CAFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e4cafc
	if (cr6.eq) goto loc_82E4CAFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c610
	sub_82D7C610(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d7c610
	sub_82D7C610(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82e4ca74
	if (cr6.gt) goto loc_82E4CA74;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82E4CA74:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4ca8c
	if (!cr6.eq) goto loc_82E4CA8C;
	// mr r27,r28
	r27.u64 = r28.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82E4CA8C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82d7c610
	sub_82D7C610(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82e4cafc
	if (!cr6.gt) goto loc_82E4CAFC;
loc_82E4CAA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82d7c658
	sub_82D7C658(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e4caf0
	if (cr6.eq) goto loc_82E4CAF0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x82e4caf0
	if (cr6.eq) goto loc_82E4CAF0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82e4ca30
	if (cr6.eq) goto loc_82E4CA30;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82e4ca30
	if (cr6.eq) goto loc_82E4CA30;
loc_82E4CAF0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82e4caa4
	if (cr6.lt) goto loc_82E4CAA4;
loc_82E4CAFC:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E4C9A8) {
	__imp__sub_82E4C9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CB10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(40) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4cb5c
	if (cr6.eq) goto loc_82E4CB5C;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82e4cb60
	if (cr6.eq) goto loc_82E4CB60;
loc_82E4CB5C:
	// li r11,1
	r11.s64 = 1;
loc_82E4CB60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_82E4CB10) {
	__imp__sub_82E4CB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CB80) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(40) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4cbd4
	if (cr6.eq) goto loc_82E4CBD4;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82e4cbd8
	if (cr6.eq) goto loc_82E4CBD8;
loc_82E4CBD4:
	// li r11,1
	r11.s64 = 1;
loc_82E4CBD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_82E4CB80) {
	__imp__sub_82E4CB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CBF8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(36) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4cc44
	if (cr6.eq) goto loc_82E4CC44;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82e4cc48
	if (cr6.eq) goto loc_82E4CC48;
loc_82E4CC44:
	// li r11,1
	r11.s64 = 1;
loc_82E4CC48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_82E4CBF8) {
	__imp__sub_82E4CBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CC68) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4ccb4
	if (cr6.eq) goto loc_82E4CCB4;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82e4ccb8
	if (cr6.eq) goto loc_82E4CCB8;
loc_82E4CCB4:
	// li r11,1
	r11.s64 = 1;
loc_82E4CCB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_82E4CC68) {
	__imp__sub_82E4CC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CCD8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x82e4cd28
	if (cr6.eq) goto loc_82E4CD28;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x82dffb70
	sub_82DFFB70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e4cd28
	if (cr6.eq) goto loc_82E4CD28;
	// bl 0x82d95498
	sub_82D95498(ctx, base);
loc_82E4CD28:
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

PPC_WEAK_FUNC(sub_82E4CCD8) {
	__imp__sub_82E4CCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CD40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4CD40) {
	__imp__sub_82E4CD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,-31352
	r11.s64 = r11.s64 + -31352;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r7,r7,24660
	ctx.r7.s64 = ctx.r7.s64 + 24660;
	// addi r11,r11,24748
	r11.s64 = r11.s64 + 24748;
	// addi r6,r6,24736
	ctx.r6.s64 = ctx.r6.s64 + 24736;
	// addi r10,r10,24716
	ctx.r10.s64 = ctx.r10.s64 + 24716;
	// addi r9,r9,24704
	ctx.r9.s64 = ctx.r9.s64 + 24704;
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// addi r5,r5,24692
	ctx.r5.s64 = ctx.r5.s64 + 24692;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// addi r8,r8,24676
	ctx.r8.s64 = ctx.r8.s64 + 24676;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// beq cr6,0x82e4ce04
	if (cr6.eq) goto loc_82E4CE04;
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4ce04
	if (cr6.eq) goto loc_82E4CE04;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, r11.u16);
loc_82E4CE04:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4CD48) {
	__imp__sub_82E4CD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r11,r4,1,0,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	r27.s64 = 0;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4cf1c
	if (!cr6.gt) goto loc_82E4CF1C;
loc_82E4CE4C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e4cec8
	if (cr6.eq) goto loc_82E4CEC8;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4cec8
	if (cr6.eq) goto loc_82E4CEC8;
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
	// bne cr6,0x82e4cec8
	if (!cr6.eq) goto loc_82E4CEC8;
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
loc_82E4CEC8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r25.u32);
	// beq cr6,0x82e4cf0c
	if (cr6.eq) goto loc_82E4CF0C;
	// lhz r11,4(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4cf0c
	if (cr6.eq) goto loc_82E4CF0C;
	// lhz r11,6(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r25)
	PPC_STORE_U16(r25.u32 + 6, r11.u16);
loc_82E4CF0C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82e4ce4c
	if (cr6.lt) goto loc_82E4CE4C;
loc_82E4CF1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E4CE10) {
	__imp__sub_82E4CE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r6,32
	ctx.r6.s64 = 32;
loc_82E4CF50:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stvx128 v0,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e4cf50
	if (cr6.lt) goto loc_82E4CF50;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4CF28) {
	__imp__sub_82E4CF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4CFA0) {
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
	// rlwinm r11,r4,1,0,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	r29.s64 = 0;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4d06c
	if (!cr6.gt) goto loc_82E4D06C;
loc_82E4CFDC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e4d05c
	if (cr6.eq) goto loc_82E4D05C;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4d040
	if (!cr6.eq) goto loc_82E4D040;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4D040:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82E4D05C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4cfdc
	if (cr6.lt) goto loc_82E4CFDC;
loc_82E4D06C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E4CFA0) {
	__imp__sub_82E4CFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4D078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	// bl 0x82ca2bb0
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r11,4
	r11.s64 = 4;
	// sth r3,934(r1)
	PPC_STORE_U16(ctx.r1.u32 + 934, ctx.r3.u16);
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,44
	ctx.r4.s64 = 44;
	// stw r26,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, r26.u32);
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r10,44
	ctx.r10.s64 = 44;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,25076
	r11.s64 = r11.s64 + 25076;
	// lis r22,-32768
	r22.s64 = -2147483648;
	// sth r10,4(r21)
	PPC_STORE_U16(r21.u32 + 4, ctx.r10.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r25,r21,8
	r25.s64 = r21.s64 + 8;
	// addi r18,r21,20
	r18.s64 = r21.s64 + 20;
	// addi r23,r21,32
	r23.s64 = r21.s64 + 32;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// sth r10,6(r21)
	PPC_STORE_U16(r21.u32 + 6, ctx.r10.u16);
	// stw r29,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r29.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
	// stw r22,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r22.u32);
	// stw r29,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r29.u32);
	// stw r29,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r29.u32);
	// stw r22,8(r18)
	PPC_STORE_U32(r18.u32 + 8, r22.u32);
	// stw r29,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r29.u32);
	// stw r29,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r29.u32);
	// stw r22,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r22.u32);
	// lwz r31,4(r14)
	r31.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4) );
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// ble cr6,0x82e4d148
	if (!cr6.gt) goto loc_82E4D148;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// blt cr6,0x82e4d13c
	if (cr6.lt) goto loc_82E4D13C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82E4D13C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E4D148:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// bl 0x82d51a98
	sub_82D51A98(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82266f00
	sub_82266F00(ctx, base);
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4) );
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4d1a0
	if (!cr6.gt) goto loc_82E4D1A0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82E4D178:
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4d178
	if (cr6.lt) goto loc_82E4D178;
loc_82E4D1A0:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// lwz r31,4(r14)
	r31.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82e4d1d4
	if (!cr6.lt) goto loc_82E4D1D4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4d1c4
	if (cr6.lt) goto loc_82E4D1C4;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82E4D1C4:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E4D1D4:
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d51a98
	sub_82D51A98(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// mr r17,r29
	r17.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4d440
	if (!cr6.gt) goto loc_82E4D440;
	// lbz r15,935(r1)
	r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 935);
	// mr r20,r29
	r20.u64 = r29.u64;
	// lbz r19,934(r1)
	r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 934);
loc_82E4D210:
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(0) );
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// add r11,r20,r11
	r11.u64 = r20.u64 + r11.u64;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82e5e1f0
	sub_82E5E1F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82e4d640
	if (cr6.eq) goto loc_82E4D640;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e5d988
	sub_82E5D988(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82e4d798
	if (cr6.eq) goto loc_82E4D798;
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4d288
	if (!cr6.eq) goto loc_82E4D288;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4D288:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// mr r24,r29
	r24.u64 = r29.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r27.u32);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4d3d0
	if (!cr6.gt) goto loc_82E4D3D0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82E4D2B8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82d5a2c0
	sub_82D5A2C0(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x82e4d2dc
	if (!cr6.gt) goto loc_82E4D2DC;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82E4D2DC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e4d8f0
	if (cr6.eq) goto loc_82E4D8F0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// lwzx r31,r10,r8
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x82e4d334
	if (!cr6.eq) goto loc_82E4D334;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82E4D334:
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r9
	r30.u64 = r11.u64 + ctx.r9.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,102
	cr6.compare<int32_t>(ctx.r3.s32, 102, xer);
	// bne cr6,0x82e4da88
	if (!cr6.eq) goto loc_82E4DA88;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// extsb r10,r19
	ctx.r10.s64 = r19.s8;
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82e4d3b8
	if (cr6.eq) goto loc_82E4D3B8;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e4d3b8
	if (!cr6.eq) goto loc_82E4D3B8;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82e5ce38
	sub_82E5CE38(ctx, base);
	// stw r3,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r3.u32);
loc_82E4D3B8:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x82e4d2b8
	if (cr6.lt) goto loc_82E4D2B8;
	// lwz r26,956(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(956) );
loc_82E4D3D0:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d3fc
	if (!cr6.eq) goto loc_82E4D3FC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r11,4
	r11.s64 = 4;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D3FC:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d428
	if (!cr6.eq) goto loc_82E4D428;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r11,4
	r11.s64 = 4;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D428:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// cmpw cr6,r17,r11
	cr6.compare<int32_t>(r17.s32, r11.s32, xer);
	// blt cr6,0x82e4d210
	if (cr6.lt) goto loc_82E4D210;
loc_82E4D440:
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4d494
	if (!cr6.gt) goto loc_82E4D494;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82E4D45C:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r31,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r31.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r29.u32);
	// add r31,r8,r31
	r31.u64 = ctx.r8.u64 + r31.u64;
	// lwz r8,12(r21)
	ctx.r8.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82e4d45c
	if (cr6.lt) goto loc_82E4D45C;
loc_82E4D494:
	// lwz r11,8(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82e4d4c4
	if (!cr6.lt) goto loc_82E4D4C4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4d4b4
	if (cr6.lt) goto loc_82E4D4B4;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82E4D4B4:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E4D4C4:
	// stw r31,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r31.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4d544
	if (!cr6.gt) goto loc_82E4D544;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82E4D4DC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + r11.u64;
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82e4d4dc
	if (cr6.lt) goto loc_82E4D4DC;
loc_82E4D544:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e4d5d0
	if (cr6.eq) goto loc_82E4D5D0;
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4d5d0
	if (!cr6.gt) goto loc_82E4D5D0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82E4D560:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4d5b8
	if (!cr6.eq) goto loc_82E4D5B8;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r30,0(r14)
	r30.u64 = PPC_LOAD_U32(r14.u32 + int32_t(0) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4d598
	if (!cr6.eq) goto loc_82E4D598;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4D598:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82E4D5B8:
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e4d560
	if (cr6.lt) goto loc_82E4D560;
loc_82E4D5D0:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d600
	if (!cr6.eq) goto loc_82E4D600;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D600:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d634
	if (!cr6.eq) goto loc_82E4D634;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r10,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D634:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x82ca2c00
	return;
loc_82E4D640:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,29488
	ctx.r4.s64 = r11.s64 + 29488;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r5,-21574
	ctx.r5.s64 = -1413873664;
	// li r8,68
	ctx.r8.s64 = 68;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// ori r5,r5,43656
	ctx.r5.u64 = ctx.r5.u64 | 43656;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29792) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r11,29440
	ctx.r7.s64 = r11.s64 + 29440;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// lhz r11,4(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4d6d8
	if (cr6.eq) goto loc_82E4D6D8;
	// lhz r11,6(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r21)
	PPC_STORE_U16(r21.u32 + 6, r11.u16);
	// bne cr6,0x82e4d6d8
	if (!cr6.eq) goto loc_82E4D6D8;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4D6D8:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d700
	if (!cr6.eq) goto loc_82E4D700;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D700:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d728
	if (!cr6.eq) goto loc_82E4D728;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D728:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d758
	if (!cr6.eq) goto loc_82E4D758;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D758:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d78c
	if (!cr6.eq) goto loc_82E4D78C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r10,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D78C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x82ca2c00
	return;
loc_82E4D798:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r4,r11,29412
	ctx.r4.s64 = r11.s64 + 29412;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r5,-21574
	ctx.r5.s64 = -1413873664;
	// li r8,78
	ctx.r8.s64 = 78;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// ori r5,r5,56746
	ctx.r5.u64 = ctx.r5.u64 | 56746;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29792) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r11,29440
	ctx.r7.s64 = r11.s64 + 29440;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// lhz r11,4(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4d830
	if (cr6.eq) goto loc_82E4D830;
	// lhz r11,6(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r21)
	PPC_STORE_U16(r21.u32 + 6, r11.u16);
	// bne cr6,0x82e4d830
	if (!cr6.eq) goto loc_82E4D830;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4D830:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d858
	if (!cr6.eq) goto loc_82E4D858;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D858:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d880
	if (!cr6.eq) goto loc_82E4D880;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D880:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d8b0
	if (!cr6.eq) goto loc_82E4D8B0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D8B0:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d78c
	if (!cr6.eq) goto loc_82E4D78C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r10,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x82ca2c00
	return;
loc_82E4D8F0:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,29396
	ctx.r4.s64 = r11.s64 + 29396;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r5,-21574
	ctx.r5.s64 = -1413873664;
	// li r8,93
	ctx.r8.s64 = 93;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// ori r5,r5,39389
	ctx.r5.u64 = ctx.r5.u64 | 39389;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29792) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r11,29440
	ctx.r7.s64 = r11.s64 + 29440;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// lhz r11,4(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4d988
	if (cr6.eq) goto loc_82E4D988;
	// lhz r11,6(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r27)
	PPC_STORE_U16(r27.u32 + 6, r11.u16);
	// bne cr6,0x82e4d988
	if (!cr6.eq) goto loc_82E4D988;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4D988:
	// lhz r11,4(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4d9c4
	if (cr6.eq) goto loc_82E4D9C4;
	// lhz r11,6(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r21)
	PPC_STORE_U16(r21.u32 + 6, r11.u16);
	// bne cr6,0x82e4d9c4
	if (!cr6.eq) goto loc_82E4D9C4;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4D9C4:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4d9f0
	if (!cr6.eq) goto loc_82E4D9F0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4D9F0:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4da18
	if (!cr6.eq) goto loc_82E4DA18;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DA18:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4da48
	if (!cr6.eq) goto loc_82E4DA48;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DA48:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4da7c
	if (!cr6.eq) goto loc_82E4DA7C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DA7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x82ca2c00
	return;
loc_82E4DA88:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,29360
	ctx.r4.s64 = r11.s64 + 29360;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r5,-21574
	ctx.r5.s64 = -1413873664;
	// li r8,108
	ctx.r8.s64 = 108;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// ori r5,r5,40301
	ctx.r5.u64 = ctx.r5.u64 | 40301;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29792) );
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r11,29440
	ctx.r7.s64 = r11.s64 + 29440;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// lhz r11,4(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4db20
	if (cr6.eq) goto loc_82E4DB20;
	// lhz r11,6(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r27)
	PPC_STORE_U16(r27.u32 + 6, r11.u16);
	// bne cr6,0x82e4db20
	if (!cr6.eq) goto loc_82E4DB20;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4DB20:
	// lhz r11,4(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4db5c
	if (cr6.eq) goto loc_82E4DB5C;
	// lhz r11,6(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r21)
	PPC_STORE_U16(r21.u32 + 6, r11.u16);
	// bne cr6,0x82e4db5c
	if (!cr6.eq) goto loc_82E4DB5C;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4DB5C:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4db88
	if (!cr6.eq) goto loc_82E4DB88;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DB88:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4dbb0
	if (!cr6.eq) goto loc_82E4DBB0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DBB0:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4dbe0
	if (!cr6.eq) goto loc_82E4DBE0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DBE0:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4da7c
	if (!cr6.eq) goto loc_82E4DA7C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E4D078) {
	__imp__sub_82E4D078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4DC20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,25076
	r11.s64 = r11.s64 + 25076;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// ble cr6,0x82e4dcb0
	if (!cr6.gt) goto loc_82E4DCB0;
	// li r30,0
	r30.s64 = 0;
loc_82E4DC50:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e4dc9c
	if (cr6.eq) goto loc_82E4DC9C;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4dc9c
	if (cr6.eq) goto loc_82E4DC9C;
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
	// bne cr6,0x82e4dc9c
	if (!cr6.eq) goto loc_82E4DC9C;
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
loc_82E4DC9C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4dc50
	if (cr6.lt) goto loc_82E4DC50;
loc_82E4DCB0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4dd18
	if (!cr6.gt) goto loc_82E4DD18;
	// li r30,0
	r30.s64 = 0;
loc_82E4DCC4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4dd04
	if (cr6.eq) goto loc_82E4DD04;
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
	// bne cr6,0x82e4dd04
	if (!cr6.eq) goto loc_82E4DD04;
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
loc_82E4DD04:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4dcc4
	if (cr6.lt) goto loc_82E4DCC4;
loc_82E4DD18:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4dd44
	if (!cr6.eq) goto loc_82E4DD44;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DD44:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4dd70
	if (!cr6.eq) goto loc_82E4DD70;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DD70:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4dda8
	if (!cr6.eq) goto loc_82E4DDA8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DDA8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E4DC20) {
	__imp__sub_82E4DC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4DDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e4cfa0
	sub_82E4CFA0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e4de64
	if (cr6.eq) goto loc_82E4DE64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r31
	r11.u64 = r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// ble cr6,0x82e4de64
	if (!cr6.gt) goto loc_82E4DE64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82E4DE40:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4de40
	if (cr6.lt) goto loc_82E4DE40;
loc_82E4DE64:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4de90
	if (!cr6.eq) goto loc_82E4DE90;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4DE90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4DDC0) {
	__imp__sub_82E4DDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4DEB0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d843f0
	sub_82D843F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// addi r9,r10,25284
	ctx.r9.s64 = ctx.r10.s64 + 25284;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,3052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f13,26348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26348);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82E4DEB0) {
	__imp__sub_82E4DEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4DF28) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e4df58
	if (cr6.eq) goto loc_82E4DF58;
loc_82E4DF50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e4dfcc
	goto loc_82E4DFCC;
loc_82E4DF58:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4df50
	if (!cr6.eq) goto loc_82E4DF50;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,96
	r11.s64 = 96;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82e4deb0
	sub_82E4DEB0(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,80
	r11.s64 = 80;
	// lvx128 v0,r31,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E4DFCC:
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

PPC_WEAK_FUNC(sub_82E4DF28) {
	__imp__sub_82E4DF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4DFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r27,8
	r27.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e4e034
	if (!cr6.lt) goto loc_82E4E034;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,29560
	ctx.r9.s64 = ctx.r9.s64 + 29560;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E4E034:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r4,r30,224
	ctx.r4.s64 = r30.s64 + 224;
	// lfs f0,29556(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29556);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82d4fe00
	sub_82D4FE00(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r4,r29,224
	ctx.r4.s64 = r29.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d4fe00
	sub_82D4FE00(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,416
	r11.s64 = 416;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r29,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// lvlx v11,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lvlx v12,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f0.f64 = double(temp.f32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v10,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vmulfp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v11,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r28
	ea = (r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vmulfp128 v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(208) );
	// addi r3,r30,208
	ctx.r3.s64 = r30.s64 + 208;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(208) );
	// addi r3,r29,208
	ctx.r3.s64 = r29.s64 + 208;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r27,r26
	r11.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e4e170
	if (!cr6.lt) goto loc_82E4E170;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82E4E170:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E4DFE8) {
	__imp__sub_82E4DFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E180) {
	__imp__sub_82E4E180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E190) {
	__imp__sub_82E4E190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E1A0) {
	__imp__sub_82E4E1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E1B0) {
	__imp__sub_82E4E1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E1C0) {
	__imp__sub_82E4E1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(48) );
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82e4e204
	if (!cr6.gt) goto loc_82E4E204;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(44) );
loc_82E4E1DC:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e4e210
	if (cr6.eq) goto loc_82E4E210;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x82e4e210
	if (cr6.eq) goto loc_82E4E210;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82e4e1dc
	if (cr6.lt) goto loc_82E4E1DC;
loc_82E4E204:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82E4E210:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E1C8) {
	__imp__sub_82E4E1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e4e258
	if (cr6.eq) goto loc_82E4E258;
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(56) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4e258
	if (!cr6.gt) goto loc_82E4E258;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(52) );
loc_82E4E23C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e4e264
	if (cr6.eq) goto loc_82E4E264;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4e23c
	if (cr6.lt) goto loc_82E4E23C;
loc_82E4E258:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82E4E264:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(56) );
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,52(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(52) );
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E220) {
	__imp__sub_82E4E220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e4e2d0
	if (cr6.eq) goto loc_82E4E2D0;
	// addi r4,r7,-48
	ctx.r4.s64 = ctx.r7.s64 + -48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4e220
	sub_82E4E220(ctx, base);
	// addic. r11,r7,-48
	xer.ca = ctx.r7.u32 > 47;
	r11.s64 = ctx.r7.s64 + -48;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e4e2c4
	if (!cr0.eq) goto loc_82E4E2C4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82E4E2C4:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82d7cd18
	sub_82D7CD18(ctx, base);
loc_82E4E2D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E290) {
	__imp__sub_82E4E290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-31352
	r11.s64 = r11.s64 + -31352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r11,25464
	ctx.r6.s64 = r11.s64 + 25464;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r5,r11,25452
	ctx.r5.s64 = r11.s64 + 25452;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r11,25432
	ctx.r10.s64 = r11.s64 + 25432;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// addi r7,r7,23856
	ctx.r7.s64 = ctx.r7.s64 + 23856;
	// addi r9,r11,25420
	ctx.r9.s64 = r11.s64 + 25420;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,25408
	ctx.r4.s64 = r11.s64 + 25408;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r8,r11,25384
	ctx.r8.s64 = r11.s64 + 25384;
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E2E0) {
	__imp__sub_82E4E2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E388) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r11,r11,25464
	r11.s64 = r11.s64 + 25464;
	// addi r10,r10,25452
	ctx.r10.s64 = ctx.r10.s64 + 25452;
	// addi r9,r9,25432
	ctx.r9.s64 = ctx.r9.s64 + 25432;
	// addi r8,r8,25420
	ctx.r8.s64 = ctx.r8.s64 + 25420;
	// addi r7,r7,25408
	ctx.r7.s64 = ctx.r7.s64 + 25408;
	// addi r6,r6,25384
	ctx.r6.s64 = ctx.r6.s64 + 25384;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// ble cr6,0x82e4e464
	if (!cr6.gt) goto loc_82E4E464;
	// li r30,0
	r30.s64 = 0;
loc_82E4E3F8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4e450
	if (!cr6.gt) goto loc_82E4E450;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E4E418:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x82e4e438
	if (cr6.eq) goto loc_82E4E438;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4e418
	if (cr6.lt) goto loc_82E4E418;
	// b 0x82e4e450
	goto loc_82E4E450;
loc_82E4E438:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e4e450
	if (cr6.lt) goto loc_82E4E450;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82d7cd18
	sub_82D7CD18(ctx, base);
loc_82E4E450:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e4e3f8
	if (cr6.lt) goto loc_82E4E3F8;
loc_82E4E464:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4e490
	if (!cr6.eq) goto loc_82E4E490;
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
loc_82E4E490:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,23856
	r11.s64 = r11.s64 + 23856;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r10,-31324
	ctx.r10.s64 = ctx.r10.s64 + -31324;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r8,r8,-31312
	ctx.r8.s64 = ctx.r8.s64 + -31312;
	// addi r7,r7,-31352
	ctx.r7.s64 = ctx.r7.s64 + -31352;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// addi r6,r6,14712
	ctx.r6.s64 = ctx.r6.s64 + 14712;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4E388) {
	__imp__sub_82E4E388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E4E0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e4e514
	if (!cr6.eq) goto loc_82E4E514;
loc_82E4E500:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82E4E514:
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4e544
	if (!cr6.gt) goto loc_82E4E544;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
loc_82E4E528:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x82e4e500
	if (cr6.eq) goto loc_82E4E500;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4e528
	if (cr6.lt) goto loc_82E4E528;
loc_82E4E544:
	// addi r31,r30,52
	r31.s64 = r30.s64 + 52;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e4e568
	if (!cr6.eq) goto loc_82E4E568;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E4E568:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4e5cc
	if (!cr6.gt) goto loc_82E4E5CC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E4E5A4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82e4e5c4
	if (cr6.eq) goto loc_82E4E5C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4e5a4
	if (cr6.lt) goto loc_82E4E5A4;
	// b 0x82e4e5cc
	goto loc_82E4E5CC;
loc_82E4E5C4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e4e5d8
	if (!cr6.lt) goto loc_82E4E5D8;
loc_82E4E5CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d7cbe8
	sub_82D7CBE8(ctx, base);
loc_82E4E5D8:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4E4E0) {
	__imp__sub_82E4E4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E5F0) {
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
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e4e684
	if (!cr6.eq) goto loc_82E4E684;
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
	// beq cr6,0x82e4e640
	if (cr6.eq) goto loc_82E4E640;
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
	// b 0x82e4e64c
	goto loc_82E4E64C;
loc_82E4E640:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82E4E64C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4e67c
	if (cr6.eq) goto loc_82E4E67C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r9.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// sth r9,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r9.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(r11.u32 + 14, ctx.r10.u16);
	// b 0x82e4e680
	goto loc_82E4E680;
loc_82E4E67C:
	// li r11,0
	r11.s64 = 0;
loc_82E4E680:
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
loc_82E4E684:
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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

PPC_WEAK_FUNC(sub_82E4E5F0) {
	__imp__sub_82E4E5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e4ea78
	if (cr6.eq) goto loc_82E4EA78;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82e4ea78
	if (cr6.eq) goto loc_82E4EA78;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4e79c
	if (cr6.eq) goto loc_82E4E79C;
	// clrlwi r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4e6d4
	if (cr6.eq) goto loc_82E4E6D4;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(52) );
	// b 0x82e4e6d8
	goto loc_82E4E6D8;
loc_82E4E6D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E4E6D8:
	// rlwinm r11,r5,0,30,30
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4e6ec
	if (cr6.eq) goto loc_82E4E6EC;
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(56) );
	// b 0x82e4e6f0
	goto loc_82E4E6F0;
loc_82E4E6EC:
	// li r11,0
	r11.s64 = 0;
loc_82E4E6F0:
	// rlwinm r9,r5,0,29,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e708
	if (cr6.eq) goto loc_82E4E708;
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(60) );
	// b 0x82e4e70c
	goto loc_82E4E70C;
loc_82E4E708:
	// li r11,0
	r11.s64 = 0;
loc_82E4E70C:
	// rlwinm r9,r5,0,28,28
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e724
	if (cr6.eq) goto loc_82E4E724;
	// lwz r11,64(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(64) );
	// b 0x82e4e728
	goto loc_82E4E728;
loc_82E4E724:
	// li r11,0
	r11.s64 = 0;
loc_82E4E728:
	// rlwinm r9,r5,0,27,27
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e740
	if (cr6.eq) goto loc_82E4E740;
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(68) );
	// b 0x82e4e744
	goto loc_82E4E744;
loc_82E4E740:
	// li r11,0
	r11.s64 = 0;
loc_82E4E744:
	// rlwinm r9,r5,0,26,26
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e75c
	if (cr6.eq) goto loc_82E4E75C;
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(72) );
	// b 0x82e4e760
	goto loc_82E4E760;
loc_82E4E75C:
	// li r11,0
	r11.s64 = 0;
loc_82E4E760:
	// rlwinm r9,r5,0,25,25
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e778
	if (cr6.eq) goto loc_82E4E778;
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(76) );
	// b 0x82e4e77c
	goto loc_82E4E77C;
loc_82E4E778:
	// li r11,0
	r11.s64 = 0;
loc_82E4E77C:
	// rlwinm r9,r5,0,24,24
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e794
	if (cr6.eq) goto loc_82E4E794;
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// b 0x82e4e798
	goto loc_82E4E798;
loc_82E4E794:
	// li r11,0
	r11.s64 = 0;
loc_82E4E798:
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E4E79C:
	// rlwinm r10,r5,0,16,23
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4e888
	if (cr6.eq) goto loc_82E4E888;
	// rlwinm r10,r5,0,23,23
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4e7bc
	if (cr6.eq) goto loc_82E4E7BC;
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(84) );
	// b 0x82e4e7c0
	goto loc_82E4E7C0;
loc_82E4E7BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E4E7C0:
	// rlwinm r9,r5,0,22,22
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e7d8
	if (cr6.eq) goto loc_82E4E7D8;
	// lwz r11,88(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(88) );
	// b 0x82e4e7dc
	goto loc_82E4E7DC;
loc_82E4E7D8:
	// li r11,0
	r11.s64 = 0;
loc_82E4E7DC:
	// rlwinm r9,r5,0,21,21
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x400;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e7f4
	if (cr6.eq) goto loc_82E4E7F4;
	// lwz r11,92(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(92) );
	// b 0x82e4e7f8
	goto loc_82E4E7F8;
loc_82E4E7F4:
	// li r11,0
	r11.s64 = 0;
loc_82E4E7F8:
	// rlwinm r9,r5,0,20,20
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e810
	if (cr6.eq) goto loc_82E4E810;
	// lwz r11,96(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(96) );
	// b 0x82e4e814
	goto loc_82E4E814;
loc_82E4E810:
	// li r11,0
	r11.s64 = 0;
loc_82E4E814:
	// rlwinm r9,r5,0,19,19
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e82c
	if (cr6.eq) goto loc_82E4E82C;
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(100) );
	// b 0x82e4e830
	goto loc_82E4E830;
loc_82E4E82C:
	// li r11,0
	r11.s64 = 0;
loc_82E4E830:
	// rlwinm r9,r5,0,18,18
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e848
	if (cr6.eq) goto loc_82E4E848;
	// lwz r11,104(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(104) );
	// b 0x82e4e84c
	goto loc_82E4E84C;
loc_82E4E848:
	// li r11,0
	r11.s64 = 0;
loc_82E4E84C:
	// rlwinm r9,r5,0,17,17
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e864
	if (cr6.eq) goto loc_82E4E864;
	// lwz r11,108(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(108) );
	// b 0x82e4e868
	goto loc_82E4E868;
loc_82E4E864:
	// li r11,0
	r11.s64 = 0;
loc_82E4E868:
	// rlwinm r9,r5,0,16,16
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e880
	if (cr6.eq) goto loc_82E4E880;
	// lwz r11,112(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(112) );
	// b 0x82e4e884
	goto loc_82E4E884;
loc_82E4E880:
	// li r11,0
	r11.s64 = 0;
loc_82E4E884:
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E4E888:
	// rlwinm r10,r5,0,8,15
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4e974
	if (cr6.eq) goto loc_82E4E974;
	// rlwinm r10,r5,0,15,15
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4e8a8
	if (cr6.eq) goto loc_82E4E8A8;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(116) );
	// b 0x82e4e8ac
	goto loc_82E4E8AC;
loc_82E4E8A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E4E8AC:
	// rlwinm r9,r5,0,14,14
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e8c4
	if (cr6.eq) goto loc_82E4E8C4;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// b 0x82e4e8c8
	goto loc_82E4E8C8;
loc_82E4E8C4:
	// li r11,0
	r11.s64 = 0;
loc_82E4E8C8:
	// rlwinm r9,r5,0,13,13
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e8e0
	if (cr6.eq) goto loc_82E4E8E0;
	// lwz r11,124(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(124) );
	// b 0x82e4e8e4
	goto loc_82E4E8E4;
loc_82E4E8E0:
	// li r11,0
	r11.s64 = 0;
loc_82E4E8E4:
	// rlwinm r9,r5,0,12,12
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e8fc
	if (cr6.eq) goto loc_82E4E8FC;
	// lwz r11,128(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(128) );
	// b 0x82e4e900
	goto loc_82E4E900;
loc_82E4E8FC:
	// li r11,0
	r11.s64 = 0;
loc_82E4E900:
	// rlwinm r9,r5,0,11,11
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e918
	if (cr6.eq) goto loc_82E4E918;
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(132) );
	// b 0x82e4e91c
	goto loc_82E4E91C;
loc_82E4E918:
	// li r11,0
	r11.s64 = 0;
loc_82E4E91C:
	// rlwinm r9,r5,0,10,10
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e934
	if (cr6.eq) goto loc_82E4E934;
	// lwz r11,136(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(136) );
	// b 0x82e4e938
	goto loc_82E4E938;
loc_82E4E934:
	// li r11,0
	r11.s64 = 0;
loc_82E4E938:
	// rlwinm r9,r5,0,9,9
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x400000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e950
	if (cr6.eq) goto loc_82E4E950;
	// lwz r11,140(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(140) );
	// b 0x82e4e954
	goto loc_82E4E954;
loc_82E4E950:
	// li r11,0
	r11.s64 = 0;
loc_82E4E954:
	// rlwinm r9,r5,0,8,8
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e96c
	if (cr6.eq) goto loc_82E4E96C;
	// lwz r11,144(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(144) );
	// b 0x82e4e970
	goto loc_82E4E970;
loc_82E4E96C:
	// li r11,0
	r11.s64 = 0;
loc_82E4E970:
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E4E974:
	// rlwinm r10,r5,0,0,7
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4ea60
	if (cr6.eq) goto loc_82E4EA60;
	// rlwinm r10,r5,0,7,7
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e4e994
	if (cr6.eq) goto loc_82E4E994;
	// lwz r10,148(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(148) );
	// b 0x82e4e998
	goto loc_82E4E998;
loc_82E4E994:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E4E998:
	// rlwinm r9,r5,0,6,6
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2000000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e9b0
	if (cr6.eq) goto loc_82E4E9B0;
	// lwz r11,152(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(152) );
	// b 0x82e4e9b4
	goto loc_82E4E9B4;
loc_82E4E9B0:
	// li r11,0
	r11.s64 = 0;
loc_82E4E9B4:
	// rlwinm r9,r5,0,5,5
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4000000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e9cc
	if (cr6.eq) goto loc_82E4E9CC;
	// lwz r11,156(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(156) );
	// b 0x82e4e9d0
	goto loc_82E4E9D0;
loc_82E4E9CC:
	// li r11,0
	r11.s64 = 0;
loc_82E4E9D0:
	// rlwinm r9,r5,0,4,4
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4e9e8
	if (cr6.eq) goto loc_82E4E9E8;
	// lwz r11,160(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(160) );
	// b 0x82e4e9ec
	goto loc_82E4E9EC;
loc_82E4E9E8:
	// li r11,0
	r11.s64 = 0;
loc_82E4E9EC:
	// rlwinm r9,r5,0,3,3
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10000000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4ea04
	if (cr6.eq) goto loc_82E4EA04;
	// lwz r11,164(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(164) );
	// b 0x82e4ea08
	goto loc_82E4EA08;
loc_82E4EA04:
	// li r11,0
	r11.s64 = 0;
loc_82E4EA08:
	// rlwinm r9,r5,0,2,2
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4ea20
	if (cr6.eq) goto loc_82E4EA20;
	// lwz r11,168(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(168) );
	// b 0x82e4ea24
	goto loc_82E4EA24;
loc_82E4EA20:
	// li r11,0
	r11.s64 = 0;
loc_82E4EA24:
	// rlwinm r9,r5,0,1,1
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40000000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4ea3c
	if (cr6.eq) goto loc_82E4EA3C;
	// lwz r11,172(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// b 0x82e4ea40
	goto loc_82E4EA40;
loc_82E4EA3C:
	// li r11,0
	r11.s64 = 0;
loc_82E4EA40:
	// rlwinm r9,r5,0,0,0
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e4ea58
	if (cr6.eq) goto loc_82E4EA58;
	// lwz r11,176(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(176) );
	// b 0x82e4ea5c
	goto loc_82E4EA5C;
loc_82E4EA58:
	// li r11,0
	r11.s64 = 0;
loc_82E4EA5C:
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E4EA60:
	// and r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82E4EA78:
	// lbz r11,48(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4E6A0) {
	__imp__sub_82E4E6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,28(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(28) );
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(28) );
	// b 0x82e4e6a0
	sub_82E4E6A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4EA88) {
	__imp__sub_82E4EA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EA98) {
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
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4eae8
	if (cr6.eq) goto loc_82E4EAE8;
loc_82E4EAD8:
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e4ead8
	if (!cr6.eq) goto loc_82E4EAD8;
loc_82E4EAE8:
	// addi r4,r29,-12
	ctx.r4.s64 = r29.s64 + -12;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e4e6a0
	sub_82E4E6A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E4EA98) {
	__imp__sub_82E4EA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r29,-12
	ctx.r4.s64 = r29.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e4e6a0
	sub_82E4E6A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4EB00) {
	__imp__sub_82E4EB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e4e6a0
	sub_82E4E6A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E4EB68) {
	__imp__sub_82E4EB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EBB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,28(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(28) );
	// addi r4,r4,-20
	ctx.r4.s64 = ctx.r4.s64 + -20;
	// lwz r5,36(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(36) );
	// b 0x82e4e6a0
	sub_82E4E6A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4EBB8) {
	__imp__sub_82E4EBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82e4ebe4
	if (!cr6.eq) goto loc_82E4EBE4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82e4ebe4
	if (!cr6.eq) goto loc_82E4EBE4;
	// li r11,1
	r11.s64 = 1;
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r11.u8);
	// blr 
	return;
loc_82E4EBE4:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E4EBF0:
	// slw r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r11,r4
	ctx.r7.u64 = r11.u64 & ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e4ec0c
	if (cr6.eq) goto loc_82E4EC0C;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82E4EC0C:
	// and r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4ec24
	if (cr6.eq) goto loc_82E4EC24;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82E4EC24:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x82e4ebf0
	if (cr6.lt) goto loc_82E4EBF0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4EBC8) {
	__imp__sub_82E4EBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82e4ec54
	if (!cr6.eq) goto loc_82E4EC54;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82e4ec54
	if (!cr6.eq) goto loc_82E4EC54;
	// li r11,0
	r11.s64 = 0;
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r11.u8);
	// blr 
	return;
loc_82E4EC54:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E4EC60:
	// slw r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r11,r4
	ctx.r7.u64 = r11.u64 & ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e4ec7c
	if (cr6.eq) goto loc_82E4EC7C;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// andc r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82E4EC7C:
	// and r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4ec94
	if (cr6.eq) goto loc_82E4EC94;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// andc r11,r11,r4
	r11.u64 = r11.u64 & ~ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82E4EC94:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x82e4ec60
	if (cr6.lt) goto loc_82E4EC60;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4EC38) {
	__imp__sub_82E4EC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4ECA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,1
	r30.s64 = 1;
	// addi r10,r10,-31352
	ctx.r10.s64 = ctx.r10.s64 + -31352;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-31312
	ctx.r9.s64 = ctx.r9.s64 + -31312;
	// sth r30,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r30.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r31,-32253
	r31.s64 = -2113732608;
	// addi r8,r8,-31292
	ctx.r8.s64 = ctx.r8.s64 + -31292;
	// addi r7,r7,-31324
	ctx.r7.s64 = ctx.r7.s64 + -31324;
	// addi r10,r10,25612
	ctx.r10.s64 = ctx.r10.s64 + 25612;
	// addi r6,r6,25656
	ctx.r6.s64 = ctx.r6.s64 + 25656;
	// addi r5,r5,25644
	ctx.r5.s64 = ctx.r5.s64 + 25644;
	// addi r4,r4,25624
	ctx.r4.s64 = ctx.r4.s64 + 25624;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r31,r31,25600
	r31.s64 = r31.s64 + 25600;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stb r30,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E4ED3C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82e4ed3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E4ED3C;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4ECA8) {
	__imp__sub_82E4ECA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4ED58) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,25784
	r11.s64 = r11.s64 + 25784;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// ble cr6,0x82e4eda0
	if (!cr6.gt) goto loc_82E4EDA0;
	// li r29,0
	r29.s64 = 0;
loc_82E4ED84:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82d7a018
	sub_82D7A018(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e4ed84
	if (!cr6.eq) goto loc_82E4ED84;
loc_82E4EDA0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4edd8
	if (!cr6.eq) goto loc_82E4EDD8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4EDD8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E4ED58) {
	__imp__sub_82E4ED58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d849b8
	sub_82D849B8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// addi r10,r10,26012
	ctx.r10.s64 = ctx.r10.s64 + 26012;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f30,52(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stb r9,56(r31)
	PPC_STORE_U8(r31.u32 + 56, ctx.r9.u8);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4EDF0) {
	__imp__sub_82E4EDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82e4eee0
	if (cr6.eq) goto loc_82E4EEE0;
loc_82E4EED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e4ef34
	goto loc_82E4EF34;
loc_82E4EEE0:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4eed8
	if (!cr6.eq) goto loc_82E4EED8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f2,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lfs f1,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82e4edf0
	sub_82E4EDF0(ctx, base);
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, r11.u8);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
loc_82E4EF34:
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

PPC_WEAK_FUNC(sub_82E4EEB0) {
	__imp__sub_82E4EEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4EF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,56(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4f03c
	if (cr6.eq) goto loc_82E4F03C;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r5,r31,432
	ctx.r5.s64 = r31.s64 + 432;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,32
	r11.s64 = 32;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,208
	r28.s64 = r31.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// vmsum3fp128 v13,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvewx v13,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4ff18
	sub_82D4FF18(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4fe98
	sub_82D4FE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(92) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E4F03C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E4EF50) {
	__imp__sub_82E4EF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F048) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r11,r11,2,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4f164
	if (!cr6.eq) goto loc_82E4F164;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4f0e0
	if (!cr6.gt) goto loc_82E4F0E0;
	// li r31,0
	r31.s64 = 0;
loc_82E4F07C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e4f0cc
	if (cr6.eq) goto loc_82E4F0CC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(156) );
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e4f0b4
	if (cr6.lt) goto loc_82E4F0B4;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82e4f0cc
	goto loc_82E4F0CC;
loc_82E4F0B4:
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(156) );
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(152) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
loc_82E4F0CC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e4f07c
	if (cr6.lt) goto loc_82E4F07C;
loc_82E4F0E0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4f164
	if (!cr6.gt) goto loc_82E4F164;
	// li r29,0
	r29.s64 = 0;
loc_82E4F0F4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwzx r31,r29,r11
	r31.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e4f150
	if (cr6.eq) goto loc_82E4F150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e4f048
	sub_82E4F048(ctx, base);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e4f138
	if (cr6.lt) goto loc_82E4F138;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82e4f150
	goto loc_82E4F150;
loc_82E4F138:
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r31.u32);
loc_82E4F150:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e4f0f4
	if (cr6.lt) goto loc_82E4F0F4;
loc_82E4F164:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4f190
	if (!cr6.eq) goto loc_82E4F190;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4F190:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4f1bc
	if (!cr6.eq) goto loc_82E4F1BC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4F1BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4F048) {
	__imp__sub_82E4F048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F1C8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,26568
	r11.s64 = r11.s64 + 26568;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82e4f1f8
	if (cr6.eq) goto loc_82E4F1F8;
	// bl 0x82d7a018
	sub_82D7A018(ctx, base);
loc_82E4F1F8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e4f208
	if (cr6.eq) goto loc_82E4F208;
	// bl 0x82d7a018
	sub_82D7A018(ctx, base);
loc_82E4F208:
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x82e4f048
	sub_82E4F048(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4f23c
	if (!cr6.eq) goto loc_82E4F23C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4F23C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4f268
	if (!cr6.eq) goto loc_82E4F268;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4F268:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4f294
	if (!cr6.eq) goto loc_82E4F294;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4F294:
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

PPC_WEAK_FUNC(sub_82E4F1C8) {
	__imp__sub_82E4F1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F2B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// vspltisw v11,-1
	simd::store_i32(ctx.v11.u32, simd::set1_i32(int32_t(0xFFFFFFFF)));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// li r10,224
	ctx.r10.s64 = 224;
	// lfs f0,-16936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lvx128 v12,r0,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,5280
	r11.s64 = r11.s64 + 5280;
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,29520
	r11.s64 = r11.s64 + 29520;
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vand v0,v12,v0
	simd::store_u8(ctx.v0.u8, simd::and_u8(simd::load_u8(ctx.v12.u8), simd::load_u8(ctx.v0.u8)));
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v9,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// vcmpgefp v0,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::cmpge_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vor v0,v0,v13
	simd::store_i8(ctx.v0.u8, simd::or_i8(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v13.u8)));
	// vcmpequw. v0,v0,v11
	simd::store_u32(ctx.v0.u32, simd::cmpeq_i32(simd::load_u32(ctx.v0.u32), simd::load_u32(ctx.v11.u32)));
	cr6.setFromMask(simd::load_f32_aligned(ctx.v0.f32), 0xF);
	// mfocrf r11,2
	r11.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r11,r11,0,24,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4f354
	if (!cr6.eq) goto loc_82E4F354;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e4f354
	if (cr6.eq) goto loc_82E4F354;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4f354
	if (cr6.eq) goto loc_82E4F354;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
loc_82E4F354:
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82E4F2B8) {
	__imp__sub_82E4F2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4F378) {
	__imp__sub_82E4F378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F380) {
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
	// bl 0x82d84918
	sub_82D84918(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

PPC_WEAK_FUNC(sub_82E4F380) {
	__imp__sub_82E4F380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F3B8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d849b8
	sub_82D849B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f0,3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,27084
	ctx.r9.s64 = ctx.r10.s64 + 27084;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f13,2848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2848);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f12,29576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29576);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f11,29572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29572);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r6,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_82E4F3B8) {
	__imp__sub_82E4F3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
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
	// bl 0x82ca2bd8
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// bl 0x82d849b8
	sub_82D849B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,27084
	r11.s64 = r11.s64 + 27084;
	// li r25,32
	r25.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// lfs f0,29576(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29576);
	f0.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stvx128 v0,r31,r25
	ea = (r31.u32 + r25.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f29,76(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// beq cr6,0x82e4f5ac
	if (cr6.eq) goto loc_82E4F5AC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82e4f578
	if (!cr6.lt) goto loc_82E4F578;
	// rlwinm r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4f544
	if (!cr6.eq) goto loc_82E4F544;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4F544:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82E4F578:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// ble cr6,0x82e4f5ac
	if (!cr6.gt) goto loc_82E4F5AC;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82E4F594:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x82e4f594
	if (!cr6.eq) goto loc_82E4F594;
loc_82E4F5AC:
	// li r29,-1
	r29.s64 = -1;
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82e4f710
	if (cr6.eq) goto loc_82E4F710;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82dae6f0
	sub_82DAE6F0(ctx, base);
	// bl 0x82d58de0
	sub_82D58DE0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// addi r7,r9,13860
	ctx.r7.s64 = ctx.r9.s64 + 13860;
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(16) );
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
	// li r28,16
	r28.s64 = 16;
	// addi r10,r10,13
	ctx.r10.s64 = ctx.r10.s64 + 13;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// lvx128 v13,r11,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r11,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + r25.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,320
	r11.s64 = ctx.r1.s64 + 320;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(116) );
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// rotlwi r30,r8,2
	r30.u64 = rotl32(ctx.r8.u32, 2);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,2472(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(2472) );
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r10,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r10,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r25.u32) & ~0xF), VectorMaskL));
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r26.u32);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3164);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e4f714
	if (cr6.eq) goto loc_82E4F714;
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
loc_82E4F710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E4F714:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E4F468) {
	__imp__sub_82E4F468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4F728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r4,r29,224
	ctx.r4.s64 = r29.s64 + 224;
	// bl 0x82d4fe00
	sub_82D4FE00(ctx, base);
	// li r11,400
	r11.s64 = 400;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r8,304
	ctx.r8.s64 = 304;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lvx128 v13,r29,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// vspltw v13,v13,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r30,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v127,v0,v12
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(v127.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvewx v13,r0,r9
	PPC_STORE_U32((ctx.r9.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r9.u32) & 0xF) >> 2));
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v13,r29,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d59008
	sub_82D59008(ctx, base);
	// lwz r11,208(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(208) );
	// addi r31,r29,208
	r31.s64 = r29.s64 + 208;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82d593b8
	sub_82D593B8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82d593b8
	sub_82D593B8(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d592d0
	sub_82D592D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d59098
	sub_82D59098(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e4fa30
	if (!cr6.eq) goto loc_82E4FA30;
	// addi r28,r30,76
	r28.s64 = r30.s64 + 76;
	// li r11,416
	r11.s64 = 416;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvlx v13,0,r28
	temp.u32 = r0.u32 + r28.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v0,r29,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,432
	r11.s64 = 432;
	// lvlx v0,0,r28
	temp.u32 = r0.u32 + r28.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r29,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// li r10,96
	ctx.r10.s64 = 96;
	// lfs f13,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r9,208
	ctx.r9.s64 = 208;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lvx128 v10,r31,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvlx v12,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmulfp128 v11,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v13,r31,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v13,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmulfp128 v9,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v0,v12,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4ff18
	sub_82D4FF18(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vxor v0,v13,v0
	simd::store_u8(ctx.v0.u8, simd::xor_i8(simd::load_u8(ctx.v13.u8), simd::load_u8(ctx.v0.u8)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// bl 0x82d84640
	sub_82D84640(ctx, base);
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82e4f9c8
	if (!cr6.gt) goto loc_82E4F9C8;
	// fsqrts f12,f13
	ctx.f12.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E4F9C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(88) );
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e4fa30
	if (!cr6.gt) goto loc_82E4FA30;
	// li r29,0
	r29.s64 = 0;
loc_82E4FA00:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(88) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e4fa00
	if (cr6.lt) goto loc_82E4FA00;
loc_82E4FA30:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E4F728) {
	__imp__sub_82E4F728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FA40) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82e4fa6c
	if (cr6.eq) goto loc_82E4FA6C;
loc_82E4FA60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82E4FA6C:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e4fa60
	if (!cr6.eq) goto loc_82E4FA60;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r27,4
	r27.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,96
	r11.s64 = 96;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82e4f3b8
	sub_82E4F3B8(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,48
	r11.s64 = 48;
	// addi r29,r30,84
	r29.s64 = r30.s64 + 84;
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r11
	ea = (r30.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82e4fb58
	if (!cr6.lt) goto loc_82E4FB58;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4fb2c
	if (!cr6.eq) goto loc_82E4FB2C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4FB2C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_82E4FB58:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// ble cr6,0x82e4fb8c
	if (!cr6.gt) goto loc_82E4FB8C;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82E4FB74:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x82e4fb74
	if (!cr6.eq) goto loc_82E4FB74;
loc_82E4FB8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E4FA40) {
	__imp__sub_82E4FA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FB98) {
	__imp__sub_82E4FB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FBA8) {
	__imp__sub_82E4FBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FBB8) {
	__imp__sub_82E4FBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FBC8) {
	__imp__sub_82E4FBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FBD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FBD8) {
	__imp__sub_82E4FBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,16(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// lbz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e4fc08
	if (!cr6.gt) goto loc_82E4FC08;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// b 0x82e4fc10
	goto loc_82E4FC10;
loc_82E4FC08:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E4FC10:
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(48) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82e4fc60
	if (!cr6.gt) goto loc_82E4FC60;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(44) );
loc_82E4FC24:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bne cr6,0x82e4fc40
	if (!cr6.eq) goto loc_82E4FC40;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq cr6,0x82e4fc44
	if (cr6.eq) goto loc_82E4FC44;
loc_82E4FC40:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E4FC44:
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82e4fc64
	if (!cr6.eq) goto loc_82E4FC64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82e4fc24
	if (cr6.lt) goto loc_82E4FC24;
loc_82E4FC60:
	// li r11,-1
	r11.s64 = -1;
loc_82E4FC64:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FBE0) {
	__imp__sub_82E4FBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e4fcf8
	if (!cr6.gt) goto loc_82E4FCF8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E4FC94:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e4fcc0
	if (cr6.eq) goto loc_82E4FCC0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e4fcc0
	if (cr6.eq) goto loc_82E4FCC0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x82e4fcec
	goto loc_82E4FCEC;
loc_82E4FCC0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
loc_82E4FCEC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e4fc94
	if (cr6.lt) goto loc_82E4FC94;
loc_82E4FCF8:
	// addic. r10,r11,-48
	xer.ca = r11.u32 > 47;
	ctx.r10.s64 = r11.s64 + -48;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e4fd04
	if (!cr0.eq) goto loc_82E4FD04;
	// li r11,0
	r11.s64 = 0;
loc_82E4FD04:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82d7cd18
	sub_82D7CD18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E4FC78) {
	__imp__sub_82E4FC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FD10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FD10) {
	__imp__sub_82E4FD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-31352
	r11.s64 = r11.s64 + -31352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r11,27312
	ctx.r6.s64 = r11.s64 + 27312;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r5,r11,27300
	ctx.r5.s64 = r11.s64 + 27300;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r11,27280
	ctx.r10.s64 = r11.s64 + 27280;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// addi r7,r7,23856
	ctx.r7.s64 = ctx.r7.s64 + 23856;
	// addi r9,r11,27268
	ctx.r9.s64 = r11.s64 + 27268;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,27256
	ctx.r4.s64 = r11.s64 + 27256;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r8,r11,27232
	ctx.r8.s64 = r11.s64 + 27232;
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E4FD18) {
	__imp__sub_82E4FD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FDC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r11,r11,27312
	r11.s64 = r11.s64 + 27312;
	// addi r10,r10,27300
	ctx.r10.s64 = ctx.r10.s64 + 27300;
	// addi r9,r9,27280
	ctx.r9.s64 = ctx.r9.s64 + 27280;
	// addi r8,r8,27268
	ctx.r8.s64 = ctx.r8.s64 + 27268;
	// addi r7,r7,27256
	ctx.r7.s64 = ctx.r7.s64 + 27256;
	// addi r6,r6,27232
	ctx.r6.s64 = ctx.r6.s64 + 27232;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// ble cr6,0x82e4fefc
	if (!cr6.gt) goto loc_82E4FEFC;
	// li r30,0
	r30.s64 = 0;
loc_82E4FE30:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4fe88
	if (!cr6.gt) goto loc_82E4FE88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E4FE50:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x82e4fe70
	if (cr6.eq) goto loc_82E4FE70;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4fe50
	if (cr6.lt) goto loc_82E4FE50;
	// b 0x82e4fe88
	goto loc_82E4FE88;
loc_82E4FE70:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e4fe88
	if (cr6.lt) goto loc_82E4FE88;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82d7cd18
	sub_82D7CD18(ctx, base);
loc_82E4FE88:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e4fee8
	if (!cr6.gt) goto loc_82E4FEE8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E4FEAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x82e4fecc
	if (cr6.eq) goto loc_82E4FECC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e4feac
	if (cr6.lt) goto loc_82E4FEAC;
	// b 0x82e4fee8
	goto loc_82E4FEE8;
loc_82E4FECC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e4fee8
	if (cr6.lt) goto loc_82E4FEE8;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82d7cd18
	sub_82D7CD18(ctx, base);
loc_82E4FEE8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e4fe30
	if (cr6.lt) goto loc_82E4FE30;
loc_82E4FEFC:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e4ff28
	if (!cr6.eq) goto loc_82E4FF28;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E4FF28:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,23856
	r11.s64 = r11.s64 + 23856;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r10,-31324
	ctx.r10.s64 = ctx.r10.s64 + -31324;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r8,r8,-31312
	ctx.r8.s64 = ctx.r8.s64 + -31312;
	// addi r7,r7,-31352
	ctx.r7.s64 = ctx.r7.s64 + -31352;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// addi r6,r6,14712
	ctx.r6.s64 = ctx.r6.s64 + 14712;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4FDC0) {
	__imp__sub_82E4FDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E4FF78) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// ble cr6,0x82e4ffa4
	if (!cr6.gt) goto loc_82E4FFA4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82e4ffac
	goto loc_82E4FFAC;
loc_82E4FFA4:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82E4FFAC:
	// addi r31,r29,52
	r31.s64 = r29.s64 + 52;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82e50014
	if (!cr6.gt) goto loc_82E50014;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82E4FFCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82e4ffe8
	if (!cr6.eq) goto loc_82E4FFE8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82e4ffec
	if (cr6.eq) goto loc_82E4FFEC;
loc_82E4FFE8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E4FFEC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e5000c
	if (!cr6.eq) goto loc_82E5000C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82e4ffcc
	if (cr6.lt) goto loc_82E4FFCC;
	// b 0x82e50014
	goto loc_82E50014;
loc_82E5000C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x82e5012c
	if (cr6.gt) goto loc_82E5012C;
loc_82E50014:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e50034
	if (!cr6.eq) goto loc_82E50034;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E50034:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r11,r9
	PPC_STORE_U64(r11.u32 + ctx.r9.u32, ctx.r10.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r31,r29,48
	r31.s64 = r29.s64 + 48;
	// bne cr6,0x82e50064
	if (!cr6.eq) goto loc_82E50064;
	// li r31,0
	r31.s64 = 0;
loc_82E50064:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e500a8
	if (!cr6.gt) goto loc_82E500A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E50080:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// beq cr6,0x82e500a0
	if (cr6.eq) goto loc_82E500A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e50080
	if (cr6.lt) goto loc_82E50080;
	// b 0x82e500a8
	goto loc_82E500A8;
loc_82E500A0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e500c0
	if (!cr6.lt) goto loc_82E500C0;
loc_82E500A8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// bne cr6,0x82e500b8
	if (!cr6.eq) goto loc_82E500B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E500B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7cbe8
	sub_82D7CBE8(ctx, base);
loc_82E500C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r31,r29,48
	r31.s64 = r29.s64 + 48;
	// bne cr6,0x82e500d0
	if (!cr6.eq) goto loc_82E500D0;
	// li r31,0
	r31.s64 = 0;
loc_82E500D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e50114
	if (!cr6.gt) goto loc_82E50114;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E500EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// beq cr6,0x82e5010c
	if (cr6.eq) goto loc_82E5010C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e500ec
	if (cr6.lt) goto loc_82E500EC;
	// b 0x82e50114
	goto loc_82E50114;
loc_82E5010C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e5012c
	if (!cr6.lt) goto loc_82E5012C;
loc_82E50114:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// bne cr6,0x82e50124
	if (!cr6.eq) goto loc_82E50124;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E50124:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d7cbe8
	sub_82D7CBE8(ctx, base);
loc_82E5012C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E4FF78) {
	__imp__sub_82E4FF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50138) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x82e50164
	if (!cr6.gt) goto loc_82E50164;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82e5016c
	goto loc_82E5016C;
loc_82E50164:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82E5016C:
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82e502d8
	if (!cr6.gt) goto loc_82E502D8;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
loc_82E50180:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x82e5019c
	if (!cr6.eq) goto loc_82E5019C;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x82e501a0
	if (cr6.eq) goto loc_82E501A0;
loc_82E5019C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82E501A0:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82e501c4
	if (!cr6.eq) goto loc_82E501C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82e50180
	if (cr6.lt) goto loc_82E50180;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82E501C4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e502d8
	if (cr6.lt) goto loc_82E502D8;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// bne cr6,0x82e50214
	if (!cr6.eq) goto loc_82E50214;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E50214:
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e50268
	if (!cr6.gt) goto loc_82E50268;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E50228:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e50248
	if (cr6.eq) goto loc_82E50248;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e50228
	if (cr6.lt) goto loc_82E50228;
	// b 0x82e50268
	goto loc_82E50268;
loc_82E50248:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82e50268
	if (cr6.lt) goto loc_82E50268;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bne cr6,0x82e50260
	if (!cr6.eq) goto loc_82E50260;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E50260:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7cd18
	sub_82D7CD18(ctx, base);
loc_82E50268:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e4e5f0
	sub_82E4E5F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// bne cr6,0x82e50280
	if (!cr6.eq) goto loc_82E50280;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E50280:
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e502d8
	if (!cr6.gt) goto loc_82E502D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82E50294:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e502b8
	if (cr6.eq) goto loc_82E502B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e50294
	if (cr6.lt) goto loc_82E50294;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82E502B8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82e502d8
	if (cr6.lt) goto loc_82E502D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bne cr6,0x82e502d0
	if (!cr6.eq) goto loc_82E502D0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E502D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d7cd18
	sub_82D7CD18(ctx, base);
loc_82E502D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E50138) {
	__imp__sub_82E50138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E502E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E502E0) {
	__imp__sub_82E502E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E502E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r30,r4,2,0,29
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e50344
	if (cr6.eq) goto loc_82E50344;
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
	// bne cr6,0x82e50344
	if (!cr6.eq) goto loc_82E50344;
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
loc_82E50344:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82E502E8) {
	__imp__sub_82E502E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50378) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,27436
	ctx.r10.s64 = ctx.r10.s64 + 27436;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82e503f8
	if (!cr6.gt) goto loc_82E503F8;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82E503A8:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(68) );
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e503e8
	if (cr6.eq) goto loc_82E503E8;
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
	// bne cr6,0x82e503e8
	if (!cr6.eq) goto loc_82E503E8;
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
loc_82E503E8:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e503a8
	if (!cr6.eq) goto loc_82E503A8;
loc_82E503F8:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(76) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e50424
	if (!cr6.eq) goto loc_82E50424;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(68) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E50424:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7ffb8
	sub_82D7FFB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E50378) {
	__imp__sub_82E50378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50438) {
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
	// bl 0x82d801f0
	sub_82D801F0(ctx, base);
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82e504d0
	if (!cr6.lt) goto loc_82E504D0;
	// rlwinm r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e5049c
	if (!cr6.eq) goto loc_82E5049C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E5049C:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82E504D0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// ble cr6,0x82e50504
	if (!cr6.gt) goto loc_82E50504;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82E504EC:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x82e504ec
	if (!cr6.eq) goto loc_82E504EC;
loc_82E50504:
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

PPC_WEAK_FUNC(sub_82E50438) {
	__imp__sub_82E50438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50520) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e50598
	if (cr6.eq) goto loc_82E50598;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e50558
	if (cr6.eq) goto loc_82E50558;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r11.u16);
loc_82E50558:
	// addi r31,r3,68
	r31.s64 = ctx.r3.s64 + 68;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e5057c
	if (!cr6.eq) goto loc_82E5057C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E5057C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E50598:
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

PPC_WEAK_FUNC(sub_82E50520) {
	__imp__sub_82E50520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E505B0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d849b8
	sub_82D849B8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// addi r9,r10,27612
	ctx.r9.s64 = ctx.r10.s64 + 27612;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82E505B0) {
	__imp__sub_82E505B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82d849b8
	sub_82D849B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,27612
	r11.s64 = r11.s64 + 27612;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stfs f31,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stvx128 v0,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E50628) {
	__imp__sub_82E50628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82e506c8
	if (cr6.eq) goto loc_82E506C8;
loc_82E506C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e50718
	goto loc_82E50718;
loc_82E506C8:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e506c0
	if (!cr6.eq) goto loc_82E506C0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,80
	r11.s64 = 80;
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f2,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82e50628
	sub_82E50628(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
loc_82E50718:
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

PPC_WEAK_FUNC(sub_82E50698) {
	__imp__sub_82E50698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v125,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,17024
	ctx.r10.s64 = ctx.r10.s64 + 17024;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r30,336
	ctx.r10.s64 = r30.s64 + 336;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v12,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v12,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v5,v11,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v11.u32), 0x9C));
	// vpermwi128 v4,v11,135
	simd::store_i32(ctx.v4.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v11.u32), 0x78));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vor v13,v0,v0
	simd::store_i8(ctx.v13.u8, simd::load_i8(ctx.v0.u8));
	// vspltw v10,v0,3
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmsum3fp128 v3,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v3.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// vpermwi128 v1,v0,135
	simd::store_i32(ctx.v1.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v31,v0,99
	simd::store_i32(v31.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v30,v13,135
	simd::store_i32(v30.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmsum3fp128 v2,v13,v12
	simd::store_f32_aligned(ctx.v2.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// vpermwi128 v29,v13,99
	simd::store_i32(v29.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v5,v1,v5
	simd::store_f32_aligned(ctx.v5.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v1.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vspltw v9,v13,3
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vmulfp128 v4,v31,v4
	simd::store_f32_aligned(ctx.v4.f32, simd::mul_f32(simd::load_f32_aligned(v31.f32), simd::load_f32_aligned(ctx.v4.f32)));
	// vmulfp128 v7,v30,v7
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(v30.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v6,v29,v6
	simd::store_f32_aligned(ctx.v6.f32, simd::mul_f32(simd::load_f32_aligned(v29.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vspltw v3,v3,0
	simd::store_i32(ctx.v3.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v3.u32), 3));
	// vsubfp v5,v4,v5
	simd::store_f32_aligned(ctx.v5.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vspltw v2,v2,0
	simd::store_i32(ctx.v2.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v2.u32), 3));
	// vsubfp v7,v6,v7
	simd::store_f32_aligned(ctx.v7.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmaddfp v6,v10,v10,v8
	simd::store_f32_aligned(ctx.v6.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v8,v9,v9,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v8.f32)));
	// vmulfp128 v11,v11,v6
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmulfp128 v12,v12,v8
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v0,v3,v0,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v13,v2,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v2.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v5,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaddfp v13,v7,v9,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp128 v126,v0,v0
	simd::store_f32_aligned(v126.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v127,v13,v13
	simd::store_f32_aligned(v127.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v13,v0,v127
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32), 0xEF));
	// stvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvewx v13,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmaddfp128 v0,v127,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v125,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v125.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmsum3fp128 v0,v126,v125
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(v126.f32), simd::load_f32_aligned(v125.f32), 0xEF));
	// stvewx v0,r0,r9
	PPC_STORE_U32((ctx.r9.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r9.u32) & 0xF) >> 2));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82e508b4
	if (cr6.lt) goto loc_82E508B4;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82e508a4
	if (!cr6.gt) goto loc_82E508A4;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// b 0x82e508bc
	goto loc_82E508BC;
loc_82E508A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// b 0x82e508bc
	goto loc_82E508BC;
loc_82E508B4:
	// bl 0x82260900
	sub_82260900(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
loc_82E508BC:
	// vpermwi128 v12,v126,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(v126.u32), 0x78));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vpermwi128 v13,v125,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(v125.u32), 0x9C));
	// vpermwi128 v11,v125,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(v125.u32), 0x78));
	// addi r11,r11,5280
	r11.s64 = r11.s64 + 5280;
	// vpermwi128 v10,v126,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(v126.u32), 0x9C));
	// vmulfp128 v13,v12,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v12,v10,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vsubfp v13,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vand v13,v13,v0
	simd::store_u8(ctx.v13.u8, simd::and_u8(simd::load_u8(ctx.v13.u8), simd::load_u8(ctx.v0.u8)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e50924
	if (!cr6.lt) goto loc_82E50924;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e5091c
	if (!cr6.lt) goto loc_82E5091C;
	// li r11,2
	r11.s64 = 2;
	// b 0x82e50938
	goto loc_82E50938;
loc_82E5091C:
	// li r11,1
	r11.s64 = 1;
	// b 0x82e50938
	goto loc_82E50938;
loc_82E50924:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// li r11,2
	r11.s64 = 2;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e50938
	if (cr6.lt) goto loc_82E50938;
	// li r11,0
	r11.s64 = 0;
loc_82E50938:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vand128 v0,v127,v0
	simd::store_u8(ctx.v0.u8, simd::and_u8(simd::load_u8(v127.u8), simd::load_u8(ctx.v0.u8)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82e5097c
	if (!cr6.lt) goto loc_82E5097C;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82e50974
	if (!cr6.lt) goto loc_82E50974;
	// li r11,2
	r11.s64 = 2;
	// b 0x82e50990
	goto loc_82E50990;
loc_82E50974:
	// li r11,1
	r11.s64 = 1;
	// b 0x82e50990
	goto loc_82E50990;
loc_82E5097C:
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// li r11,2
	r11.s64 = 2;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82e50990
	if (cr6.lt) goto loc_82E50990;
	// li r11,0
	r11.s64 = 0;
loc_82E50990:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// blt cr6,0x82e509ac
	if (cr6.lt) goto loc_82E509AC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E509AC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// li r11,8
	r11.s64 = 8;
	// blt cr6,0x82e509bc
	if (cr6.lt) goto loc_82E509BC;
	// li r11,0
	r11.s64 = 0;
loc_82E509BC:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82e509c8
	if (cr6.eq) goto loc_82E509C8;
	// fneg f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_82E509C8:
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r10,432
	ctx.r10.s64 = 432;
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v0,r30,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v13,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(208) );
	// addi r3,r30,208
	ctx.r3.s64 = r30.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v125,r1,r0
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E50730) {
	__imp__sub_82E50730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50A60) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d843f0
	sub_82D843F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,28092
	r11.s64 = r11.s64 + 28092;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfs f13,-30920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30920);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f12,3052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stb r9,92(r31)
	PPC_STORE_U8(r31.u32 + 92, ctx.r9.u8);
	// stb r9,93(r31)
	PPC_STORE_U8(r31.u32 + 93, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_82E50A60) {
	__imp__sub_82E50A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r28,28(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r28,224
	ctx.r4.s64 = r28.s64 + 224;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvewx v0,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E50AD0) {
	__imp__sub_82E50AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4fe00
	sub_82D4FE00(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,224
	ctx.r4.s64 = r29.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4fe00
	sub_82D4FE00(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvewx v0,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E50B58) {
	__imp__sub_82E50B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50C00) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e50c30
	if (cr6.eq) goto loc_82E50C30;
loc_82E50C28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e50cb0
	goto loc_82E50CB0;
loc_82E50C30:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e50c28
	if (!cr6.eq) goto loc_82E50C28;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,96
	r11.s64 = 96;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82e50a60
	sub_82E50A60(ctx, base);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,64
	r11.s64 = 64;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, r11.u8);
	// lbz r11,93(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 93);
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, r11.u8);
loc_82E50CB0:
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

PPC_WEAK_FUNC(sub_82E50C00) {
	__imp__sub_82E50C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r26,24(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r25,28(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r4,r26,224
	ctx.r4.s64 = r26.s64 + 224;
	// bl 0x82d4fe00
	sub_82D4FE00(ctx, base);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// addi r4,r25,224
	ctx.r4.s64 = r25.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4fe00
	sub_82D4FE00(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vsubfp v0,v12,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmsum3fp128 v11,v0,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lis r11,-32252
	r11.s64 = -2113667072;
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// stvewx v11,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v11.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e50ee8
	if (cr6.lt) goto loc_82E50EE8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// vmulfp128 v127,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v127.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// bne cr6,0x82e50d9c
	if (!cr6.eq) goto loc_82E50D9C;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e50ee8
	if (cr6.lt) goto loc_82E50EE8;
loc_82E50D9C:
	// lbz r11,93(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 93);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e50db4
	if (!cr6.eq) goto loc_82E50DB4;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e50ee8
	if (cr6.gt) goto loc_82E50EE8;
loc_82E50DB4:
	// addi r30,r26,208
	r30.s64 = r26.s64 + 208;
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r29,r25,208
	r29.s64 = r25.s64 + 208;
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// addi r10,r29,224
	ctx.r10.s64 = r29.s64 + 224;
	// li r9,208
	ctx.r9.s64 = 208;
	// lvx128 v0,r30,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r29,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r29.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v13,v12,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v12,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// vpermwi128 v12,v12,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// lvx128 v10,r30,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v5,v11,135
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v11.u32), 0x78));
	// lvx128 v9,r29,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v11,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v11.u32), 0x9C));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// vpermwi128 v8,v0,99
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v7,v13,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v8,v6,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmulfp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmulfp128 v12,v5,v7
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v13,v11,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v8
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vsubfp v13,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vaddfp v13,v13,v9
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vsubfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v0,v0,v127
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32), 0xEF));
	// stvewx v0,r0,r7
	PPC_STORE_U32((ctx.r7.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r7.u32) & 0xF) >> 2));
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmulfp128 v0,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r28
	ea = (r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lvlx v0,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmulfp128 v0,v127,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r28
	ea = (r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E50EE8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E50CC8) {
	__imp__sub_82E50CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50F00) {
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
	// addi r11,r11,29584
	r11.s64 = r11.s64 + 29584;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82e50f34
	if (cr6.eq) goto loc_82E50F34;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E50F34:
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

PPC_WEAK_FUNC(sub_82E50F00) {
	__imp__sub_82E50F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E50F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32032
	r11.s64 = -2099249152;
	// addi r11,r11,29512
	r11.s64 = r11.s64 + 29512;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e50f60
	if (!cr6.eq) goto loc_82E50F60;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E50F60:
	// lis r11,-32032
	r11.s64 = -2099249152;
	// addi r11,r11,27952
	r11.s64 = r11.s64 + 27952;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e50f78
	if (!cr6.eq) goto loc_82E50F78;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82E50F78:
	// lis r11,-32031
	r11.s64 = -2099183616;
	// addi r11,r11,-30328
	r11.s64 = r11.s64 + -30328;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e50f90
	if (!cr6.eq) goto loc_82E50F90;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82E50F90:
	// lis r11,-32032
	r11.s64 = -2099249152;
	// addi r11,r11,31608
	r11.s64 = r11.s64 + 31608;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e50fa8
	if (!cr6.eq) goto loc_82E50FA8;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82E50FA8:
	// lis r11,-32032
	r11.s64 = -2099249152;
	// addi r11,r11,25360
	r11.s64 = r11.s64 + 25360;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e50fc0
	if (!cr6.eq) goto loc_82E50FC0;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82E50FC0:
	// lis r11,-32032
	r11.s64 = -2099249152;
	// addi r11,r11,24040
	r11.s64 = r11.s64 + 24040;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e50fd8
	if (!cr6.eq) goto loc_82E50FD8;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82E50FD8:
	// lis r11,-32032
	r11.s64 = -2099249152;
	// addi r11,r11,23088
	r11.s64 = r11.s64 + 23088;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e50ff0
	if (!cr6.eq) goto loc_82E50FF0;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82E50FF0:
	// lis r11,-32031
	r11.s64 = -2099183616;
	// addi r11,r11,-26296
	r11.s64 = r11.s64 + -26296;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,30,28,28
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E50F48) {
	__imp__sub_82E50F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E51008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x82e5119c
	if (cr6.gt) goto loc_82E5119C;
	// lis r12,-32027
	r12.s64 = -2098921472;
	// addi r12,r12,4176
	r12.s64 = r12.s64 + 4176;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82E51194;
	case 1:
		goto loc_82E51194;
	case 2:
		goto loc_82E51090;
	case 3:
		goto loc_82E51090;
	case 4:
		goto loc_82E51078;
	case 5:
		goto loc_82E51078;
	case 6:
		goto loc_82E5106C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,4500(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4500) );
	// lwz r23,4500(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4500) );
	// lwz r23,4240(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4240) );
	// lwz r23,4240(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4240) );
	// lwz r23,4216(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4216) );
	// lwz r23,4216(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4216) );
	// lwz r23,4204(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4204) );
loc_82E5106C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82E51078:
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// b 0x82e510a4
	goto loc_82E510A4;
loc_82E51090:
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82E510A4:
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// lbz r11,1(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rotlwi r5,r11,2
	ctx.r5.u64 = rotl32(r11.u32, 2);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r3,5852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(5852) );
	// bl 0x82e50f48
	sub_82E50F48(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// cmplwi cr6,r8,7
	cr6.compare<uint32_t>(ctx.r8.u32, 7, xer);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// bgt cr6,0x82e5106c
	if (cr6.gt) goto loc_82E5106C;
	// lis r12,-32027
	r12.s64 = -2098921472;
	// addi r12,r12,4340
	r12.s64 = r12.s64 + 4340;
	// rlwinm r0,r8,2,0,29
	r0.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		goto loc_82E51114;
	case 1:
		goto loc_82E51114;
	case 2:
		goto loc_82E51114;
	case 3:
		goto loc_82E51114;
	case 4:
		goto loc_82E5112C;
	case 5:
		goto loc_82E5116C;
	case 6:
		goto loc_82E5116C;
	case 7:
		goto loc_82E5116C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,4372(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4372) );
	// lwz r23,4372(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4372) );
	// lwz r23,4372(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4372) );
	// lwz r23,4372(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4372) );
	// lwz r23,4396(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4396) );
	// lwz r23,4460(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4460) );
	// lwz r23,4460(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4460) );
	// lwz r23,4460(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4460) );
loc_82E51114:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,3(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82E5112C:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lbz r11,3(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lbz r11,11(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// rlwinm r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e5119c
	if (!cr6.eq) goto loc_82E5119C;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82e060e8
	sub_82E060E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bl 0x82e51248
	sub_82E51248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82E5116C:
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// bl 0x82e51248
	sub_82E51248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82E51194:
	// li r11,16
	r11.s64 = 16;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
loc_82E5119C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E51008) {
	__imp__sub_82E51008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E511A8) {
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
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e511dc
	if (cr6.eq) goto loc_82E511DC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e51234
	if (!cr6.eq) goto loc_82E51234;
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// b 0x82e511e0
	goto loc_82E511E0;
loc_82E511DC:
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
loc_82E511E0:
	// lbz r11,1(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// rotlwi r9,r11,2
	ctx.r9.u64 = rotl32(r11.u32, 2);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r7
	ctx.r9.u64 = r11.u64 + ctx.r7.u64;
	// lwz r3,5852(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(5852) );
	// bl 0x82e50f48
	sub_82E50F48(ctx, base);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// bne cr6,0x82e51234
	if (!cr6.eq) goto loc_82E51234;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e51234
	if (cr6.eq) goto loc_82E51234;
	// lwz r11,5812(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(5812) );
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82E51234:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E511A8) {
	__imp__sub_82E511A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E51248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	// bl 0x82ca2bbc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82e51294
	if (!cr6.lt) goto loc_82E51294;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82e51284
	if (!cr6.lt) goto loc_82E51284;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E51284:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E51294:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// li r29,0
	r29.s64 = 0;
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e514dc
	if (!cr6.gt) goto loc_82E514DC;
	// mr r21,r29
	r21.u64 = r29.u64;
	// lis r20,-32768
	r20.s64 = -2147483648;
	// li r18,-1
	r18.s64 = -1;
loc_82E512B4:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// lwzx r25,r21,r11
	r25.u64 = PPC_LOAD_U32(r21.u32 + r11.u32);
	// addi r28,r25,16
	r28.s64 = r25.s64 + 16;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r23,r11,16
	r23.s64 = r11.s64 + 16;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bge cr6,0x82e51428
	if (!cr6.lt) goto loc_82E51428;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r27,4
	r27.s64 = 4;
loc_82E512DC:
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e5130c
	if (cr6.eq) goto loc_82E5130C;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// b 0x82e51318
	goto loc_82E51318;
loc_82E5130C:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82E51318:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e51344
	if (cr6.eq) goto loc_82E51344;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r20,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r20.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// stw r20,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r20.u32);
	// stw r18,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r18.u32);
	// b 0x82e51348
	goto loc_82E51348;
loc_82E51344:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82E51348:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e51008
	sub_82E51008(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e514e8
	if (!cr6.eq) goto loc_82E514E8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e513d4
	if (cr6.eq) goto loc_82E513D4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r30,r24,12
	r30.s64 = r24.s64 + 12;
	// stw r22,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r22.u32);
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e513b4
	if (!cr6.eq) goto loc_82E513B4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E513B4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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
	// b 0x82e51418
	goto loc_82E51418;
loc_82E513D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e4f048
	sub_82E4F048(ctx, base);
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e51400
	if (cr6.lt) goto loc_82E51400;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82e51418
	goto loc_82E51418;
loc_82E51400:
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r31.u32);
loc_82E51418:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// blt cr6,0x82e512dc
	if (cr6.lt) goto loc_82E512DC;
loc_82E51428:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e51448
	if (!cr6.eq) goto loc_82E51448;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E51448:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e51488
	if (cr6.eq) goto loc_82E51488;
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,156(r11)
	PPC_STORE_U32(r11.u32 + 156, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r10,152(r11)
	PPC_STORE_U32(r11.u32 + 152, ctx.r10.u32);
	// b 0x82e51494
	goto loc_82E51494;
loc_82E51488:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
loc_82E51494:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e514a8
	if (cr6.eq) goto loc_82E514A8;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// b 0x82e514ac
	goto loc_82E514AC;
loc_82E514A8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82E514AC:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stwx r11,r21,r10
	PPC_STORE_U32(r21.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// lwzx r3,r21,r11
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r11.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82e512b4
	if (cr6.lt) goto loc_82E512B4;
loc_82E514DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	return;
loc_82E514E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e51544
	if (cr6.eq) goto loc_82E51544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e4f048
	sub_82E4F048(ctx, base);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e5152c
	if (cr6.lt) goto loc_82E5152C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	return;
loc_82E5152C:
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r31.u32);
loc_82E51544:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82E51248) {
	__imp__sub_82E51248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E51550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82e5159c
	if (!cr6.lt) goto loc_82E5159C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e5158c
	if (cr6.lt) goto loc_82E5158C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82E5158C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E5159C:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// li r25,0
	r25.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e51644
	if (!cr6.gt) goto loc_82E51644;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r27,4
	r27.s64 = 4;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82E515C0:
	// lwzx r11,r27,r26
	r11.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e515ec
	if (cr6.eq) goto loc_82E515EC;
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,156(r11)
	PPC_STORE_U32(r11.u32 + 156, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r10,152(r11)
	PPC_STORE_U32(r11.u32 + 152, ctx.r10.u32);
	// b 0x82e515f8
	goto loc_82E515F8;
loc_82E515EC:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
loc_82E515F8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e5160c
	if (cr6.eq) goto loc_82E5160C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// b 0x82e51610
	goto loc_82E51610;
loc_82E5160C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82E51610:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r5,512
	ctx.r5.s64 = 512;
	// stwx r11,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e515c0
	if (cr6.lt) goto loc_82E515C0;
loc_82E51644:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e516b8
	if (!cr6.gt) goto loc_82E516B8;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lis r27,-32768
	r27.s64 = -2147483648;
loc_82E5165C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e51694
	if (cr6.eq) goto loc_82E51694;
	// stw r25,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r25.u32);
	// stw r25,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r25.u32);
	// stw r27,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r27.u32);
loc_82E51694:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e51550
	sub_82E51550(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82e516c4
	if (cr6.eq) goto loc_82E516C4;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e5165c
	if (cr6.lt) goto loc_82E5165C;
loc_82E516B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82E516C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E51550) {
	__imp__sub_82E51550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E516D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e51964
	if (!cr6.eq) goto loc_82E51964;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e51964
	if (cr6.eq) goto loc_82E51964;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r30,244
	ctx.r9.s64 = r30.s64 + 244;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e51008
	sub_82E51008(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e51964
	if (!cr6.eq) goto loc_82E51964;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stb r11,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r11.u8);
	// beq cr6,0x82e51764
	if (cr6.eq) goto loc_82E51764;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
loc_82E51764:
	// addi r31,r30,104
	r31.s64 = r30.s64 + 104;
	// lwz r27,8(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r29,36(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(36) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bge cr6,0x82e517a0
	if (!cr6.lt) goto loc_82E517A0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e51790
	if (cr6.lt) goto loc_82E51790;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82E51790:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E517A0:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e517d4
	if (!cr6.gt) goto loc_82E517D4;
loc_82E517B4:
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(32) );
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e517b4
	if (cr6.lt) goto loc_82E517B4;
loc_82E517D4:
	// lwz r31,60(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(60) );
	// addi r29,r30,80
	r29.s64 = r30.s64 + 80;
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mullw r28,r11,r10
	r28.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e51818
	if (!cr6.lt) goto loc_82E51818;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e51808
	if (cr6.lt) goto loc_82E51808;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E51808:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E51818:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// rotlwi r11,r11,5
	r11.u64 = rotl32(r11.u32, 5);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// addi r29,r30,92
	r29.s64 = r30.s64 + 92;
	// lhz r28,4(r31)
	r28.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e51878
	if (!cr6.lt) goto loc_82E51878;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e51868
	if (cr6.lt) goto loc_82E51868;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E51868:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E51878:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rotlwi r5,r11,5
	ctx.r5.u64 = rotl32(r11.u32, 5);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(60) );
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E518A0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82e518a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E518A0;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e518d4
	if (!cr6.eq) goto loc_82E518D4;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82e518d8
	goto loc_82E518D8;
loc_82E518D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E518D8:
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e518f8
	if (!cr6.eq) goto loc_82E518F8;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82e518fc
	goto loc_82E518FC;
loc_82E518F8:
	// li r31,0
	r31.s64 = 0;
loc_82E518FC:
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// stb r11,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r11.u8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e51944
	if (cr6.eq) goto loc_82E51944;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82E51944:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// bl 0x82d79ff8
	sub_82D79FF8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// bl 0x82d79ff8
	sub_82D79FF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82E51964:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E516D0) {
	__imp__sub_82E516D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E51970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e519a8
	if (cr6.eq) goto loc_82E519A8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e51b04
	if (!cr6.eq) goto loc_82E51B04;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// b 0x82e519ac
	goto loc_82E519AC;
loc_82E519A8:
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
loc_82E519AC:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rotlwi r9,r11,2
	ctx.r9.u64 = rotl32(r11.u32, 2);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,5852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(5852) );
	// bl 0x82e50f48
	sub_82E50F48(ctx, base);
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// bne cr6,0x82e51b04
	if (!cr6.eq) goto loc_82E51B04;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82e51b04
	if (cr6.gt) goto loc_82E51B04;
	// lis r12,-32027
	r12.s64 = -2098921472;
	// addi r12,r12,6648
	r12.s64 = r12.s64 + 6648;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82E51A18;
	case 1:
		goto loc_82E51A18;
	case 2:
		goto loc_82E51A18;
	case 3:
		goto loc_82E51A18;
	case 4:
		goto loc_82E51A44;
	case 5:
		goto loc_82E51AC0;
	case 6:
		goto loc_82E51AC0;
	case 7:
		goto loc_82E51AC0;
	default:
		__builtin_unreachable();
	}
	// lwz r23,6680(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6680) );
	// lwz r23,6680(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6680) );
	// lwz r23,6680(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6680) );
	// lwz r23,6680(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6680) );
	// lwz r23,6724(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6724) );
	// lwz r23,6848(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6848) );
	// lwz r23,6848(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6848) );
	// lwz r23,6848(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(6848) );
loc_82E51A18:
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r4,r29,140
	ctx.r4.s64 = r29.s64 + 140;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lbz r11,118(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 118);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// lbz r11,119(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 119);
	// stb r11,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E51A44:
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r4,r29,140
	ctx.r4.s64 = r29.s64 + 140;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lbz r11,118(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 118);
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// lbz r11,119(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 119);
	// stb r11,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r11.u8);
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// rlwinm r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e51ab4
	if (!cr6.eq) goto loc_82E51AB4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e060e0
	sub_82E060E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e51aa0
	if (cr6.eq) goto loc_82E51AA0;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
loc_82E51AA0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e51550
	sub_82E51550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E51AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E51AC0:
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r4,r29,140
	ctx.r4.s64 = r29.s64 + 140;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e51aec
	if (cr6.eq) goto loc_82E51AEC;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_82E51AEC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e51550
	sub_82E51550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E51B04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E51970) {
	__imp__sub_82E51970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E51B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	// bl 0x82ca2bb0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// addi r31,r16,40
	r31.s64 = r16.s64 + 40;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e51b84
	if (!cr6.gt) goto loc_82E51B84;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82E51B84:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ble cr6,0x82e51bb4
	if (!cr6.gt) goto loc_82E51BB4;
loc_82E51B94:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82e51b94
	if (!cr6.eq) goto loc_82E51B94;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82E51BB4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r6,56(r16)
	ctx.r6.u64 = PPC_LOAD_U32(r16.u32 + int32_t(56) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,52(r16)
	ctx.r5.u64 = PPC_LOAD_U32(r16.u32 + int32_t(52) );
	// bl 0x830cd138
	sub_830CD138(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e51db0
	if (!cr6.gt) goto loc_82E51DB0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r15,r30
	r15.u64 = r30.u64;
	// addi r23,r11,26568
	r23.s64 = r11.s64 + 26568;
	// li r20,288
	r20.s64 = 288;
	// li r27,1
	r27.s64 = 1;
	// li r29,-1
	r29.s64 = -1;
	// li r21,22
	r21.s64 = 22;
	// li r22,3
	r22.s64 = 3;
	// li r17,259
	r17.s64 = 259;
loc_82E51C00:
	// lwzx r11,r15,r4
	r11.u64 = PPC_LOAD_U32(r15.u32 + ctx.r4.u32);
	// mr r18,r30
	r18.u64 = r30.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e51d94
	if (!cr6.gt) goto loc_82E51D94;
	// mr r14,r30
	r14.u64 = r30.u64;
loc_82E51C18:
	// lwzx r11,r15,r4
	r11.u64 = PPC_LOAD_U32(r15.u32 + ctx.r4.u32);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// lwzx r11,r10,r14
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r14.u32);
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// mr r24,r11
	r24.u64 = r11.u64;
	// bne cr6,0x82e51c4c
	if (!cr6.eq) goto loc_82E51C4C;
	// lwzx r10,r15,r4
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + ctx.r4.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(92) );
	// add r19,r10,r11
	r19.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82e51c50
	goto loc_82E51C50;
loc_82E51C4C:
	// addi r19,r11,512
	r19.s64 = r11.s64 + 512;
loc_82E51C50:
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(r11.u32, r19.u32, xer);
	// bge cr6,0x82e51d84
	if (!cr6.lt) goto loc_82E51D84;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r26,4
	r26.s64 = 4;
loc_82E51C60:
	// li r5,13
	ctx.r5.s64 = 13;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// li r4,288
	ctx.r4.s64 = 288;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// sth r20,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r20.u16);
	// sth r27,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r27.u16);
	// stw r23,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r23.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// sth r21,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r21.u16);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// sth r22,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r22.u16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E51CB8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e51cb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E51CB8;
	// addi r11,r31,244
	r11.s64 = r31.s64 + 244;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r28.u32);
	// stw r17,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r17.u32);
	// stw r27,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r27.u32);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(276) );
	// lwz r5,108(r16)
	ctx.r5.u64 = PPC_LOAD_U32(r16.u32 + int32_t(108) );
	// bl 0x82e516d0
	sub_82E516D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e51d34
	if (!cr6.eq) goto loc_82E51D34;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(292) );
	// bl 0x82e50520
	sub_82E50520(ctx, base);
loc_82E51D34:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e51d70
	if (cr6.eq) goto loc_82E51D70;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// bne cr6,0x82e51d70
	if (!cr6.eq) goto loc_82E51D70;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E51D70:
	// lbz r11,3(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 3);
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(r24.u32, r19.u32, xer);
	// blt cr6,0x82e51c60
	if (cr6.lt) goto loc_82E51C60;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
loc_82E51D84:
	// lwzx r11,r15,r4
	r11.u64 = PPC_LOAD_U32(r15.u32 + ctx.r4.u32);
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// blt cr6,0x82e51c18
	if (cr6.lt) goto loc_82E51C18;
loc_82E51D94:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x82e51c00
	if (cr6.lt) goto loc_82E51C00;
loc_82E51DB0:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e51dd8
	if (!cr6.eq) goto loc_82E51DD8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E51DD8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E51B10) {
	__imp__sub_82E51B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E51DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	// bl 0x82ca2bb0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r16,8(r11)
	r16.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bl 0x82266f00
	sub_82266F00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265b98
	sub_82265B98(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82e51ff0
	if (!cr6.gt) goto loc_82E51FF0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r15,r30
	r15.u64 = r30.u64;
	// mr r14,r31
	r14.u64 = r31.u64;
	// addi r25,r11,26568
	r25.s64 = r11.s64 + 26568;
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// li r22,288
	r22.s64 = 288;
	// li r29,-1
	r29.s64 = -1;
	// li r23,22
	r23.s64 = 22;
	// li r24,3
	r24.s64 = 3;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// li r19,259
	r19.s64 = 259;
loc_82E51E50:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r18,r30
	r18.u64 = r30.u64;
	// addi r21,r11,92
	r21.s64 = r11.s64 + 92;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e51fe0
	if (!cr6.gt) goto loc_82E51FE0;
	// mr r20,r30
	r20.u64 = r30.u64;
loc_82E51E80:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r26,r20,r11
	r26.u64 = r20.u64 + r11.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// bl 0x82d5a2c0
	sub_82D5A2C0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// ble cr6,0x82e51ea8
	if (!cr6.gt) goto loc_82E51EA8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82E51EA8:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e51fcc
	if (!cr6.eq) goto loc_82E51FCC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,288
	ctx.r4.s64 = 288;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// sth r22,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r22.u16);
	// sth r27,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r27.u16);
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// sth r23,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r23.u16);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// sth r24,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r24.u16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E51F14:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e51f14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E51F14;
	// addi r11,r31,244
	r11.s64 = r31.s64 + 244;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r28.u32);
	// stw r19,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r19.u32);
	// stw r27,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r27.u32);
	// lwz r5,108(r16)
	ctx.r5.u64 = PPC_LOAD_U32(r16.u32 + int32_t(108) );
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// bl 0x82e516d0
	sub_82E516D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e51f90
	if (!cr6.eq) goto loc_82E51F90;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// bl 0x82e50520
	sub_82E50520(ctx, base);
loc_82E51F90:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e51fcc
	if (cr6.eq) goto loc_82E51FCC;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// bne cr6,0x82e51fcc
	if (!cr6.eq) goto loc_82E51FCC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E51FCC:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(4) );
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// blt cr6,0x82e51e80
	if (cr6.lt) goto loc_82E51E80;
loc_82E51FE0:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// bne cr6,0x82e51e50
	if (!cr6.eq) goto loc_82E51E50;
loc_82E51FF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E51DE0) {
	__imp__sub_82E51DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e52038
	if (!cr6.eq) goto loc_82E52038;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82e5203c
	goto loc_82E5203C;
loc_82E52038:
	// li r11,0
	r11.s64 = 0;
loc_82E5203C:
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82e520ec
	if (!cr6.gt) goto loc_82E520EC;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r29,4
	r29.s64 = 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r27,288
	r27.s64 = 288;
loc_82E5205C:
	// li r5,13
	ctx.r5.s64 = 13;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// li r4,288
	ctx.r4.s64 = 288;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// sth r27,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r27.u16);
	// bl 0x82e52998
	sub_82E52998(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,108(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + int32_t(108) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82e516d0
	sub_82E516D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e520a0
	if (!cr6.eq) goto loc_82E520A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82e50520
	sub_82E50520(ctx, base);
loc_82E520A0:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e520dc
	if (cr6.eq) goto loc_82E520DC;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// bne cr6,0x82e520dc
	if (!cr6.eq) goto loc_82E520DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E520DC:
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82e5205c
	if (!cr6.eq) goto loc_82E5205C;
loc_82E520EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82E52000) {
	__imp__sub_82E52000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E520F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb8
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12816(r1)
	ea = -12816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r4,184(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + int32_t(184) );
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lwz r5,184(r17)
	ctx.r5.u64 = PPC_LOAD_U32(r17.u32 + int32_t(184) );
	// lwz r31,8(r19)
	r31.u64 = PPC_LOAD_U32(r19.u32 + int32_t(8) );
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82e5214c
	if (!cr6.eq) goto loc_82E5214C;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// b 0x82e52180
	goto loc_82E52180;
loc_82E5214C:
	// lbz r11,216(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82e52160
	if (!cr6.eq) goto loc_82E52160;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x82e52180
	goto loc_82E52180;
loc_82E52160:
	// lbz r11,216(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82e52174
	if (!cr6.eq) goto loc_82E52174;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// b 0x82e52180
	goto loc_82E52180;
loc_82E52174:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82d94fd8
	sub_82D94FD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82E52180:
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82e511a8
	sub_82E511A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e52818
	if (!cr6.eq) goto loc_82E52818;
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(16) );
	// li r24,0
	r24.s64 = 0;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e521c4
	if (!cr6.eq) goto loc_82E521C4;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82e521c8
	goto loc_82E521C8;
loc_82E521C4:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82E521C8:
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x82e52240
	if (cr6.eq) goto loc_82E52240;
	// lwz r10,20(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(16) );
	// stw r10,16(r19)
	PPC_STORE_U32(r19.u32 + 16, ctx.r10.u32);
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lhz r10,6(r19)
	ctx.r10.u64 = PPC_LOAD_U16(r19.u32 + 6);
	// lhz r11,4(r19)
	r11.u64 = PPC_LOAD_U16(r19.u32 + 4);
	// sth r10,4(r19)
	PPC_STORE_U16(r19.u32 + 4, ctx.r10.u16);
	// sth r11,6(r19)
	PPC_STORE_U16(r19.u32 + 6, r11.u16);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(8) );
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e52240
	if (cr6.eq) goto loc_82E52240;
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lbz r10,26(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,26(r11)
	PPC_STORE_U8(r11.u32 + 26, ctx.r10.u8);
loc_82E52240:
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// addi r5,r29,244
	ctx.r5.s64 = r29.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e51970
	sub_82E51970(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e52818
	if (!cr6.eq) goto loc_82E52818;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lwz r28,108(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(108) );
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e5229c
	if (!cr6.lt) goto loc_82E5229C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e5228c
	if (cr6.lt) goto loc_82E5228C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E5228C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E5229C:
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// mr r11,r24
	r11.u64 = r24.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e522d0
	if (!cr6.gt) goto loc_82E522D0;
loc_82E522B0:
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(104) );
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e522b0
	if (cr6.lt) goto loc_82E522B0;
loc_82E522D0:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// li r20,1
	r20.s64 = 1;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e5233c
	if (!cr6.eq) goto loc_82E5233C;
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(16) );
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e52304
	if (!cr6.eq) goto loc_82E52304;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82e52308
	goto loc_82E52308;
loc_82E52304:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82E52308:
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(132) );
	// stb r20,140(r30)
	PPC_STORE_U8(r30.u32 + 140, r20.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82d8f478
	sub_82D8F478(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(132) );
	// stb r24,140(r30)
	PPC_STORE_U8(r30.u32 + 140, r24.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_82E5233C:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// srawi r7,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r7.s64 = r11.s32 >> 1;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// addi r8,r11,3
	ctx.r8.s64 = r11.s64 + 3;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// rlwinm r11,r10,1,0,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r7,r7,112
	ctx.r7.s64 = ctx.r7.s64 * 112;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// addi r10,r11,128
	ctx.r10.s64 = r11.s64 + 128;
	// blt cr6,0x82e52380
	if (cr6.lt) goto loc_82E52380;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82E52380:
	// addi r28,r31,68
	r28.s64 = r31.s64 + 68;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r7,40(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(40) );
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e523f4
	if (cr6.eq) goto loc_82E523F4;
	// lbz r7,26(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwz r11,184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(184) );
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r6,r9,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stw r5,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r5.u32);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(40) );
	// lhz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// lhz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// lhz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 20);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// sth r9,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r9.u16);
	// sth r8,24(r11)
	PPC_STORE_U16(r11.u32 + 24, ctx.r8.u16);
	// sth r10,20(r11)
	PPC_STORE_U16(r11.u32 + 20, ctx.r10.u16);
loc_82E523F4:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// li r23,4
	r23.s64 = 4;
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	// lhz r30,36(r29)
	r30.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// lhz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U16(r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r5,41(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 41);
	// lbz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 40);
	// bl 0x82da7c68
	sub_82DA7C68(ctx, base);
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r30.u16);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r9,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r9.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, r11.u16);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = r11.s64 + 2;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// addi r7,r11,3
	ctx.r7.s64 = r11.s64 + 3;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// rlwinm r11,r10,1,0,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 * 112;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// blt cr6,0x82e524d8
	if (cr6.lt) goto loc_82E524D8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r11,r7,1
	r11.s64 = ctx.r7.s64 + 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
loc_82E524D8:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(184) );
	// bl 0x82d937a8
	sub_82D937A8(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(80) );
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rotlwi r10,r10,5
	ctx.r10.u64 = rotl32(ctx.r10.u32, 5);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// rlwinm r5,r30,5,0,26
	ctx.r5.u64 = rotl64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(92) );
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lbz r11,1(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e52584
	if (cr6.eq) goto loc_82E52584;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rotlwi r8,r8,5
	ctx.r8.u64 = rotl32(ctx.r8.u32, 5);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// beq cr6,0x82e52584
	if (cr6.eq) goto loc_82E52584;
loc_82E52568:
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lhz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82e52568
	if (cr6.lt) goto loc_82E52568;
loc_82E52584:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,8(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82e526d0
	if (cr6.eq) goto loc_82E526D0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e526d0
	if (!cr6.gt) goto loc_82E526D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r24
	r26.u64 = r24.u64;
	// lfs f30,3164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3164);
	f30.f64 = double(temp.f32);
loc_82E525DC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r28,r24
	r28.u64 = r24.u64;
	// lbz r11,10(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 10);
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lhzx r30,r26,r10
	r30.u64 = PPC_LOAD_U16(r26.u32 + ctx.r10.u32);
	// stfs f30,12560(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12560, temp.u32);
	// stfs f31,12592(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12592, temp.u32);
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r24.u32);
	// stfs f31,12596(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12596, temp.u32);
	// beq cr6,0x82e52610
	if (cr6.eq) goto loc_82E52610;
	// addi r28,r21,16
	r28.s64 = r21.s64 + 16;
	// addi r27,r17,16
	r27.s64 = r17.s64 + 16;
loc_82E52610:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// stw r16,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r16.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// sth r30,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, r30.u16);
	// sth r24,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, r24.u16);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x82d8e538
	sub_82D8E538(ctx, base);
	// lhz r11,500(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e526a4
	if (cr6.eq) goto loc_82E526A4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82d8d7f8
	sub_82D8D7F8(ctx, base);
loc_82E526A4:
	// lhz r11,500(r17)
	r11.u64 = PPC_LOAD_U16(r17.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e526bc
	if (cr6.eq) goto loc_82E526BC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82d8d7f8
	sub_82D8D7F8(ctx, base);
loc_82E526BC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e525dc
	if (cr6.lt) goto loc_82E525DC;
loc_82E526D0:
	// lbz r11,9(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e527d4
	if (cr6.eq) goto loc_82E527D4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e527d4
	if (!cr6.gt) goto loc_82E527D4;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82E526F0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhzx r30,r28,r11
	r30.u64 = PPC_LOAD_U16(r28.u32 + r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,15(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e527c0
	if (!cr6.eq) goto loc_82E527C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r21,16
	ctx.r10.s64 = r21.s64 + 16;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// stw r20,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r20.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r10,r17,16
	ctx.r10.s64 = r17.s64 + 16;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x82d8e620
	sub_82D8E620(ctx, base);
	// lhz r11,500(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e527a8
	if (cr6.eq) goto loc_82E527A8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82d8d8d8
	sub_82D8D8D8(ctx, base);
loc_82E527A8:
	// lhz r11,500(r17)
	r11.u64 = PPC_LOAD_U16(r17.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e527c0
	if (cr6.eq) goto loc_82E527C0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82d8d8d8
	sub_82D8D8D8(ctx, base);
loc_82E527C0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82e526f0
	if (cr6.lt) goto loc_82E526F0;
loc_82E527D4:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82dffa28
	sub_82DFFA28(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e52804
	if (!cr6.eq) goto loc_82E52804;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,1,1,30
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E52804:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,12816
	ctx.r1.s64 = ctx.r1.s64 + 12816;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82ca2c08
	return;
loc_82E52818:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12816
	ctx.r1.s64 = ctx.r1.s64 + 12816;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82ca2c08
	return;
}

PPC_WEAK_FUNC(sub_82E520F8) {
	__imp__sub_82E520F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52830) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,29596
	r11.s64 = r11.s64 + 29596;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82e52a58
	sub_82E52A58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E52830) {
	__imp__sub_82E52830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52860) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bl 0x82e528b0
	sub_82E528B0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e52a58
	sub_82E52A58(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E52860) {
	__imp__sub_82E52860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E528B0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,29608
	r11.s64 = r11.s64 + 29608;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x82266f00
	sub_82266F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d5a210
	sub_82D5A210(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265b98
	sub_82265B98(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e5291c
	if (!cr6.gt) goto loc_82E5291C;
loc_82E528FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e528fc
	if (!cr6.eq) goto loc_82E528FC;
loc_82E5291C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E528B0) {
	__imp__sub_82E528B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52928) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82d5a318
	sub_82D5A318(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E52928) {
	__imp__sub_82E52928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52938) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,29584
	r11.s64 = r11.s64 + 29584;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82e52980
	if (cr6.eq) goto loc_82E52980;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E52980:
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

PPC_WEAK_FUNC(sub_82E52938) {
	__imp__sub_82E52938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r11,26568
	ctx.r8.s64 = r11.s64 + 26568;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// sth r5,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82E529F4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e529f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E529F4;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// addi r10,r3,244
	ctx.r10.s64 = ctx.r3.s64 + 244;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// li r8,259
	ctx.r8.s64 = 259;
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r8,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r8.u32);
	// stw r7,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E52998) {
	__imp__sub_82E52998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52A58) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r26,r4,68
	r26.s64 = ctx.r4.s64 + 68;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(132) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r11.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// blt cr6,0x82e52bf8
	if (cr6.lt) goto loc_82E52BF8;
	// rlwinm r24,r23,2,0,29
	r24.u64 = rotl64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E52A94:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwzx r31,r11,r24
	r31.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e52ad4
	if (cr6.eq) goto loc_82E52AD4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82e52adc
	goto loc_82E52ADC;
loc_82E52AD4:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
loc_82E52ADC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e52be8
	if (cr6.eq) goto loc_82E52BE8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e52be8
	if (cr6.eq) goto loc_82E52BE8;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e52b2c
	if (!cr6.eq) goto loc_82E52B2C;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e52be8
	if (cr6.eq) goto loc_82E52BE8;
loc_82E52B2C:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82dffb70
	sub_82DFFB70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e52be8
	if (cr6.eq) goto loc_82E52BE8;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(268) );
	// cmplwi cr6,r11,259
	cr6.compare<uint32_t>(r11.u32, 259, xer);
	// beq cr6,0x82e52b5c
	if (cr6.eq) goto loc_82E52B5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,108(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(108) );
	// bl 0x82e5f250
	sub_82E5F250(ctx, base);
loc_82E52B5C:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r7,108(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + int32_t(108) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e520f8
	sub_82E520F8(ctx, base);
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e52be8
	if (cr6.eq) goto loc_82E52BE8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e52be8
	if (cr6.eq) goto loc_82E52BE8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e52bcc
	if (cr6.eq) goto loc_82E52BCC;
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
	// bne cr6,0x82e52bcc
	if (!cr6.eq) goto loc_82E52BCC;
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
loc_82E52BCC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r10,r24,r11
	PPC_STORE_U32(r24.u32 + r11.u32, ctx.r10.u32);
loc_82E52BE8:
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bge cr6,0x82e52a94
	if (!cr6.lt) goto loc_82E52A94;
loc_82E52BF8:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(132) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r11.u32);
	// bne 0x82e52c28
	if (!cr0.eq) goto loc_82E52C28;
	// lwz r11,128(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(128) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e52c28
	if (cr6.eq) goto loc_82E52C28;
	// lbz r11,140(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e52c28
	if (!cr6.eq) goto loc_82E52C28;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82d72130
	sub_82D72130(ctx, base);
loc_82E52C28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82E52A58) {
	__imp__sub_82E52A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52C30) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,29728
	r11.s64 = r11.s64 + 29728;
	// addi r10,r10,29696
	ctx.r10.s64 = ctx.r10.s64 + 29696;
	// addi r9,r9,29680
	ctx.r9.s64 = ctx.r9.s64 + 29680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82E52C30) {
	__imp__sub_82E52C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52C98) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,44
	r11.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,29728
	r11.s64 = r11.s64 + 29728;
	// addi r10,r10,29696
	ctx.r10.s64 = ctx.r10.s64 + 29696;
	// addi r9,r9,29680
	ctx.r9.s64 = ctx.r9.s64 + 29680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stb r8,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_82E52C98) {
	__imp__sub_82E52C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52D28) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,44
	r11.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,29728
	r11.s64 = r11.s64 + 29728;
	// addi r10,r10,29696
	ctx.r10.s64 = ctx.r10.s64 + 29696;
	// addi r9,r9,29680
	ctx.r9.s64 = ctx.r9.s64 + 29680;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stb r8,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_82E52D28) {
	__imp__sub_82E52D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52DB8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e52e20
	if (cr6.eq) goto loc_82E52E20;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e52e20
	if (!cr6.gt) goto loc_82E52E20;
	// addi r29,r28,24
	r29.s64 = r28.s64 + 24;
	// li r31,0
	r31.s64 = 0;
loc_82E52DEC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e52dec
	if (cr6.lt) goto loc_82E52DEC;
loc_82E52E20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E52DB8) {
	__imp__sub_82E52DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,29728
	r11.s64 = r11.s64 + 29728;
	// addi r10,r10,29696
	ctx.r10.s64 = ctx.r10.s64 + 29696;
	// addi r9,r9,29680
	ctx.r9.s64 = ctx.r9.s64 + 29680;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// b 0x82e5f410
	sub_82E5F410(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E52E28) {
	__imp__sub_82E52E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52E50) {
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
	// lis r31,-31948
	r31.s64 = -2093744128;
	// lis r11,-32027
	r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,11416
	ctx.r5.s64 = r11.s64 + 11416;
	// addi r4,r10,29616
	ctx.r4.s64 = ctx.r10.s64 + 29616;
	// lwz r3,-20840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-20840) );
	// bl 0x82e32408
	sub_82E32408(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32027
	r11.s64 = -2098921472;
	// addi r4,r10,29648
	ctx.r4.s64 = ctx.r10.s64 + 29648;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,11560
	ctx.r5.s64 = r11.s64 + 11560;
	// stw r3,-19492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19492, ctx.r3.u32);
	// lwz r3,-20840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-20840) );
	// bl 0x82e32408
	sub_82E32408(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,-19496(r11)
	PPC_STORE_U32(r11.u32 + -19496, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82E52E50) {
	__imp__sub_82E52E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E52EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd8
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e530ac
	if (cr6.eq) goto loc_82E530AC;
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,36864
	ctx.r4.u64 = ctx.r4.u64 | 36864;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82d51270
	sub_82D51270(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,1
	r30.s64 = 1;
	// addi r24,r11,19480
	r24.s64 = r11.s64 + 19480;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r30,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, r30.u16);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x82d54418
	sub_82D54418(ctx, base);
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e52f44
	if (cr6.eq) goto loc_82E52F44;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,27176
	r29.s64 = r11.s64 + 27176;
	// b 0x82e52f4c
	goto loc_82E52F4C;
loc_82E52F44:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r29,r11,31764
	r29.s64 = r11.s64 + 31764;
loc_82E52F4C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// mr r25,r27
	r25.u64 = r27.u64;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e53050
	if (!cr6.gt) goto loc_82E53050;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82E52F6C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e52f9c
	if (!cr6.lt) goto loc_82E52F9C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82e52f8c
	if (cr6.gt) goto loc_82E52F8C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82E52F8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E52F9C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82e4ab18
	sub_82E4AB18(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82e53038
	if (cr6.lt) goto loc_82E53038;
	// addi r4,r11,9
	ctx.r4.s64 = r11.s64 + 9;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57d28
	sub_82D57D28(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57748
	sub_82D57748(ctx, base);
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57748
	sub_82D57748(ctx, base);
	// lbz r4,1(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57748
	sub_82D57748(ctx, base);
	// lbz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 2);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57748
	sub_82D57748(ctx, base);
	// lbz r4,3(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 3);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57748
	sub_82D57748(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57cf8
	sub_82D57CF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d57968
	sub_82D57968(ctx, base);
loc_82E53038:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e52f6c
	if (cr6.lt) goto loc_82E52F6C;
loc_82E53050:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e53074
	if (!cr6.eq) goto loc_82E53074;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e53074
	if (cr6.eq) goto loc_82E53074;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d54670
	sub_82D54670(ctx, base);
loc_82E53074:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bne cr6,0x82e530ac
	if (!cr6.eq) goto loc_82E530AC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r5,r10,2
	ctx.r5.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E530AC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e530ec
	if (cr6.eq) goto loc_82E530EC;
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e530d0
	if (cr6.eq) goto loc_82E530D0;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r4,-19496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19496) );
	// b 0x82e530d8
	goto loc_82E530D8;
loc_82E530D0:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r4,-19492(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19492) );
loc_82E530D8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E530EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E52EB8) {
	__imp__sub_82E52EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E530F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53110
	if (cr6.eq) goto loc_82E53110;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-19496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19496) );
	// blr 
	return;
loc_82E53110:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-19492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19492) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E530F8) {
	__imp__sub_82E530F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53120) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e53130
	sub_82E53130(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E53120) {
	__imp__sub_82E53120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e53130
	sub_82E53130(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E53128) {
	__imp__sub_82E53128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53130) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,29728
	r11.s64 = r11.s64 + 29728;
	// addi r10,r10,29696
	ctx.r10.s64 = ctx.r10.s64 + 29696;
	// addi r9,r9,29680
	ctx.r9.s64 = ctx.r9.s64 + 29680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bl 0x82e5f410
	sub_82E5F410(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e5319c
	if (cr6.eq) goto loc_82E5319C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E5319C:
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

PPC_WEAK_FUNC(sub_82E53130) {
	__imp__sub_82E53130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E531B8) {
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
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,29808
	r11.s64 = r11.s64 + 29808;
	// addi r10,r10,29776
	ctx.r10.s64 = ctx.r10.s64 + 29776;
	// addi r9,r9,29760
	ctx.r9.s64 = ctx.r9.s64 + 29760;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ori r4,r4,41248
	ctx.r4.u64 = ctx.r4.u64 | 41248;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bl 0x830cc380
	sub_830CC380(ctx, base);
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

PPC_WEAK_FUNC(sub_82E531B8) {
	__imp__sub_82E531B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53220) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,84
	r11.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82e531b8
	sub_82E531B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e5326c
	if (!cr6.eq) goto loc_82E5326C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5326C:
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

PPC_WEAK_FUNC(sub_82E53220) {
	__imp__sub_82E53220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53280) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e532e8
	if (cr6.eq) goto loc_82E532E8;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e532e8
	if (!cr6.gt) goto loc_82E532E8;
	// addi r29,r28,24
	r29.s64 = r28.s64 + 24;
	// li r31,0
	r31.s64 = 0;
loc_82E532B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e532b4
	if (cr6.lt) goto loc_82E532B4;
loc_82E532E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E53280) {
	__imp__sub_82E53280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E532F0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,29808
	r11.s64 = r11.s64 + 29808;
	// addi r10,r10,29776
	ctx.r10.s64 = ctx.r10.s64 + 29776;
	// addi r9,r9,29760
	ctx.r9.s64 = ctx.r9.s64 + 29760;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bl 0x830cc430
	sub_830CC430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e5f410
	sub_82E5F410(ctx, base);
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

PPC_WEAK_FUNC(sub_82E532F0) {
	__imp__sub_82E532F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r26,r29,32
	r26.s64 = r29.s64 + 32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830cc348
	sub_830CC348(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830cc300
	sub_830CC300(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e533d8
	if (!cr6.gt) goto loc_82E533D8;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r28,r29,40
	r28.s64 = r29.s64 + 40;
	// li r31,0
	r31.s64 = 0;
	// addi r27,r10,14316
	r27.s64 = ctx.r10.s64 + 14316;
loc_82E5339C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e5339c
	if (cr6.lt) goto loc_82E5339C;
loc_82E533D8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830cc340
	sub_830CC340(ctx, base);
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e53428
	if (!cr6.gt) goto loc_82E53428;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53428
	if (cr6.eq) goto loc_82E53428;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// lwz r5,52(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(52) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e53410
	if (!cr6.gt) goto loc_82E53410;
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// b 0x82e53414
	goto loc_82E53414;
loc_82E53410:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E53414:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E53428:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E53350) {
	__imp__sub_82E53350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53430) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32027
	r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,12832
	ctx.r5.s64 = r11.s64 + 12832;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,29740
	ctx.r4.s64 = ctx.r10.s64 + 29740;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-20840) );
	// bl 0x82e32408
	sub_82E32408(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,-19488(r11)
	PPC_STORE_U32(r11.u32 + -19488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E53430) {
	__imp__sub_82E53430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-19488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19488) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E53470) {
	__imp__sub_82E53470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53480) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e53490
	sub_82E53490(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E53480) {
	__imp__sub_82E53480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53488) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e53490
	sub_82E53490(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E53488) {
	__imp__sub_82E53488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53490) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,29808
	r11.s64 = r11.s64 + 29808;
	// addi r10,r10,29776
	ctx.r10.s64 = ctx.r10.s64 + 29776;
	// addi r9,r9,29760
	ctx.r9.s64 = ctx.r9.s64 + 29760;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bl 0x830cc430
	sub_830CC430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e5f410
	sub_82E5F410(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53508
	if (cr6.eq) goto loc_82E53508;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E53508:
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

PPC_WEAK_FUNC(sub_82E53490) {
	__imp__sub_82E53490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53528) {
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
	// addi r11,r11,29828
	r11.s64 = r11.s64 + 29828;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82e5355c
	if (cr6.eq) goto loc_82E5355C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E5355C:
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

PPC_WEAK_FUNC(sub_82E53528) {
	__imp__sub_82E53528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addic. r30,r31,-32
	xer.ca = r31.u32 > 31;
	r30.s64 = r31.s64 + -32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bne 0x82e53594
	if (!cr0.eq) goto loc_82E53594;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E53594:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d727b0
	sub_82D727B0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bne cr6,0x82e535ac
	if (!cr6.eq) goto loc_82E535AC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E535AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d72960
	sub_82D72960(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E53570) {
	__imp__sub_82E53570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E535C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,29840
	ctx.r3.s64 = r11.s64 + 29840;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E535C0) {
	__imp__sub_82E535C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E535D0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53638
	if (cr6.eq) goto loc_82E53638;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e53638
	if (!cr6.gt) goto loc_82E53638;
	// addi r29,r28,24
	r29.s64 = r28.s64 + 24;
	// li r31,0
	r31.s64 = 0;
loc_82E53604:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e53604
	if (cr6.lt) goto loc_82E53604;
loc_82E53638:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E535D0) {
	__imp__sub_82E535D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addic. r30,r28,-32
	xer.ca = r28.u32 > 31;
	r30.s64 = r28.s64 + -32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// bne 0x82e53664
	if (!cr0.eq) goto loc_82E53664;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E53664:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d73c60
	sub_82D73C60(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
	// bne cr6,0x82e5367c
	if (!cr6.eq) goto loc_82E5367C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5367C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d73f00
	sub_82D73F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d735a8
	sub_82D735A8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r27,32
	r29.s64 = r27.s64 + 32;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e536dc
	if (!cr6.gt) goto loc_82E536DC;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// li r31,0
	r31.s64 = 0;
loc_82E536AC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e536ac
	if (cr6.lt) goto loc_82E536AC;
loc_82E536DC:
	// lhz r11,4(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53718
	if (cr6.eq) goto loc_82E53718;
	// lhz r11,6(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r27)
	PPC_STORE_U16(r27.u32 + 6, r11.u16);
	// bne cr6,0x82e53718
	if (!cr6.eq) goto loc_82E53718;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E53718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E53640) {
	__imp__sub_82E53640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
loc_82E5373C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e5375c
	if (cr6.eq) goto loc_82E5375C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82e5373c
	if (cr6.lt) goto loc_82E5373C;
	// blr 
	return;
loc_82E5375C:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82E53720) {
	__imp__sub_82E53720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E537C0) {
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
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29208
	r11.s64 = r11.s64 + 29208;
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// addi r9,r9,29944
	ctx.r9.s64 = ctx.r9.s64 + 29944;
	// addi r8,r8,29912
	ctx.r8.s64 = ctx.r8.s64 + 29912;
	// addi r7,r7,29896
	ctx.r7.s64 = ctx.r7.s64 + 29896;
	// addi r6,r6,29880
	ctx.r6.s64 = ctx.r6.s64 + 29880;
	// addi r5,r5,29864
	ctx.r5.s64 = ctx.r5.s64 + 29864;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r5.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82E537C0) {
	__imp__sub_82E537C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53858) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r10,r10,29944
	ctx.r10.s64 = ctx.r10.s64 + 29944;
	// addi r9,r9,29912
	ctx.r9.s64 = ctx.r9.s64 + 29912;
	// addi r8,r8,29896
	ctx.r8.s64 = ctx.r8.s64 + 29896;
	// addi r7,r7,29880
	ctx.r7.s64 = ctx.r7.s64 + 29880;
	// addi r6,r6,29864
	ctx.r6.s64 = ctx.r6.s64 + 29864;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r26,r31,32
	r26.s64 = r31.s64 + 32;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// beq cr6,0x82e53920
	if (cr6.eq) goto loc_82E53920;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e53920
	if (!cr6.gt) goto loc_82E53920;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r26,-32
	r27.s64 = r26.s64 + -32;
loc_82E538CC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r4,r26,8
	ctx.r4.s64 = r26.s64 + 8;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bne cr6,0x82e538e8
	if (!cr6.eq) goto loc_82E538E8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E538E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d727b0
	sub_82D727B0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r4,r26,12
	ctx.r4.s64 = r26.s64 + 12;
	// bne cr6,0x82e53900
	if (!cr6.eq) goto loc_82E53900;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E53900:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d72960
	sub_82D72960(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e538cc
	if (cr6.lt) goto loc_82E538CC;
loc_82E53920:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e5394c
	if (!cr6.eq) goto loc_82E5394C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E5394C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	r11.s64 = r11.s64 + 29828;
	// addi r10,r10,29208
	ctx.r10.s64 = ctx.r10.s64 + 29208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x82e5f410
	sub_82E5F410(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E53858) {
	__imp__sub_82E53858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53978) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,31268(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(31268) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,29840
	ctx.r4.s64 = r11.s64 + 29840;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e53a70
	if (cr6.eq) goto loc_82E53A70;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e53a70
	if (cr6.eq) goto loc_82E53A70;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4f170
	sub_82D4F170(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53a70
	if (cr6.eq) goto loc_82E53A70;
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53a30
	if (cr6.eq) goto loc_82E53A30;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r29)
	PPC_STORE_U16(r29.u32 + 6, r11.u16);
loc_82E53A30:
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e53a54
	if (!cr6.eq) goto loc_82E53A54;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E53A54:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E53A70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E53978) {
	__imp__sub_82E53978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53A78) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,60
	r11.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82e537c0
	sub_82E537C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e53ac4
	if (!cr6.eq) goto loc_82E53AC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E53AC4:
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

PPC_WEAK_FUNC(sub_82E53A78) {
	__imp__sub_82E53A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E53AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// li r12,-192
	r12.s64 = -192;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r11,8
	r11.s64 = 8;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwzx r10,r20,r11
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r11.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e53b34
	if (!cr6.lt) goto loc_82E53B34;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,29956
	ctx.r9.s64 = ctx.r9.s64 + 29956;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E53B34:
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e54000
	if (!cr6.gt) goto loc_82E54000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r14,0
	r14.s64 = 0;
	// addi r17,r11,17024
	r17.s64 = r11.s64 + 17024;
	// lis r11,10922
	r11.s64 = 715784192;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r28,r11,43691
	r28.u64 = r11.u64 | 43691;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// lis r11,-102
	r11.s64 = -6684672;
	// li r31,4
	r31.s64 = 4;
	// lfs f30,2000(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lis r22,-31948
	r22.s64 = -2093744128;
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// ori r15,r11,52530
	r15.u64 = r11.u64 | 52530;
loc_82E53B7C:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// lwzx r3,r20,r31
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r31.u32);
	// lwzx r19,r14,r11
	r19.u64 = PPC_LOAD_U32(r14.u32 + r11.u32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// lwz r18,76(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + int32_t(76) );
	// addi r10,r18,1
	ctx.r10.s64 = r18.s64 + 1;
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e53bb4
	if (cr6.gt) goto loc_82E53BB4;
	// mr r16,r11
	r16.u64 = r11.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82e53bc8
	goto loc_82E53BC8;
loc_82E53BB4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
loc_82E53BC8:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x82e53edc
	if (!cr6.gt) goto loc_82E53EDC;
	// li r21,0
	r21.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r16
	r25.u64 = r16.u64;
	// mr r20,r18
	r20.u64 = r18.u64;
loc_82E53BE0:
	// lwz r10,28(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + int32_t(28) );
	// lwz r11,72(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(72) );
	// add r27,r11,r21
	r27.u64 = r11.u64 + r21.u64;
	// lwz r11,140(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(140) );
	// addi r5,r27,48
	ctx.r5.s64 = r27.s64 + 48;
	// add r30,r11,r24
	r30.u64 = r11.u64 + r24.u64;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53c0c
	if (cr6.eq) goto loc_82E53C0C;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// b 0x82e53c14
	goto loc_82E53C14;
loc_82E53C0C:
	// lis r6,-68
	ctx.r6.s64 = -4456448;
	// ori r6,r6,36751
	ctx.r6.u64 = ctx.r6.u64 | 36751;
loc_82E53C14:
	// lwz r3,-20(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,-19484(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + int32_t(-19484) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r31,r27,96
	r31.s64 = r27.s64 + 96;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r29,r27,128
	r29.s64 = r27.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v12,r0,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r25
	ea = (r25.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,164(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 164);
	f0.f64 = double(temp.f32);
	// lvx128 v127,r0,r31
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x82d506f8
	sub_82D506F8(ctx, base);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v12,r0,r17
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v127,99
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(v127.u32), 0x9C));
	// vpermwi128 v7,v127,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(v127.u32), 0x78));
	// lvlx v10,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// lvx128 v11,r0,r25
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vspltw v13,v0,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmsum3fp128 v9,v0,v127
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32), 0xEF));
	// vpermwi128 v6,v0,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v5,v0,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vmaddfp v12,v13,v13,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v8,v6,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmulfp128 v7,v5,v7
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v12,v127,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vspltw v9,v9,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// vsubfp v8,v7,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v0,v9,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v8,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// vmulfp128 v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vaddfp v13,v11,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53d38
	if (cr6.eq) goto loc_82E53D38;
	// lis r6,-11
	ctx.r6.s64 = -720896;
	// ori r6,r6,62965
	ctx.r6.u64 = ctx.r6.u64 | 62965;
	// b 0x82e53d40
	goto loc_82E53D40;
loc_82E53D38:
	// lis r6,-68
	ctx.r6.s64 = -4456448;
	// ori r6,r6,36751
	ctx.r6.u64 = ctx.r6.u64 | 36751;
loc_82E53D40:
	// lwz r3,-20(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20) );
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r7,-19484(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + int32_t(-19484) );
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvlx v13,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d506f8
	sub_82D506F8(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r29,1
	r29.s64 = 1;
	// addi r26,r1,224
	r26.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_82E53D98:
	// cmpwi cr6,r29,12
	cr6.compare<int32_t>(r29.s32, 12, xer);
	// bge cr6,0x82e53df0
	if (!cr6.lt) goto loc_82E53DF0;
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v11,r0,r17
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v0,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmsum3fp128 v8,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v7,v13,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v6,v13,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// li r11,16
	r11.s64 = 16;
	// vmaddfp v11,v12,v12,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// cmpwi cr6,r29,12
	cr6.compare<int32_t>(r29.s32, 12, xer);
	// vmulfp128 v10,v10,v7
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v9,v9,v6
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v8,v8,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v13,v8,v0,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v13,v13,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r26,r11
	ea = (r26.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E53DF0:
	// bgt cr6,0x82e53e04
	if (cr6.gt) goto loc_82E53E04;
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r26
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vaddfp v13,v12,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r26
	ea = (r26.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E53E04:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x82e53eac
	if (cr6.lt) goto loc_82E53EAC;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e53e24
	if (cr6.eq) goto loc_82E53E24;
	// lis r6,-11
	ctx.r6.s64 = -720896;
	// ori r6,r6,62965
	ctx.r6.u64 = ctx.r6.u64 | 62965;
	// b 0x82e53e2c
	goto loc_82E53E2C;
loc_82E53E24:
	// lis r6,-68
	ctx.r6.s64 = -4456448;
	// ori r6,r6,36751
	ctx.r6.u64 = ctx.r6.u64 | 36751;
loc_82E53E2C:
	// lwz r3,-20(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20) );
	// addi r11,r29,-2
	r11.s64 = r29.s64 + -2;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r7,-19484(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + int32_t(-19484) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mulhw r8,r11,r28
	ctx.r8.s64 = (int64_t(r11.s32) * int64_t(r28.s32)) >> 32;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r14,32(r9)
	r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mulhw r9,r10,r28
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(r28.s32)) >> 32;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// srawi r8,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// rlwinm r30,r9,1,31,31
	r30.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r31,r8,1,31,31
	r31.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r30,r9,1,0,30
	r30.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r8,1,0,30
	r31.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// mtctr r14
	ctr.u64 = r14.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_82E53EAC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(r29.s32, 14, xer);
	// blt cr6,0x82e53d98
	if (cr6.lt) goto loc_82E53D98;
	// addi r20,r20,-1
	r20.s64 = r20.s64 + -1;
	// addi r24,r24,40
	r24.s64 = r24.s64 + 40;
	// addi r21,r21,192
	r21.s64 = r21.s64 + 192;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82e53be0
	if (!cr6.eq) goto loc_82E53BE0;
	// lwz r14,80(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r20,92(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82E53EDC:
	// lwz r11,28(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(28) );
	// li r26,0
	r26.s64 = 0;
	// lwz r21,156(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82e53fb8
	if (!cr6.gt) goto loc_82E53FB8;
loc_82E53EF0:
	// lwz r11,28(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(28) );
	// li r25,1
	r25.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
	// lbzx r11,r11,r26
	r11.u64 = PPC_LOAD_U8(r11.u32 + r26.u32);
	// extsb r24,r11
	r24.s64 = r11.s8;
	// ble cr6,0x82e53fac
	if (!cr6.gt) goto loc_82E53FAC;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r16
	r30.u64 = r16.u64;
loc_82E53F1C:
	// lwz r11,28(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(28) );
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lbz r11,36(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bne cr6,0x82e53f98
	if (!cr6.eq) goto loc_82E53F98;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// beq cr6,0x82e53f6c
	if (cr6.eq) goto loc_82E53F6C;
	// li r25,0
	r25.s64 = 0;
	// b 0x82e53f90
	goto loc_82E53F90;
loc_82E53F6C:
	// lwz r3,-20(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-20) );
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// lwz r7,-19484(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + int32_t(-19484) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E53F90:
	// cmpw cr6,r27,r24
	cr6.compare<int32_t>(r27.s32, r24.s32, xer);
	// beq cr6,0x82e53fac
	if (cr6.eq) goto loc_82E53FAC;
loc_82E53F98:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r18
	cr6.compare<int32_t>(r29.s32, r18.s32, xer);
	// blt cr6,0x82e53f1c
	if (cr6.lt) goto loc_82E53F1C;
loc_82E53FAC:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r21
	cr6.compare<int32_t>(r26.s32, r21.s32, xer);
	// blt cr6,0x82e53ef0
	if (cr6.lt) goto loc_82E53EF0;
loc_82E53FB8:
	// li r31,4
	r31.s64 = 4;
	// lwzx r3,r20,r31
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r31.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r16,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r16.u32);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// bne cr6,0x82e53fe4
	if (!cr6.eq) goto loc_82E53FE4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E53FE4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bne cr6,0x82e53b7c
	if (!cr6.eq) goto loc_82E53B7C;
loc_82E54000:
	// li r11,8
	r11.s64 = 8;
	// lwzx r10,r20,r11
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e54034
	if (!cr6.lt) goto loc_82E54034;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E54034:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// li r0,-192
	r0.s64 = -192;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E53AD8) {
	__imp__sub_82E53AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54050) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32027
	r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,14968
	ctx.r5.s64 = r11.s64 + 14968;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,17488
	ctx.r4.s64 = ctx.r10.s64 + 17488;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-20840) );
	// bl 0x82e32408
	sub_82E32408(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,-19484(r11)
	PPC_STORE_U32(r11.u32 + -19484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E54050) {
	__imp__sub_82E54050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-19484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19484) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E54090) {
	__imp__sub_82E54090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E540A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e540c0
	sub_82E540C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E540A0) {
	__imp__sub_82E540A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E540A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e540c0
	sub_82E540C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E540A8) {
	__imp__sub_82E540A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E540B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e540c0
	sub_82E540C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E540B0) {
	__imp__sub_82E540B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E540B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e540c0
	sub_82E540C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E540B8) {
	__imp__sub_82E540B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E540C0) {
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
	// bl 0x82e53858
	sub_82E53858(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e54108
	if (cr6.eq) goto loc_82E54108;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E54108:
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

PPC_WEAK_FUNC(sub_82E540C0) {
	__imp__sub_82E540C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	// bl 0x82ca2bc4
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,0(r13)
	r19.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r20,8
	r20.s64 = 8;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwzx r10,r20,r19
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r19.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e54170
	if (!cr6.lt) goto loc_82E54170;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,30004
	ctx.r9.s64 = ctx.r9.s64 + 30004;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E54170:
	// addi r22,r4,40
	r22.s64 = ctx.r4.s64 + 40;
	// li r21,0
	r21.s64 = 0;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e542cc
	if (!cr6.gt) goto loc_82E542CC;
	// li r23,0
	r23.s64 = 0;
	// lis r26,-31948
	r26.s64 = -2093744128;
	// li r24,16
	r24.s64 = 16;
loc_82E54190:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// li r29,0
	r29.s64 = 0;
	// lwzx r11,r11,r23
	r11.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// addi r27,r11,76
	r27.s64 = r11.s64 + 76;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e542b8
	if (!cr6.gt) goto loc_82E542B8;
	// li r28,0
	r28.s64 = 0;
loc_82E541B0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r30,r28,r11
	r30.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r31,r30,288
	r31.s64 = r30.s64 + 288;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lwz r3,-20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(-20) );
	// addi r5,r30,17
	ctx.r5.s64 = r30.s64 + 17;
	// lwz r6,-19480(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-19480) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v10,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r31,r24
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + r24.u32) & ~0xF), VectorMaskL));
	// lwz r3,-20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(-20) );
	// addi r5,r30,18
	ctx.r5.s64 = r30.s64 + 18;
	// lwz r6,-19480(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-19480) );
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e541b0
	if (cr6.lt) goto loc_82E541B0;
loc_82E542B8:
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// blt cr6,0x82e54190
	if (cr6.lt) goto loc_82E54190;
loc_82E542CC:
	// lwzx r10,r20,r19
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r19.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e542fc
	if (!cr6.lt) goto loc_82E542FC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E542FC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82E54128) {
	__imp__sub_82E54128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e5433c
	if (!cr6.gt) goto loc_82E5433C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
loc_82E5431C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e54344
	if (cr6.eq) goto loc_82E54344;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e5431c
	if (cr6.lt) goto loc_82E5431C;
loc_82E5433C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E54344:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E54308) {
	__imp__sub_82E54308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r30,288
	r31.s64 = r30.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lwz r3,-20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-20) );
	// lis r28,-31948
	r28.s64 = -2093744128;
	// addi r5,r30,17
	ctx.r5.s64 = r30.s64 + 17;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// lwz r6,-19480(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-19480) );
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v10,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r3,-20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-20) );
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwz r6,-19480(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-19480) );
	// addi r5,r30,18
	ctx.r5.s64 = r30.s64 + 18;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v10,r31,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E54350) {
	__imp__sub_82E54350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54460) {
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
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,23856
	r11.s64 = r11.s64 + 23856;
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// addi r9,r9,30132
	ctx.r9.s64 = ctx.r9.s64 + 30132;
	// addi r8,r8,30100
	ctx.r8.s64 = ctx.r8.s64 + 30100;
	// addi r7,r7,30084
	ctx.r7.s64 = ctx.r7.s64 + 30084;
	// addi r6,r6,30060
	ctx.r6.s64 = ctx.r6.s64 + 30060;
	// addi r5,r5,30044
	ctx.r5.s64 = ctx.r5.s64 + 30044;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r5.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82E54460) {
	__imp__sub_82E54460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E544F8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e54674
	if (cr6.eq) goto loc_82E54674;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// li r11,0
	r11.s64 = 0;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e54674
	if (!cr6.gt) goto loc_82E54674;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
loc_82E54530:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e54558
	if (cr6.eq) goto loc_82E54558;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e54530
	if (cr6.lt) goto loc_82E54530;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E54558:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e54674
	if (cr6.lt) goto loc_82E54674;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-16) );
	// lis r29,-31948
	r29.s64 = -2093744128;
	// addi r30,r27,17
	r30.s64 = r27.s64 + 17;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r5,-19480(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-19480) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e545f0
	if (!cr6.gt) goto loc_82E545F0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
loc_82E545A8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82e545c8
	if (cr6.eq) goto loc_82E545C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e545a8
	if (cr6.lt) goto loc_82E545A8;
	// b 0x82e545f0
	goto loc_82E545F0;
loc_82E545C8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e545f0
	if (cr6.lt) goto loc_82E545F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_82E545F0:
	// lwz r3,-16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-16) );
	// addi r30,r27,18
	r30.s64 = r27.s64 + 18;
	// lwz r5,-19480(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-19480) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e54674
	if (!cr6.gt) goto loc_82E54674;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
loc_82E54628:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82e5464c
	if (cr6.eq) goto loc_82E5464C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e54628
	if (cr6.lt) goto loc_82E54628;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E5464C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e54674
	if (cr6.lt) goto loc_82E54674;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_82E54674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E544F8) {
	__imp__sub_82E544F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e546f0
	if (!cr6.gt) goto loc_82E546F0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lis r27,-31948
	r27.s64 = -2093744128;
loc_82E546B8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// lwz r5,-19480(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-19480) );
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e546b8
	if (cr6.lt) goto loc_82E546B8;
loc_82E546F0:
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e54720
	if (!cr6.lt) goto loc_82E54720;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x82e54714
	if (cr6.gt) goto loc_82E54714;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82E54714:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E54720:
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E54680) {
	__imp__sub_82E54680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54730) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,60
	r11.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82e54460
	sub_82E54460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e5477c
	if (!cr6.eq) goto loc_82E5477C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5477C:
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

PPC_WEAK_FUNC(sub_82E54730) {
	__imp__sub_82E54730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54790) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32027
	r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,18224
	ctx.r5.s64 = r11.s64 + 18224;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,29984
	ctx.r4.s64 = ctx.r10.s64 + 29984;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-20840) );
	// bl 0x82e32408
	sub_82E32408(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,-19480(r11)
	PPC_STORE_U32(r11.u32 + -19480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E54790) {
	__imp__sub_82E54790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E547D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// addi r4,r23,40
	ctx.r4.s64 = r23.s64 + 40;
	// bne cr6,0x82e547f8
	if (!cr6.eq) goto loc_82E547F8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82E547F8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82d73d40
	sub_82D73D40(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// addi r4,r23,44
	ctx.r4.s64 = r23.s64 + 44;
	// bne cr6,0x82e54810
	if (!cr6.eq) goto loc_82E54810;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82E54810:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82d73f00
	sub_82D73F00(ctx, base);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e54848
	if (cr6.eq) goto loc_82E54848;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// b 0x82e54854
	goto loc_82E54854;
loc_82E54848:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
loc_82E54854:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e54874
	if (cr6.eq) goto loc_82E54874;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x82e54878
	goto loc_82E54878;
loc_82E54874:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82E54878:
	// addi r31,r23,48
	r31.s64 = r23.s64 + 48;
	// stw r22,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r22.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e548a0
	if (!cr6.eq) goto loc_82E548A0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E548A0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r27,r22,40
	r27.s64 = r22.s64 + 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r25,r24
	r25.u64 = r24.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e5493c
	if (!cr6.gt) goto loc_82E5493C;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82E548D4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// addi r29,r11,76
	r29.s64 = r11.s64 + 76;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e54928
	if (!cr6.gt) goto loc_82E54928;
	// addi r28,r23,40
	r28.s64 = r23.s64 + 40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82E548F8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e548f8
	if (cr6.lt) goto loc_82E548F8;
loc_82E54928:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e548d4
	if (cr6.lt) goto loc_82E548D4;
loc_82E5493C:
	// addi r26,r22,52
	r26.s64 = r22.s64 + 52;
	// mr r25,r24
	r25.u64 = r24.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e549bc
	if (!cr6.gt) goto loc_82E549BC;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_82E54954:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r29,r11,76
	r29.s64 = r11.s64 + 76;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e549a8
	if (!cr6.gt) goto loc_82E549A8;
	// addi r28,r23,40
	r28.s64 = r23.s64 + 40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82E54978:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e54978
	if (cr6.lt) goto loc_82E54978;
loc_82E549A8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e54954
	if (cr6.lt) goto loc_82E54954;
loc_82E549BC:
	// lwz r11,32(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(32) );
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r29,r11,76
	r29.s64 = r11.s64 + 76;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e54a0c
	if (!cr6.gt) goto loc_82E54A0C;
	// addi r28,r23,40
	r28.s64 = r23.s64 + 40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82E549DC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e549dc
	if (cr6.lt) goto loc_82E549DC;
loc_82E54A0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82E547D0) {
	__imp__sub_82E547D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bd4
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e54df0
	if (cr6.eq) goto loc_82E54DF0;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// li r23,0
	r23.s64 = 0;
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e54df0
	if (!cr6.gt) goto loc_82E54DF0;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
loc_82E54A54:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e54a7c
	if (cr6.eq) goto loc_82E54A7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e54a54
	if (cr6.lt) goto loc_82E54A54;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x82ca2c24
	return;
loc_82E54A7C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e54df0
	if (cr6.lt) goto loc_82E54DF0;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r24,r11,r10
	r24.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82e5f690
	sub_82E5F690(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e5f6a0
	sub_82E5F6A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// bl 0x82e610b0
	sub_82E610B0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r25,r11,-1
	r25.s64 = r11.s64 + -1;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x82e54b84
	if (cr6.lt) goto loc_82E54B84;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// rlwinm r31,r25,2,0,29
	r31.u64 = rotl64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,30208
	r30.s64 = r11.s64 + 30208;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r28,-31949
	r28.s64 = -2093809664;
	// addi r29,r11,30144
	r29.s64 = r11.s64 + 30144;
loc_82E54AEC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82e54b74
	if (!cr6.eq) goto loc_82E54B74;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e54b74
	if (!cr6.eq) goto loc_82E54B74;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lwz r3,29792(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(29792) );
	// li r8,168
	ctx.r8.s64 = 168;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
loc_82E54B74:
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x82e54aec
	if (!cr6.lt) goto loc_82E54AEC;
loc_82E54B84:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// ble cr6,0x82e54d78
	if (!cr6.gt) goto loc_82E54D78;
	// lbz r11,216(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82e54d78
	if (cr6.eq) goto loc_82E54D78;
	// addi r31,r24,4
	r31.s64 = r24.s64 + 4;
	// addi r28,r26,17
	r28.s64 = r26.s64 + 17;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e54bd0
	if (!cr6.eq) goto loc_82E54BD0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E54BD0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r26,288
	r30.s64 = r26.s64 + 288;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r11,r30,64
	r11.s64 = r30.s64 + 64;
	// lvx128 v11,r0,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v10,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r11,r30,64
	r11.s64 = r30.s64 + 64;
	// lwz r3,-16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-16) );
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lis r29,-31948
	r29.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// lwz r7,-19480(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-19480) );
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v10,r30,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-16) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,-19480(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-19480) );
	// lwz r4,-19472(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19472) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r26,18
	r30.s64 = r26.s64 + 18;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e54d10
	if (!cr6.eq) goto loc_82E54D10;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E54D10:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,-16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-16) );
	// lwz r7,-19480(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-19480) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-16) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,-19480(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-19480) );
	// lwz r4,-19476(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19476) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E54D78:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e54dc4
	if (!cr6.gt) goto loc_82E54DC4;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82E54D8C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e54db0
	if (cr6.eq) goto loc_82E54DB0;
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
loc_82E54DB0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e54d8c
	if (cr6.lt) goto loc_82E54D8C;
loc_82E54DC4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e54df0
	if (!cr6.eq) goto loc_82E54DF0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E54DF0:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82E54A18) {
	__imp__sub_82E54A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54DF8) {
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
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e54e54
	if (cr6.eq) goto loc_82E54E54;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e54e54
	if (!cr6.gt) goto loc_82E54E54;
	// addi r28,r29,-8
	r28.s64 = r29.s64 + -8;
	// li r31,0
	r31.s64 = 0;
loc_82E54E2C:
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82e547d0
	sub_82E547D0(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e54e2c
	if (cr6.lt) goto loc_82E54E2C;
loc_82E54E54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E54DF8) {
	__imp__sub_82E54DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54E60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e547d0
	sub_82E547D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E54E60) {
	__imp__sub_82E54E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54E68) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x82e54e8c
	if (!cr6.eq) goto loc_82E54E8C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E54E8C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// rlwinm r30,r29,2,0,29
	r30.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72840
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72960
	sub_82D72960(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e54680
	sub_82E54680(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e54ed8
	if (cr6.eq) goto loc_82E54ED8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	sub_82E57108(ctx, base);
loc_82E54ED8:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E54E68) {
	__imp__sub_82E54E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E54F00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r10,r10,30132
	ctx.r10.s64 = ctx.r10.s64 + 30132;
	// addi r9,r9,30100
	ctx.r9.s64 = ctx.r9.s64 + 30100;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r8,r8,30060
	ctx.r8.s64 = ctx.r8.s64 + 30060;
	// addi r11,r11,30084
	r11.s64 = r11.s64 + 30084;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r7,r7,30044
	ctx.r7.s64 = ctx.r7.s64 + 30044;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// addi r27,r31,44
	r27.s64 = r31.s64 + 44;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// blt cr6,0x82e54fe0
	if (cr6.lt) goto loc_82E54FE0;
	// rlwinm r29,r30,2,0,29
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E54F68:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72840
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72960
	sub_82D72960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e54680
	sub_82E54680(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e54fb4
	if (cr6.eq) goto loc_82E54FB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	sub_82E57108(ctx, base);
loc_82E54FB4:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r10,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r10.u32);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge cr6,0x82e54f68
	if (!cr6.lt) goto loc_82E54F68;
loc_82E54FE0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e5500c
	if (!cr6.eq) goto loc_82E5500C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E5500C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	r11.s64 = r11.s64 + 29828;
	// addi r10,r10,23856
	ctx.r10.s64 = ctx.r10.s64 + 23856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x82e5f410
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E54F00) {
	__imp__sub_82E54F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
loc_82E55050:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e55074
	if (cr6.eq) goto loc_82E55074;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e55050
	if (cr6.lt) goto loc_82E55050;
	// blr 
	return;
loc_82E55074:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82e54e68
	sub_82E54E68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55038) {
	__imp__sub_82E55038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-19480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19480) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55088) {
	__imp__sub_82E55088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55098) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e550b8
	sub_82E550B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55098) {
	__imp__sub_82E55098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E550A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e550b8
	sub_82E550B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E550A0) {
	__imp__sub_82E550A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E550A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e550b8
	sub_82E550B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E550A8) {
	__imp__sub_82E550A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E550B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e550b8
	sub_82E550B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E550B0) {
	__imp__sub_82E550B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E550B8) {
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
	// bl 0x82e54f00
	sub_82E54F00(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e55100
	if (cr6.eq) goto loc_82E55100;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E55100:
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

PPC_WEAK_FUNC(sub_82E550B8) {
	__imp__sub_82E550B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	xer.ca = r11.u32 > 31;
	ctx.r10.s64 = r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bne 0x82e55138
	if (!cr0.eq) goto loc_82E55138;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E55138:
	// b 0x82d73f00
	sub_82D73F00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55120) {
	__imp__sub_82E55120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	xer.ca = r11.u32 > 31;
	ctx.r10.s64 = r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bne 0x82e55158
	if (!cr0.eq) goto loc_82E55158;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E55158:
	// b 0x82d72960
	sub_82D72960(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55140) {
	__imp__sub_82E55140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55160) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	r11.s64 = r11.s64 + 29828;
	// addi r10,r10,30364
	ctx.r10.s64 = ctx.r10.s64 + 30364;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r9,r9,30332
	ctx.r9.s64 = ctx.r9.s64 + 30332;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r8,r8,30316
	ctx.r8.s64 = ctx.r8.s64 + 30316;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r7,r7,30300
	ctx.r7.s64 = ctx.r7.s64 + 30300;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// stb r6,44(r31)
	PPC_STORE_U8(r31.u32 + 44, ctx.r6.u8);
	// stb r6,45(r31)
	PPC_STORE_U8(r31.u32 + 45, ctx.r6.u8);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e5522c
	if (cr6.eq) goto loc_82E5522C;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(112) );
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e5522c
	if (!cr6.gt) goto loc_82E5522C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82E55200:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82d73f00
	sub_82D73F00(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e55200
	if (cr6.lt) goto loc_82E55200;
loc_82E5522C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E55160) {
	__imp__sub_82E55160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55238) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r10,30364
	ctx.r10.s64 = ctx.r10.s64 + 30364;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r9,r9,30332
	ctx.r9.s64 = ctx.r9.s64 + 30332;
	// addi r8,r8,30316
	ctx.r8.s64 = ctx.r8.s64 + 30316;
	// addi r7,r7,30300
	ctx.r7.s64 = ctx.r7.s64 + 30300;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// beq cr6,0x82e552c8
	if (cr6.eq) goto loc_82E552C8;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e552c8
	if (!cr6.gt) goto loc_82E552C8;
	// li r30,0
	r30.s64 = 0;
loc_82E5529C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82d72960
	sub_82D72960(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e5529c
	if (cr6.lt) goto loc_82E5529C;
loc_82E552C8:
	// lwz r30,64(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e55304
	if (!cr6.gt) goto loc_82E55304;
	// li r29,0
	r29.s64 = 0;
loc_82E552D8:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e552d8
	if (!cr6.eq) goto loc_82E552D8;
loc_82E55304:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e55330
	if (!cr6.eq) goto loc_82E55330;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E55330:
	// lwz r30,52(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e5536c
	if (!cr6.gt) goto loc_82E5536C;
	// li r29,0
	r29.s64 = 0;
loc_82E55340:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e55340
	if (!cr6.eq) goto loc_82E55340;
loc_82E5536C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e55398
	if (!cr6.eq) goto loc_82E55398;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E55398:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,29828
	r11.s64 = r11.s64 + 29828;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x82e5f410
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E55238) {
	__imp__sub_82E55238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E553B8) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,72
	r11.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82e55160
	sub_82E55160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e55404
	if (!cr6.eq) goto loc_82E55404;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E55404:
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

PPC_WEAK_FUNC(sub_82E553B8) {
	__imp__sub_82E553B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55418) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32027
	r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,21432
	ctx.r5.s64 = r11.s64 + 21432;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,30276
	ctx.r4.s64 = ctx.r10.s64 + 30276;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-20840) );
	// bl 0x82e32408
	sub_82E32408(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,-19468(r11)
	PPC_STORE_U32(r11.u32 + -19468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55418) {
	__imp__sub_82E55418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// stw r4,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e554b0
	if (!cr6.lt) goto loc_82E554B0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,30376
	ctx.r9.s64 = ctx.r9.s64 + 30376;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E554B0:
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r14,1
	r14.s64 = 1;
	// addi r21,r11,23452
	r21.s64 = r11.s64 + 23452;
	// lfs f30,3164(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3164);
	f30.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f31,3036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3036);
	f31.f64 = double(temp.f32);
	// li r15,-16
	r15.s64 = -16;
	// li r16,16
	r16.s64 = 16;
	// li r22,-32
	r22.s64 = -32;
	// li r17,-48
	r17.s64 = -48;
	// li r23,48
	r23.s64 = 48;
	// li r18,32
	r18.s64 = 32;
	// li r19,64
	r19.s64 = 64;
	// addi r20,r11,23564
	r20.s64 = r11.s64 + 23564;
	// beq cr6,0x82e55938
	if (cr6.eq) goto loc_82E55938;
	// lwz r11,476(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(476) );
	// addi r24,r11,40
	r24.s64 = r11.s64 + 40;
	// lwz r11,468(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r26,4(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(r26.s32, ctx.r10.s32, xer);
	// ble cr6,0x82e556dc
	if (!cr6.gt) goto loc_82E556DC;
	// addi r27,r11,20
	r27.s64 = r11.s64 + 20;
	// lwz r29,4(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(r26.s32, r29.s32, xer);
	// bge cr6,0x82e55560
	if (!cr6.lt) goto loc_82E55560;
	// rlwinm r30,r26,7,0,24
	r30.u64 = rotl64(r26.u32 | (r26.u64 << 32), 7) & 0xFFFFFF80;
	// subf r31,r26,r29
	r31.s64 = r29.s64 - r26.s64;
loc_82E55530:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e55530
	if (!cr6.eq) goto loc_82E55530;
	// b 0x82e556d8
	goto loc_82E556D8;
loc_82E55560:
	// lwz r25,8(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// clrlwi r11,r25,2
	r11.u64 = r25.u32 & 0x3FFFFFFF;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// ble cr6,0x82e556a0
	if (!cr6.gt) goto loc_82E556A0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82e55580
	if (cr6.lt) goto loc_82E55580;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82E55580:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e555b8
	if (!cr6.gt) goto loc_82E555B8;
	// bge cr6,0x82e555a8
	if (!cr6.lt) goto loc_82E555A8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E555A8:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E555B8:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82e5563c
	if (!cr6.gt) goto loc_82E5563C;
	// addi r11,r9,64
	r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r28,48
	ctx.r10.s64 = r28.s64 + 48;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - r28.s64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82E555D4:
	// addic. r7,r11,-64
	xer.ca = r11.u32 > 63;
	ctx.r7.s64 = r11.s64 + -64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82e55628
	if (cr0.eq) goto loc_82E55628;
	// stw r21,-64(r11)
	PPC_STORE_U32(r11.u32 + -64, r21.u32);
	// sth r14,-58(r11)
	PPC_STORE_U16(r11.u32 + -58, r14.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-40) );
	// stw r7,-56(r11)
	PPC_STORE_U32(r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r15
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r15.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r10,r16
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r10,r22
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r11,r17
	ea = (r11.u32 + r17.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r22
	ea = (r11.u32 + r22.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// stw r20,-64(r11)
	PPC_STORE_U32(r11.u32 + -64, r20.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r23.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r18
	ea = (r11.u32 + r18.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r10,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r19.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r23
	ea = (r11.u32 + r23.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E55628:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e555d4
	if (!cr6.eq) goto loc_82E555D4;
loc_82E5563C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r29.u32);
	// ble cr6,0x82e55678
	if (!cr6.gt) goto loc_82E55678;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82E55650:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e55650
	if (!cr6.eq) goto loc_82E55650;
loc_82E55678:
	// rlwinm r11,r25,0,0,0
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e556a0
	if (!cr6.eq) goto loc_82E556A0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r25,7,0,24
	ctx.r5.u64 = rotl64(r25.u32 | (r25.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E556A0:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bge cr6,0x82e556d8
	if (!cr6.lt) goto loc_82E556D8;
	// rlwinm r11,r29,7,0,24
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 7) & 0xFFFFFF80;
	// subf r30,r29,r26
	r30.s64 = r26.s64 - r29.s64;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
loc_82E556B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e556c8
	if (cr6.eq) goto loc_82E556C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e37e98
	sub_82E37E98(ctx, base);
loc_82E556C8:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e556b8
	if (!cr6.eq) goto loc_82E556B8;
loc_82E556D8:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
loc_82E556DC:
	// li r25,0
	r25.s64 = 0;
	// lwz r30,4(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lis r29,-32768
	r29.s64 = -2147483648;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// ble cr6,0x82e55714
	if (!cr6.gt) goto loc_82E55714;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// blt cr6,0x82e55708
	if (cr6.lt) goto loc_82E55708;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82E55708:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E55714:
	// lwz r31,4(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// ble cr6,0x82e55748
	if (!cr6.gt) goto loc_82E55748;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// blt cr6,0x82e5573c
	if (cr6.lt) goto loc_82E5573C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82E5573C:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E55748:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e558b4
	if (!cr6.gt) goto loc_82E558B4;
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82E55764:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r27,0
	r27.s64 = 0;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	// addi r31,r10,76
	r31.s64 = ctx.r10.s64 + 76;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stfs f30,176(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e5586c
	if (!cr6.gt) goto loc_82E5586C;
	// li r29,0
	r29.s64 = 0;
loc_82E557E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e55858
	if (cr6.eq) goto loc_82E55858;
	// lwz r10,476(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(476) );
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(84) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// vmaxfp v0,v0,v12
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vminfp v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::min_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E55858:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82e557e8
	if (cr6.lt) goto loc_82E557E8;
loc_82E5586C:
	// lwz r31,468(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r3,r26,r11
	ctx.r3.u64 = r26.u64 + r11.u64;
	// bl 0x82e37da8
	sub_82E37DA8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r26,r26,128
	r26.s64 = r26.s64 + 128;
	// stwx r11,r28,r10
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e55764
	if (cr6.lt) goto loc_82E55764;
	// b 0x82e558b8
	goto loc_82E558B8;
loc_82E558B4:
	// lwz r31,468(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
loc_82E558B8:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-16) );
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// lwz r6,-19468(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19468) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e5590c
	if (!cr6.eq) goto loc_82E5590C;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E5590C:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e55938
	if (!cr6.eq) goto loc_82E55938;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E55938:
	// lwz r11,468(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e55ce8
	if (cr6.eq) goto loc_82E55CE8;
	// lwz r11,476(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(476) );
	// addi r24,r11,52
	r24.s64 = r11.s64 + 52;
	// lwz r11,468(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r26,4(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// ble cr6,0x82e55b2c
	if (!cr6.gt) goto loc_82E55B2C;
	// lwz r11,468(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// lwz r29,4(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(r26.s32, r29.s32, xer);
	// bge cr6,0x82e559b0
	if (!cr6.lt) goto loc_82E559B0;
	// rlwinm r30,r26,7,0,24
	r30.u64 = rotl64(r26.u32 | (r26.u64 << 32), 7) & 0xFFFFFF80;
	// subf r31,r26,r29
	r31.s64 = r29.s64 - r26.s64;
loc_82E55980:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e55980
	if (!cr6.eq) goto loc_82E55980;
	// b 0x82e55b28
	goto loc_82E55B28;
loc_82E559B0:
	// lwz r25,8(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// clrlwi r11,r25,2
	r11.u64 = r25.u32 & 0x3FFFFFFF;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// ble cr6,0x82e55af0
	if (!cr6.gt) goto loc_82E55AF0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82e559d0
	if (cr6.lt) goto loc_82E559D0;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82E559D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e55a08
	if (!cr6.gt) goto loc_82E55A08;
	// bge cr6,0x82e559f8
	if (!cr6.lt) goto loc_82E559F8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E559F8:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E55A08:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82e55a8c
	if (!cr6.gt) goto loc_82E55A8C;
	// addi r11,r9,64
	r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r28,48
	ctx.r10.s64 = r28.s64 + 48;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - r28.s64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82E55A24:
	// addic. r7,r11,-64
	xer.ca = r11.u32 > 63;
	ctx.r7.s64 = r11.s64 + -64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82e55a78
	if (cr0.eq) goto loc_82E55A78;
	// stw r21,-64(r11)
	PPC_STORE_U32(r11.u32 + -64, r21.u32);
	// sth r14,-58(r11)
	PPC_STORE_U16(r11.u32 + -58, r14.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-40) );
	// stw r7,-56(r11)
	PPC_STORE_U32(r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r15
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r15.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r10,r16
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r10,r22
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r11,r17
	ea = (r11.u32 + r17.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r22
	ea = (r11.u32 + r22.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// stw r20,-64(r11)
	PPC_STORE_U32(r11.u32 + -64, r20.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r23.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r18
	ea = (r11.u32 + r18.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r10,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r19.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r23
	ea = (r11.u32 + r23.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E55A78:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e55a24
	if (!cr6.eq) goto loc_82E55A24;
loc_82E55A8C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r29.u32);
	// ble cr6,0x82e55ac8
	if (!cr6.gt) goto loc_82E55AC8;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82E55AA0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e55aa0
	if (!cr6.eq) goto loc_82E55AA0;
loc_82E55AC8:
	// rlwinm r11,r25,0,0,0
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e55af0
	if (!cr6.eq) goto loc_82E55AF0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r11,4
	r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r25,7,0,24
	ctx.r5.u64 = rotl64(r25.u32 | (r25.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E55AF0:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bge cr6,0x82e55b28
	if (!cr6.lt) goto loc_82E55B28;
	// rlwinm r11,r29,7,0,24
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 7) & 0xFFFFFF80;
	// subf r30,r29,r26
	r30.s64 = r26.s64 - r29.s64;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
loc_82E55B08:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e55b18
	if (cr6.eq) goto loc_82E55B18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e37e98
	sub_82E37E98(ctx, base);
loc_82E55B18:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e55b08
	if (!cr6.eq) goto loc_82E55B08;
loc_82E55B28:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
loc_82E55B2C:
	// li r22,0
	r22.s64 = 0;
	// lwz r31,4(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lis r11,-32768
	r11.s64 = -2147483648;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// ble cr6,0x82e55b64
	if (!cr6.gt) goto loc_82E55B64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// blt cr6,0x82e55b58
	if (cr6.lt) goto loc_82E55B58;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82E55B58:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E55B64:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r25,468(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e55c94
	if (!cr6.gt) goto loc_82E55C94;
	// lwz r23,476(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(476) );
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_82E55B88:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stfs f30,160(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r31,r11,76
	r31.s64 = r11.s64 + 76;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e55c58
	if (!cr6.gt) goto loc_82E55C58;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82E55BD8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e55c44
	if (cr6.eq) goto loc_82E55C44;
	// lwz r3,84(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(84) );
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// vmaxfp v0,v0,v12
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vminfp v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::min_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E55C44:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e55bd8
	if (cr6.lt) goto loc_82E55BD8;
loc_82E55C58:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x82e37da8
	sub_82E37DA8(ctx, base);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// stwx r11,r28,r10
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82e55b88
	if (cr6.lt) goto loc_82E55B88;
loc_82E55C94:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(-16) );
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,-19468(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19468) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e55ce8
	if (!cr6.eq) goto loc_82E55CE8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E55CE8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r11,8
	r11.s64 = 8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e55d20
	if (!cr6.lt) goto loc_82E55D20;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E55D20:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E55458) {
	__imp__sub_82E55458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-19468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19468) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55D30) {
	__imp__sub_82E55D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55D40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e55d58
	sub_82E55D58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55D40) {
	__imp__sub_82E55D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55D48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e55d58
	sub_82E55D58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55D48) {
	__imp__sub_82E55D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e55d58
	sub_82E55D58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55D50) {
	__imp__sub_82E55D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55D58) {
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
	// bl 0x82e55238
	sub_82E55238(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e55da0
	if (cr6.eq) goto loc_82E55DA0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E55DA0:
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

PPC_WEAK_FUNC(sub_82E55D58) {
	__imp__sub_82E55D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55DC0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55DC0) {
	__imp__sub_82E55DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55DC8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55DC8) {
	__imp__sub_82E55DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55DD0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55DD0) {
	__imp__sub_82E55DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55DD8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55DD8) {
	__imp__sub_82E55DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55DE0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55DE0) {
	__imp__sub_82E55DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82E55DE8) {
	__imp__sub_82E55DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82d5a210
	sub_82D5A210(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E55E00) {
	__imp__sub_82E55E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	f31.f64 = double(temp.f32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x82e55e3c
	if (cr6.gt) goto loc_82E55E3C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f31,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f31.f64 = double(temp.f32);
loc_82E55E3C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r23,r31,40
	r23.s64 = r31.s64 + 40;
	// li r22,0
	r22.s64 = 0;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e55ef8
	if (!cr6.gt) goto loc_82E55EF8;
	// li r24,0
	r24.s64 = 0;
	// lis r25,-31948
	r25.s64 = -2093744128;
loc_82E55E6C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// li r31,0
	r31.s64 = 0;
	// lwzx r11,r11,r24
	r11.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// addi r28,r11,76
	r28.s64 = r11.s64 + 76;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e55ee4
	if (!cr6.gt) goto loc_82E55EE4;
	// li r30,0
	r30.s64 = 0;
loc_82E55E8C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e57048
	sub_82E57048(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r29,208
	ctx.r3.s64 = r29.s64 + 208;
	// bl 0x82d84680
	sub_82D84680(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r6,-19464(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + int32_t(-19464) );
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e55e8c
	if (cr6.lt) goto loc_82E55E8C;
loc_82E55EE4:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82e55e6c
	if (cr6.lt) goto loc_82E55E6C;
loc_82E55EF8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82E55E08) {
	__imp__sub_82E55E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55F18) {
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
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r31,8
	r31.s64 = 8;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82e55f6c
	if (!cr6.lt) goto loc_82E55F6C;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r8,r8,30404
	ctx.r8.s64 = ctx.r8.s64 + 30404;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r8
	ctx.r8.u64 = read_timestamp_counter();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82E55F6C:
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e55f90
	if (cr6.eq) goto loc_82E55F90;
	// lwz r10,-44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-44) );
	// addi r3,r11,-44
	ctx.r3.s64 = r11.s64 + -44;
	// lwz r4,-20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-20) );
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E55F90:
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e55fc0
	if (!cr6.lt) goto loc_82E55FC0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E55FC0:
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

PPC_WEAK_FUNC(sub_82E55F18) {
	__imp__sub_82E55F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E55FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e5600c
	if (!cr6.gt) goto loc_82E5600C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
loc_82E55FEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e56014
	if (cr6.eq) goto loc_82E56014;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e55fec
	if (cr6.lt) goto loc_82E55FEC;
loc_82E5600C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E56014:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E55FD8) {
	__imp__sub_82E55FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r30,-20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-20) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82e57048
	sub_82E57048(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,-19464(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19464) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E56020) {
	__imp__sub_82E56020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e5f4e8
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,23856
	r11.s64 = r11.s64 + 23856;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// addi r9,r9,30548
	ctx.r9.s64 = ctx.r9.s64 + 30548;
	// addi r8,r8,30516
	ctx.r8.s64 = ctx.r8.s64 + 30516;
	// addi r7,r7,30500
	ctx.r7.s64 = ctx.r7.s64 + 30500;
	// addi r6,r6,30476
	ctx.r6.s64 = ctx.r6.s64 + 30476;
	// addi r5,r5,30460
	ctx.r5.s64 = ctx.r5.s64 + 30460;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r5.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// bl 0x82266f00
	sub_82266F00(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82266f00
	sub_82266F00(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82266f00
	sub_82266F00(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r29
	r27.u64 = r29.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r11.u8);
	// stb r29,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r29.u8);
	// lfs f0,3800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3800);
	f0.f64 = double(temp.f32);
	// stb r29,98(r31)
	PPC_STORE_U8(r31.u32 + 98, r29.u8);
	// stb r11,99(r31)
	PPC_STORE_U8(r31.u32 + 99, r11.u8);
	// stb r11,100(r31)
	PPC_STORE_U8(r31.u32 + 100, r11.u8);
	// stb r11,101(r31)
	PPC_STORE_U8(r31.u32 + 101, r11.u8);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82e561ac
	if (!cr6.gt) goto loc_82E561AC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r26,r29
	r26.u64 = r29.u64;
	// addi r25,r11,30428
	r25.s64 = r11.s64 + 30428;
loc_82E56144:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82d51730
	sub_82D51730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e5618c
	if (cr6.eq) goto loc_82E5618C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// blt cr6,0x82e56144
	if (cr6.lt) goto loc_82E56144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
loc_82E5618C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e561a4
	if (cr6.eq) goto loc_82E561A4;
	// addi r29,r11,-8
	r29.s64 = r11.s64 + -8;
loc_82E561A4:
	// lbz r11,88(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 88);
	// stb r11,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r11.u8);
loc_82E561AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E56068) {
	__imp__sub_82E56068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E561B8) {
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
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e561fc
	if (!cr6.gt) goto loc_82E561FC;
	// lwz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(116) );
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82E561E0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r7,4405
	cr6.compare<uint32_t>(ctx.r7.u32, 4405, xer);
	// beq cr6,0x82e56258
	if (cr6.eq) goto loc_82E56258;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e561e0
	if (cr6.lt) goto loc_82E561E0;
loc_82E561FC:
	// li r11,0
	r11.s64 = 0;
loc_82E56200:
	// rotlwi r31,r11,0
	r31.u64 = rotl32(r11.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e56218
	if (!cr6.eq) goto loc_82E56218;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e5636c
	if (cr6.eq) goto loc_82E5636C;
loc_82E56218:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// li r11,0
	r11.s64 = 0;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e5636c
	if (!cr6.gt) goto loc_82E5636C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
loc_82E56230:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e56268
	if (cr6.eq) goto loc_82E56268;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e56230
	if (cr6.lt) goto loc_82E56230;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E56258:
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// b 0x82e56200
	goto loc_82E56200;
loc_82E56268:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e5636c
	if (cr6.lt) goto loc_82E5636C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwzx r27,r11,r10
	r27.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bne cr6,0x82e56288
	if (!cr6.eq) goto loc_82E56288;
	// lwz r31,16(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
loc_82E56288:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e57048
	sub_82E57048(ctx, base);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,-16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-16) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,-19464(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-19464) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,57(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e5630c
	if (cr6.eq) goto loc_82E5630C;
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d5a318
	sub_82D5A318(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82e56304
	if (!cr6.eq) goto loc_82E56304;
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// bl 0x82d5a8f8
	sub_82D5A8F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d5a8f8
	sub_82D5A8F8(ctx, base);
	// b 0x82e5630c
	goto loc_82E5630C;
loc_82E56304:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
loc_82E5630C:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e5636c
	if (!cr6.gt) goto loc_82E5636C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
loc_82E56320:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// beq cr6,0x82e56344
	if (cr6.eq) goto loc_82E56344;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e56320
	if (cr6.lt) goto loc_82E56320;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E56344:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e5636c
	if (cr6.lt) goto loc_82E5636C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_82E5636C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E561B8) {
	__imp__sub_82E561B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e563ec
	if (!cr6.gt) goto loc_82E563EC;
	// mr r31,r26
	r31.u64 = r26.u64;
	// lis r27,-31948
	r27.s64 = -2093744128;
loc_82E563B0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// lwz r5,-19464(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-19464) );
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rotlwi r4,r9,0
	ctx.r4.u64 = rotl32(ctx.r9.u32, 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e563b0
	if (cr6.lt) goto loc_82E563B0;
loc_82E563EC:
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e5641c
	if (!cr6.lt) goto loc_82E5641C;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x82e56410
	if (cr6.gt) goto loc_82E56410;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82E56410:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E5641C:
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E56378) {
	__imp__sub_82E56378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56428) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,108
	r11.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82e56068
	sub_82E56068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e56474
	if (!cr6.eq) goto loc_82E56474;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E56474:
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

PPC_WEAK_FUNC(sub_82E56428) {
	__imp__sub_82E56428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56488) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32027
	r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,25640
	ctx.r5.s64 = r11.s64 + 25640;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,22544
	ctx.r4.s64 = ctx.r10.s64 + 22544;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-20840) );
	// bl 0x82e32408
	sub_82E32408(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,-19464(r11)
	PPC_STORE_U32(r11.u32 + -19464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E56488) {
	__imp__sub_82E56488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E564C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// addi r4,r23,40
	ctx.r4.s64 = r23.s64 + 40;
	// bne cr6,0x82e564f0
	if (!cr6.eq) goto loc_82E564F0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82E564F0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82d73d40
	sub_82D73D40(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// addi r4,r23,44
	ctx.r4.s64 = r23.s64 + 44;
	// bne cr6,0x82e56508
	if (!cr6.eq) goto loc_82E56508;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82E56508:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82d73f00
	sub_82D73F00(ctx, base);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e56540
	if (cr6.eq) goto loc_82E56540;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// b 0x82e5654c
	goto loc_82E5654C;
loc_82E56540:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4ea30
	sub_82D4EA30(ctx, base);
loc_82E5654C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e5656c
	if (cr6.eq) goto loc_82E5656C;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x82e56570
	goto loc_82E56570;
loc_82E5656C:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82E56570:
	// addi r31,r23,48
	r31.s64 = r23.s64 + 48;
	// stw r22,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r22.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e56598
	if (!cr6.eq) goto loc_82E56598;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E56598:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r27,r22,40
	r27.s64 = r22.s64 + 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r25,r24
	r25.u64 = r24.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e56634
	if (!cr6.gt) goto loc_82E56634;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82E565CC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// addi r29,r11,76
	r29.s64 = r11.s64 + 76;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e56620
	if (!cr6.gt) goto loc_82E56620;
	// addi r28,r23,40
	r28.s64 = r23.s64 + 40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82E565F0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e565f0
	if (cr6.lt) goto loc_82E565F0;
loc_82E56620:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e565cc
	if (cr6.lt) goto loc_82E565CC;
loc_82E56634:
	// addi r26,r22,52
	r26.s64 = r22.s64 + 52;
	// mr r25,r24
	r25.u64 = r24.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e566b4
	if (!cr6.gt) goto loc_82E566B4;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_82E5664C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r29,r11,76
	r29.s64 = r11.s64 + 76;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e566a0
	if (!cr6.gt) goto loc_82E566A0;
	// addi r28,r23,40
	r28.s64 = r23.s64 + 40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82E56670:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e56670
	if (cr6.lt) goto loc_82E56670;
loc_82E566A0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e5664c
	if (cr6.lt) goto loc_82E5664C;
loc_82E566B4:
	// lwz r11,32(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(32) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e5670c
	if (cr6.eq) goto loc_82E5670C;
	// addi r28,r11,76
	r28.s64 = r11.s64 + 76;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e5670c
	if (!cr6.gt) goto loc_82E5670C;
	// addi r29,r23,40
	r29.s64 = r23.s64 + 40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82E566DC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e566dc
	if (cr6.lt) goto loc_82E566DC;
loc_82E5670C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82E564C8) {
	__imp__sub_82E564C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56718) {
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
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56774
	if (cr6.eq) goto loc_82E56774;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e56774
	if (!cr6.gt) goto loc_82E56774;
	// addi r28,r29,-8
	r28.s64 = r29.s64 + -8;
	// li r31,0
	r31.s64 = 0;
loc_82E5674C:
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82e564c8
	sub_82E564C8(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e5674c
	if (cr6.lt) goto loc_82E5674C;
loc_82E56774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E56718) {
	__imp__sub_82E56718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56780) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e564c8
	sub_82E564C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E56780) {
	__imp__sub_82E56780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// li r18,0
	r18.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r11,r18
	r11.u64 = r18.u64;
	// lwz r9,120(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + int32_t(120) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e567d4
	if (!cr6.gt) goto loc_82E567D4;
	// lwz r8,116(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + int32_t(116) );
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82E567B8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r7,4405
	cr6.compare<uint32_t>(ctx.r7.u32, 4405, xer);
	// beq cr6,0x82e568bc
	if (cr6.eq) goto loc_82E568BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e567b8
	if (cr6.lt) goto loc_82E567B8;
loc_82E567D4:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82E567D8:
	// rotlwi r22,r11,0
	r22.u64 = rotl32(r11.u32, 0);
	// mr r11,r18
	r11.u64 = r18.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e56808
	if (!cr6.gt) goto loc_82E56808;
	// lwz r10,116(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + int32_t(116) );
loc_82E567EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,4405
	cr6.compare<uint32_t>(ctx.r8.u32, 4405, xer);
	// beq cr6,0x82e568cc
	if (cr6.eq) goto loc_82E568CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e567ec
	if (cr6.lt) goto loc_82E567EC;
loc_82E56808:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82E5680C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e56820
	if (cr6.eq) goto loc_82E56820;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82e56e08
	if (cr6.eq) goto loc_82E56E08;
loc_82E56820:
	// lwz r31,16(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + int32_t(16) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82e56834
	if (!cr6.eq) goto loc_82E56834;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82e56e08
	if (cr6.eq) goto loc_82E56E08;
loc_82E56834:
	// lwz r11,-24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e56850
	if (!cr6.eq) goto loc_82E56850;
	// lwz r11,-20(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82e56854
	if (cr6.eq) goto loc_82E56854;
loc_82E56850:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82E56854:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e5687c
	if (cr6.eq) goto loc_82E5687C;
	// li r5,4660
	ctx.r5.s64 = 4660;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e43730
	sub_82E43730(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e56e08
	if (!cr6.eq) goto loc_82E56E08;
loc_82E5687C:
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(12) );
	// mr r11,r18
	r11.u64 = r18.u64;
	// lwz r8,8(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + int32_t(8) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e56e08
	if (!cr6.gt) goto loc_82E56E08;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
loc_82E56894:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e568d4
	if (cr6.eq) goto loc_82E568D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e56894
	if (cr6.lt) goto loc_82E56894;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82ca2c10
	return;
loc_82E568BC:
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// b 0x82e567d8
	goto loc_82E567D8;
loc_82E568CC:
	// li r11,1
	r11.s64 = 1;
	// b 0x82e5680c
	goto loc_82E5680C;
loc_82E568D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e56e08
	if (cr6.lt) goto loc_82E56E08;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// lwzx r21,r11,r10
	r21.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bne cr6,0x82e568f8
	if (!cr6.eq) goto loc_82E568F8;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82E568F8:
	// lbz r11,58(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 58);
	// mr r23,r18
	r23.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56940
	if (cr6.eq) goto loc_82E56940;
	// addi r31,r24,44
	r31.s64 = r24.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d5a318
	sub_82D5A318(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r23,r11,31
	r23.u64 = r11.u32 & 0x1;
	// bne cr6,0x82e56940
	if (!cr6.eq) goto loc_82E56940;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
loc_82E56940:
	// lbz r11,57(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 57);
	// mr r25,r18
	r25.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56964
	if (cr6.eq) goto loc_82E56964;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r24,20
	ctx.r3.s64 = r24.s64 + 20;
	// bl 0x82d5a318
	sub_82D5A318(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82E56964:
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// li r19,1
	r19.s64 = 1;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bne cr6,0x82e56be8
	if (!cr6.eq) goto loc_82E56BE8;
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e56be8
	if (!cr6.eq) goto loc_82E56BE8;
	// lbz r11,59(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 59);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56be8
	if (cr6.eq) goto loc_82E56BE8;
	// lbz r11,60(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56be8
	if (cr6.eq) goto loc_82E56BE8;
	// li r5,4406
	ctx.r5.s64 = 4406;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e43730
	sub_82E43730(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,4401
	ctx.r5.s64 = 4401;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// ld r31,0(r11)
	r31.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82e43730
	sub_82E43730(ctx, base);
	// ld r30,0(r3)
	r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e56b30
	if (!cr6.eq) goto loc_82E56B30;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e56b30
	if (!cr6.eq) goto loc_82E56B30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e5f690
	sub_82E5F690(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e5f6a0
	sub_82E5F6A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e610b0
	sub_82E610B0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r27,r11,-1
	r27.s64 = r11.s64 + -1;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x82e56acc
	if (cr6.lt) goto loc_82E56ACC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// rlwinm r31,r27,2,0,29
	r31.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,30568
	r30.s64 = r11.s64 + 30568;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r28,-31949
	r28.s64 = -2093809664;
	// addi r29,r11,30144
	r29.s64 = r11.s64 + 30144;
loc_82E56A34:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82e56abc
	if (!cr6.eq) goto loc_82E56ABC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e56abc
	if (!cr6.eq) goto loc_82E56ABC;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lwz r3,29792(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(29792) );
	// li r8,271
	ctx.r8.s64 = 271;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
loc_82E56ABC:
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bge cr6,0x82e56a34
	if (!cr6.lt) goto loc_82E56A34;
loc_82E56ACC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82e56b20
	if (cr6.eq) goto loc_82E56B20;
	// lhz r11,4(r22)
	r11.u64 = PPC_LOAD_U16(r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56b10
	if (cr6.eq) goto loc_82E56B10;
	// lhz r11,6(r22)
	r11.u64 = PPC_LOAD_U16(r22.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r22)
	PPC_STORE_U16(r22.u32 + 6, r11.u16);
	// bne cr6,0x82e56b10
	if (!cr6.eq) goto loc_82E56B10;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E56B10:
	// li r5,4405
	ctx.r5.s64 = 4405;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82d7a100
	sub_82D7A100(ctx, base);
loc_82E56B20:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// b 0x82e56be8
	goto loc_82E56BE8;
loc_82E56B30:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// rlwinm r19,r11,27,31,31
	r19.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82e56b50
	if (cr6.eq) goto loc_82E56B50;
	// li r5,4401
	ctx.r5.s64 = 4401;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d7a100
	sub_82D7A100(ctx, base);
loc_82E56B50:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,96
	r11.s64 = 96;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bne cr6,0x82e56b80
	if (!cr6.eq) goto loc_82E56B80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82E56B80:
	// bl 0x82e3d7f0
	sub_82E3D7F0(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0xF;
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
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_82E56BE8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82e57048
	sub_82E57048(ctx, base);
	// addi r31,r21,4
	r31.s64 = r21.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82e56c18
	if (!cr6.eq) goto loc_82E56C18;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82E56C18:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x82e56d28
	if (!cr6.eq) goto loc_82E56D28;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82e56c60
	if (cr6.gt) goto loc_82E56C60;
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e56c60
	if (!cr6.eq) goto loc_82E56C60;
	// lbz r11,60(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e56d78
	if (!cr6.eq) goto loc_82E56D78;
loc_82E56C60:
	// lwz r3,-16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-16) );
	// lis r31,-31948
	r31.s64 = -2093744128;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r20,224
	ctx.r5.s64 = r20.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r7,-19464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-19464) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,57(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56cb8
	if (cr6.eq) goto loc_82E56CB8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r24,20
	ctx.r3.s64 = r24.s64 + 20;
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r24,32
	ctx.r3.s64 = r24.s64 + 32;
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
loc_82E56CB8:
	// li r5,4400
	ctx.r5.s64 = 4400;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e43730
	sub_82E43730(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82e56d08
	if (!cr6.eq) goto loc_82E56D08;
	// lbz r11,61(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 61);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e56d78
	if (cr6.eq) goto loc_82E56D78;
	// lbz r11,216(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82e56cf8
	if (!cr6.eq) goto loc_82E56CF8;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r4,-19456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19456) );
	// b 0x82e56d00
	goto loc_82E56D00;
loc_82E56CF8:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r4,-19460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19460) );
loc_82E56D00:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82e56d78
	if (cr6.eq) goto loc_82E56D78;
loc_82E56D08:
	// lwz r3,-16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-16) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,-19464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-19464) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e56d78
	goto loc_82E56D78;
loc_82E56D28:
	// addi r31,r24,32
	r31.s64 = r24.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d5a318
	sub_82D5A318(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265bc0
	sub_82265BC0(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-16) );
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r20,224
	ctx.r5.s64 = r20.s64 + 224;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,-19464(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19464) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E56D78:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// mr r30,r18
	r30.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e56ddc
	if (!cr6.gt) goto loc_82E56DDC;
	// clrlwi r29,r19,24
	r29.u64 = r19.u32 & 0xFF;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82E56D90:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e56da4
	if (!cr6.eq) goto loc_82E56DA4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// stw r18,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r18.u32);
loc_82E56DA4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e56dc8
	if (cr6.eq) goto loc_82E56DC8;
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
loc_82E56DC8:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e56d90
	if (cr6.lt) goto loc_82E56D90;
loc_82E56DDC:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e56e08
	if (!cr6.eq) goto loc_82E56E08;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E56E08:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82ca2c10
	return;
}

PPC_WEAK_FUNC(sub_82E56788) {
	__imp__sub_82E56788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56E10) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x82e56e34
	if (!cr6.eq) goto loc_82E56E34;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E56E34:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// rlwinm r30,r29,2,0,29
	r30.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72840
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72960
	sub_82D72960(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e56378
	sub_82E56378(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e56e80
	if (cr6.eq) goto loc_82E56E80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	sub_82E57108(ctx, base);
loc_82E56E80:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E56E10) {
	__imp__sub_82E56E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56EA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r10,r10,30548
	ctx.r10.s64 = ctx.r10.s64 + 30548;
	// addi r9,r9,30516
	ctx.r9.s64 = ctx.r9.s64 + 30516;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r8,r8,30476
	ctx.r8.s64 = ctx.r8.s64 + 30476;
	// addi r11,r11,30500
	r11.s64 = r11.s64 + 30500;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r7,r7,30460
	ctx.r7.s64 = ctx.r7.s64 + 30460;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// addi r27,r31,44
	r27.s64 = r31.s64 + 44;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// blt cr6,0x82e56f88
	if (cr6.lt) goto loc_82E56F88;
	// rlwinm r29,r30,2,0,29
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E56F10:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72840
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82d72960
	sub_82D72960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e56378
	sub_82E56378(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e56f5c
	if (cr6.eq) goto loc_82E56F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	sub_82E57108(ctx, base);
loc_82E56F5C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r10,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r10.u32);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge cr6,0x82e56f10
	if (!cr6.lt) goto loc_82E56F10;
loc_82E56F88:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e56fcc
	if (!cr6.eq) goto loc_82E56FCC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E56FCC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	r11.s64 = r11.s64 + 29828;
	// addi r10,r10,23856
	ctx.r10.s64 = ctx.r10.s64 + 23856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x82e5f410
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E56EA8) {
	__imp__sub_82E56EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E56FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
loc_82E57010:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e57034
	if (cr6.eq) goto loc_82E57034;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e57010
	if (cr6.lt) goto loc_82E57010;
	// blr 
	return;
loc_82E57034:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82e56e10
	sub_82E56E10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E56FF8) {
	__imp__sub_82E56FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E57048) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82e57088
	if (!cr6.gt) goto loc_82E57088;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(116) );
loc_82E5706C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,4404
	cr6.compare<uint32_t>(ctx.r8.u32, 4404, xer);
	// beq cr6,0x82e570b8
	if (cr6.eq) goto loc_82E570B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e5706c
	if (cr6.lt) goto loc_82E5706C;
loc_82E57088:
	// li r11,0
	r11.s64 = 0;
loc_82E5708C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e570c0
	if (cr6.eq) goto loc_82E570C0;
	// li r5,4404
	ctx.r5.s64 = 4404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e43730
	sub_82E43730(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82E570B8:
	// li r11,1
	r11.s64 = 1;
	// b 0x82e5708c
	goto loc_82E5708C;
loc_82E570C0:
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E57048) {
	__imp__sub_82E57048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E570D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-19464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19464) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E570D8) {
	__imp__sub_82E570D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E570E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e571c8
	sub_82E571C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E570E8) {
	__imp__sub_82E570E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E570F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e571c8
	sub_82E571C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E570F0) {
	__imp__sub_82E570F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E570F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e571c8
	sub_82E571C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E570F8) {
	__imp__sub_82E570F8(ctx, base);
}

