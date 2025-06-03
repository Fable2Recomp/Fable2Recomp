#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8320D280) {
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
	// bl 0x8320d0f0
	sub_8320D0F0(ctx, base);
	// rlwinm r11,r3,27,5,31
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
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

PPC_WEAK_FUNC(sub_8320D280) {
	__imp__sub_8320D280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D2D0) {
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
	// bl 0x8320d0f0
	sub_8320D0F0(ctx, base);
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_8320D2D0) {
	__imp__sub_8320D2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,228(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(228) );
	// lwz r3,56(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(56) );
	// rlwinm. r11,r11,25,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-15708(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-15708) );
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320D328) {
	__imp__sub_8320D328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// lwz r11,-15704(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-15704) );
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lwz r27,1456(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1456) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x8320d3b8
	if (cr0.eq) goto loc_8320D3B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x8320d3bc
	goto loc_8320D3BC;
loc_8320D3B8:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8320D3BC:
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_8320D350) {
	__imp__sub_8320D350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320d40c
	if (cr0.eq) goto loc_8320D40C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320D40C:
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

PPC_WEAK_FUNC(sub_8320D3D0) {
	__imp__sub_8320D3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D428) {
	PPC_FUNC_PROLOGUE();
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
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320d460
	if (!cr6.lt) goto loc_8320D460;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320d468
	goto loc_8320D468;
loc_8320D460:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320D468:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320d484
	if (!cr6.eq) goto loc_8320D484;
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(8) );
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// b 0x8320d4ac
	goto loc_8320D4AC;
loc_8320D484:
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// b 0x8320d49c
	goto loc_8320D49C;
loc_8320D490:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_8320D49C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8320d490
	if (!cr6.eq) goto loc_8320D490;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + int32_t(8) );
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
loc_8320D4AC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8320cff8
	sub_8320CFF8(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320d4dc
	if (!cr6.lt) goto loc_8320D4DC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320d4e4
	goto loc_8320D4E4;
loc_8320D4DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320D4E4:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r24,0
	r24.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r26,r24
	r26.u64 = r24.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r29,8(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320d598
	if (!cr6.gt) goto loc_8320D598;
	// lis r28,-31946
	r28.s64 = -2093613056;
loc_8320D508:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// bne cr6,0x8320d51c
	if (!cr6.eq) goto loc_8320D51C;
	// lwz r29,28(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8320D51C:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// lwz r11,-15704(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-15704) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r29
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x8320d280
	sub_8320D280(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320d588
	if (!cr0.eq) goto loc_8320D588;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8320d188
	sub_8320D188(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,-15704(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-15704) );
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8320d2d0
	sub_8320D2D0(ctx, base);
loc_8320D588:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8320d508
	if (cr6.lt) goto loc_8320D508;
loc_8320D598:
	// stw r24,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r24.u32);
	// stw r24,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_8320D428) {
	__imp__sub_8320D428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x8320d6b8
	if (cr6.eq) goto loc_8320D6B8;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,-15704(r11)
	PPC_STORE_U32(r11.u32 + -15704, ctx.r3.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r29,1456(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8320d61c
	if (cr0.eq) goto loc_8320D61C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x8320d620
	goto loc_8320D620;
loc_8320D61C:
	// li r30,0
	r30.s64 = 0;
loc_8320D620:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r29,0
	r29.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320d694
	if (!cr6.gt) goto loc_8320D694;
loc_8320D634:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8320d670
	if (cr0.eq) goto loc_8320D670;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8320d350
	sub_8320D350(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320d674
	goto loc_8320D674;
loc_8320D670:
	// li r30,0
	r30.s64 = 0;
loc_8320D674:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8320d634
	if (cr6.lt) goto loc_8320D634;
loc_8320D694:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// lwz r4,1456(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1456) );
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8320D6B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8320D5A8) {
	__imp__sub_8320D5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D6C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x8320d6fc
	if (!cr6.lt) goto loc_8320D6FC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r5,2,0,29
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320d708
	goto loc_8320D708;
loc_8320D6FC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8320D708:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320d728
	if (!cr6.lt) goto loc_8320D728;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320d730
	goto loc_8320D730;
loc_8320D728:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320D730:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8320D6C8) {
	__imp__sub_8320D6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// lwz r4,1456(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1456) );
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8320d7f8
	if (!cr0.gt) goto loc_8320D7F8;
loc_8320D7A8:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8320d7e0
	if (cr0.eq) goto loc_8320D7E0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8320D7E0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8320d7a8
	if (cr6.lt) goto loc_8320D7A8;
loc_8320D7F8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8320d80c
	if (cr6.eq) goto loc_8320D80C;
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320D80C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,-15704(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-15704) );
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r3,-15704(r30)
	PPC_STORE_U32(r30.u32 + -15704, ctx.r3.u32);
	// ble cr6,0x8320d858
	if (!cr6.gt) goto loc_8320D858;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8320d844
	goto loc_8320D844;
loc_8320D840:
	// lwz r3,-15704(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-15704) );
loc_8320D844:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8320d840
	if (!cr0.eq) goto loc_8320D840;
loc_8320D858:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8320d8a4
	if (cr0.eq) goto loc_8320D8A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8320d350
	sub_8320D350(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320d8a8
	goto loc_8320D8A8;
loc_8320D8A4:
	// li r30,0
	r30.s64 = 0;
loc_8320D8A8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320D750) {
	__imp__sub_8320D750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D8C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// beq cr6,0x8320da04
	if (cr6.eq) goto loc_8320DA04;
	// bl 0x8320d280
	sub_8320D280(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320da04
	if (!cr0.eq) goto loc_8320DA04;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320d2d0
	sub_8320D2D0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8320d91c
	if (!cr6.lt) goto loc_8320D91C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320d924
	goto loc_8320D924;
loc_8320D91C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320D924:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8320cff8
	sub_8320CFF8(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8320d954
	if (!cr6.lt) goto loc_8320D954;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320d95c
	goto loc_8320D95C;
loc_8320D954:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320D95C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// bl 0x8320d188
	sub_8320D188(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320d9a0
	if (!cr6.lt) goto loc_8320D9A0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320d9a8
	goto loc_8320D9A8;
loc_8320D9A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320D9A8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8320cff8
	sub_8320CFF8(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320d9d8
	if (!cr6.lt) goto loc_8320D9D8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320d9e0
	goto loc_8320D9E0;
loc_8320D9D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320D9E0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x8320d188
	sub_8320D188(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
loc_8320DA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8320D8C0) {
	__imp__sub_8320D8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320DA10) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320da78
	if (!cr6.gt) goto loc_8320DA78;
	// li r30,0
	r30.s64 = 0;
loc_8320DA34:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320da50
	if (!cr6.lt) goto loc_8320DA50;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8320da58
	goto loc_8320DA58;
loc_8320DA50:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DA58:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8320da34
	if (cr6.lt) goto loc_8320DA34;
loc_8320DA78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8320DA10) {
	__imp__sub_8320DA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320DA80) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bne cr6,0x8320daa8
	if (!cr6.eq) goto loc_8320DAA8;
loc_8320DAA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8320db2c
	goto loc_8320DB2C;
loc_8320DAA8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8320d280
	sub_8320D280(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320db28
	if (!cr0.eq) goto loc_8320DB28;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// mr r31,r29
	r31.u64 = r29.u64;
	// blt cr6,0x8320dad8
	if (cr6.lt) goto loc_8320DAD8;
	// mr r31,r30
	r31.u64 = r30.u64;
	// ble cr6,0x8320dad8
	if (!cr6.gt) goto loc_8320DAD8;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8320DAD8:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-15704(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-15704) );
	// bl 0x8320fe70
	sub_8320FE70(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320db0c
	if (!cr6.lt) goto loc_8320DB0C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320db14
	goto loc_8320DB14;
loc_8320DB0C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DB14:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8320d428
	sub_8320D428(ctx, base);
	// b 0x8320daa0
	goto loc_8320DAA0;
loc_8320DB28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320DB2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320DA80) {
	__imp__sub_8320DA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320DB38) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8320db70
	if (!cr6.lt) goto loc_8320DB70;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320db74
	goto loc_8320DB74;
loc_8320DB70:
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DB74:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r30,-1
	r30.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r29,8(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320dc78
	if (!cr6.gt) goto loc_8320DC78;
loc_8320DB90:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// bne cr6,0x8320dba4
	if (!cr6.eq) goto loc_8320DBA4;
	// lwz r29,28(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
loc_8320DBA4:
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320dbcc
	if (!cr6.lt) goto loc_8320DBCC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320dbd4
	goto loc_8320DBD4;
loc_8320DBCC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DBD4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320dc68
	if (!cr6.gt) goto loc_8320DC68;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320dc04
	if (!cr6.lt) goto loc_8320DC04;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320dc0c
	goto loc_8320DC0C;
loc_8320DC04:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DC0C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320dc3c
	if (!cr6.lt) goto loc_8320DC3C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320dc44
	goto loc_8320DC44;
loc_8320DC3C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DC44:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r10,r24,-1
	ctx.r10.s64 = r24.s64 + -1;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8320dc68
	if (!cr6.eq) goto loc_8320DC68;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8320DC68:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8320db90
	if (cr6.lt) goto loc_8320DB90;
loc_8320DC78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_8320DB38) {
	__imp__sub_8320DB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320DC80) {
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
	// b 0x8320dcb8
	goto loc_8320DCB8;
loc_8320DC98:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq 0x8320dcb8
	if (cr0.eq) goto loc_8320DCB8;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320DCB8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320dc98
	if (!cr6.eq) goto loc_8320DC98;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320dcd8
	if (cr6.eq) goto loc_8320DCD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_8320DCD8:
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

PPC_WEAK_FUNC(sub_8320DC80) {
	__imp__sub_8320DC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r15,1
	r15.s64 = 1;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r11
	r26.u64 = r11.u64;
	// bgt cr6,0x8320dd18
	if (cr6.gt) goto loc_8320DD18;
	// mr r26,r15
	r26.u64 = r15.u64;
loc_8320DD18:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// li r18,0
	r18.s64 = 0;
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x8320dd54
	if (cr0.eq) goto loc_8320DD54;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x8320dd58
	goto loc_8320DD58;
loc_8320DD54:
	// mr r27,r18
	r27.u64 = r18.u64;
loc_8320DD58:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x8320dd90
	if (cr0.eq) goto loc_8320DD90;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// mr r19,r31
	r19.u64 = r31.u64;
	// b 0x8320dd94
	goto loc_8320DD94;
loc_8320DD90:
	// mr r19,r18
	r19.u64 = r18.u64;
loc_8320DD94:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lis r17,-31946
	r17.s64 = -2093613056;
	// mr r11,r18
	r11.u64 = r18.u64;
	// stw r3,-15708(r17)
	PPC_STORE_U32(r17.u32 + -15708, ctx.r3.u32);
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8320ddfc
	if (!cr6.gt) goto loc_8320DDFC;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x8320ddd0
	goto loc_8320DDD0;
loc_8320DDCC:
	// lwz r3,-15708(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + int32_t(-15708) );
loc_8320DDD0:
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x8320dde4
	if (cr6.lt) goto loc_8320DDE4;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8320DDE4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8320ddcc
	if (cr6.lt) goto loc_8320DDCC;
loc_8320DDFC:
	// lwz r31,12(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// lis r16,-31946
	r16.s64 = -2093613056;
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x8320df1c
	if (!cr6.lt) goto loc_8320DF1C;
	// rlwinm r29,r31,2,0,29
	r29.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8320DE14:
	// lwz r11,-15704(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(-15704) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x8320df08
	if (!cr6.eq) goto loc_8320DF08;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320de44
	if (!cr6.lt) goto loc_8320DE44;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// b 0x8320de50
	goto loc_8320DE50;
loc_8320DE44:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8320DE50:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320de6c
	if (!cr6.lt) goto loc_8320DE6C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8320de74
	goto loc_8320DE74;
loc_8320DE6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DE74:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320dea0
	if (!cr6.lt) goto loc_8320DEA0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8320dea8
	goto loc_8320DEA8;
loc_8320DEA0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DEA8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320dec4
	if (!cr6.eq) goto loc_8320DEC4;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// b 0x8320df00
	goto loc_8320DF00;
loc_8320DEC4:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320dee0
	if (!cr6.lt) goto loc_8320DEE0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8320dee8
	goto loc_8320DEE8;
loc_8320DEE0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DEE8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x8320df08
	if (!cr6.lt) goto loc_8320DF08;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8320DF00:
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8320DF08:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8320de14
	if (cr6.lt) goto loc_8320DE14;
loc_8320DF1C:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// mr r20,r18
	r20.u64 = r18.u64;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x8320e040
	if (cr6.eq) goto loc_8320E040;
	// addi r29,r26,-1
	r29.s64 = r26.s64 + -1;
loc_8320DF30:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x8320df98
	goto loc_8320DF98;
loc_8320DF38:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320df74
	if (!cr6.lt) goto loc_8320DF74;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320df7c
	goto loc_8320DF7C;
loc_8320DF74:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320DF7C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r18,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r18.u32);
	// bl 0x8320db38
	sub_8320DB38(ctx, base);
loc_8320DF98:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320df38
	if (!cr6.eq) goto loc_8320DF38;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x8320e040
	if (cr6.eq) goto loc_8320E040;
	// lwz r31,12(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x8320e034
	if (!cr6.lt) goto loc_8320E034;
	// rlwinm r30,r31,2,0,29
	r30.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8320DFCC:
	// lwz r11,-15704(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(-15704) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x8320e020
	if (!cr6.eq) goto loc_8320E020;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320dff8
	if (!cr6.lt) goto loc_8320DFF8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8320e000
	goto loc_8320E000;
loc_8320DFF8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320E000:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x8320e020
	if (!cr6.eq) goto loc_8320E020;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8320E020:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8320dfcc
	if (cr6.lt) goto loc_8320DFCC;
loc_8320E034:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x8320df30
	if (!cr6.eq) goto loc_8320DF30;
loc_8320E040:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// mr r22,r18
	r22.u64 = r18.u64;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1360) );
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// lwz r23,2736(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2736) );
	// lwz r21,4(r10)
	r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320e2d4
	if (cr6.eq) goto loc_8320E2D4;
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_8320E074:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8320e0a0
	if (!cr6.gt) goto loc_8320E0A0;
	// addi r11,r26,8
	r11.s64 = r26.s64 + 8;
loc_8320E088:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8320e088
	if (cr6.lt) goto loc_8320E088;
loc_8320E0A0:
	// mr r31,r18
	r31.u64 = r18.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x8320e0ec
	if (!cr6.gt) goto loc_8320E0EC;
loc_8320E0AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x831f0880
	sub_831F0880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320e0e0
	if (!cr0.eq) goto loc_8320E0E0;
	// rlwinm r11,r31,27,5,31
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// slw r10,r15,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r10.u32);
loc_8320E0E0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r21
	cr6.compare<int32_t>(r31.s32, r21.s32, xer);
	// blt cr6,0x8320e0ac
	if (cr6.lt) goto loc_8320E0AC;
loc_8320E0EC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320e118
	if (!cr6.lt) goto loc_8320E118;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320e124
	goto loc_8320E124;
loc_8320E118:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320E124:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320e1a0
	if (!cr6.gt) goto loc_8320E1A0;
loc_8320E140:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x8320e154
	if (!cr6.eq) goto loc_8320E154;
	// lwz r7,28(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(28) );
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8320E154:
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,-15708(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + int32_t(-15708) );
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8320e190
	if (cr6.lt) goto loc_8320E190;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r5,r15,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (r15.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r26
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwx r8,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r8.u32);
loc_8320E190:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x8320e140
	if (cr6.lt) goto loc_8320E140;
loc_8320E1A0:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// mr r27,r18
	r27.u64 = r18.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8320e1c4
	if (!cr6.lt) goto loc_8320E1C4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320e1cc
	goto loc_8320E1CC;
loc_8320E1C4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320E1CC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r31,r18
	r31.u64 = r18.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8320e294
	if (!cr6.gt) goto loc_8320E294;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_8320E1E8:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8320e208
	if (!cr6.lt) goto loc_8320E208;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320e210
	goto loc_8320E210;
loc_8320E208:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320E210:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320e230
	if (!cr6.lt) goto loc_8320E230;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8320e238
	goto loc_8320E238;
loc_8320E230:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320E238:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,-15708(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + int32_t(-15708) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8320e274
	if (cr6.lt) goto loc_8320E274;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320e288
	if (cr0.eq) goto loc_8320E288;
loc_8320E274:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8320e1e8
	if (cr6.lt) goto loc_8320E1E8;
	// b 0x8320e294
	goto loc_8320E294;
loc_8320E288:
	// mr r24,r11
	r24.u64 = r11.u64;
	// mr r27,r15
	r27.u64 = r15.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_8320E294:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320e2b0
	if (!cr0.eq) goto loc_8320E2B0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831f40a0
	sub_831F40A0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x8320e388
	if (cr6.eq) goto loc_8320E388;
loc_8320E2B0:
	// lwz r11,-15708(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(-15708) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stwx r24,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r24.u32);
	// bl 0x831f08b8
	sub_831F08B8(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320e074
	if (!cr6.eq) goto loc_8320E074;
loc_8320E2D4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8320e2e8
	if (cr6.eq) goto loc_8320E2E8;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// lwz r3,-4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320E2E8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x831f0a08
	sub_831F0A08(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// addi r4,r11,-2216
	ctx.r4.s64 = r11.s64 + -2216;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// lwz r11,2080(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(2080) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x8320e32c
	if (!cr6.gt) goto loc_8320E32C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r11,-2284
	ctx.r4.s64 = r11.s64 + -2284;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
loc_8320E32C:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,-2352
	ctx.r4.s64 = r11.s64 + -2352;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8320e380
	if (!cr6.lt) goto loc_8320E380;
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8320E354:
	// lwz r8,-15704(r16)
	ctx.r8.u64 = PPC_LOAD_U32(r16.u32 + int32_t(-15704) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,-15708(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + int32_t(-15708) );
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(16) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8320e354
	if (cr6.lt) goto loc_8320E354;
loc_8320E380:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c04
	return;
loc_8320E388:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// li r10,22
	ctx.r10.s64 = 22;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ca9260
	sub_82CA9260(ctx, base);
}

PPC_WEAK_FUNC(sub_8320DCF0) {
	__imp__sub_8320DCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E3A0) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320e41c
	if (!cr6.gt) goto loc_8320E41C;
	// li r29,0
	r29.s64 = 0;
loc_8320E3C4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8320e3e0
	if (!cr6.lt) goto loc_8320E3E0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8320e3e8
	goto loc_8320E3E8;
loc_8320E3E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320E3E8:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8320e408
	if (cr6.eq) goto loc_8320E408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8320dc80
	sub_8320DC80(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320E408:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8320e3c4
	if (cr6.lt) goto loc_8320E3C4;
loc_8320E41C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320e430
	if (cr6.eq) goto loc_8320E430;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_8320E430:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,-15704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-15704) );
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320E3A0) {
	__imp__sub_8320E3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320e4ac
	if (cr6.eq) goto loc_8320E4AC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8320E460:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
loc_8320E474:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8320e4b4
	if (!cr6.eq) goto loc_8320E4B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// blt cr6,0x8320e474
	if (cr6.lt) goto loc_8320E474;
	// li r11,1
	r11.s64 = 1;
loc_8320E498:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320e460
	if (!cr6.eq) goto loc_8320E460;
loc_8320E4AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8320E4B4:
	// li r11,0
	r11.s64 = 0;
	// b 0x8320e498
	goto loc_8320E498;
}

PPC_WEAK_FUNC(sub_8320E450) {
	__imp__sub_8320E450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E4C0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320e4f0
	if (!cr6.eq) goto loc_8320E4F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8320e574
	goto loc_8320E574;
loc_8320E4F0:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mulli r11,r6,12
	r11.s64 = ctx.r6.s64 * 12;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// ble cr6,0x8320e508
	if (!cr6.gt) goto loc_8320E508;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
loc_8320E508:
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x8320e450
	sub_8320E450(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320e574
	if (cr0.eq) goto loc_8320E574;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mulli r10,r31,12
	ctx.r10.s64 = r31.s64 * 12;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_8320E540:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8320e58c
	if (!cr6.eq) goto loc_8320E58C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r9,12
	cr6.compare<int32_t>(ctx.r9.s32, 12, xer);
	// blt cr6,0x8320e540
	if (cr6.lt) goto loc_8320E540;
	// li r11,1
	r11.s64 = 1;
loc_8320E564:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8320E574:
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
loc_8320E58C:
	// li r11,0
	r11.s64 = 0;
	// b 0x8320e564
	goto loc_8320E564;
}

PPC_WEAK_FUNC(sub_8320E4C0) {
	__imp__sub_8320E4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E598) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// bgt cr6,0x8320e638
	if (cr6.gt) goto loc_8320E638;
	// mulli r11,r6,12
	r11.s64 = ctx.r6.s64 * 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x8320e450
	sub_8320E450(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// subf r9,r6,r30
	ctx.r9.s64 = r30.s64 - ctx.r6.s64;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8320e638
	if (cr6.gt) goto loc_8320E638;
loc_8320E5EC:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = rotl32(r11.u32, 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// bgt cr6,0x8320e618
	if (cr6.gt) goto loc_8320E618;
	// mulli r11,r6,12
	r11.s64 = ctx.r6.s64 * 12;
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x8320e450
	sub_8320E450(ctx, base);
loc_8320E618:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// ble cr6,0x8320e5ec
	if (!cr6.gt) goto loc_8320E5EC;
loc_8320E638:
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

PPC_WEAK_FUNC(sub_8320E598) {
	__imp__sub_8320E598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E650) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8320e678
	if (!cr6.gt) goto loc_8320E678;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x8320e778
	goto loc_8320E778;
loc_8320E678:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwz r31,20(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// li r28,0
	r28.s64 = 0;
	// add r8,r11,r4
	ctx.r8.u64 = r11.u64 + ctx.r4.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_8320E690:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
loc_8320E6A4:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x8320e6dc
	if (!cr6.eq) goto loc_8320E6DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// blt cr6,0x8320e6a4
	if (cr6.lt) goto loc_8320E6A4;
	// li r11,1
	r11.s64 = 1;
loc_8320E6C8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320e6e4
	if (!cr0.eq) goto loc_8320E6E4;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// b 0x8320e690
	goto loc_8320E690;
loc_8320E6DC:
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x8320e6c8
	goto loc_8320E6C8;
loc_8320E6E4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r26,1456(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// beq 0x8320e724
	if (cr0.eq) goto loc_8320E724;
	// lis r11,16384
	r11.s64 = 1073741824;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// b 0x8320e728
	goto loc_8320E728;
loc_8320E724:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8320E728:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// bne cr6,0x8320e774
	if (!cr6.eq) goto loc_8320E774;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r3,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r3.u32);
	// b 0x8320e778
	goto loc_8320E778;
loc_8320E774:
	// stw r3,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r3.u32);
loc_8320E778:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8320E650) {
	__imp__sub_8320E650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E780) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// bl 0x8320e4c0
	sub_8320E4C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8320e888
	if (!cr0.eq) goto loc_8320E888;
loc_8320E7B8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8320e650
	sub_8320E650(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r24,1456(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// beq 0x8320e800
	if (cr0.eq) goto loc_8320E800;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stw r28,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r28.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r28,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r28.u32);
	// b 0x8320e804
	goto loc_8320E804;
loc_8320E800:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8320E804:
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r28,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r28.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r28.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// beq cr6,0x8320e828
	if (cr6.eq) goto loc_8320E828;
	// stw r30,32(r26)
	PPC_STORE_U32(r26.u32 + 32, r30.u32);
loc_8320E828:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r26,r30
	r26.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x8320e85c
	if (!cr6.eq) goto loc_8320E85C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8320e85c
	if (cr6.gt) goto loc_8320E85C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8320E85C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8320e598
	sub_8320E598(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8320e4c0
	sub_8320E4C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8320e7b8
	if (cr0.eq) goto loc_8320E7B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
loc_8320E888:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_8320E780) {
	__imp__sub_8320E780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E890) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r5,380
	ctx.r5.s64 = 380;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r26,1456(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1456) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x8320e908
	if (cr0.eq) goto loc_8320E908;
	// lis r11,16384
	r11.s64 = 1073741824;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x8320e90c
	goto loc_8320E90C;
loc_8320E908:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8320E90C:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addic. r29,r29,1
	xer.ca = r29.u32 > 4294967294;
	r29.s64 = r29.s64 + 1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ble 0x8320e990
	if (!cr0.gt) goto loc_8320E990;
loc_8320E940:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320e95c
	if (!cr6.eq) goto loc_8320E95C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_8320E95C:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320e598
	sub_8320E598(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320e780
	sub_8320E780(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x8320e940
	if (cr6.lt) goto loc_8320E940;
loc_8320E990:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8320E890) {
	__imp__sub_8320E890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320E9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r28,1456(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1456) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8320e9e8
	if (cr0.eq) goto loc_8320E9E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x8320e9ec
	goto loc_8320E9EC;
loc_8320E9E8:
	// li r31,0
	r31.s64 = 0;
loc_8320E9EC:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320E9A0) {
	__imp__sub_8320E9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320EA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r31,96(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(96) );
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r23,r11
	r23.u64 = r11.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8320ebd0
	if (!cr0.gt) goto loc_8320EBD0;
	// li r25,0
	r25.s64 = 0;
loc_8320EA28:
	// addi r24,r27,1
	r24.s64 = r27.s64 + 1;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bge cr6,0x8320ebc0
	if (!cr6.lt) goto loc_8320EBC0;
	// addi r26,r25,4
	r26.s64 = r25.s64 + 4;
loc_8320EA3C:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8320ea50
	if (!cr6.lt) goto loc_8320EA50;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8320ea5c
	goto loc_8320EA5C;
loc_8320EA50:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EA5C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bge cr6,0x8320ea80
	if (!cr6.lt) goto loc_8320EA80;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8320ea8c
	goto loc_8320EA8C;
loc_8320EA80:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EA8C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r29,r11,r30
	r29.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bge cr6,0x8320eab4
	if (!cr6.lt) goto loc_8320EAB4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8320eac0
	goto loc_8320EAC0;
loc_8320EAB4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EAC0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bge cr6,0x8320eae4
	if (!cr6.lt) goto loc_8320EAE4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8320eaf0
	goto loc_8320EAF0;
loc_8320EAE4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EAF0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x8320ebac
	if (!cr6.lt) goto loc_8320EBAC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8320eb20
	if (!cr6.lt) goto loc_8320EB20;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8320eb2c
	goto loc_8320EB2C;
loc_8320EB20:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EB2C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8320eb48
	if (!cr6.lt) goto loc_8320EB48;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
	// b 0x8320eb58
	goto loc_8320EB58;
loc_8320EB48:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8320EB58:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8320eb70
	if (!cr6.lt) goto loc_8320EB70;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8320eb7c
	goto loc_8320EB7C;
loc_8320EB70:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EB7C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8320eb9c
	if (!cr6.lt) goto loc_8320EB9C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8320eba8
	goto loc_8320EBA8;
loc_8320EB9C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EBA8:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_8320EBAC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8320ea3c
	if (cr6.lt) goto loc_8320EA3C;
loc_8320EBC0:
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r24,r23
	cr6.compare<int32_t>(r24.s32, r23.s32, xer);
	// blt cr6,0x8320ea28
	if (cr6.lt) goto loc_8320EA28;
loc_8320EBD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_8320EA00) {
	__imp__sub_8320EA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320EBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + int32_t(1456) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8320ec24
	if (cr0.eq) goto loc_8320EC24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x8320ec28
	goto loc_8320EC28;
loc_8320EC24:
	// mr r26,r24
	r26.u64 = r24.u64;
loc_8320EC28:
	// stw r24,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r24.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + int32_t(1456) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8320ec60
	if (cr0.eq) goto loc_8320EC60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x8320ec64
	goto loc_8320EC64;
loc_8320EC60:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8320EC64:
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8320EC6C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320ed04
	if (!cr0.eq) goto loc_8320ED04;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320ecd8
	if (cr6.eq) goto loc_8320ECD8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bge 0x8320ec9c
	if (!cr0.lt) goto loc_8320EC9C;
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
loc_8320EC9C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// b 0x8320ec6c
	goto loc_8320EC6C;
loc_8320ECD8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320ecf4
	if (!cr6.eq) goto loc_8320ECF4;
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
loc_8320ECF4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8320ed00
	if (cr6.eq) goto loc_8320ED00;
	// stw r31,32(r27)
	PPC_STORE_U32(r27.u32 + 32, r31.u32);
loc_8320ED00:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_8320ED04:
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8320ec6c
	if (!cr6.eq) goto loc_8320EC6C;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320ed38
	if (!cr6.eq) goto loc_8320ED38;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320ed34
	if (cr6.eq) goto loc_8320ED34;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_8320ED34:
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_8320ED38:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320ed84
	if (cr6.eq) goto loc_8320ED84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320ec6c
	if (!cr6.eq) goto loc_8320EC6C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320ed78
	if (cr6.eq) goto loc_8320ED78;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// b 0x8320ed7c
	goto loc_8320ED7C;
loc_8320ED78:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8320ED7C:
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x8320ec6c
	goto loc_8320EC6C;
loc_8320ED84:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320ee5c
	if (cr6.eq) goto loc_8320EE5C;
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8320edac
	if (!cr6.lt) goto loc_8320EDAC;
loc_8320EDA0:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x8320edb8
	goto loc_8320EDB8;
loc_8320EDAC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EDB8:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8320ee48
	if (!cr6.gt) goto loc_8320EE48;
	// lwz r31,1456(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(1456) );
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// beq 0x8320edf8
	if (cr0.eq) goto loc_8320EDF8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8320e9a0
	sub_8320E9A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320edfc
	goto loc_8320EDFC;
loc_8320EDF8:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8320EDFC:
	// lwz r3,96(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(96) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
loc_8320EE18:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8320ee34
	if (cr6.eq) goto loc_8320EE34;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8320EE34:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8320ee48
	if (cr6.eq) goto loc_8320EE48;
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// b 0x8320ee18
	goto loc_8320EE18;
loc_8320EE48:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8320eda0
	if (cr6.lt) goto loc_8320EDA0;
loc_8320EE5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_8320EBD8) {
	__imp__sub_8320EBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320EE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8320e890
	sub_8320E890(ctx, base);
	// lwz r27,1456(r21)
	r27.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1456) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x8320eec8
	if (cr0.eq) goto loc_8320EEC8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x8320eecc
	goto loc_8320EECC;
loc_8320EEC8:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8320EECC:
	// stw r30,96(r20)
	PPC_STORE_U32(r20.u32 + 96, r30.u32);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8320ebd8
	sub_8320EBD8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8320ea00
	sub_8320EA00(ctx, base);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x831c5fc0
	sub_831C5FC0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r11,r19
	r11.u64 = r19.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8320ef28
	if (!cr6.gt) goto loc_8320EF28;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8320EF10:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x8320ef10
	if (cr6.lt) goto loc_8320EF10;
loc_8320EF28:
	// lwz r11,96(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(96) );
	// li r17,-1
	r17.s64 = -1;
	// mr r16,r19
	r16.u64 = r19.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8320f320
	if (!cr6.gt) goto loc_8320F320;
	// mr r15,r19
	r15.u64 = r19.u64;
loc_8320EF44:
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + int32_t(96) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// bge cr6,0x8320ef60
	if (!cr6.lt) goto loc_8320EF60;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r15
	ctx.r3.u64 = r11.u64 + r15.u64;
	// b 0x8320ef68
	goto loc_8320EF68;
loc_8320EF60:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EF68:
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r29,1
	r29.s64 = 1;
	// mr r31,r19
	r31.u64 = r19.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// lwz r23,0(r22)
	r23.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8320f00c
	if (!cr6.gt) goto loc_8320F00C;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8320EF8C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320efa4
	if (!cr6.lt) goto loc_8320EFA4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8320efac
	goto loc_8320EFAC;
loc_8320EFA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320EFAC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x8320eff4
	if (!cr6.gt) goto loc_8320EFF4;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8320EFC8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8320eff0
	if (!cr6.eq) goto loc_8320EFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r23
	cr6.compare<int32_t>(ctx.r10.s32, r23.s32, xer);
	// blt cr6,0x8320efc8
	if (cr6.lt) goto loc_8320EFC8;
	// b 0x8320eff4
	goto loc_8320EFF4;
loc_8320EFF0:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_8320EFF4:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8320ef8c
	if (cr6.lt) goto loc_8320EF8C;
loc_8320F00C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8320f0a4
	if (!cr0.eq) goto loc_8320F0A4;
	// mr r31,r19
	r31.u64 = r19.u64;
	// ble cr6,0x8320f308
	if (!cr6.gt) goto loc_8320F308;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8320F02C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8320f044
	if (!cr6.lt) goto loc_8320F044;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8320f04c
	goto loc_8320F04C;
loc_8320F044:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320F04C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x8320f088
	if (!cr6.gt) goto loc_8320F088;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8320F068:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8320f088
	if (!cr6.eq) goto loc_8320F088;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r23
	cr6.compare<int32_t>(ctx.r10.s32, r23.s32, xer);
	// blt cr6,0x8320f068
	if (cr6.lt) goto loc_8320F068;
loc_8320F088:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8320f02c
	if (cr6.lt) goto loc_8320F02C;
	// b 0x8320f308
	goto loc_8320F308;
loc_8320F0A4:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// mr r26,r19
	r26.u64 = r19.u64;
	// ble cr6,0x8320f308
	if (!cr6.gt) goto loc_8320F308;
	// mr r24,r19
	r24.u64 = r19.u64;
loc_8320F0B4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x8320f0cc
	if (!cr6.lt) goto loc_8320F0CC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x8320f0d4
	goto loc_8320F0D4;
loc_8320F0CC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320F0D4:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x8320f2f0
	if (!cr6.gt) goto loc_8320F2F0;
	// addi r25,r23,-1
	r25.s64 = r23.s64 + -1;
loc_8320F0E8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8320f1d4
	if (!cr6.eq) goto loc_8320F1D4;
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(52) );
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8320f150
	if (cr6.eq) goto loc_8320F150;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8320f14c
	if (cr6.eq) goto loc_8320F14C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8320f150
	if (cr6.eq) goto loc_8320F150;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// b 0x8320f144
	goto loc_8320F144;
loc_8320F124:
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320f150
	if (!cr0.eq) goto loc_8320F150;
loc_8320F144:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x8320f124
	if (!cr6.eq) goto loc_8320F124;
loc_8320F14C:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8320F150:
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	r30.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1452) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x8320f198
	if (!cr6.eq) goto loc_8320F198;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8320f1c0
	if (cr0.eq) goto loc_8320F1C0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x83200b18
	sub_83200B18(ctx, base);
	// b 0x8320f1c4
	goto loc_8320F1C4;
loc_8320F198:
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8320f1c0
	if (cr0.eq) goto loc_8320F1C0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x83200ac0
	sub_83200AC0(ctx, base);
	// b 0x8320f1c4
	goto loc_8320F1C4;
loc_8320F1C0:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8320F1C4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(948) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83201f30
	sub_83201F30(ctx, base);
loc_8320F1D4:
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// bne cr6,0x8320f2b4
	if (!cr6.eq) goto loc_8320F2B4;
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(52) );
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8320f23c
	if (cr6.eq) goto loc_8320F23C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8320f240
	if (cr6.eq) goto loc_8320F240;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x8320f23c
	if (cr6.eq) goto loc_8320F23C;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// b 0x8320f234
	goto loc_8320F234;
loc_8320F214:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320f240
	if (!cr0.eq) goto loc_8320F240;
loc_8320F234:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x8320f214
	if (!cr6.eq) goto loc_8320F214;
loc_8320F23C:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8320F240:
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	r30.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1452) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x8320f280
	if (!cr6.eq) goto loc_8320F280;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8320f2a0
	if (cr0.eq) goto loc_8320F2A0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x83200c18
	sub_83200C18(ctx, base);
	// b 0x8320f2a4
	goto loc_8320F2A4;
loc_8320F280:
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8320f2a0
	if (cr0.eq) goto loc_8320F2A0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x83200bc0
	sub_83200BC0(ctx, base);
	// b 0x8320f2a4
	goto loc_8320F2A4;
loc_8320F2A0:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8320F2A4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(948) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83201ed0
	sub_83201ED0(ctx, base);
loc_8320F2B4:
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(r28.s32, r23.s32, xer);
	// add r9,r11,r18
	ctx.r9.u64 = r11.u64 + r18.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// blt cr6,0x8320f0e8
	if (cr6.lt) goto loc_8320F0E8;
loc_8320F2F0:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x8320f0b4
	if (cr6.lt) goto loc_8320F0B4;
loc_8320F308:
	// lwz r11,96(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(96) );
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// blt cr6,0x8320ef44
	if (cr6.lt) goto loc_8320EF44;
loc_8320F320:
	// addi r5,r17,1
	ctx.r5.s64 = r17.s64 + 1;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r5,1532(r21)
	PPC_STORE_U32(r21.u32 + 1532, ctx.r5.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,-2148
	ctx.r4.s64 = r11.s64 + -2148;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// lwz r3,1444(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1444) );
	// lwz r11,1436(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1436) );
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c04
	return;
}

PPC_WEAK_FUNC(sub_8320EE68) {
	__imp__sub_8320EE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320F358) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8320f388
	if (cr6.lt) goto loc_8320F388;
	// li r27,43
	r27.s64 = 43;
	// b 0x8320f390
	goto loc_8320F390;
loc_8320F388:
	// li r27,45
	r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8320F390:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// extsw r11,r28
	r11.s64 = r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	f30.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,2864
	r29.s64 = r11.s64 + 2864;
	// fsubs f31,f1,f0
	f31.f64 = static_cast<float>(ctx.f1.f64 - f0.f64);
	// fctiwz f0,f31
	f0.u64 = uint64_t(int32_t(std::trunc(f31.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_8320F3D4:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// fsubs f0,f31,f0
	f0.f64 = static_cast<float>(f31.f64 - f0.f64);
	// fmuls f31,f0,f30
	f31.f64 = double(float(f0.f64 * f30.f64));
	// fctiwz f0,f31
	f0.u64 = uint64_t(int32_t(std::trunc(f31.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(r31.s32, 9, xer);
	// blt cr6,0x8320f3d4
	if (cr6.lt) goto loc_8320F3D4;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-2108
	ctx.r4.s64 = ctx.r10.s64 + -2108;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = r27.s8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223f888
	sub_8223F888(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8320F358) {
	__imp__sub_8320F358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320F450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,10000
	r29.s64 = r11.s64 + 10000;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320f484
	if (cr0.eq) goto loc_8320F484;
	// li r11,0
	r11.s64 = 0;
	// b 0x8320f494
	goto loc_8320F494;
loc_8320F484:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_8320F494:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320f4ac
	if (!cr0.eq) goto loc_8320F4AC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-2088
	r11.s64 = r11.s64 + -2088;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x8320f4f0
	goto loc_8320F4F0;
loc_8320F4AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320f4fc
	if (!cr0.eq) goto loc_8320F4FC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-2088
	r11.s64 = r11.s64 + -2088;
	// beq 0x8320f4ec
	if (cr0.eq) goto loc_8320F4EC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8320f4f0
	goto loc_8320F4F0;
loc_8320F4EC:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8320F4F0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_8320F4FC:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320F450) {
	__imp__sub_8320F450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320F518) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,10000
	r29.s64 = r11.s64 + 10000;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320f548
	if (cr0.eq) goto loc_8320F548;
	// li r11,0
	r11.s64 = 0;
	// b 0x8320f558
	goto loc_8320F558;
loc_8320F548:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_8320F558:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320f570
	if (!cr0.eq) goto loc_8320F570;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-2088
	r11.s64 = r11.s64 + -2088;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x8320f5b4
	goto loc_8320F5B4;
loc_8320F570:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320f5c4
	if (!cr0.eq) goto loc_8320F5C4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-2088
	r11.s64 = r11.s64 + -2088;
	// beq 0x8320f5b0
	if (cr0.eq) goto loc_8320F5B0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8320f5b4
	goto loc_8320F5B4;
loc_8320F5B0:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8320F5B4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8320F5C4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8320f5f4
	if (!cr6.eq) goto loc_8320F5F4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-1768
	ctx.r6.s64 = r11.s64 + -1768;
	// addi r5,r10,-1784
	ctx.r5.s64 = ctx.r10.s64 + -1784;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320F5F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8320F518) {
	__imp__sub_8320F518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320F600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r27,r10,-2024
	r27.s64 = ctx.r10.s64 + -2024;
	// addi r29,r11,-3056
	r29.s64 = r11.s64 + -3056;
	// ble 0x8320f688
	if (!cr0.gt) goto loc_8320F688;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8320f678
	if (cr0.eq) goto loc_8320F678;
	// lbz r10,159(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 159);
	// li r26,1
	r26.s64 = 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8320f678
	if (cr0.eq) goto loc_8320F678;
	// li r25,1
	r25.s64 = 1;
loc_8320F678:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8320f7c4
	if (cr6.eq) goto loc_8320F7C4;
loc_8320F688:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r28,r11,10000
	r28.s64 = r11.s64 + 10000;
	// mulli r11,r10,52
	r11.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320f74c
	if (cr0.eq) goto loc_8320F74C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8320f6dc
	if (cr6.gt) goto loc_8320F6DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320f74c
	if (cr0.eq) goto loc_8320F74C;
loc_8320F6DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r11,58
	ctx.r9.s64 = r11.s64 + 58;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(80) );
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8320f73c
	if (cr0.eq) goto loc_8320F73C;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lbz r11,158(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8320f73c
	if (cr0.eq) goto loc_8320F73C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8320F73C:
	// mulli r11,r30,5
	r11.s64 = r30.s64 * 5;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
loc_8320F74C:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8320f7c4
	if (cr6.eq) goto loc_8320F7C4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320f7c4
	if (cr0.eq) goto loc_8320F7C4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x8320f7c4
	if (!cr6.gt) goto loc_8320F7C4;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8320f7b4
	if (cr0.eq) goto loc_8320F7B4;
	// lbz r11,161(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 161);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8320f7b4
	if (cr0.eq) goto loc_8320F7B4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8320F7B4:
	// mulli r11,r30,5
	r11.s64 = r30.s64 * 5;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
loc_8320F7C4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8320f7d4
	if (cr6.gt) goto loc_8320F7D4;
	// li r11,0
	r11.s64 = 0;
loc_8320F7D4:
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320f7fc
	if (cr0.eq) goto loc_8320F7FC;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bgt cr6,0x8320f810
	if (cr6.gt) goto loc_8320F810;
loc_8320F7FC:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8320f814
	if (cr0.eq) goto loc_8320F814;
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(r25.s32, r26.s32, xer);
	// bge cr6,0x8320f814
	if (!cr6.lt) goto loc_8320F814;
loc_8320F810:
	// li r30,-1
	r30.s64 = -1;
loc_8320F814:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_8320F600) {
	__imp__sub_8320F600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320F820) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320f858
	if (cr0.eq) goto loc_8320F858;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8320f968
	goto loc_8320F968;
loc_8320F858:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8320f600
	sub_8320F600(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// addi r29,r11,-18548
	r29.s64 = r11.s64 + -18548;
	// addi r28,r10,-1768
	r28.s64 = ctx.r10.s64 + -1768;
	// bne cr6,0x8320f89c
	if (!cr6.eq) goto loc_8320F89C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-1640
	ctx.r5.s64 = r11.s64 + -1640;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320F89C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8320f8c8
	if (cr6.eq) goto loc_8320F8C8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8320f8c8
	if (cr6.eq) goto loc_8320F8C8;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8320f8c8
	if (cr6.eq) goto loc_8320F8C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8320f968
	goto loc_8320F968;
loc_8320F8C8:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// addi r9,r9,10000
	ctx.r9.s64 = ctx.r9.s64 + 10000;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320f918
	if (cr0.eq) goto loc_8320F918;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// ble cr6,0x8320f908
	if (!cr6.gt) goto loc_8320F908;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-1660
	ctx.r5.s64 = r11.s64 + -1660;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320F908:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mulli r11,r11,5
	r11.s64 = r11.s64 * 5;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x8320f948
	goto loc_8320F948;
loc_8320F918:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8320f93c
	if (!cr6.gt) goto loc_8320F93C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-1680
	ctx.r5.s64 = r11.s64 + -1680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,185
	ctx.r7.s64 = 185;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320F93C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mulli r10,r31,5
	ctx.r10.s64 = r31.s64 * 5;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8320F948:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-2024
	ctx.r10.s64 = ctx.r10.s64 + -2024;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8320F968:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_8320F820) {
	__imp__sub_8320F820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320F970) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320faf0
	if (!cr0.eq) goto loc_8320FAF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8320f600
	sub_8320F600(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// addi r28,r11,-18548
	r28.s64 = r11.s64 + -18548;
	// addi r27,r10,-1768
	r27.s64 = ctx.r10.s64 + -1768;
	// bne cr6,0x8320f9e4
	if (!cr6.eq) goto loc_8320F9E4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-1640
	ctx.r5.s64 = r11.s64 + -1640;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320F9E4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320f9fc
	if (!cr6.eq) goto loc_8320F9FC;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
	// b 0x8320fa30
	goto loc_8320FA30;
loc_8320F9FC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8320fa30
	if (cr6.eq) goto loc_8320FA30;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8320fa30
	if (cr6.eq) goto loc_8320FA30;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-1620
	ctx.r5.s64 = r11.s64 + -1620;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,207
	ctx.r7.s64 = 207;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320FA30:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// addi r10,r10,10000
	ctx.r10.s64 = ctx.r10.s64 + 10000;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320fa80
	if (cr0.eq) goto loc_8320FA80;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// ble cr6,0x8320fa70
	if (!cr6.gt) goto loc_8320FA70;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-1660
	ctx.r5.s64 = r11.s64 + -1660;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,211
	ctx.r7.s64 = 211;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320FA70:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mulli r11,r11,5
	r11.s64 = r11.s64 * 5;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x8320fab4
	goto loc_8320FAB4;
loc_8320FA80:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8320faa8
	if (!cr6.gt) goto loc_8320FAA8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-1680
	ctx.r5.s64 = r11.s64 + -1680;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320FAA8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mulli r10,r31,5
	ctx.r10.s64 = r31.s64 * 5;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8320FAB4:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-2024
	ctx.r10.s64 = ctx.r10.s64 + -2024;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8320faf0
	if (!cr6.eq) goto loc_8320FAF0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-1784
	ctx.r5.s64 = r11.s64 + -1784;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,218
	ctx.r7.s64 = 218;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320FAF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_8320F970) {
	__imp__sub_8320F970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(228) );
	// lis r11,-31951
	r11.s64 = -2093940736;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,10000
	r11.s64 = r11.s64 + 10000;
	// beq 0x8320fb14
	if (cr0.eq) goto loc_8320FB14;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8320fb24
	goto loc_8320FB24;
loc_8320FB14:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8320FB24:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8320fb3c
	if (!cr0.eq) goto loc_8320FB3C;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_8320FB3C:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320fb60
	if (cr0.eq) goto loc_8320FB60;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
loc_8320FB60:
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FAF8) {
	__imp__sub_8320FAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(228) );
	// lis r11,-31951
	r11.s64 = -2093940736;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,10000
	r11.s64 = r11.s64 + 10000;
	// beq 0x8320fb94
	if (cr0.eq) goto loc_8320FB94;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8320fba4
	goto loc_8320FBA4;
loc_8320FB94:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8320FBA4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8320fbbc
	if (!cr0.eq) goto loc_8320FBBC;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_8320FBBC:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320fbe0
	if (cr0.eq) goto loc_8320FBE0;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
loc_8320FBE0:
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FB78) {
	__imp__sub_8320FB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320fc24
	if (!cr6.gt) goto loc_8320FC24;
	// lwz r11,228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(228) );
	// rlwinm. r11,r11,26,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320fc1c
	if (!cr0.eq) goto loc_8320FC1C;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(80) );
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// bne cr6,0x8320fc24
	if (!cr6.eq) goto loc_8320FC24;
loc_8320FC1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8320FC24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FBF8) {
	__imp__sub_8320FBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmpwi cr6,r11,104
	cr6.compare<int32_t>(r11.s32, 104, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(r11.s32, 105, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,106
	cr6.compare<int32_t>(r11.s32, 106, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,107
	cr6.compare<int32_t>(r11.s32, 107, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,108
	cr6.compare<int32_t>(r11.s32, 108, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,110
	cr6.compare<int32_t>(r11.s32, 110, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(r11.s32, 111, xer);
	// beq cr6,0x8320fc80
	if (cr6.eq) goto loc_8320FC80;
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8320fc84
	if (!cr6.eq) goto loc_8320FC84;
loc_8320FC80:
	// li r11,1
	r11.s64 = 1;
loc_8320FC84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FC30) {
	__imp__sub_8320FC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(r11.s32, 113, xer);
	// beq cr6,0x8320fcb8
	if (cr6.eq) goto loc_8320FCB8;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(r11.s32, 114, xer);
	// beq cr6,0x8320fcb8
	if (cr6.eq) goto loc_8320FCB8;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(r11.s32, 115, xer);
	// beq cr6,0x8320fcb8
	if (cr6.eq) goto loc_8320FCB8;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8320fcbc
	if (!cr6.eq) goto loc_8320FCBC;
loc_8320FCB8:
	// li r11,1
	r11.s64 = 1;
loc_8320FCBC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FC90) {
	__imp__sub_8320FC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x8320fcf8
	if (cr6.eq) goto loc_8320FCF8;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x8320fcf8
	if (cr6.eq) goto loc_8320FCF8;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// beq cr6,0x8320fcf8
	if (cr6.eq) goto loc_8320FCF8;
	// cmpwi cr6,r11,142
	cr6.compare<int32_t>(r11.s32, 142, xer);
	// beq cr6,0x8320fcf8
	if (cr6.eq) goto loc_8320FCF8;
	// cmpwi cr6,r11,143
	cr6.compare<int32_t>(r11.s32, 143, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8320fcfc
	if (!cr6.eq) goto loc_8320FCFC;
loc_8320FCF8:
	// li r11,1
	r11.s64 = 1;
loc_8320FCFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FCC8) {
	__imp__sub_8320FCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FD08) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8320fde8
	if (!cr6.eq) goto loc_8320FDE8;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(228) );
	// rlwinm. r11,r11,23,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320fd58
	if (cr0.eq) goto loc_8320FD58;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bne cr6,0x8320fd58
	if (!cr6.eq) goto loc_8320FD58;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fec58
	sub_831FEC58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320fdf4
	if (!cr0.eq) goto loc_8320FDF4;
loc_8320FD58:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320fde0
	if (cr0.eq) goto loc_8320FDE0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320fd9c
	if (cr0.eq) goto loc_8320FD9C;
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x8320fdf4
	if (cr6.eq) goto loc_8320FDF4;
loc_8320FD9C:
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320fde0
	if (cr0.eq) goto loc_8320FDE0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320fde0
	if (cr0.eq) goto loc_8320FDE0;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x8320fdf4
	if (cr6.eq) goto loc_8320FDF4;
loc_8320FDE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8320fdf8
	goto loc_8320FDF8;
loc_8320FDE8:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8320fdf8
	if (cr6.eq) goto loc_8320FDF8;
loc_8320FDF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320FDF8:
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

PPC_WEAK_FUNC(sub_8320FD08) {
	__imp__sub_8320FD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// beq cr6,0x8320fe40
	if (cr6.eq) goto loc_8320FE40;
loc_8320FE28:
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8320fe28
	if (!cr6.eq) goto loc_8320FE28;
loc_8320FE40:
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x8320fe64
	if (cr6.eq) goto loc_8320FE64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8320FE4C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bne cr6,0x8320fe4c
	if (!cr6.eq) goto loc_8320FE4C;
loc_8320FE64:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FE10) {
	__imp__sub_8320FE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r5
	PPC_STORE_U32(r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FE70) {
	__imp__sub_8320FE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320fed4
	if (cr0.eq) goto loc_8320FED4;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8320fec8
	if (cr6.lt) goto loc_8320FEC8;
	// beq cr6,0x8320febc
	if (cr6.eq) goto loc_8320FEBC;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x8320feb0
	if (cr6.lt) goto loc_8320FEB0;
	// bne cr6,0x8320fed4
	if (!cr6.eq) goto loc_8320FED4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3;
	// blr 
	return;
loc_8320FEB0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// blr 
	return;
loc_8320FEBC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_8320FEC8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// blr 
	return;
loc_8320FED4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FE80) {
	__imp__sub_8320FE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320ff38
	if (cr0.eq) goto loc_8320FF38;
	// blt cr6,0x8320ff2c
	if (cr6.lt) goto loc_8320FF2C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x8320ff20
	if (cr6.eq) goto loc_8320FF20;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x8320ff14
	if (cr6.lt) goto loc_8320FF14;
	// bne cr6,0x8320ff50
	if (!cr6.eq) goto loc_8320FF50;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_8320FF14:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
loc_8320FF20:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
loc_8320FF2C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
loc_8320FF38:
	// blt cr6,0x8320ff70
	if (cr6.lt) goto loc_8320FF70;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x8320ff68
	if (cr6.eq) goto loc_8320FF68;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x8320ff60
	if (cr6.lt) goto loc_8320FF60;
	// beq cr6,0x8320ff58
	if (cr6.eq) goto loc_8320FF58;
loc_8320FF50:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8320FF58:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8320FF60:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8320FF68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8320FF70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FEE0) {
	__imp__sub_8320FEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320ff90
	if (cr0.eq) goto loc_8320FF90;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// andi. r3,r11,34952
	ctx.r3.u64 = r11.u64 & 34952;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blr 
	return;
loc_8320FF90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320FF78) {
	__imp__sub_8320FF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320FF98) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8321004c
	if (cr0.eq) goto loc_8321004C;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r9,-18548
	r31.s64 = ctx.r9.s64 + -18548;
	// addi r30,r10,5664
	r30.s64 = ctx.r10.s64 + 5664;
	// addi r29,r11,-1408
	r29.s64 = r11.s64 + -1408;
loc_8320FFD0:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// blt cr6,0x83210028
	if (cr6.lt) goto loc_83210028;
	// beq cr6,0x8321001c
	if (cr6.eq) goto loc_8321001C;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// blt cr6,0x83210010
	if (cr6.lt) goto loc_83210010;
	// beq cr6,0x83210004
	if (cr6.eq) goto loc_83210004;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x83210040
	goto loc_83210040;
loc_83210004:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rlwinm r11,r11,26,30,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3;
	// b 0x83210030
	goto loc_83210030;
loc_83210010:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rlwinm r11,r11,28,30,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// b 0x83210030
	goto loc_83210030;
loc_8321001C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rlwinm r11,r11,30,30,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// b 0x83210030
	goto loc_83210030;
loc_83210028:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
loc_83210030:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x83210058
	if (cr6.eq) goto loc_83210058;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x83210058
	if (cr6.eq) goto loc_83210058;
loc_83210040:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// blt cr6,0x8320ffd0
	if (cr6.lt) goto loc_8320FFD0;
loc_8321004C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83210050:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_83210058:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83210050
	goto loc_83210050;
}

PPC_WEAK_FUNC(sub_8320FF98) {
	__imp__sub_8320FF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210060) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832100a0
	if (cr0.eq) goto loc_832100A0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// b 0x832100a4
	goto loc_832100A4;
loc_832100A0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832100A4:
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

PPC_WEAK_FUNC(sub_83210060) {
	__imp__sub_83210060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832100B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bgt cr6,0x832100d8
	if (cr6.gt) goto loc_832100D8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832100D8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832100B8) {
	__imp__sub_832100B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832100E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83210120
	if (cr6.lt) goto loc_83210120;
	// beq cr6,0x83210110
	if (cr6.eq) goto loc_83210110;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x83210124
	if (!cr6.lt) goto loc_83210124;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x83210124
	goto loc_83210124;
loc_83210110:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x83210124
	goto loc_83210124;
loc_83210120:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
loc_83210124:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x83210138
	if (cr6.gt) goto loc_83210138;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83210138:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832100E8) {
	__imp__sub_832100E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210148) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83210148) {
	__imp__sub_83210148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1316
	r11.s64 = r11.s64 + -1316;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83210150) {
	__imp__sub_83210150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83210178) {
	__imp__sub_83210178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83210188) {
	__imp__sub_83210188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210198) {
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
	// beq cr6,0x832101e0
	if (cr6.eq) goto loc_832101E0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,25
	ctx.r6.s64 = 25;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_832101E0:
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

PPC_WEAK_FUNC(sub_83210198) {
	__imp__sub_83210198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832101F8) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83210244
	if (cr6.eq) goto loc_83210244;
	// rotlwi r4,r11,0
	ctx.r4.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_83210244:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_832101F8) {
	__imp__sub_832101F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210260) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83210364
	if (cr6.eq) goto loc_83210364;
loc_832102B0:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832102f8
	if (!cr6.gt) goto loc_832102F8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_832102C0:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x832102e8
	if (cr6.eq) goto loc_832102E8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x832102e8
	if (cr6.eq) goto loc_832102E8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x832102e8
	if (cr6.eq) goto loc_832102E8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x83210338
	if (!cr6.eq) goto loc_83210338;
loc_832102E8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x832102c0
	if (cr6.lt) goto loc_832102C0;
loc_832102F8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832102b0
	if (!cr6.eq) goto loc_832102B0;
	// b 0x83210364
	goto loc_83210364;
loc_83210338:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83210364:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_83210260) {
	__imp__sub_83210260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210380) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83210260
	sub_83210260(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83210594
	if (cr6.eq) goto loc_83210594;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// bne cr6,0x832103f8
	if (!cr6.eq) goto loc_832103F8;
	// li r31,1
	r31.s64 = 1;
	// b 0x83210408
	goto loc_83210408;
loc_832103F8:
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x83210408
	if (!cr6.eq) goto loc_83210408;
	// li r31,1
	r31.s64 = 1;
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
loc_83210408:
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bge cr6,0x83210488
	if (!cr6.lt) goto loc_83210488;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x83210488
	if (!cr6.eq) goto loc_83210488;
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x83210440
	if (cr6.eq) goto loc_83210440;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x83210488
	if (!cr6.eq) goto loc_83210488;
loc_83210440:
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x8321045c
	if (cr6.lt) goto loc_8321045C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x8321047c
	if (!cr6.gt) goto loc_8321047C;
loc_8321045C:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x8321046c
	if (cr6.lt) goto loc_8321046C;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// ble cr6,0x8321047c
	if (!cr6.gt) goto loc_8321047C;
loc_8321046C:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x83210488
	if (cr6.lt) goto loc_83210488;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x83210488
	if (cr6.gt) goto loc_83210488;
loc_8321047C:
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x832104d0
	goto loc_832104D0;
loc_83210488:
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bge cr6,0x832104cc
	if (!cr6.lt) goto loc_832104CC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x832104cc
	if (!cr6.eq) goto loc_832104CC;
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x832104cc
	if (cr6.lt) goto loc_832104CC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x832104cc
	if (cr6.gt) goto loc_832104CC;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x832104d0
	goto loc_832104D0;
loc_832104CC:
	// li r8,10
	ctx.r8.s64 = 10;
loc_832104D0:
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x8321055c
	if (!cr6.lt) goto loc_8321055C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r7,-1
	ctx.r7.s64 = -1;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
loc_832104E4:
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x83210508
	if (cr6.lt) goto loc_83210508;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x83210508
	if (cr6.gt) goto loc_83210508;
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// b 0x83210534
	goto loc_83210534;
loc_83210508:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// ble cr6,0x83210520
	if (!cr6.gt) goto loc_83210520;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x83210520
	if (cr6.gt) goto loc_83210520;
	// addi r10,r11,-55
	ctx.r10.s64 = r11.s64 + -55;
	// b 0x83210534
	goto loc_83210534;
loc_83210520:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// ble cr6,0x83210534
	if (!cr6.gt) goto loc_83210534;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// bgt cr6,0x83210534
	if (cr6.gt) goto loc_83210534;
	// addi r10,r11,-87
	ctx.r10.s64 = r11.s64 + -87;
loc_83210534:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8321055c
	if (!cr6.lt) goto loc_8321055C;
	// clrldi r11,r8,32
	r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r11,r11,r29
	r11.s64 = r11.s64 * r29.s64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x832104e4
	if (cr6.lt) goto loc_832104E4;
loc_8321055C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c38
	return;
loc_83210594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83210380) {
	__imp__sub_83210380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832105A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x83210260
	sub_83210260(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r31,0
	r31.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832106b4
	if (cr6.eq) goto loc_832106B4;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x83210614
	if (cr6.lt) goto loc_83210614;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x83210634
	if (!cr6.gt) goto loc_83210634;
loc_83210614:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x83210634
	if (cr6.eq) goto loc_83210634;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x83210634
	if (cr6.eq) goto loc_83210634;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x83210634
	if (cr6.eq) goto loc_83210634;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x832106b4
	if (!cr6.eq) goto loc_832106B4;
loc_83210634:
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x832106b4
	if (!cr6.gt) goto loc_832106B4;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// li r9,46
	ctx.r9.s64 = 46;
loc_83210648:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x83210660
	if (cr6.lt) goto loc_83210660;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x83210690
	if (!cr6.gt) goto loc_83210690;
loc_83210660:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x83210690
	if (cr6.eq) goto loc_83210690;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x83210690
	if (cr6.eq) goto loc_83210690;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// beq cr6,0x83210690
	if (cr6.eq) goto loc_83210690;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(r11.s32, 101, xer);
	// beq cr6,0x83210690
	if (cr6.eq) goto loc_83210690;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x832106a0
	if (cr6.eq) goto loc_832106A0;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x832106b4
	if (!cr6.eq) goto loc_832106B4;
loc_83210690:
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x832106a0
	if (cr6.eq) goto loc_832106A0;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x832106a4
	if (!cr6.eq) goto loc_832106A4;
loc_832106A0:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_832106A4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x83210648
	if (cr6.lt) goto loc_83210648;
loc_832106B4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stbx r10,r31,r11
	PPC_STORE_U8(r31.u32 + r11.u32, ctx.r10.u8);
	// ble cr6,0x83210708
	if (!cr6.gt) goto loc_83210708;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca99c0
	sub_82CA99C0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x83210710
	goto loc_83210710;
loc_83210708:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	ctx.f1.f64 = double(temp.f32);
loc_83210710:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

PPC_WEAK_FUNC(sub_832105A0) {
	__imp__sub_832105A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210728) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x83210260
	sub_83210260(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x83210810
	if (cr6.lt) goto loc_83210810;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,3900
	ctx.r4.s64 = r11.s64 + 3900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51760
	sub_82D51760(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83210810
	if (!cr6.eq) goto loc_83210810;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// beq cr6,0x832107d0
	if (cr6.eq) goto loc_832107D0;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x832107d0
	if (cr6.eq) goto loc_832107D0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x832107d0
	if (cr6.eq) goto loc_832107D0;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x832107d0
	if (cr6.eq) goto loc_832107D0;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x83210810
	if (!cr6.eq) goto loc_83210810;
loc_832107D0:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_83210810:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// blt cr6,0x832108a4
	if (cr6.lt) goto loc_832108A4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,5664
	ctx.r4.s64 = r11.s64 + 5664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51760
	sub_82D51760(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832108a4
	if (!cr6.eq) goto loc_832108A4;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// beq cr6,0x83210864
	if (cr6.eq) goto loc_83210864;
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x83210864
	if (cr6.eq) goto loc_83210864;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x83210864
	if (cr6.eq) goto loc_83210864;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x83210864
	if (cr6.eq) goto loc_83210864;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x832108a4
	if (!cr6.eq) goto loc_832108A4;
loc_83210864:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_832108A4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83210728) {
	__imp__sub_83210728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832108C8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

PPC_WEAK_FUNC(sub_832108C8) {
	__imp__sub_832108C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210910) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x832105a0
	sub_832105A0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
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

PPC_WEAK_FUNC(sub_83210910) {
	__imp__sub_83210910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210958) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x832105a0
	sub_832105A0(ctx, base);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, ctx.f1.u64);
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

PPC_WEAK_FUNC(sub_83210958) {
	__imp__sub_83210958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832109A0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// bl 0x83210260
	sub_83210260(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x832109fc
	if (!cr6.gt) goto loc_832109FC;
loc_832109D0:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// bl 0x82d5a9d8
	sub_82D5A9D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83210a08
	if (cr6.eq) goto loc_83210A08;
	// extsb r11,r27
	r11.s64 = r27.s8;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x83210a08
	if (cr6.eq) goto loc_83210A08;
	// stbx r3,r31,r29
	PPC_STORE_U8(r31.u32 + r29.u32, ctx.r3.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x832109d0
	if (cr6.lt) goto loc_832109D0;
loc_832109FC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_83210A08:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r11,r31,r29
	PPC_STORE_U8(r31.u32 + r29.u32, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_832109A0) {
	__imp__sub_832109A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_83210A20) {
	__imp__sub_83210A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1276
	r11.s64 = r11.s64 + -1276;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83210A38) {
	__imp__sub_83210A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210A70) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1276
	r11.s64 = r11.s64 + -1276;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r3,30000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(30000) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_83210A70) {
	__imp__sub_83210A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210AD0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1276
	r11.s64 = r11.s64 + -1276;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,28
	r11.s64 = 28;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x830cd660
	sub_830CD660(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83210AD0) {
	__imp__sub_83210AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210B40) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-1276
	r11.s64 = r11.s64 + -1276;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x83210ba4
	if (cr6.eq) goto loc_83210BA4;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83210ba4
	if (cr6.eq) goto loc_83210BA4;
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
	// bne cr6,0x83210ba4
	if (!cr6.eq) goto loc_83210BA4;
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
loc_83210BA4:
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

PPC_WEAK_FUNC(sub_83210B40) {
	__imp__sub_83210B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210BC8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x83210380
	sub_83210380(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83210c0c
	if (cr6.eq) goto loc_83210C0C;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// extsh r11,r11
	r11.s64 = r11.s16;
loc_83210C0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
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

PPC_WEAK_FUNC(sub_83210BC8) {
	__imp__sub_83210BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210C30) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x83210380
	sub_83210380(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83210c74
	if (cr6.eq) goto loc_83210C74;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_83210C74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
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

PPC_WEAK_FUNC(sub_83210C30) {
	__imp__sub_83210C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210C98) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x83210380
	sub_83210380(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r11,r3,0
	r11.u64 = rotl32(ctx.r3.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83210cd4
	if (cr6.eq) goto loc_83210CD4;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_83210CD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_83210C98) {
	__imp__sub_83210C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210CF8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x83210380
	sub_83210380(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r11,r3,0
	r11.u64 = rotl32(ctx.r3.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83210d34
	if (cr6.eq) goto loc_83210D34;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_83210D34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_83210CF8) {
	__imp__sub_83210CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210D58) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x83210380
	sub_83210380(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// neg r11,r3
	r11.s64 = -ctx.r3.s64;
	// bne cr6,0x83210d94
	if (!cr6.eq) goto loc_83210D94;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_83210D94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
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

PPC_WEAK_FUNC(sub_83210D58) {
	__imp__sub_83210D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210DB8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x83210380
	sub_83210380(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// neg r11,r3
	r11.s64 = -ctx.r3.s64;
	// bne cr6,0x83210df4
	if (!cr6.eq) goto loc_83210DF4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_83210DF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
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

PPC_WEAK_FUNC(sub_83210DB8) {
	__imp__sub_83210DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83210E18) {
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
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82d51270
	sub_82D51270(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x83210260
	sub_83210260(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82d5a9d8
	sub_82D5A9D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83210f04
	if (cr6.eq) goto loc_83210F04;
loc_83210E80:
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// beq cr6,0x83210f04
	if (cr6.eq) goto loc_83210F04;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83210f04
	if (cr6.eq) goto loc_83210F04;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// beq cr6,0x83210f04
	if (cr6.eq) goto loc_83210F04;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x83210f04
	if (cr6.eq) goto loc_83210F04;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// extsb r31,r3
	r31.s64 = ctx.r3.s8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x83210ec4
	if (!cr6.eq) goto loc_83210EC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_83210EC4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stbx r31,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r31.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82d5a9d8
	sub_82D5A9D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x83210e80
	if (!cr6.eq) goto loc_83210E80;
loc_83210F04:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x83210f38
	if (!cr6.eq) goto loc_83210F38;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_83210F38:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stbx r27,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r27.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x83210fbc
	if (cr6.eq) goto loc_83210FBC;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83210fbc
	if (cr6.eq) goto loc_83210FBC;
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x83210fa4
	if (!cr6.lt) goto loc_83210FA4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83210f94
	if (cr6.lt) goto loc_83210F94;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83210F94:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_83210FA4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// b 0x83210ff8
	goto loc_83210FF8;
loc_83210FBC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x83210fe8
	if (!cr6.lt) goto loc_83210FE8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bgt cr6,0x83210fdc
	if (cr6.gt) goto loc_83210FDC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83210FDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_83210FE8:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
loc_83210FF8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83211024
	if (!cr6.eq) goto loc_83211024;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_83211024:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83210E18) {
	__imp__sub_83210E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211030) {
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
	// bl 0x83210b40
	sub_83210B40(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83211078
	if (cr6.eq) goto loc_83211078;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,25
	ctx.r6.s64 = 25;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_83211078:
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

PPC_WEAK_FUNC(sub_83211030) {
	__imp__sub_83211030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211098) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83211100
	if (!cr6.gt) goto loc_83211100;
loc_832110D4:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// addi r10,r10,-10
	ctx.r10.s64 = ctx.r10.s64 + -10;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// blt cr6,0x832110d4
	if (cr6.lt) goto loc_832110D4;
loc_83211100:
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

PPC_WEAK_FUNC(sub_83211098) {
	__imp__sub_83211098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211118) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

PPC_WEAK_FUNC(sub_83211118) {
	__imp__sub_83211118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211158) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

PPC_WEAK_FUNC(sub_83211158) {
	__imp__sub_83211158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211198) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832111d0
	if (!cr6.eq) goto loc_832111D0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_832111D0:
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

PPC_WEAK_FUNC(sub_83211198) {
	__imp__sub_83211198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832111E8) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83211220
	if (!cr6.eq) goto loc_83211220;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_83211220:
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

PPC_WEAK_FUNC(sub_832111E8) {
	__imp__sub_832111E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30444
	r11.s64 = r11.s64 + 30444;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211238) {
	__imp__sub_83211238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211278) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,30444
	r11.s64 = r11.s64 + 30444;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832112d4
	if (cr6.eq) goto loc_832112D4;
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
	// bne cr6,0x832112d4
	if (!cr6.eq) goto loc_832112D4;
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
loc_832112D4:
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

PPC_WEAK_FUNC(sub_83211278) {
	__imp__sub_83211278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832112F8) {
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
	// bl 0x83211278
	sub_83211278(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83211340
	if (cr6.eq) goto loc_83211340;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,25
	ctx.r6.s64 = 25;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_83211340:
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

PPC_WEAK_FUNC(sub_832112F8) {
	__imp__sub_832112F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211360) {
	__imp__sub_83211360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211378) {
	__imp__sub_83211378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83211390:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83211390
	if (!cr6.eq) goto loc_83211390;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211380) {
	__imp__sub_83211380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832113A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_832113B8:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x832113b8
	if (!cr6.eq) goto loc_832113B8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832113A8) {
	__imp__sub_832113A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832113D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,20
	ctx.r3.s64 = ctx.r4.s64 + 20;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832113D0) {
	__imp__sub_832113D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832113D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832113D8) {
	__imp__sub_832113D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832113E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832113E0) {
	__imp__sub_832113E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832113E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8321141c
	if (!cr6.eq) goto loc_8321141C;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83211418
	if (!cr6.eq) goto loc_83211418;
loc_83211400:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83211420
	if (cr6.eq) goto loc_83211420;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83211400
	if (cr6.eq) goto loc_83211400;
loc_83211418:
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
loc_8321141C:
	// blr 
	return;
loc_83211420:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832113E8) {
	__imp__sub_832113E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211428) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211428) {
	__imp__sub_83211428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211430) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211430) {
	__imp__sub_83211430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211438) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83211494
	if (cr6.eq) goto loc_83211494;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x83211498
	goto loc_83211498;
loc_83211494:
	// li r31,0
	r31.s64 = 0;
loc_83211498:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x832114f0
	if (cr6.eq) goto loc_832114F0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832114dc
	if (cr6.eq) goto loc_832114DC;
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_832114DC:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_832114F0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83211514
	if (cr6.eq) goto loc_83211514;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_83211514:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83211438) {
	__imp__sub_83211438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211528) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r25,r11
	r25.u64 = r11.u64;
	// bne cr6,0x83211554
	if (!cr6.eq) goto loc_83211554;
	// lwz r25,12(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
loc_83211554:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83211568
	if (cr6.eq) goto loc_83211568;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x8321158c
	goto loc_8321158C;
loc_83211568:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321157c
	if (cr6.eq) goto loc_8321157C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x8321158c
	goto loc_8321158C;
loc_8321157C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8321158c
	if (!cr6.eq) goto loc_8321158C;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_8321158C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832115a4
	if (cr6.eq) goto loc_832115A4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x832115d0
	goto loc_832115D0;
loc_832115A4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832115bc
	if (cr6.eq) goto loc_832115BC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x832115d0
	goto loc_832115D0;
loc_832115BC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x832115d0
	if (!cr6.eq) goto loc_832115D0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_832115D0:
	// li r11,0
	r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x832116b8
	if (cr6.eq) goto loc_832116B8;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r29,4
	r29.s64 = 4;
loc_83211620:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r31,-4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-4) );
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// addi r5,r11,20
	ctx.r5.s64 = r11.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x832116b0
	if (cr6.eq) goto loc_832116B0;
loc_8321166C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8321168c
	if (!cr6.eq) goto loc_8321168C;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_8321168C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8321166c
	if (!cr6.eq) goto loc_8321166C;
loc_832116B0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83211620
	if (!cr6.eq) goto loc_83211620;
loc_832116B8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832116e4
	if (!cr6.eq) goto loc_832116E4;
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
loc_832116E4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_83211528) {
	__imp__sub_83211528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832116F0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r11,-272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-272) );
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8321176c
	if (cr0.lt) goto loc_8321176C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83211744
	if (cr6.eq) goto loc_83211744;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
loc_83211744:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83211754
	if (cr6.eq) goto loc_83211754;
	// ld r11,104(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
loc_83211754:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83211764
	if (cr6.eq) goto loc_83211764;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
loc_83211764:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83211774
	goto loc_83211774;
loc_8321176C:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83211774:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832116F0) {
	__imp__sub_832116F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211780) {
	__imp__sub_83211780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211790) {
	PPC_FUNC_PROLOGUE();
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
	// lis r30,-32246
	r30.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r30,-27456
	r11.s64 = r30.s64 + -27456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1580
	ctx.r4.s64 = r11.s64 + 1580;
	// lfs f31,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	f31.f64 = double(temp.f32);
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lfs f0,-27456(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -27456);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stb r11,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r11.u8);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211790) {
	__imp__sub_83211790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// vspltisw v0,1
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x1)));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// vcfux v13,v0,0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::cvtepu32_f32(simd::load_u32(ctx.v0.u32)));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// addi r4,r6,-27456
	ctx.r4.s64 = ctx.r6.s64 + -27456;
	// li r11,0
	r11.s64 = 0;
	// li r31,1
	r31.s64 = 1;
	// lfs f13,-27456(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lfs f0,-12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211860) {
	__imp__sub_83211860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// vspltisw v0,1
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x1)));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// vcfux v13,v0,0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::cvtepu32_f32(simd::load_u32(ctx.v0.u32)));
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
	// addi r5,r7,-27456
	ctx.r5.s64 = ctx.r7.s64 + -27456;
	// lis r31,-32246
	r31.s64 = -2113273856;
	// li r11,0
	r11.s64 = 0;
	// lfs f13,-27456(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r31,-28224
	ctx.r7.s64 = r31.s64 + -28224;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// li r31,5
	r31.s64 = 5;
	// lfs f0,-12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -12);
	f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f10,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lvlx v12,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v11,v12,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, r11.u8);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, r11.u8);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vand v10,v11,v0
	simd::store_u8(ctx.v10.u8, simd::and_u8(simd::load_u8(ctx.v11.u8), simd::load_u8(ctx.v0.u8)));
	// stvx128 v10,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, r11.u8);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211900) {
	__imp__sub_83211900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832119D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// vspltisw v0,1
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x1)));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// vcfux v13,v0,0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::cvtepu32_f32(simd::load_u32(ctx.v0.u32)));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// addi r4,r6,-27456
	ctx.r4.s64 = ctx.r6.s64 + -27456;
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lfs f13,-27456(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// addi r6,r8,-28224
	ctx.r6.s64 = ctx.r8.s64 + -28224;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lfs f0,-12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// lvlx v12,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v11,v12,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// li r31,32
	r31.s64 = 32;
	// lfs f10,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stvx128 v13,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f11,-36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lfs f12,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, r11.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, r11.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vand v10,v11,v0
	simd::store_u8(ctx.v10.u8, simd::and_u8(simd::load_u8(ctx.v11.u8), simd::load_u8(ctx.v0.u8)));
	// stvx128 v10,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, r11.u8);
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, r11.u8);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stfs f0,108(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stb r8,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r8.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832119D8) {
	__imp__sub_832119D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211AE0) {
	__imp__sub_83211AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211AF0) {
	__imp__sub_83211AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B00) {
	__imp__sub_83211B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B10) {
	__imp__sub_83211B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B20) {
	__imp__sub_83211B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B28) {
	__imp__sub_83211B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B30) {
	__imp__sub_83211B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B40) {
	__imp__sub_83211B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B48) {
	__imp__sub_83211B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B50) {
	__imp__sub_83211B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B60) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B60) {
	__imp__sub_83211B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B68) {
	__imp__sub_83211B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B78) {
	__imp__sub_83211B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B88) {
	__imp__sub_83211B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B90) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B90) {
	__imp__sub_83211B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211B98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211B98) {
	__imp__sub_83211B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BA0) {
	__imp__sub_83211BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BA8) {
	__imp__sub_83211BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BB8) {
	__imp__sub_83211BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BC0) {
	__imp__sub_83211BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BC8) {
	__imp__sub_83211BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BD8) {
	__imp__sub_83211BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BE0) {
	__imp__sub_83211BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BE8) {
	__imp__sub_83211BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BF0) {
	__imp__sub_83211BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211BF8) {
	__imp__sub_83211BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211C08) {
	__imp__sub_83211C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211C20) {
	__imp__sub_83211C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211C38) {
	__imp__sub_83211C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211C50) {
	__imp__sub_83211C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211C68) {
	__imp__sub_83211C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vrlimi128 v11,v13,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211C78) {
	__imp__sub_83211C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-8
	ctx.r7.s64 = ctx.r1.s64 + -8;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vor v1,v11,v11
	simd::store_i8(ctx.v1.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v1,v13,3,2
	simd::store_f32(ctx.v1.f32, simd::blend_f32<3>(simd::load_f32(ctx.v1.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211CD0) {
	__imp__sub_83211CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v1,v0,0
	simd::store_i32(ctx.v1.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83211D28) {
	__imp__sub_83211D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211D48) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_83211D7C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83211d90
	if (cr6.eq) goto loc_83211D90;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x83211d94
	if (cr6.eq) goto loc_83211D94;
loc_83211D90:
	// twi 31,r0,22
loc_83211D94:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x83211ddc
	if (cr6.eq) goto loc_83211DDC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83211dac
	if (!cr6.eq) goto loc_83211DAC;
	// twi 31,r0,22
loc_83211DAC:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83211dbc
	if (!cr6.eq) goto loc_83211DBC;
	// twi 31,r0,22
loc_83211DBC:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a596f0
	sub_82A596F0(ctx, base);
	// b 0x83211d7c
	goto loc_83211D7C;
loc_83211DDC:
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

PPC_WEAK_FUNC(sub_83211D48) {
	__imp__sub_83211D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211DF8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_83211DF8) {
	__imp__sub_83211DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211E68) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82a1c428
	sub_82A1C428(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r9,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r9.u64);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// beq cr6,0x83211eb4
	if (cr6.eq) goto loc_83211EB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83211EB4:
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

PPC_WEAK_FUNC(sub_83211E68) {
	__imp__sub_83211E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211ED0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-24596
	r30.s64 = r11.s64 + -24596;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83211f84
	if (cr6.eq) goto loc_83211F84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322eb68
	sub_8322EB68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83211f70
	if (cr6.eq) goto loc_83211F70;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83211f70
	if (cr6.eq) goto loc_83211F70;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83211F70:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83211F84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83211ED0) {
	__imp__sub_83211ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83211F90) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83211ff8
	if (!cr6.eq) goto loc_83211FF8;
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83211FF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83211F90) {
	__imp__sub_83211F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321204c
	if (cr6.eq) goto loc_8321204C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321204C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212000) {
	__imp__sub_83212000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212058) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82a1bd30
	sub_82A1BD30(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// beq cr6,0x832120a0
	if (cr6.eq) goto loc_832120A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832120A0:
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

PPC_WEAK_FUNC(sub_83212058) {
	__imp__sub_83212058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832120B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-24636
	r30.s64 = r11.s64 + -24636;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8321214c
	if (cr6.eq) goto loc_8321214C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ebe8
	sub_8322EBE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321214c
	if (cr6.eq) goto loc_8321214C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321214C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832120B8) {
	__imp__sub_832120B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212158) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832121b8
	if (!cr6.eq) goto loc_832121B8;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832121B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212158) {
	__imp__sub_83212158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832121C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212210
	if (cr6.eq) goto loc_83212210;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832121C0) {
	__imp__sub_832121C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83212284
	if (cr6.lt) goto loc_83212284;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x83212294
	goto loc_83212294;
loc_83212284:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83212294:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832122c8
	if (cr6.eq) goto loc_832122C8;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_832122C8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83212324
	if (cr6.lt) goto loc_83212324;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x83212334
	goto loc_83212334;
loc_83212324:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83212334:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212368
	if (cr6.eq) goto loc_83212368;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_83212368:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832123c4
	if (cr6.lt) goto loc_832123C4;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x832123d4
	goto loc_832123D4;
loc_832123C4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_832123D4:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212408
	if (cr6.eq) goto loc_83212408;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_83212408:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212424
	if (cr6.eq) goto loc_83212424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212424:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212218) {
	__imp__sub_83212218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212430) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-24680
	r30.s64 = r11.s64 + -24680;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-64
	ctx.r4.s64 = r30.s64 + -64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8321254c
	if (cr6.eq) goto loc_8321254C;
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r28,r11,63
	r28.s64 = r11.s64 + 63;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832124a0
	if (cr6.eq) goto loc_832124A0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832124A0:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = r30.s64 + -12;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832124d8
	if (cr6.eq) goto loc_832124D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832124D8:
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212510
	if (cr6.eq) goto loc_83212510;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83212510:
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321254c
	if (cr6.eq) goto loc_8321254C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321254C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83212430) {
	__imp__sub_83212430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832125c0
	if (!cr6.eq) goto loc_832125C0;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832125C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212558) {
	__imp__sub_83212558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832125C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212604
	if (cr6.eq) goto loc_83212604;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212604:
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

PPC_WEAK_FUNC(sub_832125C8) {
	__imp__sub_832125C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8321268c
	if (cr6.lt) goto loc_8321268C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x8321269c
	goto loc_8321269C;
loc_8321268C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_8321269C:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832126d0
	if (cr6.eq) goto loc_832126D0;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_832126D0:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832126ec
	if (cr6.eq) goto loc_832126EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832126EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212620) {
	__imp__sub_83212620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832126F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-24760
	r30.s64 = r11.s64 + -24760;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832127a4
	if (cr6.eq) goto loc_832127A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83212764
	if (!cr6.eq) goto loc_83212764;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83212768
	goto loc_83212768;
loc_83212764:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83212768:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832127a4
	if (cr6.eq) goto loc_832127A4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832127A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832126F8) {
	__imp__sub_832126F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832127B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83212808
	if (!cr6.eq) goto loc_83212808;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212808:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832127B0) {
	__imp__sub_832127B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v1,r31,r5
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r31.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// bl 0x82a1cc60
	sub_82A1CC60(ctx, base);
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r29,24
	ctx.r5.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832128c4
	if (cr6.eq) goto loc_832128C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832128C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212810) {
	__imp__sub_83212810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832128D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x8321293c
	if (cr6.lt) goto loc_8321293C;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x8321294c
	goto loc_8321294C;
loc_8321293C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_8321294C:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212980
	if (cr6.eq) goto loc_83212980;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_83212980:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832129dc
	if (cr6.lt) goto loc_832129DC;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x832129ec
	goto loc_832129EC;
loc_832129DC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_832129EC:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212a20
	if (cr6.eq) goto loc_83212A20;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_83212A20:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83212a64
	if (cr6.lt) goto loc_83212A64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83212a74
	goto loc_83212A74;
loc_83212A64:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83212A74:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,24(r30)
	PPC_STORE_U8(r30.u32 + 24, ctx.r7.u8);
	// bl 0x82a1bea8
	sub_82A1BEA8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83212adc
	if (cr6.lt) goto loc_83212ADC;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83212aec
	goto loc_83212AEC;
loc_83212ADC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83212AEC:
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,48(r30)
	PPC_STORE_U8(r30.u32 + 48, ctx.r6.u8);
	// beq cr6,0x83212b14
	if (cr6.eq) goto loc_83212B14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212B14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832128D0) {
	__imp__sub_832128D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212B20) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-24812
	r30.s64 = r11.s64 + -24812;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-120
	ctx.r4.s64 = r30.s64 + -120;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83212c7c
	if (cr6.eq) goto loc_83212C7C;
	// addi r4,r30,-84
	ctx.r4.s64 = r30.s64 + -84;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r28,r11,63
	r28.s64 = r11.s64 + 63;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212b90
	if (cr6.eq) goto loc_83212B90;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83212B90:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,-64
	ctx.r4.s64 = r30.s64 + -64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212bc8
	if (cr6.eq) goto loc_83212BC8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83212BC8:
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,32
	ctx.r5.s64 = r29.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ec98
	sub_8322EC98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,48
	ctx.r5.s64 = r29.s64 + 48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83212c7c
	if (cr6.eq) goto loc_83212C7C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212C7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83212B20) {
	__imp__sub_83212B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83212d04
	if (!cr6.eq) goto loc_83212D04;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r11,32
	r11.s64 = 32;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// stb r10,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r11
	ea = (r31.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lbz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 48);
	// stb r9,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r9.u8);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212C88) {
	__imp__sub_83212C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// ld r11,20(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// ld r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// lbz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r11,r6,1
	r11.u64 = ctx.r6.u64 ^ 1;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(16) );
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83212db8
	if (cr6.eq) goto loc_83212DB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212DB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212D10) {
	__imp__sub_83212D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83212e2c
	if (cr6.lt) goto loc_83212E2C;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x83212e3c
	goto loc_83212E3C;
loc_83212E2C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83212E3C:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83212e70
	if (cr6.eq) goto loc_83212E70;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_83212E70:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a1bd30
	sub_82A1BD30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// bl 0x82a1bd30
	sub_82A1BD30(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r8,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r7,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r7.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83212ef0
	if (cr6.lt) goto loc_83212EF0;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83212f00
	goto loc_83212F00;
loc_83212EF0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83212F00:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,36(r30)
	PPC_STORE_U8(r30.u32 + 36, ctx.r6.u8);
	// beq cr6,0x83212f28
	if (cr6.eq) goto loc_83212F28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83212F28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83212DC0) {
	__imp__sub_83212DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83212F30) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-24940
	r30.s64 = r11.s64 + -24940;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-68
	ctx.r4.s64 = r30.s64 + -68;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83213054
	if (cr6.eq) goto loc_83213054;
	// addi r4,r30,-48
	ctx.r4.s64 = r30.s64 + -48;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83212f9c
	if (!cr6.eq) goto loc_83212F9C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83212fa0
	goto loc_83212FA0;
loc_83212F9C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83212FA0:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ebe8
	sub_8322EBE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = r30.s64 + -12;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,28
	ctx.r5.s64 = r29.s64 + 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ebe8
	sub_8322EBE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83213054
	if (cr6.eq) goto loc_83213054;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213054:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83212F30) {
	__imp__sub_83212F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832130e0
	if (!cr6.eq) goto loc_832130E0;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// lbz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// stb r7,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r7.u8);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832130E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213060) {
	__imp__sub_83213060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832130E8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-25036
	ctx.r4.s64 = r11.s64 + -25036;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_832130E8) {
	__imp__sub_832130E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213150) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832131bc
	if (cr6.lt) goto loc_832131BC;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x832131cc
	goto loc_832131CC;
loc_832131BC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_832131CC:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x83213200
	if (cr6.eq) goto loc_83213200;
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
loc_83213200:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83213254
	if (cr6.lt) goto loc_83213254;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x83213264
	goto loc_83213264;
loc_83213254:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83213264:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x83213298
	if (cr6.eq) goto loc_83213298;
	// lbz r11,89(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
loc_83213298:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// add r11,r3,r8
	r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83213310
	if (cr6.lt) goto loc_83213310;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83213320
	goto loc_83213320;
loc_83213310:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83213320:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,20(r30)
	PPC_STORE_U8(r30.u32 + 20, ctx.r6.u8);
	// beq cr6,0x83213348
	if (cr6.eq) goto loc_83213348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213348:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83213150) {
	__imp__sub_83213150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213350) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832133a8
	if (!cr6.eq) goto loc_832133A8;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832133A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213350) {
	__imp__sub_83213350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832133B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832133ec
	if (cr6.eq) goto loc_832133EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832133EC:
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

PPC_WEAK_FUNC(sub_832133B0) {
	__imp__sub_832133B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213408) {
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83213474
	if (cr6.lt) goto loc_83213474;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x83213484
	goto loc_83213484;
loc_83213474:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83213484:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x832134b8
	if (cr6.eq) goto loc_832134B8;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_832134B8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// beq cr6,0x832134d4
	if (cr6.eq) goto loc_832134D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832134D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213408) {
	__imp__sub_83213408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832134E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25132
	r30.s64 = r11.s64 + -25132;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8321358c
	if (cr6.eq) goto loc_8321358C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8321354c
	if (!cr6.eq) goto loc_8321354C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83213550
	goto loc_83213550;
loc_8321354C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83213550:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321358c
	if (cr6.eq) goto loc_8321358C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321358C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832134E0) {
	__imp__sub_832134E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213598) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832135f0
	if (!cr6.eq) goto loc_832135F0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832135F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213598) {
	__imp__sub_83213598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832135F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213634
	if (cr6.eq) goto loc_83213634;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213634:
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

PPC_WEAK_FUNC(sub_832135F8) {
	__imp__sub_832135F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x832136bc
	if (cr6.lt) goto loc_832136BC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x832136cc
	goto loc_832136CC;
loc_832136BC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_832136CC:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213700
	if (cr6.eq) goto loc_83213700;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_83213700:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8321371c
	if (cr6.eq) goto loc_8321371C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321371C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213650) {
	__imp__sub_83213650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213728) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25172
	r30.s64 = r11.s64 + -25172;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-92
	ctx.r4.s64 = r30.s64 + -92;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83213794
	if (cr6.eq) goto loc_83213794;
	// addi r4,r30,-68
	ctx.r4.s64 = r30.s64 + -68;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8321382c
	if (!cr6.eq) goto loc_8321382C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83213830
	goto loc_83213830;
loc_83213794:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832137e0
	if (cr6.eq) goto loc_832137E0;
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8321382c
	if (!cr6.eq) goto loc_8321382C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83213830
	goto loc_83213830;
loc_832137E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83213858
	if (cr6.eq) goto loc_83213858;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8321382c
	if (!cr6.eq) goto loc_8321382C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83213830
	goto loc_83213830;
loc_8321382C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83213830:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83213858:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8321386c
	if (cr6.eq) goto loc_8321386C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321386C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83213728) {
	__imp__sub_83213728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832138d0
	if (!cr6.eq) goto loc_832138D0;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832138D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213878) {
	__imp__sub_83213878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832138D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r29,24
	ctx.r5.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8321394c
	if (cr6.eq) goto loc_8321394C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321394C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832138D8) {
	__imp__sub_832138D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832139c4
	if (cr6.lt) goto loc_832139C4;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x832139d4
	goto loc_832139D4;
loc_832139C4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_832139D4:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213a08
	if (cr6.eq) goto loc_83213A08;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_83213A08:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83213a64
	if (cr6.lt) goto loc_83213A64;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x83213a74
	goto loc_83213A74;
loc_83213A64:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83213A74:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213aa8
	if (cr6.eq) goto loc_83213AA8;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_83213AA8:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83213aec
	if (cr6.lt) goto loc_83213AEC;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83213afc
	goto loc_83213AFC;
loc_83213AEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83213AFC:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,24(r30)
	PPC_STORE_U8(r30.u32 + 24, ctx.r6.u8);
	// beq cr6,0x83213b24
	if (cr6.eq) goto loc_83213B24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213B24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213958) {
	__imp__sub_83213958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213B30) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25284
	r30.s64 = r11.s64 + -25284;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = r30.s64 + -76;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83213c3c
	if (cr6.eq) goto loc_83213C3C;
	// addi r4,r30,-48
	ctx.r4.s64 = r30.s64 + -48;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r28,r11,63
	r28.s64 = r11.s64 + 63;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213ba0
	if (cr6.eq) goto loc_83213BA0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83213BA0:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213bd8
	if (cr6.eq) goto loc_83213BD8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83213BD8:
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83213c3c
	if (cr6.eq) goto loc_83213C3C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213C3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83213B30) {
	__imp__sub_83213B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83213cb0
	if (!cr6.eq) goto loc_83213CB0;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213CB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213C48) {
	__imp__sub_83213C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213CB8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213cf4
	if (cr6.eq) goto loc_83213CF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213CF4:
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

PPC_WEAK_FUNC(sub_83213CB8) {
	__imp__sub_83213CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213D10) {
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83213d7c
	if (cr6.lt) goto loc_83213D7C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x83213d8c
	goto loc_83213D8C;
loc_83213D7C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83213D8C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x83213dc0
	if (cr6.eq) goto loc_83213DC0;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_83213DC0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// beq cr6,0x83213ddc
	if (cr6.eq) goto loc_83213DDC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213DDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213D10) {
	__imp__sub_83213D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213DE8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25368
	r30.s64 = r11.s64 + -25368;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83213ea4
	if (cr6.eq) goto loc_83213EA4;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83213e5c
	if (!cr6.eq) goto loc_83213E5C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83213e60
	goto loc_83213E60;
loc_83213E5C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83213E60:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83213ea4
	if (cr6.eq) goto loc_83213EA4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83213DE8) {
	__imp__sub_83213DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213EB0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83213f08
	if (!cr6.eq) goto loc_83213F08;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213F08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213EB0) {
	__imp__sub_83213EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213F10) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83213f4c
	if (cr6.eq) goto loc_83213F4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83213F4C:
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

PPC_WEAK_FUNC(sub_83213F10) {
	__imp__sub_83213F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83213F68) {
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83213fd4
	if (cr6.lt) goto loc_83213FD4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x83213fe4
	goto loc_83213FE4;
loc_83213FD4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83213FE4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x83214018
	if (cr6.eq) goto loc_83214018;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_83214018:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// beq cr6,0x83214034
	if (cr6.eq) goto loc_83214034;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83213F68) {
	__imp__sub_83213F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214040) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25404
	r30.s64 = r11.s64 + -25404;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832140fc
	if (cr6.eq) goto loc_832140FC;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x832140b4
	if (!cr6.eq) goto loc_832140B4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x832140b8
	goto loc_832140B8;
loc_832140B4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832140B8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832140fc
	if (cr6.eq) goto loc_832140FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832140FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83214040) {
	__imp__sub_83214040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214108) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83214160
	if (!cr6.eq) goto loc_83214160;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83214108) {
	__imp__sub_83214108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214168) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832141a4
	if (cr6.eq) goto loc_832141A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832141A4:
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

PPC_WEAK_FUNC(sub_83214168) {
	__imp__sub_83214168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832141C0) {
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8321422c
	if (cr6.lt) goto loc_8321422C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x8321423c
	goto loc_8321423C;
loc_8321422C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_8321423C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x83214270
	if (cr6.eq) goto loc_83214270;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_83214270:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// beq cr6,0x8321428c
	if (cr6.eq) goto loc_8321428C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321428C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832141C0) {
	__imp__sub_832141C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214298) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25444
	r30.s64 = r11.s64 + -25444;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83214354
	if (cr6.eq) goto loc_83214354;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8321430c
	if (!cr6.eq) goto loc_8321430C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83214310
	goto loc_83214310;
loc_8321430C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83214310:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83214354
	if (cr6.eq) goto loc_83214354;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83214298) {
	__imp__sub_83214298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214360) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832143b8
	if (!cr6.eq) goto loc_832143B8;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832143B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83214360) {
	__imp__sub_83214360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832143C0) {
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
	// li r11,16
	r11.s64 = 16;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lvx128 v1,r31,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82a1cc60
	sub_82A1CC60(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214400
	if (cr6.eq) goto loc_83214400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214400:
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

PPC_WEAK_FUNC(sub_832143C0) {
	__imp__sub_832143C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214418) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82a1bea8
	sub_82A1BEA8(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vor v13,v0,v0
	simd::store_i8(ctx.v13.u8, simd::load_i8(ctx.v0.u8));
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// vmulfp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// beq cr6,0x83214468
	if (cr6.eq) goto loc_83214468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214468:
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

PPC_WEAK_FUNC(sub_83214418) {
	__imp__sub_83214418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214480) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25480
	r30.s64 = r11.s64 + -25480;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83214514
	if (cr6.eq) goto loc_83214514;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ec98
	sub_8322EC98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83214514
	if (cr6.eq) goto loc_83214514;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214514:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83214480) {
	__imp__sub_83214480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214520) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x8321457c
	if (!cr6.eq) goto loc_8321457C;
	// li r11,16
	r11.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r11
	ea = (r31.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321457C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83214520) {
	__imp__sub_83214520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214588) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832145c4
	if (cr6.eq) goto loc_832145C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832145C4:
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

PPC_WEAK_FUNC(sub_83214588) {
	__imp__sub_83214588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832145E0) {
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8321464c
	if (cr6.lt) goto loc_8321464C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x8321465c
	goto loc_8321465C;
loc_8321464C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_8321465C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x83214690
	if (cr6.eq) goto loc_83214690;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_83214690:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// beq cr6,0x832146ac
	if (cr6.eq) goto loc_832146AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832146AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832145E0) {
	__imp__sub_832145E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832146B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25524
	r30.s64 = r11.s64 + -25524;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83214764
	if (cr6.eq) goto loc_83214764;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83214724
	if (!cr6.eq) goto loc_83214724;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83214728
	goto loc_83214728;
loc_83214724:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83214728:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83214764
	if (cr6.eq) goto loc_83214764;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214764:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832146B8) {
	__imp__sub_832146B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214770) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x832147c8
	if (!cr6.eq) goto loc_832147C8;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832147C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83214770) {
	__imp__sub_83214770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832147D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321481c
	if (cr6.eq) goto loc_8321481C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321481C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832147D0) {
	__imp__sub_832147D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214828) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82a1bd30
	sub_82A1BD30(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// beq cr6,0x83214870
	if (cr6.eq) goto loc_83214870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214870:
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

PPC_WEAK_FUNC(sub_83214828) {
	__imp__sub_83214828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214888) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25572
	r30.s64 = r11.s64 + -25572;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8321491c
	if (cr6.eq) goto loc_8321491C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ebe8
	sub_8322EBE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321491c
	if (cr6.eq) goto loc_8321491C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321491C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83214888) {
	__imp__sub_83214888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214928) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83214988
	if (!cr6.eq) goto loc_83214988;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214988:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83214928) {
	__imp__sub_83214928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832149fc
	if (cr6.lt) goto loc_832149FC;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x83214a0c
	goto loc_83214A0C;
loc_832149FC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214A0C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x83214a40
	if (cr6.eq) goto loc_83214A40;
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
loc_83214A40:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83214a94
	if (cr6.lt) goto loc_83214A94;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x83214aa4
	goto loc_83214AA4;
loc_83214A94:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214AA4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x83214ad8
	if (cr6.eq) goto loc_83214AD8;
	// lbz r11,89(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
loc_83214AD8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// add r11,r3,r8
	r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83214b68
	if (cr6.lt) goto loc_83214B68;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x83214b78
	goto loc_83214B78;
loc_83214B68:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214B78:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x83214bac
	if (cr6.eq) goto loc_83214BAC;
	// lbz r11,89(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
loc_83214BAC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83214c08
	if (cr6.lt) goto loc_83214C08;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x83214c18
	goto loc_83214C18;
loc_83214C08:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214C18:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x83214c4c
	if (cr6.eq) goto loc_83214C4C;
	// lbz r11,89(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,107(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
loc_83214C4C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83214c90
	if (cr6.lt) goto loc_83214C90;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83214ca0
	goto loc_83214CA0;
loc_83214C90:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214CA0:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,28(r30)
	PPC_STORE_U8(r30.u32 + 28, ctx.r7.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83214d08
	if (cr6.lt) goto loc_83214D08;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x83214d18
	goto loc_83214D18;
loc_83214D08:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214D18:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83214d4c
	if (cr6.eq) goto loc_83214D4C;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_83214D4C:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83214d90
	if (cr6.lt) goto loc_83214D90;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83214da0
	goto loc_83214DA0;
loc_83214D90:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214DA0:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,36(r30)
	PPC_STORE_U8(r30.u32 + 36, ctx.r7.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83214df0
	if (cr6.lt) goto loc_83214DF0;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83214e00
	goto loc_83214E00;
loc_83214DF0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214E00:
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,-22564(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-22564) );
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// stb r6,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r6.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// blt cr6,0x83214ec4
	if (cr6.lt) goto loc_83214EC4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83214e78
	if (cr6.lt) goto loc_83214E78;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x83214e88
	goto loc_83214E88;
loc_83214E78:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214E88:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83214ebc
	if (cr6.eq) goto loc_83214EBC;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_83214EBC:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// b 0x83214f2c
	goto loc_83214F2C;
loc_83214EC4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x83214efc
	if (cr6.lt) goto loc_83214EFC;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x83214f0c
	goto loc_83214F0C;
loc_83214EFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83214F0C:
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214f28
	if (cr6.eq) goto loc_83214F28;
	// addi r10,r11,-27468
	ctx.r10.s64 = r11.s64 + -27468;
	// lfs f0,-384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -384);
	f0.f64 = double(temp.f32);
	// b 0x83214f2c
	goto loc_83214F2C;
loc_83214F28:
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
loc_83214F2C:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// stfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83214f44
	if (cr6.eq) goto loc_83214F44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214F44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83214990) {
	__imp__sub_83214990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214F50) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83214fb8
	if (!cr6.eq) goto loc_83214FB8;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83214F50) {
	__imp__sub_83214F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83214FC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83214ffc
	if (cr6.eq) goto loc_83214FFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83214FFC:
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

PPC_WEAK_FUNC(sub_83214FC0) {
	__imp__sub_83214FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83215084
	if (cr6.lt) goto loc_83215084;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x83215094
	goto loc_83215094;
loc_83215084:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83215094:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832150c8
	if (cr6.eq) goto loc_832150C8;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_832150C8:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832150e4
	if (cr6.eq) goto loc_832150E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832150E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83215018) {
	__imp__sub_83215018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832150F0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25820
	r30.s64 = r11.s64 + -25820;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8321519c
	if (cr6.eq) goto loc_8321519C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8321515c
	if (!cr6.eq) goto loc_8321515C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x83215160
	goto loc_83215160;
loc_8321515C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83215160:
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321519c
	if (cr6.eq) goto loc_8321519C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321519C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832150F0) {
	__imp__sub_832150F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832151A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x83215200
	if (!cr6.eq) goto loc_83215200;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_83215200:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832151A8) {
	__imp__sub_832151A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25056
	r30.s64 = r11.s64 + -25056;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83215334
	if (cr6.eq) goto loc_83215334;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,28344
	ctx.r7.s64 = r11.s64 + 28344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_8321525C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8321525c
	if (!cr0.eq) goto loc_8321525C;
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x832152a0
	if (!cr6.eq) goto loc_832152A0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x832152a4
	goto loc_832152A4;
loc_832152A0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832152A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829fd2a0
	sub_829FD2A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stw r27,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321532c
	if (cr6.eq) goto loc_8321532C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_8321532C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_83215334:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83215208) {
	__imp__sub_83215208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-27468
	r30.s64 = r11.s64 + -27468;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,1656
	ctx.r4.s64 = r30.s64 + 1656;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83215604
	if (cr6.eq) goto loc_83215604;
	// li r27,0
	r27.s64 = 0;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r8,r9,28344
	ctx.r8.s64 = ctx.r9.s64 + 28344;
loc_83215394:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x83215394
	if (!cr0.eq) goto loc_83215394;
	// addi r4,r30,1688
	ctx.r4.s64 = r30.s64 + 1688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r28,r11,63
	r28.s64 = r11.s64 + 63;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832153dc
	if (cr6.eq) goto loc_832153DC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832153DC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829fd2a0
	sub_829FD2A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stw r25,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r25.u32);
	// addi r4,r30,1704
	ctx.r4.s64 = r30.s64 + 1704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83215438
	if (cr6.eq) goto loc_83215438;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83215438:
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,1720
	ctx.r4.s64 = r30.s64 + 1720;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83215470
	if (cr6.eq) goto loc_83215470;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83215470:
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,1736
	ctx.r4.s64 = r30.s64 + 1736;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,28
	ctx.r5.s64 = r29.s64 + 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,1764
	ctx.r4.s64 = r30.s64 + 1764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832154d0
	if (cr6.eq) goto loc_832154D0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832154D0:
	// addi r5,r29,32
	ctx.r5.s64 = r29.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,1788
	ctx.r4.s64 = r30.s64 + 1788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,1812
	ctx.r4.s64 = r30.s64 + 1812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r29,37
	ctx.r5.s64 = r29.s64 + 37;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321559c
	if (cr6.eq) goto loc_8321559C;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// addi r4,r30,1832
	ctx.r4.s64 = r30.s64 + 1832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322ed88
	sub_8322ED88(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215594
	if (cr6.eq) goto loc_83215594;
	// lfs f0,-384(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -384);
	f0.f64 = double(temp.f32);
	// b 0x83215598
	goto loc_83215598;
loc_83215594:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
loc_83215598:
	// stfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 40, temp.u32);
loc_8321559C:
	// addi r4,r30,1848
	ctx.r4.s64 = r30.s64 + 1848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832155c0
	if (cr6.eq) goto loc_832155C0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832155C0:
	// addi r5,r29,40
	ctx.r5.s64 = r29.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r26,24
	ctx.r9.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832155fc
	if (cr6.eq) goto loc_832155FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83211d48
	sub_83211D48(ctx, base);
loc_832155FC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_83215604:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_83215340) {
	__imp__sub_83215340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215610) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82a14ae0
	sub_82A14AE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215610) {
	__imp__sub_83215610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215640) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r10,r11,7048
	ctx.r10.s64 = r11.s64 + 7048;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8321567c
	if (cr6.eq) goto loc_8321567C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8321567C:
	// addic. r9,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r9.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83215688
	if (cr0.eq) goto loc_83215688;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83215688:
	// addic. r9,r11,8
	xer.ca = r11.u32 > 4294967287;
	ctx.r9.s64 = r11.s64 + 8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83215694
	if (cr0.eq) goto loc_83215694;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83215694:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,17(r11)
	PPC_STORE_U8(r11.u32 + 17, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r9,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r9.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stb r9,17(r11)
	PPC_STORE_U8(r11.u32 + 17, ctx.r9.u8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83215640) {
	__imp__sub_83215640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832156E0) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r10,r11,7048
	ctx.r10.s64 = r11.s64 + 7048;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// bl 0x82859340
	sub_82859340(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// bl 0x826a4978
	sub_826A4978(ctx, base);
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

PPC_WEAK_FUNC(sub_832156E0) {
	__imp__sub_832156E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7360
	ctx.r10.s64 = r11.s64 + 7360;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215758) {
	__imp__sub_83215758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// addi r3,r5,7360
	ctx.r3.s64 = ctx.r5.s64 + 7360;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vrlimi128 v11,v13,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v11,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_83215768) {
	__imp__sub_83215768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832157F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7336
	ctx.r10.s64 = r11.s64 + 7336;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832157F8) {
	__imp__sub_832157F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215808) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,7336
	ctx.r9.s64 = r11.s64 + 7336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
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

PPC_WEAK_FUNC(sub_83215808) {
	__imp__sub_83215808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215858) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,7312
	ctx.r8.s64 = ctx.r10.s64 + 7312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
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

PPC_WEAK_FUNC(sub_83215858) {
	__imp__sub_83215858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832158B0) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,6724
	ctx.r9.s64 = ctx.r10.s64 + 6724;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
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

PPC_WEAK_FUNC(sub_832158B0) {
	__imp__sub_832158B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832158F8) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r10,6700
	ctx.r8.s64 = ctx.r10.s64 + 6700;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stb r7,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_832158F8) {
	__imp__sub_832158F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215960) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,6676
	ctx.r9.s64 = r11.s64 + 6676;
	// addi r4,r10,-25120
	ctx.r4.s64 = ctx.r10.s64 + -25120;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r8,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_83215960) {
	__imp__sub_83215960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832159E0) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,6652
	ctx.r9.s64 = r11.s64 + 6652;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832159E0) {
	__imp__sub_832159E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215A28) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,6628
	ctx.r9.s64 = ctx.r10.s64 + 6628;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
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

PPC_WEAK_FUNC(sub_83215A28) {
	__imp__sub_83215A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7264
	ctx.r10.s64 = r11.s64 + 7264;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215A70) {
	__imp__sub_83215A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215A80) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,7264
	ctx.r8.s64 = ctx.r10.s64 + 7264;
	// stb r9,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
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

PPC_WEAK_FUNC(sub_83215A80) {
	__imp__sub_83215A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7240
	ctx.r10.s64 = r11.s64 + 7240;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215AD8) {
	__imp__sub_83215AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215AE8) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,7240
	ctx.r9.s64 = r11.s64 + 7240;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_83215AE8) {
	__imp__sub_83215AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7216
	ctx.r10.s64 = r11.s64 + 7216;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215B30) {
	__imp__sub_83215B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215B40) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,7216
	ctx.r9.s64 = r11.s64 + 7216;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_83215B40) {
	__imp__sub_83215B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7192
	ctx.r10.s64 = r11.s64 + 7192;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215B88) {
	__imp__sub_83215B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215B98) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,7192
	ctx.r9.s64 = r11.s64 + 7192;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_83215B98) {
	__imp__sub_83215B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7168
	ctx.r10.s64 = r11.s64 + 7168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215BE0) {
	__imp__sub_83215BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r9,7168
	ctx.r7.s64 = ctx.r9.s64 + 7168;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v0,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v13,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_83215BF0) {
	__imp__sub_83215BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7144
	ctx.r10.s64 = r11.s64 + 7144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215C50) {
	__imp__sub_83215C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215C60) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,7144
	ctx.r9.s64 = r11.s64 + 7144;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_83215C60) {
	__imp__sub_83215C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7120
	ctx.r10.s64 = r11.s64 + 7120;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215CA8) {
	__imp__sub_83215CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215CB8) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,7120
	ctx.r9.s64 = r11.s64 + 7120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
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

PPC_WEAK_FUNC(sub_83215CB8) {
	__imp__sub_83215CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7096
	ctx.r10.s64 = r11.s64 + 7096;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215D08) {
	__imp__sub_83215D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215D18) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r11,7096
	ctx.r8.s64 = r11.s64 + 7096;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// stb r11,37(r31)
	PPC_STORE_U8(r31.u32 + 37, r11.u8);
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

PPC_WEAK_FUNC(sub_83215D18) {
	__imp__sub_83215D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7072
	ctx.r10.s64 = r11.s64 + 7072;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215D88) {
	__imp__sub_83215D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215D98) {
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
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,7072
	ctx.r9.s64 = ctx.r10.s64 + 7072;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
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

PPC_WEAK_FUNC(sub_83215D98) {
	__imp__sub_83215D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,7264
	ctx.r10.s64 = r11.s64 + 7264;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x832156e0
	sub_832156E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83215DE0) {
	__imp__sub_83215DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83215640
	sub_83215640(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r5,7288
	ctx.r3.s64 = ctx.r5.s64 + 7288;
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r11,0
	r11.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stb r10,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// vrlimi128 v11,v13,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v11,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_83215DF0) {
	__imp__sub_83215DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215E98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215E98) {
	__imp__sub_83215E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215EC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215EC0) {
	__imp__sub_83215EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215EE8) {
	__imp__sub_83215EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r10,-4108
	ctx.r9.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27648) );
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215F08) {
	__imp__sub_83215F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215F30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r10,-4108
	ctx.r9.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27648) );
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215F30) {
	__imp__sub_83215F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r10,-4108
	ctx.r9.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27648) );
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215F70) {
	__imp__sub_83215F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215F98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r10,-4108
	ctx.r9.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27648) );
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f0,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83215F98) {
	__imp__sub_83215F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83215FF0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	r29.s64 = -2092367872;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,-4108
	r28.s64 = r11.s64 + -4108;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,27648(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(27648) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfsx f13,r10,r28
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// lwz r11,27648(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(27648) );
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r28
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// bl 0x82a1cbf8
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83215FF0) {
	__imp__sub_83215FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83216060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832160cc
	if (cr6.lt) goto loc_832160CC;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x832160dc
	goto loc_832160DC;
loc_832160CC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_832160DC:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83216110
	if (cr6.eq) goto loc_83216110;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_83216110:
	// lis r30,-31927
	r30.s64 = -2092367872;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,-4108
	r29.s64 = r11.s64 + -4108;
	// lwz r9,27648(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(27648) );
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f31.f64 = double(temp.f32);
	// lfsx f12,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x83216160
	if (!cr6.lt) goto loc_83216160;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 + f31.f64));
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x83216160
	if (!cr6.lt) goto loc_83216160;
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,4(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
loc_83216160:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832161b4
	if (cr6.lt) goto loc_832161B4;
	// addi r8,r11,-4
	ctx.r8.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r4,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r4.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x832161c8
	goto loc_832161C8;
loc_832161B4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
	// lwz r9,27648(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(27648) );
loc_832161C8:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832161fc
	if (cr6.eq) goto loc_832161FC;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
loc_832161FC:
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfsx f12,r11,r29
	temp.u32 = PPC_LOAD_U32(r11.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,4(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x83216224
	if (!cr6.lt) goto loc_83216224;
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,4(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
loc_83216224:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x83216278
	if (cr6.lt) goto loc_83216278;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x83216288
	goto loc_83216288;
loc_83216278:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_83216288:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x832162d0
	if (cr6.eq) goto loc_832162D0;
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r7,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
loc_832162D0:
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83216060) {
	__imp__sub_83216060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832162E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-27456
	r30.s64 = r11.s64 + -27456;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,3236
	ctx.r4.s64 = r30.s64 + 3236;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8321644c
	if (cr6.eq) goto loc_8321644C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r28,r11,63
	r28.s64 = r11.s64 + 63;
	// beq cr6,0x83216400
	if (cr6.eq) goto loc_83216400;
	// addi r4,r30,3252
	ctx.r4.s64 = r30.s64 + 3252;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8321636c
	if (cr6.eq) goto loc_8321636C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8321636C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r30,3268
	ctx.r4.s64 = r30.s64 + 3268;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832163a4
	if (cr6.eq) goto loc_832163A4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_832163A4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb90
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83215f98
	sub_83215F98(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,-4108
	ctx.r9.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27648) );
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x83216400
	if (!cr6.lt) goto loc_83216400;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
loc_83216400:
	// addi r4,r30,3284
	ctx.r4.s64 = r30.s64 + 3284;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83216424
	if (cr6.eq) goto loc_83216424;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83216424:
	// addi r5,r29,8
	ctx.r5.s64 = r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8321644C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832162E0) {
	__imp__sub_832162E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83216458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83216458) {
	__imp__sub_83216458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83216460) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r11,192(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 192);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(196) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(200) );
	// bl 0x82a1cb90
	sub_82A1CB90(ctx, base);
	// lbz r11,204(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 204);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8321ec30
	sub_8321EC30(ctx, base);
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

PPC_WEAK_FUNC(sub_83216460) {
	__imp__sub_83216460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83216518) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// addi r10,r11,9824
	ctx.r10.s64 = r11.s64 + 9824;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a0ba38
	sub_82A0BA38(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82a0b9d0
	sub_82A0B9D0(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r9,6748
	ctx.r8.s64 = ctx.r9.s64 + 6748;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_83216518) {
	__imp__sub_83216518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83216568) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8321f668
	sub_8321F668(ctx, base);
	// lbz r11,192(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r11.u8);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(196) );
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(200) );
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// lbz r8,204(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 204);
	// stb r8,204(r31)
	PPC_STORE_U8(r31.u32 + 204, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_83216568) {
	__imp__sub_83216568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832165C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r29,r11,-27852
	r29.s64 = r11.s64 + -27852;
	// addi r9,r10,368
	ctx.r9.s64 = ctx.r10.s64 + 368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f31,384(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 384);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// mfcr r8
	ctx.r8.u64 = 0;
	ctx.r8.u64 |= (cr0.lt ? 0x80000000 : 0);
	ctx.r8.u64 |= (cr0.gt ? 0x40000000 : 0);
	ctx.r8.u64 |= (cr0.eq ? 0x20000000 : 0);
	ctx.r8.u64 |= (cr0.so ? 0x10000000 : 0);
	ctx.r8.u64 |= (cr1.lt ? 0x08000000 : 0);
	ctx.r8.u64 |= (cr1.gt ? 0x04000000 : 0);
	ctx.r8.u64 |= (cr1.eq ? 0x02000000 : 0);
	ctx.r8.u64 |= (cr1.so ? 0x01000000 : 0);
	ctx.r8.u64 |= (cr2.lt ? 0x00800000 : 0);
	ctx.r8.u64 |= (cr2.gt ? 0x00400000 : 0);
	ctx.r8.u64 |= (cr2.eq ? 0x00200000 : 0);
	ctx.r8.u64 |= (cr2.so ? 0x00100000 : 0);
	ctx.r8.u64 |= (cr3.lt ? 0x00080000 : 0);
	ctx.r8.u64 |= (cr3.gt ? 0x00040000 : 0);
	ctx.r8.u64 |= (cr3.eq ? 0x00020000 : 0);
	ctx.r8.u64 |= (cr3.so ? 0x00010000 : 0);
	ctx.r8.u64 |= (cr4.lt ? 0x00008000 : 0);
	ctx.r8.u64 |= (cr4.gt ? 0x00004000 : 0);
	ctx.r8.u64 |= (cr4.eq ? 0x00002000 : 0);
	ctx.r8.u64 |= (cr4.so ? 0x00001000 : 0);
	ctx.r8.u64 |= (cr5.lt ? 0x00000800 : 0);
	ctx.r8.u64 |= (cr5.gt ? 0x00000400 : 0);
	ctx.r8.u64 |= (cr5.eq ? 0x00000200 : 0);
	ctx.r8.u64 |= (cr5.so ? 0x00000100 : 0);
	ctx.r8.u64 |= (cr6.lt ? 0x00000080 : 0);
	ctx.r8.u64 |= (cr6.gt ? 0x00000040 : 0);
	ctx.r8.u64 |= (cr6.eq ? 0x00000020 : 0);
	ctx.r8.u64 |= (cr6.so ? 0x00000010 : 0);
	ctx.r8.u64 |= (cr7.lt ? 0x00000008 : 0);
	ctx.r8.u64 |= (cr7.gt ? 0x00000004 : 0);
	ctx.r8.u64 |= (cr7.eq ? 0x00000002 : 0);
	ctx.r8.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// lfs f29,396(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 396);
	f29.f64 = double(temp.f32);
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f0,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// fsel f13,f0,f1,f31
	ctx.f13.f64 = f0.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// fsubs f12,f13,f29
	ctx.f12.f64 = static_cast<float>(ctx.f13.f64 - f29.f64);
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, f31.f64);
	// mfcr r11
	r11.u64 = 0;
	r11.u64 |= (cr0.lt ? 0x80000000 : 0);
	r11.u64 |= (cr0.gt ? 0x40000000 : 0);
	r11.u64 |= (cr0.eq ? 0x20000000 : 0);
	r11.u64 |= (cr0.so ? 0x10000000 : 0);
	r11.u64 |= (cr1.lt ? 0x08000000 : 0);
	r11.u64 |= (cr1.gt ? 0x04000000 : 0);
	r11.u64 |= (cr1.eq ? 0x02000000 : 0);
	r11.u64 |= (cr1.so ? 0x01000000 : 0);
	r11.u64 |= (cr2.lt ? 0x00800000 : 0);
	r11.u64 |= (cr2.gt ? 0x00400000 : 0);
	r11.u64 |= (cr2.eq ? 0x00200000 : 0);
	r11.u64 |= (cr2.so ? 0x00100000 : 0);
	r11.u64 |= (cr3.lt ? 0x00080000 : 0);
	r11.u64 |= (cr3.gt ? 0x00040000 : 0);
	r11.u64 |= (cr3.eq ? 0x00020000 : 0);
	r11.u64 |= (cr3.so ? 0x00010000 : 0);
	r11.u64 |= (cr4.lt ? 0x00008000 : 0);
	r11.u64 |= (cr4.gt ? 0x00004000 : 0);
	r11.u64 |= (cr4.eq ? 0x00002000 : 0);
	r11.u64 |= (cr4.so ? 0x00001000 : 0);
	r11.u64 |= (cr5.lt ? 0x00000800 : 0);
	r11.u64 |= (cr5.gt ? 0x00000400 : 0);
	r11.u64 |= (cr5.eq ? 0x00000200 : 0);
	r11.u64 |= (cr5.so ? 0x00000100 : 0);
	r11.u64 |= (cr6.lt ? 0x00000080 : 0);
	r11.u64 |= (cr6.gt ? 0x00000040 : 0);
	r11.u64 |= (cr6.eq ? 0x00000020 : 0);
	r11.u64 |= (cr6.so ? 0x00000010 : 0);
	r11.u64 |= (cr7.lt ? 0x00000008 : 0);
	r11.u64 |= (cr7.gt ? 0x00000004 : 0);
	r11.u64 |= (cr7.eq ? 0x00000002 : 0);
	r11.u64 |= (cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x4;
	// rlwinm r8,r11,30,29,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lfsx f11,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f30,f11,f29,f13
	f30.f64 = ctx.f11.f64 >= 0.0 ? f29.f64 : ctx.f13.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8323a988
	sub_8323A988(ctx, base);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x832166a0
	if (!cr6.gt) goto loc_832166A0;
	// fcmpu cr6,f30,f29
	cr6.compare(f30.f64, f29.f64);
	// blt cr6,0x83216674
	if (cr6.lt) goto loc_83216674;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83216568
	sub_83216568(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
loc_83216674:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x832166a0
	if (!cr6.gt) goto loc_832166A0;
	// lbz r11,192(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 192);
	// stb r11,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r11.u8);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(196) );
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(200) );
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// lbz r8,204(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 204);
	// stb r8,204(r31)
	PPC_STORE_U8(r31.u32 + 204, ctx.r8.u8);
loc_832166A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832165C8) {
	__imp__sub_832165C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832166B8) {
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
	// bl 0x8321f968
	sub_8321F968(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,6900
	ctx.r10.s64 = r11.s64 + 6900;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lbz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 192);
	// stb r9,192(r31)
	PPC_STORE_U8(r31.u32 + 192, ctx.r9.u8);
	// lwz r8,196(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(196) );
	// stw r8,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r8.u32);
	// lwz r7,200(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(200) );
	// stw r7,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r7.u32);
	// lbz r6,204(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 204);
	// stb r6,204(r31)
	PPC_STORE_U8(r31.u32 + 204, ctx.r6.u8);
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

PPC_WEAK_FUNC(sub_832166B8) {
	__imp__sub_832166B8(ctx, base);
}

