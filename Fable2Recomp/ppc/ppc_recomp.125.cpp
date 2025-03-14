#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C97030"))) PPC_WEAK_FUNC(sub_82C97030);
PPC_FUNC_IMPL(__imp__sub_82C97030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_82C97030:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x82c9705c
	if (cr6.lt) goto loc_82C9705C;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x82c9705c
	if (cr6.gt) goto loc_82C9705C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
loc_82C9705C:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x82c97078
	if (cr6.lt) goto loc_82C97078;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x82c97078
	if (cr6.gt) goto loc_82C97078;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
loc_82C97078:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82c97098
	if (!cr6.eq) goto loc_82C97098;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c97030
	if (!cr6.eq) goto loc_82C97030;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C97098:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C970A0"))) PPC_WEAK_FUNC(sub_82C970A0);
PPC_FUNC_IMPL(__imp__sub_82C970A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-1976
	ctx.r3.s64 = r11.s64 + -1976;
	// b 0x82c8d750
	// ERROR 82C8D750
	return;
}

__attribute__((alias("__imp__sub_82C970B0"))) PPC_WEAK_FUNC(sub_82C970B0);
PPC_FUNC_IMPL(__imp__sub_82C970B0) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c97104
	if (!cr6.eq) goto loc_82C97104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82C97104:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97120"))) PPC_WEAK_FUNC(sub_82C97120);
PPC_FUNC_IMPL(__imp__sub_82C97120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// addi r11,r3,-9
	r11.s64 = ctx.r3.s64 + -9;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bgt cr6,0x82c971ac
	if (cr6.gt) goto loc_82C971AC;
	// lis r12,-32055
	r12.s64 = -2100756480;
	// addi r12,r12,28996
	r12.s64 = r12.s64 + 28996;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82C971A4;
	case 1:
		goto loc_82C971A4;
	case 2:
		goto loc_82C971AC;
	case 3:
		goto loc_82C971AC;
	case 4:
		goto loc_82C971A4;
	case 5:
		goto loc_82C971AC;
	case 6:
		goto loc_82C971AC;
	case 7:
		goto loc_82C971AC;
	case 8:
		goto loc_82C971AC;
	case 9:
		goto loc_82C971AC;
	case 10:
		goto loc_82C971AC;
	case 11:
		goto loc_82C971AC;
	case 12:
		goto loc_82C971AC;
	case 13:
		goto loc_82C971AC;
	case 14:
		goto loc_82C971AC;
	case 15:
		goto loc_82C971AC;
	case 16:
		goto loc_82C971AC;
	case 17:
		goto loc_82C971AC;
	case 18:
		goto loc_82C971AC;
	case 19:
		goto loc_82C971AC;
	case 20:
		goto loc_82C971AC;
	case 21:
		goto loc_82C971AC;
	case 22:
		goto loc_82C971AC;
	case 23:
		goto loc_82C971A4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,29092(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29092);
	// lwz r22,29092(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29092);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29092(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29092);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29100);
	// lwz r22,29092(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29092);
loc_82C971A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C971AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C971B8"))) PPC_WEAK_FUNC(sub_82C971B8);
PPC_FUNC_IMPL(__imp__sub_82C971B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82c971fc
	if (!cr6.eq) goto loc_82C971FC;
loc_82C971E8:
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82C971FC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97444
	if (cr6.eq) goto loc_82C97444;
loc_82C97218:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c97264
	if (!cr6.eq) goto loc_82C97264;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82c9726c
	goto loc_82C9726C;
loc_82C97264:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
loc_82C9726C:
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c97218
	if (!cr6.eq) goto loc_82C97218;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82c971e8
	if (cr6.eq) goto loc_82C971E8;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
loc_82C97284:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c97444
	if (cr6.eq) goto loc_82C97444;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82c97444
	if (cr6.eq) goto loc_82C97444;
	// cmpwi cr6,r3,61
	cr6.compare<int32_t>(ctx.r3.s32, 61, xer);
	// beq cr6,0x82c972f0
	if (cr6.eq) goto loc_82C972F0;
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c972f8
	if (!cr6.eq) goto loc_82C972F8;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// b 0x82c97284
	goto loc_82C97284;
loc_82C972F0:
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x82c9732c
	goto loc_82C9732C;
loc_82C972F8:
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
loc_82C972FC:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c972fc
	if (!cr6.eq) goto loc_82C972FC;
	// cmpwi cr6,r10,61
	cr6.compare<int32_t>(ctx.r10.s32, 61, xer);
	// bne cr6,0x82c97444
	if (!cr6.eq) goto loc_82C97444;
loc_82C9732C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82c97444
	if (cr6.eq) goto loc_82C97444;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97388
	if (cr6.eq) goto loc_82C97388;
loc_82C97360:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c97360
	if (!cr6.eq) goto loc_82C97360;
loc_82C97388:
	// cmpwi cr6,r10,34
	cr6.compare<int32_t>(ctx.r10.s32, 34, xer);
	// beq cr6,0x82c97398
	if (cr6.eq) goto loc_82C97398;
	// cmpwi cr6,r10,39
	cr6.compare<int32_t>(ctx.r10.s32, 39, xer);
	// bne cr6,0x82c97444
	if (!cr6.eq) goto loc_82C97444;
loc_82C97398:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// beq cr6,0x82c9742c
	if (cr6.eq) goto loc_82C9742C;
loc_82C973C4:
	// cmpwi cr6,r3,97
	cr6.compare<int32_t>(ctx.r3.s32, 97, xer);
	// blt cr6,0x82c973d4
	if (cr6.lt) goto loc_82C973D4;
	// cmpwi cr6,r3,122
	cr6.compare<int32_t>(ctx.r3.s32, 122, xer);
	// ble cr6,0x82c9740c
	if (!cr6.gt) goto loc_82C9740C;
loc_82C973D4:
	// cmpwi cr6,r3,65
	cr6.compare<int32_t>(ctx.r3.s32, 65, xer);
	// blt cr6,0x82c973e4
	if (cr6.lt) goto loc_82C973E4;
	// cmpwi cr6,r3,90
	cr6.compare<int32_t>(ctx.r3.s32, 90, xer);
	// ble cr6,0x82c9740c
	if (!cr6.gt) goto loc_82C9740C;
loc_82C973E4:
	// cmpwi cr6,r3,48
	cr6.compare<int32_t>(ctx.r3.s32, 48, xer);
	// blt cr6,0x82c973f4
	if (cr6.lt) goto loc_82C973F4;
	// cmpwi cr6,r3,57
	cr6.compare<int32_t>(ctx.r3.s32, 57, xer);
	// ble cr6,0x82c9740c
	if (!cr6.gt) goto loc_82C9740C;
loc_82C973F4:
	// cmpwi cr6,r3,46
	cr6.compare<int32_t>(ctx.r3.s32, 46, xer);
	// beq cr6,0x82c9740c
	if (cr6.eq) goto loc_82C9740C;
	// cmpwi cr6,r3,45
	cr6.compare<int32_t>(ctx.r3.s32, 45, xer);
	// beq cr6,0x82c9740c
	if (cr6.eq) goto loc_82C9740C;
	// cmpwi cr6,r3,95
	cr6.compare<int32_t>(ctx.r3.s32, 95, xer);
	// bne cr6,0x82c97444
	if (!cr6.eq) goto loc_82C97444;
loc_82C9740C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// bne cr6,0x82c973c4
	if (!cr6.eq) goto loc_82C973C4;
loc_82C9742C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82C97444:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82C97458"))) PPC_WEAK_FUNC(sub_82C97458);
PPC_FUNC_IMPL(__imp__sub_82C97458) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// addi r9,r1,236
	ctx.r9.s64 = ctx.r1.s64 + 236;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r27,r8,r7
	r27.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r4,r11,r6
	ctx.r4.u64 = r11.u64 + ctx.r6.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82c971b8
	sub_82C971B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97778
	if (cr6.eq) goto loc_82C97778;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c97778
	if (cr6.eq) goto loc_82C97778;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r26,r11,2860
	r26.s64 = r11.s64 + 2860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r26,-36
	ctx.r6.s64 = r26.s64 + -36;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9751c
	if (!cr6.eq) goto loc_82C9751C;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82c97580
	if (!cr6.eq) goto loc_82C97580;
loc_82C9750C:
	// stw r30,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
loc_82C9751C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c9752c
	if (cr6.eq) goto loc_82C9752C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82C9752C:
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c9753c
	if (cr6.eq) goto loc_82C9753C;
	// stw r4,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r4.u32);
loc_82C9753C:
	// addi r9,r1,236
	ctx.r9.s64 = ctx.r1.s64 + 236;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c971b8
	sub_82C971B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97778
	if (cr6.eq) goto loc_82C97778;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c97580
	if (!cr6.eq) goto loc_82C97580;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82c97778
	if (!cr6.eq) goto loc_82C97778;
loc_82C97574:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
loc_82C97580:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r6,r26,-28
	ctx.r6.s64 = r26.s64 + -28;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97664
	if (cr6.eq) goto loc_82C97664;
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// cmpwi cr6,r3,97
	cr6.compare<int32_t>(ctx.r3.s32, 97, xer);
	// blt cr6,0x82c975c8
	if (cr6.lt) goto loc_82C975C8;
	// cmpwi cr6,r3,122
	cr6.compare<int32_t>(ctx.r3.s32, 122, xer);
	// ble cr6,0x82c975d8
	if (!cr6.gt) goto loc_82C975D8;
loc_82C975C8:
	// cmpwi cr6,r3,65
	cr6.compare<int32_t>(ctx.r3.s32, 65, xer);
	// blt cr6,0x82c97654
	if (cr6.lt) goto loc_82C97654;
	// cmpwi cr6,r3,90
	cr6.compare<int32_t>(ctx.r3.s32, 90, xer);
	// bgt cr6,0x82c97654
	if (cr6.gt) goto loc_82C97654;
loc_82C975D8:
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c975e8
	if (cr6.eq) goto loc_82C975E8;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
loc_82C975E8:
	// lwz r29,284(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r30,236(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c97614
	if (cr6.eq) goto loc_82C97614;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r11,r30
	ctx.r5.s64 = r30.s64 - r11.s64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_82C97614:
	// addi r9,r1,236
	ctx.r9.s64 = ctx.r1.s64 + 236;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c971b8
	sub_82C971B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97778
	if (cr6.eq) goto loc_82C97778;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c97664
	if (!cr6.eq) goto loc_82C97664;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
loc_82C97654:
	// stw r28,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
loc_82C97664:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r6,r26,-16
	ctx.r6.s64 = r26.s64 + -16;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9750c
	if (cr6.eq) goto loc_82C9750C;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82c9750c
	if (!cr6.eq) goto loc_82C9750C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r6,r26,-4
	ctx.r6.s64 = r26.s64 + -4;
	// lwz r30,236(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r5,r11,r30
	ctx.r5.s64 = r30.s64 - r11.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c976d8
	if (cr6.eq) goto loc_82C976D8;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c97710
	if (cr6.eq) goto loc_82C97710;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82c97710
	goto loc_82C97710;
loc_82C976D8:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r5,r11,r30
	ctx.r5.s64 = r30.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97768
	if (cr6.eq) goto loc_82C97768;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c97710
	if (cr6.eq) goto loc_82C97710;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
loc_82C97710:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c97750
	if (cr6.eq) goto loc_82C97750;
loc_82C9772C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r30,r11
	r30.u64 = r30.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82c970b0
	sub_82C970B0(ctx, base);
	// bl 0x82c97120
	sub_82C97120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9772c
	if (!cr6.eq) goto loc_82C9772C;
loc_82C97750:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// beq cr6,0x82c97574
	if (cr6.eq) goto loc_82C97574;
	// stw r30,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
loc_82C97768:
	// stw r29,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
loc_82C97778:
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_82C97790"))) PPC_WEAK_FUNC(sub_82C97790);
PPC_FUNC_IMPL(__imp__sub_82C97790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c97870
	if (cr6.lt) goto loc_82C97870;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x82c977b0
	if (!cr6.lt) goto loc_82C977B0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
loc_82C977B0:
	// cmpwi cr6,r3,2048
	cr6.compare<int32_t>(ctx.r3.s32, 2048, xer);
	// bge cr6,0x82c977e4
	if (!cr6.lt) goto loc_82C977E4;
	// lis r11,511
	r11.s64 = 33488896;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// srawi r8,r3,6
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 6;
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
	// li r7,-64
	ctx.r7.s64 = -64;
	// rlwimi r10,r9,7,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// blr 
	return;
loc_82C977E4:
	// lis r11,1
	r11.s64 = 65536;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x82c97824
	if (!cr6.lt) goto loc_82C97824;
	// lis r11,511
	r11.s64 = 33488896;
	// srawi r10,r3,12
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 12;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// srawi r9,r3,6
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 6;
	// li r8,-32
	ctx.r8.s64 = -32;
	// rlwimi r3,r11,7,0,25
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0xFFFFFFC0) | (ctx.r3.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r9,r11,7,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stb r3,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r3.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// blr 
	return;
loc_82C97824:
	// lis r11,17
	r11.s64 = 1114112;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x82c97870
	if (!cr6.lt) goto loc_82C97870;
	// lis r11,511
	r11.s64 = 33488896;
	// srawi r10,r3,18
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 18;
	// srawi r9,r3,12
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 12;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// srawi r8,r3,6
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 6;
	// li r7,-16
	ctx.r7.s64 = -16;
	// rlwimi r3,r11,7,0,25
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0xFFFFFFC0) | (ctx.r3.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r9,r11,7,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r8,r11,7,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stb r3,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r3.u8);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// li r3,4
	ctx.r3.s64 = 4;
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// blr 
	return;
loc_82C97870:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97878"))) PPC_WEAK_FUNC(sub_82C97878);
PPC_FUNC_IMPL(__imp__sub_82C97878) {
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
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 372);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 368);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r9,r3,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c978b8
	if (cr6.eq) goto loc_82C978B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82C978B8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// srawi r9,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// addi r11,r11,-4144
	r11.s64 = r11.s64 + -4144;
	// srawi r8,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// addi r7,r11,1536
	ctx.r7.s64 = r11.s64 + 1536;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r6,r3,27
	ctx.r6.u64 = ctx.r3.u32 & 0x1F;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r4,r9,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97908"))) PPC_WEAK_FUNC(sub_82C97908);
PPC_FUNC_IMPL(__imp__sub_82C97908) {
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
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 372);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 368);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r9,r3,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c97948
	if (cr6.eq) goto loc_82C97948;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82C97948:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// srawi r9,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// addi r11,r11,-4144
	r11.s64 = r11.s64 + -4144;
	// srawi r8,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// addi r7,r11,1280
	ctx.r7.s64 = r11.s64 + 1280;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r6,r3,27
	ctx.r6.u64 = ctx.r3.u32 & 0x1F;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r4,r9,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97998"))) PPC_WEAK_FUNC(sub_82C97998);
PPC_FUNC_IMPL(__imp__sub_82C97998) {
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
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 372);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 368);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r9,r3,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c97a1c
	if (!cr6.eq) goto loc_82C97A1C;
	// srawi r11,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	r11.s64 = ctx.r3.s32 >> 8;
	// cmpwi cr6,r11,223
	cr6.compare<int32_t>(r11.s32, 223, xer);
	// bgt cr6,0x82c979f8
	if (cr6.gt) goto loc_82C979F8;
	// cmpwi cr6,r11,216
	cr6.compare<int32_t>(r11.s32, 216, xer);
	// bge cr6,0x82c97a1c
	if (!cr6.lt) goto loc_82C97A1C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c97a10
	if (!cr6.eq) goto loc_82C97A10;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-504
	r11.s64 = r11.s64 + -504;
	// addi r10,r11,76
	ctx.r10.s64 = r11.s64 + 76;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// b 0x82c97a0c
	goto loc_82C97A0C;
loc_82C979F8:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// bne cr6,0x82c97a10
	if (!cr6.eq) goto loc_82C97A10;
	// cmplwi cr6,r3,65534
	cr6.compare<uint32_t>(ctx.r3.u32, 65534, xer);
	// beq cr6,0x82c97a1c
	if (cr6.eq) goto loc_82C97A1C;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
loc_82C97A0C:
	// beq cr6,0x82c97a1c
	if (cr6.eq) goto loc_82C97A1C;
loc_82C97A10:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge cr6,0x82c97a20
	if (!cr6.lt) goto loc_82C97A20;
loc_82C97A1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C97A20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97A30"))) PPC_WEAK_FUNC(sub_82C97A30);
PPC_FUNC_IMPL(__imp__sub_82C97A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x82c97b1c
	if (cr6.eq) goto loc_82C97B1C;
loc_82C97A5C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r11,222
	r11.s64 = r11.s64 + 222;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c97ad4
	if (!cr6.eq) goto loc_82C97AD4;
	// lwz r3,372(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 372);
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// lwz r11,368(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 368);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82c97790
	sub_82C97790(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r10,r28
	ctx.r9.s64 = r28.s64 - ctx.r10.s64;
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82c97b1c
	if (cr6.gt) goto loc_82C97B1C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// lbz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 76);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,-3
	ctx.r8.s64 = ctx.r10.s64 + -3;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// b 0x82c97aec
	goto loc_82C97AEC;
loc_82C97AD4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r10,r28
	ctx.r9.s64 = r28.s64 - ctx.r10.s64;
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82c97b1c
	if (cr6.gt) goto loc_82C97B1C;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82C97AEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bne 0x82c97aec
	if (!cr0.eq) goto loc_82C97AEC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82c97a5c
	if (!cr6.eq) goto loc_82C97A5C;
loc_82C97B1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82C97B28"))) PPC_WEAK_FUNC(sub_82C97B28);
PPC_FUNC_IMPL(__imp__sub_82C97B28) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82c97bd8
	if (cr6.eq) goto loc_82C97BD8;
loc_82C97B54:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x82c97bd8
	if (cr6.eq) goto loc_82C97BD8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r11,188
	r11.s64 = r11.s64 + 188;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c97bb0
	if (!cr6.eq) goto loc_82C97BB0;
	// lwz r3,372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 372);
	// lwz r11,368(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 368);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// lbz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 76);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r8,r11,-3
	ctx.r8.s64 = r11.s64 + -3;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// b 0x82c97bb8
	goto loc_82C97BB8;
loc_82C97BB0:
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82C97BB8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x82c97b54
	if (!cr6.eq) goto loc_82C97B54;
loc_82C97BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82C97BE0"))) PPC_WEAK_FUNC(sub_82C97BE0);
PPC_FUNC_IMPL(__imp__sub_82C97BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r24,r10,-4144
	r24.s64 = ctx.r10.s64 + -4144;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// addi r9,r24,3640
	ctx.r9.s64 = r24.s64 + 3640;
	// mr r11,r28
	r11.u64 = r28.u64;
	// li r10,368
	ctx.r10.s64 = 368;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - r28.s64;
loc_82C97C0C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82c97c0c
	if (!cr0.eq) goto loc_82C97C0C;
	// li r23,0
	r23.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82C97C2C:
	// addi r10,r24,3640
	ctx.r10.s64 = r24.s64 + 3640;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// beq cr6,0x82c97c54
	if (cr6.eq) goto loc_82C97C54;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c97c54
	if (cr6.eq) goto loc_82C97C54;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82c97cb0
	if (!cr6.eq) goto loc_82C97CB0;
loc_82C97C54:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// blt cr6,0x82c97c2c
	if (cr6.lt) goto loc_82C97C2C;
	// lis r11,0
	r11.s64 = 0;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r27,r28,376
	r27.s64 = r28.s64 + 376;
	// addi r30,r28,888
	r30.s64 = r28.s64 + 888;
	// li r26,1
	r26.s64 = 1;
	// ori r25,r11,65535
	r25.u64 = r11.u64 | 65535;
	// li r19,22
	r19.s64 = 22;
	// li r20,26
	r20.s64 = 26;
	// li r21,28
	r21.s64 = 28;
loc_82C97C8C:
	// lwz r31,0(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82c97cbc
	if (!cr6.eq) goto loc_82C97CBC;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// stb r26,76(r11)
	PPC_STORE_U8(r11.u32 + 76, r26.u8);
	// sth r25,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r25.u16);
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// stb r23,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r23.u8);
	// b 0x82c97e24
	goto loc_82C97E24;
loc_82C97CB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
loc_82C97CBC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82c97ce4
	if (!cr6.lt) goto loc_82C97CE4;
	// cmpwi cr6,r31,-4
	cr6.compare<int32_t>(r31.s32, -4, xer);
	// blt cr6,0x82c97cb0
	if (cr6.lt) goto loc_82C97CB0;
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// subfic r11,r31,3
	xer.ca = r31.u32 <= 3;
	r11.s64 = 3 - r31.s64;
	// stb r11,76(r10)
	PPC_STORE_U8(ctx.r10.u32 + 76, r11.u8);
	// stb r23,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r23.u8);
	// sth r23,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r23.u16);
	// b 0x82c97e24
	goto loc_82C97E24;
loc_82C97CE4:
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// bge cr6,0x82c97d34
	if (!cr6.lt) goto loc_82C97D34;
	// addi r11,r24,3640
	r11.s64 = r24.s64 + 3640;
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// beq cr6,0x82c97d14
	if (cr6.eq) goto loc_82C97D14;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c97d14
	if (cr6.eq) goto loc_82C97D14;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bne cr6,0x82c97cb0
	if (!cr6.eq) goto loc_82C97CB0;
loc_82C97D14:
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stb r11,76(r10)
	PPC_STORE_U8(ctx.r10.u32 + 76, r11.u8);
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// stb r31,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r31.u8);
	// bne cr6,0x82c97e20
	if (!cr6.eq) goto loc_82C97E20;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82c97e20
	goto loc_82C97E20;
loc_82C97D34:
	// srawi r8,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r8.s64 = r31.s32 >> 8;
	// cmpwi cr6,r8,223
	cr6.compare<int32_t>(ctx.r8.s32, 223, xer);
	// bgt cr6,0x82c97dac
	if (cr6.gt) goto loc_82C97DAC;
	// cmpwi cr6,r8,216
	cr6.compare<int32_t>(ctx.r8.s32, 216, xer);
	// bge cr6,0x82c97dc4
	if (!cr6.lt) goto loc_82C97DC4;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82c97d64
	if (!cr6.eq) goto loc_82C97D64;
	// addi r11,r24,3640
	r11.s64 = r24.s64 + 3640;
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c97dc4
	if (cr6.eq) goto loc_82C97DC4;
loc_82C97D64:
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(r31.s32, r25.s32, xer);
	// bgt cr6,0x82c97cb0
	if (cr6.gt) goto loc_82C97CB0;
	// addi r9,r24,1280
	ctx.r9.s64 = r24.s64 + 1280;
	// srawi r7,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r7.s64 = r31.s32 >> 5;
	// clrlwi r6,r31,27
	ctx.r6.u64 = r31.u32 & 0x1F;
	// clrlwi r11,r7,29
	r11.u64 = ctx.r7.u32 & 0x7;
	// slw r10,r26,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r24.u32);
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c97ddc
	if (cr6.eq) goto loc_82C97DDC;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// stb r19,76(r11)
	PPC_STORE_U8(r11.u32 + 76, r19.u8);
	// b 0x82c97e10
	goto loc_82C97E10;
loc_82C97DAC:
	// cmpwi cr6,r8,255
	cr6.compare<int32_t>(ctx.r8.s32, 255, xer);
	// bne cr6,0x82c97d64
	if (!cr6.eq) goto loc_82C97D64;
	// cmplwi cr6,r31,65534
	cr6.compare<uint32_t>(r31.u32, 65534, xer);
	// beq cr6,0x82c97dc4
	if (cr6.eq) goto loc_82C97DC4;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(r31.u32, 65535, xer);
	// bne cr6,0x82c97d64
	if (!cr6.eq) goto loc_82C97D64;
loc_82C97DC4:
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// stb r23,76(r11)
	PPC_STORE_U8(r11.u32 + 76, r23.u8);
	// sth r25,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r25.u16);
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// stb r23,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r23.u8);
	// b 0x82c97e24
	goto loc_82C97E24;
loc_82C97DDC:
	// addi r9,r24,1536
	ctx.r9.s64 = r24.s64 + 1536;
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r9,r8,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r24.u32);
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c97e0c
	if (cr6.eq) goto loc_82C97E0C;
	// stb r20,76(r11)
	PPC_STORE_U8(r11.u32 + 76, r20.u8);
	// b 0x82c97e10
	goto loc_82C97E10;
loc_82C97E0C:
	// stb r21,76(r11)
	PPC_STORE_U8(r11.u32 + 76, r21.u8);
loc_82C97E10:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c97790
	sub_82C97790(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r3.u8);
loc_82C97E20:
	// sth r31,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r31.u16);
loc_82C97E24:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r29,256
	cr6.compare<int32_t>(r29.s32, 256, xer);
	// blt cr6,0x82c97c8c
	if (cr6.lt) goto loc_82C97C8C;
	// stw r18,372(r28)
	PPC_STORE_U32(r28.u32 + 372, r18.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r5,368(r28)
	PPC_STORE_U32(r28.u32 + 368, ctx.r5.u32);
	// beq cr6,0x82c97eb8
	if (cr6.eq) goto loc_82C97EB8;
	// lis r11,-32055
	r11.s64 = -2100756480;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// lis r8,-32055
	ctx.r8.s64 = -2100756480;
	// lis r7,-32055
	ctx.r7.s64 = -2100756480;
	// lis r6,-32055
	ctx.r6.s64 = -2100756480;
	// lis r5,-32055
	ctx.r5.s64 = -2100756480;
	// lis r4,-32055
	ctx.r4.s64 = -2100756480;
	// lis r3,-32055
	ctx.r3.s64 = -2100756480;
	// addi r11,r11,30840
	r11.s64 = r11.s64 + 30840;
	// addi r10,r10,30840
	ctx.r10.s64 = ctx.r10.s64 + 30840;
	// addi r9,r9,30840
	ctx.r9.s64 = ctx.r9.s64 + 30840;
	// stw r11,332(r28)
	PPC_STORE_U32(r28.u32 + 332, r11.u32);
	// addi r8,r8,30984
	ctx.r8.s64 = ctx.r8.s64 + 30984;
	// stw r10,336(r28)
	PPC_STORE_U32(r28.u32 + 336, ctx.r10.u32);
	// addi r7,r7,30984
	ctx.r7.s64 = ctx.r7.s64 + 30984;
	// stw r9,340(r28)
	PPC_STORE_U32(r28.u32 + 340, ctx.r9.u32);
	// addi r6,r6,30984
	ctx.r6.s64 = ctx.r6.s64 + 30984;
	// stw r8,344(r28)
	PPC_STORE_U32(r28.u32 + 344, ctx.r8.u32);
	// addi r5,r5,31128
	ctx.r5.s64 = ctx.r5.s64 + 31128;
	// stw r7,348(r28)
	PPC_STORE_U32(r28.u32 + 348, ctx.r7.u32);
	// addi r4,r4,31128
	ctx.r4.s64 = ctx.r4.s64 + 31128;
	// stw r6,352(r28)
	PPC_STORE_U32(r28.u32 + 352, ctx.r6.u32);
	// addi r3,r3,31128
	ctx.r3.s64 = ctx.r3.s64 + 31128;
	// stw r5,356(r28)
	PPC_STORE_U32(r28.u32 + 356, ctx.r5.u32);
	// stw r4,360(r28)
	PPC_STORE_U32(r28.u32 + 360, ctx.r4.u32);
	// stw r3,364(r28)
	PPC_STORE_U32(r28.u32 + 364, ctx.r3.u32);
loc_82C97EB8:
	// lis r11,-32055
	r11.s64 = -2100756480;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r9,r11,31280
	ctx.r9.s64 = r11.s64 + 31280;
	// addi r8,r10,31528
	ctx.r8.s64 = ctx.r10.s64 + 31528;
	// stw r9,60(r28)
	PPC_STORE_U32(r28.u32 + 60, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r8,64(r28)
	PPC_STORE_U32(r28.u32 + 64, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_82C97EE0"))) PPC_WEAK_FUNC(sub_82C97EE0);
PPC_FUNC_IMPL(__imp__sub_82C97EE0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82c97f0c
	if (!cr6.eq) goto loc_82C97F0C;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82C97F0C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-5880
	ctx.r6.s64 = r11.s64 + -5880;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82C97F1C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82c97030
	sub_82C97030(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c97f58
	if (!cr6.eq) goto loc_82C97F58;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r6,24
	r11.s64 = ctx.r6.s64 + 24;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x82c97f1c
	if (cr6.lt) goto loc_82C97F1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82C97F58:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97F70"))) PPC_WEAK_FUNC(sub_82C97F70);
PPC_FUNC_IMPL(__imp__sub_82C97F70) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c97fa8
	if (!cr6.eq) goto loc_82C97FA8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C97FA8:
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c98020
	if (!cr6.eq) goto loc_82C98020;
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x82c97fd0
	if (cr6.lt) goto loc_82C97FD0;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// ble cr6,0x82c98014
	if (!cr6.gt) goto loc_82C98014;
loc_82C97FD0:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,239
	cr6.compare<int32_t>(r11.s32, 239, xer);
	// bgt cr6,0x82c97ff4
	if (cr6.gt) goto loc_82C97FF4;
	// beq cr6,0x82c98004
	if (cr6.eq) goto loc_82C98004;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c98014
	if (cr6.eq) goto loc_82C98014;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// beq cr6,0x82c98014
	if (cr6.eq) goto loc_82C98014;
	// b 0x82c981cc
	goto loc_82C981CC;
loc_82C97FF4:
	// cmpwi cr6,r11,254
	cr6.compare<int32_t>(r11.s32, 254, xer);
	// blt cr6,0x82c981cc
	if (cr6.lt) goto loc_82C981CC;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// bgt cr6,0x82c981cc
	if (cr6.gt) goto loc_82C981CC;
loc_82C98004:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c98014
	if (!cr6.eq) goto loc_82C98014;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
loc_82C98014:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C98020:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lis r11,0
	r11.s64 = 0;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// ori r29,r11,65279
	r29.u64 = r11.u64 | 65279;
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x82c98134
	if (cr6.gt) goto loc_82C98134;
	// cmplwi cr6,r11,65279
	cr6.compare<uint32_t>(r11.u32, 65279, xer);
	// beq cr6,0x82c98104
	if (cr6.eq) goto loc_82C98104;
	// cmpwi cr6,r11,15360
	cr6.compare<int32_t>(r11.s32, 15360, xer);
	// beq cr6,0x82c980c0
	if (cr6.eq) goto loc_82C980C0;
	// cmplwi cr6,r11,61371
	cr6.compare<uint32_t>(r11.u32, 61371, xer);
	// bne cr6,0x82c9813c
	if (!cr6.eq) goto loc_82C9813C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82c9808c
	if (!cr6.eq) goto loc_82C9808C;
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
loc_82C9808C:
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c98014
	if (cr6.eq) goto loc_82C98014;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(r11.u32, 191, xer);
	// bne cr6,0x82c981cc
	if (!cr6.eq) goto loc_82C981CC;
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C980C0:
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82c980d8
	if (cr6.eq) goto loc_82C980D8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82c980e0
	if (!cr6.eq) goto loc_82C980E0;
loc_82C980D8:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
loc_82C980E0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C98104:
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c98118
	if (!cr6.eq) goto loc_82C98118;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
loc_82C98118:
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C98134:
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// beq cr6,0x82c981b8
	if (cr6.eq) goto loc_82C981B8;
loc_82C9813C:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c98180
	if (!cr6.eq) goto loc_82C98180;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82c9815c
	if (!cr6.eq) goto loc_82C9815C;
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
loc_82C9815C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C98180:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c981cc
	if (!cr6.eq) goto loc_82C981CC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82c981cc
	if (cr6.eq) goto loc_82C981CC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C981B8:
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c981fc
	if (!cr6.eq) goto loc_82C981FC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82c981fc
	if (!cr6.eq) goto loc_82C981FC;
loc_82C981CC:
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C981FC:
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C98218"))) PPC_WEAK_FUNC(sub_82C98218);
PPC_FUNC_IMPL(__imp__sub_82C98218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r10,-5856
	ctx.r3.s64 = ctx.r10.s64 + -5856;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82c97f70
	sub_82C97F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98240"))) PPC_WEAK_FUNC(sub_82C98240);
PPC_FUNC_IMPL(__imp__sub_82C98240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r10,-5856
	ctx.r3.s64 = ctx.r10.s64 + -5856;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82c97f70
	sub_82C97F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98268"))) PPC_WEAK_FUNC(sub_82C98268);
PPC_FUNC_IMPL(__imp__sub_82C98268) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82c97ee0
	sub_82C97EE0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82c9829c
	if (!cr6.eq) goto loc_82C9829C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c982d0
	goto loc_82C982D0;
loc_82C9829C:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// stb r3,73(r31)
	PPC_STORE_U8(r31.u32 + 73, ctx.r3.u8);
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// addi r7,r11,-32232
	ctx.r7.s64 = r11.s64 + -32232;
	// addi r6,r10,-32192
	ctx.r6.s64 = ctx.r10.s64 + -32192;
	// addi r5,r9,28832
	ctx.r5.s64 = ctx.r9.s64 + 28832;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r5.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_82C982D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C982E8"))) PPC_WEAK_FUNC(sub_82C982E8);
PPC_FUNC_IMPL(__imp__sub_82C982E8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r7,r1,223
	ctx.r7.s64 = ctx.r1.s64 + 223;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x82c9833c
	if (cr6.eq) goto loc_82C9833C;
loc_82C98334:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c98394
	goto loc_82C98394;
loc_82C9833C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,2896
	ctx.r4.s64 = ctx.r9.s64 + 2896;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82c97030
	sub_82C97030(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c98374
	if (cr6.eq) goto loc_82C98374;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82c98374
	if (!cr6.eq) goto loc_82C98374;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c98394
	goto loc_82C98394;
loc_82C98374:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c97ee0
	sub_82C97EE0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82c98334
	if (cr6.eq) goto loc_82C98334;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5856
	ctx.r9.s64 = r11.s64 + -5856;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82C98394:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C983B0"))) PPC_WEAK_FUNC(sub_82C983B0);
PPC_FUNC_IMPL(__imp__sub_82C983B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r31,220(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r30,212(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r11,-32054
	r11.s64 = -2100690944;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32024
	ctx.r3.s64 = r11.s64 + -32024;
	// bl 0x82c97458
	sub_82C97458(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98420"))) PPC_WEAK_FUNC(sub_82C98420);
PPC_FUNC_IMPL(__imp__sub_82C98420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r10,-5828
	ctx.r3.s64 = ctx.r10.s64 + -5828;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82c97f70
	sub_82C97F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98448"))) PPC_WEAK_FUNC(sub_82C98448);
PPC_FUNC_IMPL(__imp__sub_82C98448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r10,-5828
	ctx.r3.s64 = ctx.r10.s64 + -5828;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82c97f70
	sub_82C97F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98470"))) PPC_WEAK_FUNC(sub_82C98470);
PPC_FUNC_IMPL(__imp__sub_82C98470) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82c97ee0
	sub_82C97EE0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82c984a4
	if (!cr6.eq) goto loc_82C984A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c984d8
	goto loc_82C984D8;
loc_82C984A4:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// stb r3,73(r31)
	PPC_STORE_U8(r31.u32 + 73, ctx.r3.u8);
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// addi r7,r11,-31712
	ctx.r7.s64 = r11.s64 + -31712;
	// addi r6,r10,-31672
	ctx.r6.s64 = ctx.r10.s64 + -31672;
	// addi r5,r9,28832
	ctx.r5.s64 = ctx.r9.s64 + 28832;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r5.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_82C984D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C984F0"))) PPC_WEAK_FUNC(sub_82C984F0);
PPC_FUNC_IMPL(__imp__sub_82C984F0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r7,r1,223
	ctx.r7.s64 = ctx.r1.s64 + 223;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x82c98544
	if (cr6.eq) goto loc_82C98544;
loc_82C9853C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c9859c
	goto loc_82C9859C;
loc_82C98544:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,2896
	ctx.r4.s64 = ctx.r9.s64 + 2896;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82c97030
	sub_82C97030(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9857c
	if (cr6.eq) goto loc_82C9857C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82c9857c
	if (!cr6.eq) goto loc_82C9857C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c9859c
	goto loc_82C9859C;
loc_82C9857C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c97ee0
	sub_82C97EE0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82c9853c
	if (cr6.eq) goto loc_82C9853C;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5828
	ctx.r9.s64 = r11.s64 + -5828;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82C9859C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C985B8"))) PPC_WEAK_FUNC(sub_82C985B8);
PPC_FUNC_IMPL(__imp__sub_82C985B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r31,220(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r30,212(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r11,-32054
	r11.s64 = -2100690944;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31504
	ctx.r3.s64 = r11.s64 + -31504;
	// bl 0x82c97458
	sub_82C97458(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98628"))) PPC_WEAK_FUNC(sub_82C98628);
PPC_FUNC_IMPL(__imp__sub_82C98628) {
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
	// bl 0x82c97be0
	sub_82C97BE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98648
	if (cr6.eq) goto loc_82C98648;
	// li r11,23
	r11.s64 = 23;
	// stb r11,134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 134, r11.u8);
loc_82C98648:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98658"))) PPC_WEAK_FUNC(sub_82C98658);
PPC_FUNC_IMPL(__imp__sub_82C98658) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c986a8
	if (cr6.eq) goto loc_82C986A8;
loc_82C98678:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82c98678
	if (!cr6.eq) goto loc_82C98678;
loc_82C986A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C986B0"))) PPC_WEAK_FUNC(sub_82C986B0);
PPC_FUNC_IMPL(__imp__sub_82C986B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C986D0"))) PPC_WEAK_FUNC(sub_82C986D0);
PPC_FUNC_IMPL(__imp__sub_82C986D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C986E0"))) PPC_WEAK_FUNC(sub_82C986E0);
PPC_FUNC_IMPL(__imp__sub_82C986E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C986E8"))) PPC_WEAK_FUNC(sub_82C986E8);
PPC_FUNC_IMPL(__imp__sub_82C986E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C986F8"))) PPC_WEAK_FUNC(sub_82C986F8);
PPC_FUNC_IMPL(__imp__sub_82C986F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82c98898
	if (cr6.eq) goto loc_82C98898;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82c98884
	if (cr6.eq) goto loc_82C98884;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - r11.s64;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// ble cr6,0x82c98878
	if (!cr6.gt) goto loc_82C98878;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subf r10,r3,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1024
	cr6.compare<int32_t>(ctx.r10.s32, 1024, xer);
	// ble cr6,0x82c98754
	if (!cr6.gt) goto loc_82C98754;
	// li r11,1024
	r11.s64 = 1024;
loc_82C98754:
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// subf r5,r3,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r3.s64;
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// bgt cr6,0x82c987a0
	if (cr6.gt) goto loc_82C987A0;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82c98878
	if (!cr6.lt) goto loc_82C98878;
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + r30.u64;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r9,r30,r11
	ctx.r9.s64 = r11.s64 - r30.s64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - r30.s64;
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C987A0:
	// subf. r29,r9,r6
	r29.s64 = ctx.r6.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82c987ac
	if (!cr0.eq) goto loc_82C987AC;
	// li r29,1024
	r29.s64 = 1024;
loc_82C987AC:
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// blt cr6,0x82c987ac
	if (cr6.lt) goto loc_82C987AC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c987e4
	if (!cr6.eq) goto loc_82C987E4;
	// li r11,1
	r11.s64 = 1;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C987E4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98864
	if (cr6.eq) goto loc_82C98864;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r29,r10,r11
	r29.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r29,1024
	cr6.compare<int32_t>(r29.s32, 1024, xer);
	// ble cr6,0x82c9880c
	if (!cr6.gt) goto loc_82C9880C;
	// li r29,1024
	r29.s64 = 1024;
loc_82C9880C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r4,r29,r11
	ctx.r4.s64 = r11.s64 - r29.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r8,r29,r30
	ctx.r8.u64 = r29.u64 + r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// subf r11,r6,r7
	r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C98864:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82C98878:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C98884:
	// li r11,33
	r11.s64 = 33;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C98898:
	// li r11,36
	r11.s64 = 36;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C988B0"))) PPC_WEAK_FUNC(sub_82C988B0);
PPC_FUNC_IMPL(__imp__sub_82C988B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,288(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c988d0
	if (cr6.eq) goto loc_82C988D0;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
loc_82C988D0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C988D8"))) PPC_WEAK_FUNC(sub_82C988D8);
PPC_FUNC_IMPL(__imp__sub_82C988D8) {
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
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c98924
	if (cr6.eq) goto loc_82C98924;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// blt cr6,0x82c98924
	if (cr6.lt) goto loc_82C98924;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,408
	ctx.r6.s64 = r31.s64 + 408;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
loc_82C98924:
	// lwz r11,408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 408);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98940"))) PPC_WEAK_FUNC(sub_82C98940);
PPC_FUNC_IMPL(__imp__sub_82C98940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82c98964
	if (!cr6.gt) goto loc_82C98964;
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// bge cr6,0x82c98964
	if (!cr6.lt) goto loc_82C98964;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5800
	ctx.r9.s64 = r11.s64 + -5800;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82C98964:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98970"))) PPC_WEAK_FUNC(sub_82C98970);
PPC_FUNC_IMPL(__imp__sub_82C98970) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,364(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 364);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c98a34
	if (cr6.eq) goto loc_82C98A34;
loc_82C9898C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r30,r3,r28
	r30.u64 = ctx.r3.u64 + r28.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82c98a34
	if (cr6.eq) goto loc_82C98A34;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r29,r28,r11
	r29.u64 = r28.u64 + r11.u64;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// ble cr6,0x82c98a14
	if (!cr6.gt) goto loc_82C98A14;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98a40
	if (cr6.eq) goto loc_82C98A40;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c989ec
	if (!cr6.eq) goto loc_82C989EC;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82C989EC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98a04
	if (cr6.eq) goto loc_82C98A04;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82C98A04:
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// add r30,r3,r28
	r30.u64 = ctx.r3.u64 + r28.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82C98A14:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82c9898c
	if (!cr6.eq) goto loc_82C9898C;
loc_82C98A34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82C98A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82C98A50"))) PPC_WEAK_FUNC(sub_82C98A50);
PPC_FUNC_IMPL(__imp__sub_82C98A50) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r11,484(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c9eac0
	sub_82C9EAC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82c98ab0
	if (!cr6.eq) goto loc_82C98AB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98970
	sub_82C98970(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98ab4
	if (cr6.eq) goto loc_82C98AB4;
loc_82C98AB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82C98AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98AD0"))) PPC_WEAK_FUNC(sub_82C98AD0);
PPC_FUNC_IMPL(__imp__sub_82C98AD0) {
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c98b18
	if (!cr6.eq) goto loc_82C98B18;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c98b18
	if (cr6.eq) goto loc_82C98B18;
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C98B18:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c98b34
	if (cr6.eq) goto loc_82C98B34;
loc_82C98B24:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbzx r11,r30,r27
	r11.u64 = PPC_LOAD_U8(r30.u32 + r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c98b24
	if (!cr6.eq) goto loc_82C98B24;
loc_82C98B34:
	// lbz r11,472(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98b44
	if (cr6.eq) goto loc_82C98B44;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82C98B44:
	// lwz r31,376(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 376);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c98b90
	if (cr6.eq) goto loc_82C98B90;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82c98b84
	if (!cr6.gt) goto loc_82C98B84;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98bdc
	if (cr6.eq) goto loc_82C98BDC;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
loc_82C98B84:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,376(r28)
	PPC_STORE_U32(r28.u32 + 376, r11.u32);
	// b 0x82c98bec
	goto loc_82C98BEC;
loc_82C98B90:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c98bdc
	if (cr6.eq) goto loc_82C98BDC;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c98be8
	if (!cr6.eq) goto loc_82C98BE8;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C98BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C98BE8:
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
loc_82C98BEC:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lbz r11,472(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98c18
	if (cr6.eq) goto loc_82C98C18;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stb r11,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r11.u8);
loc_82C98C18:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c98c50
	if (!cr6.eq) goto loc_82C98C50;
	// lwz r11,356(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 356);
	// addi r11,r11,152
	r11.s64 = r11.s64 + 152;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82c98c50
	if (!cr6.eq) goto loc_82C98C50;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// b 0x82c98c54
	goto loc_82C98C54;
loc_82C98C50:
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
loc_82C98C54:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// beq cr6,0x82c98c98
	if (cr6.eq) goto loc_82C98C98;
	// lwz r11,100(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98c98
	if (cr6.eq) goto loc_82C98C98;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c98c88
	if (!cr6.eq) goto loc_82C98C88;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C98C88:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C98C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82C98CA8"))) PPC_WEAK_FUNC(sub_82C98CA8);
PPC_FUNC_IMPL(__imp__sub_82C98CA8) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c98ddc
	if (cr6.eq) goto loc_82C98DDC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,256
	ctx.r9.s64 = 256;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C98CD8:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82c98cd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C98CD8;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, r11.u32);
	// stw r11,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, r11.u32);
	// stw r11,1112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1112, r11.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c98dc4
	if (cr6.eq) goto loc_82C98DC4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,1912
	ctx.r3.s64 = 1912;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c98d58
	if (!cr6.eq) goto loc_82C98D58;
	// lwz r11,1112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98d40
	if (cr6.eq) goto loc_82C98D40;
	// lwz r3,1104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C98D40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C98D58:
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98d70
	if (cr6.eq) goto loc_82C98D70;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,-31192
	r11.s64 = r11.s64 + -31192;
	// b 0x82c98d78
	goto loc_82C98D78;
loc_82C98D70:
	// lis r11,-32055
	r11.s64 = -2100756480;
	// addi r11,r11,31712
	r11.s64 = r11.s64 + 31712;
loc_82C98D78:
	// lwz r6,1104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,1108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98dc4
	if (cr6.eq) goto loc_82C98DC4;
	// lwz r10,1104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,1112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1112);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r9.u32);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C98DC4:
	// lwz r11,1112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c98ddc
	if (cr6.eq) goto loc_82C98DDC;
	// lwz r3,1104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C98DDC:
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98DF8"))) PPC_WEAK_FUNC(sub_82C98DF8);
PPC_FUNC_IMPL(__imp__sub_82C98DF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r30,304(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c98eb4
	if (cr6.eq) goto loc_82C98EB4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
loc_82C98E24:
	// li r26,0
	r26.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stw r26,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r26.u32);
	// stb r11,32(r29)
	PPC_STORE_U8(r29.u32 + 32, r11.u8);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// stb r28,20(r30)
	PPC_STORE_U8(r30.u32 + 20, r28.u8);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// lwz r28,4(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lbz r8,33(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// add r27,r11,r28
	r27.u64 = r11.u64 + r28.u64;
	// beq cr6,0x82c98edc
	if (cr6.eq) goto loc_82C98EDC;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9fb58
	sub_82C9FB58(ctx, base);
	// b 0x82c98efc
	goto loc_82C98EFC;
loc_82C98EB4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,24
	ctx.r3.s64 = 24;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c98e24
	if (!cr6.eq) goto loc_82C98E24;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C98EDC:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,228(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9eac0
	sub_82C9EAC0(ctx, base);
loc_82C98EFC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c98f50
	if (!cr6.eq) goto loc_82C98F50;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82c98f38
	if (cr6.eq) goto loc_82C98F38;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82c98f38
	if (!cr6.eq) goto loc_82C98F38;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// subf r9,r28,r11
	ctx.r9.s64 = r11.s64 - r28.s64;
	// addi r8,r10,6088
	ctx.r8.s64 = ctx.r10.s64 + 6088;
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r8,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C98F38:
	// stb r26,32(r29)
	PPC_STORE_U8(r29.u32 + 32, r26.u8);
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
loc_82C98F50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82C98F58"))) PPC_WEAK_FUNC(sub_82C98F58);
PPC_FUNC_IMPL(__imp__sub_82C98F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82C98F68:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82c98f88
	if (cr6.eq) goto loc_82C98F88;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c98f68
	if (!cr6.eq) goto loc_82C98F68;
	// blr 
	return;
loc_82C98F88:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82C98F90:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x82c98fbc
	if (!cr6.eq) goto loc_82C98FBC;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x82c98fc4
	if (!cr6.eq) goto loc_82C98FC4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82c98fc4
	goto loc_82C98FC4;
loc_82C98FBC:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82C98FC4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c98f90
	if (!cr6.eq) goto loc_82C98F90;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98FD8"))) PPC_WEAK_FUNC(sub_82C98FD8);
PPC_FUNC_IMPL(__imp__sub_82C98FD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,72(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9908c
	if (!cr6.eq) goto loc_82C9908C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82c9901c
	if (!cr6.eq) goto loc_82C9901C;
	// addi r29,r31,288
	r29.s64 = r31.s64 + 288;
	// addi r27,r31,292
	r27.s64 = r31.s64 + 292;
	// b 0x82c99024
	goto loc_82C99024;
loc_82C9901C:
	// lwz r29,300(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
loc_82C99024:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, xer);
	// bne cr6,0x82c99024
	if (!cr6.eq) goto loc_82C99024;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9908C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r5,r4,r28
	ctx.r5.s64 = r28.s64 - ctx.r4.s64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82C990A8"))) PPC_WEAK_FUNC(sub_82C990A8);
PPC_FUNC_IMPL(__imp__sub_82C990A8) {
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82c990d8
	if (!cr6.eq) goto loc_82C990D8;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c99134
	if (cr6.eq) goto loc_82C99134;
loc_82C990D8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82c9910c
	if (!cr6.gt) goto loc_82C9910C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82C990EC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c991f0
	if (cr6.eq) goto loc_82C991F0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82c990ec
	if (cr6.lt) goto loc_82C990EC;
loc_82C9910C:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c99134
	if (cr6.eq) goto loc_82C99134;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c99134
	if (!cr6.eq) goto loc_82C99134;
	// lbz r11,9(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c99134
	if (!cr6.eq) goto loc_82C99134;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_82C99134:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82c991ac
	if (!cr6.eq) goto loc_82C991AC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9917c
	if (!cr6.eq) goto loc_82C9917C;
	// li r11,8
	r11.s64 = 8;
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c991ac
	if (!cr6.eq) goto loc_82C991AC;
loc_82C99170:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82C9917C:
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99170
	if (cr6.eq) goto loc_82C99170;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_82C991AC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stb r28,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r28.u8);
	// bne cr6,0x82c991e4
	if (!cr6.eq) goto loc_82C991E4;
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
loc_82C991E4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82C991F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82C99200"))) PPC_WEAK_FUNC(sub_82C99200);
PPC_FUNC_IMPL(__imp__sub_82C99200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9928c
	if (cr6.eq) goto loc_82C9928C;
	// li r7,32
	ctx.r7.s64 = 32;
loc_82C99218:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x82c99240
	if (cr6.eq) goto loc_82C99240;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// beq cr6,0x82c99240
	if (cr6.eq) goto loc_82C99240;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x82c99240
	if (cr6.eq) goto loc_82C99240;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// b 0x82c99258
	goto loc_82C99258;
loc_82C99240:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c9925c
	if (cr6.eq) goto loc_82C9925C;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x82c9925c
	if (cr6.eq) goto loc_82C9925C;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
loc_82C99258:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82C9925C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c99218
	if (!cr6.eq) goto loc_82C99218;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c9928c
	if (cr6.eq) goto loc_82C9928C;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82c99290
	if (!cr6.eq) goto loc_82C99290;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
loc_82C9928C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C99290:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C99298"))) PPC_WEAK_FUNC(sub_82C99298);
PPC_FUNC_IMPL(__imp__sub_82C99298) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c99364
	if (!cr6.eq) goto loc_82C99364;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x82c992d0
	if (!cr6.eq) goto loc_82C992D0;
loc_82C992C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
loc_82C992D0:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r10,4(r28)
	PPC_STORE_U8(r28.u32 + 4, ctx.r10.u8);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c99310
	if (!cr6.eq) goto loc_82C99310;
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
loc_82C99310:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// mr r11,r23
	r11.u64 = r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c99354
	if (cr6.eq) goto loc_82C99354;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// ori r25,r8,16963
	r25.u64 = ctx.r8.u64 | 16963;
loc_82C99338:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mullw r7,r9,r25
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c99338
	if (!cr6.eq) goto loc_82C99338;
loc_82C99354:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r9,r11,r9
	ctx.r9.u64 = r11.u64 & ctx.r9.u64;
	// b 0x82c99650
	goto loc_82C99650;
loc_82C99364:
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// mr r11,r23
	r11.u64 = r23.u64;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// ori r25,r9,16963
	r25.u64 = ctx.r9.u64 | 16963;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82c993a0
	if (cr6.eq) goto loc_82C993A0;
loc_82C99384:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// mullw r8,r24,r25
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(r25.s32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// xor r24,r8,r9
	r24.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c99384
	if (!cr6.eq) goto loc_82C99384;
loc_82C993A0:
	// addi r7,r3,-1
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// and r9,r24,r7
	ctx.r9.u64 = r24.u64 & ctx.r7.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c99478
	if (cr6.eq) goto loc_82C99478;
loc_82C993C0:
	// lwzx r11,r11,r5
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// bne cr6,0x82c99404
	if (!cr6.eq) goto loc_82C99404;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// subf r8,r11,r23
	ctx.r8.s64 = r23.s64 - r11.s64;
loc_82C993E0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c99458
	if (cr6.eq) goto loc_82C99458;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r31,r31
	r31.s64 = r31.s8;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// beq cr6,0x82c993e0
	if (cr6.eq) goto loc_82C993E0;
loc_82C99404:
	// li r11,0
	r11.s64 = 0;
loc_82C99408:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9962c
	if (!cr6.eq) goto loc_82C9962C;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c99440
	if (!cr6.eq) goto loc_82C99440;
	// lbz r11,4(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 4);
	// andc r10,r24,r7
	ctx.r10.u64 = r24.u64 & ~ctx.r7.u64;
	// rlwinm r8,r7,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// srw r11,r10,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// and r10,r11,r8
	ctx.r10.u64 = r11.u64 & ctx.r8.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// ori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 | 1;
loc_82C99440:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82c99460
	if (!cr6.lt) goto loc_82C99460;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// b 0x82c99464
	goto loc_82C99464;
loc_82C99458:
	// li r11,1
	r11.s64 = 1;
	// b 0x82c99408
	goto loc_82C99408;
loc_82C99460:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82C99464:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c993c0
	if (!cr6.eq) goto loc_82C993C0;
loc_82C99478:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82c992c4
	if (cr6.eq) goto loc_82C992C4;
	// lbz r11,4(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 4);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srw. r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82c99650
	if (cr0.eq) goto loc_82C99650;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r26,r11,24
	r26.u64 = r11.u32 & 0xFF;
	// slw r27,r9,r26
	r27.u64 = r26.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r26.u8 & 0x3F));
	// rlwinm r31,r27,2,0,29
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r27,-1
	r29.s64 = r27.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c992c4
	if (cr6.eq) goto loc_82C992C4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c995b0
	if (!cr6.gt) goto loc_82C995B0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82C994EC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9959c
	if (cr6.eq) goto loc_82C9959C;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c99530
	if (cr6.eq) goto loc_82C99530;
loc_82C99514:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mullw r4,r9,r25
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// xor r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c99514
	if (!cr6.eq) goto loc_82C99514;
loc_82C99530:
	// and r11,r9,r29
	r11.u64 = ctx.r9.u64 & r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c99594
	if (cr6.eq) goto loc_82C99594;
loc_82C99548:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c99570
	if (!cr6.eq) goto loc_82C99570;
	// andc r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 & ~r29.u64;
	// addi r8,r26,-1
	ctx.r8.s64 = r26.s64 + -1;
	// rlwinm r4,r29,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// srw r3,r10,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
loc_82C99570:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// bge cr6,0x82c99584
	if (!cr6.lt) goto loc_82C99584;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_82C99584:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c99548
	if (!cr6.eq) goto loc_82C99548;
loc_82C99594:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r7.u32);
loc_82C9959C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82c994ec
	if (cr6.lt) goto loc_82C994EC;
loc_82C995B0:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// and r9,r24,r29
	ctx.r9.u64 = r24.u64 & r29.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r26.u8);
	// stw r27,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r27.u32);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r30.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c99650
	if (cr6.eq) goto loc_82C99650;
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(r30.u32, 0);
loc_82C995EC:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c99614
	if (!cr6.eq) goto loc_82C99614;
	// addi r10,r26,-1
	ctx.r10.s64 = r26.s64 + -1;
	// andc r11,r24,r29
	r11.u64 = r24.u64 & ~r29.u64;
	// rlwinm r7,r29,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// srw r6,r11,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// ori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 | 1;
loc_82C99614:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82c9963c
	if (!cr6.lt) goto loc_82C9963C;
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// b 0x82c99640
	goto loc_82C99640;
loc_82C9962C:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
loc_82C9963C:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82C99640:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c995ec
	if (!cr6.eq) goto loc_82C995EC;
loc_82C99650:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stwx r3,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c992c4
	if (cr6.eq) goto loc_82C992C4;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r8.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_82C996B8"))) PPC_WEAK_FUNC(sub_82C996B8);
PPC_FUNC_IMPL(__imp__sub_82C996B8) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c99708
	if (!cr6.gt) goto loc_82C99708;
	// li r30,0
	r30.s64 = 0;
loc_82C996DC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c996dc
	if (cr6.lt) goto loc_82C996DC;
loc_82C99708:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C99728"))) PPC_WEAK_FUNC(sub_82C99728);
PPC_FUNC_IMPL(__imp__sub_82C99728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82c99740
	if (!cr6.eq) goto loc_82C99740;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82c99764
	goto loc_82C99764;
loc_82C99740:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c99764
	if (cr6.eq) goto loc_82C99764;
loc_82C99748:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne cr6,0x82c99748
	if (!cr6.eq) goto loc_82C99748;
loc_82C99764:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C99780"))) PPC_WEAK_FUNC(sub_82C99780);
PPC_FUNC_IMPL(__imp__sub_82C99780) {
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c997c4
	if (cr6.eq) goto loc_82C997C4;
loc_82C997A4:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82c997a4
	if (!cr6.eq) goto loc_82C997A4;
loc_82C997C4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c997f0
	if (cr6.eq) goto loc_82C997F0;
loc_82C997D0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82c997d0
	if (!cr6.eq) goto loc_82C997D0;
loc_82C997F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C99808"))) PPC_WEAK_FUNC(sub_82C99808);
PPC_FUNC_IMPL(__imp__sub_82C99808) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c998ec
	if (cr6.eq) goto loc_82C998EC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9986c
	if (!cr6.eq) goto loc_82C9986C;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C9986C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// bge cr6,0x82c998ec
	if (!cr6.lt) goto loc_82C998EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// subf r5,r4,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r4.s64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// subf r9,r6,r11
	ctx.r9.s64 = r11.s64 - ctx.r6.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C998EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99968
	if (cr6.eq) goto loc_82C99968;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c99968
	if (!cr6.eq) goto loc_82C99968;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r30,r8,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c99940
	if (!cr6.eq) goto loc_82C99940;
loc_82C99934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C99940:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// add r7,r11,r30
	ctx.r7.u64 = r11.u64 + r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r8,r10
	r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// b 0x82c999f0
	goto loc_82C999F0;
loc_82C99968:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,1024
	r29.s64 = 1024;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(r11.s32, 1024, xer);
	// blt cr6,0x82c99984
	if (cr6.lt) goto loc_82C99984;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82C99984:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c99934
	if (cr6.eq) goto loc_82C99934;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c999d0
	if (cr6.eq) goto loc_82C999D0;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82C999D0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r9,r30,r29
	ctx.r9.u64 = r30.u64 + r29.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r30,8
	ctx.r8.s64 = r30.s64 + 8;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82C999F0:
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C99A08"))) PPC_WEAK_FUNC(sub_82C99A08);
PPC_FUNC_IMPL(__imp__sub_82C99A08) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r31,356(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c99a5c
	if (!cr6.eq) goto loc_82C99A5C;
	// lwz r11,468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 468);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c99a58
	if (!cr6.eq) goto loc_82C99A58;
loc_82C99A4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C99A58:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82C99A5C:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82c99ac4
	if (cr6.lt) goto loc_82C99AC4;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99aa0
	if (cr6.eq) goto loc_82C99AA0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mulli r4,r11,56
	ctx.r4.s64 = r11.s64 * 56;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99a4c
	if (cr6.eq) goto loc_82C99A4C;
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r10.u32);
	// b 0x82c99ac0
	goto loc_82C99AC0;
loc_82C99AA0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r3,896
	ctx.r3.s64 = 896;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99a4c
	if (cr6.eq) goto loc_82C99A4C;
	// li r11,32
	r11.s64 = 32;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
loc_82C99AC0:
	// stw r3,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r3.u32);
loc_82C99AC4:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// mulli r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 * 28;
	// stw r8,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r8.u32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c99b34
	if (cr6.eq) goto loc_82C99B34;
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c99b18
	if (cr6.eq) goto loc_82C99B18;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r3,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r3.u32);
loc_82C99B18:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c99b28
	if (!cr6.eq) goto loc_82C99B28;
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
loc_82C99B28:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r3,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r11.u32);
loc_82C99B34:
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, r29.u32);
	// stw r29,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r29.u32);
	// stw r29,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r29.u32);
	// stw r29,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C99B50"))) PPC_WEAK_FUNC(sub_82C99B50);
PPC_FUNC_IMPL(__imp__sub_82C99B50) {
	PPC_FUNC_PROLOGUE();
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mulli r11,r4,28
	r11.s64 = ctx.r4.s64 * 28;
	// lwz r28,356(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 356);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// bne cr6,0x82c99c10
	if (!cr6.eq) goto loc_82C99C10;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r6.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c99bfc
	if (cr6.eq) goto loc_82C99BFC;
loc_82C99BD4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c99bd4
	if (!cr6.eq) goto loc_82C99BD4;
loc_82C99BFC:
	// li r23,0
	r23.s64 = 0;
	// stw r23,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r23.u32);
	// stw r23,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r23.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82C99C10:
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// li r23,0
	r23.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ble cr6,0x82c99ca8
	if (!cr6.gt) goto loc_82C99CA8;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82C99C68:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// add r5,r11,r27
	ctx.r5.u64 = r11.u64 + r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82c99b50
	sub_82C99B50(ctx, base);
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// mulli r11,r29,28
	r11.s64 = r29.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,20
	r27.s64 = r27.s64 + 20;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,24(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c99c68
	if (cr6.lt) goto loc_82C99C68;
loc_82C99CA8:
	// stw r23,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r23.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82C99CB8"))) PPC_WEAK_FUNC(sub_82C99CB8);
PPC_FUNC_IMPL(__imp__sub_82C99CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// li r11,0
	r11.s64 = 0;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// bne cr6,0x82c99e38
	if (!cr6.eq) goto loc_82C99E38;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,59
	cr6.compare<int32_t>(ctx.r10.s32, 59, xer);
	// beq cr6,0x82c99e74
	if (cr6.eq) goto loc_82C99E74;
	// lis r7,17
	ctx.r7.s64 = 1114112;
loc_82C99CE8:
	// addi r9,r10,-48
	ctx.r9.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r9,54
	cr6.compare<uint32_t>(ctx.r9.u32, 54, xer);
	// bgt cr6,0x82c99e10
	if (cr6.gt) goto loc_82C99E10;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-25332
	r12.s64 = r12.s64 + -25332;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82C99DE8;
	case 1:
		goto loc_82C99DE8;
	case 2:
		goto loc_82C99DE8;
	case 3:
		goto loc_82C99DE8;
	case 4:
		goto loc_82C99DE8;
	case 5:
		goto loc_82C99DE8;
	case 6:
		goto loc_82C99DE8;
	case 7:
		goto loc_82C99DE8;
	case 8:
		goto loc_82C99DE8;
	case 9:
		goto loc_82C99DE8;
	case 10:
		goto loc_82C99E10;
	case 11:
		goto loc_82C99E10;
	case 12:
		goto loc_82C99E10;
	case 13:
		goto loc_82C99E10;
	case 14:
		goto loc_82C99E10;
	case 15:
		goto loc_82C99E10;
	case 16:
		goto loc_82C99E10;
	case 17:
		goto loc_82C99DF4;
	case 18:
		goto loc_82C99DF4;
	case 19:
		goto loc_82C99DF4;
	case 20:
		goto loc_82C99DF4;
	case 21:
		goto loc_82C99DF4;
	case 22:
		goto loc_82C99DF4;
	case 23:
		goto loc_82C99E10;
	case 24:
		goto loc_82C99E10;
	case 25:
		goto loc_82C99E10;
	case 26:
		goto loc_82C99E10;
	case 27:
		goto loc_82C99E10;
	case 28:
		goto loc_82C99E10;
	case 29:
		goto loc_82C99E10;
	case 30:
		goto loc_82C99E10;
	case 31:
		goto loc_82C99E10;
	case 32:
		goto loc_82C99E10;
	case 33:
		goto loc_82C99E10;
	case 34:
		goto loc_82C99E10;
	case 35:
		goto loc_82C99E10;
	case 36:
		goto loc_82C99E10;
	case 37:
		goto loc_82C99E10;
	case 38:
		goto loc_82C99E10;
	case 39:
		goto loc_82C99E10;
	case 40:
		goto loc_82C99E10;
	case 41:
		goto loc_82C99E10;
	case 42:
		goto loc_82C99E10;
	case 43:
		goto loc_82C99E10;
	case 44:
		goto loc_82C99E10;
	case 45:
		goto loc_82C99E10;
	case 46:
		goto loc_82C99E10;
	case 47:
		goto loc_82C99E10;
	case 48:
		goto loc_82C99E10;
	case 49:
		goto loc_82C99E04;
	case 50:
		goto loc_82C99E04;
	case 51:
		goto loc_82C99E04;
	case 52:
		goto loc_82C99E04;
	case 53:
		goto loc_82C99E04;
	case 54:
		goto loc_82C99E04;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25112(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25112);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25100);
	// lwz r22,-25100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25100);
	// lwz r22,-25100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25100);
	// lwz r22,-25100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25100);
	// lwz r22,-25100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25100);
	// lwz r22,-25100(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25100);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25072(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25072);
	// lwz r22,-25084(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25084);
	// lwz r22,-25084(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25084);
	// lwz r22,-25084(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25084);
	// lwz r22,-25084(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25084);
	// lwz r22,-25084(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25084);
	// lwz r22,-25084(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25084);
loc_82C99DE8:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// b 0x82c99e10
	goto loc_82C99E10;
loc_82C99DF4:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x82c99e10
	goto loc_82C99E10;
loc_82C99E04:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
loc_82C99E10:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82c99e30
	if (!cr6.lt) goto loc_82C99E30;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,59
	cr6.compare<int32_t>(ctx.r10.s32, 59, xer);
	// bne cr6,0x82c99ce8
	if (!cr6.eq) goto loc_82C99CE8;
	// b 0x82c99e74
	goto loc_82C99E74;
loc_82C99E30:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C99E38:
	// cmpwi cr6,r10,59
	cr6.compare<int32_t>(ctx.r10.s32, 59, xer);
	// beq cr6,0x82c99e74
	if (cr6.eq) goto loc_82C99E74;
	// lis r7,17
	ctx.r7.s64 = 1114112;
loc_82C99E44:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82c99e30
	if (!cr6.lt) goto loc_82C99E30;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,59
	cr6.compare<int32_t>(ctx.r10.s32, 59, xer);
	// bne cr6,0x82c99e44
	if (!cr6.eq) goto loc_82C99E44;
loc_82C99E74:
	// srawi r10,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = r11.s32 >> 8;
	// cmpwi cr6,r10,223
	cr6.compare<int32_t>(ctx.r10.s32, 223, xer);
	// bgt cr6,0x82c99ea8
	if (cr6.gt) goto loc_82C99EA8;
	// cmpwi cr6,r10,216
	cr6.compare<int32_t>(ctx.r10.s32, 216, xer);
	// bge cr6,0x82c99ec0
	if (!cr6.lt) goto loc_82C99EC0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c99ec4
	if (!cr6.eq) goto loc_82C99EC4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-504
	ctx.r10.s64 = ctx.r10.s64 + -504;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// b 0x82c99ebc
	goto loc_82C99EBC;
loc_82C99EA8:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82c99ec4
	if (!cr6.eq) goto loc_82C99EC4;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// beq cr6,0x82c99ec0
	if (cr6.eq) goto loc_82C99EC0;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
loc_82C99EBC:
	// bne cr6,0x82c99ec4
	if (!cr6.eq) goto loc_82C99EC4;
loc_82C99EC0:
	// li r11,-1
	r11.s64 = -1;
loc_82C99EC4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C99ED0"))) PPC_WEAK_FUNC(sub_82C99ED0);
PPC_FUNC_IMPL(__imp__sub_82C99ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9a060
	if (!cr6.eq) goto loc_82C9A060;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// bne cr6,0x82c9a060
	if (!cr6.eq) goto loc_82C9A060;
	// lis r7,17
	ctx.r7.s64 = 1114112;
loc_82C99EF4:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c99f24
	if (!cr6.eq) goto loc_82C99F24;
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,59
	cr6.compare<uint32_t>(ctx.r9.u32, 59, xer);
	// beq cr6,0x82c9a0bc
	if (cr6.eq) goto loc_82C9A0BC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c99f24
	if (!cr6.eq) goto loc_82C99F24;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// b 0x82c99f28
	goto loc_82C99F28;
loc_82C99F24:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82C99F28:
	// addi r9,r10,-48
	ctx.r9.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r9,54
	cr6.compare<uint32_t>(ctx.r9.u32, 54, xer);
	// bgt cr6,0x82c9a050
	if (cr6.gt) goto loc_82C9A050;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-24756
	r12.s64 = r12.s64 + -24756;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82C9A028;
	case 1:
		goto loc_82C9A028;
	case 2:
		goto loc_82C9A028;
	case 3:
		goto loc_82C9A028;
	case 4:
		goto loc_82C9A028;
	case 5:
		goto loc_82C9A028;
	case 6:
		goto loc_82C9A028;
	case 7:
		goto loc_82C9A028;
	case 8:
		goto loc_82C9A028;
	case 9:
		goto loc_82C9A028;
	case 10:
		goto loc_82C9A050;
	case 11:
		goto loc_82C9A050;
	case 12:
		goto loc_82C9A050;
	case 13:
		goto loc_82C9A050;
	case 14:
		goto loc_82C9A050;
	case 15:
		goto loc_82C9A050;
	case 16:
		goto loc_82C9A050;
	case 17:
		goto loc_82C9A034;
	case 18:
		goto loc_82C9A034;
	case 19:
		goto loc_82C9A034;
	case 20:
		goto loc_82C9A034;
	case 21:
		goto loc_82C9A034;
	case 22:
		goto loc_82C9A034;
	case 23:
		goto loc_82C9A050;
	case 24:
		goto loc_82C9A050;
	case 25:
		goto loc_82C9A050;
	case 26:
		goto loc_82C9A050;
	case 27:
		goto loc_82C9A050;
	case 28:
		goto loc_82C9A050;
	case 29:
		goto loc_82C9A050;
	case 30:
		goto loc_82C9A050;
	case 31:
		goto loc_82C9A050;
	case 32:
		goto loc_82C9A050;
	case 33:
		goto loc_82C9A050;
	case 34:
		goto loc_82C9A050;
	case 35:
		goto loc_82C9A050;
	case 36:
		goto loc_82C9A050;
	case 37:
		goto loc_82C9A050;
	case 38:
		goto loc_82C9A050;
	case 39:
		goto loc_82C9A050;
	case 40:
		goto loc_82C9A050;
	case 41:
		goto loc_82C9A050;
	case 42:
		goto loc_82C9A050;
	case 43:
		goto loc_82C9A050;
	case 44:
		goto loc_82C9A050;
	case 45:
		goto loc_82C9A050;
	case 46:
		goto loc_82C9A050;
	case 47:
		goto loc_82C9A050;
	case 48:
		goto loc_82C9A050;
	case 49:
		goto loc_82C9A044;
	case 50:
		goto loc_82C9A044;
	case 51:
		goto loc_82C9A044;
	case 52:
		goto loc_82C9A044;
	case 53:
		goto loc_82C9A044;
	case 54:
		goto loc_82C9A044;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24536(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24524(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24524);
	// lwz r22,-24524(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24524);
	// lwz r22,-24524(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24524);
	// lwz r22,-24524(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24524);
	// lwz r22,-24524(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24524);
	// lwz r22,-24524(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24524);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24496(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24496);
	// lwz r22,-24508(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24508);
	// lwz r22,-24508(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24508);
	// lwz r22,-24508(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24508);
	// lwz r22,-24508(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24508);
	// lwz r22,-24508(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24508);
	// lwz r22,-24508(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24508);
loc_82C9A028:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// b 0x82c9a050
	goto loc_82C9A050;
loc_82C9A034:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x82c9a050
	goto loc_82C9A050;
loc_82C9A044:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
loc_82C9A050:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82c99ef4
	if (cr6.lt) goto loc_82C99EF4;
loc_82C9A058:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C9A060:
	// lis r7,17
	ctx.r7.s64 = 1114112;
loc_82C9A064:
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a094
	if (!cr6.eq) goto loc_82C9A094;
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,59
	cr6.compare<uint32_t>(ctx.r9.u32, 59, xer);
	// beq cr6,0x82c9a0bc
	if (cr6.eq) goto loc_82C9A0BC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a094
	if (!cr6.eq) goto loc_82C9A094;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// b 0x82c9a098
	goto loc_82C9A098;
loc_82C9A094:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82C9A098:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82c9a058
	if (!cr6.lt) goto loc_82C9A058;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// b 0x82c9a064
	goto loc_82C9A064;
loc_82C9A0BC:
	// srawi r10,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = r11.s32 >> 8;
	// cmpwi cr6,r10,223
	cr6.compare<int32_t>(ctx.r10.s32, 223, xer);
	// bgt cr6,0x82c9a0f0
	if (cr6.gt) goto loc_82C9A0F0;
	// cmpwi cr6,r10,216
	cr6.compare<int32_t>(ctx.r10.s32, 216, xer);
	// bge cr6,0x82c9a108
	if (!cr6.lt) goto loc_82C9A108;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a10c
	if (!cr6.eq) goto loc_82C9A10C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-504
	ctx.r10.s64 = ctx.r10.s64 + -504;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// b 0x82c9a104
	goto loc_82C9A104;
loc_82C9A0F0:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82c9a10c
	if (!cr6.eq) goto loc_82C9A10C;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// beq cr6,0x82c9a108
	if (cr6.eq) goto loc_82C9A108;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
loc_82C9A104:
	// bne cr6,0x82c9a10c
	if (!cr6.eq) goto loc_82C9A10C;
loc_82C9A108:
	// li r11,-1
	r11.s64 = -1;
loc_82C9A10C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9A118"))) PPC_WEAK_FUNC(sub_82C9A118);
PPC_FUNC_IMPL(__imp__sub_82C9A118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9a2a8
	if (!cr6.eq) goto loc_82C9A2A8;
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// bne cr6,0x82c9a2a8
	if (!cr6.eq) goto loc_82C9A2A8;
	// lis r7,17
	ctx.r7.s64 = 1114112;
loc_82C9A13C:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a16c
	if (!cr6.eq) goto loc_82C9A16C;
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r9,59
	cr6.compare<uint32_t>(ctx.r9.u32, 59, xer);
	// beq cr6,0x82c9a304
	if (cr6.eq) goto loc_82C9A304;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a16c
	if (!cr6.eq) goto loc_82C9A16C;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// b 0x82c9a170
	goto loc_82C9A170;
loc_82C9A16C:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82C9A170:
	// addi r9,r10,-48
	ctx.r9.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r9,54
	cr6.compare<uint32_t>(ctx.r9.u32, 54, xer);
	// bgt cr6,0x82c9a298
	if (cr6.gt) goto loc_82C9A298;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-24172
	r12.s64 = r12.s64 + -24172;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82C9A270;
	case 1:
		goto loc_82C9A270;
	case 2:
		goto loc_82C9A270;
	case 3:
		goto loc_82C9A270;
	case 4:
		goto loc_82C9A270;
	case 5:
		goto loc_82C9A270;
	case 6:
		goto loc_82C9A270;
	case 7:
		goto loc_82C9A270;
	case 8:
		goto loc_82C9A270;
	case 9:
		goto loc_82C9A270;
	case 10:
		goto loc_82C9A298;
	case 11:
		goto loc_82C9A298;
	case 12:
		goto loc_82C9A298;
	case 13:
		goto loc_82C9A298;
	case 14:
		goto loc_82C9A298;
	case 15:
		goto loc_82C9A298;
	case 16:
		goto loc_82C9A298;
	case 17:
		goto loc_82C9A27C;
	case 18:
		goto loc_82C9A27C;
	case 19:
		goto loc_82C9A27C;
	case 20:
		goto loc_82C9A27C;
	case 21:
		goto loc_82C9A27C;
	case 22:
		goto loc_82C9A27C;
	case 23:
		goto loc_82C9A298;
	case 24:
		goto loc_82C9A298;
	case 25:
		goto loc_82C9A298;
	case 26:
		goto loc_82C9A298;
	case 27:
		goto loc_82C9A298;
	case 28:
		goto loc_82C9A298;
	case 29:
		goto loc_82C9A298;
	case 30:
		goto loc_82C9A298;
	case 31:
		goto loc_82C9A298;
	case 32:
		goto loc_82C9A298;
	case 33:
		goto loc_82C9A298;
	case 34:
		goto loc_82C9A298;
	case 35:
		goto loc_82C9A298;
	case 36:
		goto loc_82C9A298;
	case 37:
		goto loc_82C9A298;
	case 38:
		goto loc_82C9A298;
	case 39:
		goto loc_82C9A298;
	case 40:
		goto loc_82C9A298;
	case 41:
		goto loc_82C9A298;
	case 42:
		goto loc_82C9A298;
	case 43:
		goto loc_82C9A298;
	case 44:
		goto loc_82C9A298;
	case 45:
		goto loc_82C9A298;
	case 46:
		goto loc_82C9A298;
	case 47:
		goto loc_82C9A298;
	case 48:
		goto loc_82C9A298;
	case 49:
		goto loc_82C9A28C;
	case 50:
		goto loc_82C9A28C;
	case 51:
		goto loc_82C9A28C;
	case 52:
		goto loc_82C9A28C;
	case 53:
		goto loc_82C9A28C;
	case 54:
		goto loc_82C9A28C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23952(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23952);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23940(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23940);
	// lwz r22,-23940(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23940);
	// lwz r22,-23940(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23940);
	// lwz r22,-23940(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23940);
	// lwz r22,-23940(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23940);
	// lwz r22,-23940(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23940);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23912(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23912);
	// lwz r22,-23924(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23924);
	// lwz r22,-23924(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23924);
	// lwz r22,-23924(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23924);
	// lwz r22,-23924(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23924);
	// lwz r22,-23924(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23924);
	// lwz r22,-23924(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23924);
loc_82C9A270:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// b 0x82c9a298
	goto loc_82C9A298;
loc_82C9A27C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x82c9a298
	goto loc_82C9A298;
loc_82C9A28C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
loc_82C9A298:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82c9a13c
	if (cr6.lt) goto loc_82C9A13C;
loc_82C9A2A0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C9A2A8:
	// lis r7,17
	ctx.r7.s64 = 1114112;
loc_82C9A2AC:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a2dc
	if (!cr6.eq) goto loc_82C9A2DC;
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r9,59
	cr6.compare<uint32_t>(ctx.r9.u32, 59, xer);
	// beq cr6,0x82c9a304
	if (cr6.eq) goto loc_82C9A304;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a2dc
	if (!cr6.eq) goto loc_82C9A2DC;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// b 0x82c9a2e0
	goto loc_82C9A2E0;
loc_82C9A2DC:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82C9A2E0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82c9a2a0
	if (!cr6.lt) goto loc_82C9A2A0;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// b 0x82c9a2ac
	goto loc_82C9A2AC;
loc_82C9A304:
	// srawi r10,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = r11.s32 >> 8;
	// cmpwi cr6,r10,223
	cr6.compare<int32_t>(ctx.r10.s32, 223, xer);
	// bgt cr6,0x82c9a338
	if (cr6.gt) goto loc_82C9A338;
	// cmpwi cr6,r10,216
	cr6.compare<int32_t>(ctx.r10.s32, 216, xer);
	// bge cr6,0x82c9a350
	if (!cr6.lt) goto loc_82C9A350;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9a354
	if (!cr6.eq) goto loc_82C9A354;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-504
	ctx.r10.s64 = ctx.r10.s64 + -504;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// b 0x82c9a34c
	goto loc_82C9A34C;
loc_82C9A338:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82c9a354
	if (!cr6.eq) goto loc_82C9A354;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// beq cr6,0x82c9a350
	if (cr6.eq) goto loc_82C9A350;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
loc_82C9A34C:
	// bne cr6,0x82c9a354
	if (!cr6.eq) goto loc_82C9A354;
loc_82C9A350:
	// li r11,-1
	r11.s64 = -1;
loc_82C9A354:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9A360"))) PPC_WEAK_FUNC(sub_82C9A360);
PPC_FUNC_IMPL(__imp__sub_82C9A360) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82c9a478
	if (cr6.eq) goto loc_82C9A478;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82c9a464
	if (cr6.eq) goto loc_82C9A464;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r5,r11,r4
	ctx.r5.u64 = r11.u64 + ctx.r4.u64;
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r11,r4,r10
	r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stw r28,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r29,484(r31)
	PPC_STORE_U8(r31.u32 + 484, r29.u8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,284(r31)
	PPC_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9a3fc
	if (cr6.eq) goto loc_82C9A3FC;
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-11704
	ctx.r9.s64 = ctx.r10.s64 + -11704;
	// stw r9,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r9.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9A3FC:
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82c9a448
	if (cr6.lt) goto loc_82C9A448;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82c9a414
	if (!cr6.eq) goto loc_82C9A414;
	// li r28,2
	r28.s64 = 2;
loc_82C9A414:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,408
	ctx.r6.s64 = r31.s64 + 408;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9A448:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82c9a414
	if (cr6.eq) goto loc_82C9A414;
	// li r11,2
	r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9A464:
	// li r11,33
	r11.s64 = 33;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9A478:
	// li r11,36
	r11.s64 = 36;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82C9A490"))) PPC_WEAK_FUNC(sub_82C9A490);
PPC_FUNC_IMPL(__imp__sub_82C9A490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2bd4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bne cr6,0x82c9a4d8
	if (!cr6.eq) goto loc_82C9A4D8;
	// addi r28,r31,288
	r28.s64 = r31.s64 + 288;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// addi r29,r31,292
	r29.s64 = r31.s64 + 292;
	// b 0x82c9a4e0
	goto loc_82C9A4E0;
loc_82C9A4D8:
	// lwz r28,300(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
loc_82C9A4E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// bgt cr6,0x82c9a76c
	if (cr6.gt) goto loc_82C9A76C;
	// li r26,10
	r26.s64 = 10;
loc_82C9A520:
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-23240
	r12.s64 = r12.s64 + -23240;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82C9A828;
	case 1:
		goto loc_82C9A76C;
	case 2:
		goto loc_82C9A7FC;
	case 3:
		goto loc_82C9A828;
	case 4:
		goto loc_82C9A7EC;
	case 5:
		goto loc_82C9A76C;
	case 6:
		goto loc_82C9A76C;
	case 7:
		goto loc_82C9A76C;
	case 8:
		goto loc_82C9A76C;
	case 9:
		goto loc_82C9A76C;
	case 10:
		goto loc_82C9A614;
	case 11:
		goto loc_82C9A5EC;
	case 12:
		goto loc_82C9A76C;
	case 13:
		goto loc_82C9A76C;
	case 14:
		goto loc_82C9A76C;
	case 15:
		goto loc_82C9A76C;
	case 16:
		goto loc_82C9A76C;
	case 17:
		goto loc_82C9A76C;
	case 18:
		goto loc_82C9A76C;
	case 19:
		goto loc_82C9A76C;
	case 20:
		goto loc_82C9A76C;
	case 21:
		goto loc_82C9A76C;
	case 22:
		goto loc_82C9A76C;
	case 23:
		goto loc_82C9A76C;
	case 24:
		goto loc_82C9A76C;
	case 25:
		goto loc_82C9A76C;
	case 26:
		goto loc_82C9A76C;
	case 27:
		goto loc_82C9A76C;
	case 28:
		goto loc_82C9A76C;
	case 29:
		goto loc_82C9A76C;
	case 30:
		goto loc_82C9A76C;
	case 31:
		goto loc_82C9A76C;
	case 32:
		goto loc_82C9A76C;
	case 33:
		goto loc_82C9A76C;
	case 34:
		goto loc_82C9A76C;
	case 35:
		goto loc_82C9A76C;
	case 36:
		goto loc_82C9A76C;
	case 37:
		goto loc_82C9A76C;
	case 38:
		goto loc_82C9A76C;
	case 39:
		goto loc_82C9A76C;
	case 40:
		goto loc_82C9A76C;
	case 41:
		goto loc_82C9A76C;
	case 42:
		goto loc_82C9A76C;
	case 43:
		goto loc_82C9A76C;
	case 44:
		goto loc_82C9A77C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-22488(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22488);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22532(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22532);
	// lwz r22,-22488(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22488);
	// lwz r22,-22548(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22548);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-23020(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23020);
	// lwz r22,-23060(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23060);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22676(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	// lwz r22,-22660(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22660);
loc_82C9A5EC:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9a6fc
	if (cr6.eq) goto loc_82C9A6FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9a71c
	goto loc_82C9A71C;
loc_82C9A614:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9a6fc
	if (cr6.eq) goto loc_82C9A6FC;
	// lbz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9a6e4
	if (!cr6.eq) goto loc_82C9A6E4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c9a720
	if (cr6.eq) goto loc_82C9A720;
loc_82C9A684:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c9a684
	if (!cr6.eq) goto loc_82C9A684;
	// b 0x82c9a720
	goto loc_82C9A720;
loc_82C9A6E4:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9a71c
	goto loc_82C9A71C;
loc_82C9A6FC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9a720
	if (cr6.eq) goto loc_82C9A720;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9A71C:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C9A720:
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r5,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r5.u32);
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82c9a7d0
	if (cr6.eq) goto loc_82C9A7D0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82c9a7dc
	if (cr6.eq) goto loc_82C9A7DC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// ble cr6,0x82c9a520
	if (!cr6.gt) goto loc_82C9A520;
loc_82C9A76C:
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r5,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
loc_82C9A77C:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9a798
	if (cr6.eq) goto loc_82C9A798;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9a7b8
	goto loc_82C9A7B8;
loc_82C9A798:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9a7bc
	if (cr6.eq) goto loc_82C9A7BC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9A7B8:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C9A7BC:
	// stw r5,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r5.u32);
	// stw r5,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r5.u32);
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82c9a7e0
	if (!cr6.eq) goto loc_82C9A7E0;
loc_82C9A7D0:
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
loc_82C9A7DC:
	// stw r5,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r5.u32);
loc_82C9A7E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
loc_82C9A7EC:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r5,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
loc_82C9A7FC:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9a81c
	if (cr6.eq) goto loc_82C9A81C;
loc_82C9A808:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
loc_82C9A81C:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
loc_82C9A828:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9a808
	if (!cr6.eq) goto loc_82C9A808;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82C9A840"))) PPC_WEAK_FUNC(sub_82C9A840);
PPC_FUNC_IMPL(__imp__sub_82C9A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82c9a884
	if (!cr6.eq) goto loc_82C9A884;
	// addi r28,r30,288
	r28.s64 = r30.s64 + 288;
	// stw r31,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r31.u32);
	// addi r27,r30,292
	r27.s64 = r30.s64 + 292;
	// b 0x82c9a88c
	goto loc_82C9A88C;
loc_82C9A884:
	// lwz r28,300(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// addi r27,r28,4
	r27.s64 = r28.s64 + 4;
loc_82C9A88C:
	// li r11,0
	r11.s64 = 0;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// bgt cr6,0x82c9aa30
	if (cr6.gt) goto loc_82C9AA30;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-22308
	r12.s64 = r12.s64 + -22308;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82C9AA18;
	case 1:
		goto loc_82C9AA30;
	case 2:
		goto loc_82C9A9F0;
	case 3:
		goto loc_82C9AA18;
	case 4:
		goto loc_82C9A9DC;
	case 5:
		goto loc_82C9AA30;
	case 6:
		goto loc_82C9AA30;
	case 7:
		goto loc_82C9AA30;
	case 8:
		goto loc_82C9AA30;
	case 9:
		goto loc_82C9AA30;
	case 10:
		goto loc_82C9AA30;
	case 11:
		goto loc_82C9AA30;
	case 12:
		goto loc_82C9AA30;
	case 13:
		goto loc_82C9AA30;
	case 14:
		goto loc_82C9AA30;
	case 15:
		goto loc_82C9AA30;
	case 16:
		goto loc_82C9AA30;
	case 17:
		goto loc_82C9AA30;
	case 18:
		goto loc_82C9AA30;
	case 19:
		goto loc_82C9AA30;
	case 20:
		goto loc_82C9AA30;
	case 21:
		goto loc_82C9AA30;
	case 22:
		goto loc_82C9AA30;
	case 23:
		goto loc_82C9AA30;
	case 24:
		goto loc_82C9AA30;
	case 25:
		goto loc_82C9AA30;
	case 26:
		goto loc_82C9AA30;
	case 27:
		goto loc_82C9AA30;
	case 28:
		goto loc_82C9AA30;
	case 29:
		goto loc_82C9AA30;
	case 30:
		goto loc_82C9AA30;
	case 31:
		goto loc_82C9AA30;
	case 32:
		goto loc_82C9AA30;
	case 33:
		goto loc_82C9AA30;
	case 34:
		goto loc_82C9AA30;
	case 35:
		goto loc_82C9AA30;
	case 36:
		goto loc_82C9AA30;
	case 37:
		goto loc_82C9AA30;
	case 38:
		goto loc_82C9AA30;
	case 39:
		goto loc_82C9AA30;
	case 40:
		goto loc_82C9AA30;
	case 41:
		goto loc_82C9AA30;
	case 42:
		goto loc_82C9AA30;
	case 43:
		goto loc_82C9AA30;
	case 44:
		goto loc_82C9AA30;
	case 45:
		goto loc_82C9AA30;
	case 46:
		goto loc_82C9A998;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-21992(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21992);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-22032(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22032);
	// lwz r22,-21992(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21992);
	// lwz r22,-22052(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22052);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-21968(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21968);
	// lwz r22,-22120(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
loc_82C9A998:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9a9b8
	if (cr6.eq) goto loc_82C9A9B8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9A9B8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82c9aa00
	if (!cr6.eq) goto loc_82C9AA00;
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9A9DC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9A9F0:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9aa0c
	if (cr6.eq) goto loc_82C9AA0C;
loc_82C9A9FC:
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
loc_82C9AA00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9AA0C:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9AA18:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9a9fc
	if (!cr6.eq) goto loc_82C9A9FC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9AA30:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82C9AA48"))) PPC_WEAK_FUNC(sub_82C9AA48);
PPC_FUNC_IMPL(__imp__sub_82C9AA48) {
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
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9aa78
	if (cr6.eq) goto loc_82C9AA78;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,-31632
	r11.s64 = r11.s64 + -31632;
	// b 0x82c9aa80
	goto loc_82C9AA80;
loc_82C9AA78:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,-32152
	r11.s64 = r11.s64 + -32152;
loc_82C9AA80:
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9aab0
	if (cr6.eq) goto loc_82C9AAB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C9AAB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x82c98ca8
	sub_82C98CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9AAD0"))) PPC_WEAK_FUNC(sub_82C9AAD0);
PPC_FUNC_IMPL(__imp__sub_82C9AAD0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,356(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9abe0
	if (cr6.eq) goto loc_82C9ABE0;
	// li r27,0
	r27.s64 = 0;
loc_82C9AAFC:
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// bne cr6,0x82c9abcc
	if (!cr6.eq) goto loc_82C9ABCC;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82c9ab58
	if (cr6.eq) goto loc_82C9AB58;
loc_82C9AB10:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9ab34
	if (!cr6.eq) goto loc_82C9AB34;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9abec
	if (cr6.eq) goto loc_82C9ABEC;
loc_82C9AB34:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// bne cr6,0x82c9ab10
	if (!cr6.eq) goto loc_82C9AB10;
loc_82C9AB58:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9ab7c
	if (!cr6.eq) goto loc_82C9AB7C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9abec
	if (cr6.eq) goto loc_82C9ABEC;
loc_82C9AB7C:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9abec
	if (cr6.eq) goto loc_82C9ABEC;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9abc4
	if (!cr6.eq) goto loc_82C9ABC4;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// b 0x82c9abc8
	goto loc_82C9ABC8;
loc_82C9ABC4:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_82C9ABC8:
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
loc_82C9ABCC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9aafc
	if (!cr6.eq) goto loc_82C9AAFC;
loc_82C9ABE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82C9ABEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82C9ABF8"))) PPC_WEAK_FUNC(sub_82C9ABF8);
PPC_FUNC_IMPL(__imp__sub_82C9ABF8) {
	PPC_FUNC_PROLOGUE();
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,61
	r24.s64 = 61;
	// lwz r25,356(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r11,156(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9accc
	if (cr6.eq) goto loc_82C9ACCC;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9ac44
	if (!cr6.eq) goto loc_82C9AC44;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9AC44:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// lwz r10,156(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 156);
	// lbz r9,472(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 472);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r29,20(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// beq cr6,0x82c9ac70
	if (cr6.eq) goto loc_82C9AC70;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_82C9AC70:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82c9acc8
	if (!cr6.gt) goto loc_82C9ACC8;
loc_82C9AC7C:
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9ac9c
	if (!cr6.eq) goto loc_82C9AC9C;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9AC9C:
	// lwz r11,156(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 156);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// blt cr6,0x82c9ac7c
	if (cr6.lt) goto loc_82C9AC7C;
loc_82C9ACC8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82C9ACCC:
	// lwz r11,68(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// li r23,12
	r23.s64 = 12;
	// lwz r27,60(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + 60);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
loc_82C9ACE0:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// beq cr6,0x82c9ad00
	if (cr6.eq) goto loc_82C9AD00;
loc_82C9ACE8:
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82c9ad78
	if (!cr6.eq) goto loc_82C9AD78;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bne cr6,0x82c9ace8
	if (!cr6.eq) goto loc_82C9ACE8;
loc_82C9AD00:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r29,0(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
loc_82C9AD10:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x82c9ad30
	if (cr6.eq) goto loc_82C9AD30;
loc_82C9AD18:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c9aed4
	if (!cr6.eq) goto loc_82C9AED4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82c9ad18
	if (!cr6.eq) goto loc_82C9AD18;
loc_82C9AD30:
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9ad54
	if (!cr6.eq) goto loc_82C9AD54;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9AD54:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82C9AD78:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ace0
	if (cr6.eq) goto loc_82C9ACE0;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9adc8
	if (cr6.eq) goto loc_82C9ADC8;
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9adb4
	if (!cr6.eq) goto loc_82C9ADB4;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9ADB4:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r10.u32);
loc_82C9ADC8:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ae24
	if (cr6.eq) goto loc_82C9AE24;
loc_82C9ADD8:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9adfc
	if (!cr6.eq) goto loc_82C9ADFC;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9ADFC:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c9add8
	if (!cr6.eq) goto loc_82C9ADD8;
loc_82C9AE24:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9ae48
	if (!cr6.eq) goto loc_82C9AE48;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9AE48:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lbz r9,472(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 472);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r29,20(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// beq cr6,0x82c9ae74
	if (cr6.eq) goto loc_82C9AE74;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_82C9AE74:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82c9aecc
	if (!cr6.gt) goto loc_82C9AECC;
loc_82C9AE80:
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9aea0
	if (!cr6.eq) goto loc_82C9AEA0;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9AEA0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// blt cr6,0x82c9ae80
	if (cr6.lt) goto loc_82C9AE80;
loc_82C9AECC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82c9ace0
	goto loc_82C9ACE0;
loc_82C9AED4:
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ad10
	if (cr6.eq) goto loc_82C9AD10;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af24
	if (cr6.eq) goto loc_82C9AF24;
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9af10
	if (!cr6.eq) goto loc_82C9AF10;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9AF10:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r10.u32);
loc_82C9AF24:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af80
	if (cr6.eq) goto loc_82C9AF80;
loc_82C9AF34:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9af58
	if (!cr6.eq) goto loc_82C9AF58;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9af88
	if (cr6.eq) goto loc_82C9AF88;
loc_82C9AF58:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c9af34
	if (!cr6.eq) goto loc_82C9AF34;
loc_82C9AF80:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82c9ad10
	goto loc_82C9AD10;
loc_82C9AF88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82C9AF98"))) PPC_WEAK_FUNC(sub_82C9AF98);
PPC_FUNC_IMPL(__imp__sub_82C9AF98) {
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
	// li r3,188
	ctx.r3.s64 = 188;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9afd8
	if (!cr6.eq) goto loc_82C9AFD8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C9AFD8:
	// li r11,0
	r11.s64 = 0;
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r31,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r31.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, r11.u8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stb r11,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, r11.u8);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, r11.u8);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r31.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, r11.u8);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stb r10,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r10.u8);
	// stb r11,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, r11.u8);
	// stb r11,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9B0C0"))) PPC_WEAK_FUNC(sub_82C9B0C0);
PPC_FUNC_IMPL(__imp__sub_82C9B0C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	r28.u64 = r11.u64 + r31.u64;
loc_82C9B0EC:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x82c9b10c
	if (cr6.eq) goto loc_82C9B10C;
loc_82C9B0F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9b188
	if (!cr6.eq) goto loc_82C9B188;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82c9b0f4
	if (!cr6.eq) goto loc_82C9B0F4;
loc_82C9B10C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c996b8
	sub_82C996B8(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x82c996b8
	sub_82C996B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c996b8
	sub_82C996B8(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82c996b8
	sub_82C996B8(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// bl 0x82c996b8
	sub_82C996B8(ctx, base);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82c99780
	sub_82C99780(ctx, base);
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x82c99780
	sub_82C99780(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9b170
	if (cr6.eq) goto loc_82C9B170;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9B170:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9B188:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c9b0ec
	if (cr6.eq) goto loc_82C9B0EC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9b0ec
	goto loc_82C9B0EC;
}

__attribute__((alias("__imp__sub_82C9B1A8"))) PPC_WEAK_FUNC(sub_82C9B1A8);
PPC_FUNC_IMPL(__imp__sub_82C9B1A8) {
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
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9b1e4
	if (!cr6.eq) goto loc_82C9B1E4;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9b25c
	if (cr6.eq) goto loc_82C9B25C;
loc_82C9B1E4:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82c9b250
	if (cr6.eq) goto loc_82C9B250;
loc_82C9B210:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9b25c
	if (cr6.eq) goto loc_82C9B25C;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x82c9b210
	if (!cr6.eq) goto loc_82C9B210;
loc_82C9B250:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9B25C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82C9B268"))) PPC_WEAK_FUNC(sub_82C9B268);
PPC_FUNC_IMPL(__imp__sub_82C9B268) {
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
loc_82C9B284:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9b2a8
	if (!cr6.eq) goto loc_82C9B2A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9b2f0
	if (cr6.eq) goto loc_82C9B2F0;
loc_82C9B2A8:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne cr6,0x82c9b284
	if (!cr6.eq) goto loc_82C9B284;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82C9B2D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C9B2F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c9b2d8
	goto loc_82C9B2D8;
}

__attribute__((alias("__imp__sub_82C9B2F8"))) PPC_WEAK_FUNC(sub_82C9B2F8);
PPC_FUNC_IMPL(__imp__sub_82C9B2F8) {
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
	// bl 0x82c9b1a8
	sub_82C9B1A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9b330
	if (!cr6.eq) goto loc_82C9B330;
loc_82C9B318:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C9B330:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9b354
	if (!cr6.eq) goto loc_82C9B354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9b318
	if (cr6.eq) goto loc_82C9B318;
loc_82C9B354:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9B388"))) PPC_WEAK_FUNC(sub_82C9B388);
PPC_FUNC_IMPL(__imp__sub_82C9B388) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r31,356(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 356);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c9b3bc
	if (!cr6.eq) goto loc_82C9B3BC;
loc_82C9B3B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9B3BC:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9b3b0
	if (cr6.eq) goto loc_82C9B3B0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82c9b3f4
	if (cr6.eq) goto loc_82C9B3F4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9B3F4:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82c9aad0
	sub_82C9AAD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82c9b418
	if (cr6.eq) goto loc_82C9B418;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82C9B418:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82C9B420"))) PPC_WEAK_FUNC(sub_82C9B420);
PPC_FUNC_IMPL(__imp__sub_82C9B420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// addi r11,r4,-11
	r11.s64 = ctx.r4.s64 + -11;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x82c9b4c0
	if (cr6.gt) goto loc_82C9B4C0;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-19384
	r12.s64 = r12.s64 + -19384;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82C9B49C;
	case 1:
		goto loc_82C9B4C0;
	case 2:
		goto loc_82C9B4A4;
	case 3:
		goto loc_82C9B4C0;
	case 4:
		goto loc_82C9B494;
	case 5:
		goto loc_82C9B4C0;
	case 6:
		goto loc_82C9B4C0;
	case 7:
		goto loc_82C9B4C0;
	case 8:
		goto loc_82C9B4C0;
	case 9:
		goto loc_82C9B4C0;
	case 10:
		goto loc_82C9B4C0;
	case 11:
		goto loc_82C9B4C0;
	case 12:
		goto loc_82C9B4C0;
	case 13:
		goto loc_82C9B4C0;
	case 14:
		goto loc_82C9B4C0;
	case 15:
		goto loc_82C9B4C0;
	case 16:
		goto loc_82C9B4C0;
	case 17:
		goto loc_82C9B4C0;
	case 18:
		goto loc_82C9B4AC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-19300(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19292(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19292);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19308(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19308);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19264(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// lwz r22,-19284(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19284);
loc_82C9B494:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C9B49C:
	// li r3,55
	ctx.r3.s64 = 55;
	// blr 
	return;
loc_82C9B4A4:
	// li r3,56
	ctx.r3.s64 = 56;
	// blr 
	return;
loc_82C9B4AC:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r9,r11,-11496
	ctx.r9.s64 = r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B4C0:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9b4dc
	if (!cr6.eq) goto loc_82C9B4DC;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9b4dc
	if (!cr6.eq) goto loc_82C9B4DC;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9B4DC:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9b548
	if (cr6.eq) goto loc_82C9B548;
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// beq cr6,0x82c9b534
	if (cr6.eq) goto loc_82C9B534;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9b520
	if (!cr6.eq) goto loc_82C9B520;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9b520
	if (!cr6.eq) goto loc_82C9B520;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9B520:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B534:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r9,r10,-19424
	ctx.r9.s64 = ctx.r10.s64 + -19424;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B548:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9b5c8
	if (cr6.eq) goto loc_82C9B5C8;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// beq cr6,0x82c9b598
	if (cr6.eq) goto loc_82C9B598;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9b580
	if (!cr6.eq) goto loc_82C9B580;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9b580
	if (!cr6.eq) goto loc_82C9B580;
	// li r11,59
	r11.s64 = 59;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_82C9B580:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r11,-1
	r11.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_82C9B598:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9b5b4
	if (cr6.eq) goto loc_82C9B5B4;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,7224
	r11.s64 = r11.s64 + 7224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_82C9B5B4:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,7832
	r11.s64 = r11.s64 + 7832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_82C9B5C8:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9b628
	if (cr6.eq) goto loc_82C9B628;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9b614
	if (cr6.eq) goto loc_82C9B614;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9b600
	if (!cr6.eq) goto loc_82C9B600;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9b600
	if (!cr6.eq) goto loc_82C9B600;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9B600:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B614:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r9,r10,6656
	ctx.r9.s64 = ctx.r10.s64 + 6656;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B628:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9b68c
	if (cr6.eq) goto loc_82C9B68C;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// beq cr6,0x82c9b674
	if (cr6.eq) goto loc_82C9B674;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9b660
	if (!cr6.eq) goto loc_82C9B660;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9b660
	if (!cr6.eq) goto loc_82C9B660;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9B660:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B674:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-32054
	ctx.r9.s64 = -2100690944;
	// addi r8,r9,7832
	ctx.r8.s64 = ctx.r9.s64 + 7832;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
loc_82C9B68C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9B698"))) PPC_WEAK_FUNC(sub_82C9B698);
PPC_FUNC_IMPL(__imp__sub_82C9B698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9b6f0
	if (cr6.eq) goto loc_82C9B6F0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// beq cr6,0x82c9b6dc
	if (cr6.eq) goto loc_82C9B6DC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9b6c8
	if (!cr6.eq) goto loc_82C9B6C8;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9b6c8
	if (!cr6.eq) goto loc_82C9B6C8;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9B6C8:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B6DC:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,58
	ctx.r3.s64 = 58;
	// addi r9,r10,7832
	ctx.r9.s64 = ctx.r10.s64 + 7832;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B6F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9B6F8"))) PPC_WEAK_FUNC(sub_82C9B6F8);
PPC_FUNC_IMPL(__imp__sub_82C9B6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9b764
	if (cr6.eq) goto loc_82C9B764;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// beq cr6,0x82c9b73c
	if (cr6.eq) goto loc_82C9B73C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9b728
	if (!cr6.eq) goto loc_82C9B728;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9b728
	if (!cr6.eq) goto loc_82C9B728;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9B728:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9B73C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9b758
	if (cr6.eq) goto loc_82C9B758;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,7224
	r11.s64 = r11.s64 + 7224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
loc_82C9B758:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,7832
	r11.s64 = r11.s64 + 7832;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82C9B764:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9B770"))) PPC_WEAK_FUNC(sub_82C9B770);
PPC_FUNC_IMPL(__imp__sub_82C9B770) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c9b8f0
	if (cr6.eq) goto loc_82C9B8F0;
	// lwz r30,364(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// li r29,0
	r29.s64 = 0;
loc_82C9B790:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c9b7a8
	if (!cr6.eq) goto loc_82C9B7A8;
	// lwz r30,368(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9b7e0
	if (cr6.eq) goto loc_82C9B7E0;
	// stw r29,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r29.u32);
loc_82C9B7A8:
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// bl 0x82c98658
	sub_82C98658(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9b790
	goto loc_82C9B790;
loc_82C9B7E0:
	// lwz r30,300(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 300);
loc_82C9B7E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c9b7fc
	if (!cr6.eq) goto loc_82C9B7FC;
	// lwz r30,304(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9b814
	if (cr6.eq) goto loc_82C9B814;
	// stw r29,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r29.u32);
loc_82C9B7FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9b7e4
	goto loc_82C9B7E4;
loc_82C9B814:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// bl 0x82c98658
	sub_82C98658(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// bl 0x82c98658
	sub_82C98658(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99780
	sub_82C99780(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = r31.s64 + 440;
	// bl 0x82c99780
	sub_82C99780(ctx, base);
	// lbz r11,488(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 488);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9b868
	if (!cr6.eq) goto loc_82C9B868;
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b868
	if (cr6.eq) goto loc_82C9B868;
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c9b0c0
	sub_82C9B0C0(ctx, base);
loc_82C9B868:
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9b8e0
	if (cr6.eq) goto loc_82C9B8E0;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9B8E0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9B8F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82C9B8F8"))) PPC_WEAK_FUNC(sub_82C9B8F8);
PPC_FUNC_IMPL(__imp__sub_82C9B8F8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82c9ba3c
	if (cr6.eq) goto loc_82C9BA3C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82c9ba28
	if (cr6.eq) goto loc_82C9BA28;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r11.u32);
	// bne cr6,0x82c9b9f0
	if (!cr6.eq) goto loc_82C9B9F0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stb r29,484(r31)
	PPC_STORE_U8(r31.u32 + 484, r29.u8);
	// beq cr6,0x82c9b9c4
	if (cr6.eq) goto loc_82C9B9C4;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// stw r4,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r4.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,284(r31)
	PPC_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9b9d0
	if (!cr6.eq) goto loc_82C9B9D0;
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82c9b9bc
	if (cr6.lt) goto loc_82C9B9BC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82c9b9c4
	if (!cr6.eq) goto loc_82C9B9C4;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,408
	ctx.r6.s64 = r31.s64 + 408;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9B9BC:
	// li r11,2
	r11.s64 = 2;
	// stw r11,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r11.u32);
loc_82C9B9C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9B9D0:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-11704
	ctx.r9.s64 = ctx.r10.s64 + -11704;
	// stw r9,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r9.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9B9F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c986f8
	sub_82C986F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ba44
	if (cr6.eq) goto loc_82C9BA44;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9a360
	sub_82C9A360(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9BA28:
	// li r11,33
	r11.s64 = 33;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C9BA3C:
	// li r11,36
	r11.s64 = 36;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
loc_82C9BA44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82C9BA50"))) PPC_WEAK_FUNC(sub_82C9BA50);
PPC_FUNC_IMPL(__imp__sub_82C9BA50) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lbz r11,484(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c9a490
	sub_82C9A490(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9bb38
	if (!cr6.eq) goto loc_82C9BB38;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9bb34
	if (cr6.eq) goto loc_82C9BB34;
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9bad0
	if (cr6.eq) goto loc_82C9BAD0;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r10,r11,-30128
	ctx.r10.s64 = r11.s64 + -30128;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98a50
	sub_82C98A50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C9BAD0:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// lbz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r9,r11,-1320
	ctx.r9.s64 = r11.s64 + -1320;
	// cntlzw r4,r10
	ctx.r4.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r9,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r9.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9eac0
	sub_82C9EAC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82c9bb28
	if (!cr6.eq) goto loc_82C9BB28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98970
	sub_82C98970(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9bb38
	if (cr6.eq) goto loc_82C9BB38;
loc_82C9BB28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C9BB34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9BB38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C9BB40"))) PPC_WEAK_FUNC(sub_82C9BB40);
PPC_FUNC_IMPL(__imp__sub_82C9BB40) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lbz r11,484(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c9a840
	sub_82C9A840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9bbb8
	if (!cr6.eq) goto loc_82C9BBB8;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9bbb4
	if (cr6.eq) goto loc_82C9BBB4;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r10,r11,5976
	ctx.r10.s64 = r11.s64 + 5976;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca1758
	sub_82CA1758(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C9BBB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9BBB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82C9BBC0"))) PPC_WEAK_FUNC(sub_82C9BBC0);
PPC_FUNC_IMPL(__imp__sub_82C9BBC0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// beq cr6,0x82c9bc10
	if (cr6.eq) goto loc_82C9BC10;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,-31304
	r11.s64 = r11.s64 + -31304;
	// b 0x82c9bc18
	goto loc_82C9BC18;
loc_82C9BC10:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r11,r11,-31824
	r11.s64 = r11.s64 + -31824;
loc_82C9BC18:
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r25,r31,288
	r25.s64 = r31.s64 + 288;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9bc74
	if (!cr6.eq) goto loc_82C9BC74;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	r11.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r11,30
	ctx.r3.s64 = r11.s64 + 30;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
loc_82C9BC74:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82c9bca4
	if (!cr6.eq) goto loc_82C9BCA4;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82c9bca4
	if (!cr6.eq) goto loc_82C9BCA4;
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,130(r11)
	PPC_STORE_U8(r11.u32 + 130, ctx.r10.u8);
	// lwz r9,492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82c9bca4
	if (!cr6.eq) goto loc_82C9BCA4;
	// stw r29,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r29.u32);
loc_82C9BCA4:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9bd54
	if (cr6.eq) goto loc_82C9BD54;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9bd04
	if (cr6.eq) goto loc_82C9BD04;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r3,r31,440
	ctx.r3.s64 = r31.s64 + 440;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c9bcfc
	if (!cr6.eq) goto loc_82C9BCFC;
loc_82C9BCF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
loc_82C9BCFC:
	// lwz r11,452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// stw r11,456(r31)
	PPC_STORE_U32(r31.u32 + 456, r11.u32);
loc_82C9BD04:
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c9bd34
	if (cr6.eq) goto loc_82C9BD34;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r3,r31,440
	ctx.r3.s64 = r31.s64 + 440;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// subf r6,r10,r11
	ctx.r6.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82c9bcf0
	if (cr6.eq) goto loc_82C9BCF0;
loc_82C9BD34:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9bd74
	goto loc_82C9BD74;
loc_82C9BD54:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9bd74
	if (cr6.eq) goto loc_82C9BD74;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9BD74:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9bdb8
	if (!cr6.eq) goto loc_82C9BDB8;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9bddc
	if (cr6.eq) goto loc_82C9BDDC;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82c9bdb4
	if (cr6.eq) goto loc_82C9BDB4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
loc_82C9BDB4:
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_82C9BDB8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c9bdc8
	if (!cr6.eq) goto loc_82C9BDC8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82c9bdd0
	if (cr6.eq) goto loc_82C9BDD0;
loc_82C9BDC8:
	// addi r3,r31,440
	ctx.r3.s64 = r31.s64 + 440;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
loc_82C9BDD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
loc_82C9BDDC:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9bdb8
	if (cr6.eq) goto loc_82C9BDB8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c9be24
	if (!cr6.eq) goto loc_82C9BE24;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r3,r31,440
	ctx.r3.s64 = r31.s64 + 440;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c9bcf0
	if (cr6.eq) goto loc_82C9BCF0;
loc_82C9BE24:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98ca8
	sub_82C98CA8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r31,440
	ctx.r3.s64 = r31.s64 + 440;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// cmpwi cr6,r8,18
	cr6.compare<int32_t>(ctx.r8.s32, 18, xer);
	// bne cr6,0x82c9be4c
	if (!cr6.eq) goto loc_82C9BE4C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_82C9BE4C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82C9BE58"))) PPC_WEAK_FUNC(sub_82C9BE58);
PPC_FUNC_IMPL(__imp__sub_82C9BE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2bc8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r25,356(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 356);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(r11.u32, 43, xer);
	// bgt cr6,0x82c9c280
	if (cr6.gt) goto loc_82C9C280;
	// li r23,0
	r23.s64 = 0;
	// li r20,32
	r20.s64 = 32;
	// li r22,1
	r22.s64 = 1;
loc_82C9BEB4:
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-16692
	r12.s64 = r12.s64 + -16692;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82C9C2D4;
	case 1:
		goto loc_82C9C05C;
	case 2:
		goto loc_82C9C280;
	case 3:
		goto loc_82C9C300;
	case 4:
		goto loc_82C9C2E0;
	case 5:
		goto loc_82C9C280;
	case 6:
		goto loc_82C9C280;
	case 7:
		goto loc_82C9C280;
	case 8:
		goto loc_82C9C280;
	case 9:
		goto loc_82C9C280;
	case 10:
		goto loc_82C9C034;
	case 11:
		goto loc_82C9C068;
	case 12:
		goto loc_82C9C280;
	case 13:
		goto loc_82C9C0CC;
	case 14:
		goto loc_82C9BF7C;
	case 15:
		goto loc_82C9C280;
	case 16:
		goto loc_82C9C280;
	case 17:
		goto loc_82C9C280;
	case 18:
		goto loc_82C9C280;
	case 19:
		goto loc_82C9C280;
	case 20:
		goto loc_82C9C280;
	case 21:
		goto loc_82C9C280;
	case 22:
		goto loc_82C9C280;
	case 23:
		goto loc_82C9C280;
	case 24:
		goto loc_82C9C280;
	case 25:
		goto loc_82C9C280;
	case 26:
		goto loc_82C9C280;
	case 27:
		goto loc_82C9C280;
	case 28:
		goto loc_82C9C280;
	case 29:
		goto loc_82C9C280;
	case 30:
		goto loc_82C9C280;
	case 31:
		goto loc_82C9C280;
	case 32:
		goto loc_82C9C280;
	case 33:
		goto loc_82C9C280;
	case 34:
		goto loc_82C9C280;
	case 35:
		goto loc_82C9C280;
	case 36:
		goto loc_82C9C280;
	case 37:
		goto loc_82C9C280;
	case 38:
		goto loc_82C9C280;
	case 39:
		goto loc_82C9C280;
	case 40:
		goto loc_82C9C280;
	case 41:
		goto loc_82C9C280;
	case 42:
		goto loc_82C9C280;
	case 43:
		goto loc_82C9C068;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-15660(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15660);
	// lwz r22,-16292(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16292);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15616(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15616);
	// lwz r22,-15648(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15648);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-16332(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16332);
	// lwz r22,-16280(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16280);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-16180(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16180);
	// lwz r22,-16516(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16516);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-15744(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15744);
	// lwz r22,-16280(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16280);
loc_82C9BF7C:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c9c31c
	if (cr6.lt) goto loc_82C9C31C;
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9bfc8
	if (!cr6.eq) goto loc_82C9BFC8;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bne cr6,0x82c9bfc8
	if (!cr6.eq) goto loc_82C9BFC8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c9c254
	if (cr0.eq) goto loc_82C9C254;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x82c9c254
	if (cr6.eq) goto loc_82C9C254;
loc_82C9BFC8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82c97790
	sub_82C97790(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82c9c31c
	if (cr6.eq) goto loc_82C9C31C;
	// mr r31,r23
	r31.u64 = r23.u64;
	// ble cr6,0x82c9c254
	if (!cr6.gt) goto loc_82C9C254;
loc_82C9BFE4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9c008
	if (!cr6.eq) goto loc_82C9C008;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c050
	if (cr6.eq) goto loc_82C9C050;
loc_82C9C008:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// blt cr6,0x82c9bfe4
	if (cr6.lt) goto loc_82C9BFE4;
	// b 0x82c9c254
	goto loc_82C9C254;
loc_82C9C034:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c9b1a8
	sub_82C9B1A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9c254
	if (!cr6.eq) goto loc_82C9C254;
loc_82C9C050:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C05C:
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82C9C068:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c090
	if (!cr6.eq) goto loc_82C9C090;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c9c254
	if (cr0.eq) goto loc_82C9C254;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x82c9c254
	if (cr6.eq) goto loc_82C9C254;
loc_82C9C090:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9c0b4
	if (!cr6.eq) goto loc_82C9C0B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c050
	if (cr6.eq) goto loc_82C9C050;
loc_82C9C0B4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stb r20,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r20.u8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// b 0x82c9c254
	goto loc_82C9C254;
loc_82C9C0CC:
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,48(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r31,r3
	r31.s64 = ctx.r3.s8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82c9c134
	if (cr6.eq) goto loc_82C9C134;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9c11c
	if (!cr6.eq) goto loc_82C9C11C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c050
	if (cr6.eq) goto loc_82C9C050;
loc_82C9C11C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// b 0x82c9c254
	goto loc_82C9C254;
loc_82C9C134:
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r26,440
	ctx.r3.s64 = r26.s64 + 440;
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9c050
	if (cr6.eq) goto loc_82C9C050;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// lwz r11,456(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 456);
	// addi r10,r25,80
	ctx.r10.s64 = r25.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,452(r26)
	PPC_STORE_U32(r26.u32 + 452, r11.u32);
	// bne cr6,0x82c9c1c0
	if (!cr6.eq) goto loc_82C9C1C0;
	// lwz r11,272(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 272);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9c1b8
	if (cr6.eq) goto loc_82C9C1B8;
	// lbz r11,130(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c1a0
	if (cr6.eq) goto loc_82C9C1A0;
	// lwz r11,300(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 300);
	// b 0x82c9c1a4
	goto loc_82C9C1A4;
loc_82C9C1A0:
	// lbz r11,129(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 129);
loc_82C9C1A4:
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne cr6,0x82c9c1e0
	if (!cr6.eq) goto loc_82C9C1E0;
loc_82C9C1B8:
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x82c9c1e0
	goto loc_82C9C1E0;
loc_82C9C1C0:
	// lbz r11,129(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 129);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c1dc
	if (cr6.eq) goto loc_82C9C1DC;
	// lbz r11,130(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// beq cr6,0x82c9c1e0
	if (cr6.eq) goto loc_82C9C1E0;
loc_82C9C1DC:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82C9C1E0:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9c29c
	if (cr6.eq) goto loc_82C9C29C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c9c338
	if (cr6.eq) goto loc_82C9C338;
	// lbz r11,34(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c344
	if (cr6.eq) goto loc_82C9C344;
loc_82C9C204:
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c350
	if (!cr6.eq) goto loc_82C9C350;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c36c
	if (!cr6.eq) goto loc_82C9C36C;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c9c388
	if (cr6.eq) goto loc_82C9C388;
	// stb r22,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r22.u8);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,228(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 228);
	// add r7,r11,r6
	ctx.r7.u64 = r11.u64 + ctx.r6.u64;
	// bl 0x82c9be58
	sub_82C9BE58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r23,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r23.u8);
	// bne cr6,0x82c9c294
	if (!cr6.eq) goto loc_82C9C294;
loc_82C9C254:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(r11.u32, 43, xer);
	// ble cr6,0x82c9beb4
	if (!cr6.gt) goto loc_82C9BEB4;
loc_82C9C280:
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c290
	if (!cr6.eq) goto loc_82C9C290;
	// stw r28,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r28.u32);
loc_82C9C290:
	// li r3,23
	ctx.r3.s64 = 23;
loc_82C9C294:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C29C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82c9c204
	if (!cr6.eq) goto loc_82C9C204;
	// addi r11,r26,416
	r11.s64 = r26.s64 + 416;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82c9c254
	if (!cr6.eq) goto loc_82C9C254;
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c254
	if (cr6.eq) goto loc_82C9C254;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
	// b 0x82c9c254
	goto loc_82C9C254;
loc_82C9C2D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C2E0:
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c2f4
	if (!cr6.eq) goto loc_82C9C2F4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r11.u32);
loc_82C9C2F4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C300:
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c310
	if (!cr6.eq) goto loc_82C9C310;
	// stw r28,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r28.u32);
loc_82C9C310:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C31C:
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c32c
	if (!cr6.eq) goto loc_82C9C32C;
	// stw r28,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r28.u32);
loc_82C9C32C:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C338:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C344:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C350:
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c360
	if (!cr6.eq) goto loc_82C9C360;
	// stw r28,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r28.u32);
loc_82C9C360:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C36C:
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c37c
	if (!cr6.eq) goto loc_82C9C37C;
	// stw r28,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r28.u32);
loc_82C9C37C:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82C9C388:
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c398
	if (!cr6.eq) goto loc_82C9C398;
	// stw r28,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r28.u32);
loc_82C9C398:
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
}

__attribute__((alias("__imp__sub_82C9C3A8"))) PPC_WEAK_FUNC(sub_82C9C3A8);
PPC_FUNC_IMPL(__imp__sub_82C9C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r22,1
	r22.s64 = 1;
	// li r23,0
	r23.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r25,356(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 356);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwz r19,276(r29)
	r19.u64 = PPC_LOAD_U32(r29.u32 + 276);
	// mr r24,r23
	r24.u64 = r23.u64;
	// stw r22,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r22.u32);
	// addi r26,r25,104
	r26.s64 = r25.s64 + 104;
	// lwz r11,104(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c40c
	if (!cr6.eq) goto loc_82C9C40C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c40c
	if (!cr6.eq) goto loc_82C9C40C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C40C:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bgt cr6,0x82c9c6fc
	if (cr6.gt) goto loc_82C9C6FC;
	// li r20,10
	r20.s64 = 10;
loc_82C9C438:
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-15280
	r12.s64 = r12.s64 + -15280;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82C9C788;
	case 1:
		goto loc_82C9C604;
	case 2:
		goto loc_82C9C6FC;
	case 3:
		goto loc_82C9C7C0;
	case 4:
		goto loc_82C9C7E4;
	case 5:
		goto loc_82C9C6FC;
	case 6:
		goto loc_82C9C6FC;
	case 7:
		goto loc_82C9C6FC;
	case 8:
		goto loc_82C9C6FC;
	case 9:
		goto loc_82C9C6FC;
	case 10:
		goto loc_82C9C5D4;
	case 11:
		goto loc_82C9C610;
	case 12:
		goto loc_82C9C6FC;
	case 13:
		goto loc_82C9C5D4;
	case 14:
		goto loc_82C9C64C;
	case 15:
		goto loc_82C9C6FC;
	case 16:
		goto loc_82C9C6FC;
	case 17:
		goto loc_82C9C6FC;
	case 18:
		goto loc_82C9C6FC;
	case 19:
		goto loc_82C9C6FC;
	case 20:
		goto loc_82C9C6FC;
	case 21:
		goto loc_82C9C6FC;
	case 22:
		goto loc_82C9C6FC;
	case 23:
		goto loc_82C9C6FC;
	case 24:
		goto loc_82C9C6FC;
	case 25:
		goto loc_82C9C6FC;
	case 26:
		goto loc_82C9C6FC;
	case 27:
		goto loc_82C9C6FC;
	case 28:
		goto loc_82C9C6FC;
	case 29:
		goto loc_82C9C6FC;
	case 30:
		goto loc_82C9C6FC;
	case 31:
		goto loc_82C9C6FC;
	case 32:
		goto loc_82C9C4D4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-14456(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14456);
	// lwz r22,-14844(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14844);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14400(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14400);
	// lwz r22,-14364(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14364);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14892(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14892);
	// lwz r22,-14832(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14832);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14892(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14892);
	// lwz r22,-14772(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14772);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-14596(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14596);
	// lwz r22,-15148(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15148);
loc_82C9C4D4:
	// lbz r11,488(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 488);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c4ec
	if (!cr6.eq) goto loc_82C9C4EC;
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82c9c720
	if (cr6.eq) goto loc_82C9C720;
loc_82C9C4EC:
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,416
	ctx.r3.s64 = r29.s64 + 416;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9c5f0
	if (cr6.eq) goto loc_82C9C5F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r25,132
	ctx.r3.s64 = r25.s64 + 132;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// lwz r11,432(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 432);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,428(r29)
	PPC_STORE_U32(r29.u32 + 428, r11.u32);
	// beq cr6,0x82c9c738
	if (cr6.eq) goto loc_82C9C738;
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c750
	if (!cr6.eq) goto loc_82C9C750;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c5a4
	if (cr6.eq) goto loc_82C9C5A4;
	// lwz r11,112(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c598
	if (cr6.eq) goto loc_82C9C598;
	// stb r23,131(r25)
	PPC_STORE_U8(r25.u32 + 131, r23.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r22,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r22.u8);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// lwz r11,112(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r23,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r23.u8);
	// beq cr6,0x82c9c774
	if (cr6.eq) goto loc_82C9C774;
	// lbz r11,131(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 131);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c6d0
	if (!cr6.eq) goto loc_82C9C6D0;
loc_82C9C598:
	// lbz r11,130(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 130);
	// stb r11,128(r25)
	PPC_STORE_U8(r25.u32 + 128, r11.u8);
	// b 0x82c9c6d0
	goto loc_82C9C6D0;
loc_82C9C5A4:
	// stb r22,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r22.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r6,r11,r5
	ctx.r6.u64 = r11.u64 + ctx.r5.u64;
	// lwz r4,228(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// bl 0x82c9c3a8
	sub_82C9C3A8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stb r23,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r23.u8);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x82c9c710
	if (!cr6.eq) goto loc_82C9C710;
	// b 0x82c9c6d0
	goto loc_82C9C6D0;
loc_82C9C5D4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c9b1a8
	sub_82C9B1A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9c6d0
	if (!cr6.eq) goto loc_82C9C6D0;
loc_82C9C5F0:
	// mr r24,r22
	r24.u64 = r22.u64;
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C604:
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82C9C610:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9c634
	if (!cr6.eq) goto loc_82C9C634;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c5f0
	if (cr6.eq) goto loc_82C9C5F0;
loc_82C9C634:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// stb r20,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r20.u8);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// b 0x82c9c6d0
	goto loc_82C9C6D0;
loc_82C9C64C:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c9c79c
	if (cr6.lt) goto loc_82C9C79C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82c97790
	sub_82C97790(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82c9c79c
	if (cr6.eq) goto loc_82C9C79C;
	// mr r31,r23
	r31.u64 = r23.u64;
	// ble cr6,0x82c9c6d0
	if (!cr6.gt) goto loc_82C9C6D0;
loc_82C9C684:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9c6a8
	if (!cr6.eq) goto loc_82C9C6A8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c5f0
	if (cr6.eq) goto loc_82C9C5F0;
loc_82C9C6A8:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r8.u32);
	// blt cr6,0x82c9c684
	if (cr6.lt) goto loc_82C9C684;
loc_82C9C6D0:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// ble cr6,0x82c9c438
	if (!cr6.gt) goto loc_82C9C438;
loc_82C9C6FC:
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c70c
	if (!cr6.eq) goto loc_82C9C70C;
	// stw r30,288(r29)
	PPC_STORE_U32(r29.u32 + 288, r30.u32);
loc_82C9C70C:
	// li r24,23
	r24.s64 = 23;
loc_82C9C710:
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C720:
	// mr r24,r20
	r24.u64 = r20.u64;
	// stw r30,288(r29)
	PPC_STORE_U32(r29.u32 + 288, r30.u32);
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C738:
	// lbz r11,130(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 130);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stb r11,128(r25)
	PPC_STORE_U8(r25.u32 + 128, r11.u8);
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C750:
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c760
	if (!cr6.eq) goto loc_82C9C760;
	// stw r30,288(r29)
	PPC_STORE_U32(r29.u32 + 288, r30.u32);
loc_82C9C760:
	// li r24,12
	r24.s64 = 12;
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C774:
	// li r24,21
	r24.s64 = 21;
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C788:
	// mr r24,r23
	r24.u64 = r23.u64;
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C79C:
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c7ac
	if (!cr6.eq) goto loc_82C9C7AC;
	// stw r30,288(r29)
	PPC_STORE_U32(r29.u32 + 288, r30.u32);
loc_82C9C7AC:
	// li r24,14
	r24.s64 = 14;
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C7C0:
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c7d0
	if (!cr6.eq) goto loc_82C9C7D0;
	// stw r30,288(r29)
	PPC_STORE_U32(r29.u32 + 288, r30.u32);
loc_82C9C7D0:
	// li r24,4
	r24.s64 = 4;
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
loc_82C9C7E4:
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9c7f8
	if (!cr6.eq) goto loc_82C9C7F8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,288(r29)
	PPC_STORE_U32(r29.u32 + 288, r11.u32);
loc_82C9C7F8:
	// li r24,4
	r24.s64 = 4;
	// stw r19,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r19.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
}

__attribute__((alias("__imp__sub_82C9C810"))) PPC_WEAK_FUNC(sub_82C9C810);
PPC_FUNC_IMPL(__imp__sub_82C9C810) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c850
	if (!cr6.eq) goto loc_82C9C850;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c90c
	if (cr6.eq) goto loc_82C9C90C;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9C850:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r5
	r29.u64 = r11.u64 + ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r27,r3,r29
	r27.u64 = ctx.r3.u64 + r29.u64;
	// addi r28,r30,416
	r28.s64 = r30.s64 + 416;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c9c8a4
	if (!cr6.eq) goto loc_82C9C8A4;
loc_82C9C898:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9C8A4:
	// lwz r11,428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,432(r30)
	PPC_STORE_U32(r30.u32 + 432, r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r27,r9,r26
	r27.s64 = r26.s64 - ctx.r9.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c9c898
	if (cr6.eq) goto loc_82C9C898;
	// bl 0x82c98f58
	sub_82C98F58(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
loc_82C9C90C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82C9C918"))) PPC_WEAK_FUNC(sub_82C9C918);
PPC_FUNC_IMPL(__imp__sub_82C9C918) {
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
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9c950
	if (!cr6.eq) goto loc_82C9C950;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9c9a0
	if (cr6.eq) goto loc_82C9C9A0;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
	// b 0x82c9c9a0
	goto loc_82C9C9A0;
loc_82C9C950:
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// addi r30,r31,416
	r30.s64 = r31.s64 + 416;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - r11.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9c9a4
	if (cr6.eq) goto loc_82C9C9A4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c98f58
	sub_82C98F58(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
loc_82C9C9A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C9C9A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9C9C0"))) PPC_WEAK_FUNC(sub_82C9C9C0);
PPC_FUNC_IMPL(__imp__sub_82C9C9C0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r31,356(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 356);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9ca04
	if (!cr6.eq) goto loc_82C9CA04;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ca7c
	if (cr6.eq) goto loc_82C9CA7C;
loc_82C9CA04:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r24,0
	r24.s64 = 0;
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ca7c
	if (cr6.eq) goto loc_82C9CA7C;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82c9ca7c
	if (cr6.eq) goto loc_82C9CA7C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82c9ca88
	if (cr6.eq) goto loc_82C9CA88;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_82C9CA6C:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_82C9CA70:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9CA7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9CA88:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lbz r10,236(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 236);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9ca70
	if (cr6.eq) goto loc_82C9CA70;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// bne cr6,0x82c9cb40
	if (!cr6.eq) goto loc_82C9CB40;
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// cmplwi cr6,r10,109
	cr6.compare<uint32_t>(ctx.r10.u32, 109, xer);
	// bne cr6,0x82c9cb40
	if (!cr6.eq) goto loc_82C9CB40;
	// lbz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 2);
	// cmplwi cr6,r10,108
	cr6.compare<uint32_t>(ctx.r10.u32, 108, xer);
	// bne cr6,0x82c9cb40
	if (!cr6.eq) goto loc_82C9CB40;
	// lbz r10,3(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 3);
	// cmplwi cr6,r10,110
	cr6.compare<uint32_t>(ctx.r10.u32, 110, xer);
	// bne cr6,0x82c9cb40
	if (!cr6.eq) goto loc_82C9CB40;
	// lbz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,115
	cr6.compare<uint32_t>(ctx.r10.u32, 115, xer);
	// bne cr6,0x82c9cb40
	if (!cr6.eq) goto loc_82C9CB40;
	// lbz r10,5(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c9cafc
	if (cr6.eq) goto loc_82C9CAFC;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// bne cr6,0x82c9cb40
	if (!cr6.eq) goto loc_82C9CB40;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9cb18
	if (!cr6.eq) goto loc_82C9CB18;
loc_82C9CAFC:
	// addi r11,r31,152
	r11.s64 = r31.s64 + 152;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r11,9(r26)
	PPC_STORE_U8(r26.u32 + 9, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9CB18:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r28,6
	ctx.r4.s64 = r28.s64 + 6;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r11,9(r26)
	PPC_STORE_U8(r26.u32 + 9, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9CB40:
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9ca70
	if (cr6.eq) goto loc_82C9CA70;
loc_82C9CB4C:
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// beq cr6,0x82c9cb74
	if (cr6.eq) goto loc_82C9CB74;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lbzx r11,r29,r28
	r11.u64 = PPC_LOAD_U8(r29.u32 + r28.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9cb4c
	if (!cr6.eq) goto loc_82C9CB4C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82C9CB74:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82c9cbc8
	if (!cr6.gt) goto loc_82C9CBC8;
loc_82C9CB80:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9cba4
	if (!cr6.eq) goto loc_82C9CBA4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ca7c
	if (cr6.eq) goto loc_82C9CA7C;
loc_82C9CBA4:
	// lbzx r11,r30,r28
	r11.u64 = PPC_LOAD_U8(r30.u32 + r28.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// blt cr6,0x82c9cb80
	if (cr6.lt) goto loc_82C9CB80;
loc_82C9CBC8:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9cbec
	if (!cr6.eq) goto loc_82C9CBEC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ca7c
	if (cr6.eq) goto loc_82C9CA7C;
loc_82C9CBEC:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9ca6c
	if (!cr6.eq) goto loc_82C9CA6C;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82C9CC38"))) PPC_WEAK_FUNC(sub_82C9CC38);
PPC_FUNC_IMPL(__imp__sub_82C9CC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r27,356(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9cec0
	if (cr6.eq) goto loc_82C9CEC0;
	// li r26,0
	r26.s64 = 0;
	// li r25,1
	r25.s64 = 1;
loc_82C9CC68:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x82c9ce44
	if (cr6.eq) goto loc_82C9CE44;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9ce44
	if (cr6.eq) goto loc_82C9CE44;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// bne cr6,0x82c9ce00
	if (!cr6.eq) goto loc_82C9CE00;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82c9cca0
	if (!cr0.eq) goto loc_82C9CCA0;
	// addi r29,r27,152
	r29.s64 = r27.s64 + 152;
	// b 0x82c9cd1c
	goto loc_82C9CD1C;
loc_82C9CCA0:
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9ccc0
	if (!cr6.eq) goto loc_82C9CCC0;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9cecc
	if (cr6.eq) goto loc_82C9CECC;
loc_82C9CCC0:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r27,60
	ctx.r3.s64 = r27.s64 + 60;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lwz r4,432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r10.u32);
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c9cecc
	if (cr6.eq) goto loc_82C9CECC;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82c9cd14
	if (!cr6.eq) goto loc_82C9CD14;
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// bl 0x82c9b268
	sub_82C9B268(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9cecc
	if (cr6.eq) goto loc_82C9CECC;
loc_82C9CD14:
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
loc_82C9CD1C:
	// lbz r11,1(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x82c9cd88
	if (cr6.eq) goto loc_82C9CD88;
loc_82C9CD30:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9cd88
	if (cr6.eq) goto loc_82C9CD88;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9cd5c
	if (!cr6.eq) goto loc_82C9CD5C;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9cecc
	if (cr6.eq) goto loc_82C9CECC;
loc_82C9CD5C:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82c9cd30
	if (!cr6.eq) goto loc_82C9CD30;
loc_82C9CD88:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9cdac
	if (!cr6.eq) goto loc_82C9CDAC;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9cecc
	if (cr6.eq) goto loc_82C9CECC;
loc_82C9CDAC:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r7,r31,372
	ctx.r7.s64 = r31.s64 + 372;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r10.u32);
	// lwz r6,432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// bl 0x82c98ad0
	sub_82C98AD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9cecc
	if (!cr6.eq) goto loc_82C9CECC;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9cdf8
	if (cr6.eq) goto loc_82C9CDF8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82C9CDF8:
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x82c9ceb4
	goto loc_82C9CEB4;
loc_82C9CE00:
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9ce24
	if (!cr6.eq) goto loc_82C9CE24;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9cecc
	if (cr6.eq) goto loc_82C9CECC;
loc_82C9CE24:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// b 0x82c9ceb4
	goto loc_82C9CEB4;
loc_82C9CE44:
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9ce68
	if (!cr6.eq) goto loc_82C9CE68;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9cecc
	if (cr6.eq) goto loc_82C9CECC;
loc_82C9CE68:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r4,432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r10.u32);
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ce98
	if (cr6.eq) goto loc_82C9CE98;
	// stb r25,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r25.u8);
loc_82C9CE98:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9cea8
	if (cr6.eq) goto loc_82C9CEA8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82C9CEA8:
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
loc_82C9CEB4:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9cc68
	if (!cr6.eq) goto loc_82C9CC68;
loc_82C9CEC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
loc_82C9CECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82C9CED8"))) PPC_WEAK_FUNC(sub_82C9CED8);
PPC_FUNC_IMPL(__imp__sub_82C9CED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9cf38
	if (cr6.eq) goto loc_82C9CF38;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82c9cf1c
	if (cr6.eq) goto loc_82C9CF1C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9cf08
	if (!cr6.eq) goto loc_82C9CF08;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9cf08
	if (!cr6.eq) goto loc_82C9CF08;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9CF08:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9CF1C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82C9CF38:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9CF40"))) PPC_WEAK_FUNC(sub_82C9CF40);
PPC_FUNC_IMPL(__imp__sub_82C9CF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9cf98
	if (cr6.eq) goto loc_82C9CF98;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9cf84
	if (cr6.eq) goto loc_82C9CF84;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9cf70
	if (!cr6.eq) goto loc_82C9CF70;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9cf70
	if (!cr6.eq) goto loc_82C9CF70;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9CF70:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9CF84:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r9,r10,-19120
	ctx.r9.s64 = ctx.r10.s64 + -19120;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9CF98:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9CFA0"))) PPC_WEAK_FUNC(sub_82C9CFA0);
PPC_FUNC_IMPL(__imp__sub_82C9CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9d000
	if (cr6.eq) goto loc_82C9D000;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9cfe4
	if (cr6.eq) goto loc_82C9CFE4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9cfd0
	if (!cr6.eq) goto loc_82C9CFD0;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9cfd0
	if (!cr6.eq) goto loc_82C9CFD0;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9CFD0:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,-11496
	ctx.r9.s64 = ctx.r10.s64 + -11496;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9CFE4:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82C9D000:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D008"))) PPC_WEAK_FUNC(sub_82C9D008);
PPC_FUNC_IMPL(__imp__sub_82C9D008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9d0a4
	if (cr6.eq) goto loc_82C9D0A4;
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// beq cr6,0x82c9d070
	if (cr6.eq) goto loc_82C9D070;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9d054
	if (cr6.eq) goto loc_82C9D054;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9d040
	if (!cr6.eq) goto loc_82C9D040;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9d040
	if (!cr6.eq) goto loc_82C9D040;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9D040:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D054:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r8,r11,-18696
	ctx.r8.s64 = r11.s64 + -18696;
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
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9d090
	if (cr6.eq) goto loc_82C9D090;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r11,r11,7224
	r11.s64 = r11.s64 + 7224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
loc_82C9D090:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r11,r11,7832
	r11.s64 = r11.s64 + 7832;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
loc_82C9D0A4:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D0B0"))) PPC_WEAK_FUNC(sub_82C9D0B0);
PPC_FUNC_IMPL(__imp__sub_82C9D0B0) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	cr6.compare<int32_t>(r27.s32, 15, xer);
	// beq cr6,0x82c9d1bc
	if (cr6.eq) goto loc_82C9D1BC;
	// cmpwi cr6,r27,20
	cr6.compare<int32_t>(r27.s32, 20, xer);
	// beq cr6,0x82c9d100
	if (cr6.eq) goto loc_82C9D100;
	// cmpwi cr6,r27,27
	cr6.compare<int32_t>(r27.s32, 27, xer);
	// bne cr6,0x82c9d1c8
	if (!cr6.eq) goto loc_82C9D1C8;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r10,r11,6656
	ctx.r10.s64 = r11.s64 + 6656;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D100:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3128
	r30.s64 = r11.s64 + 3128;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r30,36
	ctx.r6.s64 = r30.s64 + 36;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9d148
	if (cr6.eq) goto loc_82C9D148;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r10,r11,6656
	ctx.r10.s64 = r11.s64 + 6656;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D148:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r6,r30,108
	ctx.r6.s64 = r30.s64 + 108;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9d188
	if (cr6.eq) goto loc_82C9D188;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r10,r11,6656
	ctx.r10.s64 = r11.s64 + 6656;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D188:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9d1c8
	if (cr6.eq) goto loc_82C9D1C8;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-18992
	ctx.r10.s64 = r11.s64 + -18992;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82C9D1BC:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D1C8:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9d1e8
	if (!cr6.eq) goto loc_82C9D1E8;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(r27.s32, 28, xer);
	// bne cr6,0x82c9d1e8
	if (!cr6.eq) goto loc_82C9D1E8;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D1E8:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82C9D200"))) PPC_WEAK_FUNC(sub_82C9D200);
PPC_FUNC_IMPL(__imp__sub_82C9D200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9d274
	if (cr6.eq) goto loc_82C9D274;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// beq cr6,0x82c9d268
	if (cr6.eq) goto loc_82C9D268;
	// cmpwi cr6,r4,36
	cr6.compare<int32_t>(ctx.r4.s32, 36, xer);
	// beq cr6,0x82c9d24c
	if (cr6.eq) goto loc_82C9D24C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9d238
	if (!cr6.eq) goto loc_82C9D238;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9d238
	if (!cr6.eq) goto loc_82C9D238;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// li r3,46
	ctx.r3.s64 = 46;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82C9D268:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-9576
	ctx.r9.s64 = ctx.r10.s64 + -9576;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82C9D274:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D280"))) PPC_WEAK_FUNC(sub_82C9D280);
PPC_FUNC_IMPL(__imp__sub_82C9D280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// addi r10,r4,-15
	ctx.r10.s64 = ctx.r4.s64 + -15;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bgt cr6,0x82c9d3e8
	if (cr6.gt) goto loc_82C9D3E8;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-11608
	r12.s64 = r12.s64 + -11608;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C9D308;
	case 1:
		goto loc_82C9D3E8;
	case 2:
		goto loc_82C9D3E8;
	case 3:
		goto loc_82C9D3E8;
	case 4:
		goto loc_82C9D3E8;
	case 5:
		goto loc_82C9D3E8;
	case 6:
		goto loc_82C9D3D4;
	case 7:
		goto loc_82C9D3E8;
	case 8:
		goto loc_82C9D3E8;
	case 9:
		goto loc_82C9D310;
	case 10:
		goto loc_82C9D3E8;
	case 11:
		goto loc_82C9D3E8;
	case 12:
		goto loc_82C9D3E8;
	case 13:
		goto loc_82C9D3E8;
	case 14:
		goto loc_82C9D3E8;
	case 15:
		goto loc_82C9D3E8;
	case 16:
		goto loc_82C9D3E8;
	case 17:
		goto loc_82C9D3E8;
	case 18:
		goto loc_82C9D3E8;
	case 19:
		goto loc_82C9D3E8;
	case 20:
		goto loc_82C9D368;
	case 21:
		goto loc_82C9D33C;
	case 22:
		goto loc_82C9D394;
	case 23:
		goto loc_82C9D3C0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-11512(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11512);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11308(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11308);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11504(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11504);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11288(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11288);
	// lwz r22,-11416(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11416);
	// lwz r22,-11460(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11460);
	// lwz r22,-11372(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11372);
	// lwz r22,-11328(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11328);
loc_82C9D308:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
loc_82C9D310:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d334
	if (!cr0.eq) goto loc_82C9D334;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82C9D334:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
loc_82C9D33C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d360
	if (!cr0.eq) goto loc_82C9D360;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82C9D360:
	// li r3,46
	ctx.r3.s64 = 46;
	// blr 
	return;
loc_82C9D368:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d38c
	if (!cr0.eq) goto loc_82C9D38C;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82C9D38C:
	// li r3,47
	ctx.r3.s64 = 47;
	// blr 
	return;
loc_82C9D394:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bne 0x82c9d3b8
	if (!cr0.eq) goto loc_82C9D3B8;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82C9D3B8:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_82C9D3C0:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,50
	ctx.r3.s64 = 50;
	// addi r9,r10,-9472
	ctx.r9.s64 = ctx.r10.s64 + -9472;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D3D4:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r9,r10,-9472
	ctx.r9.s64 = ctx.r10.s64 + -9472;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9D3E8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9d404
	if (!cr6.eq) goto loc_82C9D404;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9d404
	if (!cr6.eq) goto loc_82C9D404;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D418"))) PPC_WEAK_FUNC(sub_82C9D418);
PPC_FUNC_IMPL(__imp__sub_82C9D418) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	cr6.compare<int32_t>(r27.s32, 15, xer);
	// beq cr6,0x82c9d480
	if (cr6.eq) goto loc_82C9D480;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(r27.s32, 18, xer);
	// bne cr6,0x82c9d4c8
	if (!cr6.eq) goto loc_82C9D4C8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3156
	r30.s64 = r11.s64 + 3156;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r30,16
	ctx.r6.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9d48c
	if (cr6.eq) goto loc_82C9D48C;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-18896
	ctx.r10.s64 = r11.s64 + -18896;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82C9D480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D48C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9d4c8
	if (cr6.eq) goto loc_82C9D4C8;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-18792
	ctx.r10.s64 = r11.s64 + -18792;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D4C8:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9d4e8
	if (!cr6.eq) goto loc_82C9D4E8;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(r27.s32, 28, xer);
	// bne cr6,0x82c9d4e8
	if (!cr6.eq) goto loc_82C9D4E8;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9D4E8:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82C9D500"))) PPC_WEAK_FUNC(sub_82C9D500);
PPC_FUNC_IMPL(__imp__sub_82C9D500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,-11008
	ctx.r10.s64 = r11.s64 + -11008;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,15
	r11.s64 = ctx.r3.s64 + 15;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// stw r6,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r6.u32);
	// bgt cr6,0x82c9d694
	if (cr6.gt) goto loc_82C9D694;
loc_82C9D55C:
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-10892
	r12.s64 = r12.s64 + -10892;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10592);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10520(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10520);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10452(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10452);
	// lwz r22,-10476(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10476);
	// lwz r22,-10492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10492);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10736(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10736);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10716(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10716);
	// lwz r22,-10604(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10604);
	// lwz r22,-10768(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10768);
loc_82C9D5F0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9d640
	if (cr6.eq) goto loc_82C9D640;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
	// b 0x82c9d63c
	goto loc_82C9D63C;
loc_82C9D610:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c810
	sub_82C9C810(ctx, base);
	// b 0x82c9d634
	goto loc_82C9D634;
loc_82C9D624:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c918
	sub_82C9C918(ctx, base);
loc_82C9D634:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9d6f8
	if (cr6.eq) goto loc_82C9D6F8;
loc_82C9D63C:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C9D640:
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r6,288(r31)
	PPC_STORE_U32(r31.u32 + 288, ctx.r6.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82c9d6c8
	if (cr6.eq) goto loc_82C9D6C8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82c9d6d8
	if (cr6.eq) goto loc_82C9D6D8;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,15
	r11.s64 = ctx.r3.s64 + 15;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// stw r6,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r6.u32);
	// ble cr6,0x82c9d55c
	if (!cr6.gt) goto loc_82C9D55C;
loc_82C9D694:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9D6A0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9d6d8
	if (cr6.eq) goto loc_82C9D6D8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82c9d6d4
	if (!cr6.eq) goto loc_82C9D6D4;
loc_82C9D6C8:
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9D6D4:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C9D6D8:
	// stw r6,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9D6E8:
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9D6F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9D704:
	// stw r6,288(r31)
	PPC_STORE_U32(r31.u32 + 288, ctx.r6.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9D714:
	// lbz r11,484(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9d6e8
	if (cr6.eq) goto loc_82C9D6E8;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C9D72C:
	// lbz r11,484(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9d6e8
	if (cr6.eq) goto loc_82C9D6E8;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82C9D748"))) PPC_WEAK_FUNC(sub_82C9D748);
PPC_FUNC_IMPL(__imp__sub_82C9D748) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// bl 0x82c9be58
	sub_82C9BE58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9d7e0
	if (!cr6.eq) goto loc_82C9D7E0;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9d7a0
	if (!cr6.eq) goto loc_82C9D7A0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c9d7a0
	if (cr0.eq) goto loc_82C9D7A0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x82c9d7a0
	if (!cr6.eq) goto loc_82C9D7A0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82C9D7A0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c9d7c4
	if (!cr6.eq) goto loc_82C9D7C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9d7f8
	if (cr6.eq) goto loc_82C9D7F8;
loc_82C9D7C4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_82C9D7E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(r31.s32, 15, xer);
	// beq cr6,0x82c9d868
	if (cr6.eq) goto loc_82C9D868;
	// cmpwi cr6,r31,17
	cr6.compare<int32_t>(r31.s32, 17, xer);
	// beq cr6,0x82c9d8b4
	if (cr6.eq) goto loc_82C9D8B4;
	// cmpwi cr6,r31,18
	cr6.compare<int32_t>(r31.s32, 18, xer);
	// bne cr6,0x82c9d884
	if (!cr6.eq) goto loc_82C9D884;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r11,3180
	ctx.r6.s64 = r11.s64 + 3180;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9d884
	if (cr6.eq) goto loc_82C9D884;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-12584
	ctx.r10.s64 = r11.s64 + -12584;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82C9D868:
	// li r3,11
	ctx.r3.s64 = 11;
loc_82C9D86C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C9D884:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9d8a0
	if (!cr6.eq) goto loc_82C9D8A0;
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(r31.s32, 28, xer);
	// bne cr6,0x82c9d8a0
	if (!cr6.eq) goto loc_82C9D8A0;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82c9d86c
	goto loc_82C9D86C;
loc_82C9D8A0:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82c9d86c
	goto loc_82C9D86C;
loc_82C9D8B4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9d8d4
	if (cr6.eq) goto loc_82C9D8D4;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r11,r11,7224
	r11.s64 = r11.s64 + 7224;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82c9d86c
	goto loc_82C9D86C;
loc_82C9D8D4:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r11,r11,7832
	r11.s64 = r11.s64 + 7832;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82c9d86c
	goto loc_82C9D86C;
}

__attribute__((alias("__imp__sub_82C9D8E8"))) PPC_WEAK_FUNC(sub_82C9D8E8);
PPC_FUNC_IMPL(__imp__sub_82C9D8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9d940
	if (cr6.eq) goto loc_82C9D940;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9d92c
	if (cr6.eq) goto loc_82C9D92C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9d918
	if (!cr6.eq) goto loc_82C9D918;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9d918
	if (!cr6.eq) goto loc_82C9D918;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9d9a0
	if (cr6.eq) goto loc_82C9D9A0;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9d98c
	if (cr6.eq) goto loc_82C9D98C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9d978
	if (!cr6.eq) goto loc_82C9D978;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9d978
	if (!cr6.eq) goto loc_82C9D978;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9da14
	if (cr6.eq) goto loc_82C9DA14;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// beq cr6,0x82c9da08
	if (cr6.eq) goto loc_82C9DA08;
	// cmpwi cr6,r4,24
	cr6.compare<int32_t>(ctx.r4.s32, 24, xer);
	// beq cr6,0x82c9d9f4
	if (cr6.eq) goto loc_82C9D9F4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9d9e0
	if (!cr6.eq) goto loc_82C9D9E0;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9d9e0
	if (!cr6.eq) goto loc_82C9D9E0;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DA08:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-6024
	ctx.r9.s64 = ctx.r10.s64 + -6024;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82C9DA14:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DA20"))) PPC_WEAK_FUNC(sub_82C9DA20);
PPC_FUNC_IMPL(__imp__sub_82C9DA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9da8c
	if (cr6.eq) goto loc_82C9DA8C;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// beq cr6,0x82c9da80
	if (cr6.eq) goto loc_82C9DA80;
	// cmpwi cr6,r4,24
	cr6.compare<int32_t>(ctx.r4.s32, 24, xer);
	// beq cr6,0x82c9da6c
	if (cr6.eq) goto loc_82C9DA6C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9da58
	if (!cr6.eq) goto loc_82C9DA58;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9da58
	if (!cr6.eq) goto loc_82C9DA58;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DA80:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-5800
	ctx.r9.s64 = ctx.r10.s64 + -5800;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82C9DA8C:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DA98"))) PPC_WEAK_FUNC(sub_82C9DA98);
PPC_FUNC_IMPL(__imp__sub_82C9DA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9daf8
	if (cr6.eq) goto loc_82C9DAF8;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82c9dae4
	if (cr6.eq) goto loc_82C9DAE4;
	// cmpwi cr6,r4,41
	cr6.compare<int32_t>(ctx.r4.s32, 41, xer);
	// beq cr6,0x82c9dae4
	if (cr6.eq) goto loc_82C9DAE4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9dad0
	if (!cr6.eq) goto loc_82C9DAD0;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9dad0
	if (!cr6.eq) goto loc_82C9DAD0;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DAF8:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
	// addi r10,r4,-15
	ctx.r10.s64 = ctx.r4.s64 + -15;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,26
	cr6.compare<uint32_t>(ctx.r10.u32, 26, xer);
	// bgt cr6,0x82c9dc00
	if (cr6.gt) goto loc_82C9DC00;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-9432
	r12.s64 = r12.s64 + -9432;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C9DB94;
	case 1:
		goto loc_82C9DC00;
	case 2:
		goto loc_82C9DC00;
	case 3:
		goto loc_82C9DBB0;
	case 4:
		goto loc_82C9DC00;
	case 5:
		goto loc_82C9DC00;
	case 6:
		goto loc_82C9DC00;
	case 7:
		goto loc_82C9DC00;
	case 8:
		goto loc_82C9DB9C;
	case 9:
		goto loc_82C9DC00;
	case 10:
		goto loc_82C9DC00;
	case 11:
		goto loc_82C9DC00;
	case 12:
		goto loc_82C9DC00;
	case 13:
		goto loc_82C9DC00;
	case 14:
		goto loc_82C9DC00;
	case 15:
		goto loc_82C9DBC4;
	case 16:
		goto loc_82C9DBD8;
	case 17:
		goto loc_82C9DBEC;
	case 18:
		goto loc_82C9DC00;
	case 19:
		goto loc_82C9DC00;
	case 20:
		goto loc_82C9DC00;
	case 21:
		goto loc_82C9DC00;
	case 22:
		goto loc_82C9DC00;
	case 23:
		goto loc_82C9DC00;
	case 24:
		goto loc_82C9DC00;
	case 25:
		goto loc_82C9DC00;
	case 26:
		goto loc_82C9DBB0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-9324(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9324);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9296(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9296);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9316(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9316);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9276(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9276);
	// lwz r22,-9256(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9256);
	// lwz r22,-9236(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9236);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9216(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9216);
	// lwz r22,-9296(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9296);
loc_82C9DB94:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
loc_82C9DB9C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82C9DBB0:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DBC4:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,53
	ctx.r3.s64 = 53;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DBD8:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DBEC:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r9,r10,-11648
	ctx.r9.s64 = ctx.r10.s64 + -11648;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9DC00:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9dc1c
	if (!cr6.eq) goto loc_82C9DC1C;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9dc1c
	if (!cr6.eq) goto loc_82C9DC1C;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9DC30"))) PPC_WEAK_FUNC(sub_82C9DC30);
PPC_FUNC_IMPL(__imp__sub_82C9DC30) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r16,0
	r16.s64 = 0;
	// stw r28,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r14,356(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// addi r30,r14,20
	r30.s64 = r14.s64 + 20;
	// mr r20,r16
	r20.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r19,r16
	r19.u64 = r16.u64;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// bne cr6,0x82c9dce0
	if (!cr6.eq) goto loc_82C9DCE0;
	// addi r3,r14,80
	ctx.r3.s64 = r14.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82c9b268
	sub_82C9B268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c9dca8
	if (!cr6.eq) goto loc_82C9DCA8;
loc_82C9DC9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	return;
loc_82C9DCA8:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9dce0
	if (cr6.eq) goto loc_82C9DCE0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9aad0
	sub_82C9AAD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
loc_82C9DCE0:
	// lwz r21,12(r17)
	r21.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,392(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r30,380(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// add r11,r25,r21
	r11.u64 = r25.u64 + r21.u64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// ble cr6,0x82c9dd60
	if (!cr6.gt) goto loc_82C9DD60;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,380(r31)
	PPC_STORE_U32(r31.u32 + 380, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
	// stw r6,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r6.u32);
	// cmpw cr6,r25,r30
	cr6.compare<int32_t>(r25.s32, r30.s32, xer);
	// ble cr6,0x82c9dd60
	if (!cr6.gt) goto loc_82C9DD60;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9DD60:
	// lwz r18,392(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// mr r24,r16
	r24.u64 = r16.u64;
	// li r23,1
	r23.s64 = 1;
	// li r22,2
	r22.s64 = 2;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82c9df10
	if (!cr6.gt) goto loc_82C9DF10;
	// mr r27,r16
	r27.u64 = r16.u64;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82C9DD80:
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwzx r29,r27,r11
	r29.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lwzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c9c0
	sub_82C9C9C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9df64
	if (!cr6.eq) goto loc_82C9DF64;
	// stb r23,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r23.u8);
	// addi r28,r20,1
	r28.s64 = r20.s64 + 1;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// add r9,r27,r11
	ctx.r9.u64 = r27.u64 + r11.u64;
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9de84
	if (!cr6.eq) goto loc_82C9DE84;
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9de50
	if (cr6.eq) goto loc_82C9DE50;
	// mr r11,r16
	r11.u64 = r16.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82c9de50
	if (!cr6.gt) goto loc_82C9DE50;
	// lwz r8,20(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + 20);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82C9DE1C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, xer);
	// beq cr6,0x82c9de3c
	if (cr6.eq) goto loc_82C9DE3C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// blt cr6,0x82c9de1c
	if (cr6.lt) goto loc_82C9DE1C;
	// b 0x82c9de50
	goto loc_82C9DE50;
loc_82C9DE3C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = r11.u64 + ctx.r8.u64;
	// lbz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
loc_82C9DE50:
	// addi r8,r31,416
	ctx.r8.s64 = r31.s64 + 416;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9d748
	sub_82C9D748(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9e614
	if (!cr6.eq) goto loc_82C9E614;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stw r10,432(r31)
	PPC_STORE_U32(r31.u32 + 432, ctx.r10.u32);
	// b 0x82c9deac
	goto loc_82C9DEAC;
loc_82C9DE84:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
loc_82C9DEAC:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9def8
	if (cr6.eq) goto loc_82C9DEF8;
	// lbz r11,9(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9deec
	if (cr6.eq) goto loc_82C9DEEC;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98ad0
	sub_82C98AD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9e614
	if (!cr6.eq) goto loc_82C9E614;
	// addi r20,r28,-1
	r20.s64 = r28.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// b 0x82c9df00
	goto loc_82C9DF00;
loc_82C9DEEC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// stb r22,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r22.u8);
loc_82C9DEF8:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r20,r28,1
	r20.s64 = r28.s64 + 1;
loc_82C9DF00:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmpw cr6,r24,r25
	cr6.compare<int32_t>(r24.s32, r25.s32, xer);
	// blt cr6,0x82c9dd80
	if (cr6.lt) goto loc_82C9DD80;
loc_82C9DF10:
	// stw r20,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r20.u32);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9df94
	if (cr6.eq) goto loc_82C9DF94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9df94
	if (cr6.eq) goto loc_82C9DF94;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// ble cr6,0x82c9df9c
	if (!cr6.gt) goto loc_82C9DF9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82C9DF44:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c9df8c
	if (cr6.eq) goto loc_82C9DF8C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r20
	cr6.compare<int32_t>(ctx.r10.s32, r20.s32, xer);
	// blt cr6,0x82c9df44
	if (cr6.lt) goto loc_82C9DF44;
	// b 0x82c9df9c
	goto loc_82C9DF9C;
loc_82C9DF64:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82c9df80
	if (!cr6.eq) goto loc_82C9DF80;
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// rlwinm r10,r24,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,288(r31)
	PPC_STORE_U32(r31.u32 + 288, ctx.r9.u32);
loc_82C9DF80:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	return;
loc_82C9DF8C:
	// stw r10,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// b 0x82c9df9c
	goto loc_82C9DF9C;
loc_82C9DF94:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r11.u32);
loc_82C9DF9C:
	// mr r28,r16
	r28.u64 = r16.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82c9e06c
	if (!cr6.gt) goto loc_82C9E06C;
	// rlwinm r11,r20,2,0,29
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r16
	r29.u64 = r16.u64;
	// add r30,r11,r18
	r30.u64 = r11.u64 + r18.u64;
loc_82C9DFB4:
	// lwz r11,20(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 20);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c9e05c
	if (!cr6.eq) goto loc_82C9E05C;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c9e05c
	if (cr6.eq) goto loc_82C9E05C;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9e034
	if (cr6.eq) goto loc_82C9E034;
	// lbz r9,9(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9e00c
	if (cr6.eq) goto loc_82C9E00C;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98ad0
	sub_82C98AD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9e614
	if (!cr6.eq) goto loc_82C9E614;
	// b 0x82c9e05c
	goto loc_82C9E05C;
loc_82C9E00C:
	// stb r22,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r22.u8);
	// addi r9,r20,1
	ctx.r9.s64 = r20.s64 + 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r20,r9,1
	r20.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// b 0x82c9e054
	goto loc_82C9E054;
loc_82C9E034:
	// stb r23,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r23.u8);
	// addi r9,r20,1
	ctx.r9.s64 = r20.s64 + 1;
	// addi r20,r9,1
	r20.s64 = ctx.r9.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
loc_82C9E054:
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// addi r30,r10,4
	r30.s64 = ctx.r10.s64 + 4;
loc_82C9E05C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r28,r21
	cr6.compare<int32_t>(r28.s32, r21.s32, xer);
	// blt cr6,0x82c9dfb4
	if (cr6.lt) goto loc_82C9DFB4;
loc_82C9E06C:
	// rlwinm r11,r20,2,0,29
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r16
	r21.u64 = r16.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// stwx r16,r11,r18
	PPC_STORE_U32(r11.u32 + r18.u32, r16.u32);
	// beq cr6,0x82c9e41c
	if (cr6.eq) goto loc_82C9E41C;
	// lbz r11,404(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 404);
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// sraw. r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// slw r22,r23,r8
	r22.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r8.u8 & 0x3F));
	// beq 0x82c9e100
	if (cr0.eq) goto loc_82C9E100;
loc_82C9E09C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// sraw. r9,r19,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r19.s32 < 0) & (((r19.s32 >> temp.u32) << temp.u32) != r19.s32);
	ctx.r9.s64 = r19.s32 >> temp.u32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// bne 0x82c9e09c
	if (!cr0.eq) goto loc_82C9E09C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// stb r11,404(r31)
	PPC_STORE_U8(r31.u32 + 404, r11.u8);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x82c9e0cc
	if (!cr6.lt) goto loc_82C9E0CC;
	// li r11,3
	r11.s64 = 3;
	// stb r11,404(r31)
	PPC_STORE_U8(r31.u32 + 404, r11.u8);
loc_82C9E0CC:
	// lbz r11,404(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 404);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// slw r22,r23,r11
	r22.u64 = r11.u8 & 0x20 ? 0 : (r23.u32 << (r11.u8 & 0x3F));
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// rlwinm r11,r22,1,0,30
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r22,r11
	ctx.r9.u64 = r22.u64 + r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
	// stw r3,396(r31)
	PPC_STORE_U32(r31.u32 + 396, ctx.r3.u32);
	// b 0x82c9e108
	goto loc_82C9E108;
loc_82C9E100:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c9e138
	if (!cr6.eq) goto loc_82C9E138;
loc_82C9E108:
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x82c9e138
	if (cr6.eq) goto loc_82C9E138;
	// rlwinm r11,r22,1,0,30
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r22,r11
	r11.u64 = r22.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C9E124:
	// lwz r8,396(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r9,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x82c9e124
	if (!cr0.eq) goto loc_82C9E124;
loc_82C9E138:
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// stw r24,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r24.u32);
	// ble cr6,0x82c9e450
	if (!cr6.gt) goto loc_82C9E450;
	// lis r11,15
	r11.s64 = 983040;
	// mr r23,r18
	r23.u64 = r18.u64;
	// ori r25,r11,16963
	r25.u64 = r11.u64 | 16963;
loc_82C9E154:
	// lwz r30,0(r23)
	r30.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lbz r11,-1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -1);
	// stb r16,-1(r30)
	PPC_STORE_U8(r30.u32 + -1, r16.u8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82c9e3fc
	if (!cr6.eq) goto loc_82C9E3FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r14,40
	ctx.r3.s64 = r14.s64 + 40;
	// mr r27,r16
	r27.u64 = r16.u64;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82c9e410
	if (cr6.eq) goto loc_82C9E410;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82c9e1f8
	if (!cr6.gt) goto loc_82C9E1F8;
loc_82C9E19C:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// lbzx r28,r11,r29
	r28.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// bne cr6,0x82c9e1c8
	if (!cr6.eq) goto loc_82C9E1C8;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
loc_82C9E1C8:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// mullw r9,r27,r25
	ctx.r9.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r8,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r8.u32);
	// lwz r7,20(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// xor r27,r9,r10
	r27.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// blt cr6,0x82c9e19c
	if (cr6.lt) goto loc_82C9E19C;
loc_82C9E1F8:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// bne cr6,0x82c9e1f8
	if (!cr6.eq) goto loc_82C9E1F8;
loc_82C9E208:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lbz r29,0(r30)
	r29.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9e230
	if (!cr6.eq) goto loc_82C9E230;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
loc_82C9E230:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// lwz r9,428(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mullw r8,r27,r25
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// xor r27,r8,r10
	r27.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r7.u32);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne cr6,0x82c9e208
	if (!cr6.eq) goto loc_82C9E208;
	// addi r8,r22,-1
	ctx.r8.s64 = r22.s64 + -1;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// and r29,r8,r27
	r29.u64 = ctx.r8.u64 & r27.u64;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, xer);
	// bne cr6,0x82c9e354
	if (!cr6.eq) goto loc_82C9E354;
loc_82C9E28C:
	// add r10,r11,r5
	ctx.r10.u64 = r11.u64 + ctx.r5.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82c9e2f0
	if (!cr6.eq) goto loc_82C9E2F0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bne cr6,0x82c9e2e4
	if (!cr6.eq) goto loc_82C9E2E4;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82C9E2C0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c9e2e4
	if (cr6.eq) goto loc_82C9E2E4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// beq cr6,0x82c9e2c0
	if (cr6.eq) goto loc_82C9E2C0;
loc_82C9E2E4:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9df80
	if (cr6.eq) goto loc_82C9DF80;
loc_82C9E2F0:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9e31c
	if (!cr6.eq) goto loc_82C9E31C;
	// lbz r11,404(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 404);
	// andc r10,r27,r8
	ctx.r10.u64 = r27.u64 & ~ctx.r8.u64;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r6,r11,1
	ctx.r6.u64 = r11.u64 | 1;
loc_82C9E31C:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82c9e334
	if (!cr6.lt) goto loc_82C9E334;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// add r29,r11,r22
	r29.u64 = r11.u64 + r22.u64;
	// b 0x82c9e338
	goto loc_82C9E338;
loc_82C9E334:
	// subf r29,r11,r29
	r29.s64 = r29.s64 - r11.s64;
loc_82C9E338:
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + r11.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// beq cr6,0x82c9e28c
	if (cr6.eq) goto loc_82C9E28C;
loc_82C9E354:
	// lbz r11,237(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 237);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9e3bc
	if (cr6.eq) goto loc_82C9E3BC;
	// lbz r11,472(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 472);
	// stb r11,-1(r7)
	PPC_STORE_U8(ctx.r7.u32 + -1, r11.u8);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82C9E370:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9e394
	if (!cr6.eq) goto loc_82C9E394;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
loc_82C9E394:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r7.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c9e370
	if (!cr6.eq) goto loc_82C9E370;
loc_82C9E3BC:
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// stw r7,432(r31)
	PPC_STORE_U32(r31.u32 + 432, ctx.r7.u32);
	// addic. r19,r19,-1
	xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// add r8,r29,r11
	ctx.r8.u64 = r29.u64 + r11.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// lwz r7,396(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// stwx r24,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, r24.u32);
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r27,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r27.u32);
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// beq 0x82c9e41c
	if (cr0.eq) goto loc_82C9E41C;
loc_82C9E3FC:
	// addi r21,r21,2
	r21.s64 = r21.s64 + 2;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// cmpw cr6,r21,r20
	cr6.compare<int32_t>(r21.s32, r20.s32, xer);
	// blt cr6,0x82c9e154
	if (cr6.lt) goto loc_82C9E154;
	// b 0x82c9e450
	goto loc_82C9E450;
loc_82C9E410:
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	return;
loc_82C9E41C:
	// cmpw cr6,r21,r20
	cr6.compare<int32_t>(r21.s32, r20.s32, xer);
	// bge cr6,0x82c9e450
	if (!cr6.lt) goto loc_82C9E450;
	// subf r10,r21,r20
	ctx.r10.s64 = r20.s64 - r21.s64;
	// rlwinm r11,r21,2,0,29
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r10,r11,r18
	ctx.r10.u64 = r11.u64 + r18.u64;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82C9E43C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r16,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, r16.u8);
	// bne 0x82c9e43c
	if (!cr0.eq) goto loc_82C9E43C;
loc_82C9E450:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9e474
	if (cr6.eq) goto loc_82C9E474;
loc_82C9E45C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r16,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, r16.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9e45c
	if (!cr6.eq) goto loc_82C9E45C;
loc_82C9E474:
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9e610
	if (cr6.eq) goto loc_82C9E610;
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9e4b4
	if (cr6.eq) goto loc_82C9E4B4;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9e410
	if (cr6.eq) goto loc_82C9E410;
	// lwz r24,284(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,0(r24)
	r25.u64 = PPC_LOAD_U32(r24.u32 + 0);
loc_82C9E4A0:
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// bne cr6,0x82c9e4a0
	if (!cr6.eq) goto loc_82C9E4A0;
	// b 0x82c9e4cc
	goto loc_82C9E4CC;
loc_82C9E4B4:
	// lwz r30,156(r14)
	r30.u64 = PPC_LOAD_U32(r14.u32 + 156);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9e610
	if (cr6.eq) goto loc_82C9E610;
	// lwz r11,284(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r24,r11
	r24.u64 = r11.u64;
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82C9E4CC:
	// lbz r11,237(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 237);
	// mr r26,r16
	r26.u64 = r16.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9e500
	if (cr6.eq) goto loc_82C9E500;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9e500
	if (cr6.eq) goto loc_82C9E500;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82C9E4F0:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r26.u32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9e4f0
	if (!cr6.eq) goto loc_82C9E4F0;
loc_82C9E500:
	// stw r25,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r25.u32);
	// mr r28,r16
	r28.u64 = r16.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,16(r24)
	PPC_STORE_U32(r24.u32 + 16, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r26,20(r24)
	PPC_STORE_U32(r24.u32 + 20, r26.u32);
	// stw r9,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r9.u32);
loc_82C9E520:
	// lbzx r11,r25,r28
	r11.u64 = PPC_LOAD_U8(r25.u32 + r28.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9e520
	if (!cr6.eq) goto loc_82C9E520;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82c9e5b8
	if (!cr6.gt) goto loc_82C9E5B8;
	// addi r27,r11,24
	r27.s64 = r11.s64 + 24;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c9dc9c
	if (cr6.eq) goto loc_82C9DC9C;
	// stw r27,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r27.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9e5a4
	if (cr6.eq) goto loc_82C9E5A4;
loc_82C9E584:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9e598
	if (!cr6.eq) goto loc_82C9E598;
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
loc_82C9E598:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9e584
	if (!cr6.eq) goto loc_82C9E584;
loc_82C9E5A4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
loc_82C9E5B8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82c9e608
	if (cr6.eq) goto loc_82C9E608;
	// lbz r11,472(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 472);
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9e5f4
	if (cr6.eq) goto loc_82C9E5F4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
loc_82C9E5F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82C9E608:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_82C9E610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9E614:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_82C9E620"))) PPC_WEAK_FUNC(sub_82C9E620);
PPC_FUNC_IMPL(__imp__sub_82C9E620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9e678
	if (cr6.eq) goto loc_82C9E678;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9e664
	if (cr6.eq) goto loc_82C9E664;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9e650
	if (!cr6.eq) goto loc_82C9E650;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9e650
	if (!cr6.eq) goto loc_82C9E650;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	cr6.compare<int32_t>(r27.s32, 15, xer);
	// beq cr6,0x82c9e710
	if (cr6.eq) goto loc_82C9E710;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(r27.s32, 18, xer);
	// beq cr6,0x82c9e6d8
	if (cr6.eq) goto loc_82C9E6D8;
	// cmpwi cr6,r27,27
	cr6.compare<int32_t>(r27.s32, 27, xer);
	// bne cr6,0x82c9e758
	if (!cr6.eq) goto loc_82C9E758;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r11,-18696
	ctx.r9.s64 = r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9E6D8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3228
	r30.s64 = r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9e71c
	if (cr6.eq) goto loc_82C9E71C;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-12480
	ctx.r10.s64 = r11.s64 + -12480;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82C9E710:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9E71C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9e758
	if (cr6.eq) goto loc_82C9E758;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r10,r11,-10008
	ctx.r10.s64 = r11.s64 + -10008;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9E758:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9e778
	if (!cr6.eq) goto loc_82C9E778;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(r27.s32, 28, xer);
	// bne cr6,0x82c9e778
	if (!cr6.eq) goto loc_82C9E778;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9E778:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82C9E790"))) PPC_WEAK_FUNC(sub_82C9E790);
PPC_FUNC_IMPL(__imp__sub_82C9E790) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	cr6.compare<int32_t>(r27.s32, 15, xer);
	// beq cr6,0x82c9e7f8
	if (cr6.eq) goto loc_82C9E7F8;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(r27.s32, 18, xer);
	// bne cr6,0x82c9e840
	if (!cr6.eq) goto loc_82C9E840;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3228
	r30.s64 = r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9e804
	if (cr6.eq) goto loc_82C9E804;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-12384
	ctx.r10.s64 = r11.s64 + -12384;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82C9E7F8:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9E804:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9e840
	if (cr6.eq) goto loc_82C9E840;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r10,r11,-9912
	ctx.r10.s64 = r11.s64 + -9912;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9E840:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9e860
	if (!cr6.eq) goto loc_82C9E860;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(r27.s32, 28, xer);
	// bne cr6,0x82c9e860
	if (!cr6.eq) goto loc_82C9E860;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C9E860:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82C9E878"))) PPC_WEAK_FUNC(sub_82C9E878);
PPC_FUNC_IMPL(__imp__sub_82C9E878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// addi r11,r4,-15
	r11.s64 = ctx.r4.s64 + -15;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bgt cr6,0x82c9e928
	if (cr6.gt) goto loc_82C9E928;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-5984
	r12.s64 = r12.s64 + -5984;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82C9E90C;
	case 1:
		goto loc_82C9E928;
	case 2:
		goto loc_82C9E928;
	case 3:
		goto loc_82C9E914;
	case 4:
		goto loc_82C9E914;
	case 5:
		goto loc_82C9E928;
	case 6:
		goto loc_82C9E928;
	case 7:
		goto loc_82C9E928;
	case 8:
		goto loc_82C9E928;
	case 9:
		goto loc_82C9E928;
	case 10:
		goto loc_82C9E928;
	case 11:
		goto loc_82C9E928;
	case 12:
		goto loc_82C9E928;
	case 13:
		goto loc_82C9E928;
	case 14:
		goto loc_82C9E928;
	case 15:
		goto loc_82C9E928;
	case 16:
		goto loc_82C9E928;
	case 17:
		goto loc_82C9E928;
	case 18:
		goto loc_82C9E928;
	case 19:
		goto loc_82C9E928;
	case 20:
		goto loc_82C9E928;
	case 21:
		goto loc_82C9E928;
	case 22:
		goto loc_82C9E928;
	case 23:
		goto loc_82C9E928;
	case 24:
		goto loc_82C9E928;
	case 25:
		goto loc_82C9E928;
	case 26:
		goto loc_82C9E914;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-5876(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5876);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5868(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5868);
	// lwz r22,-5868(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5868);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5848(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5848);
	// lwz r22,-5868(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5868);
loc_82C9E90C:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_82C9E914:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r9,r11,-9816
	ctx.r9.s64 = r11.s64 + -9816;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9E928:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9e944
	if (!cr6.eq) goto loc_82C9E944;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9e944
	if (!cr6.eq) goto loc_82C9E944;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82C9E944:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9e9b0
	if (cr6.eq) goto loc_82C9E9B0;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82c9e99c
	if (cr6.eq) goto loc_82C9E99C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9e988
	if (!cr6.eq) goto loc_82C9E988;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9e988
	if (!cr6.eq) goto loc_82C9E988;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9E9B0:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
	// addi r10,r4,-15
	ctx.r10.s64 = ctx.r4.s64 + -15;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,21
	cr6.compare<uint32_t>(ctx.r10.u32, 21, xer);
	// bgt cr6,0x82c9ea8c
	if (cr6.gt) goto loc_82C9EA8C;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-5664
	r12.s64 = r12.s64 + -5664;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C9EA38;
	case 1:
		goto loc_82C9EA8C;
	case 2:
		goto loc_82C9EA8C;
	case 3:
		goto loc_82C9EA8C;
	case 4:
		goto loc_82C9EA8C;
	case 5:
		goto loc_82C9EA8C;
	case 6:
		goto loc_82C9EA78;
	case 7:
		goto loc_82C9EA8C;
	case 8:
		goto loc_82C9EA8C;
	case 9:
		goto loc_82C9EA40;
	case 10:
		goto loc_82C9EA8C;
	case 11:
		goto loc_82C9EA8C;
	case 12:
		goto loc_82C9EA8C;
	case 13:
		goto loc_82C9EA8C;
	case 14:
		goto loc_82C9EA8C;
	case 15:
		goto loc_82C9EA8C;
	case 16:
		goto loc_82C9EA8C;
	case 17:
		goto loc_82C9EA8C;
	case 18:
		goto loc_82C9EA8C;
	case 19:
		goto loc_82C9EA8C;
	case 20:
		goto loc_82C9EA8C;
	case 21:
		goto loc_82C9EA5C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-5576(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5576);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5512(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5512);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5568(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5568);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5492);
	// lwz r22,-5540(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5540);
loc_82C9EA38:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
loc_82C9EA40:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// li r3,45
	ctx.r3.s64 = 45;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82C9EA5C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r8,r10,-18696
	ctx.r8.s64 = ctx.r10.s64 + -18696;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// li r3,46
	ctx.r3.s64 = 46;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82C9EA78:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r9,r10,-9576
	ctx.r9.s64 = ctx.r10.s64 + -9576;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9EA8C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9eaa8
	if (!cr6.eq) goto loc_82C9EAA8;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9eaa8
	if (!cr6.eq) goto loc_82C9EAA8;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9EAC0"))) PPC_WEAK_FUNC(sub_82C9EAC0);
PPC_FUNC_IMPL(__imp__sub_82C9EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2bb4
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// lwz r20,356(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82c9eb04
	if (!cr6.eq) goto loc_82C9EB04;
	// addi r22,r31,288
	r22.s64 = r31.s64 + 288;
	// addi r23,r31,292
	r23.s64 = r31.s64 + 292;
	// b 0x82c9eb0c
	goto loc_82C9EB0C;
loc_82C9EB04:
	// lwz r22,300(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r23,r22,4
	r23.s64 = r22.s64 + 4;
loc_82C9EB0C:
	// stw r6,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r6.u32);
	// li r19,1
	r19.s64 = 1;
	// li r24,0
	r24.s64 = 0;
	// li r17,10
	r17.s64 = 10;
loc_82C9EB1C:
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r3,5
	r11.s64 = ctx.r3.s64 + 5;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// stw r5,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r5.u32);
	// bgt cr6,0x82c9f514
	if (cr6.gt) goto loc_82C9F514;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-5272
	r12.s64 = r12.s64 + -5272;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2336);
	// lwz r22,-2572(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2572);
	// lwz r22,-2716(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2716);
	// lwz r22,-2488(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2488);
	// lwz r22,-2512(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2512);
	// lwz r22,-2528(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2528);
	// lwz r22,-4732(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4732);
	// lwz r22,-4732(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4732);
	// lwz r22,-4220(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4220);
	// lwz r22,-4220(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4220);
	// lwz r22,-3820(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3820);
	// lwz r22,-3092(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3092);
	// lwz r22,-3260(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3260);
	// lwz r22,-3220(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3220);
	// lwz r22,-5196(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5196);
	// lwz r22,-3332(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3332);
	// lwz r22,-2860(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2860);
	// lwz r22,-2348(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2348);
	// lwz r22,-2828(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2828);
loc_82C9EBB4:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - r11.s64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9ec1c
	if (cr6.eq) goto loc_82C9EC1C;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ec08
	if (cr6.eq) goto loc_82C9EC08;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9EC08:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f534
	if (cr6.eq) goto loc_82C9F534;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82c9f524
	goto loc_82C9F524;
loc_82C9EC1C:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r20,80
	ctx.r3.s64 = r20.s64 + 80;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - r11.s64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c9f6ac
	if (cr6.eq) goto loc_82C9F6AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// lwz r11,96(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 96);
	// lbz r10,129(r20)
	ctx.r10.u64 = PPC_LOAD_U8(r20.u32 + 129);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r20)
	PPC_STORE_U32(r20.u32 + 92, r11.u32);
	// beq cr6,0x82c9eca8
	if (cr6.eq) goto loc_82C9ECA8;
	// lbz r11,130(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9eca8
	if (!cr6.eq) goto loc_82C9ECA8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c9ecbc
	if (!cr6.eq) goto loc_82C9ECBC;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ec08
	if (cr6.eq) goto loc_82C9EC08;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ECA8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9f660
	if (cr6.eq) goto loc_82C9F660;
	// lbz r11,34(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f66c
	if (cr6.eq) goto loc_82C9F66C;
loc_82C9ECBC:
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9f678
	if (!cr6.eq) goto loc_82C9F678;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9f684
	if (!cr6.eq) goto loc_82C9F684;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ed2c
	if (cr6.eq) goto loc_82C9ED2C;
	// lbz r11,308(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9ed10
	if (!cr6.eq) goto loc_82C9ED10;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ec08
	if (cr6.eq) goto loc_82C9EC08;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ED10:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98df8
	sub_82C98DF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9f7bc
	if (!cr6.eq) goto loc_82C9F7BC;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ED2C:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ec08
	if (cr6.eq) goto loc_82C9EC08;
	// stb r19,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r19.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9abf8
	sub_82C9ABF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r24,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r24.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9f6ac
	if (cr6.eq) goto loc_82C9F6AC;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9f690
	if (cr6.eq) goto loc_82C9F690;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9ED84:
	// lwz r30,368(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9ed9c
	if (cr6.eq) goto loc_82C9ED9C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r11.u32);
	// b 0x82c9eddc
	goto loc_82C9EDDC;
loc_82C9ED9C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,48
	ctx.r3.s64 = 48;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9f6ac
	if (cr6.eq) goto loc_82C9F6AC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,32
	ctx.r3.s64 = 32;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f69c
	if (cr6.eq) goto loc_82C9F69C;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
loc_82C9EDDC:
	// stw r24,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r24.u32);
	// addi r25,r30,44
	r25.s64 = r30.s64 + 44;
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r24.u32);
	// stw r24,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r24.u32);
	// lwz r10,68(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// subf r27,r8,r7
	r27.s64 = ctx.r7.s64 - ctx.r8.s64;
	// beq cr6,0x82c9eef4
	if (cr6.eq) goto loc_82C9EEF4;
loc_82C9EE7C:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r9,r3,r11
	ctx.r9.s64 = r11.s64 - ctx.r3.s64;
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f6ac
	if (cr6.eq) goto loc_82C9F6AC;
	// add r11,r3,r26
	r11.u64 = ctx.r3.u64 + r26.u64;
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + r27.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// lwz r9,60(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// subf r27,r7,r6
	r27.s64 = ctx.r6.s64 - ctx.r7.s64;
	// bne cr6,0x82c9ee7c
	if (!cr6.eq) goto loc_82C9EE7C;
loc_82C9EEF4:
	// stw r27,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r27.u32);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r24,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r24.u8);
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c9dc30
	sub_82C9DC30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9f7bc
	if (!cr6.eq) goto loc_82C9F7BC;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ef58
	if (cr6.eq) goto loc_82C9EF58;
	// lwz r5,392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9EF58:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9ef78
	if (cr6.eq) goto loc_82C9EF78;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9EF78:
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9EF84:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// mr r29,r19
	r29.u64 = r19.u64;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r27,r31,416
	r27.s64 = r31.s64 + 416;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r6,r3,r30
	ctx.r6.u64 = ctx.r3.u64 + r30.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f6ac
	if (cr6.eq) goto loc_82C9F6AC;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// bl 0x82c9dc30
	sub_82C9DC30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9f7bc
	if (!cr6.eq) goto loc_82C9F7BC;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,432(r31)
	PPC_STORE_U32(r31.u32 + 432, ctx.r10.u32);
	// beq cr6,0x82c9f028
	if (cr6.eq) goto loc_82C9F028;
	// lwz r5,392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82C9F028:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f060
	if (cr6.eq) goto loc_82C9F060;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f048
	if (cr6.eq) goto loc_82C9F048;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_82C9F048:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82C9F060:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f08c
	if (cr6.eq) goto loc_82C9F08C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f08c
	if (cr6.eq) goto loc_82C9F08C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9F08C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9f0ec
	if (cr6.eq) goto loc_82C9F0EC;
loc_82C9F0A0:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f0c4
	if (cr6.eq) goto loc_82C9F0C4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9F0C4:
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r29,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r29.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bne cr6,0x82c9f0a0
	if (!cr6.eq) goto loc_82C9F0A0;
loc_82C9F0EC:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9f534
	if (!cr6.eq) goto loc_82C9F534;
loc_82C9F0F8:
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9d500
	sub_82C9D500(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F114:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(r11.s32, r15.s32, xer);
	// beq cr6,0x82c9f614
	if (cr6.eq) goto loc_82C9F614;
	// lwz r30,364(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,364(r31)
	PPC_STORE_U32(r31.u32 + 364, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r30.u32);
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// bne cr6,0x82c9f6b8
	if (!cr6.eq) goto loc_82C9F6B8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f1a0
	if (cr6.eq) goto loc_82C9F1A0;
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
loc_82C9F180:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82c9f1a0
	if (!cr0.eq) goto loc_82C9F1A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82c9f180
	if (!cr6.eq) goto loc_82C9F180;
loc_82C9F1A0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c9f6b8
	if (!cr6.eq) goto loc_82C9F6B8;
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r9.u32);
	// beq cr6,0x82c9f26c
	if (cr6.eq) goto loc_82C9F26C;
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f254
	if (cr6.eq) goto loc_82C9F254;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9f254
	if (cr6.eq) goto loc_82C9F254;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// beq cr6,0x82c9f208
	if (cr6.eq) goto loc_82C9F208;
loc_82C9F1F0:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9f1f0
	if (!cr6.eq) goto loc_82C9F1F0;
loc_82C9F208:
	// lbz r9,237(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 237);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9f250
	if (cr6.eq) goto loc_82C9F250;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9f250
	if (cr6.eq) goto loc_82C9F250;
	// lbz r9,472(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 472);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9f250
	if (cr6.eq) goto loc_82C9F250;
loc_82C9F238:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c9f238
	if (!cr6.eq) goto loc_82C9F238;
loc_82C9F250:
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
loc_82C9F254:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f28c
	goto loc_82C9F28C;
loc_82C9F26C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f28c
	if (cr6.eq) goto loc_82C9F28C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9F28C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f2ec
	if (cr6.eq) goto loc_82C9F2EC;
loc_82C9F298:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r29,44(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f2bc
	if (cr6.eq) goto loc_82C9F2BC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9F2BC:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
	// lwz r9,376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// stw r9,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r29,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r29.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82c9f298
	if (!cr6.eq) goto loc_82C9F298;
loc_82C9F2EC:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c9f0f8
	if (cr6.eq) goto loc_82C9F0F8;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F2FC:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c9f6c8
	if (cr6.lt) goto loc_82C9F6C8;
	// lwz r30,60(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c9ec08
	if (cr6.eq) goto loc_82C9EC08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c97790
	sub_82C97790(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F344:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f514
	if (cr6.eq) goto loc_82C9F514;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r17,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r17.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F36C:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f388
	if (cr6.eq) goto loc_82C9F388;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f3a8
	goto loc_82C9F3A8;
loc_82C9F388:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f3a8
	if (cr6.eq) goto loc_82C9F3A8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9F3A8:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9a490
	sub_82C9A490(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9f7bc
	if (!cr6.eq) goto loc_82C9F7BC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9f534
	if (!cr6.eq) goto loc_82C9F534;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-17840
	ctx.r10.s64 = r11.s64 + -17840;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F3EC:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f514
	if (cr6.eq) goto loc_82C9F514;
	// lbz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9f4bc
	if (!cr6.eq) goto loc_82C9F4BC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c9f534
	if (cr6.eq) goto loc_82C9F534;
loc_82C9F45C:
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c9f45c
	if (!cr6.eq) goto loc_82C9F45C;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F4BC:
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F4D4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c810
	sub_82C9C810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9f6ac
	if (cr6.eq) goto loc_82C9F6AC;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F4F4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c918
	sub_82C9C918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9f6ac
	if (cr6.eq) goto loc_82C9F6AC;
	// b 0x82c9f534
	goto loc_82C9F534;
loc_82C9F514:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f534
	if (cr6.eq) goto loc_82C9F534;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82C9F524:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9F534:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82c9f7b8
	if (cr6.eq) goto loc_82C9F7B8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82c9eb1c
	if (!cr6.eq) goto loc_82C9EB1C;
	// stw r10,0(r16)
	PPC_STORE_U32(r16.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F564:
	// clrlwi r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f584
	if (cr6.eq) goto loc_82C9F584;
loc_82C9F570:
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F584:
	// stw r21,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r21.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f5b0
	if (cr6.eq) goto loc_82C9F5B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r17,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r17.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f5d0
	goto loc_82C9F5D0;
loc_82C9F5B0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f5d0
	if (cr6.eq) goto loc_82C9F5D0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9F5D0:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// beq cr6,0x82c9f790
	if (cr6.eq) goto loc_82C9F790;
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(r11.s32, r15.s32, xer);
	// bne cr6,0x82c9f614
	if (!cr6.eq) goto loc_82C9F614;
loc_82C9F5E4:
	// stw r21,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F5F4:
	// clrlwi r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9f570
	if (!cr6.eq) goto loc_82C9F570;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// ble cr6,0x82c9f790
	if (!cr6.gt) goto loc_82C9F790;
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(r11.s32, r15.s32, xer);
	// beq cr6,0x82c9f570
	if (cr6.eq) goto loc_82C9F570;
loc_82C9F614:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F620:
	// stw r5,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r5.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F630:
	// clrlwi r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9f570
	if (!cr6.eq) goto loc_82C9F570;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F648:
	// clrlwi r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9f570
	if (!cr6.eq) goto loc_82C9F570;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F660:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F66C:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F678:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F684:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F690:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F69C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9F6AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F6B8:
	// stw r29,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r29.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F6C8:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F6D4:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F6E0:
	// clrlwi r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9f570
	if (!cr6.eq) goto loc_82C9F570;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f764
	if (cr6.eq) goto loc_82C9F764;
	// lbz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9f74c
	if (!cr6.eq) goto loc_82C9F74C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// subf r5,r4,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r4.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f784
	goto loc_82C9F784;
loc_82C9F74C:
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r5,r4,r21
	ctx.r5.s64 = r21.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c9f784
	goto loc_82C9F784;
loc_82C9F764:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9f784
	if (cr6.eq) goto loc_82C9F784;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82C9F784:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// bne cr6,0x82c9f79c
	if (!cr6.eq) goto loc_82C9F79C;
	// stw r21,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r21.u32);
loc_82C9F790:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F79C:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(r11.s32, r15.s32, xer);
	// beq cr6,0x82c9f5e4
	if (cr6.eq) goto loc_82C9F5E4;
	// stw r21,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r21.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
loc_82C9F7B8:
	// li r3,35
	ctx.r3.s64 = 35;
loc_82C9F7BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c04
	return;
}

__attribute__((alias("__imp__sub_82C9F7C8"))) PPC_WEAK_FUNC(sub_82C9F7C8);
PPC_FUNC_IMPL(__imp__sub_82C9F7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9f820
	if (cr6.eq) goto loc_82C9F820;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82c9f80c
	if (cr6.eq) goto loc_82C9F80C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9f7f8
	if (!cr6.eq) goto loc_82C9F7F8;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9f7f8
	if (!cr6.eq) goto loc_82C9F7F8;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9f880
	if (cr6.eq) goto loc_82C9F880;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82c9f86c
	if (cr6.eq) goto loc_82C9F86C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9f858
	if (!cr6.eq) goto loc_82C9F858;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9f858
	if (!cr6.eq) goto loc_82C9F858;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9f8e0
	if (cr6.eq) goto loc_82C9F8E0;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82c9f8cc
	if (cr6.eq) goto loc_82C9F8CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9f8b8
	if (!cr6.eq) goto loc_82C9F8B8;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9f8b8
	if (!cr6.eq) goto loc_82C9F8B8;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82c9f938
	if (cr6.eq) goto loc_82C9F938;
	// cmpwi cr6,r4,23
	cr6.compare<int32_t>(ctx.r4.s32, 23, xer);
	// beq cr6,0x82c9f92c
	if (cr6.eq) goto loc_82C9F92C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9f918
	if (!cr6.eq) goto loc_82C9F918;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82c9f918
	if (!cr6.eq) goto loc_82C9F918;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82C9F92C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-5800
	ctx.r9.s64 = ctx.r10.s64 + -5800;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82C9F938:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9F940"))) PPC_WEAK_FUNC(sub_82C9F940);
PPC_FUNC_IMPL(__imp__sub_82C9F940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// addi r11,r30,-15
	r11.s64 = r30.s64 + -15;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bgt cr6,0x82c9fa90
	if (cr6.gt) goto loc_82C9FA90;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-1660
	r12.s64 = r12.s64 + -1660;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1552);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1456(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1456);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1544(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1544);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1484(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1484);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1440(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1440);
	// lwz r22,-1424(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1424);
	// lwz r22,-1408(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1408);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1392(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1392);
	// lwz r22,-1456(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1456);
loc_82C9F9F0:
	// li r3,39
	ctx.r3.s64 = 39;
	// b 0x82c9fabc
	goto loc_82C9FABC;
loc_82C9F9F8:
	// lwz r11,68(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// addi r6,r9,3220
	ctx.r6.s64 = ctx.r9.s64 + 3220;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c9fa90
	if (cr6.eq) goto loc_82C9FA90;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,43
	ctx.r3.s64 = 43;
	// addi r10,r11,-5704
	ctx.r10.s64 = r11.s64 + -5704;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA34:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-9472
	ctx.r9.s64 = r11.s64 + -9472;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x82c9fabc
	goto loc_82C9FABC;
loc_82C9FA50:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r10,r11,-11648
	ctx.r10.s64 = r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA60:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,53
	ctx.r3.s64 = 53;
	// addi r10,r11,-11648
	ctx.r10.s64 = r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA70:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r10,r11,-11648
	ctx.r10.s64 = r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA80:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r10,r11,-11648
	ctx.r10.s64 = r11.s64 + -11648;
	// b 0x82c9fab8
	goto loc_82C9FAB8;
loc_82C9FA90:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c9faac
	if (!cr6.eq) goto loc_82C9FAAC;
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(r30.s32, 28, xer);
	// bne cr6,0x82c9faac
	if (!cr6.eq) goto loc_82C9FAAC;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82c9fabc
	goto loc_82C9FABC;
loc_82C9FAAC:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
loc_82C9FAB8:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82C9FABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9FAD8"))) PPC_WEAK_FUNC(sub_82C9FAD8);
PPC_FUNC_IMPL(__imp__sub_82C9FAD8) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,484(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c9eac0
	sub_82C9EAC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82c9fb38
	if (!cr6.eq) goto loc_82C9FB38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98970
	sub_82C98970(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9fb3c
	if (cr6.eq) goto loc_82C9FB3C;
loc_82C9FB38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82C9FB3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9FB58"))) PPC_WEAK_FUNC(sub_82C9FB58);
PPC_FUNC_IMPL(__imp__sub_82C9FB58) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r29.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r27,356(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// bne cr6,0x82c9fba4
	if (!cr6.eq) goto loc_82C9FBA4;
	// addi r19,r31,288
	r19.s64 = r31.s64 + 288;
	// addi r22,r31,292
	r22.s64 = r31.s64 + 292;
	// b 0x82c9fbac
	goto loc_82C9FBAC;
loc_82C9FBA4:
	// lwz r19,300(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r22,r19,4
	r22.s64 = r19.s64 + 4;
loc_82C9FBAC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r21,1
	r21.s64 = 1;
	// li r25,0
	r25.s64 = 0;
	// li r16,41
	r16.s64 = 41;
	// addi r20,r11,3060
	r20.s64 = r11.s64 + 3060;
	// li r15,3
	r15.s64 = 3;
	// li r18,4
	r18.s64 = 4;
loc_82C9FBC8:
	// stw r24,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r24.u32);
	// mr r26,r21
	r26.u64 = r21.u64;
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// bgt cr6,0x82c9fc34
	if (cr6.gt) goto loc_82C9FC34;
	// clrlwi r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9fbf4
	if (cr6.eq) goto loc_82C9FBF4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82ca11d8
	if (!cr6.eq) goto loc_82CA11D8;
loc_82C9FBF4:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82c9fc2c
	if (cr6.gt) goto loc_82C9FC2C;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-1000
	r12.s64 = r12.s64 + -1000;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4628);
	// lwz r22,-980(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -980);
	// lwz r22,4616(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4616);
	// lwz r22,4604(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4604);
	// lwz r22,4584(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4584);
loc_82C9FC2C:
	// stw r17,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r17.u32);
	// neg r30,r30
	r30.s64 = -r30.s64;
loc_82C9FC34:
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bgt cr6,0x82ca0c04
	if (cr6.gt) goto loc_82CA0C04;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,-900
	r12.s64 = r12.s64 + -900;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4976);
	// lwz r22,4520(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4520);
	// lwz r22,-652(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -652);
	// lwz r22,4764(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4764);
	// lwz r22,4532(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4532);
	// lwz r22,-616(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -616);
	// lwz r22,1332(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1332);
	// lwz r22,-456(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -456);
	// lwz r22,-548(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -548);
	// lwz r22,-184(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -184);
	// lwz r22,1928(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1928);
	// lwz r22,2144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	// lwz r22,4540(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4540);
	// lwz r22,1136(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// lwz r22,1516(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// lwz r22,-312(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -312);
	// lwz r22,1620(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1620);
	// lwz r22,1716(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// lwz r22,4560(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4560);
	// lwz r22,2320(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2320);
	// lwz r22,2488(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2488);
	// lwz r22,2600(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2600);
	// lwz r22,2384(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2384);
	// lwz r22,144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r22,192(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r22,204(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r22,216(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// lwz r22,224(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// lwz r22,232(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r22,240(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// lwz r22,248(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// lwz r22,256(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// lwz r22,284(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// lwz r22,284(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// lwz r22,264(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// lwz r22,100(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r22,488(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// lwz r22,488(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// lwz r22,784(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// lwz r22,784(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// lwz r22,3060(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// lwz r22,3744(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3744);
	// lwz r22,3804(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3804);
	// lwz r22,3804(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3804);
	// lwz r22,3932(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3932);
	// lwz r22,2780(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2780);
	// lwz r22,4184(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4184);
	// lwz r22,4200(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4200);
	// lwz r22,4192(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4192);
	// lwz r22,4208(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4208);
	// lwz r22,3184(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3184);
	// lwz r22,3020(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3020);
	// lwz r22,3988(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3988);
	// lwz r22,4004(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4004);
	// lwz r22,3996(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3996);
	// lwz r22,4012(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4012);
	// lwz r22,4456(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// lwz r22,4488(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4488);
	// lwz r22,-492(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// lwz r22,2676(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2676);
	// lwz r22,3312(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3312);
	// lwz r22,3312(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3312);
loc_82C9FD74:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9bbc0
	sub_82C9BBC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca13e4
	if (!cr6.eq) goto loc_82CA13E4;
	// lwz r23,144(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82C9FD98:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9fdd4
	if (cr6.eq) goto loc_82C9FDD4;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(r31.u32 + 320, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mr r26,r25
	r26.u64 = r25.u64;
	// stw r25,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r25.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
loc_82C9FDD4:
	// stw r25,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82C9FDDC:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r25.u32);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82C9FE14:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9bbc0
	sub_82C9BBC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca13e4
	if (!cr6.eq) goto loc_82CA13E4;
	// lwz r23,144(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82C9FE38:
	// stb r25,489(r31)
	PPC_STORE_U8(r31.u32 + 489, r25.u8);
	// addi r4,r20,-88
	ctx.r4.s64 = r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = r27.s64 + 132;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// stb r21,129(r27)
	PPC_STORE_U8(r27.u32 + 129, r21.u8);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c9fec8
	if (cr6.eq) goto loc_82C9FEC8;
	// lwz r11,56(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1284
	if (cr6.eq) goto loc_82CA1284;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// bl 0x82c99200
	sub_82C99200(ctx, base);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mr r26,r25
	r26.u64 = r25.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// b 0x82c9feec
	goto loc_82C9FEEC;
loc_82C9FEC8:
	// lwz r11,56(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1284
	if (cr6.eq) goto loc_82CA1284;
loc_82C9FEEC:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// bl 0x82c99200
	sub_82C99200(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r3,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r3.u32);
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// stw r10,96(r27)
	PPC_STORE_U32(r27.u32 + 96, ctx.r10.u32);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82C9FF48:
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9ff7c
	if (cr6.eq) goto loc_82C9FF7C;
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82C9FF7C:
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c9ff94
	if (!cr6.eq) goto loc_82C9FF94;
	// lbz r11,489(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 489);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0048
	if (cr6.eq) goto loc_82CA0048;
loc_82C9FF94:
	// stb r21,129(r27)
	PPC_STORE_U8(r27.u32 + 129, r21.u8);
	// lwz r11,492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca0044
	if (cr6.eq) goto loc_82CA0044;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0044
	if (cr6.eq) goto loc_82CA0044;
	// addi r4,r20,-88
	ctx.r4.s64 = r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = r27.s64 + 132;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lbz r10,489(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 489);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9ffe0
	if (cr6.eq) goto loc_82C9FFE0;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82C9FFE0:
	// stb r25,131(r27)
	PPC_STORE_U8(r27.u32 + 131, r25.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1290
	if (cr6.eq) goto loc_82CA1290;
	// lbz r11,131(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 131);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0044
	if (cr6.eq) goto loc_82CA0044;
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca0044
	if (!cr6.eq) goto loc_82CA0044;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0044
	if (cr6.eq) goto loc_82CA0044;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca0d34
	if (cr6.eq) goto loc_82CA0D34;
loc_82CA0044:
	// stb r25,489(r31)
	PPC_STORE_U8(r31.u32 + 489, r25.u8);
loc_82CA0048:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0064:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9b388
	sub_82C9B388(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca0108
	if (!cr6.eq) goto loc_82CA0108;
loc_82CA0084:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA0090:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c9c0
	sub_82C9C9C0(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// stb r25,352(r31)
	PPC_STORE_U8(r31.u32 + 352, r25.u8);
	// stw r25,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r25.u32);
	// stb r25,353(r31)
	PPC_STORE_U8(r31.u32 + 353, r25.u8);
	// b 0x82ca0108
	goto loc_82CA0108;
loc_82CA00C0:
	// addi r11,r20,-84
	r11.s64 = r20.s64 + -84;
	// stb r21,352(r31)
	PPC_STORE_U8(r31.u32 + 352, r21.u8);
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00CC:
	// addi r11,r20,-76
	r11.s64 = r20.s64 + -76;
	// stb r21,353(r31)
	PPC_STORE_U8(r31.u32 + 353, r21.u8);
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00D8:
	// addi r11,r20,-72
	r11.s64 = r20.s64 + -72;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00E0:
	// addi r11,r20,-64
	r11.s64 = r20.s64 + -64;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00E8:
	// addi r11,r20,-56
	r11.s64 = r20.s64 + -56;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00F0:
	// addi r11,r20,-48
	r11.s64 = r20.s64 + -48;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA00F8:
	// addi r11,r20,-36
	r11.s64 = r20.s64 + -36;
	// b 0x82ca0104
	goto loc_82CA0104;
loc_82CA0100:
	// addi r11,r20,-28
	r11.s64 = r20.s64 + -28;
loc_82CA0104:
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
loc_82CA0108:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA011C:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0148
	if (cr6.eq) goto loc_82CA0148;
	// addi r29,r20,-4
	r29.s64 = r20.s64 + -4;
	// b 0x82ca0158
	goto loc_82CA0158;
loc_82CA0148:
	// cmpwi cr6,r28,32
	cr6.compare<int32_t>(r28.s32, 32, xer);
	// addi r29,r20,-16
	r29.s64 = r20.s64 + -16;
	// beq cr6,0x82ca0158
	if (cr6.eq) goto loc_82CA0158;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_82CA0158:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r30,r31,416
	r30.s64 = r31.s64 + 416;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca01b4
	if (cr6.eq) goto loc_82CA01B4;
loc_82CA0168:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca018c
	if (!cr6.eq) goto loc_82CA018C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
loc_82CA018C:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ca0168
	if (!cr6.eq) goto loc_82CA0168;
loc_82CA01B4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c9b1a8
	sub_82C9B1A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA01E8:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lbz r6,353(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 353);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 352);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// bl 0x82c990a8
	sub_82C990A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,40
	cr6.compare<int32_t>(ctx.r10.s32, 40, xer);
	// beq cr6,0x82ca0254
	if (cr6.eq) goto loc_82CA0254;
	// cmpwi cr6,r10,78
	cr6.compare<int32_t>(ctx.r10.s32, 78, xer);
	// bne cr6,0x82ca02cc
	if (!cr6.eq) goto loc_82CA02CC;
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,79
	cr6.compare<uint32_t>(r11.u32, 79, xer);
	// bne cr6,0x82ca02cc
	if (!cr6.eq) goto loc_82CA02CC;
loc_82CA0254:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca0278
	if (!cr6.eq) goto loc_82CA0278;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
loc_82CA0278:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r16,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r16.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca02ac
	if (!cr6.eq) goto loc_82CA02AC;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
loc_82CA02AC:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r10.u32);
loc_82CA02CC:
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// addi r11,r28,-36
	r11.s64 = r28.s64 + -36;
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0310:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// addi r8,r27,80
	ctx.r8.s64 = r27.s64 + 80;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r6,r11,r24
	ctx.r6.u64 = r11.u64 + r24.u64;
	// lbz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 352);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9d748
	sub_82C9D748(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca13e4
	if (!cr6.eq) goto loc_82CA13E4;
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r30,96(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r11,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r11.u32);
	// lbz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 352);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// bl 0x82c990a8
	sub_82C990A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,40
	cr6.compare<int32_t>(ctx.r10.s32, 40, xer);
	// beq cr6,0x82ca03b4
	if (cr6.eq) goto loc_82CA03B4;
	// cmpwi cr6,r10,78
	cr6.compare<int32_t>(ctx.r10.s32, 78, xer);
	// bne cr6,0x82ca042c
	if (!cr6.eq) goto loc_82CA042C;
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,79
	cr6.compare<uint32_t>(r11.u32, 79, xer);
	// bne cr6,0x82ca042c
	if (!cr6.eq) goto loc_82CA042C;
loc_82CA03B4:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca03d8
	if (!cr6.eq) goto loc_82CA03D8;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
loc_82CA03D8:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r16,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r16.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca040c
	if (!cr6.eq) goto loc_82CA040C;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99808
	sub_82C99808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
loc_82CA040C:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r10.u32);
loc_82CA042C:
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// addi r11,r28,-38
	r11.s64 = r28.s64 + -38;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0470:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9c3a8
	sub_82C9C3A8(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0518
	if (cr6.eq) goto loc_82CA0518;
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,120(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lwz r8,116(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r5,116(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// stw r5,120(r27)
	PPC_STORE_U32(r27.u32 + 120, ctx.r5.u32);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca0520
	if (cr6.eq) goto loc_82CA0520;
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,136(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r5,33(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
	// b 0x82ca0520
	goto loc_82CA0520;
loc_82CA0518:
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// stw r11,116(r27)
	PPC_STORE_U32(r27.u32 + 116, r11.u32);
loc_82CA0520:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA0534:
	// stb r25,489(r31)
	PPC_STORE_U8(r31.u32 + 489, r25.u8);
	// stb r21,129(r27)
	PPC_STORE_U8(r27.u32 + 129, r21.u8);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0580
	if (cr6.eq) goto loc_82CA0580;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mr r26,r25
	r26.u64 = r25.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// b 0x82ca0588
	goto loc_82CA0588;
loc_82CA0580:
	// addi r11,r20,-88
	r11.s64 = r20.s64 + -88;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
loc_82CA0588:
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca05c0
	if (!cr6.eq) goto loc_82CA05C0;
	// lwz r11,492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca05c0
	if (!cr6.eq) goto loc_82CA05C0;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca05c0
	if (cr6.eq) goto loc_82CA05C0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca0d34
	if (cr6.eq) goto loc_82CA0D34;
loc_82CA05C0:
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca05ec
	if (!cr6.eq) goto loc_82CA05EC;
	// addi r4,r20,-88
	ctx.r4.s64 = r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = r27.s64 + 132;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r25.u32);
loc_82CA05EC:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r3,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// stw r9,96(r27)
	PPC_STORE_U32(r27.u32 + 96, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0654:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lbz r5,33(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA06B4:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r3,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r3.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// stw r11,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r11.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca073c
	if (cr6.eq) goto loc_82CA073C;
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA073C:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r29,28(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0788:
	// lwz r11,48(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 48);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca07b0
	if (cr6.eq) goto loc_82CA07B0;
	// stw r25,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA07B0:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0804
	if (cr6.eq) goto loc_82CA0804;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r3.u32);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82ca0814
	if (cr6.eq) goto loc_82CA0814;
loc_82CA0804:
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// stw r11,92(r27)
	PPC_STORE_U32(r27.u32 + 92, r11.u32);
	// stw r25,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0814:
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// stw r11,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stb r25,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, r25.u8);
	// lwz r8,476(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ca0848
	if (!cr6.eq) goto loc_82CA0848;
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// beq cr6,0x82ca084c
	if (cr6.eq) goto loc_82CA084C;
loc_82CA0848:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82CA084C:
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stb r11,34(r10)
	PPC_STORE_U8(ctx.r10.u32 + 34, r11.u8);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0860:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0804
	if (cr6.eq) goto loc_82CA0804;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r27,132
	ctx.r3.s64 = r27.s64 + 132;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r3.u32);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82ca08c4
	if (cr6.eq) goto loc_82CA08C4;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// stw r11,92(r27)
	PPC_STORE_U32(r27.u32 + 92, r11.u32);
	// stw r25,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA08C4:
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// stw r11,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stb r21,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, r21.u8);
	// lwz r8,476(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ca08f8
	if (!cr6.eq) goto loc_82CA08F8;
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// beq cr6,0x82ca08fc
	if (cr6.eq) goto loc_82CA08FC;
loc_82CA08F8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82CA08FC:
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stb r11,34(r10)
	PPC_STORE_U8(ctx.r10.u32 + 34, r11.u8);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0910:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r25,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r25,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r25.u32);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// stw r3,336(r31)
	PPC_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0950:
	// lwz r11,56(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1284
	if (cr6.eq) goto loc_82CA1284;
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// bl 0x82c99200
	sub_82C99200(ctx, base);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// stw r3,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA09B8:
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0a1c
	if (cr6.eq) goto loc_82CA0A1C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0a1c
	if (cr6.eq) goto loc_82CA0A1C;
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82CA0A1C:
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0A28:
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0a68
	if (cr6.eq) goto loc_82CA0A68;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0a68
	if (cr6.eq) goto loc_82CA0A68;
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82CA0A68:
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c99728
	sub_82C99728(ctx, base);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0A74:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0a94
	if (cr6.eq) goto loc_82CA0A94;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82CA0A94:
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// bl 0x82c9a840
	sub_82C9A840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca13e4
	if (!cr6.eq) goto loc_82CA13E4;
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca0c04
	if (!cr6.eq) goto loc_82CA0C04;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-17600
	ctx.r10.s64 = r11.s64 + -17600;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA0ADC:
	// lwz r11,468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 468);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ca0b6c
	if (cr6.lt) goto loc_82CA0B6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0b48
	if (cr6.eq) goto loc_82CA0B48;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// stw r4,468(r31)
	PPC_STORE_U32(r31.u32 + 468, ctx.r4.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// stw r3,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r3.u32);
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0b6c
	if (cr6.eq) goto loc_82CA0B6C;
	// lwz r11,468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 468);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// stw r3,184(r27)
	PPC_STORE_U32(r27.u32 + 184, ctx.r3.u32);
	// b 0x82ca0b6c
	goto loc_82CA0B6C;
loc_82CA0B48:
	// li r11,32
	r11.s64 = 32;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,468(r31)
	PPC_STORE_U32(r31.u32 + 468, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
loc_82CA0B6C:
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// stbx r25,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r25.u8);
	// lbz r9,160(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 160);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c99a08
	sub_82C99A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ca0084
	if (cr6.lt) goto loc_82CA0084;
	// lwz r11,180(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// lwz r9,184(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,6
	ctx.r7.s64 = 6;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,180(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// lwz r6,164(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// stw r5,180(r27)
	PPC_STORE_U32(r27.u32 + 180, ctx.r5.u32);
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0BCC:
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,124
	cr6.compare<uint32_t>(ctx.r9.u32, 124, xer);
	// beq cr6,0x82ca1380
	if (cr6.eq) goto loc_82CA1380;
	// li r9,44
	ctx.r9.s64 = 44;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// lbz r8,160(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 160);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
loc_82CA0BF4:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
loc_82CA0BF8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
loc_82CA0BFC:
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
loc_82CA0C00:
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82CA0C04:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c30
	if (cr6.eq) goto loc_82CA0C30;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c30
	if (cr6.eq) goto loc_82CA0C30;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c98fd8
	sub_82C98FD8(ctx, base);
loc_82CA0C30:
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82ca13e0
	if (cr6.eq) goto loc_82CA13E0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82ca13c8
	if (cr6.eq) goto loc_82CA13C8;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r6,r1,316
	ctx.r6.s64 = ctx.r1.s64 + 316;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,324(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82c9fbc8
	goto loc_82C9FBC8;
loc_82CA0C70:
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x82ca1380
	if (cr6.eq) goto loc_82CA1380;
	// lbz r10,160(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca0cdc
	if (cr6.eq) goto loc_82CA0CDC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca0cdc
	if (!cr6.eq) goto loc_82CA0CDC;
	// lwz r11,180(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// lwz r10,184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,164(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// beq cr6,0x82ca0cdc
	if (cr6.eq) goto loc_82CA0CDC;
	// li r9,5
	ctx.r9.s64 = 5;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ca0cdc
	if (cr6.eq) goto loc_82CA0CDC;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82CA0CDC:
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// li r10,124
	ctx.r10.s64 = 124;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0CF0:
	// stb r21,129(r27)
	PPC_STORE_U8(r27.u32 + 129, r21.u8);
	// lwz r11,492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca0d40
	if (!cr6.eq) goto loc_82CA0D40;
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// stb r11,128(r27)
	PPC_STORE_U8(r27.u32 + 128, r11.u8);
loc_82CA0D08:
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca0c04
	if (!cr6.eq) goto loc_82CA0C04;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca0c04
	if (!cr6.eq) goto loc_82CA0C04;
loc_82CA0D34:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA0D40:
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// add r5,r11,r24
	ctx.r5.u64 = r11.u64 + r24.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82c9b2f8
	sub_82C9B2F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,132
	ctx.r3.s64 = r27.s64 + 132;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,92(r27)
	PPC_STORE_U32(r27.u32 + 92, r11.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ca0e08
	if (cr6.eq) goto loc_82CA0E08;
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0da4
	if (cr6.eq) goto loc_82CA0DA4;
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// b 0x82ca0da8
	goto loc_82CA0DA8;
loc_82CA0DA4:
	// lbz r11,129(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 129);
loc_82CA0DA8:
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca0e08
	if (cr6.eq) goto loc_82CA0E08;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca13a4
	if (cr6.eq) goto loc_82CA13A4;
	// lbz r11,34(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca13b0
	if (cr6.eq) goto loc_82CA13B0;
loc_82CA0DCC:
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca13bc
	if (!cr6.eq) goto loc_82CA13BC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0e44
	if (cr6.eq) goto loc_82CA0E44;
	// addi r11,r28,-60
	r11.s64 = r28.s64 + -60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c98df8
	sub_82C98DF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca13e4
	if (!cr6.eq) goto loc_82CA13E4;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0E08:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ca0dcc
	if (!cr6.eq) goto loc_82CA0DCC;
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// cmpwi cr6,r28,60
	cr6.compare<int32_t>(r28.s32, 60, xer);
	// stb r11,128(r27)
	PPC_STORE_U8(r27.u32 + 128, r11.u8);
	// bne cr6,0x82ca0c04
	if (!cr6.eq) goto loc_82CA0C04;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0E44:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0e94
	if (cr6.eq) goto loc_82CA0E94;
	// stb r25,131(r27)
	PPC_STORE_U8(r27.u32 + 131, r25.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r21,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r21.u8);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r25,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r25.u8);
	// beq cr6,0x82ca1290
	if (cr6.eq) goto loc_82CA1290;
	// lbz r11,131(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 131);
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca0d08
	if (!cr6.eq) goto loc_82CA0D08;
loc_82CA0E94:
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// stb r11,128(r27)
	PPC_STORE_U8(r27.u32 + 128, r11.u8);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0EA0:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9b388
	sub_82C9B388(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// stw r25,180(r27)
	PPC_STORE_U32(r27.u32 + 180, r25.u32);
	// stw r25,176(r27)
	PPC_STORE_U32(r27.u32 + 176, r25.u32);
	// stb r21,160(r27)
	PPC_STORE_U8(r27.u32 + 160, r21.u8);
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA0EDC:
	// lbz r11,160(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0f54
	if (cr6.eq) goto loc_82CA0F54;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,20
	ctx.r3.s64 = 20;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// addi r11,r28,-41
	r11.s64 = r28.s64 + -41;
	// stw r25,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r25.u32);
	// stw r25,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r25.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r25,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r25.u32);
	// stw r25,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r25.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// lwz r7,344(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82CA0F54:
	// stb r25,160(r27)
	PPC_STORE_U8(r27.u32 + 160, r25.u8);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA0F5C:
	// lbz r11,160(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r10,180(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// lwz r11,184(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,164(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,-4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// mulli r6,r7,28
	ctx.r6.s64 = ctx.r7.s64 * 28;
	// stwx r15,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, r15.u32);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA0F94:
	// mr r29,r25
	r29.u64 = r25.u64;
	// b 0x82ca0fb0
	goto loc_82CA0FB0;
loc_82CA0F9C:
	// mr r29,r21
	r29.u64 = r21.u64;
	// b 0x82ca0fb0
	goto loc_82CA0FB0;
loc_82CA0FA4:
	// li r29,2
	r29.s64 = 2;
	// b 0x82ca0fb0
	goto loc_82CA0FB0;
loc_82CA0FAC:
	// mr r29,r15
	r29.u64 = r15.u64;
loc_82CA0FB0:
	// lbz r11,160(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82ca0fcc
	if (!cr6.eq) goto loc_82CA0FCC;
	// lwz r28,316(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// b 0x82ca0fd8
	goto loc_82CA0FD8;
loc_82CA0FCC:
	// lwz r11,68(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// subf r28,r11,r10
	r28.s64 = ctx.r10.s64 - r11.s64;
loc_82CA0FD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c99a08
	sub_82C99A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ca0084
	if (cr6.lt) goto loc_82CA0084;
	// lwz r11,164(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// mulli r30,r3,28
	r30.s64 = ctx.r3.s64 * 28;
	// stwx r18,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r18.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,164(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// bl 0x82c9b388
	sub_82C9B388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r9,164(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82CA1030:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ca1030
	if (!cr6.eq) goto loc_82CA1030;
	// lwz r10,168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 168);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,168(r27)
	PPC_STORE_U32(r27.u32 + 168, r11.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x82ca0bfc
	goto loc_82CA0BFC;
loc_82CA1058:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// b 0x82ca1074
	goto loc_82CA1074;
loc_82CA1060:
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// b 0x82ca1074
	goto loc_82CA1074;
loc_82CA1068:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82ca1074
	goto loc_82CA1074;
loc_82CA1070:
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
loc_82CA1074:
	// lbz r11,160(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca1090
	if (cr6.eq) goto loc_82CA1090;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82CA1090:
	// lwz r11,180(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// lwz r8,184(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,164(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// stw r11,180(r27)
	PPC_STORE_U32(r27.u32 + 180, r11.u32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r11,r6,28
	r11.s64 = ctx.r6.s64 * 28;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r4,180(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82ca0c04
	if (!cr6.eq) goto loc_82CA0C04;
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca115c
	if (!cr6.eq) goto loc_82CA115C;
	// lwz r29,356(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// addi r9,r30,20
	ctx.r9.s64 = r30.s64 + 20;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82c99b50
	sub_82C99B50(ctx, base);
	// stw r24,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r24.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA115C:
	// stb r25,160(r27)
	PPC_STORE_U8(r27.u32 + 160, r25.u8);
	// stw r25,168(r27)
	PPC_STORE_U32(r27.u32 + 168, r25.u32);
	// b 0x82ca0c04
	goto loc_82CA0C04;
loc_82CA1168:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c810
	sub_82C9C810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA1188:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9c918
	sub_82C9C918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA11A8:
	// cmpwi cr6,r30,14
	cr6.compare<int32_t>(r30.s32, 14, xer);
	// bne cr6,0x82ca0c04
	if (!cr6.eq) goto loc_82CA0C04;
	// b 0x82ca0c00
	goto loc_82CA0C00;
loc_82CA11B4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA11BC:
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca0c04
	if (cr6.eq) goto loc_82CA0C04;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA11D0:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82ca0bf8
	goto loc_82CA0BF8;
loc_82CA11D8:
	// stw r24,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA11E8:
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA11FC:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA1208:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA1214:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x82ca1230
	if (cr6.eq) goto loc_82CA1230;
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca11d8
	if (cr6.eq) goto loc_82CA11D8;
loc_82CA1230:
	// lbz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 488);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca1250
	if (!cr6.eq) goto loc_82CA1250;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// bne cr6,0x82ca1250
	if (!cr6.eq) goto loc_82CA1250;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA1250:
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// li r4,-4
	ctx.r4.s64 = -4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ca11d8
	if (!cr6.eq) goto loc_82CA11D8;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA1284:
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA1290:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA129C:
	// lbz r11,489(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 489);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca1348
	if (cr6.eq) goto loc_82CA1348;
	// stb r21,129(r27)
	PPC_STORE_U8(r27.u32 + 129, r21.u8);
	// lwz r11,492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca1348
	if (cr6.eq) goto loc_82CA1348;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca1348
	if (cr6.eq) goto loc_82CA1348;
	// addi r4,r20,-88
	ctx.r4.s64 = r20.s64 + -88;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r27,132
	ctx.r3.s64 = r27.s64 + 132;
	// bl 0x82c99298
	sub_82C99298(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0084
	if (cr6.eq) goto loc_82CA0084;
	// lwz r11,360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stb r25,131(r27)
	PPC_STORE_U8(r27.u32 + 131, r25.u8);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1290
	if (cr6.eq) goto loc_82CA1290;
	// lbz r11,131(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 131);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca1348
	if (cr6.eq) goto loc_82CA1348;
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca1348
	if (!cr6.eq) goto loc_82CA1348;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca1348
	if (cr6.eq) goto loc_82CA1348;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca0d34
	if (cr6.eq) goto loc_82CA0D34;
loc_82CA1348:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r10,r11,-1320
	ctx.r10.s64 = r11.s64 + -1320;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9fad8
	sub_82C9FAD8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA1370:
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(r30.s32, 12, xer);
	// beq cr6,0x82ca1398
	if (cr6.eq) goto loc_82CA1398;
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(r30.s32, 28, xer);
	// beq cr6,0x82ca138c
	if (cr6.eq) goto loc_82CA138C;
loc_82CA1380:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA138C:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA1398:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA13A4:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA13B0:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA13BC:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA13C8:
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
loc_82CA13E0:
	// li r3,35
	ctx.r3.s64 = 35;
loc_82CA13E4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_82CA13F0"))) PPC_WEAK_FUNC(sub_82CA13F0);
PPC_FUNC_IMPL(__imp__sub_82CA13F0) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	cr6.compare<int32_t>(r27.s32, 15, xer);
	// beq cr6,0x82ca1480
	if (cr6.eq) goto loc_82CA1480;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(r27.s32, 18, xer);
	// beq cr6,0x82ca1448
	if (cr6.eq) goto loc_82CA1448;
	// cmpwi cr6,r27,27
	cr6.compare<int32_t>(r27.s32, 27, xer);
	// bne cr6,0x82ca14c8
	if (!cr6.eq) goto loc_82CA14C8;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r11,-18696
	ctx.r9.s64 = r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1448:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3228
	r30.s64 = r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca148c
	if (cr6.eq) goto loc_82CA148C;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-6624
	ctx.r10.s64 = r11.s64 + -6624;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82CA1480:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA148C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca14c8
	if (cr6.eq) goto loc_82CA14C8;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r10,r11,-2008
	ctx.r10.s64 = r11.s64 + -2008;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA14C8:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca14e8
	if (!cr6.eq) goto loc_82CA14E8;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(r27.s32, 28, xer);
	// bne cr6,0x82ca14e8
	if (!cr6.eq) goto loc_82CA14E8;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA14E8:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82CA1500"))) PPC_WEAK_FUNC(sub_82CA1500);
PPC_FUNC_IMPL(__imp__sub_82CA1500) {
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r25,15
	cr6.compare<int32_t>(r25.s32, 15, xer);
	// beq cr6,0x82ca1544
	if (cr6.eq) goto loc_82CA1544;
	// cmpwi cr6,r25,18
	cr6.compare<int32_t>(r25.s32, 18, xer);
	// beq cr6,0x82ca1550
	if (cr6.eq) goto loc_82CA1550;
	// cmpwi cr6,r25,23
	cr6.compare<int32_t>(r25.s32, 23, xer);
	// bne cr6,0x82ca15f0
	if (!cr6.eq) goto loc_82CA15F0;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r10,r11,-6024
	ctx.r10.s64 = r11.s64 + -6024;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
loc_82CA1544:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA1550:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,-5588
	r28.s64 = r11.s64 + -5588;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82CA1560:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca15d8
	if (!cr6.eq) goto loc_82CA15D8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r28,32
	r11.s64 = r28.s64 + 32;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ca1560
	if (cr6.lt) goto loc_82CA1560;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r6,r11,3208
	ctx.r6.s64 = r11.s64 + 3208;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca15f0
	if (cr6.eq) goto loc_82CA15F0;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r10,r11,-1816
	ctx.r10.s64 = r11.s64 + -1816;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA15D8:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// addi r3,r29,23
	ctx.r3.s64 = r29.s64 + 23;
	// addi r10,r11,-12112
	ctx.r10.s64 = r11.s64 + -12112;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA15F0:
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca1610
	if (!cr6.eq) goto loc_82CA1610;
	// cmpwi cr6,r25,28
	cr6.compare<int32_t>(r25.s32, 28, xer);
	// bne cr6,0x82ca1610
	if (!cr6.eq) goto loc_82CA1610;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA1610:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82CA1628"))) PPC_WEAK_FUNC(sub_82CA1628);
PPC_FUNC_IMPL(__imp__sub_82CA1628) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,15
	cr6.compare<int32_t>(r27.s32, 15, xer);
	// beq cr6,0x82ca1748
	if (cr6.eq) goto loc_82CA1748;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(r27.s32, 18, xer);
	// beq cr6,0x82ca1680
	if (cr6.eq) goto loc_82CA1680;
	// cmpwi cr6,r27,23
	cr6.compare<int32_t>(r27.s32, 23, xer);
	// bne cr6,0x82ca1710
	if (!cr6.eq) goto loc_82CA1710;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1728
	ctx.r9.s64 = r11.s64 + -1728;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1680:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3064
	r30.s64 = r11.s64 + 3064;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r30,36
	ctx.r6.s64 = r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca16cc
	if (cr6.eq) goto loc_82CA16CC;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r9,r11,-18696
	ctx.r9.s64 = r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// li r3,42
	ctx.r3.s64 = 42;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA16CC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1710
	if (cr6.eq) goto loc_82CA1710;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r9,r11,-18696
	ctx.r9.s64 = r11.s64 + -18696;
	// stw r10,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// li r3,41
	ctx.r3.s64 = 41;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1710:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca1730
	if (!cr6.eq) goto loc_82CA1730;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(r27.s32, 28, xer);
	// bne cr6,0x82ca1730
	if (!cr6.eq) goto loc_82CA1730;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1730:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1748:
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82CA1758"))) PPC_WEAK_FUNC(sub_82CA1758);
PPC_FUNC_IMPL(__imp__sub_82CA1758) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9fb58
	sub_82C9FB58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82CA17C8"))) PPC_WEAK_FUNC(sub_82CA17C8);
PPC_FUNC_IMPL(__imp__sub_82CA17C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r29,300(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ca17fc
	if (!cr6.eq) goto loc_82CA17FC;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA17FC:
	// lwz r30,12(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r8,33(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 33);
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + r11.u64;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ca1864
	if (cr6.eq) goto loc_82CA1864;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9fb58
	sub_82C9FB58(ctx, base);
	// b 0x82ca1884
	goto loc_82CA1884;
loc_82CA1864:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,228(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9eac0
	sub_82C9EAC0(ctx, base);
loc_82CA1884:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca197c
	if (!cr6.eq) goto loc_82CA197C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82ca18b8
	if (cr6.eq) goto loc_82CA18B8;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82ca18b8
	if (!cr6.eq) goto loc_82CA18B8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA18B8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r11.u8);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r9,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r9.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r29.u32);
	// lbz r8,33(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ca193c
	if (cr6.eq) goto loc_82CA193C;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5976
	ctx.r10.s64 = r11.s64 + 5976;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9fb58
	sub_82C9FB58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA193C:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// lwz r10,476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// lbz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 484);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r7,r11,-1320
	ctx.r7.s64 = r11.s64 + -1320;
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r7,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r7.u32);
	// cntlzw r4,r9
	ctx.r4.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r4,r3,1
	ctx.r4.u64 = ctx.r3.u64 ^ 1;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9eac0
	sub_82C9EAC0(ctx, base);
loc_82CA197C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82CA1988"))) PPC_WEAK_FUNC(sub_82CA1988);
PPC_FUNC_IMPL(__imp__sub_82CA1988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82ca19e0
	if (cr6.eq) goto loc_82CA19E0;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82ca19e8
	if (cr6.eq) goto loc_82CA19E8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// beq cr6,0x82ca19d4
	if (cr6.eq) goto loc_82CA19D4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca19c0
	if (!cr6.eq) goto loc_82CA19C0;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca19c0
	if (!cr6.eq) goto loc_82CA19C0;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA19D4:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r10,-2104
	ctx.r9.s64 = ctx.r10.s64 + -2104;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1A00"))) PPC_WEAK_FUNC(sub_82CA1A00);
PPC_FUNC_IMPL(__imp__sub_82CA1A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// addi r11,r4,-15
	r11.s64 = ctx.r4.s64 + -15;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bgt cr6,0x82ca1ae4
	if (cr6.gt) goto loc_82CA1AE4;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,6696
	r12.s64 = r12.s64 + 6696;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CA1A94;
	case 1:
		goto loc_82CA1AE4;
	case 2:
		goto loc_82CA1A9C;
	case 3:
		goto loc_82CA1AD0;
	case 4:
		goto loc_82CA1AE4;
	case 5:
		goto loc_82CA1AE4;
	case 6:
		goto loc_82CA1AE4;
	case 7:
		goto loc_82CA1AE4;
	case 8:
		goto loc_82CA1AE4;
	case 9:
		goto loc_82CA1AE4;
	case 10:
		goto loc_82CA1AE4;
	case 11:
		goto loc_82CA1AE4;
	case 12:
		goto loc_82CA1AE4;
	case 13:
		goto loc_82CA1AE4;
	case 14:
		goto loc_82CA1AE4;
	case 15:
		goto loc_82CA1AE4;
	case 16:
		goto loc_82CA1AE4;
	case 17:
		goto loc_82CA1AE4;
	case 18:
		goto loc_82CA1AE4;
	case 19:
		goto loc_82CA1AE4;
	case 20:
		goto loc_82CA1AE4;
	case 21:
		goto loc_82CA1AE4;
	case 22:
		goto loc_82CA1AE4;
	case 23:
		goto loc_82CA1AE4;
	case 24:
		goto loc_82CA1AE4;
	case 25:
		goto loc_82CA1AE4;
	case 26:
		goto loc_82CA1AD0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,6804(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6804);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6812(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6812);
	// lwz r22,6864(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6864);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6884(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// lwz r22,6864(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6864);
loc_82CA1A94:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_82CA1A9C:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca1abc
	if (cr6.eq) goto loc_82CA1ABC;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r11,r11,7224
	r11.s64 = r11.s64 + 7224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
loc_82CA1ABC:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r11,r11,7832
	r11.s64 = r11.s64 + 7832;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
loc_82CA1AD0:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r9,r11,5376
	ctx.r9.s64 = r11.s64 + 5376;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA1AE4:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca1b00
	if (!cr6.eq) goto loc_82CA1B00;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca1b00
	if (!cr6.eq) goto loc_82CA1B00;
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
loc_82CA1B00:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-11496
	ctx.r9.s64 = r11.s64 + -11496;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA1B18"))) PPC_WEAK_FUNC(sub_82CA1B18);
PPC_FUNC_IMPL(__imp__sub_82CA1B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82ca1b78
	if (cr6.eq) goto loc_82CA1B78;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82ca1b64
	if (cr6.eq) goto loc_82CA1B64;
	// cmpwi cr6,r4,41
	cr6.compare<int32_t>(ctx.r4.s32, 41, xer);
	// beq cr6,0x82ca1b64
	if (cr6.eq) goto loc_82CA1B64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca1b50
	if (!cr6.eq) goto loc_82CA1B50;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca1b50
	if (!cr6.eq) goto loc_82CA1B50;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82c9aa48
	sub_82C9AA48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca1bc8
	if (!cr6.eq) goto loc_82CA1BC8;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r10,r11,5976
	ctx.r10.s64 = r11.s64 + 5976;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca1758
	sub_82CA1758(ctx, base);
loc_82CA1BC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82CA1BD0"))) PPC_WEAK_FUNC(sub_82CA1BD0);
PPC_FUNC_IMPL(__imp__sub_82CA1BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82ca1c30
	if (cr6.eq) goto loc_82CA1C30;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82ca1c1c
	if (cr6.eq) goto loc_82CA1C1C;
	// cmpwi cr6,r4,41
	cr6.compare<int32_t>(ctx.r4.s32, 41, xer);
	// beq cr6,0x82ca1c1c
	if (cr6.eq) goto loc_82CA1C1C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca1c08
	if (!cr6.eq) goto loc_82CA1C08;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca1c08
	if (!cr6.eq) goto loc_82CA1C08;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bgt cr6,0x82ca1e60
	if (cr6.gt) goto loc_82CA1E60;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,7292
	r12.s64 = r12.s64 + 7292;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7424);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7716(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7716);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7728(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7728);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7424(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7424);
	// lwz r22,7436(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7436);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7752(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7752);
	// lwz r22,7776(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7776);
	// lwz r22,7740(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7740);
loc_82CA1D00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1D0C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3208
	r30.s64 = r11.s64 + 3208;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r30,-88
	ctx.r6.s64 = r30.s64 + -88;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1d58
	if (cr6.eq) goto loc_82CA1D58;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r10,r11,6536
	ctx.r10.s64 = r11.s64 + 6536;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1D58:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r6,r30,-140
	ctx.r6.s64 = r30.s64 + -140;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1d9c
	if (cr6.eq) goto loc_82CA1D9C;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r10,r11,7120
	ctx.r10.s64 = r11.s64 + 7120;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1D9C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r6,r30,-116
	ctx.r6.s64 = r30.s64 + -116;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1de0
	if (cr6.eq) goto loc_82CA1DE0;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r10,r11,6936
	ctx.r10.s64 = r11.s64 + 6936;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1DE0:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca1e60
	if (cr6.eq) goto loc_82CA1E60;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r10,r11,-1912
	ctx.r10.s64 = r11.s64 + -1912;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1E24:
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1E30:
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1E3C:
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1E48:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,-19216
	ctx.r10.s64 = r11.s64 + -19216;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1E60:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca1e80
	if (!cr6.eq) goto loc_82CA1E80;
	// cmpwi cr6,r26,28
	cr6.compare<int32_t>(r26.s32, 28, xer);
	// bne cr6,0x82ca1e80
	if (!cr6.eq) goto loc_82CA1E80;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA1E80:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82CA1E98"))) PPC_WEAK_FUNC(sub_82CA1E98);
PPC_FUNC_IMPL(__imp__sub_82CA1E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bgt cr6,0x82ca1fd0
	if (cr6.gt) goto loc_82CA1FD0;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,7872
	r12.s64 = r12.s64 + 7872;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82CA1F94;
	case 1:
		goto loc_82CA1FD0;
	case 2:
		goto loc_82CA1FD0;
	case 3:
		goto loc_82CA1FD0;
	case 4:
		goto loc_82CA1FD0;
	case 5:
		goto loc_82CA1FD0;
	case 6:
		goto loc_82CA1FD0;
	case 7:
		goto loc_82CA1FD0;
	case 8:
		goto loc_82CA1FD0;
	case 9:
		goto loc_82CA1FD0;
	case 10:
		goto loc_82CA1FD0;
	case 11:
		goto loc_82CA1FD0;
	case 12:
		goto loc_82CA1FD0;
	case 13:
		goto loc_82CA1FD0;
	case 14:
		goto loc_82CA1FD0;
	case 15:
		goto loc_82CA1FD0;
	case 16:
		goto loc_82CA1FD0;
	case 17:
		goto loc_82CA1FD0;
	case 18:
		goto loc_82CA1FD0;
	case 19:
		goto loc_82CA1F8C;
	case 20:
		goto loc_82CA1FD0;
	case 21:
		goto loc_82CA1FD0;
	case 22:
		goto loc_82CA1FD0;
	case 23:
		goto loc_82CA1FD0;
	case 24:
		goto loc_82CA1FD0;
	case 25:
		goto loc_82CA1FD0;
	case 26:
		goto loc_82CA1FD0;
	case 27:
		goto loc_82CA1FD0;
	case 28:
		goto loc_82CA1FD0;
	case 29:
		goto loc_82CA1FD0;
	case 30:
		goto loc_82CA1FA0;
	case 31:
		goto loc_82CA1FD0;
	case 32:
		goto loc_82CA1FD0;
	case 33:
		goto loc_82CA1FD0;
	case 34:
		goto loc_82CA1FD0;
	case 35:
		goto loc_82CA1FD0;
	case 36:
		goto loc_82CA1FD0;
	case 37:
		goto loc_82CA1F5C;
	case 38:
		goto loc_82CA1F70;
	default:
		__builtin_unreachable();
	}
	// lwz r22,8084(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8084);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8076(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8076);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8096(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8096);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8144(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	// lwz r22,8028(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8028);
	// lwz r22,8048(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8048);
loc_82CA1F5C:
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-11240
	ctx.r9.s64 = ctx.r10.s64 + -11240;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA1F70:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca1fa0
	if (cr6.eq) goto loc_82CA1FA0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_82CA1F8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CA1F94:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca1f8c
	if (cr6.eq) goto loc_82CA1F8C;
loc_82CA1FA0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca1fbc
	if (!cr6.eq) goto loc_82CA1FBC;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca1fbc
	if (!cr6.eq) goto loc_82CA1FBC;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA1FD0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82ca1c38
	sub_82CA1C38(ctx, base);
	return;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82ca204c
	if (cr6.eq) goto loc_82CA204C;
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// beq cr6,0x82ca2038
	if (cr6.eq) goto loc_82CA2038;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// beq cr6,0x82ca2024
	if (cr6.eq) goto loc_82CA2024;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca2010
	if (!cr6.eq) goto loc_82CA2010;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca2010
	if (!cr6.eq) goto loc_82CA2010;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CA204C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2058"))) PPC_WEAK_FUNC(sub_82CA2058);
PPC_FUNC_IMPL(__imp__sub_82CA2058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82ca20b0
	if (cr6.eq) goto loc_82CA20B0;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82ca209c
	if (cr6.eq) goto loc_82CA209C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca2088
	if (!cr6.eq) goto loc_82CA2088;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca2088
	if (!cr6.eq) goto loc_82CA2088;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82ca2110
	if (cr6.eq) goto loc_82CA2110;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x82ca20fc
	if (cr6.eq) goto loc_82CA20FC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca20e8
	if (!cr6.eq) goto loc_82CA20E8;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca20e8
	if (!cr6.eq) goto loc_82CA20E8;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r26,-15
	r11.s64 = r26.s64 + -15;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bgt cr6,0x82ca2244
	if (cr6.gt) goto loc_82CA2244;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,8540
	r12.s64 = r12.s64 + 8540;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8584);
	// lwz r22,8772(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8620(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8620);
	// lwz r22,8644(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8644);
	// lwz r22,8772(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8772(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8772);
	// lwz r22,8596(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8596);
loc_82CA2188:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA2194:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r10,r11,7224
	ctx.r10.s64 = r11.s64 + 7224;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA21AC:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r10,r11,-19424
	ctx.r10.s64 = r11.s64 + -19424;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA21C4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r11,3228
	r30.s64 = r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca2208
	if (cr6.eq) goto loc_82CA2208;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8280
	ctx.r10.s64 = r11.s64 + 8280;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA2208:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca2244
	if (cr6.eq) goto loc_82CA2244;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8376
	ctx.r10.s64 = r11.s64 + 8376;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA2244:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca2264
	if (!cr6.eq) goto loc_82CA2264;
	// cmpwi cr6,r26,28
	cr6.compare<int32_t>(r26.s32, 28, xer);
	// bne cr6,0x82ca2264
	if (!cr6.eq) goto loc_82CA2264;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA2264:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82CA2280"))) PPC_WEAK_FUNC(sub_82CA2280);
PPC_FUNC_IMPL(__imp__sub_82CA2280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82ca22e0
	if (cr6.eq) goto loc_82CA22E0;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82ca22cc
	if (cr6.eq) goto loc_82CA22CC;
	// cmpwi cr6,r4,41
	cr6.compare<int32_t>(ctx.r4.s32, 41, xer);
	// beq cr6,0x82ca22cc
	if (cr6.eq) goto loc_82CA22CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca22b8
	if (!cr6.eq) goto loc_82CA22B8;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bne cr6,0x82ca22b8
	if (!cr6.eq) goto loc_82CA22B8;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r31,-11
	r11.s64 = r31.s64 + -11;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x82ca23d8
	if (cr6.gt) goto loc_82CA23D8;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,9004
	r12.s64 = r12.s64 + 9004;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9096(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9096);
	// lwz r22,9080(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9080);
	// lwz r22,9080(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9080);
	// lwz r22,9104(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9176(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	// lwz r22,9168(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9168);
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
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,3084
	ctx.r6.s64 = ctx.r9.s64 + 3084;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca23d8
	if (cr6.eq) goto loc_82CA23D8;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8832
	ctx.r10.s64 = r11.s64 + 8832;
	// b 0x82ca2400
	goto loc_82CA2400;
loc_82CA23D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ca23f8
	goto loc_82CA23F8;
loc_82CA23D8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca23f4
	if (!cr6.eq) goto loc_82CA23F4;
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(r31.s32, 28, xer);
	// bne cr6,0x82ca23f4
	if (!cr6.eq) goto loc_82CA23F4;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82ca2404
	goto loc_82CA2404;
loc_82CA23F4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA23F8:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
loc_82CA2400:
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82CA2404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2420"))) PPC_WEAK_FUNC(sub_82CA2420);
PPC_FUNC_IMPL(__imp__sub_82CA2420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// addi r11,r30,-11
	r11.s64 = r30.s64 + -11;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x82ca2540
	if (cr6.gt) goto loc_82CA2540;
	// lis r12,-32054
	r12.s64 = -2100690944;
	// addi r12,r12,9316
	r12.s64 = r12.s64 + 9316;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
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
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9424);
	// lwz r22,9408(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9408);
	// lwz r22,9440(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9440);
	// lwz r22,9456(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9456);
	// lwz r22,9392(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9392);
	// lwz r22,9464(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9464);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9536(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// lwz r22,9528(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9528);
loc_82CA24B0:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,8936
	ctx.r10.s64 = r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24C0:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,8936
	ctx.r10.s64 = r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24D0:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r10,r11,8936
	ctx.r10.s64 = r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24E0:
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r10,r11,8936
	ctx.r10.s64 = r11.s64 + 8936;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA24F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca256c
	goto loc_82CA256C;
loc_82CA24F8:
	// lwz r11,68(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,3084
	ctx.r6.s64 = ctx.r9.s64 + 3084;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca2540
	if (cr6.eq) goto loc_82CA2540;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,8832
	ctx.r10.s64 = r11.s64 + 8832;
	// b 0x82ca2568
	goto loc_82CA2568;
loc_82CA2538:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ca2560
	goto loc_82CA2560;
loc_82CA2540:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca255c
	if (!cr6.eq) goto loc_82CA255C;
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(r30.s32, 28, xer);
	// bne cr6,0x82ca255c
	if (!cr6.eq) goto loc_82CA255C;
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x82ca256c
	goto loc_82CA256C;
loc_82CA255C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA2560:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// addi r10,r11,-11496
	ctx.r10.s64 = r11.s64 + -11496;
loc_82CA2568:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82CA256C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2588"))) PPC_WEAK_FUNC(sub_82CA2588);
PPC_FUNC_IMPL(__imp__sub_82CA2588) {
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
	// lis r11,-32054
	r11.s64 = -2100690944;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// addi r9,r11,7040
	ctx.r9.s64 = r11.s64 + 7040;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r9,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r9.u32);
	// addi r8,r10,9248
	ctx.r8.s64 = ctx.r10.s64 + 9248;
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r8,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r8.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// beq cr6,0x82ca25d8
	if (cr6.eq) goto loc_82CA25D8;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82c9b268
	sub_82C9B268(ctx, base);
	// b 0x82ca25dc
	goto loc_82CA25DC;
loc_82CA25D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82CA25DC:
	// stw r3,232(r31)
	PPC_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x82c98268
	sub_82C98268(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r31,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r31.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stb r30,352(r31)
	PPC_STORE_U8(r31.u32 + 352, r30.u8);
	// stb r30,353(r31)
	PPC_STORE_U8(r31.u32 + 353, r30.u8);
	// stw r30,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// stb r29,308(r31)
	PPC_STORE_U8(r31.u32 + 308, r29.u8);
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(r31.u32 + 476, r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r30.u32);
	// stb r30,488(r31)
	PPC_STORE_U8(r31.u32 + 488, r30.u8);
	// stb r30,489(r31)
	PPC_STORE_U8(r31.u32 + 489, r30.u8);
	// stw r30,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82CA26F0"))) PPC_WEAK_FUNC(sub_82CA26F0);
PPC_FUNC_IMPL(__imp__sub_82CA26F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// li r3,496
	ctx.r3.s64 = 496;
	// beq cr6,0x82ca274c
	if (cr6.eq) goto loc_82CA274C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca2958
	if (cr6.eq) goto loc_82CA2958;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// b 0x82ca2780
	goto loc_82CA2780;
loc_82CA274C:
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca2958
	if (cr6.eq) goto loc_82CA2958;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lis r9,-32054
	ctx.r9.s64 = -2100690944;
	// addi r8,r11,15464
	ctx.r8.s64 = r11.s64 + 15464;
	// addi r7,r10,-31376
	ctx.r7.s64 = ctx.r10.s64 + -31376;
	// addi r6,r9,24000
	ctx.r6.s64 = ctx.r9.s64 + 24000;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
loc_82CA2780:
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// li r30,0
	r30.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,380(r31)
	PPC_STORE_U32(r31.u32 + 380, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r3.u32);
	// bne cr6,0x82ca27d0
	if (!cr6.eq) goto loc_82CA27D0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA27D0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x82ca2818
	if (!cr6.eq) goto loc_82CA2818;
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA2818:
	// addi r11,r3,1024
	r11.s64 = ctx.r3.s64 + 1024;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq cr6,0x82ca28c8
	if (cr6.eq) goto loc_82CA28C8;
	// stw r28,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r28.u32);
loc_82CA282C:
	// li r11,33
	r11.s64 = 33;
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,468(r31)
	PPC_STORE_U32(r31.u32 + 468, r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// stb r11,472(r31)
	PPC_STORE_U8(r31.u32 + 472, r11.u8);
	// stb r30,236(r31)
	PPC_STORE_U8(r31.u32 + 236, r30.u8);
	// stb r30,237(r31)
	PPC_STORE_U8(r31.u32 + 237, r30.u8);
	// stw r30,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r30.u32);
	// stb r30,404(r31)
	PPC_STORE_U8(r31.u32 + 404, r30.u8);
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r30.u32);
	// stw r29,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r29.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(r31.u32 + 440, r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(r31.u32 + 456, r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r30.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r30.u32);
	// stw r29,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r29.u32);
	// bl 0x82ca2588
	sub_82CA2588(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ca2918
	if (cr6.eq) goto loc_82CA2918;
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca2918
	if (!cr6.eq) goto loc_82CA2918;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9b770
	sub_82C9B770(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA28C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c9af98
	sub_82C9AF98(ctx, base);
	// stw r3,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca282c
	if (!cr6.eq) goto loc_82CA282C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA2918:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ca294c
	if (cr6.eq) goto loc_82CA294C;
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,236(r31)
	PPC_STORE_U8(r31.u32 + 236, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r10,-1240
	r11.s64 = ctx.r10.s64 + -1240;
	// addi r9,r11,-368
	ctx.r9.s64 = r11.s64 + -368;
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// lbz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// stb r8,472(r31)
	PPC_STORE_U8(r31.u32 + 472, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CA294C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-1240
	ctx.r10.s64 = r11.s64 + -1240;
	// stw r10,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r10.u32);
loc_82CA2958:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82CA2968"))) PPC_WEAK_FUNC(sub_82CA2968);
PPC_FUNC_IMPL(__imp__sub_82CA2968) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ca26f0
	sub_82CA26F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca29d0
	if (cr6.eq) goto loc_82CA29D0;
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca29d0
	if (cr6.eq) goto loc_82CA29D0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,2928
	ctx.r4.s64 = r11.s64 + 2928;
	// bl 0x82c9cc38
	sub_82C9CC38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca29d0
	if (!cr6.eq) goto loc_82CA29D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c9b770
	sub_82C9B770(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CA29D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
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

__attribute__((alias("__imp__sub_82CA29F0"))) PPC_WEAK_FUNC(sub_82CA29F0);
PPC_FUNC_IMPL(__imp__sub_82CA29F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2A08"))) PPC_WEAK_FUNC(sub_82CA2A08);
PPC_FUNC_IMPL(__imp__sub_82CA2A08) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82c82220
	sub_82C82220(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca2a58
	if (cr6.eq) goto loc_82CA2A58;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82c823d8
	sub_82C823D8(ctx, base);
loc_82CA2A58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82CA2A78"))) PPC_WEAK_FUNC(sub_82CA2A78);
PPC_FUNC_IMPL(__imp__sub_82CA2A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
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
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca2ae8
	if (!cr6.eq) goto loc_82CA2AE8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca2b54
	goto loc_82CA2B54;
loc_82CA2AE8:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ca88e0
	sub_82CA88E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82cab4e0
	sub_82CAB4E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223f990
	sub_8223F990(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cab5b8
	sub_82CAB5B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x82ca2b5c
	sub_82CA2B5C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_82CA2B54:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82CA2B5C"))) PPC_WEAK_FUNC(sub_82CA2B5C);
PPC_FUNC_IMPL(__imp__sub_82CA2B5C) {
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
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ca8970
	sub_82CA8970(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2B88"))) PPC_WEAK_FUNC(sub_82CA2B88);
PPC_FUNC_IMPL(__imp__sub_82CA2B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,-3840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3840);
	// lwz r10,26816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26816);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_14"))) PPC_WEAK_FUNC(__savegprlr_14);
PPC_FUNC_IMPL(__imp____savegprlr_14) {
	PPC_FUNC_PROLOGUE();
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
	// std r14,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, r14.u64);
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_15"))) PPC_WEAK_FUNC(__savegprlr_15);
PPC_FUNC_IMPL(__imp____savegprlr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_16"))) PPC_WEAK_FUNC(__savegprlr_16);
PPC_FUNC_IMPL(__imp____savegprlr_16) {
	PPC_FUNC_PROLOGUE();
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
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_17"))) PPC_WEAK_FUNC(__savegprlr_17);
PPC_FUNC_IMPL(__imp____savegprlr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_18"))) PPC_WEAK_FUNC(__savegprlr_18);
PPC_FUNC_IMPL(__imp____savegprlr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_19"))) PPC_WEAK_FUNC(__savegprlr_19);
PPC_FUNC_IMPL(__imp____savegprlr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_20"))) PPC_WEAK_FUNC(__savegprlr_20);
PPC_FUNC_IMPL(__imp____savegprlr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_21"))) PPC_WEAK_FUNC(__savegprlr_21);
PPC_FUNC_IMPL(__imp____savegprlr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_22"))) PPC_WEAK_FUNC(__savegprlr_22);
PPC_FUNC_IMPL(__imp____savegprlr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_23"))) PPC_WEAK_FUNC(__savegprlr_23);
PPC_FUNC_IMPL(__imp____savegprlr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_24"))) PPC_WEAK_FUNC(__savegprlr_24);
PPC_FUNC_IMPL(__imp____savegprlr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_25"))) PPC_WEAK_FUNC(__savegprlr_25);
PPC_FUNC_IMPL(__imp____savegprlr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_26"))) PPC_WEAK_FUNC(__savegprlr_26);
PPC_FUNC_IMPL(__imp____savegprlr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_27"))) PPC_WEAK_FUNC(__savegprlr_27);
PPC_FUNC_IMPL(__imp____savegprlr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_28"))) PPC_WEAK_FUNC(__savegprlr_28);
PPC_FUNC_IMPL(__imp____savegprlr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_29"))) PPC_WEAK_FUNC(__savegprlr_29);
PPC_FUNC_IMPL(__imp____savegprlr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_30"))) PPC_WEAK_FUNC(__savegprlr_30);
PPC_FUNC_IMPL(__imp____savegprlr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_31"))) PPC_WEAK_FUNC(__savegprlr_31);
PPC_FUNC_IMPL(__imp____savegprlr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_14"))) PPC_WEAK_FUNC(__restgprlr_14);
PPC_FUNC_IMPL(__imp____restgprlr_14) {
	PPC_FUNC_PROLOGUE();
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
	// ld r14,-152(r1)
	r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_15"))) PPC_WEAK_FUNC(__restgprlr_15);
PPC_FUNC_IMPL(__imp____restgprlr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r15,-144(r1)
	r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_16"))) PPC_WEAK_FUNC(__restgprlr_16);
PPC_FUNC_IMPL(__imp____restgprlr_16) {
	PPC_FUNC_PROLOGUE();
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
	// ld r16,-136(r1)
	r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_17"))) PPC_WEAK_FUNC(__restgprlr_17);
PPC_FUNC_IMPL(__imp____restgprlr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_18"))) PPC_WEAK_FUNC(__restgprlr_18);
PPC_FUNC_IMPL(__imp____restgprlr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_19"))) PPC_WEAK_FUNC(__restgprlr_19);
PPC_FUNC_IMPL(__imp____restgprlr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_20"))) PPC_WEAK_FUNC(__restgprlr_20);
PPC_FUNC_IMPL(__imp____restgprlr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_21"))) PPC_WEAK_FUNC(__restgprlr_21);
PPC_FUNC_IMPL(__imp____restgprlr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_22"))) PPC_WEAK_FUNC(__restgprlr_22);
PPC_FUNC_IMPL(__imp____restgprlr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_23"))) PPC_WEAK_FUNC(__restgprlr_23);
PPC_FUNC_IMPL(__imp____restgprlr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_24"))) PPC_WEAK_FUNC(__restgprlr_24);
PPC_FUNC_IMPL(__imp____restgprlr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_25"))) PPC_WEAK_FUNC(__restgprlr_25);
PPC_FUNC_IMPL(__imp____restgprlr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_26"))) PPC_WEAK_FUNC(__restgprlr_26);
PPC_FUNC_IMPL(__imp____restgprlr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_27"))) PPC_WEAK_FUNC(__restgprlr_27);
PPC_FUNC_IMPL(__imp____restgprlr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_28"))) PPC_WEAK_FUNC(__restgprlr_28);
PPC_FUNC_IMPL(__imp____restgprlr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_29"))) PPC_WEAK_FUNC(__restgprlr_29);
PPC_FUNC_IMPL(__imp____restgprlr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_30"))) PPC_WEAK_FUNC(__restgprlr_30);
PPC_FUNC_IMPL(__imp____restgprlr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_31"))) PPC_WEAK_FUNC(__restgprlr_31);
PPC_FUNC_IMPL(__imp____restgprlr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA2C54"))) PPC_WEAK_FUNC(sub_82CA2C54);
PPC_FUNC_IMPL(__imp__sub_82CA2C54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r12{};
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	r12.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82CA2C60"))) PPC_WEAK_FUNC(sub_82CA2C60);
PPC_FUNC_IMPL(__imp__sub_82CA2C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// clrlwi r6,r3,29
	ctx.r6.u64 = ctx.r3.u32 & 0x7;
	// dcbt r0,r4
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,8
	xer.ca = ctx.r6.u32 <= 8;
	ctx.r6.s64 = 8 - ctx.r6.s64;
	// beq 0x82ca2cc4
	if (cr0.eq) goto loc_82CA2CC4;
	// cmplw r5,r6
	cr0.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// ble 0x82ca2ce0
	if (!cr0.gt) goto loc_82CA2CE0;
	// cmplwi r6,4
	cr0.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// beq 0x82ca2cb0
	if (cr0.eq) goto loc_82CA2CB0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2C98;
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
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// cmplwi cr1,r6,0
	cr1.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// cmplwi cr7,r5,128
	cr7.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// beq cr6,0x82ca2ea8
	if (cr6.eq) goto loc_82CA2EA8;
	// bne cr1,0x82ca2fd8
	if (!cr1.eq) goto loc_82CA2FD8;
	// bge cr7,0x82ca2d7c
	if (!cr7.lt) goto loc_82CA2D7C;
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
	cr1.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr1,0x82ca2d10
	if (cr1.eq) goto loc_82CA2D10;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2D04;
loc_82CA2D10:
	// cmplwi cr1,r6,4
	cr1.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// beq cr6,0x82ca2d34
	if (cr6.eq) goto loc_82CA2D34;
	// beq cr1,0x82ca2d3c
	if (cr1.eq) goto loc_82CA2D3C;
	// addi r3,r3,7
	ctx.r3.s64 = ctx.r3.s64 + 7;
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2D28;
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
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x82ca2d58
	if (!cr0.eq) goto loc_82CA2D58;
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
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,128
	xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82ca2dac
	if (cr0.eq) goto loc_82CA2DAC;
	// rlwinm r7,r6,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2DA0;
loc_82CA2DAC:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82ca2cec
	if (cr0.eq) goto loc_82CA2CEC;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CA2DDC:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82ca2ddc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2DDC;
	// add r12,r4,r5
	r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	r11.s64 = r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
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
	cr0.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge 0x82ca2e90
	if (!cr0.lt) goto loc_82CA2E90;
	// dcbt r9,r4
	// bdnz 0x82ca2dfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2DFC;
	// b 0x82ca2cec
	goto loc_82CA2CEC;
loc_82CA2E90:
	// beq cr1,0x82ca2ea0
	if (cr1.eq) goto loc_82CA2EA0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
loc_82CA2EA0:
	// bdnz 0x82ca2dfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2DFC;
	// b 0x82ca2cec
	goto loc_82CA2CEC;
loc_82CA2EA8:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// bge cr7,0x82ca2f00
	if (!cr7.lt) goto loc_82CA2F00;
	// dcbtst r0,r3
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_82CA2EB8:
	// rlwinm r7,r5,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1F;
	// clrlwi r6,r5,30
	ctx.r6.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr1,r7,0
	cr1.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr1,0x82ca2edc
	if (cr1.eq) goto loc_82CA2EDC;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2ED0;
loc_82CA2EDC:
	// beq cr6,0x82ca2ef8
	if (cr6.eq) goto loc_82CA2EF8;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2EEC;
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
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,128
	xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82ca2f2c
	if (cr0.eq) goto loc_82CA2F2C;
	// rlwinm r7,r6,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2F20;
loc_82CA2F2C:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82ca2eb8
	if (cr0.eq) goto loc_82CA2EB8;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CA2F5C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82ca2f5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2F5C;
	// add r12,r4,r5
	r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	r11.s64 = r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82CA2F7C:
	// li r6,8
	ctx.r6.s64 = 8;
loc_82CA2F80:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r0,4(r4)
	r0.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r0,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r0.u32);
	// lwzu r0,16(r4)
	ea = 16 + ctx.r4.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stwu r0,16(r3)
	ea = 16 + ctx.r3.u32;
	PPC_STORE_U32(ea, r0.u32);
	ctx.r3.u32 = ea;
	// bne 0x82ca2f80
	if (!cr0.eq) goto loc_82CA2F80;
	// cmplw r4,r11
	cr0.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge 0x82ca2fc0
	if (!cr0.lt) goto loc_82CA2FC0;
	// dcbt r9,r4
	// bdnz 0x82ca2f7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2F7C;
	// b 0x82ca2eb8
	goto loc_82CA2EB8;
loc_82CA2FC0:
	// beq cr1,0x82ca2fd0
	if (cr1.eq) goto loc_82CA2FD0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
loc_82CA2FD0:
	// bdnz 0x82ca2f7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2F7C;
	// b 0x82ca2eb8
	goto loc_82CA2EB8;
loc_82CA2FD8:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// bge cr7,0x82ca300c
	if (!cr7.lt) goto loc_82CA300C;
	// dcbtst r0,r3
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82CA2FE8:
	// clrlwi r6,r5,25
	ctx.r6.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// beq 0x82ca3004
	if (cr0.eq) goto loc_82CA3004;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA2FF8;
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
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,128
	xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82ca3034
	if (cr0.eq) goto loc_82CA3034;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA3028;
loc_82CA3034:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82ca2fe8
	if (cr0.eq) goto loc_82CA2FE8;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CA3064:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82ca3064
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA3064;
	// add r12,r4,r5
	r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r9,r12
	r11.s64 = r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
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
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
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
	if (!cr0.eq) goto loc_82CA3088;
	// cmplw r4,r11
	cr0.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge 0x82ca30d0
	if (!cr0.lt) goto loc_82CA30D0;
	// dcbt r9,r4
	// bdnz 0x82ca3084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA3084;
	// b 0x82ca2fe8
	goto loc_82CA2FE8;
loc_82CA30D0:
	// beq cr1,0x82ca30e0
	if (cr1.eq) goto loc_82CA30E0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
loc_82CA30E0:
	// bdnz 0x82ca3084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA3084;
	// b 0x82ca2fe8
	goto loc_82CA2FE8;
}

__attribute__((alias("__imp__sub_82CA30E8"))) PPC_WEAK_FUNC(sub_82CA30E8);
PPC_FUNC_IMPL(__imp__sub_82CA30E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	// addi r0,r5,1
	r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctr.u64 = r0.u64;
	// b 0x82ca310c
	goto loc_82CA310C;
loc_82CA30F8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82CA310C:
	// andi. r0,r6,3
	r0.u64 = ctx.r6.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bdnzf eq,0x82ca30f8
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_82CA30F8;
	// rlwinm. r0,r5,30,2,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// beq- 0x82ca313c
	if (cr0.eq) goto loc_82CA313C;
	// mtctr r0
	ctr.u64 = r0.u64;
	// andi. r0,r4,3
	r0.u64 = ctx.r4.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bne- 0x82ca3160
	if (!cr0.eq) goto loc_82CA3160;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA3128;
loc_82CA313C:
	// andi. r0,r5,3
	r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
loc_82CA3148:
	// lbz r0,0(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x82ca3148
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA3148;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA3160;
	// b 0x82ca313c
	goto loc_82CA313C;
}

__attribute__((alias("__imp__sub_82CA3190"))) PPC_WEAK_FUNC(sub_82CA3190);
PPC_FUNC_IMPL(__imp__sub_82CA3190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	// addi r0,r5,1
	r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctr.u64 = r0.u64;
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
	r0.u64 = ctx.r6.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bdnzf eq,0x82ca31a0
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_82CA31A0;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x82ca31e0
	if (cr0.eq) goto loc_82CA31E0;
	// mtctr r0
	ctr.u64 = r0.u64;
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
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA31C8;
loc_82CA31E0:
	// rlwinm. r0,r5,30,30,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// beq- 0x82ca320c
	if (cr0.eq) goto loc_82CA320C;
	// mtctr r0
	ctr.u64 = r0.u64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x82ca320c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CA320C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x82ca320c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CA320C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_82CA320C:
	// andi. r0,r5,3
	r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctr.u64;
	if (ctr.u32 == 0) return;
}

__attribute__((alias("__imp__sub_82CA3220"))) PPC_WEAK_FUNC(sub_82CA3220);
PPC_FUNC_IMPL(__imp__sub_82CA3220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// stb r4,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctr.u64;
	if (ctr.u32 == 0) return;
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
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca44c8
	sub_82CA44C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3278"))) PPC_WEAK_FUNC(sub_82CA3278);
PPC_FUNC_IMPL(__imp__sub_82CA3278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// lis r11,-32053
	r11.s64 = -2100625408;
	// addi r30,r8,-3832
	r30.s64 = ctx.r8.s64 + -3832;
	// addi r11,r11,-15504
	r11.s64 = r11.s64 + -15504;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// stw r11,-3832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3832, r11.u32);
	// lis r31,-32053
	r31.s64 = -2100625408;
	// addi r10,r10,-17696
	ctx.r10.s64 = ctx.r10.s64 + -17696;
	// addi r9,r9,-17712
	ctx.r9.s64 = ctx.r9.s64 + -17712;
	// addi r11,r31,-17704
	r11.s64 = r31.s64 + -17704;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r3,-32053
	ctx.r3.s64 = -2100625408;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lis r4,-32053
	ctx.r4.s64 = -2100625408;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lis r5,-32216
	ctx.r5.s64 = -2111307776;
	// addi r10,r3,-17840
	ctx.r10.s64 = ctx.r3.s64 + -17840;
	// addi r9,r4,-15504
	ctx.r9.s64 = ctx.r4.s64 + -15504;
	// addi r11,r5,-30064
	r11.s64 = ctx.r5.s64 + -30064;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lis r6,-32053
	ctx.r6.s64 = -2100625408;
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// addi r10,r6,-17808
	ctx.r10.s64 = ctx.r6.s64 + -17808;
	// addi r9,r7,-10280
	ctx.r9.s64 = ctx.r7.s64 + -10280;
	// addi r11,r8,-18000
	r11.s64 = ctx.r8.s64 + -18000;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3310"))) PPC_WEAK_FUNC(sub_82CA3310);
PPC_FUNC_IMPL(__imp__sub_82CA3310) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3278
	sub_82CA3278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3318"))) PPC_WEAK_FUNC(sub_82CA3318);
PPC_FUNC_IMPL(__imp__sub_82CA3318) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca334c
	if (cr6.eq) goto loc_82CA334C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,3260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 3260);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca3370
	if (cr6.eq) goto loc_82CA3370;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca3370
	goto loc_82CA3370;
loc_82CA334C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,3264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 3264);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca3368
	if (cr6.eq) goto loc_82CA3368;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA3368:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cac700
	sub_82CAC700(ctx, base);
loc_82CA3370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3388"))) PPC_WEAK_FUNC(sub_82CA3388);
PPC_FUNC_IMPL(__imp__sub_82CA3388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82cac520
	sub_82CAC520(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ca33d8
	if (cr0.eq) goto loc_82CA33D8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca33d8
	if (cr6.eq) goto loc_82CA33D8;
	// bl 0x82cbbf60
	sub_82CBBF60(ctx, base);
loc_82CA33D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0728
	sub_82CC0728(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82ca97a8
	sub_82CA97A8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA33FC"))) PPC_WEAK_FUNC(sub_82CA33FC);
PPC_FUNC_IMPL(__imp__sub_82CA33FC) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82cac8c8
	sub_82CAC8C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3430"))) PPC_WEAK_FUNC(sub_82CA3430);
PPC_FUNC_IMPL(__imp__sub_82CA3430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82cac428
	sub_82CAC428(ctx, base);
	// bl 0x82cac418
	sub_82CAC418(ctx, base);
	// bl 0x82cac3d0
	sub_82CAC3D0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca3474
	if (!cr0.eq) goto loc_82CA3474;
	// bl 0x82cac418
	sub_82CAC418(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82cac480
	sub_82CAC480(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ca3494
	if (!cr0.eq) goto loc_82CA3494;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// bl 0x82cc0728
	sub_82CC0728(ctx, base);
loc_82CA3474:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82cac650
	sub_82CAC650(ctx, base);
loc_82CA3494:
	// bl 0x82ca3388
	sub_82CA3388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA34B0"))) PPC_WEAK_FUNC(sub_82CA34B0);
PPC_FUNC_IMPL(__imp__sub_82CA34B0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ca3500
	if (!cr6.eq) goto loc_82CA3500;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CA34F8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca3590
	goto loc_82CA3590;
loc_82CA3500:
	// bl 0x82cac428
	sub_82CAC428(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ca3570
	if (cr0.eq) goto loc_82CA3570;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cac508
	sub_82CAC508(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// lis r11,-32054
	r11.s64 = -2100690944;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,13360
	ctx.r5.s64 = r11.s64 + 13360;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd280
	sub_82CBD280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// beq 0x82ca3568
	if (cr0.eq) goto loc_82CA3568;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cc1610
	sub_82CC1610(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ca358c
	if (!cr6.eq) goto loc_82CA358C;
loc_82CA3568:
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82CA3570:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca34f8
	if (cr6.eq) goto loc_82CA34F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82240508
	sub_82240508(ctx, base);
	// b 0x82ca34f8
	goto loc_82CA34F8;
loc_82CA358C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82CA3590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82CA3598"))) PPC_WEAK_FUNC(sub_82CA3598);
PPC_FUNC_IMPL(__imp__sub_82CA3598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,29896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29896, r11.u32);
	// stw r11,29892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29892, r11.u32);
	// bne 0x82ca35d0
	if (!cr0.eq) goto loc_82CA35D0;
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
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CA35DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA35F8"))) PPC_WEAK_FUNC(sub_82CA35F8);
PPC_FUNC_IMPL(__imp__sub_82CA35F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82ca95c8
	sub_82CA95C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-31921
	r24.s64 = -2091974656;
	// lis r25,-31921
	r25.s64 = -2091974656;
	// lwz r30,29892(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 29892);
	// lwz r28,29896(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 29896);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82ca36bc
	if (cr6.lt) goto loc_82CA36BC;
	// subf r26,r28,r30
	r26.s64 = r30.s64 - r28.s64;
	// addi r27,r26,4
	r27.s64 = r26.s64 + 4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// blt cr6,0x82ca36bc
	if (cr6.lt) goto loc_82CA36BC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82caacd0
	sub_82CAACD0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x82ca36a8
	if (!cr6.lt) goto loc_82CA36A8;
	// cmplwi cr6,r29,2048
	cr6.compare<uint32_t>(r29.u32, 2048, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// blt cr6,0x82ca3660
	if (cr6.lt) goto loc_82CA3660;
	// li r11,2048
	r11.s64 = 2048;
loc_82CA3660:
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// blt cr6,0x82ca367c
	if (cr6.lt) goto loc_82CA367C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca8570
	sub_82CA8570(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ca3698
	if (!cr0.eq) goto loc_82CA3698;
loc_82CA367C:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// blt cr6,0x82ca36bc
	if (cr6.lt) goto loc_82CA36BC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca8570
	sub_82CA8570(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ca36bc
	if (cr0.eq) goto loc_82CA36BC;
loc_82CA3698:
	// srawi r11,r26,2
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r11.s64 = r26.s32 >> 2;
	// stw r3,29896(r25)
	PPC_STORE_U32(r25.u32 + 29896, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
loc_82CA36A8:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// stw r11,29892(r24)
	PPC_STORE_U32(r24.u32 + 29892, r11.u32);
	// b 0x82ca36c4
	goto loc_82CA36C4;
loc_82CA36BC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82CA36C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x82ca36dc
	sub_82CA36DC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82CA36DC"))) PPC_WEAK_FUNC(sub_82CA36DC);
PPC_FUNC_IMPL(__imp__sub_82CA36DC) {
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
	// bl 0x82ca95d0
	sub_82CA95D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3700"))) PPC_WEAK_FUNC(sub_82CA3700);
PPC_FUNC_IMPL(__imp__sub_82CA3700) {
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
	// bl 0x82ca35f8
	sub_82CA35F8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3730"))) PPC_WEAK_FUNC(sub_82CA3730);
PPC_FUNC_IMPL(__imp__sub_82CA3730) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca3758
	if (!cr6.eq) goto loc_82CA3758;
loc_82CA3750:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca3788
	goto loc_82CA3788;
loc_82CA3758:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca3790
	if (!cr6.eq) goto loc_82CA3790;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CA3784:
	// li r3,22
	ctx.r3.s64 = 22;
loc_82CA3788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82CA3790:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca37b0
	if (cr6.eq) goto loc_82CA37B0;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x82ca37b0
	if (cr6.lt) goto loc_82CA37B0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// b 0x82ca3750
	goto loc_82CA3750;
loc_82CA37B0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ca37f0
	if (!cr6.eq) goto loc_82CA37F0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CA37CC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ca3788
	goto loc_82CA3788;
loc_82CA37F0:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x82ca3784
	if (!cr6.lt) goto loc_82CA3784;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82ca37cc
	goto loc_82CA37CC;
}

__attribute__((alias("__imp__sub_82CA3808"))) PPC_WEAK_FUNC(sub_82CA3808);
PPC_FUNC_IMPL(__imp__sub_82CA3808) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ca38ac
	if (cr6.eq) goto loc_82CA38AC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca3858
	if (!cr6.eq) goto loc_82CA3858;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca38b0
	goto loc_82CA38B0;
loc_82CA3858:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca388c
	if (!cr6.eq) goto loc_82CA388C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CA3868:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ca38b0
	goto loc_82CA38B0;
loc_82CA388C:
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// bge cr6,0x82ca38a0
	if (!cr6.lt) goto loc_82CA38A0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82ca3868
	goto loc_82CA3868;
loc_82CA38A0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
loc_82CA38AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA38B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA38C8"))) PPC_WEAK_FUNC(sub_82CA38C8);
PPC_FUNC_IMPL(__imp__sub_82CA38C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,26892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26892);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ca38ec
	if (cr0.eq) goto loc_82CA38EC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA38EC:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82cacab8
	sub_82CACAB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca5da0
	sub_82CA5DA0(ctx, base);
	// bl 0x82ca5cf0
	sub_82CA5CF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3920"))) PPC_WEAK_FUNC(sub_82CA3920);
PPC_FUNC_IMPL(__imp__sub_82CA3920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCRegister r0{};
	uint32_t ea{};
	// mr. r0,r5
	r0.u64 = ctx.r5.u64;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// ble 0x82ca3964
	if (!cr0.gt) goto loc_82CA3964;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr1,r8,0
	cr1.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subfc. r3,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdnzf 4*cr1+eq,0x82ca3948
	--ctr.u64;
	if (ctr.u32 != 0 && !cr1.eq) goto loc_82CA3948;
	// blr 
	return;
loc_82CA3948:
	// bnelr 
	if (!cr0.eq) return;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmpwi cr1,r8,0
	cr1.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subfc. r3,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdnzf 4*cr1+eq,0x82ca3948
	--ctr.u64;
	if (ctr.u32 != 0 && !cr1.eq) goto loc_82CA3948;
	// blr 
	return;
loc_82CA3964:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3970"))) PPC_WEAK_FUNC(sub_82CA3970);
PPC_FUNC_IMPL(__imp__sub_82CA3970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r6,r11,-3224
	ctx.r6.s64 = r11.s64 + -3224;
	// b 0x822d6f90
	sub_822D6F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3980"))) PPC_WEAK_FUNC(sub_82CA3980);
PPC_FUNC_IMPL(__imp__sub_82CA3980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ca39a4
	if (cr0.eq) goto loc_82CA39A4;
loc_82CA398C:
	// cmpwi cr1,r6,0
	cr1.compare<int32_t>(ctx.r6.s32, 0, xer);
	// cmpw r6,r4
	cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr1,0x82ca39b4
	if (cr1.eq) goto loc_82CA39B4;
	// beq 0x82ca39b8
	if (cr0.eq) goto loc_82CA39B8;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x82ca398c
	goto loc_82CA398C;
loc_82CA39A4:
	// cmpwi r6,0
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82ca39b8
	if (cr0.eq) goto loc_82CA39B8;
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

__attribute__((alias("__imp__sub_82CA39C0"))) PPC_WEAK_FUNC(sub_82CA39C0);
PPC_FUNC_IMPL(__imp__sub_82CA39C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ca3a04
	if (!cr6.eq) goto loc_82CA3A04;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca3a0c
	if (!cr6.eq) goto loc_82CA3A0C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca3a14
	if (!cr6.eq) goto loc_82CA3A14;
loc_82CA39EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA39F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CA3A04:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca3a14
	if (cr6.eq) goto loc_82CA3A14;
loc_82CA3A0C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca3a40
	if (!cr6.eq) goto loc_82CA3A40;
loc_82CA3A14:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca39f0
	goto loc_82CA39F0;
loc_82CA3A40:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ca3a54
	if (!cr6.eq) goto loc_82CA3A54;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x82ca39ec
	goto loc_82CA39EC;
loc_82CA3A54:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ca3a90
	if (!cr6.eq) goto loc_82CA3A90;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CA3A6C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ca39f0
	goto loc_82CA39F0;
loc_82CA3A90:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82ca3ac8
	if (!cr6.eq) goto loc_82CA3AC8;
loc_82CA3AA4:
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x82ca3afc
	if (cr0.eq) goto loc_82CA3AFC;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ca3aa4
	if (!cr0.eq) goto loc_82CA3AA4;
	// b 0x82ca3afc
	goto loc_82CA3AFC;
loc_82CA3AC8:
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x82ca3af0
	if (cr0.eq) goto loc_82CA3AF0;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ca3af0
	if (cr0.eq) goto loc_82CA3AF0;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82ca3ac8
	if (!cr0.eq) goto loc_82CA3AC8;
loc_82CA3AF0:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ca3afc
	if (!cr6.eq) goto loc_82CA3AFC;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
loc_82CA3AFC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ca39ec
	if (!cr6.eq) goto loc_82CA39EC;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82ca3b1c
	if (!cr6.eq) goto loc_82CA3B1C;
	// add r11,r10,r4
	r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r8,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r8.u8);
	// b 0x82ca39f0
	goto loc_82CA39F0;
loc_82CA3B1C:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82ca3a6c
	goto loc_82CA3A6C;
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

__attribute__((alias("__imp__sub_82CA3B50"))) PPC_WEAK_FUNC(sub_82CA3B50);
PPC_FUNC_IMPL(__imp__sub_82CA3B50) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3B80"))) PPC_WEAK_FUNC(sub_82CA3B80);
PPC_FUNC_IMPL(__imp__sub_82CA3B80) {
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
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lis r11,3
	r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	r11.u64 = r11.u64 | 17405;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// addis r11,r11,39
	r11.s64 = r11.s64 + 2555904;
	// addi r11,r11,-24893
	r11.s64 = r11.s64 + -24893;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3BC0"))) PPC_WEAK_FUNC(sub_82CA3BC0);
PPC_FUNC_IMPL(__imp__sub_82CA3BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca3be8
	if (cr6.eq) goto loc_82CA3BE8;
loc_82CA3BCC:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca3be8
	if (cr6.eq) goto loc_82CA3BE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x82ca3bcc
	if (cr6.lt) goto loc_82CA3BCC;
loc_82CA3BE8:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3BF0"))) PPC_WEAK_FUNC(sub_82CA3BF0);
PPC_FUNC_IMPL(__imp__sub_82CA3BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ca3c60
	if (cr0.eq) goto loc_82CA3C60;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82CA3C0C:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca3c40
	if (cr6.eq) goto loc_82CA3C40;
loc_82CA3C18:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ca3c40
	if (cr0.eq) goto loc_82CA3C40;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ca3c40
	if (!cr0.eq) goto loc_82CA3C40;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ca3c18
	if (!cr0.eq) goto loc_82CA3C18;
loc_82CA3C40:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ca3c0c
	if (!cr0.eq) goto loc_82CA3C0C;
loc_82CA3C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3C68"))) PPC_WEAK_FUNC(sub_82CA3C68);
PPC_FUNC_IMPL(__imp__sub_82CA3C68) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,-4096
	r11.s64 = -4096;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x82ca3d0c
	if (cr6.gt) goto loc_82CA3D0C;
	// lis r28,-31949
	r28.s64 = -2093809664;
loc_82CA3C88:
	// bl 0x82239798
	sub_82239798(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ca3ca8
	if (!cr0.eq) goto loc_82CA3CA8;
	// bl 0x82cacb00
	sub_82CACB00(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82cacab8
	sub_82CACAB8(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82ca95c0
	sub_82CA95C0(ctx, base);
loc_82CA3CA8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// bne cr6,0x82ca3cb8
	if (!cr6.eq) goto loc_82CA3CB8;
	// li r31,1
	r31.s64 = 1;
loc_82CA3CB8:
	// bl 0x82239798
	sub_82239798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82238790
	sub_82238790(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82ca3d04
	if (!cr0.eq) goto loc_82CA3D04;
	// lwz r11,26932(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 26932);
	// li r31,12
	r31.s64 = 12;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca3cf4
	if (cr6.eq) goto loc_82CA3CF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cacc10
	sub_82CACC10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ca3c88
	if (!cr0.eq) goto loc_82CA3C88;
	// b 0x82ca3cfc
	goto loc_82CA3CFC;
loc_82CA3CF4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82CA3CFC:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82CA3D04:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82ca3d28
	goto loc_82CA3D28;
loc_82CA3D0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cacc10
	sub_82CACC10(ctx, base);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CA3D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82CA3D30"))) PPC_WEAK_FUNC(sub_82CA3D30);
PPC_FUNC_IMPL(__imp__sub_82CA3D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca7000
	sub_82CA7000(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3D78"))) PPC_WEAK_FUNC(sub_82CA3D78);
PPC_FUNC_IMPL(__imp__sub_82CA3D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,3376(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3DB0"))) PPC_WEAK_FUNC(sub_82CA3DB0);
PPC_FUNC_IMPL(__imp__sub_82CA3DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// not r8,r11
	ctx.r8.u64 = ~r11.u64;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,3376(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// rlwimi r8,r11,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
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
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x82ca3e38
	if (!cr6.eq) goto loc_82CA3E38;
	// bl 0x82cacb78
	sub_82CACB78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ca3e30
	if (cr6.eq) goto loc_82CA3E30;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82ca3e28
	if (cr6.eq) goto loc_82CA3E28;
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
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
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca3e74
	if (!cr6.eq) goto loc_82CA3E74;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ca3e5c
	if (!cr0.eq) goto loc_82CA3E5C;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca3e74
	if (cr6.eq) goto loc_82CA3E74;
loc_82CA3E5C:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// b 0x82ca3ea4
	goto loc_82CA3EA4;
loc_82CA3E74:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfd f0,3376(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x82ca3e98
	if (!cr6.eq) goto loc_82CA3E98;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// b 0x82ca3ea4
	goto loc_82CA3EA4;
loc_82CA3E98:
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi r3,r11,256
	ctx.r3.s64 = r11.s64 + 256;
loc_82CA3EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3EB8"))) PPC_WEAK_FUNC(sub_82CA3EB8);
PPC_FUNC_IMPL(__imp__sub_82CA3EB8) {
	PPC_FUNC_PROLOGUE();
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
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca3f20
	if (!cr6.eq) goto loc_82CA3F20;
loc_82CA3EF4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca3fb0
	goto loc_82CA3FB0;
loc_82CA3F20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca3f30
	if (cr6.eq) goto loc_82CA3F30;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca3ef4
	if (cr6.eq) goto loc_82CA3EF4;
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
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bgt cr6,0x82ca3f54
	if (cr6.gt) goto loc_82CA3F54;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_82CA3F54:
	// li r11,66
	r11.s64 = 66;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8223f990
	sub_8223F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca3fac
	if (cr6.eq) goto loc_82CA3FAC;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// blt 0x82ca3fa0
	if (cr0.lt) goto loc_82CA3FA0;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82ca3fac
	goto loc_82CA3FAC;
loc_82CA3FA0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CA3FAC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82CA3FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA3FC8"))) PPC_WEAK_FUNC(sub_82CA3FC8);
PPC_FUNC_IMPL(__imp__sub_82CA3FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-5216
	r11.s64 = r11.s64 + -5216;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82ca4004
	if (!cr6.gt) goto loc_82CA4004;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r4,1
	xer.ca = ctx.r4.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r4.s64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	f0.f64 = ctx.f12.f64 * f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(f0.f64);
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
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82ca4020
	if (!cr6.eq) goto loc_82CA4020;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_82CA4020:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,120(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 * f0.f64 + ctx.f11.f64;
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = ctx.f4.f64 * f0.f64 + ctx.f12.f64;
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f10.f64;
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = ctx.f12.f64 * f0.f64 + ctx.f9.f64;
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f8.f64;
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = ctx.f12.f64 * f0.f64 + ctx.f7.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * f0.f64;
	// fmadd f0,f12,f0,f6
	f0.f64 = ctx.f12.f64 * f0.f64 + ctx.f6.f64;
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	f0.f64 = ctx.f12.f64 / f0.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// bne cr6,0x82ca40a0
	if (!cr6.eq) goto loc_82CA40A0;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfdx f13,r10,r11
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
loc_82CA40A0:
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// lfdx f12,r10,r11
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// fadd f0,f12,f0
	f0.f64 = ctx.f12.f64 + f0.f64;
	// fsel f1,f1,f13,f0
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA40C0"))) PPC_WEAK_FUNC(sub_82CA40C0);
PPC_FUNC_IMPL(__imp__sub_82CA40C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lis r9,32752
	ctx.r9.s64 = 2146435072;
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f31.u64);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// fabs f0,f1
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ca4148
	if (!cr6.eq) goto loc_82CA4148;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca4184
	if (!cr6.eq) goto loc_82CA4184;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,3248(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82ca412c
	if (!cr6.gt) goto loc_82CA412C;
loc_82CA4120:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f0,-3216(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3216);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA412C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82ca4140
	if (!cr6.lt) goto loc_82CA4140;
loc_82CA4134:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA4140:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// b 0x82ca4228
	goto loc_82CA4228;
loc_82CA4148:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca4184
	if (!cr6.eq) goto loc_82CA4184;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca4184
	if (!cr6.eq) goto loc_82CA4184;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ca4134
	if (cr6.gt) goto loc_82CA4134;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82ca4120
	if (cr6.lt) goto loc_82CA4120;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r30,1
	r30.s64 = 1;
	// lfd f0,-3208(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3208);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA4184:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ca41bc
	if (!cr6.eq) goto loc_82CA41BC;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca4228
	if (!cr6.eq) goto loc_82CA4228;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x82ca4120
	if (cr6.gt) goto loc_82CA4120;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,3248(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fsel f0,f31,f13,f0
	f0.f64 = f31.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA41BC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca4228
	if (!cr6.eq) goto loc_82CA4228;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca4228
	if (!cr6.eq) goto loc_82CA4228;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821fe308
	sub_821FE308(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82ca4200
	if (!cr6.gt) goto loc_82CA4200;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfd f0,-3216(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3216);
	// bne cr6,0x82ca4224
	if (!cr6.eq) goto loc_82CA4224;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA4200:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82ca421c
	if (!cr6.lt) goto loc_82CA421C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ca4224
	if (!cr6.eq) goto loc_82CA4224;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f0,-3184(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3184);
	// b 0x82ca4224
	goto loc_82CA4224;
loc_82CA421C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
loc_82CA4224:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
loc_82CA4228:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
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

__attribute__((alias("__imp__sub_82CA4248"))) PPC_WEAK_FUNC(sub_82CA4248);
PPC_FUNC_IMPL(__imp__sub_82CA4248) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821882a8
	sub_821882A8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,26824(r9)
	PPC_STORE_U64(ctx.r9.u32 + 26824, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4288"))) PPC_WEAK_FUNC(sub_82CA4288);
PPC_FUNC_IMPL(__imp__sub_82CA4288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r31,255
	cr6.compare<uint32_t>(r31.u32, 255, xer);
	// bgt cr6,0x82ca42b8
	if (cr6.gt) goto loc_82CA42B8;
	// bl 0x82ca6ad0
	sub_82CA6AD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82ca42b8
	if (cr0.eq) goto loc_82CA42B8;
	// bl 0x821ee9e8
	sub_821EE9E8(ctx, base);
loc_82CA42B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA42D0"))) PPC_WEAK_FUNC(sub_82CA42D0);
PPC_FUNC_IMPL(__imp__sub_82CA42D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca42f0
	if (cr6.eq) goto loc_82CA42F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca431c
	if (!cr6.eq) goto loc_82CA431C;
loc_82CA42F0:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca439c
	goto loc_82CA439C;
loc_82CA431C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ca4358
	if (!cr6.eq) goto loc_82CA4358;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CA4334:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ca439c
	goto loc_82CA439C;
loc_82CA4358:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82CA435C:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x82ca437c
	if (cr0.eq) goto loc_82CA437C;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82ca435c
	if (!cr0.eq) goto loc_82CA435C;
loc_82CA437C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca4398
	if (!cr6.eq) goto loc_82CA4398;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82ca4334
	goto loc_82CA4334;
loc_82CA4398:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA439C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA43B0"))) PPC_WEAK_FUNC(sub_82CA43B0);
PPC_FUNC_IMPL(__imp__sub_82CA43B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca4400
	if (!cr6.eq) goto loc_82CA4400;
loc_82CA43D4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca44c0
	goto loc_82CA44C0;
loc_82CA4400:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca4410
	if (cr6.eq) goto loc_82CA4410;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca43d4
	if (cr6.eq) goto loc_82CA43D4;
loc_82CA4410:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82ca4428
	if (cr6.gt) goto loc_82CA4428;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_82CA4428:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca4460
	if (!cr6.eq) goto loc_82CA4460;
loc_82CA4458:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82ca44c0
	goto loc_82CA44C0;
loc_82CA4460:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82ca449c
	if (cr6.lt) goto loc_82CA449C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x82ca4488
	if (cr0.lt) goto loc_82CA4488;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82ca4458
	goto loc_82CA4458;
loc_82CA4488:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ca4458
	if (!cr6.eq) goto loc_82CA4458;
loc_82CA449C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r31,r29
	ctx.r10.u64 = r31.u64 + r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = r11.s64 + -2;
loc_82CA44C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82CA44C8"))) PPC_WEAK_FUNC(sub_82CA44C8);
PPC_FUNC_IMPL(__imp__sub_82CA44C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ca44f4
	if (!cr6.eq) goto loc_82CA44F4;
loc_82CA44E8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// b 0x82ca4540
	goto loc_82CA4540;
loc_82CA44F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca44e8
	if (cr6.eq) goto loc_82CA44E8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca44e8
	if (cr6.eq) goto loc_82CA44E8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-32053
	r11.s64 = -2100625408;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7000
	ctx.r3.s64 = r11.s64 + -7000;
	// bl 0x82ca43b0
	sub_82CA43B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82ca4530
	if (!cr0.lt) goto loc_82CA4530;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82CA4530:
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x82ca4560
	if (!cr6.eq) goto loc_82CA4560;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
loc_82CA4540:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
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
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA4560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
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

__attribute__((alias("__imp__sub_82CA4588"))) PPC_WEAK_FUNC(sub_82CA4588);
PPC_FUNC_IMPL(__imp__sub_82CA4588) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ca45e4
	if (!cr6.eq) goto loc_82CA45E4;
loc_82CA45B4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
loc_82CA45BC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
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
	sub_82CAB630(ctx, base);
loc_82CA45D8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA45DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82CA45E4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82ca4604
	if (!cr6.eq) goto loc_82CA4604;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca460c
	if (!cr6.eq) goto loc_82CA460C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ca45b4
	if (!cr6.eq) goto loc_82CA45B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca45dc
	goto loc_82CA45DC;
loc_82CA4604:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca45b4
	if (cr6.eq) goto loc_82CA45B4;
loc_82CA460C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca45b4
	if (cr6.eq) goto loc_82CA45B4;
	// li r24,0
	r24.s64 = 0;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// ble cr6,0x82ca466c
	if (!cr6.gt) goto loc_82CA466C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lis r11,-32053
	r11.s64 = -2100625408;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r25,1
	ctx.r5.s64 = r25.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7000
	ctx.r3.s64 = r11.s64 + -7000;
	// bl 0x82ca43b0
	sub_82CA43B0(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x82ca46c8
	if (!cr6.eq) goto loc_82CA46C8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x82ca45d8
	if (!cr6.eq) goto loc_82CA45D8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// b 0x82ca45d8
	goto loc_82CA45D8;
loc_82CA466C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lis r11,-32053
	r11.s64 = -2100625408;
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7000
	ctx.r3.s64 = r11.s64 + -7000;
	// bl 0x82ca43b0
	sub_82CA43B0(ctx, base);
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// stb r24,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r24.u8);
	// bne cr6,0x82ca46c8
	if (!cr6.eq) goto loc_82CA46C8;
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// bne cr6,0x82ca46d0
	if (!cr6.eq) goto loc_82CA46D0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x82ca45d8
	if (!cr6.eq) goto loc_82CA45D8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x82ca45d8
	goto loc_82CA45D8;
loc_82CA46C8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82ca45dc
	if (!cr6.lt) goto loc_82CA45DC;
loc_82CA46D0:
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
	// bne cr6,0x82ca45d8
	if (!cr6.eq) goto loc_82CA45D8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
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

__attribute__((alias("__imp__sub_82CA4700"))) PPC_WEAK_FUNC(sub_82CA4700);
PPC_FUNC_IMPL(__imp__sub_82CA4700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r26,0
	r26.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca4764
	if (!cr6.eq) goto loc_82CA4764;
loc_82CA4738:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA4764:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca4738
	if (cr6.eq) goto loc_82CA4738;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca4738
	if (cr6.eq) goto loc_82CA4738;
	// bl 0x82caf298
	sub_82CAF298(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// bne 0x82ca47bc
	if (!cr0.eq) goto loc_82CA47BC;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA47BC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca47fc
	if (!cr6.eq) goto loc_82CA47FC;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32054
	ctx.r10.s64 = -2100690944;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r10,18472
	ctx.r4.s64 = ctx.r10.s64 + 18472;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// bl 0x82caf450
	sub_82CAF450(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca4828
	goto loc_82CA4828;
loc_82CA47FC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf038
	sub_82CAF038(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82ca4854
	sub_82CA4854(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82ca482c
	goto loc_82CA482C;
loc_82CA4828:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82CA482C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82CA4834"))) PPC_WEAK_FUNC(sub_82CA4834);
PPC_FUNC_IMPL(__imp__sub_82CA4834) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x82ca486c
	goto loc_82CA486C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA486C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4854"))) PPC_WEAK_FUNC(sub_82CA4854);
PPC_FUNC_IMPL(__imp__sub_82CA4854) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
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
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca48e8
	if (!cr6.eq) goto loc_82CA48E8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca490c
	goto loc_82CA490C;
loc_82CA48E8:
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82ca4700
	sub_82CA4700(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ca4904
	if (cr0.eq) goto loc_82CA4904;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca490c
	goto loc_82CA490C;
loc_82CA4904:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CA490C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4920"))) PPC_WEAK_FUNC(sub_82CA4920);
PPC_FUNC_IMPL(__imp__sub_82CA4920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca4968
	if (!cr6.eq) goto loc_82CA4968;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca49c8
	goto loc_82CA49C8;
loc_82CA4968:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca49c0
	if (cr0.eq) goto loc_82CA49C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca4e68
	sub_82CA4E68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf720
	sub_82CAF720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// bl 0x82caf558
	sub_82CAF558(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82ca49ac
	if (!cr0.lt) goto loc_82CA49AC;
	// li r30,-1
	r30.s64 = -1;
	// b 0x82ca49c0
	goto loc_82CA49C0;
loc_82CA49AC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca49c0
	if (cr6.eq) goto loc_82CA49C0;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_82CA49C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_82CA49C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82CA49D8"))) PPC_WEAK_FUNC(sub_82CA49D8);
PPC_FUNC_IMPL(__imp__sub_82CA49D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca4a40
	if (!cr6.eq) goto loc_82CA4A40;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca4a80
	goto loc_82CA4A80;
loc_82CA4A40:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca4a58
	if (cr0.eq) goto loc_82CA4A58;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x82ca4a7c
	goto loc_82CA4A7C;
loc_82CA4A58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca4920
	sub_82CA4920(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x82ca4ab8
	sub_82CA4AB8(ctx, base);
loc_82CA4A7C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82CA4A80:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4A98"))) PPC_WEAK_FUNC(sub_82CA4A98);
PPC_FUNC_IMPL(__imp__sub_82CA4A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x82ca4ad0
	goto loc_82CA4AD0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA4AD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4AB8"))) PPC_WEAK_FUNC(sub_82CA4AB8);
PPC_FUNC_IMPL(__imp__sub_82CA4AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4AF0"))) PPC_WEAK_FUNC(sub_82CA4AF0);
PPC_FUNC_IMPL(__imp__sub_82CA4AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82ca4b48
	if (cr6.eq) goto loc_82CA4B48;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82ca4b48
	if (cr6.eq) goto loc_82CA4B48;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ca4b54
	if (!cr6.eq) goto loc_82CA4B54;
loc_82CA4B24:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CA4B48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA4B4C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c28
	return;
loc_82CA4B54:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ca4b24
	if (cr6.eq) goto loc_82CA4B24;
	// li r11,-1
	r11.s64 = -1;
	// twllei r25,0
	// divwu r11,r11,r25
	r11.u32 = r11.u32 / r25.u32;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bgt cr6,0x82ca4b24
	if (cr6.gt) goto loc_82CA4B24;
	// mullw r26,r25,r24
	r26.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82ca4d08
	if (cr6.eq) goto loc_82CA4D08;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82ca4d08
	if (cr6.eq) goto loc_82CA4D08;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca4bb0
	if (cr0.eq) goto loc_82CA4BB0;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// b 0x82ca4bb4
	goto loc_82CA4BB4;
loc_82CA4BB0:
	// li r27,4096
	r27.s64 = 4096;
loc_82CA4BB4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ca4d4c
	if (cr6.eq) goto loc_82CA4D4C;
loc_82CA4BBC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca4c1c
	if (cr0.eq) goto loc_82CA4C1C;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82ca4c1c
	if (cr6.eq) goto loc_82CA4C1C;
	// blt cr6,0x82ca4c9c
	if (cr6.lt) goto loc_82CA4C9C;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82ca4be8
	if (!cr6.lt) goto loc_82CA4BE8;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82CA4BE8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r31,r29,r31
	r31.s64 = r31.s64 - r29.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82ca4cec
	goto loc_82CA4CEC;
loc_82CA4C1C:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x82ca4cb8
	if (cr6.lt) goto loc_82CA4CB8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca4c3c
	if (cr6.eq) goto loc_82CA4C3C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca4e68
	sub_82CA4E68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ca4cf8
	if (!cr0.eq) goto loc_82CA4CF8;
loc_82CA4C3C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ca4c5c
	if (cr6.eq) goto loc_82CA4C5C;
	// divwu r11,r31,r27
	r11.u32 = r31.u32 / r27.u32;
	// twllei r27,0
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r29,r11,r31
	r29.s64 = r31.s64 - r11.s64;
	// b 0x82ca4c60
	goto loc_82CA4C60;
loc_82CA4C5C:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82CA4C60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82caf9e0
	sub_82CAF9E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca4c9c
	if (cr6.eq) goto loc_82CA4C9C;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bgt cr6,0x82ca4c8c
	if (cr6.gt) goto loc_82CA4C8C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82CA4C8C:
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bge cr6,0x82ca4cec
	if (!cr6.lt) goto loc_82CA4CEC;
loc_82CA4C9C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r10,r31,r26
	ctx.r10.s64 = r26.s64 - r31.s64;
	// twllei r25,0
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / r25.u32;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x82ca4b4c
	goto loc_82CA4B4C;
loc_82CA4CB8:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca4cf8
	if (cr6.eq) goto loc_82CA4CF8;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r27,r11
	r27.u64 = r11.u64;
	// bgt cr6,0x82ca4cec
	if (cr6.gt) goto loc_82CA4CEC;
	// li r27,1
	r27.s64 = 1;
loc_82CA4CEC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca4bbc
	if (!cr6.eq) goto loc_82CA4BBC;
	// b 0x82ca4d4c
	goto loc_82CA4D4C;
loc_82CA4CF8:
	// subf r11,r31,r26
	r11.s64 = r26.s64 - r31.s64;
	// twllei r25,0
	// divwu r3,r11,r25
	ctx.r3.u32 = r11.u32 / r25.u32;
	// b 0x82ca4b4c
	goto loc_82CA4B4C;
loc_82CA4D08:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ca4d4c
	if (cr6.eq) goto loc_82CA4D4C;
loc_82CA4D10:
	// cmplwi cr6,r31,255
	cr6.compare<uint32_t>(r31.u32, 255, xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// blt cr6,0x82ca4d20
	if (cr6.lt) goto loc_82CA4D20;
	// li r30,255
	r30.s64 = 255;
loc_82CA4D20:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r10.u8);
	// bl 0x82170010
	sub_82170010(ctx, base);
	// subf. r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82ca4d10
	if (!cr0.eq) goto loc_82CA4D10;
loc_82CA4D4C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x82ca4b4c
	goto loc_82CA4B4C;
}

__attribute__((alias("__imp__sub_82CA4D60"))) PPC_WEAK_FUNC(sub_82CA4D60);
PPC_FUNC_IMPL(__imp__sub_82CA4D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca4dcc
	if (cr6.eq) goto loc_82CA4DCC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ca4dcc
	if (cr6.eq) goto loc_82CA4DCC;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca4dd8
	if (!cr6.eq) goto loc_82CA4DD8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CA4DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA4DD0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82CA4DD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca4af0
	sub_82CA4AF0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82ca4e30
	sub_82CA4E30(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82ca4dd0
	goto loc_82CA4DD0;
}

__attribute__((alias("__imp__sub_82CA4E10"))) PPC_WEAK_FUNC(sub_82CA4E10);
PPC_FUNC_IMPL(__imp__sub_82CA4E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,188(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// b 0x82ca4e48
	goto loc_82CA4E48;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA4E48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4E30"))) PPC_WEAK_FUNC(sub_82CA4E30);
PPC_FUNC_IMPL(__imp__sub_82CA4E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4E68"))) PPC_WEAK_FUNC(sub_82CA4E68);
PPC_FUNC_IMPL(__imp__sub_82CA4E68) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82ca4ee0
	if (!cr6.eq) goto loc_82CA4EE0;
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca4ee0
	if (cr0.eq) goto loc_82CA4EE0;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82ca4ee0
	if (!cr0.gt) goto loc_82CA4EE0;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82caf9e0
	sub_82CAF9E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bne cr6,0x82ca4ed4
	if (!cr6.eq) goto loc_82CA4ED4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca4ee0
	if (cr0.eq) goto loc_82CA4EE0;
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x82ca4edc
	goto loc_82CA4EDC;
loc_82CA4ED4:
	// li r28,-1
	r28.s64 = -1;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_82CA4EDC:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82CA4EE0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82CA4F00"))) PPC_WEAK_FUNC(sub_82CA4F00);
PPC_FUNC_IMPL(__imp__sub_82CA4F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca4f24
	if (!cr6.eq) goto loc_82CA4F24;
	// bl 0x82ca4f80
	sub_82CA4F80(ctx, base);
	// b 0x82ca4f64
	goto loc_82CA4F64;
loc_82CA4F24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca4e68
	sub_82CA4E68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ca4f3c
	if (cr0.eq) goto loc_82CA4F3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca4f64
	goto loc_82CA4F64;
loc_82CA4F3C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca4f60
	if (cr0.eq) goto loc_82CA4F60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// bl 0x82cafb78
	sub_82CAFB78(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82ca4f64
	goto loc_82CA4F64;
loc_82CA4F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA4F64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4F80"))) PPC_WEAK_FUNC(sub_82CA4F80);
PPC_FUNC_IMPL(__imp__sub_82CA4F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r29,r11,29904
	r29.s64 = r11.s64 + 29904;
	// addi r10,r10,29908
	ctx.r10.s64 = ctx.r10.s64 + 29908;
loc_82CA4FC0:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x82ca507c
	if (!cr6.lt) goto loc_82CA507C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca5070
	if (cr6.eq) goto loc_82CA5070;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca5070
	if (cr0.eq) goto loc_82CA5070;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca88e0
	sub_82CA88E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca5064
	if (cr0.eq) goto loc_82CA5064;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x82ca5040
	if (!cr6.eq) goto loc_82CA5040;
	// bl 0x82ca4f00
	sub_82CA4F00(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca5064
	if (cr6.eq) goto loc_82CA5064;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x82ca5064
	goto loc_82CA5064;
loc_82CA5040:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82ca5064
	if (!cr6.eq) goto loc_82CA5064;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca5064
	if (cr0.eq) goto loc_82CA5064;
	// bl 0x82ca4f00
	sub_82CA4F00(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ca5064
	if (!cr6.eq) goto loc_82CA5064;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82CA5064:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82ca50f4
	sub_82CA50F4(ctx, base);
loc_82CA5070:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82ca4fc0
	goto loc_82CA4FC0;
loc_82CA507C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82ca50a4
	sub_82CA50A4(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// beq cr6,0x82ca509c
	if (cr6.eq) goto loc_82CA509C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82CA509C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82CA50A4"))) PPC_WEAK_FUNC(sub_82CA50A4);
PPC_FUNC_IMPL(__imp__sub_82CA50A4) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA50C8"))) PPC_WEAK_FUNC(sub_82CA50C8);
PPC_FUNC_IMPL(__imp__sub_82CA50C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r11,29904
	r29.s64 = r11.s64 + 29904;
	// b 0x82ca5110
	goto loc_82CA5110;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA5110:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ca8970
	sub_82CA8970(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r10,29904
	r29.s64 = ctx.r10.s64 + 29904;
	// addi r10,r11,29908
	ctx.r10.s64 = r11.s64 + 29908;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA50F4"))) PPC_WEAK_FUNC(sub_82CA50F4);
PPC_FUNC_IMPL(__imp__sub_82CA50F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ca8970
	sub_82CA8970(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r10,29904
	r29.s64 = ctx.r10.s64 + 29904;
	// addi r10,r11,29908
	ctx.r10.s64 = r11.s64 + 29908;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5160"))) PPC_WEAK_FUNC(sub_82CA5160);
PPC_FUNC_IMPL(__imp__sub_82CA5160) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82ca51e0
	if (cr6.eq) goto loc_82CA51E0;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82ca51e0
	if (cr6.eq) goto loc_82CA51E0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ca51b4
	if (!cr6.eq) goto loc_82CA51B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca4f80
	sub_82CA4F80(ctx, base);
	// b 0x82ca51e4
	goto loc_82CA51E4;
loc_82CA51B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca4f00
	sub_82CA4F00(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x82ca521c
	sub_82CA521C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82ca51e4
	goto loc_82CA51E4;
loc_82CA51E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA51E4:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA51FC"))) PPC_WEAK_FUNC(sub_82CA51FC);
PPC_FUNC_IMPL(__imp__sub_82CA51FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x82ca5234
	goto loc_82CA5234;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA5234:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA521C"))) PPC_WEAK_FUNC(sub_82CA521C);
PPC_FUNC_IMPL(__imp__sub_82CA521C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5258"))) PPC_WEAK_FUNC(sub_82CA5258);
PPC_FUNC_IMPL(__imp__sub_82CA5258) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ca4f80
	sub_82CA4F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5260"))) PPC_WEAK_FUNC(sub_82CA5260);
PPC_FUNC_IMPL(__imp__sub_82CA5260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ca52a0
	if (!cr0.eq) goto loc_82CA52A0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82ca5324
	goto loc_82CA5324;
loc_82CA52A0:
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne cr6,0x82ca52c0
	if (!cr6.eq) goto loc_82CA52C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca5440
	sub_82CA5440(ctx, base);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// li r30,0
	r30.s64 = 0;
loc_82CA52C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca4e68
	sub_82CA4E68(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca52e0
	if (cr0.eq) goto loc_82CA52E0;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82ca5300
	goto loc_82CA5300;
loc_82CA52E0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca5300
	if (cr0.eq) goto loc_82CA5300;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca5300
	if (cr0.eq) goto loc_82CA5300;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca5300
	if (!cr0.eq) goto loc_82CA5300;
	// li r11,512
	r11.s64 = 512;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82CA5300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82cb0068
	sub_82CB0068(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -r11.s64;
loc_82CA5324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82CA5338"))) PPC_WEAK_FUNC(sub_82CA5338);
PPC_FUNC_IMPL(__imp__sub_82CA5338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca5398
	if (!cr6.eq) goto loc_82CA5398;
loc_82CA536C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca53e0
	goto loc_82CA53E0;
loc_82CA5398:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82ca53b0
	if (cr6.eq) goto loc_82CA53B0;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x82ca53b0
	if (cr6.eq) goto loc_82CA53B0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x82ca536c
	if (!cr6.eq) goto loc_82CA536C;
loc_82CA53B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca5260
	sub_82CA5260(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x82ca5408
	sub_82CA5408(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82CA53E0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82CA53E8"))) PPC_WEAK_FUNC(sub_82CA53E8);
PPC_FUNC_IMPL(__imp__sub_82CA53E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// b 0x82ca5420
	goto loc_82CA5420;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA5420:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5408"))) PPC_WEAK_FUNC(sub_82CA5408);
PPC_FUNC_IMPL(__imp__sub_82CA5408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5440"))) PPC_WEAK_FUNC(sub_82CA5440);
PPC_FUNC_IMPL(__imp__sub_82CA5440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82ca5484
	if (!cr6.eq) goto loc_82CA5484;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CA547C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca565c
	goto loc_82CA565C;
loc_82CA5484:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82ca54a4
	if (!cr6.lt) goto loc_82CA54A4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82CA54A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cb0068
	sub_82CB0068(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// blt 0x82ca547c
	if (cr0.lt) goto loc_82CA547C;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// andi. r11,r7,264
	r11.u64 = ctx.r7.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca54d8
	if (!cr0.eq) goto loc_82CA54D8;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r3,r11,r24
	ctx.r3.s64 = r24.s64 - r11.s64;
	// b 0x82ca565c
	goto loc_82CA565C;
loc_82CA54D8:
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r26,r11,29632
	r26.s64 = r11.s64 + 29632;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r25,r11,r9
	r25.s64 = ctx.r9.s64 - r11.s64;
	// beq 0x82ca5550
	if (cr0.eq) goto loc_82CA5550;
	// srawi r10,r28,5
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = r28.s32 >> 5;
	// rlwinm r8,r28,6,21,25
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca5540
	if (cr0.eq) goto loc_82CA5540;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ca5540
	if (!cr6.lt) goto loc_82CA5540;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82CA5524:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bne cr6,0x82ca5534
	if (!cr6.eq) goto loc_82CA5534;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82CA5534:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ca5524
	if (cr6.lt) goto loc_82CA5524;
loc_82CA5540:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x82ca5570
	if (!cr6.eq) goto loc_82CA5570;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x82ca565c
	goto loc_82CA565C;
loc_82CA5550:
	// rlwinm. r10,r7,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ca5540
	if (!cr0.eq) goto loc_82CA5540;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82ca565c
	goto loc_82CA565C;
loc_82CA5570:
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca5658
	if (cr0.eq) goto loc_82CA5658;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca558c
	if (!cr6.eq) goto loc_82CA558C;
	// li r25,0
	r25.s64 = 0;
	// b 0x82ca5658
	goto loc_82CA5658;
loc_82CA558C:
	// srawi r8,r28,5
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r8.s64 = r28.s32 >> 5;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r30,r28,6,21,25
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r29,r26
	r11.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca5654
	if (cr0.eq) goto loc_82CA5654;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cb0068
	sub_82CB0068(ctx, base);
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, r24.s32, xer);
	// bne cr6,0x82ca5600
	if (!cr6.eq) goto loc_82CA5600;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// b 0x82ca55ec
	goto loc_82CA55EC;
loc_82CA55D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x82ca55e8
	if (!cr6.eq) goto loc_82CA55E8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CA55E8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82CA55EC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ca55d8
	if (cr6.lt) goto loc_82CA55D8;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm. r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82ca564c
	goto loc_82CA564C;
loc_82CA5600:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cb0068
	sub_82CB0068(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82ca547c
	if (cr0.lt) goto loc_82CA547C;
	// cmplwi cr6,r31,512
	cr6.compare<uint32_t>(r31.u32, 512, xer);
	// bgt cr6,0x82ca5638
	if (cr6.gt) goto loc_82CA5638;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca5638
	if (cr0.eq) goto loc_82CA5638;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r31,512
	r31.s64 = 512;
	// beq 0x82ca563c
	if (cr0.eq) goto loc_82CA563C;
loc_82CA5638:
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 24);
loc_82CA563C:
	// lwzx r11,r29,r26
	r11.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82CA564C:
	// beq 0x82ca5654
	if (cr0.eq) goto loc_82CA5654;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CA5654:
	// subf r24,r31,r24
	r24.s64 = r24.s64 - r31.s64;
loc_82CA5658:
	// add r3,r25,r24
	ctx.r3.u64 = r25.u64 + r24.u64;
loc_82CA565C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82CA5670"))) PPC_WEAK_FUNC(sub_82CA5670);
PPC_FUNC_IMPL(__imp__sub_82CA5670) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca56d0
	if (!cr6.eq) goto loc_82CA56D0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca56f8
	goto loc_82CA56F8;
loc_82CA56D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca5440
	sub_82CA5440(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x82ca5730
	sub_82CA5730(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82CA56F8:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5710"))) PPC_WEAK_FUNC(sub_82CA5710);
PPC_FUNC_IMPL(__imp__sub_82CA5710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x82ca5748
	goto loc_82CA5748;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA5748:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5730"))) PPC_WEAK_FUNC(sub_82CA5730);
PPC_FUNC_IMPL(__imp__sub_82CA5730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5768"))) PPC_WEAK_FUNC(sub_82CA5768);
PPC_FUNC_IMPL(__imp__sub_82CA5768) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca57b8
	if (!cr6.eq) goto loc_82CA57B8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// b 0x82ca5848
	goto loc_82CA5848;
loc_82CA57B8:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r30,r11,-3224
	r30.s64 = r11.s64 + -3224;
	// lwz r11,-3224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3224);
loc_82CA57C4:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82ca57e8
	if (!cr6.gt) goto loc_82CA57E8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82cb03d8
	sub_82CB03D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82ca57fc
	goto loc_82CA57FC;
loc_82CA57E8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_82CA57FC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca580c
	if (cr6.eq) goto loc_82CA580C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82ca57c4
	goto loc_82CA57C4;
loc_82CA580C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82CA5810:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca5810
	if (!cr6.eq) goto loc_82CA5810;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb0320
	sub_82CB0320(ctx, base);
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_82CA5848:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5860"))) PPC_WEAK_FUNC(sub_82CA5860);
PPC_FUNC_IMPL(__imp__sub_82CA5860) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca5768
	sub_82CA5768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5868"))) PPC_WEAK_FUNC(sub_82CA5868);
PPC_FUNC_IMPL(__imp__sub_82CA5868) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca58b8
	if (!cr6.eq) goto loc_82CA58B8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca58b8
	if (cr6.eq) goto loc_82CA58B8;
loc_82CA588C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CA58B0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c20
	return;
loc_82CA58B8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ca588c
	if (cr6.eq) goto loc_82CA588C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82ca588c
	if (cr6.eq) goto loc_82CA588C;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x82ca58b0
	if (cr6.lt) goto loc_82CA58B0;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// li r22,0
	r22.s64 = 0;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r28,r11,r3
	r28.u64 = r11.u64 + ctx.r3.u64;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,208
	r24.s64 = ctx.r1.s64 + 208;
loc_82CA58EC:
	// subf r11,r26,r28
	r11.s64 = r28.s64 - r26.s64;
	// twllei r27,0
	// divwu r11,r11,r27
	r11.u32 = r11.u32 / r27.u32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x82ca59a4
	if (cr6.gt) goto loc_82CA59A4;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// ble cr6,0x82ca5988
	if (!cr6.gt) goto loc_82CA5988;
	// add r28,r26,r27
	r28.u64 = r26.u64 + r27.u64;
loc_82CA5914:
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bgt cr6,0x82ca594c
	if (cr6.gt) goto loc_82CA594C;
loc_82CA5924:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ca5940
	if (!cr6.gt) goto loc_82CA5940;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82CA5940:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// ble cr6,0x82ca5924
	if (!cr6.gt) goto loc_82CA5924;
loc_82CA594C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x82ca597c
	if (cr6.eq) goto loc_82CA597C;
	// subf r9,r30,r29
	ctx.r9.s64 = r29.s64 - r30.s64;
loc_82CA5960:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82ca5960
	if (!cr0.eq) goto loc_82CA5960;
loc_82CA597C:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bgt cr6,0x82ca5914
	if (cr6.gt) goto loc_82CA5914;
loc_82CA5988:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// addi r23,r23,-4
	r23.s64 = r23.s64 + -4;
	// blt 0x82ca58b0
	if (cr0.lt) goto loc_82CA58B0;
	// lwz r26,0(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r28,0(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// b 0x82ca58ec
	goto loc_82CA58EC;
loc_82CA59A4:
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ca59f8
	if (!cr6.gt) goto loc_82CA59F8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82ca59f8
	if (cr6.eq) goto loc_82CA59F8;
	// subf r9,r29,r26
	ctx.r9.s64 = r26.s64 - r29.s64;
loc_82CA59DC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82ca59dc
	if (!cr0.eq) goto loc_82CA59DC;
loc_82CA59F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ca5a40
	if (!cr6.gt) goto loc_82CA5A40;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(r26.u32, r28.u32, xer);
	// beq cr6,0x82ca5a40
	if (cr6.eq) goto loc_82CA5A40;
	// subf r9,r28,r26
	ctx.r9.s64 = r26.s64 - r28.s64;
loc_82CA5A24:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82ca5a24
	if (!cr0.eq) goto loc_82CA5A24;
loc_82CA5A40:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ca5a88
	if (!cr6.gt) goto loc_82CA5A88;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x82ca5a88
	if (cr6.eq) goto loc_82CA5A88;
	// subf r9,r28,r29
	ctx.r9.s64 = r29.s64 - r28.s64;
loc_82CA5A6C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82ca5a6c
	if (!cr0.eq) goto loc_82CA5A6C;
loc_82CA5A88:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82CA5A90:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// ble cr6,0x82ca5ac4
	if (!cr6.gt) goto loc_82CA5AC4;
loc_82CA5A98:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82ca5ac4
	if (!cr6.lt) goto loc_82CA5AC4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ca5a98
	if (!cr6.gt) goto loc_82CA5A98;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bgt cr6,0x82ca5ae8
	if (cr6.gt) goto loc_82CA5AE8;
loc_82CA5AC4:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bgt cr6,0x82ca5ae8
	if (cr6.gt) goto loc_82CA5AE8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ca5ac4
	if (!cr6.gt) goto loc_82CA5AC4;
loc_82CA5AE8:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x82ca5b0c
	if (!cr6.gt) goto loc_82CA5B0C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82ca5ae8
	if (cr6.gt) goto loc_82CA5AE8;
loc_82CA5B0C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bgt cr6,0x82ca5b50
	if (cr6.gt) goto loc_82CA5B50;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// beq cr6,0x82ca5b40
	if (cr6.eq) goto loc_82CA5B40;
	// subf r9,r30,r31
	ctx.r9.s64 = r31.s64 - r30.s64;
loc_82CA5B24:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82ca5b24
	if (!cr0.eq) goto loc_82CA5B24;
loc_82CA5B40:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bne cr6,0x82ca5a90
	if (!cr6.eq) goto loc_82CA5A90;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x82ca5a90
	goto loc_82CA5A90;
loc_82CA5B50:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bge cr6,0x82ca5b88
	if (!cr6.lt) goto loc_82CA5B88;
loc_82CA5B5C:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x82ca5b88
	if (!cr6.gt) goto loc_82CA5B88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca5b5c
	if (cr6.eq) goto loc_82CA5B5C;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// blt cr6,0x82ca5bac
	if (cr6.lt) goto loc_82CA5BAC;
loc_82CA5B88:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// ble cr6,0x82ca5bac
	if (!cr6.gt) goto loc_82CA5BAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca5b88
	if (cr6.eq) goto loc_82CA5B88;
loc_82CA5BAC:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r26,r30
	ctx.r10.s64 = r30.s64 - r26.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82ca5be8
	if (cr6.lt) goto loc_82CA5BE8;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x82ca5bd8
	if (!cr6.lt) goto loc_82CA5BD8;
	// stw r26,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r26.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r30,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r30.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_82CA5BD8:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82ca5988
	if (!cr6.lt) goto loc_82CA5988;
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x82ca58ec
	goto loc_82CA58EC;
loc_82CA5BE8:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82ca5c04
	if (!cr6.lt) goto loc_82CA5C04;
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r28,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r28.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_82CA5C04:
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x82ca5988
	if (!cr6.lt) goto loc_82CA5988;
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x82ca58ec
	goto loc_82CA58EC;
}

__attribute__((alias("__imp__sub_82CA5C18"))) PPC_WEAK_FUNC(sub_82CA5C18);
PPC_FUNC_IMPL(__imp__sub_82CA5C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,-5080
	r30.s64 = r11.s64 + -5080;
	// lfd f0,32(r30)
	f0.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// fmul f1,f0,f31
	ctx.f1.f64 = f0.f64 * f31.f64;
	// bl 0x82cb0dc0
	sub_82CB0DC0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lfd f0,40(r30)
	f0.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// lfd f13,48(r30)
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f11,64(r30)
	ctx.f11.u64 = PPC_LOAD_U64(r30.u32 + 64);
	// lfd f12,72(r30)
	ctx.f12.u64 = PPC_LOAD_U64(r30.u32 + 72);
	// lfd f10,96(r30)
	ctx.f10.u64 = PPC_LOAD_U64(r30.u32 + 96);
	// lfd f9,88(r30)
	ctx.f9.u64 = PPC_LOAD_U64(r30.u32 + 88);
	// lfd f8,56(r30)
	ctx.f8.u64 = PPC_LOAD_U64(r30.u32 + 56);
	// lfd f7,80(r30)
	ctx.f7.u64 = PPC_LOAD_U64(r30.u32 + 80);
	// lfd f6,3368(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 3368);
	// fnmsub f0,f0,f30,f31
	f0.f64 = -(f0.f64 * f30.f64 - f31.f64);
	// fnmsub f0,f13,f30,f0
	f0.f64 = -(ctx.f13.f64 * f30.f64 - f0.f64);
	// fmul f13,f0,f0
	ctx.f13.f64 = f0.f64 * f0.f64;
	// fmadd f12,f12,f13,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64;
	// fmadd f11,f10,f13,f9
	ctx.f11.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f9.f64;
	// fmadd f12,f12,f13,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64;
	// fmadd f13,f11,f13,f7
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f12,f0
	f0.f64 = ctx.f12.f64 * f0.f64;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// fadd f31,f0,f6
	f31.f64 = f0.f64 + ctx.f6.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821fe2f0
	sub_821FE2F0(ctx, base);
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f30.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82CA5CF0"))) PPC_WEAK_FUNC(sub_82CA5CF0);
PPC_FUNC_IMPL(__imp__sub_82CA5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31953
	r31.s64 = -2094071808;
	// lwz r11,-4968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4968);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca5d18
	if (cr0.eq) goto loc_82CA5D18;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82cacab8
	sub_82CACAB8(ctx, base);
loc_82CA5D18:
	// bl 0x82cb0e08
	sub_82CB0E08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ca5d2c
	if (cr0.eq) goto loc_82CA5D2C;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82cb0e20
	sub_82CB0E20(ctx, base);
loc_82CA5D2C:
	// lwz r11,-4968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4968);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca5d98
	if (cr0.eq) goto loc_82CA5D98;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CA5D58:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82ca5d58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA5D58;
	// lwz r10,2808(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2808);
	// lis r11,16384
	r11.s64 = 1073741824;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,21
	r11.u64 = r11.u64 | 21;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82cbbe08
	sub_82CBBE08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbbed0
	sub_82CBBED0(ctx, base);
loc_82CA5D98:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82ca97a8
	sub_82CA97A8(ctx, base);
}

__attribute__((alias("__imp__sub_82CA5DA0"))) PPC_WEAK_FUNC(sub_82CA5DA0);
PPC_FUNC_IMPL(__imp__sub_82CA5DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// and r11,r3,r4
	r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lwz r3,-4968(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4968);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r11,-4968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4968, r11.u32);
	// blr 
	return;
}

