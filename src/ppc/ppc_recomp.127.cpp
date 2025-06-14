#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82CB4A58) {
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
	// bl 0x82cb4818
	sub_82CB4818(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4A58) {
	__imp__sub_82CB4A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// andi. r11,r11,102
	r11.u64 = r11.u64 & 102;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82cb4a98
	if (!cr0.eq) goto loc_82CB4A98;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CB4A98:
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r11,48(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 48);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// ld r11,56(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 56);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// ld r11,64(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 64);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4A80) {
	__imp__sub_82CB4A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4AC8) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r4,127(r31)
	PPC_STORE_U8(r31.u32 + 127, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb4b3c
	if (cr6.eq) goto loc_82CB4B3C;
	// lis r11,-8083
	r11.s64 = -529727488;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// ori r11,r11,29539
	r11.u64 = r11.u64 | 29539;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cb4b3c
	if (!cr6.eq) goto loc_82CB4B3C;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb4b3c
	if (cr6.eq) goto loc_82CB4B3C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb4b3c
	if (cr6.eq) goto loc_82CB4B3C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cb4b3c
	goto loc_82CB4B3C;
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
loc_82CB4B3C:
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4AC8) {
	__imp__sub_82CB4AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-96
	r31.s64 = r12.s64 + -96;
	// lbz r11,127(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 127);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4B50) {
	__imp__sub_82CB4B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4B78) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r25,124(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r24,128(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// stw r30,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r30.u32);
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// li r11,-2
	r11.s64 = -2;
	// stw r28,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// bl 0x82cba3e0
	sub_82CBA3E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca7f58
	sub_82CA7F58(ctx, base);
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// stw r25,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r25.u32);
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// stw r24,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb4c30
	if (cr6.eq) goto loc_82CB4C30;
	// bl 0x82ca7f00
	sub_82CA7F00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4c30
	if (cr0.eq) goto loc_82CB4C30;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb4ac8
	sub_82CB4AC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CB4C30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CB4B78) {
	__imp__sub_82CB4B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4C48) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb4eb8
	if (cr6.eq) goto loc_82CB4EB8;
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb4eb8
	if (cr6.eq) goto loc_82CB4EB8;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb4c98
	if (!cr6.eq) goto loc_82CB4C98;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb4eb8
	if (cr0.eq) goto loc_82CB4EB8;
loc_82CB4C98:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bne 0x82cb4cac
	if (!cr0.eq) goto loc_82CB4CAC;
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
loc_82CB4CAC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// rlwinm. r11,r10,0,28,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// beq 0x82cb4d34
	if (cr0.eq) goto loc_82CB4D34;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// blt cr6,0x82cb4d2c
	if (cr6.lt) goto loc_82CB4D2C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
loc_82CB4D2C:
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// b 0x82cb4e9c
	goto loc_82CB4E9C;
loc_82CB4D34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb4dcc
	if (cr0.eq) goto loc_82CB4DCC;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82cb4e9c
	if (!cr6.eq) goto loc_82CB4E9C;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cb4e9c
	if (cr6.eq) goto loc_82CB4E9C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82cb4dc4
	if (cr6.lt) goto loc_82CB4DC4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_82CB4DC4:
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82cb4e9c
	goto loc_82CB4E9C;
loc_82CB4DCC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb4e48
	if (!cr6.eq) goto loc_82CB4E48;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// blt cr6,0x82cb4e38
	if (cr6.lt) goto loc_82CB4E38;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
loc_82CB4E38:
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// b 0x82cb4e9c
	goto loc_82CB4E9C;
loc_82CB4E48:
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4e98
	if (cr0.eq) goto loc_82CB4E98;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,0,29,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// b 0x82cb4e9c
	goto loc_82CB4E9C;
loc_82CB4E98:
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB4E9C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cb4eb0
	goto loc_82CB4EB0;
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
loc_82CB4EB0:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// b 0x82cb4ebc
	goto loc_82CB4EBC;
loc_82CB4EB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB4EBC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CB4C48) {
	__imp__sub_82CB4C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4EC4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4EC4) {
	__imp__sub_82CB4EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4ED8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb4f04
	if (cr0.eq) goto loc_82CB4F04;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x82cb4f0c
	goto loc_82CB4F0C;
loc_82CB4F04:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
loc_82CB4F0C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb4c48
	sub_82CB4C48(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82cb4f8c
	if (cr6.eq) goto loc_82CB4F8C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82cb4fdc
	if (!cr6.eq) goto loc_82CB4FDC;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// blt cr6,0x82cb4f74
	if (cr6.lt) goto loc_82CB4F74;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
loc_82CB4F74:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cb4fdc
	goto loc_82CB4FDC;
loc_82CB4F8C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// blt cr6,0x82cb4fcc
	if (cr6.lt) goto loc_82CB4FCC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
loc_82CB4FCC:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CB4FDC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cb4ff0
	goto loc_82CB4FF0;
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
loc_82CB4FF0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CB4ED8) {
	__imp__sub_82CB4ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4FF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4FF8) {
	__imp__sub_82CB4FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5008) {
	PPC_FUNC_PROLOGUE();
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
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x82ca79f0
	sub_82CA79F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca7a18
	sub_82CA7A18(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// li r21,0
	r21.s64 = 0;
	// bne 0x82cb5078
	if (!cr0.eq) goto loc_82CB5078;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
loc_82CB5078:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82cb5094
	if (cr6.eq) goto loc_82CB5094;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cb4ed8
	sub_82CB4ED8(ctx, base);
loc_82CB5094:
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca7e48
	sub_82CA7E48(ctx, base);
	// lwz r11,2924(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(2924) );
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bne cr6,0x82cb50c4
	if (!cr6.eq) goto loc_82CB50C4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
loc_82CB50C4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82cba520
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cb48a0
	sub_82CB48A0(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// bl 0x82cb4748
	sub_82CB4748(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r7,12(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + int32_t(12) );
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cba5cc
	sub_82CBA5CC(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cb5144
	if (cr0.eq) goto loc_82CB5144;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82cb513c
	if (!cr6.eq) goto loc_82CB513C;
	// stw r21,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r21.u32);
loc_82CB513C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82cba43c
	sub_82CBA43C(ctx, base);
loc_82CB5144:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82CB5008) {
	__imp__sub_82CB5008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5150) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82cb52b4
	if (cr6.eq) goto loc_82CB52B4;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb51ec
	if (cr6.eq) goto loc_82CB51EC;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb51ec
	if (cr6.eq) goto loc_82CB51EC;
	// lis r11,-8125
	r11.s64 = -532480000;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// ori r11,r11,20301
	r11.u64 = r11.u64 | 20301;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82cb51ec
	if (cr6.eq) goto loc_82CB51EC;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca7c30
	sub_82CA7C30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb52b4
	if (!cr0.eq) goto loc_82CB52B4;
loc_82CB51EC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb51fc
	if (!cr6.eq) goto loc_82CB51FC;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB51FC:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca7cf0
	sub_82CA7CF0(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82cb52a8
	goto loc_82CB52A8;
loc_82CB5224:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x82cb529c
	if (cr6.lt) goto loc_82CB529C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// bgt cr6,0x82cb529c
	if (cr6.gt) goto loc_82CB529C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-12) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb5264
	if (cr6.eq) goto loc_82CB5264;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb529c
	if (!cr6.eq) goto loc_82CB529C;
loc_82CB5264:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stb r8,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r8.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cb5008
	sub_82CB5008(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
loc_82CB529C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_82CB52A8:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82cb5224
	if (cr6.lt) goto loc_82CB5224;
loc_82CB52B4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82CB5150) {
	__imp__sub_82CB5150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB52C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// li r19,0
	r19.s64 = 0;
	// bl 0x82cb4708
	sub_82CB4708(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// blt cr6,0x82cb5318
	if (cr6.lt) goto loc_82CB5318;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// blt cr6,0x82cb531c
	if (cr6.lt) goto loc_82CB531C;
loc_82CB5318:
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB531C:
	// lis r11,-8083
	r11.s64 = -529727488;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// ori r28,r11,29539
	r28.u64 = r11.u64 | 29539;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bne cr6,0x82cb5534
	if (!cr6.eq) goto loc_82CB5534;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lis r9,6547
	ctx.r9.s64 = 429064192;
	// lis r8,6547
	ctx.r8.s64 = 429064192;
	// ori r30,r10,1312
	r30.u64 = ctx.r10.u64 | 1312;
	// ori r29,r9,1313
	r29.u64 = ctx.r9.u64 | 1313;
	// ori r27,r8,1314
	r27.u64 = ctx.r8.u64 | 1314;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82cb53fc
	if (!cr6.eq) goto loc_82CB53FC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82cb5370
	if (cr6.eq) goto loc_82CB5370;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82cb5370
	if (cr6.eq) goto loc_82CB5370;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82cb53fc
	if (!cr6.eq) goto loc_82CB53FC;
loc_82CB5370:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb53fc
	if (!cr6.eq) goto loc_82CB53FC;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb552c
	if (cr6.eq) goto loc_82CB552C;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r31,124(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r20,128(r3)
	r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r19,1
	r19.s64 = 1;
	// bl 0x82cba500
	sub_82CBA500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb53b8
	if (!cr0.eq) goto loc_82CB53B8;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB53B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82cb5534
	if (!cr6.eq) goto loc_82CB5534;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82cb53fc
	if (!cr6.eq) goto loc_82CB53FC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82cb53ec
	if (cr6.eq) goto loc_82CB53EC;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82cb53ec
	if (cr6.eq) goto loc_82CB53EC;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82cb53fc
	if (!cr6.eq) goto loc_82CB53FC;
loc_82CB53EC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb53fc
	if (!cr6.eq) goto loc_82CB53FC;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB53FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82cb5534
	if (!cr6.eq) goto loc_82CB5534;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82cb5534
	if (!cr6.eq) goto loc_82CB5534;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82cb5430
	if (cr6.eq) goto loc_82CB5430;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82cb5430
	if (cr6.eq) goto loc_82CB5430;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82cb5534
	if (!cr6.eq) goto loc_82CB5534;
loc_82CB5430:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82cb552c
	if (!cr6.gt) goto loc_82CB552C;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ca7cf0
	sub_82CA7CF0(ctx, base);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82cb5520
	goto loc_82CB5520;
loc_82CB5464:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bgt cr6,0x82cb5514
	if (cr6.gt) goto loc_82CB5514;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// bgt cr6,0x82cb5514
	if (cr6.gt) goto loc_82CB5514;
	// lwz r26,12(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82cb5514
	if (!cr6.gt) goto loc_82CB5514;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r27,r11,4
	r27.s64 = r11.s64 + 4;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CB549C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x82cb54d0
	if (!cr0.gt) goto loc_82CB54D0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
loc_82CB54B0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// bl 0x82cb4768
	sub_82CB4768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb54e0
	if (!cr0.eq) goto loc_82CB54E0;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bgt 0x82cb54b0
	if (cr0.gt) goto loc_82CB54B0;
loc_82CB54D0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bgt 0x82cb549c
	if (cr0.gt) goto loc_82CB549C;
	// b 0x82cb5514
	goto loc_82CB5514;
loc_82CB54E0:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stb r19,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r19.u8);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb5008
	sub_82CB5008(ctx, base);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
loc_82CB5514:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
loc_82CB5520:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82cb5464
	if (cr6.lt) goto loc_82CB5464;
loc_82CB552C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c0c
	return;
loc_82CB5534:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82cb552c
	if (!cr6.gt) goto loc_82CB552C;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5570
	if (!cr0.eq) goto loc_82CB5570;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb5150
	sub_82CB5150(ctx, base);
	// b 0x82cb552c
	goto loc_82CB552C;
loc_82CB5570:
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
}

PPC_WEAK_FUNC(sub_82CB52C0) {
	__imp__sub_82CB52C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5580) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// andi. r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 & 102;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x82cb56ec
	if (cr0.eq) goto loc_82CB56EC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb577c
	if (cr6.eq) goto loc_82CB577C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82cb577c
	if (!cr6.eq) goto loc_82CB577C;
	// rlwinm. r11,r10,0,26,26
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb5644
	if (cr0.eq) goto loc_82CB5644;
	// bl 0x82ca79c8
	sub_82CA79C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cb5644
	if (cr0.eq) goto loc_82CB5644;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb55f0
	if (!cr6.eq) goto loc_82CB55F0;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB55F0:
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// bl 0x82ca7a10
	sub_82CA7A10(ctx, base);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// std r29,48(r11)
	PPC_STORE_U64(r11.u32 + 48, r29.u64);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// std r29,56(r11)
	PPC_STORE_U64(r11.u32 + 56, r29.u64);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// std r30,64(r11)
	PPC_STORE_U64(r11.u32 + 64, r30.u64);
	// bl 0x82ca79c8
	sub_82CA79C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca7a10
	sub_82CA7A10(ctx, base);
	// b 0x82cb577c
	goto loc_82CB577C;
loc_82CB5644:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca7ab0
	sub_82CA7AB0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb577c
	if (cr6.eq) goto loc_82CB577C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82cb577c
	if (cr6.eq) goto loc_82CB577C;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82cb577c
	if (cr6.eq) goto loc_82CB577C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// bl 0x82ca7f58
	sub_82CA7F58(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82ca7f00
	sub_82CA7F00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb56e0
	if (cr0.eq) goto loc_82CB56E0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb56e0
	if (cr6.eq) goto loc_82CB56E0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cb56d8
	goto loc_82CB56D8;
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
loc_82CB56D8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82CB56E0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x82cb577c
	goto loc_82CB577C;
loc_82CB56EC:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb577c
	if (cr6.eq) goto loc_82CB577C;
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cb575c
	if (!cr6.eq) goto loc_82CB575C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x82cb575c
	if (cr6.lt) goto loc_82CB575C;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cb575c
	if (!cr6.gt) goto loc_82CB575C;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// lwz r26,8(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82cb575c
	if (cr6.eq) goto loc_82CB575C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cb5780
	goto loc_82CB5780;
loc_82CB575C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82cb52c0
	sub_82CB52C0(ctx, base);
loc_82CB577C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CB5780:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CB5580) {
	__imp__sub_82CB5580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5788) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5788) {
	__imp__sub_82CB5788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB57A0) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb57e0
	if (cr6.eq) goto loc_82CB57E0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CB57E0:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x832b25cc
	__imp__KeBugCheck(ctx, base);
}

PPC_WEAK_FUNC(sub_82CB57A0) {
	__imp__sub_82CB57A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB57EC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB57EC) {
	__imp__sub_82CB57EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5800) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,27352(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27352) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cb5840
	if (cr0.eq) goto loc_82CB5840;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CB5840:
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
}

PPC_WEAK_FUNC(sub_82CB5800) {
	__imp__sub_82CB5800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5844) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5844) {
	__imp__sub_82CB5844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32053
	r11.s64 = -2100625408;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,22432
	r11.s64 = r11.s64 + 22432;
	// stw r11,27352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27352, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5850) {
	__imp__sub_82CB5850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5870) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	r28.s64 = 3;
	// lis r29,-31921
	r29.s64 = -2091974656;
	// lis r27,-31921
	r27.s64 = -2091974656;
loc_82CB58A0:
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,29908(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(29908) );
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x82cb5918
	if (!cr6.lt) goto loc_82CB5918;
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// rlwinm r30,r28,2,0,29
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb590c
	if (cr6.eq) goto loc_82CB590C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb58ec
	if (cr0.eq) goto loc_82CB58EC;
	// bl 0x82ca49d8
	sub_82CA49D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb58ec
	if (cr6.eq) goto loc_82CB58EC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_82CB58EC:
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(r28.s32, 20, xer);
	// blt cr6,0x82cb590c
	if (cr6.lt) goto loc_82CB590C;
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_82CB590C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82cb58a0
	goto loc_82CB58A0;
loc_82CB5918:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82cb5930
	sub_82CB5930(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CB5870) {
	__imp__sub_82CB5870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5930) {
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
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5930) {
	__imp__sub_82CB5930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5958) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cb5998
	if (!cr6.eq) goto loc_82CB5998;
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
	// b 0x82cb5b08
	goto loc_82CB5B08;
loc_82CB5998:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb5b08
	if (cr0.eq) goto loc_82CB5B08;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cb5b08
	if (!cr0.eq) goto loc_82CB5B08;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb59c0
	if (cr0.eq) goto loc_82CB59C0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x82cb5b04
	goto loc_82CB5B04;
loc_82CB59C0:
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// andi. r10,r11,268
	ctx.r10.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cb59e0
	if (!cr0.eq) goto loc_82CB59E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb6d00
	sub_82CB6D00(ctx, base);
	// b 0x82cb59e8
	goto loc_82CB59E8;
loc_82CB59E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CB59E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82cb67a8
	sub_82CB67A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x82cb5ae4
	if (cr0.eq) goto loc_82CB5AE4;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb5ae4
	if (cr6.eq) goto loc_82CB5AE4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// andi. r11,r11,130
	r11.u64 = r11.u64 & 130;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5a9c
	if (!cr0.eq) goto loc_82CB5A9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb5a78
	if (cr6.eq) goto loc_82CB5A78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb5a78
	if (cr6.eq) goto loc_82CB5A78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,29632
	r30.s64 = ctx.r10.s64 + 29632;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cb5a80
	goto loc_82CB5A80;
loc_82CB5A78:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-2648
	r11.s64 = r11.s64 + -2648;
loc_82CB5A80:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// andi. r11,r11,130
	r11.u64 = r11.u64 & 130;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,130
	cr6.compare<uint32_t>(r11.u32, 130, xer);
	// bne cr6,0x82cb5a9c
	if (!cr6.eq) goto loc_82CB5A9C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82CB5A9C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// bne cr6,0x82cb5ac4
	if (!cr6.eq) goto loc_82CB5AC4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb5ac4
	if (cr0.eq) goto loc_82CB5AC4;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5ac4
	if (!cr0.eq) goto loc_82CB5AC4;
	// li r11,4096
	r11.s64 = 4096;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82CB5AC4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x82cb5b0c
	goto loc_82CB5B0C;
loc_82CB5AE4:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82CB5B04:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82CB5B08:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CB5B0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CB5958) {
	__imp__sub_82CB5958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-2560
	r11.s64 = r11.s64 + -2560;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5B20) {
	__imp__sub_82CB5B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r3,27356(r11)
	PPC_STORE_U32(r11.u32 + 27356, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5B38) {
	__imp__sub_82CB5B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5B48) {
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
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_82CB5B48) {
	__imp__sub_82CB5B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5B78) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,27356(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(27356) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb5ba8
	if (!cr6.eq) goto loc_82CB5BA8;
	// lis r11,-32053
	r11.s64 = -2100625408;
	// addi r11,r11,23368
	r11.s64 = r11.s64 + 23368;
	// stw r11,27356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27356, r11.u32);
loc_82CB5BA8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cb5bf0
	goto loc_82CB5BF0;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82cb5be8
	if (!cr6.eq) goto loc_82CB5BE8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82CB5BE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_82CB5BF0:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5B78) {
	__imp__sub_82CB5B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5C04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB5C04) {
	__imp__sub_82CB5C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5C28) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cba618
	sub_82CBA618(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB5C28) {
	__imp__sub_82CB5C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5C30) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cb5c5c
	if (cr6.eq) goto loc_82CB5C5C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82cb5c88
	if (!cr6.eq) goto loc_82CB5C88;
loc_82CB5C5C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CB5C64:
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
	// b 0x82cb5e08
	goto loc_82CB5E08;
loc_82CB5C88:
	// li r25,0
	r25.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cb5cc8
	if (cr6.eq) goto loc_82CB5CC8;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb5cc8
	if (cr0.eq) goto loc_82CB5CC8;
	// li r31,2
	r31.s64 = 2;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// ble cr6,0x82cb5df0
	if (!cr6.gt) goto loc_82CB5DF0;
	// stb r10,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r10.u8);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// li r10,58
	ctx.r10.s64 = 58;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// stb r10,1(r29)
	PPC_STORE_U8(r29.u32 + 1, ctx.r10.u8);
loc_82CB5CC8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cb5d40
	if (cr6.eq) goto loc_82CB5D40;
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb5d40
	if (cr6.eq) goto loc_82CB5D40;
loc_82CB5CE0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82cb5df0
	if (!cr6.lt) goto loc_82CB5DF0;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb5ce0
	if (!cr6.eq) goto loc_82CB5CE0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82cba730
	sub_82CBA730(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// beq cr6,0x82cb5d40
	if (cr6.eq) goto loc_82CB5D40;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(r11.s32, 92, xer);
	// beq cr6,0x82cb5d40
	if (cr6.eq) goto loc_82CB5D40;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82cb5df0
	if (!cr6.lt) goto loc_82CB5DF0;
	// li r11,92
	r11.s64 = 92;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82CB5D40:
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82cb5d7c
	if (cr6.eq) goto loc_82CB5D7C;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// b 0x82cb5d74
	goto loc_82CB5D74;
loc_82CB5D54:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82cb5df0
	if (!cr6.lt) goto loc_82CB5DF0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_82CB5D74:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb5d54
	if (!cr6.eq) goto loc_82CB5D54;
loc_82CB5D7C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82cb5de4
	if (cr6.eq) goto loc_82CB5DE4;
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb5db4
	if (cr0.eq) goto loc_82CB5DB4;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x82cb5db4
	if (cr6.eq) goto loc_82CB5DB4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82cb5df0
	if (!cr6.lt) goto loc_82CB5DF0;
	// li r11,46
	r11.s64 = 46;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82CB5DB4:
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// b 0x82cb5ddc
	goto loc_82CB5DDC;
loc_82CB5DBC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82cb5df0
	if (!cr6.lt) goto loc_82CB5DF0;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_82CB5DDC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb5dbc
	if (!cr6.eq) goto loc_82CB5DBC;
loc_82CB5DE4:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// ble cr6,0x82cb5e00
	if (!cr6.gt) goto loc_82CB5E00;
loc_82CB5DF0:
	// stb r25,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r25.u8);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82cb5c64
	goto loc_82CB5C64;
loc_82CB5E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r25,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r25.u8);
loc_82CB5E08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CB5C30) {
	__imp__sub_82CB5C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB5E10) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// addi r31,r3,-1900
	r31.s64 = ctx.r3.s64 + -1900;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,70
	cr6.compare<int32_t>(r31.s32, 70, xer);
	// blt cr6,0x82cb6098
	if (cr6.lt) goto loc_82CB6098;
	// cmpwi cr6,r31,1100
	cr6.compare<int32_t>(r31.s32, 1100, xer);
	// bgt cr6,0x82cb6098
	if (cr6.gt) goto loc_82CB6098;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// blt cr6,0x82cb6098
	if (cr6.lt) goto loc_82CB6098;
	// cmpwi cr6,r25,12
	cr6.compare<int32_t>(r25.s32, 12, xer);
	// bgt cr6,0x82cb6098
	if (cr6.gt) goto loc_82CB6098;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82cb6098
	if (cr6.lt) goto loc_82CB6098;
	// cmpwi cr6,r28,23
	cr6.compare<int32_t>(r28.s32, 23, xer);
	// bgt cr6,0x82cb6098
	if (cr6.gt) goto loc_82CB6098;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x82cb6098
	if (cr6.lt) goto loc_82CB6098;
	// cmpwi cr6,r27,59
	cr6.compare<int32_t>(r27.s32, 59, xer);
	// bgt cr6,0x82cb6098
	if (cr6.gt) goto loc_82CB6098;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x82cb6098
	if (cr6.lt) goto loc_82CB6098;
	// cmpwi cr6,r26,59
	cr6.compare<int32_t>(r26.s32, 59, xer);
	// bgt cr6,0x82cb6098
	if (cr6.gt) goto loc_82CB6098;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// blt cr6,0x82cb6098
	if (cr6.lt) goto loc_82CB6098;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-572
	r11.s64 = r11.s64 + -572;
	// li r8,100
	ctx.r8.s64 = 100;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r9,400
	ctx.r9.s64 = 400;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x82cb5f10
	if (!cr6.lt) goto loc_82CB5F10;
	// srawi r11,r31,2
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	r11.s64 = r31.s32 >> 2;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5eec
	if (!cr0.eq) goto loc_82CB5EEC;
	// divw r11,r31,r8
	r11.s32 = r31.s32 / ctx.r8.s32;
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// subf. r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5f00
	if (!cr0.eq) goto loc_82CB5F00;
loc_82CB5EEC:
	// addi r11,r31,1900
	r11.s64 = r31.s64 + 1900;
	// divw r7,r11,r9
	ctx.r7.s32 = r11.s32 / ctx.r9.s32;
	// mulli r7,r7,400
	ctx.r7.s64 = ctx.r7.s64 * 400;
	// subf. r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb6098
	if (!cr0.eq) goto loc_82CB6098;
loc_82CB5F00:
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82cb6098
	if (!cr6.eq) goto loc_82CB6098;
	// cmpwi cr6,r5,29
	cr6.compare<int32_t>(ctx.r5.s32, 29, xer);
	// bgt cr6,0x82cb6098
	if (cr6.gt) goto loc_82CB6098;
loc_82CB5F10:
	// srawi r11,r31,2
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	r11.s64 = r31.s32 >> 2;
	// add r30,r10,r5
	r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5f38
	if (!cr0.eq) goto loc_82CB5F38;
	// divw r11,r31,r8
	r11.s32 = r31.s32 / ctx.r8.s32;
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// subf. r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5f4c
	if (!cr0.eq) goto loc_82CB5F4C;
loc_82CB5F38:
	// addi r11,r31,1900
	r11.s64 = r31.s64 + 1900;
	// divw r10,r11,r9
	ctx.r10.s32 = r11.s32 / ctx.r9.s32;
	// mulli r10,r10,400
	ctx.r10.s64 = ctx.r10.s64 * 400;
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb5f58
	if (!cr0.eq) goto loc_82CB5F58;
loc_82CB5F4C:
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// ble cr6,0x82cb5f58
	if (!cr6.gt) goto loc_82CB5F58;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82CB5F58:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// addi r10,r31,299
	ctx.r10.s64 = r31.s64 + 299;
	// divw r8,r11,r8
	ctx.r8.s32 = r11.s32 / ctx.r8.s32;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r9,-70
	ctx.r10.s64 = ctx.r9.s64 + -70;
	// addi r11,r11,-17
	r11.s64 = r11.s64 + -17;
	// mulli r10,r10,365
	ctx.r10.s64 = ctx.r10.s64 * 365;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// extsw r9,r30
	ctx.r9.s64 = r30.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsw r9,r27
	ctx.r9.s64 = r27.s32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsw r10,r26
	ctx.r10.s64 = r26.s32;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82cbae38
	sub_82CBAE38(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82cbaf58
	sub_82CBAF58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb5fe8
	if (cr0.eq) goto loc_82CB5FE8;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CB5FE8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cbafc0
	sub_82CBAFC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb6010
	if (cr0.eq) goto loc_82CB6010;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CB6010:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbb028
	sub_82CBB028(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb6038
	if (cr0.eq) goto loc_82CB6038;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CB6038:
	// lwa r11,80(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// beq cr6,0x82cb6088
	if (cr6.eq) goto loc_82CB6088;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// bne cr6,0x82cb6090
	if (!cr6.eq) goto loc_82CB6090;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb6090
	if (cr6.eq) goto loc_82CB6090;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cbaed8
	sub_82CBAED8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb6090
	if (cr0.eq) goto loc_82CB6090;
loc_82CB6088:
	// lwa r11,88(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
loc_82CB6090:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82cb60ac
	goto loc_82CB60AC;
loc_82CB6098:
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
loc_82CB60AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CB5E10) {
	__imp__sub_82CB5E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB60B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_82CB60B8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x82cb60d4
	if (cr6.lt) goto loc_82CB60D4;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x82cb60d4
	if (cr6.gt) goto loc_82CB60D4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_82CB60D4:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82cb60f0
	if (cr6.lt) goto loc_82CB60F0;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82cb60f0
	if (cr6.gt) goto loc_82CB60F0;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82CB60F0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cb6100
	if (cr6.eq) goto loc_82CB6100;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82cb60b8
	if (cr6.eq) goto loc_82CB60B8;
loc_82CB6100:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB60B8) {
	__imp__sub_82CB60B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6108) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cb614c
	if (!cr6.eq) goto loc_82CB614C;
loc_82CB611C:
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
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82cb6158
	goto loc_82CB6158;
loc_82CB614C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cb611c
	if (cr6.eq) goto loc_82CB611C;
	// bl 0x82cb60b8
	sub_82CB60B8(ctx, base);
loc_82CB6158:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB6108) {
	__imp__sub_82CB6108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6168) {
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
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// li r18,-2
	r18.s64 = -2;
	// mr r20,r31
	r20.u64 = r31.u64;
	// cmpwi cr6,r21,-2
	cr6.compare<int32_t>(r21.s32, -2, xer);
	// bne cr6,0x82cb61b4
	if (!cr6.eq) goto loc_82CB61B4;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_82CB61A4:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb6798
	goto loc_82CB6798;
loc_82CB61B4:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// blt cr6,0x82cb61cc
	if (cr6.lt) goto loc_82CB61CC;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x82cb6204
	if (cr6.lt) goto loc_82CB6204;
loc_82CB61CC:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
loc_82CB61E0:
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
	// b 0x82cb6798
	goto loc_82CB6798;
loc_82CB6204:
	// srawi r11,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	r11.s64 = r21.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,29632
	r28.s64 = ctx.r10.s64 + 29632;
	// rlwinm r29,r21,6,21,25
	r29.u64 = rotl64(r21.u32 | (r21.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + r11.u64;
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cb61cc
	if (cr0.eq) goto loc_82CB61CC;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x82cb6258
	if (!cr6.gt) goto loc_82CB6258;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82CB624C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// b 0x82cb61e0
	goto loc_82CB61E0;
loc_82CB6258:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// beq cr6,0x82cb6794
	if (cr6.eq) goto loc_82CB6794;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb6794
	if (!cr0.eq) goto loc_82CB6794;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x82cb6284
	if (!cr6.eq) goto loc_82CB6284;
loc_82CB6278:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x82cb624c
	goto loc_82CB624C;
loc_82CB6284:
	// lbz r11,40(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	r11.u64 = rotl32(r11.u32, 24);
	// srawi r11,r11,25
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFFFF) != 0);
	r11.s64 = r11.s32 >> 25;
	// extsb r22,r11
	r22.s64 = r11.s8;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// beq cr6,0x82cb62bc
	if (cr6.eq) goto loc_82CB62BC;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(r22.s32, 2, xer);
	// bne cr6,0x82cb62b4
	if (!cr6.eq) goto loc_82CB62B4;
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb6278
	if (cr0.eq) goto loc_82CB6278;
	// rlwinm r31,r31,0,0,30
	r31.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CB62B4:
	// mr r23,r19
	r23.u64 = r19.u64;
	// b 0x82cb631c
	goto loc_82CB631C;
loc_82CB62BC:
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb6278
	if (cr0.eq) goto loc_82CB6278;
	// rlwinm r31,r31,31,1,31
	r31.u64 = rotl64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bge cr6,0x82cb62d8
	if (!cr6.lt) goto loc_82CB62D8;
	// li r31,4
	r31.s64 = 4;
loc_82CB62D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// bne 0x82cb6300
	if (!cr0.eq) goto loc_82CB6300;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82cb61a4
	goto loc_82CB61A4;
loc_82CB6300:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// std r3,48(r11)
	PPC_STORE_U64(r11.u32 + 48, ctx.r3.u64);
loc_82CB631C:
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r24,10
	r24.s64 = 10;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// andi. r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 & 72;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb63ec
	if (cr0.eq) goto loc_82CB63EC;
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82cb63ec
	if (cr6.eq) goto loc_82CB63EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cb63ec
	if (cr6.eq) goto loc_82CB63EC;
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
	// addi r4,r23,1
	ctx.r4.s64 = r23.s64 + 1;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// li r30,1
	r30.s64 = 1;
	// stb r24,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r24.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x82cb63ec
	if (cr6.eq) goto loc_82CB63EC;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r11,41(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82cb63ec
	if (cr6.eq) goto loc_82CB63EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cb63ec
	if (cr6.eq) goto loc_82CB63EC;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// li r30,2
	r30.s64 = 2;
	// stb r24,41(r11)
	PPC_STORE_U8(r11.u32 + 41, r24.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// bne cr6,0x82cb63ec
	if (!cr6.eq) goto loc_82CB63EC;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r11,42(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 42);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82cb63ec
	if (cr6.eq) goto loc_82CB63EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cb63ec
	if (cr6.eq) goto loc_82CB63EC;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// li r30,3
	r30.s64 = 3;
	// stb r24,42(r11)
	PPC_STORE_U8(r11.u32 + 42, r24.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82CB63EC:
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82cbcdf8
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb6760
	if (cr0.eq) goto loc_82CB6760;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82cb6760
	if (cr6.lt) goto loc_82CB6760;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bgt cr6,0x82cb6760
	if (cr6.gt) goto loc_82CB6760;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cb6718
	if (cr0.eq) goto loc_82CB6718;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cb6458
	if (cr6.eq) goto loc_82CB6458;
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x82cb6458
	if (!cr6.eq) goto loc_82CB6458;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82cb6464
	goto loc_82CB6464;
loc_82CB6458:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82CB6464:
	// add r25,r23,r30
	r25.u64 = r23.u64 + r30.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplw cr6,r23,r25
	cr6.compare<uint32_t>(r23.u32, r25.u32, xer);
	// bge cr6,0x82cb65d0
	if (!cr6.lt) goto loc_82CB65D0;
	// li r26,13
	r26.s64 = 13;
loc_82CB6480:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// beq cr6,0x82cb65a0
	if (cr6.eq) goto loc_82CB65A0;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82cb64a4
	if (cr6.eq) goto loc_82CB64A4;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82cb6590
	goto loc_82CB6590;
loc_82CB64A4:
	// addi r11,r25,-1
	r11.s64 = r25.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82cb64d8
	if (!cr6.lt) goto loc_82CB64D8;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x82cb64cc
	if (!cr6.eq) goto loc_82CB64CC;
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x82cb6590
	goto loc_82CB6590;
loc_82CB64CC:
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x82cb6590
	goto loc_82CB6590;
loc_82CB64D8:
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82cbcdf8
	sub_82CBCDF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb650c
	if (!cr0.eq) goto loc_82CB650C;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cb658c
	if (!cr0.eq) goto loc_82CB658C;
loc_82CB650C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb658c
	if (cr6.eq) goto loc_82CB658C;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// andi. r11,r11,72
	r11.u64 = r11.u64 & 72;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb655c
	if (cr0.eq) goto loc_82CB655C;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x82cb6544
	if (!cr6.eq) goto loc_82CB6544;
loc_82CB653C:
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
	// b 0x82cb6590
	goto loc_82CB6590;
loc_82CB6544:
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// b 0x82cb6590
	goto loc_82CB6590;
loc_82CB655C:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// bne cr6,0x82cb6570
	if (!cr6.eq) goto loc_82CB6570;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82cb653c
	if (cr6.eq) goto loc_82CB653C;
loc_82CB6570:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82cb6594
	if (cr6.eq) goto loc_82CB6594;
loc_82CB658C:
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
loc_82CB6590:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CB6594:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// blt cr6,0x82cb6480
	if (cr6.lt) goto loc_82CB6480;
	// b 0x82cb65d0
	goto loc_82CB65D0;
loc_82CB65A0:
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cb65c4
	if (!cr0.eq) goto loc_82CB65C4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// b 0x82cb65d0
	goto loc_82CB65D0;
loc_82CB65C4:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CB65D0:
	// subf r30,r23,r31
	r30.s64 = r31.s64 - r23.s64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// bne cr6,0x82cb6718
	if (!cr6.eq) goto loc_82CB6718;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82cb6718
	if (cr6.eq) goto loc_82CB6718;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm. r11,r10,0,0,24
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb65fc
	if (!cr0.eq) goto loc_82CB65FC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82cb66e0
	goto loc_82CB66E0;
loc_82CB65FC:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-2544
	r11.s64 = r11.s64 + -2544;
	// b 0x82cb6628
	goto loc_82CB6628;
loc_82CB660C:
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bgt cr6,0x82cb6634
	if (cr6.gt) goto loc_82CB6634;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// blt cr6,0x82cb6634
	if (cr6.lt) goto loc_82CB6634;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
loc_82CB6628:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb660c
	if (cr6.eq) goto loc_82CB660C;
loc_82CB6634:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbzx r11,r8,r11
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb6658
	if (!cr0.eq) goto loc_82CB6658;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,42
	r11.s64 = 42;
loc_82CB6650:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82cb6714
	goto loc_82CB6714;
loc_82CB6658:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82cb666c
	if (!cr6.eq) goto loc_82CB666C;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// b 0x82cb66e0
	goto loc_82CB66E0;
loc_82CB666C:
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// andi. r8,r8,72
	ctx.r8.u64 = ctx.r8.u64 & 72;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cb66cc
	if (cr0.eq) goto loc_82CB66CC;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x82cb66a8
	if (cr6.lt) goto loc_82CB66A8;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// stb r8,41(r10)
	PPC_STORE_U8(ctx.r10.u32 + 41, ctx.r8.u8);
loc_82CB66A8:
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82cb66c4
	if (!cr6.eq) goto loc_82CB66C4;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// stb r8,42(r10)
	PPC_STORE_U8(ctx.r10.u32 + 42, ctx.r8.u8);
loc_82CB66C4:
	// subf r31,r9,r11
	r31.s64 = r11.s64 - ctx.r9.s64;
	// b 0x82cb66e0
	goto loc_82CB66E0;
loc_82CB66CC:
	// neg r11,r9
	r11.s64 = -ctx.r9.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
loc_82CB66E0:
	// subf r31,r23,r31
	r31.s64 = r31.s64 - r23.s64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r20,31,1,31
	ctx.r8.u64 = rotl64(r20.u32 | (r20.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82cbd290
	sub_82CBD290(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82cb673c
	if (!cr0.eq) goto loc_82CB673C;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
loc_82CB6710:
	// bl 0x82240508
	sub_82240508(ctx, base);
loc_82CB6714:
	// li r18,-1
	r18.s64 = -1;
loc_82CB6718:
	// cmplw cr6,r23,r19
	cr6.compare<uint32_t>(r23.u32, r19.u32, xer);
	// beq cr6,0x82cb6728
	if (cr6.eq) goto loc_82CB6728;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CB6728:
	// cmpwi cr6,r18,-2
	cr6.compare<int32_t>(r18.s32, -2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82cb6798
	if (cr6.eq) goto loc_82CB6798;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// b 0x82cb6798
	goto loc_82CB6798;
loc_82CB673C:
	// subf r10,r30,r31
	ctx.r10.s64 = r31.s64 - r30.s64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// rlwinm r30,r30,1,0,30
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// b 0x82cb6718
	goto loc_82CB6718;
loc_82CB6760:
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bne cr6,0x82cb6784
	if (!cr6.eq) goto loc_82CB6784;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// b 0x82cb6650
	goto loc_82CB6650;
loc_82CB6784:
	// cmplwi cr6,r3,109
	cr6.compare<uint32_t>(ctx.r3.u32, 109, xer);
	// bne cr6,0x82cb6710
	if (!cr6.eq) goto loc_82CB6710;
	// mr r18,r26
	r18.u64 = r26.u64;
	// b 0x82cb6718
	goto loc_82CB6718;
loc_82CB6794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB6798:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
}

PPC_WEAK_FUNC(sub_82CB6168) {
	__imp__sub_82CB6168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB67A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2bdc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x82cb67f4
	if (!cr6.eq) goto loc_82CB67F4;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb6904
	goto loc_82CB6904;
loc_82CB67F4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82cb680c
	if (cr6.lt) goto loc_82CB680C;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82cb6844
	if (cr6.lt) goto loc_82CB6844;
loc_82CB680C:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
loc_82CB6820:
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
	// b 0x82cb6904
	goto loc_82CB6904;
loc_82CB6844:
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,29632
	r28.s64 = ctx.r10.s64 + 29632;
	// rlwinm r29,r30,6,21,25
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb680c
	if (cr0.eq) goto loc_82CB680C;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// subfc r11,r26,r11
	xer.ca = r11.u32 >= r26.u32;
	r11.s64 = r11.s64 - r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb689c
	if (!cr0.eq) goto loc_82CB689C;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// b 0x82cb6820
	goto loc_82CB6820;
loc_82CB689C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8cf8
	sub_82CB8CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb68d4
	if (cr0.eq) goto loc_82CB68D4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb6168
	sub_82CB6168(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x82cb68f4
	goto loc_82CB68F4;
loc_82CB68D4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_82CB68F4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82cb692c
	sub_82CB692C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CB6904:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CB67A8) {
	__imp__sub_82CB67A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB690C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// b 0x82cb6944
	goto loc_82CB6944;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CB6944:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB690C) {
	__imp__sub_82CB690C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB692C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
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
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB692C) {
	__imp__sub_82CB692C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6968) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb6994
	if (!cr6.eq) goto loc_82CB6994;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cb6994
	if (cr6.eq) goto loc_82CB6994;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb6a70
	if (cr6.eq) goto loc_82CB6A70;
	// b 0x82cb6a6c
	goto loc_82CB6A6C;
loc_82CB6994:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb69a4
	if (cr6.eq) goto loc_82CB69A4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82CB69A4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cb69e0
	if (!cr6.gt) goto loc_82CB69E0;
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
	// b 0x82cb6a74
	goto loc_82CB6A74;
loc_82CB69E0:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// ble cr6,0x82cb6a20
	if (!cr6.gt) goto loc_82CB6A20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb6a08
	if (cr6.eq) goto loc_82CB6A08;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cb6a08
	if (cr6.eq) goto loc_82CB6A08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CB6A08:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,42
	r11.s64 = 42;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x82cb6a74
	goto loc_82CB6A74;
loc_82CB6A20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb6a60
	if (cr6.eq) goto loc_82CB6A60;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cb6a5c
	if (!cr6.eq) goto loc_82CB6A5C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
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
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x82cb6a74
	goto loc_82CB6A74;
loc_82CB6A5C:
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
loc_82CB6A60:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb6a70
	if (cr6.eq) goto loc_82CB6A70;
	// li r11,1
	r11.s64 = 1;
loc_82CB6A6C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82CB6A70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB6A74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB6968) {
	__imp__sub_82CB6968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6A88) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cb6968
	sub_82CB6968(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB6A88) {
	__imp__sub_82CB6A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// stw r11,29596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29596, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB6A90) {
	__imp__sub_82CB6A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6AA0) {
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
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cb6ae4
	if (!cr6.eq) goto loc_82CB6AE4;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb6b4c
	goto loc_82CB6B4C;
loc_82CB6AE4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0fc0
	sub_82CC0FC0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cb6b18
	if (!cr6.eq) goto loc_82CB6B18;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cb6b18
	if (cr0.eq) goto loc_82CB6B18;
	// bl 0x82240508
	sub_82240508(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb6b4c
	goto loc_82CB6B4C;
loc_82CB6B18:
	// srawi r11,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r11.s64 = r31.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r31,6,21,25
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82CB6B4C:
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

PPC_WEAK_FUNC(sub_82CB6AA0) {
	__imp__sub_82CB6AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// li r24,-1
	r24.s64 = -1;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// std r24,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r24.u64);
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x82cb6bc4
	if (!cr6.eq) goto loc_82CB6BC4;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb6ca0
	goto loc_82CB6CA0;
loc_82CB6BC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82cb6bdc
	if (cr6.lt) goto loc_82CB6BDC;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82cb6c14
	if (cr6.lt) goto loc_82CB6C14;
loc_82CB6BDC:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
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
	// b 0x82cb6ca0
	goto loc_82CB6CA0;
loc_82CB6C14:
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,29632
	r28.s64 = ctx.r10.s64 + 29632;
	// rlwinm r29,r30,6,21,25
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb6bdc
	if (cr0.eq) goto loc_82CB6BDC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8cf8
	sub_82CB8CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb6c74
	if (cr0.eq) goto loc_82CB6C74;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r3.u64);
	// b 0x82cb6c90
	goto loc_82CB6C90;
loc_82CB6C74:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r24.u64);
loc_82CB6C90:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82cb6cc8
	sub_82CB6CC8(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 80);
loc_82CB6CA0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CB6B70) {
	__imp__sub_82CB6B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// b 0x82cb6ce0
	goto loc_82CB6CE0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CB6CE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB6CA8) {
	__imp__sub_82CB6CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
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
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB6CC8) {
	__imp__sub_82CB6CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6D00) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r11,26836(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26836) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,26836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26836, r11.u32);
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x82cb6d4c
	if (cr0.eq) goto loc_82CB6D4C;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x82cb6d60
	goto loc_82CB6D60;
loc_82CB6D4C:
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
loc_82CB6D60:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82CB6D00) {
	__imp__sub_82CB6D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6D88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,-3224
	ctx.r10.s64 = r11.s64 + -3224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cb0430
	sub_82CB0430(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cb9098
	sub_82CB9098(ctx, base);
	// clrlwi. r11,r31,30
	r11.u64 = r31.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb6e00
	if (!cr0.eq) goto loc_82CB6E00;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82cb6df0
	if (!cr6.eq) goto loc_82CB6DF0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82cb6e18
	goto loc_82CB6E18;
loc_82CB6DF0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82cb6e14
	if (!cr6.eq) goto loc_82CB6E14;
loc_82CB6DF8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82cb6e18
	goto loc_82CB6E18;
loc_82CB6E00:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb6df8
	if (!cr0.eq) goto loc_82CB6DF8;
	// rlwinm. r11,r31,0,30,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x82cb6e18
	if (!cr0.eq) goto loc_82CB6E18;
loc_82CB6E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB6E18:
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

PPC_WEAK_FUNC(sub_82CB6D88) {
	__imp__sub_82CB6D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6E30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,-3224
	ctx.r10.s64 = r11.s64 + -3224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cb0430
	sub_82CB0430(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cb9790
	sub_82CB9790(ctx, base);
	// clrlwi. r11,r31,30
	r11.u64 = r31.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb6ea8
	if (!cr0.eq) goto loc_82CB6EA8;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82cb6e98
	if (!cr6.eq) goto loc_82CB6E98;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82cb6ec0
	goto loc_82CB6EC0;
loc_82CB6E98:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82cb6ebc
	if (!cr6.eq) goto loc_82CB6EBC;
loc_82CB6EA0:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82cb6ec0
	goto loc_82CB6EC0;
loc_82CB6EA8:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb6ea0
	if (!cr0.eq) goto loc_82CB6EA0;
	// rlwinm. r11,r31,0,30,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x82cb6ec0
	if (!cr0.eq) goto loc_82CB6EC0;
loc_82CB6EBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB6EC0:
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

PPC_WEAK_FUNC(sub_82CB6E30) {
	__imp__sub_82CB6E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6ED8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ca9578
	sub_82CA9578(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB6ED8) {
	__imp__sub_82CB6ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r10,29900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29900) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82cb6f04
	if (!cr6.eq) goto loc_82CB6F04;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,29900(r11)
	PPC_STORE_U32(r11.u32 + 29900, ctx.r9.u32);
	// stw r10,27380(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27380, ctx.r10.u32);
loc_82CB6F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB6EE0) {
	__imp__sub_82CB6EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB6F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cb6f98
	if (cr6.eq) goto loc_82CB6F98;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x82cb6f68
	if (!cr6.gt) goto loc_82CB6F68;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82CB6F34:
	// divw r8,r11,r9
	ctx.r8.s32 = r11.s32 / ctx.r9.s32;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// subf r8,r8,r11
	ctx.r8.s64 = r11.s64 - ctx.r8.s64;
	// divw. r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// ble 0x82cb6f68
	if (!cr0.gt) goto loc_82CB6F68;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82cb6f34
	if (cr6.gt) goto loc_82CB6F34;
loc_82CB6F68:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82CB6F74:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82cb6f74
	if (cr6.lt) goto loc_82CB6F74;
	// blr 
	return;
loc_82CB6F98:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cb6ffc
	if (!cr6.lt) goto loc_82CB6FFC;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addic. r9,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cb6fe0
	if (cr0.eq) goto loc_82CB6FE0;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82CB6FB4:
	// divw r7,r11,r9
	ctx.r7.s32 = r11.s32 / ctx.r9.s32;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mulli r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 * 10;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stbx r7,r4,r10
	PPC_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82cb6fb4
	if (!cr6.eq) goto loc_82CB6FB4;
loc_82CB6FE0:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_82CB6FFC:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB6F10) {
	__imp__sub_82CB6F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB7008) {
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
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,89
	cr6.compare<int32_t>(r11.s32, 89, xer);
	// bgt cr6,0x82cb72c4
	if (cr6.gt) goto loc_82CB72C4;
	// beq cr6,0x82cb7284
	if (cr6.eq) goto loc_82CB7284;
	// cmpwi cr6,r11,73
	cr6.compare<int32_t>(r11.s32, 73, xer);
	// bgt cr6,0x82cb71b0
	if (cr6.gt) goto loc_82CB71B0;
	// beq cr6,0x82cb7180
	if (cr6.eq) goto loc_82CB7180;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82cb767c
	if (cr6.eq) goto loc_82CB767C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82cb767c
	if (cr6.eq) goto loc_82CB767C;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(r11.s32, 37, xer);
	// beq cr6,0x82cb7158
	if (cr6.eq) goto loc_82CB7158;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x82cb70f4
	if (cr6.eq) goto loc_82CB70F4;
	// cmpwi cr6,r11,66
	cr6.compare<int32_t>(r11.s32, 66, xer);
	// beq cr6,0x82cb7090
	if (cr6.eq) goto loc_82CB7090;
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(r11.s32, 72, xer);
	// bne cr6,0x82cb7470
	if (!cr6.eq) goto loc_82CB7470;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r3,23
	cr6.compare<int32_t>(ctx.r3.s32, 23, xer);
loc_82CB7088:
	// ble cr6,0x82cb7334
	if (!cr6.gt) goto loc_82CB7334;
	// b 0x82cb744c
	goto loc_82CB744C;
loc_82CB7090:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// b 0x82cb70e4
	goto loc_82CB70E4;
loc_82CB70B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb767c
	if (cr0.eq) goto loc_82CB767C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82CB70E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb70b4
	if (!cr6.eq) goto loc_82CB70B4;
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB70F4:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// b 0x82cb7148
	goto loc_82CB7148;
loc_82CB7118:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb767c
	if (cr0.eq) goto loc_82CB767C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82CB7148:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb7118
	if (!cr6.eq) goto loc_82CB7118;
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB7158:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB7180:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// li r10,12
	ctx.r10.s64 = 12;
	// divw r10,r11,r10
	ctx.r10.s32 = r11.s32 / ctx.r10.s32;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// subf. r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb7334
	if (!cr0.eq) goto loc_82CB7334;
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x82cb7334
	goto loc_82CB7334;
loc_82CB71B0:
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(r11.s32, 77, xer);
	// beq cr6,0x82cb7270
	if (cr6.eq) goto loc_82CB7270;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// beq cr6,0x82cb7268
	if (cr6.eq) goto loc_82CB7268;
	// cmpwi cr6,r11,85
	cr6.compare<int32_t>(r11.s32, 85, xer);
	// beq cr6,0x82cb7208
	if (cr6.eq) goto loc_82CB7208;
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// beq cr6,0x82cb71dc
	if (cr6.eq) goto loc_82CB71DC;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x82cb7470
	if (!cr6.eq) goto loc_82CB7470;
	// b 0x82cb73a4
	goto loc_82CB73A4;
loc_82CB71DC:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb7200
	if (!cr6.eq) goto loc_82CB7200;
	// li r11,6
	r11.s64 = 6;
	// b 0x82cb721c
	goto loc_82CB721C;
loc_82CB7200:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82cb721c
	goto loc_82CB721C;
loc_82CB7208:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
loc_82CB721C:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r10,365
	cr6.compare<int32_t>(ctx.r10.s32, 365, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82cb7240
	if (!cr6.lt) goto loc_82CB7240;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb7334
	goto loc_82CB7334;
loc_82CB7240:
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// li r10,7
	ctx.r10.s64 = 7;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// divw r3,r9,r10
	ctx.r3.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mulli r10,r8,7
	ctx.r10.s64 = ctx.r8.s64 * 7;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82cb7334
	if (cr6.lt) goto loc_82CB7334;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82cb7334
	goto loc_82CB7334;
loc_82CB7268:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// b 0x82cb7274
	goto loc_82CB7274;
loc_82CB7270:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
loc_82CB7274:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r3,59
	cr6.compare<int32_t>(ctx.r3.s32, 59, xer);
	// b 0x82cb7088
	goto loc_82CB7088;
loc_82CB7284:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// cmpwi cr6,r11,-1900
	cr6.compare<int32_t>(r11.s32, -1900, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,8099
	cr6.compare<int32_t>(r11.s32, 8099, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// rotlwi r9,r11,0
	ctx.r9.u64 = rotl32(r11.u32, 0);
	// li r10,100
	ctx.r10.s64 = 100;
	// li r4,4
	ctx.r4.s64 = 4;
	// divw r11,r9,r10
	r11.s32 = ctx.r9.s32 / ctx.r10.s32;
	// divw r10,r9,r10
	ctx.r10.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// mulli r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 * 100;
	// mulli r10,r11,100
	ctx.r10.s64 = r11.s64 * 100;
	// subf r11,r8,r9
	r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cb7338
	goto loc_82CB7338;
loc_82CB72C4:
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bgt cr6,0x82cb74e0
	if (cr6.gt) goto loc_82CB74E0;
	// beq cr6,0x82cb74c4
	if (cr6.eq) goto loc_82CB74C4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// beq cr6,0x82cb7508
	if (cr6.eq) goto loc_82CB7508;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x82cb7438
	if (cr6.eq) goto loc_82CB7438;
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(r11.s32, 98, xer);
	// beq cr6,0x82cb73d4
	if (cr6.eq) goto loc_82CB73D4;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x82cb7348
	if (cr6.eq) goto loc_82CB7348;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// beq cr6,0x82cb7320
	if (cr6.eq) goto loc_82CB7320;
	// cmpwi cr6,r11,106
	cr6.compare<int32_t>(r11.s32, 106, xer);
	// bne cr6,0x82cb7470
	if (!cr6.eq) goto loc_82CB7470;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,365
	cr6.compare<int32_t>(r11.s32, 365, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// b 0x82cb7338
	goto loc_82CB7338;
loc_82CB7320:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r3,31
	cr6.compare<int32_t>(ctx.r3.s32, 31, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
loc_82CB7334:
	// li r4,2
	ctx.r4.s64 = 2;
loc_82CB7338:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82cb6f10
	sub_82CB6F10(ctx, base);
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB7348:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x82cb73cc
	if (cr6.eq) goto loc_82CB73CC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CB7368:
	// bl 0x82cb7688
	sub_82CB7688(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb7470
	if (cr0.eq) goto loc_82CB7470;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb7470
	if (cr6.eq) goto loc_82CB7470;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CB73A4:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82CB73BC:
	// bl 0x82cb7688
	sub_82CB7688(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb767c
	if (!cr0.eq) goto loc_82CB767C;
	// b 0x82cb7470
	goto loc_82CB7470;
loc_82CB73CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cb7368
	goto loc_82CB7368;
loc_82CB73D4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// addi r11,r11,14
	r11.s64 = r11.s64 + 14;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// b 0x82cb7428
	goto loc_82CB7428;
loc_82CB73F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb767c
	if (cr0.eq) goto loc_82CB767C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82CB7428:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb73f8
	if (!cr6.eq) goto loc_82CB73F8;
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB7438:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x82cb7478
	if (!cr6.gt) goto loc_82CB7478;
loc_82CB744C:
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
loc_82CB7470:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb7680
	goto loc_82CB7680;
loc_82CB7478:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// b 0x82cb74b4
	goto loc_82CB74B4;
loc_82CB7484:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb767c
	if (cr0.eq) goto loc_82CB767C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82CB74B4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb7484
	if (!cr6.eq) goto loc_82CB7484;
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB74C4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// b 0x82cb7334
	goto loc_82CB7334;
loc_82CB74E0:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// beq cr6,0x82cb75d0
	if (cr6.eq) goto loc_82CB75D0;
	// cmpwi cr6,r11,119
	cr6.compare<int32_t>(r11.s32, 119, xer);
	// beq cr6,0x82cb75b4
	if (cr6.eq) goto loc_82CB75B4;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x82cb7588
	if (cr6.eq) goto loc_82CB7588;
	// cmpwi cr6,r11,121
	cr6.compare<int32_t>(r11.s32, 121, xer);
	// beq cr6,0x82cb7568
	if (cr6.eq) goto loc_82CB7568;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bne cr6,0x82cb7470
	if (!cr6.eq) goto loc_82CB7470;
loc_82CB7508:
	// bl 0x82cbae38
	sub_82CBAE38(ctx, base);
	// bl 0x82cbb0c0
	sub_82CBB0C0(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,29,29,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x4;
	// xori r11,r11,4
	r11.u64 = r11.u64 ^ 4;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// b 0x82cb7558
	goto loc_82CB7558;
loc_82CB7528:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb767c
	if (cr0.eq) goto loc_82CB767C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82CB7558:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb7528
	if (!cr6.eq) goto loc_82CB7528;
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB7568:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r10,r11,r10
	ctx.r10.s32 = r11.s32 / ctx.r10.s32;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82cb7334
	goto loc_82CB7334;
loc_82CB7588:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x82cb75ac
	if (cr6.eq) goto loc_82CB75AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cb73bc
	goto loc_82CB73BC;
loc_82CB75AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cb73bc
	goto loc_82CB73BC;
loc_82CB75B4:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cb7338
	goto loc_82CB7338;
loc_82CB75D0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82cb744c
	if (cr6.lt) goto loc_82CB744C;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bgt cr6,0x82cb744c
	if (cr6.gt) goto loc_82CB744C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bgt cr6,0x82cb7638
	if (cr6.gt) goto loc_82CB7638;
	// lwz r11,152(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(152) );
	// b 0x82cb762c
	goto loc_82CB762C;
loc_82CB75F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb767c
	if (cr0.eq) goto loc_82CB767C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
loc_82CB762C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb75f8
	if (!cr6.eq) goto loc_82CB75F8;
	// b 0x82cb767c
	goto loc_82CB767C;
loc_82CB7638:
	// lwz r11,156(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(156) );
	// b 0x82cb7674
	goto loc_82CB7674;
loc_82CB7640:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb767c
	if (cr0.eq) goto loc_82CB767C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
loc_82CB7674:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb7640
	if (!cr6.eq) goto loc_82CB7640;
loc_82CB767C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CB7680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CB7008) {
	__imp__sub_82CB7008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB7688) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82cb76c4
	if (cr6.lt) goto loc_82CB76C4;
	// beq cr6,0x82cb76bc
	if (cr6.eq) goto loc_82CB76BC;
	// lwz r31,168(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(168) );
	// b 0x82cb76c8
	goto loc_82CB76C8;
loc_82CB76BC:
	// lwz r31,164(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(164) );
	// b 0x82cb76c8
	goto loc_82CB76C8;
loc_82CB76C4:
	// lwz r31,160(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(160) );
loc_82CB76C8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cb7b7c
	if (cr0.eq) goto loc_82CB7B7C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r24,r10,6880
	r24.s64 = ctx.r10.s64 + 6880;
	// addi r23,r11,6872
	r23.s64 = r11.s64 + 6872;
loc_82CB76E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb7b7c
	if (cr6.eq) goto loc_82CB7B7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82CB7700:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82cb7700
	if (cr6.eq) goto loc_82CB7700;
	// cmpwi cr6,r9,100
	cr6.compare<int32_t>(ctx.r9.s32, 100, xer);
	// bgt cr6,0x82cb78d0
	if (cr6.gt) goto loc_82CB78D0;
	// beq cr6,0x82cb7894
	if (cr6.eq) goto loc_82CB7894;
	// cmpwi cr6,r9,39
	cr6.compare<int32_t>(ctx.r9.s32, 39, xer);
	// beq cr6,0x82cb77e4
	if (cr6.eq) goto loc_82CB77E4;
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// beq cr6,0x82cb774c
	if (cr6.eq) goto loc_82CB774C;
	// cmpwi cr6,r9,72
	cr6.compare<int32_t>(ctx.r9.s32, 72, xer);
	// beq cr6,0x82cb77a4
	if (cr6.eq) goto loc_82CB77A4;
	// cmpwi cr6,r9,77
	cr6.compare<int32_t>(ctx.r9.s32, 77, xer);
	// beq cr6,0x82cb7768
	if (cr6.eq) goto loc_82CB7768;
	// cmpwi cr6,r9,97
	cr6.compare<int32_t>(ctx.r9.s32, 97, xer);
	// bne cr6,0x82cb7ab8
	if (!cr6.eq) goto loc_82CB7AB8;
loc_82CB774C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb60b8
	sub_82CB60B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb77c4
	if (!cr0.eq) goto loc_82CB77C4;
	// addi r27,r31,5
	r27.s64 = r31.s64 + 5;
	// b 0x82cb77dc
	goto loc_82CB77DC;
loc_82CB7768:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82cb7798
	if (cr6.eq) goto loc_82CB7798;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82cb779c
	if (cr6.eq) goto loc_82CB779C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82cb7790
	if (cr6.eq) goto loc_82CB7790;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82cb7ab8
	if (!cr6.eq) goto loc_82CB7AB8;
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7790:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7798:
	// li r28,1
	r28.s64 = 1;
loc_82CB779C:
	// li r4,109
	ctx.r4.s64 = 109;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB77A4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82cb77b8
	if (cr6.eq) goto loc_82CB77B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82cb77bc
	if (cr6.eq) goto loc_82CB77BC;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB77B8:
	// li r28,1
	r28.s64 = 1;
loc_82CB77BC:
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB77C4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb60b8
	sub_82CB60B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb77dc
	if (!cr0.eq) goto loc_82CB77DC;
	// addi r27,r31,3
	r27.s64 = r31.s64 + 3;
loc_82CB77DC:
	// li r4,112
	ctx.r4.s64 = 112;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB77E4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// beq 0x82cb7b70
	if (cr0.eq) goto loc_82CB7B70;
	// b 0x82cb7884
	goto loc_82CB7884;
loc_82CB77F4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb7b70
	if (cr6.eq) goto loc_82CB7B70;
	// cmpwi cr6,r3,39
	cr6.compare<int32_t>(ctx.r3.s32, 39, xer);
	// beq cr6,0x82cb7b6c
	if (cr6.eq) goto loc_82CB7B6C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb785c
	if (cr0.eq) goto loc_82CB785C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82cb785c
	if (!cr6.gt) goto loc_82CB785C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb7b88
	if (cr6.eq) goto loc_82CB7B88;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CB785C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CB7884:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb77f4
	if (!cr0.eq) goto loc_82CB77F4;
	// b 0x82cb7b70
	goto loc_82CB7B70;
loc_82CB7894:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82cb78c4
	if (cr6.eq) goto loc_82CB78C4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82cb78c8
	if (cr6.eq) goto loc_82CB78C8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82cb78bc
	if (cr6.eq) goto loc_82CB78BC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82cb7ab8
	if (!cr6.eq) goto loc_82CB7AB8;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB78BC:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB78C4:
	// li r28,1
	r28.s64 = 1;
loc_82CB78C8:
	// li r4,100
	ctx.r4.s64 = 100;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB78D0:
	// cmpwi cr6,r9,104
	cr6.compare<int32_t>(ctx.r9.s32, 104, xer);
	// beq cr6,0x82cb7a9c
	if (cr6.eq) goto loc_82CB7A9C;
	// cmpwi cr6,r9,109
	cr6.compare<int32_t>(ctx.r9.s32, 109, xer);
	// beq cr6,0x82cb7a7c
	if (cr6.eq) goto loc_82CB7A7C;
	// cmpwi cr6,r9,115
	cr6.compare<int32_t>(ctx.r9.s32, 115, xer);
	// beq cr6,0x82cb7a5c
	if (cr6.eq) goto loc_82CB7A5C;
	// cmpwi cr6,r9,116
	cr6.compare<int32_t>(ctx.r9.s32, 116, xer);
	// beq cr6,0x82cb7918
	if (cr6.eq) goto loc_82CB7918;
	// cmpwi cr6,r9,121
	cr6.compare<int32_t>(ctx.r9.s32, 121, xer);
	// bne cr6,0x82cb7ab8
	if (!cr6.eq) goto loc_82CB7AB8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82cb7910
	if (cr6.eq) goto loc_82CB7910;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82cb7ab8
	if (!cr6.eq) goto loc_82CB7AB8;
	// li r4,89
	ctx.r4.s64 = 89;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7910:
	// li r4,121
	ctx.r4.s64 = 121;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7918:
	// lwz r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + int32_t(8) );
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// bgt cr6,0x82cb792c
	if (cr6.gt) goto loc_82CB792C;
	// lwz r31,152(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(152) );
	// b 0x82cb7930
	goto loc_82CB7930;
loc_82CB792C:
	// lwz r31,156(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(156) );
loc_82CB7930:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82cb7a4c
	if (!cr6.eq) goto loc_82CB7A4C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb7a4c
	if (cr6.eq) goto loc_82CB7A4C;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb799c
	if (cr0.eq) goto loc_82CB799C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82cb799c
	if (!cr6.gt) goto loc_82CB799C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb7b88
	if (cr6.eq) goto loc_82CB7B88;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CB799C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82cb7ae4
	goto loc_82CB7AE4;
loc_82CB79C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82cb7ae4
	if (!cr6.gt) goto loc_82CB7AE4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb7a24
	if (cr0.eq) goto loc_82CB7A24;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82cb7a24
	if (!cr6.gt) goto loc_82CB7A24;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb7b88
	if (cr6.eq) goto loc_82CB7B88;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CB7A24:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CB7A4C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb79c4
	if (!cr0.eq) goto loc_82CB79C4;
	// b 0x82cb7ae4
	goto loc_82CB7AE4;
loc_82CB7A5C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82cb7a70
	if (cr6.eq) goto loc_82CB7A70;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82cb7a74
	if (cr6.eq) goto loc_82CB7A74;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7A70:
	// li r28,1
	r28.s64 = 1;
loc_82CB7A74:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7A7C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82cb7a90
	if (cr6.eq) goto loc_82CB7A90;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82cb7a94
	if (cr6.eq) goto loc_82CB7A94;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7A90:
	// li r28,1
	r28.s64 = 1;
loc_82CB7A94:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7A9C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82cb7ab0
	if (cr6.eq) goto loc_82CB7AB0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82cb7ab4
	if (cr6.eq) goto loc_82CB7AB4;
	// b 0x82cb7ab8
	goto loc_82CB7AB8;
loc_82CB7AB0:
	// li r28,1
	r28.s64 = 1;
loc_82CB7AB4:
	// li r4,73
	ctx.r4.s64 = 73;
loc_82CB7AB8:
	// extsb. r11,r4
	r11.s64 = ctx.r4.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb7aec
	if (cr0.eq) goto loc_82CB7AEC;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82cb7008
	sub_82CB7008(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb7b88
	if (cr0.eq) goto loc_82CB7B88;
loc_82CB7AE4:
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x82cb7b70
	goto loc_82CB7B70;
loc_82CB7AEC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb7b48
	if (cr0.eq) goto loc_82CB7B48;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82cb7b48
	if (!cr6.gt) goto loc_82CB7B48;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb7b88
	if (cr6.eq) goto loc_82CB7B88;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CB7B48:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CB7B6C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CB7B70:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82cb76e4
	if (!cr0.eq) goto loc_82CB76E4;
loc_82CB7B7C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CB7B80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
loc_82CB7B88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb7b80
	goto loc_82CB7B80;
}

PPC_WEAK_FUNC(sub_82CB7688) {
	__imp__sub_82CB7688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB7B90) {
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
	// li r25,0
	r25.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb7d50
	if (cr6.eq) goto loc_82CB7D50;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82cb7d50
	if (cr6.eq) goto loc_82CB7D50;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r25.u8);
	// beq cr6,0x82cb7d50
	if (cr6.eq) goto loc_82CB7D50;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r30,r11,-3224
	r30.s64 = r11.s64 + -3224;
	// bne cr6,0x82cb7bf0
	if (!cr6.eq) goto loc_82CB7BF0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r29,212(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(212) );
	// b 0x82cb7bf4
	goto loc_82CB7BF4;
loc_82CB7BF0:
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_82CB7BF4:
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82cb7d28
	if (cr6.eq) goto loc_82CB7D28;
loc_82CB7C04:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb7cec
	if (cr0.eq) goto loc_82CB7CEC;
	// cmpwi cr6,r3,37
	cr6.compare<int32_t>(ctx.r3.s32, 37, xer);
	// beq cr6,0x82cb7c94
	if (cr6.eq) goto loc_82CB7C94;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb7c6c
	if (cr0.eq) goto loc_82CB7C6C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82cb7c6c
	if (!cr6.gt) goto loc_82CB7C6C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb7d24
	if (cr6.eq) goto loc_82CB7D24;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82CB7C6C:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// b 0x82cb7ce0
	goto loc_82CB7CE0;
loc_82CB7C94:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cb7d08
	if (cr6.eq) goto loc_82CB7D08;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bne cr6,0x82cb7cb8
	if (!cr6.eq) goto loc_82CB7CB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CB7CB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82cb7008
	sub_82CB7008(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb7d1c
	if (cr0.eq) goto loc_82CB7D1C;
loc_82CB7CE0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb7c04
	if (!cr6.eq) goto loc_82CB7C04;
loc_82CB7CEC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb7d28
	if (cr6.eq) goto loc_82CB7D28;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r3,r11,r27
	ctx.r3.s64 = r27.s64 - r11.s64;
	// b 0x82cb7d78
	goto loc_82CB7D78;
loc_82CB7D08:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb7d74
	goto loc_82CB7D74;
loc_82CB7D1C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb7d28
	if (cr6.eq) goto loc_82CB7D28;
loc_82CB7D24:
	// li r26,1
	r26.s64 = 1;
loc_82CB7D28:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stb r25,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r25.u8);
	// bne cr6,0x82cb7d50
	if (!cr6.eq) goto loc_82CB7D50;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb7d50
	if (!cr6.eq) goto loc_82CB7D50;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82cb7d74
	goto loc_82CB7D74;
loc_82CB7D50:
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
loc_82CB7D74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB7D78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CB7B90) {
	__imp__sub_82CB7B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB7D80) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cb7b90
	sub_82CB7B90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB7D80) {
	__imp__sub_82CB7D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB7D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r3,-1572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1572) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB7D90) {
	__imp__sub_82CB7D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB7DA0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// sth r27,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, r27.u16);
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82cb8064
	if (cr6.eq) goto loc_82CB8064;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82cb8064
	if (cr6.eq) goto loc_82CB8064;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb7e50
	if (!cr0.eq) goto loc_82CB7E50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r11,29632
	r30.s64 = r11.s64 + 29632;
	// addi r28,r10,-2648
	r28.s64 = ctx.r10.s64 + -2648;
	// beq cr6,0x82cb7e3c
	if (cr6.eq) goto loc_82CB7E3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb7e3c
	if (cr6.eq) goto loc_82CB7E3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82cb7e40
	goto loc_82CB7E40;
loc_82CB7E3C:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CB7E40:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82cb7e8c
	if (!cr6.eq) goto loc_82CB7E8C;
loc_82CB7E50:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addic. r11,r11,-2
	xer.ca = r11.u32 > 1;
	r11.s64 = r11.s64 + -2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// blt 0x82cb7e78
	if (cr0.lt) goto loc_82CB7E78;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82cb8078
	goto loc_82CB8078;
loc_82CB7E78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// clrlwi r3,r27,16
	ctx.r3.u64 = r27.u32 & 0xFFFF;
	// bl 0x82cbb100
	sub_82CBB100(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82cb807c
	goto loc_82CB807C;
loc_82CB7E8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb7ed4
	if (cr6.eq) goto loc_82CB7ED4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb7ed4
	if (cr6.eq) goto loc_82CB7ED4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82cb7ed8
	goto loc_82CB7ED8;
loc_82CB7ED4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CB7ED8:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82cb7f84
	if (!cr6.eq) goto loc_82CB7F84;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// blt 0x82cb7f18
	if (cr0.lt) goto loc_82CB7F18;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82cb7f28
	goto loc_82CB7F28;
loc_82CB7F18:
	// lbz r11,166(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CB7F28:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cb7f38
	if (!cr6.eq) goto loc_82CB7F38;
loc_82CB7F30:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb807c
	goto loc_82CB807C;
loc_82CB7F38:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// blt 0x82cb7f68
	if (cr0.lt) goto loc_82CB7F68;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbz r10,167(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82cb7f78
	goto loc_82CB7F78;
loc_82CB7F68:
	// lbz r11,167(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CB7F78:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cb8078
	if (!cr6.eq) goto loc_82CB8078;
	// b 0x82cb7f30
	goto loc_82CB7F30;
loc_82CB7F84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb7fcc
	if (cr6.eq) goto loc_82CB7FCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb7fcc
	if (cr6.eq) goto loc_82CB7FCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82cb7fd0
	goto loc_82CB7FD0;
loc_82CB7FCC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CB7FD0:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb7e50
	if (cr0.eq) goto loc_82CB7E50;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb6a88
	sub_82CB6A88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb7f30
	if (!cr0.eq) goto loc_82CB7F30;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82cb8078
	if (!cr6.gt) goto loc_82CB8078;
loc_82CB8008:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lbzx r11,r30,r11
	r11.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// blt 0x82cb803c
	if (cr0.lt) goto loc_82CB803C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82cb8048
	goto loc_82CB8048;
loc_82CB803C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CB8048:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb7f30
	if (cr6.eq) goto loc_82CB7F30;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82cb8008
	if (cr6.lt) goto loc_82CB8008;
	// b 0x82cb8078
	goto loc_82CB8078;
loc_82CB8064:
	// li r11,0
	r11.s64 = 0;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r27.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// bl 0x82cc1798
	sub_82CC1798(ctx, base);
loc_82CB8078:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82CB807C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CB7DA0) {
	__imp__sub_82CB7DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8088) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb80dc
	if (!cr6.eq) goto loc_82CB80DC;
loc_82CB80B0:
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
	// b 0x82cb81a0
	goto loc_82CB81A0;
loc_82CB80DC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cb80ec
	if (cr6.eq) goto loc_82CB80EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cb80b0
	if (cr6.eq) goto loc_82CB80B0;
loc_82CB80EC:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r9,66
	ctx.r9.s64 = 66;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cb8118
	if (!cr6.gt) goto loc_82CB8118;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x82cb811c
	goto loc_82CB811C;
loc_82CB8118:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_82CB811C:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82caccc0
	sub_82CACCC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cb819c
	if (cr6.eq) goto loc_82CB819C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r31,0
	r31.s64 = 0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x82cb8168
	if (cr0.lt) goto loc_82CB8168;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82cb8174
	goto loc_82CB8174;
loc_82CB8168:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CB8174:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x82cb8190
	if (cr0.lt) goto loc_82CB8190;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// b 0x82cb819c
	goto loc_82CB819C;
loc_82CB8190:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CB819C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82CB81A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82CB8088) {
	__imp__sub_82CB8088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB81B8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82cb8088
	sub_82CB8088(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB81B8) {
	__imp__sub_82CB81B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB81C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cb81f4
	if (cr6.eq) goto loc_82CB81F4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cb81f4
	if (cr6.eq) goto loc_82CB81F4;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82cb81fc
	if (!cr0.eq) goto loc_82CB81FC;
	// beq cr6,0x82cb81f4
	if (cr6.eq) goto loc_82CB81F4;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
loc_82CB81F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CB81FC:
	// beq cr6,0x82cb8208
	if (cr6.eq) goto loc_82CB8208;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
loc_82CB8208:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB81C8) {
	__imp__sub_82CB81C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82cb8248
	if (cr0.eq) goto loc_82CB8248;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82cb822c
	if (!cr6.eq) goto loc_82CB822C;
	// li r11,768
	r11.s64 = 768;
	// b 0x82cb8248
	goto loc_82CB8248;
loc_82CB822C:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82cb823c
	if (!cr6.eq) goto loc_82CB823C;
	// li r11,512
	r11.s64 = 512;
	// b 0x82cb8248
	goto loc_82CB8248;
loc_82CB823C:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82cb8248
	if (!cr6.eq) goto loc_82CB8248;
	// li r11,256
	r11.s64 = 256;
loc_82CB8248:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8254
	if (cr0.eq) goto loc_82CB8254;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_82CB8254:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8260
	if (cr0.eq) goto loc_82CB8260;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
loc_82CB8260:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb826c
	if (cr0.eq) goto loc_82CB826C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_82CB826C:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8278
	if (cr0.eq) goto loc_82CB8278;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
loc_82CB8278:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8284
	if (cr0.eq) goto loc_82CB8284;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_82CB8284:
	// oris r3,r11,8
	ctx.r3.u64 = r11.u64 | 524288;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB8210) {
	__imp__sub_82CB8210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8290) {
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
	// rlwinm r8,r4,0,22,23
	ctx.r8.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300;
	// rlwinm. r11,r10,0,22,23
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r9,r4,0,24,21
	ctx.r9.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82cb82e4
	if (cr0.eq) goto loc_82CB82E4;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bne cr6,0x82cb82c8
	if (!cr6.eq) goto loc_82CB82C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb82e4
	goto loc_82CB82E4;
loc_82CB82C8:
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bne cr6,0x82cb82d8
	if (!cr6.eq) goto loc_82CB82D8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82cb82e4
	goto loc_82CB82E4;
loc_82CB82D8:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82cb82e4
	if (!cr6.eq) goto loc_82CB82E4;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82CB82E4:
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb82f0
	if (cr0.eq) goto loc_82CB82F0;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_82CB82F0:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb82fc
	if (cr0.eq) goto loc_82CB82FC;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
loc_82CB82FC:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8308
	if (cr0.eq) goto loc_82CB8308;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
loc_82CB8308:
	// rlwinm. r11,r10,0,28,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8314
	if (cr0.eq) goto loc_82CB8314;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
loc_82CB8314:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8320
	if (cr0.eq) goto loc_82CB8320;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
loc_82CB8320:
	// rlwinm. r10,r9,0,22,23
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82cb8358
	if (cr0.eq) goto loc_82CB8358;
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, xer);
	// bne cr6,0x82cb833c
	if (!cr6.eq) goto loc_82CB833C;
	// li r11,1
	r11.s64 = 1;
	// b 0x82cb8358
	goto loc_82CB8358;
loc_82CB833C:
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// bne cr6,0x82cb834c
	if (!cr6.eq) goto loc_82CB834C;
	// li r11,2
	r11.s64 = 2;
	// b 0x82cb8358
	goto loc_82CB8358;
loc_82CB834C:
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bne cr6,0x82cb8358
	if (!cr6.eq) goto loc_82CB8358;
	// li r11,3
	r11.s64 = 3;
loc_82CB8358:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8364
	if (cr0.eq) goto loc_82CB8364;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
loc_82CB8364:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8370
	if (cr0.eq) goto loc_82CB8370;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_82CB8370:
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb837c
	if (cr0.eq) goto loc_82CB837C;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_82CB837C:
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8388
	if (cr0.eq) goto loc_82CB8388;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_82CB8388:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8394
	if (cr0.eq) goto loc_82CB8394;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
loc_82CB8394:
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | r11.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// bl 0x82cb8210
	sub_82CB8210(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// bl 0x82cb8210
	sub_82CB8210(ctx, base);
	// clrlwi r10,r3,12
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFF;
	// lis r11,8
	r11.s64 = 524288;
	// rlwinm r10,r10,0,27,12
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF8001F;
	// ori r11,r11,31
	r11.u64 = r11.u64 | 31;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cb83d8
	if (!cr6.eq) goto loc_82CB83D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB83D8:
	// bl 0x832b261c
	__imp__KeEnableFpuExceptions(ctx, base);
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

PPC_WEAK_FUNC(sub_82CB8290) {
	__imp__sub_82CB8290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB83F8) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// bl 0x82cb8210
	sub_82CB8210(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB83F8) {
	__imp__sub_82CB83F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// bl 0x82cbb508
	sub_82CBB508(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb8480
	if (cr0.eq) goto loc_82CB8480;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CB8480:
	// rlwinm. r11,r21,0,16,16
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb848c
	if (!cr0.eq) goto loc_82CB848C;
	// li r27,-128
	r27.s64 = -128;
loc_82CB848C:
	// clrlwi r11,r21,30
	r11.u64 = r21.u32 & 0x3;
	// lis r20,-16384
	r20.s64 = -1073741824;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82cb84f8
	if (cr6.lt) goto loc_82CB84F8;
	// beq cr6,0x82cb84f0
	if (cr6.eq) goto loc_82CB84F0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82cb84e8
	if (cr6.lt) goto loc_82CB84E8;
loc_82CB84AC:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
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
	// b 0x82cb8930
	goto loc_82CB8930;
loc_82CB84E8:
	// mr r25,r20
	r25.u64 = r20.u64;
	// b 0x82cb84fc
	goto loc_82CB84FC;
loc_82CB84F0:
	// lis r25,16384
	r25.s64 = 1073741824;
	// b 0x82cb84fc
	goto loc_82CB84FC;
loc_82CB84F8:
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_82CB84FC:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// beq cr6,0x82cb854c
	if (cr6.eq) goto loc_82CB854C;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// beq cr6,0x82cb8544
	if (cr6.eq) goto loc_82CB8544;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(r31.s32, 48, xer);
	// beq cr6,0x82cb853c
	if (cr6.eq) goto loc_82CB853C;
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(r31.s32, 64, xer);
	// beq cr6,0x82cb8534
	if (cr6.eq) goto loc_82CB8534;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// bne cr6,0x82cb84ac
	if (!cr6.eq) goto loc_82CB84AC;
	// subf r11,r25,r10
	r11.s64 = ctx.r10.s64 - r25.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r24,r11,27,31,31
	r24.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82cb8550
	goto loc_82CB8550;
loc_82CB8534:
	// li r24,3
	r24.s64 = 3;
	// b 0x82cb8550
	goto loc_82CB8550;
loc_82CB853C:
	// li r24,2
	r24.s64 = 2;
	// b 0x82cb8550
	goto loc_82CB8550;
loc_82CB8544:
	// li r24,1
	r24.s64 = 1;
	// b 0x82cb8550
	goto loc_82CB8550;
loc_82CB854C:
	// mr r24,r23
	r24.u64 = r23.u64;
loc_82CB8550:
	// rlwinm r11,r21,0,21,23
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x700;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(r11.s32, 1024, xer);
	// bgt cr6,0x82cb8598
	if (cr6.gt) goto loc_82CB8598;
	// beq cr6,0x82cb8590
	if (cr6.eq) goto loc_82CB8590;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb8590
	if (cr6.eq) goto loc_82CB8590;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// beq cr6,0x82cb8588
	if (cr6.eq) goto loc_82CB8588;
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// beq cr6,0x82cb8608
	if (cr6.eq) goto loc_82CB8608;
	// cmpwi cr6,r11,768
	cr6.compare<int32_t>(r11.s32, 768, xer);
	// bne cr6,0x82cb84ac
	if (!cr6.eq) goto loc_82CB84AC;
	// li r31,2
	r31.s64 = 2;
	// b 0x82cb85b4
	goto loc_82CB85B4;
loc_82CB8588:
	// li r31,4
	r31.s64 = 4;
	// b 0x82cb85b4
	goto loc_82CB85B4;
loc_82CB8590:
	// li r31,3
	r31.s64 = 3;
	// b 0x82cb85b4
	goto loc_82CB85B4;
loc_82CB8598:
	// cmpwi cr6,r11,1280
	cr6.compare<int32_t>(r11.s32, 1280, xer);
	// beq cr6,0x82cb85b0
	if (cr6.eq) goto loc_82CB85B0;
	// cmpwi cr6,r11,1536
	cr6.compare<int32_t>(r11.s32, 1536, xer);
	// beq cr6,0x82cb8608
	if (cr6.eq) goto loc_82CB8608;
	// cmpwi cr6,r11,1792
	cr6.compare<int32_t>(r11.s32, 1792, xer);
	// bne cr6,0x82cb84ac
	if (!cr6.eq) goto loc_82CB84AC;
loc_82CB85B0:
	// li r31,1
	r31.s64 = 1;
loc_82CB85B4:
	// rlwinm. r11,r21,0,23,23
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r26,128
	r26.s64 = 128;
	// beq 0x82cb85d8
	if (cr0.eq) goto loc_82CB85D8;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,26840(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26840) );
	// andc r11,r30,r11
	r11.u64 = r30.u64 & ~r11.u64;
	// rlwinm. r11,r11,0,24,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb85d8
	if (!cr0.eq) goto loc_82CB85D8;
	// li r26,1
	r26.s64 = 1;
loc_82CB85D8:
	// rlwinm. r11,r21,0,25,25
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb85ec
	if (cr0.eq) goto loc_82CB85EC;
	// oris r26,r26,1024
	r26.u64 = r26.u64 | 67108864;
	// oris r25,r25,1
	r25.u64 = r25.u64 | 65536;
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
loc_82CB85EC:
	// rlwinm. r11,r21,0,19,19
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb85f8
	if (cr0.eq) goto loc_82CB85F8;
	// ori r26,r26,256
	r26.u64 = r26.u64 | 256;
loc_82CB85F8:
	// rlwinm. r11,r21,0,26,26
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8610
	if (cr0.eq) goto loc_82CB8610;
	// oris r26,r26,2048
	r26.u64 = r26.u64 | 134217728;
	// b 0x82cb861c
	goto loc_82CB861C;
loc_82CB8608:
	// li r31,5
	r31.s64 = 5;
	// b 0x82cb85b4
	goto loc_82CB85B4;
loc_82CB8610:
	// rlwinm. r11,r21,0,27,27
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb861c
	if (cr0.eq) goto loc_82CB861C;
	// oris r26,r26,4096
	r26.u64 = r26.u64 | 268435456;
loc_82CB861C:
	// bl 0x82cb8e20
	sub_82CB8E20(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cb8654
	if (!cr6.eq) goto loc_82CB8654;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,24
	r11.s64 = 24;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x82cb8930
	goto loc_82CB8930;
loc_82CB8654:
	// li r11,1
	r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82cbcc00
	sub_82CBCC00(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x82cb8710
	if (!cr6.eq) goto loc_82CB8710;
	// rlwinm r11,r25,0,0,1
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x82cb86cc
	if (!cr6.eq) goto loc_82CB86CC;
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb86cc
	if (cr0.eq) goto loc_82CB86CC;
	// clrlwi r25,r25,1
	r25.u64 = r25.u32 & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82cbcc00
	sub_82CBCC00(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x82cb8710
	if (!cr6.eq) goto loc_82CB8710;
loc_82CB86CC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// bl 0x82240508
	sub_82240508(ctx, base);
loc_82CB8704:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x82cb892c
	goto loc_82CB892C;
loc_82CB8710:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82cb8b08
	sub_82CB8B08(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lis r11,-31921
	r11.s64 = -2091974656;
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addi r31,r11,29632
	r31.s64 = r11.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,6,21,25
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x7C0;
	// ori r11,r27,1
	r11.u64 = r27.u64 | 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// andi. r30,r11,72
	r30.u64 = r11.u64 & 72;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmpwi r30,0
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,6,21,25
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x7C0;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r9,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bne 0x82cb8814
	if (!cr0.eq) goto loc_82CB8814;
	// rlwinm. r11,r11,0,24,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8814
	if (cr0.eq) goto loc_82CB8814;
	// rlwinm. r11,r21,0,30,30
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8814
	if (cr0.eq) goto loc_82CB8814;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82caffa8
	sub_82CAFFA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x82cb87c0
	if (!cr6.eq) goto loc_82CB87C0;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,131
	cr6.compare<uint32_t>(r11.u32, 131, xer);
	// beq cr6,0x82cb8814
	if (cr6.eq) goto loc_82CB8814;
loc_82CB87B4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82caf478
	sub_82CAF478(ctx, base);
	// b 0x82cb8704
	goto loc_82CB8704;
loc_82CB87C0:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82cb6168
	sub_82CB6168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb87fc
	if (!cr0.eq) goto loc_82CB87FC;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bne cr6,0x82cb87fc
	if (!cr6.eq) goto loc_82CB87FC;
	// extsw r4,r27
	ctx.r4.s64 = r27.s32;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82cbb2e8
	sub_82CBB2E8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb87b4
	if (cr6.eq) goto loc_82CB87B4;
loc_82CB87FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82caffa8
	sub_82CAFFA8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb87b4
	if (cr6.eq) goto loc_82CB87B4;
loc_82CB8814:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// bne cr6,0x82cb8894
	if (!cr6.eq) goto loc_82CB8894;
	// rlwinm. r11,r21,0,28,28
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8894
	if (cr0.eq) goto loc_82CB8894;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_82CB8894:
	// rlwinm r11,r25,0,0,1
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x82cb892c
	if (!cr6.eq) goto loc_82CB892C;
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb892c
	if (cr0.eq) goto loc_82CB892C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cbbf60
	sub_82CBBF60(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// clrlwi r4,r25,1
	ctx.r4.u64 = r25.u32 & 0x7FFFFFFF;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82cbcc00
	sub_82CBCC00(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cb8914
	if (!cr6.eq) goto loc_82CB8914;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// bl 0x82240508
	sub_82240508(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82cb8b90
	sub_82CB8B90(ctx, base);
	// b 0x82cb8704
	goto loc_82CB8704;
loc_82CB8914:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
loc_82CB892C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_82CB8930:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
}

PPC_WEAK_FUNC(sub_82CB8428) {
	__imp__sub_82CB8428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8940) {
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb89ac
	if (!cr6.eq) goto loc_82CB89AC;
loc_82CB8980:
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
	// b 0x82cb8a2c
	goto loc_82CB8A2C;
loc_82CB89AC:
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb8980
	if (cr6.eq) goto loc_82CB8980;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cb89e0
	if (cr6.eq) goto loc_82CB89E0;
	// rlwinm r11,r6,0,25,22
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8980
	if (cr0.eq) goto loc_82CB8980;
loc_82CB89E0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82cb8428
	sub_82CB8428(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x82cb8a64
	sub_82CB8A64(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cb8a2c
	if (cr6.eq) goto loc_82CB8A2C;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CB8A2C:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

PPC_WEAK_FUNC(sub_82CB8940) {
	__imp__sub_82CB8940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8A44) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// b 0x82cb8a7c
	goto loc_82CB8A7C;
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
loc_82CB8A7C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb8ad0
	if (cr6.eq) goto loc_82CB8AD0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb8ac8
	if (cr6.eq) goto loc_82CB8AC8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_82CB8AC8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
loc_82CB8AD0:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB8A44) {
	__imp__sub_82CB8A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8A64) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb8ad0
	if (cr6.eq) goto loc_82CB8AD0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cb8ac8
	if (cr6.eq) goto loc_82CB8AC8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,21,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_82CB8AC8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
loc_82CB8AD0:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB8A64) {
	__imp__sub_82CB8A64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82cb8940
	sub_82CB8940(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB8AE8) {
	__imp__sub_82CB8AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8B08) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cb8b5c
	if (cr6.lt) goto loc_82CB8B5C;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x82cb8b5c
	if (!cr6.lt) goto loc_82CB8B5C;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82cb8b5c
	if (!cr6.eq) goto loc_82CB8B5C;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb8b7c
	goto loc_82CB8B7C;
loc_82CB8B5C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CB8B7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB8B08) {
	__imp__sub_82CB8B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8B90) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cb8bf4
	if (cr6.lt) goto loc_82CB8BF4;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x82cb8bf4
	if (!cr6.lt) goto loc_82CB8BF4;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8bf4
	if (cr0.eq) goto loc_82CB8BF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82cb8bf4
	if (cr6.eq) goto loc_82CB8BF4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb8c10
	goto loc_82CB8C10;
loc_82CB8BF4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CB8C10:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB8B90) {
	__imp__sub_82CB8B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8C28) {
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
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x82cb8c60
	if (!cr6.eq) goto loc_82CB8C60;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb8cdc
	goto loc_82CB8CDC;
loc_82CB8C60:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cb8c78
	if (cr6.lt) goto loc_82CB8C78;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82cb8cb0
	if (cr6.lt) goto loc_82CB8CB0;
loc_82CB8C78:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
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
	// b 0x82cb8cdc
	goto loc_82CB8CDC;
loc_82CB8CB0:
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb8c78
	if (cr0.eq) goto loc_82CB8C78;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CB8CDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB8C28) {
	__imp__sub_82CB8C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,29632
	r11.s64 = r11.s64 + 29632;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,6,21,25
	ctx.r9.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// li r29,1
	r29.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82cb8d88
	if (!cr6.eq) goto loc_82CB8D88;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb8d7c
	if (!cr6.eq) goto loc_82CB8D7C;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82cb5b78
	sub_82CB5B78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb8d70
	if (!cr0.eq) goto loc_82CB8D70;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82CB8D70:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82CB8D7C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x82cb8db8
	sub_82CB8DB8(ctx, base);
loc_82CB8D88:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82cb8dac
	if (cr6.eq) goto loc_82CB8DAC;
	// srawi r9,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82CB8DAC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CB8CF8) {
	__imp__sub_82CB8CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,29632
	r11.s64 = r11.s64 + 29632;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB8DB8) {
	__imp__sub_82CB8DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB8DF0) {
	__imp__sub_82CB8DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB8E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	r24.s64 = -1;
	// li r25,0
	r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x82cafe08
	sub_82CAFE08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb8e58
	if (!cr0.eq) goto loc_82CB8E58;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb9028
	goto loc_82CB9028;
loc_82CB8E58:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// li r29,0
	r29.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// addi r28,r11,29632
	r28.s64 = r11.s64 + 29632;
loc_82CB8E74:
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// cmpwi cr6,r29,64
	cr6.compare<int32_t>(r29.s32, 64, xer);
	// bge cr6,0x82cb9018
	if (!cr6.lt) goto loc_82CB9018;
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r28
	r30.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82cb8f88
	if (cr6.eq) goto loc_82CB8F88;
loc_82CB8E90:
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r11,r11,2048
	r11.s64 = r11.s64 + 2048;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82cb8f70
	if (!cr6.lt) goto loc_82CB8F70;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb8f40
	if (!cr0.eq) goto loc_82CB8F40;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb8f0c
	if (!cr6.eq) goto loc_82CB8F0C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb8f00
	if (!cr6.eq) goto loc_82CB8F00;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82cb5b78
	sub_82CB5B78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb8ef4
	if (!cr0.eq) goto loc_82CB8EF4;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// b 0x82cb8f00
	goto loc_82CB8F00;
loc_82CB8EF4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82CB8F00:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x82cb9054
	sub_82CB9054(ctx, base);
loc_82CB8F0C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x82cb8f40
	if (!cr6.eq) goto loc_82CB8F40;
	// addi r27,r30,12
	r27.s64 = r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb8f38
	if (cr0.eq) goto loc_82CB8F38;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82cb8f40
	goto loc_82CB8F40;
loc_82CB8F38:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82cb8f4c
	if (cr6.eq) goto loc_82CB8F4C;
loc_82CB8F40:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// b 0x82cb8e90
	goto loc_82CB8E90;
loc_82CB8F4C:
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r24.u32);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82CB8F70:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82cb9018
	if (!cr6.eq) goto loc_82CB9018;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82cb8e74
	goto loc_82CB8E74;
loc_82CB8F88:
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cb9018
	if (cr0.eq) goto loc_82CB9018;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r3,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r3.u32);
	// lwz r11,29600(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(29600) );
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stw r11,29600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29600, r11.u32);
loc_82CB8FB8:
	// lwzx r11,r10,r28
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// addi r11,r11,2048
	r11.s64 = r11.s64 + 2048;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x82cb8fe8
	if (!cr6.lt) goto loc_82CB8FE8;
	// li r11,10
	r11.s64 = 10;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// b 0x82cb8fb8
	goto loc_82CB8FB8;
loc_82CB8FE8:
	// rlwinm r3,r29,5,0,26
	ctx.r3.u64 = rotl64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r26.u8);
	// bl 0x82cb8cf8
	sub_82CB8CF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb9018
	if (!cr0.eq) goto loc_82CB9018;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_82CB9018:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x82cb9030
	sub_82CB9030(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CB9028:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CB8E20) {
	__imp__sub_82CB8E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB9030) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB9030) {
	__imp__sub_82CB9030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB9054) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r25,84(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r29,92(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// li r24,-1
	r24.s64 = -1;
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// addi r28,r11,29632
	r28.s64 = r11.s64 + 29632;
	// li r26,1
	r26.s64 = 1;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB9054) {
	__imp__sub_82CB9054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB9098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x82ca2bc4
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r22,0
	r22.s64 = 0;
	// clrlwi r11,r9,17
	r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2) );
	// lwz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(6) );
	// addi r20,r10,-1560
	r20.s64 = ctx.r10.s64 + -1560;
	// addi r27,r11,-16383
	r27.s64 = r11.s64 + -16383;
	// rotlwi r11,r8,16
	r11.u64 = rotl32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	r19.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r27,-16383
	cr6.compare<int32_t>(r27.s32, -16383, xer);
	// lwz r21,12(r20)
	r21.u64 = PPC_LOAD_U32(r20.u32 + int32_t(12) );
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// bne cr6,0x82cb9128
	if (!cr6.eq) goto loc_82CB9128;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82CB90F0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb9110
	if (!cr6.eq) goto loc_82CB9110;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82cb90f0
	if (cr6.lt) goto loc_82CB90F0;
	// b 0x82cb9740
	goto loc_82CB9740;
loc_82CB9110:
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x82cb9744
	goto loc_82CB9744;
loc_82CB9128:
	// lwz r25,8(r20)
	r25.u64 = PPC_LOAD_U32(r20.u32 + int32_t(8) );
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r29,r1,-152
	r29.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	r26.s64 = r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// li r23,-1
	r23.s64 = -1;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r27
	r24.u64 = r27.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	r31.s64 = temp.s64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// subfic r30,r11,31
	xer.ca = r11.u32 <= 31;
	r30.s64 = 31 - r11.s64;
	// slw r11,r3,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb927c
	if (cr0.eq) goto loc_82CB927C;
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb91e4
	if (!cr0.eq) goto loc_82CB91E4;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x82cb927c
	if (!cr6.lt) goto loc_82CB927C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82CB91C4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb91e4
	if (!cr6.eq) goto loc_82CB91E4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82cb91c4
	if (cr6.lt) goto loc_82CB91C4;
	// b 0x82cb927c
	goto loc_82CB927C;
loc_82CB91E4:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = r26.s64 - r11.s64;
	// lwzx r11,r7,r8
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cb9228
	if (cr6.lt) goto loc_82CB9228;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82cb922c
	if (!cr6.lt) goto loc_82CB922C;
loc_82CB9228:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CB922C:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x82cb927c
	if (cr0.lt) goto loc_82CB927C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82CB9244:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82cb927c
	if (cr6.eq) goto loc_82CB927C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cb9268
	if (cr6.lt) goto loc_82CB9268;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82cb926c
	if (!cr6.lt) goto loc_82CB926C;
loc_82CB9268:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CB926C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82cb9244
	if (!cr0.lt) goto loc_82CB9244;
loc_82CB927C:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(r28.u32 + r29.u32, ctx.r10.u32);
	// bge cr6,0x82cb92c4
	if (!cr6.lt) goto loc_82CB92C4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb92c4
	if (cr6.eq) goto loc_82CB92C4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82CB92B8:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cb92b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CB92B8;
loc_82CB92C4:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82cb92d0
	if (cr6.eq) goto loc_82CB92D0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82CB92D0:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(4) );
	// subf r10,r25,r11
	ctx.r10.s64 = r11.s64 - r25.s64;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(r27.s32, ctx.r10.s32, xer);
	// bge cr6,0x82cb92fc
	if (!cr6.lt) goto loc_82CB92FC;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x82cb9744
	goto loc_82CB9744;
loc_82CB92FC:
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// bgt cr6,0x82cb95d8
	if (cr6.gt) goto loc_82CB95D8;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// addi r10,r1,-136
	ctx.r10.s64 = ctx.r1.s64 + -136;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// li r27,-1
	r27.s64 = -1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r30,8(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// slw r6,r27,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r30.u32);
	// not r7,r6
	ctx.r7.u64 = ~ctx.r6.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
loc_82CB935C:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r30,r31,r7
	r30.u64 = r31.u64 & ctx.r7.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r31,r31,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 >> (r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = r31.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb935c
	if (!cr0.eq) goto loc_82CB935C;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB939C:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb93b0
	if (cr6.lt) goto loc_82CB93B0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb93b4
	goto loc_82CB93B4;
loc_82CB93B0:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB93B4:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb939c
	if (!cr0.lt) goto loc_82CB939C;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// addi r29,r1,-152
	r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// subfic r30,r11,31
	xer.ca = r11.u32 <= 31;
	r30.s64 = 31 - r11.s64;
	// slw r11,r3,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb94e8
	if (cr0.eq) goto loc_82CB94E8;
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb944c
	if (!cr0.eq) goto loc_82CB944C;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x82cb94e8
	if (!cr6.lt) goto loc_82CB94E8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82CB942C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb944c
	if (!cr6.eq) goto loc_82CB944C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82cb942c
	if (cr6.lt) goto loc_82CB942C;
	// b 0x82cb94e8
	goto loc_82CB94E8;
loc_82CB944C:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = r26.s64 - r11.s64;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cb9490
	if (cr6.lt) goto loc_82CB9490;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82cb9494
	if (!cr6.lt) goto loc_82CB9494;
loc_82CB9490:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CB9494:
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x82cb94e8
	if (cr0.lt) goto loc_82CB94E8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82CB94B0:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82cb94e8
	if (cr6.eq) goto loc_82CB94E8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cb94d4
	if (cr6.lt) goto loc_82CB94D4;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82cb94d8
	if (!cr6.lt) goto loc_82CB94D8;
loc_82CB94D4:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82CB94D8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82cb94b0
	if (!cr0.lt) goto loc_82CB94B0;
loc_82CB94E8:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(r28.u32 + r29.u32, ctx.r10.u32);
	// bge cr6,0x82cb9530
	if (!cr6.lt) goto loc_82CB9530;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb9530
	if (cr6.eq) goto loc_82CB9530;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82CB9524:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cb9524
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CB9524;
loc_82CB9530:
	// addi r11,r21,1
	r11.s64 = r21.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// li r9,3
	ctx.r9.s64 = 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// slw r7,r27,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
loc_82CB9564:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r31,r3,r7
	r31.u64 = ctx.r3.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r3,r3,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r11.u8 & 0x3F));
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb9564
	if (!cr0.eq) goto loc_82CB9564;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB95A4:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb95b8
	if (cr6.lt) goto loc_82CB95B8;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb95bc
	goto loc_82CB95BC;
loc_82CB95B8:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB95BC:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb95a4
	if (!cr0.lt) goto loc_82CB95A4;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82cb9744
	goto loc_82CB9744;
loc_82CB95D8:
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// lwz r31,0(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + int32_t(0) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(r27.s32, r31.s32, xer);
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// blt cr6,0x82cb96a4
	if (cr6.lt) goto loc_82CB96A4;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// rlwinm r11,r9,5,0,26
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,3
	ctx.r9.s64 = 3;
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r30,-152(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-152) );
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// oris r30,r30,32768
	r30.u64 = r30.u64 | 2147483648;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r30.u32);
loc_82CB9630:
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r29,r30,r7
	r29.u64 = r30.u64 & ctx.r7.u64;
	// stw r29,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r29.u32);
	// srw r30,r30,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (r30.u32 >> (r11.u8 & 0x3F));
	// or r8,r30,r8
	ctx.r8.u64 = r30.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb9630
	if (!cr0.eq) goto loc_82CB9630;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB9670:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb9684
	if (cr6.lt) goto loc_82CB9684;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb9688
	goto loc_82CB9688;
loc_82CB9684:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB9688:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb9670
	if (!cr0.lt) goto loc_82CB9670;
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(20) );
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// b 0x82cb9744
	goto loc_82CB9744;
loc_82CB96A4:
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(20) );
	// lwz r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-152) );
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// slw r9,r7,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82CB96D8:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r30,r3,r7
	r30.u64 = ctx.r3.u64 & ctx.r7.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r3,r3,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r11.u8 & 0x3F));
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb96d8
	if (!cr0.eq) goto loc_82CB96D8;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB9718:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb972c
	if (cr6.lt) goto loc_82CB972C;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb9730
	goto loc_82CB9730;
loc_82CB972C:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB9730:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb9718
	if (!cr0.lt) goto loc_82CB9718;
loc_82CB9740:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82CB9744:
	// subfic r11,r21,31
	xer.ca = r21.u32 <= 31;
	r11.s64 = 31 - r21.s64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// bne cr6,0x82cb9758
	if (!cr6.eq) goto loc_82CB9758;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82CB9758:
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(16) );
	// lwz r8,-152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-152) );
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x82cb9780
	if (!cr6.eq) goto loc_82CB9780;
	// lwz r11,-148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-148) );
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// b 0x82cb9788
	goto loc_82CB9788;
loc_82CB9780:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x82cb978c
	if (!cr6.eq) goto loc_82CB978C;
loc_82CB9788:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82CB978C:
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82CB9098) {
	__imp__sub_82CB9098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB9790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x82ca2bc4
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r22,0
	r22.s64 = 0;
	// clrlwi r11,r9,17
	r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2) );
	// lwz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(6) );
	// addi r20,r10,-1536
	r20.s64 = ctx.r10.s64 + -1536;
	// addi r27,r11,-16383
	r27.s64 = r11.s64 + -16383;
	// rotlwi r11,r8,16
	r11.u64 = rotl32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	r19.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r27,-16383
	cr6.compare<int32_t>(r27.s32, -16383, xer);
	// lwz r21,12(r20)
	r21.u64 = PPC_LOAD_U32(r20.u32 + int32_t(12) );
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// bne cr6,0x82cb9820
	if (!cr6.eq) goto loc_82CB9820;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82CB97E8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb9808
	if (!cr6.eq) goto loc_82CB9808;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82cb97e8
	if (cr6.lt) goto loc_82CB97E8;
	// b 0x82cb9e38
	goto loc_82CB9E38;
loc_82CB9808:
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x82cb9e3c
	goto loc_82CB9E3C;
loc_82CB9820:
	// lwz r25,8(r20)
	r25.u64 = PPC_LOAD_U32(r20.u32 + int32_t(8) );
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r29,r1,-152
	r29.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	r26.s64 = r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// li r23,-1
	r23.s64 = -1;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r27
	r24.u64 = r27.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	r31.s64 = temp.s64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// subfic r30,r11,31
	xer.ca = r11.u32 <= 31;
	r30.s64 = 31 - r11.s64;
	// slw r11,r3,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb9974
	if (cr0.eq) goto loc_82CB9974;
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb98dc
	if (!cr0.eq) goto loc_82CB98DC;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x82cb9974
	if (!cr6.lt) goto loc_82CB9974;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82CB98BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb98dc
	if (!cr6.eq) goto loc_82CB98DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82cb98bc
	if (cr6.lt) goto loc_82CB98BC;
	// b 0x82cb9974
	goto loc_82CB9974;
loc_82CB98DC:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = r26.s64 - r11.s64;
	// lwzx r11,r7,r8
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cb9920
	if (cr6.lt) goto loc_82CB9920;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82cb9924
	if (!cr6.lt) goto loc_82CB9924;
loc_82CB9920:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CB9924:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x82cb9974
	if (cr0.lt) goto loc_82CB9974;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82CB993C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82cb9974
	if (cr6.eq) goto loc_82CB9974;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cb9960
	if (cr6.lt) goto loc_82CB9960;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82cb9964
	if (!cr6.lt) goto loc_82CB9964;
loc_82CB9960:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CB9964:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82cb993c
	if (!cr0.lt) goto loc_82CB993C;
loc_82CB9974:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(r28.u32 + r29.u32, ctx.r10.u32);
	// bge cr6,0x82cb99bc
	if (!cr6.lt) goto loc_82CB99BC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb99bc
	if (cr6.eq) goto loc_82CB99BC;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82CB99B0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cb99b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CB99B0;
loc_82CB99BC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82cb99c8
	if (cr6.eq) goto loc_82CB99C8;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82CB99C8:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(4) );
	// subf r10,r25,r11
	ctx.r10.s64 = r11.s64 - r25.s64;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(r27.s32, ctx.r10.s32, xer);
	// bge cr6,0x82cb99f4
	if (!cr6.lt) goto loc_82CB99F4;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x82cb9e3c
	goto loc_82CB9E3C;
loc_82CB99F4:
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// bgt cr6,0x82cb9cd0
	if (cr6.gt) goto loc_82CB9CD0;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// addi r10,r1,-136
	ctx.r10.s64 = ctx.r1.s64 + -136;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// li r27,-1
	r27.s64 = -1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r30,8(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// slw r6,r27,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r30.u32);
	// not r7,r6
	ctx.r7.u64 = ~ctx.r6.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
loc_82CB9A54:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r30,r31,r7
	r30.u64 = r31.u64 & ctx.r7.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r31,r31,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 >> (r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = r31.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb9a54
	if (!cr0.eq) goto loc_82CB9A54;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB9A94:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb9aa8
	if (cr6.lt) goto loc_82CB9AA8;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb9aac
	goto loc_82CB9AAC;
loc_82CB9AA8:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB9AAC:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb9a94
	if (!cr0.lt) goto loc_82CB9A94;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// addi r29,r1,-152
	r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// subfic r30,r11,31
	xer.ca = r11.u32 <= 31;
	r30.s64 = 31 - r11.s64;
	// slw r11,r3,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb9be0
	if (cr0.eq) goto loc_82CB9BE0;
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb9b44
	if (!cr0.eq) goto loc_82CB9B44;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x82cb9be0
	if (!cr6.lt) goto loc_82CB9BE0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82CB9B24:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb9b44
	if (!cr6.eq) goto loc_82CB9B44;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82cb9b24
	if (cr6.lt) goto loc_82CB9B24;
	// b 0x82cb9be0
	goto loc_82CB9BE0;
loc_82CB9B44:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = r26.s64 - r11.s64;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cb9b88
	if (cr6.lt) goto loc_82CB9B88;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82cb9b8c
	if (!cr6.lt) goto loc_82CB9B8C;
loc_82CB9B88:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CB9B8C:
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x82cb9be0
	if (cr0.lt) goto loc_82CB9BE0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82CB9BA8:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82cb9be0
	if (cr6.eq) goto loc_82CB9BE0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cb9bcc
	if (cr6.lt) goto loc_82CB9BCC;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82cb9bd0
	if (!cr6.lt) goto loc_82CB9BD0;
loc_82CB9BCC:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82CB9BD0:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82cb9ba8
	if (!cr0.lt) goto loc_82CB9BA8;
loc_82CB9BE0:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(r28.u32 + r29.u32, ctx.r10.u32);
	// bge cr6,0x82cb9c28
	if (!cr6.lt) goto loc_82CB9C28;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb9c28
	if (cr6.eq) goto loc_82CB9C28;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82CB9C1C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cb9c1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CB9C1C;
loc_82CB9C28:
	// addi r11,r21,1
	r11.s64 = r21.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// li r9,3
	ctx.r9.s64 = 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// slw r7,r27,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
loc_82CB9C5C:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r31,r3,r7
	r31.u64 = ctx.r3.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r3,r3,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r11.u8 & 0x3F));
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb9c5c
	if (!cr0.eq) goto loc_82CB9C5C;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB9C9C:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb9cb0
	if (cr6.lt) goto loc_82CB9CB0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb9cb4
	goto loc_82CB9CB4;
loc_82CB9CB0:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB9CB4:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb9c9c
	if (!cr0.lt) goto loc_82CB9C9C;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82cb9e3c
	goto loc_82CB9E3C;
loc_82CB9CD0:
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// lwz r31,0(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + int32_t(0) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(r27.s32, r31.s32, xer);
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// blt cr6,0x82cb9d9c
	if (cr6.lt) goto loc_82CB9D9C;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// rlwinm r11,r9,5,0,26
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,3
	ctx.r9.s64 = 3;
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r30,-152(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-152) );
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// oris r30,r30,32768
	r30.u64 = r30.u64 | 2147483648;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r30.u32);
loc_82CB9D28:
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r29,r30,r7
	r29.u64 = r30.u64 & ctx.r7.u64;
	// stw r29,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r29.u32);
	// srw r30,r30,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (r30.u32 >> (r11.u8 & 0x3F));
	// or r8,r30,r8
	ctx.r8.u64 = r30.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb9d28
	if (!cr0.eq) goto loc_82CB9D28;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB9D68:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb9d7c
	if (cr6.lt) goto loc_82CB9D7C;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb9d80
	goto loc_82CB9D80;
loc_82CB9D7C:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB9D80:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb9d68
	if (!cr0.lt) goto loc_82CB9D68;
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(20) );
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// b 0x82cb9e3c
	goto loc_82CB9E3C;
loc_82CB9D9C:
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(20) );
	// lwz r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-152) );
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// slw r9,r7,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82CB9DD0:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r30,r3,r7
	r30.u64 = ctx.r3.u64 & ctx.r7.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r3,r3,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r11.u8 & 0x3F));
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-160) );
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x82cb9dd0
	if (!cr0.eq) goto loc_82CB9DD0;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82CB9E10:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82cb9e24
	if (cr6.lt) goto loc_82CB9E24;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82cb9e28
	goto loc_82CB9E28;
loc_82CB9E24:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_82CB9E28:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82cb9e10
	if (!cr0.lt) goto loc_82CB9E10;
loc_82CB9E38:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82CB9E3C:
	// subfic r11,r21,31
	xer.ca = r21.u32 <= 31;
	r11.s64 = 31 - r21.s64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// bne cr6,0x82cb9e50
	if (!cr6.eq) goto loc_82CB9E50;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82CB9E50:
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(16) );
	// lwz r8,-152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-152) );
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x82cb9e78
	if (!cr6.eq) goto loc_82CB9E78;
	// lwz r11,-148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-148) );
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// b 0x82cb9e80
	goto loc_82CB9E80;
loc_82CB9E78:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x82cb9e84
	if (!cr6.eq) goto loc_82CB9E84;
loc_82CB9E80:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82CB9E84:
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82CB9790) {
	__imp__sub_82CB9790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB9E88) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,16462
	r27.s64 = 16462;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// beq cr6,0x82cba078
	if (cr6.eq) goto loc_82CBA078;
loc_82CB9EBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | r11.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = rotl32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x82cb9f48
	if (cr6.lt) goto loc_82CB9F48;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x82cb9f4c
	if (!cr6.lt) goto loc_82CB9F4C;
loc_82CB9F48:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CB9F4C:
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cb9f88
	if (cr6.eq) goto loc_82CB9F88;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cb9f70
	if (cr6.lt) goto loc_82CB9F70;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x82cb9f74
	if (!cr6.lt) goto loc_82CB9F74;
loc_82CB9F70:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CB9F74:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cb9f88
	if (cr6.eq) goto loc_82CB9F88;
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CB9F88:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// add r10,r11,r8
	ctx.r10.u64 = r11.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cb9fa8
	if (cr6.lt) goto loc_82CB9FA8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82cb9fac
	if (!cr6.lt) goto loc_82CB9FAC;
loc_82CB9FA8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CB9FAC:
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cb9fc4
	if (cr6.eq) goto loc_82CB9FC4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CB9FC4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r11,r7,1,0,30
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cba020
	if (cr6.lt) goto loc_82CBA020;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cba024
	if (!cr6.lt) goto loc_82CBA024;
loc_82CBA020:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82CBA024:
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82cba060
	if (cr6.eq) goto loc_82CBA060;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82cba048
	if (cr6.lt) goto loc_82CBA048;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x82cba04c
	if (!cr6.lt) goto loc_82CBA04C;
loc_82CBA048:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CBA04C:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cba060
	if (cr6.eq) goto loc_82CBA060;
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CBA060:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x82cb9ebc
	if (!cr0.eq) goto loc_82CB9EBC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cba104
	if (!cr6.eq) goto loc_82CBA104;
loc_82CBA078:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addis r11,r10,1
	r11.s64 = ctx.r10.s64 + 65536;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// rotlwi r10,r9,0
	ctx.r10.u64 = rotl32(ctx.r9.u32, 0);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r11,16
	r27.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cba078
	if (cr6.eq) goto loc_82CBA078;
	// b 0x82cba104
	goto loc_82CBA104;
loc_82CBA0C0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82CBA104:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,16,16
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cba0c0
	if (cr0.eq) goto loc_82CBA0C0;
	// sth r27,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CB9E88) {
	__imp__sub_82CB9E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA120) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cba230
	if (!cr0.eq) goto loc_82CBA230;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,29632
	r29.s64 = r11.s64 + 29632;
	// addi r28,r10,-2648
	r28.s64 = ctx.r10.s64 + -2648;
	// beq cr6,0x82cba198
	if (cr6.eq) goto loc_82CBA198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cba198
	if (cr6.eq) goto loc_82CBA198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82cba19c
	goto loc_82CBA19C;
loc_82CBA198:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CBA19C:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cba200
	if (!cr0.eq) goto loc_82CBA200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cba1f0
	if (cr6.eq) goto loc_82CBA1F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cba1f0
	if (cr6.eq) goto loc_82CBA1F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82cba1f4
	goto loc_82CBA1F4;
loc_82CBA1F0:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CBA1F4:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cba230
	if (cr0.eq) goto loc_82CBA230;
loc_82CBA200:
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
loc_82CBA224:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CBA228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82CBA230:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82cba224
	if (cr6.eq) goto loc_82CBA224;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cba254
	if (!cr0.eq) goto loc_82CBA254;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cba224
	if (cr0.eq) goto loc_82CBA224;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cba224
	if (!cr0.eq) goto loc_82CBA224;
loc_82CBA254:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cba268
	if (!cr6.eq) goto loc_82CBA268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb6d00
	sub_82CB6D00(ctx, base);
loc_82CBA268:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cba28c
	if (!cr6.eq) goto loc_82CBA28C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82cba224
	if (!cr6.eq) goto loc_82CBA224;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CBA28C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82cba2c4
	if (cr0.eq) goto loc_82CBA2C4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r27
	ctx.r10.s64 = r27.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82cba2c8
	if (cr6.eq) goto loc_82CBA2C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82cba224
	goto loc_82CBA224;
loc_82CBA2C4:
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
loc_82CBA2C8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r3,r27,24
	ctx.r3.u64 = r27.u32 & 0xFF;
	// rlwimi r10,r9,0,31,31
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwimi r10,r9,0,27,27
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 0) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x82cba228
	goto loc_82CBA228;
}

PPC_WEAK_FUNC(sub_82CBA120) {
	__imp__sub_82CBA120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA2F8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cba354
	if (!cr6.eq) goto loc_82CBA354;
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
	// b 0x82cba380
	goto loc_82CBA380;
loc_82CBA354:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x82cba3a8
	sub_82CBA3A8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CBA380:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CBA2F8) {
	__imp__sub_82CBA2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA388) {
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
	// lwz r30,156(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// b 0x82cba3c0
	goto loc_82CBA3C0;
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
loc_82CBA3C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA388) {
	__imp__sub_82CBA388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA3A8) {
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
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA3A8) {
	__imp__sub_82CBA3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r7
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stw r7,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r7.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82cb5b20
	sub_82CB5B20(ctx, base);
	// mr r12,r4
	r12.u64 = ctx.r4.u64;
	// stw r30,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r30.u32);
	// mtlr r3
	// blrl 
__builtin_trap();
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cmplwi r31,256
	cr0.compare<uint32_t>(r31.u32, 256, xer);
	// bne 0x82cba420
	if (!cr0.eq) goto loc_82CBA420;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82CBA420:
	// bl 0x82cb5b20
	sub_82CB5B20(ctx, base);
	// lwz r7,8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(8) );
	// mtlr r7
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r31,88(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA3E0) {
	__imp__sub_82CBA3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA43C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r2{};
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
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f14,408(r4)
	ctx.fpscr.disableFlushMode();
	f14.u64 = PPC_LOAD_U64(ctx.r4.u32 + 408);
	// lfd f15,416(r4)
	f15.u64 = PPC_LOAD_U64(ctx.r4.u32 + 416);
	// lfd f16,424(r4)
	f16.u64 = PPC_LOAD_U64(ctx.r4.u32 + 424);
	// lfd f17,432(r4)
	f17.u64 = PPC_LOAD_U64(ctx.r4.u32 + 432);
	// lfd f18,440(r4)
	f18.u64 = PPC_LOAD_U64(ctx.r4.u32 + 440);
	// lfd f19,448(r4)
	f19.u64 = PPC_LOAD_U64(ctx.r4.u32 + 448);
	// lfd f20,456(r4)
	f20.u64 = PPC_LOAD_U64(ctx.r4.u32 + 456);
	// lfd f21,464(r4)
	f21.u64 = PPC_LOAD_U64(ctx.r4.u32 + 464);
	// lfd f22,472(r4)
	f22.u64 = PPC_LOAD_U64(ctx.r4.u32 + 472);
	// lfd f23,480(r4)
	f23.u64 = PPC_LOAD_U64(ctx.r4.u32 + 480);
	// lfd f24,488(r4)
	f24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 488);
	// lfd f25,496(r4)
	f25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 496);
	// lfd f26,504(r4)
	f26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 504);
	// lfd f27,512(r4)
	f27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 512);
	// lfd f28,520(r4)
	f28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 520);
	// lfd f29,528(r4)
	f29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 528);
	// lfd f30,536(r4)
	f30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 536);
	// lfd f31,544(r4)
	f31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 544);
	// ld r14,136(r4)
	r14.u64 = PPC_LOAD_U64(ctx.r4.u32 + 136);
	// ld r15,144(r4)
	r15.u64 = PPC_LOAD_U64(ctx.r4.u32 + 144);
	// ld r16,152(r4)
	r16.u64 = PPC_LOAD_U64(ctx.r4.u32 + 152);
	// ld r17,160(r4)
	r17.u64 = PPC_LOAD_U64(ctx.r4.u32 + 160);
	// ld r18,168(r4)
	r18.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// ld r19,176(r4)
	r19.u64 = PPC_LOAD_U64(ctx.r4.u32 + 176);
	// ld r20,184(r4)
	r20.u64 = PPC_LOAD_U64(ctx.r4.u32 + 184);
	// ld r21,192(r4)
	r21.u64 = PPC_LOAD_U64(ctx.r4.u32 + 192);
	// ld r22,200(r4)
	r22.u64 = PPC_LOAD_U64(ctx.r4.u32 + 200);
	// ld r23,208(r4)
	r23.u64 = PPC_LOAD_U64(ctx.r4.u32 + 208);
	// ld r24,216(r4)
	r24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 216);
	// ld r25,224(r4)
	r25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 224);
	// ld r26,232(r4)
	r26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 232);
	// ld r27,240(r4)
	r27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 240);
	// ld r28,248(r4)
	r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 248);
	// ld r29,256(r4)
	r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 256);
	// ld r30,264(r4)
	r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 264);
	// ld r31,272(r4)
	r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 272);
	// lfd f0,288(r4)
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 288);
	// lwz r5,280(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(280) );
	// lwz r6,284(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(284) );
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(f0.u32);
	// mtlr r3
	// mtcr r5
	cr0.lt = (ctx.r5.u32 & 0x80000000) != 0;
	cr0.gt = (ctx.r5.u32 & 0x40000000) != 0;
	cr0.eq = (ctx.r5.u32 & 0x20000000) != 0;
	cr0.so = (ctx.r5.u32 & 0x10000000) != 0;
	cr1.lt = (ctx.r5.u32 & 0x8000000) != 0;
	cr1.gt = (ctx.r5.u32 & 0x4000000) != 0;
	cr1.eq = (ctx.r5.u32 & 0x2000000) != 0;
	cr1.so = (ctx.r5.u32 & 0x1000000) != 0;
	cr2.lt = (ctx.r5.u32 & 0x800000) != 0;
	cr2.gt = (ctx.r5.u32 & 0x400000) != 0;
	cr2.eq = (ctx.r5.u32 & 0x200000) != 0;
	cr2.so = (ctx.r5.u32 & 0x100000) != 0;
	cr3.lt = (ctx.r5.u32 & 0x80000) != 0;
	cr3.gt = (ctx.r5.u32 & 0x40000) != 0;
	cr3.eq = (ctx.r5.u32 & 0x20000) != 0;
	cr3.so = (ctx.r5.u32 & 0x10000) != 0;
	cr4.lt = (ctx.r5.u32 & 0x8000) != 0;
	cr4.gt = (ctx.r5.u32 & 0x4000) != 0;
	cr4.eq = (ctx.r5.u32 & 0x2000) != 0;
	cr4.so = (ctx.r5.u32 & 0x1000) != 0;
	cr5.lt = (ctx.r5.u32 & 0x800) != 0;
	cr5.gt = (ctx.r5.u32 & 0x400) != 0;
	cr5.eq = (ctx.r5.u32 & 0x200) != 0;
	cr5.so = (ctx.r5.u32 & 0x100) != 0;
	cr6.lt = (ctx.r5.u32 & 0x80) != 0;
	cr6.gt = (ctx.r5.u32 & 0x40) != 0;
	cr6.eq = (ctx.r5.u32 & 0x20) != 0;
	cr6.so = (ctx.r5.u32 & 0x10) != 0;
	cr7.lt = (ctx.r5.u32 & 0x8) != 0;
	cr7.gt = (ctx.r5.u32 & 0x4) != 0;
	cr7.eq = (ctx.r5.u32 & 0x2) != 0;
	cr7.so = (ctx.r5.u32 & 0x1) != 0;
	// mtxer r6
	xer.so = (ctx.r6.u64 & 0x80000000) != 0;
	xer.ov = (ctx.r6.u64 & 0x40000000) != 0;
	xer.ca = (ctx.r6.u64 & 0x20000000) != 0;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// ld r2,40(r4)
	r2.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// ld r1,32(r4)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA43C) {
	__imp__sub_82CBA43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cba510
	if (!cr6.eq) goto loc_82CBA510;
	// li r11,0
	r11.s64 = 0;
loc_82CBA510:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA500) {
	__imp__sub_82CBA500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mflr r31
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// stwu r1,-5360(r1)
	ea = -5360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x832b262c
	__imp__RtlCaptureContext(ctx, base);
	// lis r4,-32052
	ctx.r4.s64 = -2100559872;
	// addi r4,r4,-23164
	ctx.r4.s64 = ctx.r4.s64 + -23164;
	// stw r4,2712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2712, ctx.r4.u32);
	// bl 0x82ca7998
	sub_82CA7998(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lis r4,-32052
	ctx.r4.s64 = -2100559872;
	// addi r4,r4,-23164
	ctx.r4.s64 = ctx.r4.s64 + -23164;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x832b25bc
	__imp__RtlUnwind(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca7998
	sub_82CA7998(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r5,r4,0,31,29
	ctx.r5.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// mtlr r31
	// ld r28,5328(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5328);
	// ld r29,5336(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5336);
	// ld r30,5344(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5344);
	// ld r31,5352(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5352);
	// addi r1,r1,5360
	ctx.r1.s64 = ctx.r1.s64 + 5360;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA520) {
	__imp__sub_82CBA520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA5C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r22{};
	// lwz r22,-23056(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-23056) );
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82CBA5C4) {
	__imp__sub_82CBA5C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA5CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// mflr r31
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, ctx.r10.u32);
	// bl 0x82cb4b78
	sub_82CB4B78(ctx, base);
	// mtlr r31
	// ld r31,80(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA5CC) {
	__imp__sub_82CBA5CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r31.u64);
	// mflr r31
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,-88(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-88) );
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82cb4a80
	sub_82CB4A80(ctx, base);
	// mtlr r31
	// ld r31,8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA5F0) {
	__imp__sub_82CBA5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA618) {
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
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82cba644
	if (!cr6.eq) goto loc_82CBA644;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cba64c
	if (!cr6.eq) goto loc_82CBA64C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cba654
	if (!cr6.eq) goto loc_82CBA654;
	// b 0x82cba6b4
	goto loc_82CBA6B4;
loc_82CBA644:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cba654
	if (cr6.eq) goto loc_82CBA654;
loc_82CBA64C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cba680
	if (!cr6.eq) goto loc_82CBA680;
loc_82CBA654:
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
	// b 0x82cba6b4
	goto loc_82CBA6B4;
loc_82CBA680:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82cba698
	if (!cr6.eq) goto loc_82CBA698;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82cba6b4
	goto loc_82CBA6B4;
loc_82CBA698:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cba6ac
	if (!cr6.eq) goto loc_82CBA6AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82cba654
	goto loc_82CBA654;
loc_82CBA6AC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca39c0
	sub_82CA39C0(ctx, base);
loc_82CBA6B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA618) {
	__imp__sub_82CBA618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA6C8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cba708
	if (!cr6.eq) goto loc_82CBA708;
loc_82CBA6DC:
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
	// b 0x82cba720
	goto loc_82CBA720;
loc_82CBA708:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cba6dc
	if (cr6.eq) goto loc_82CBA6DC;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge cr6,0x82cba720
	if (!cr6.lt) goto loc_82CBA720;
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
loc_82CBA720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA6C8) {
	__imp__sub_82CBA6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA730) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82cba6c8
	sub_82CBA6C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBA730) {
	__imp__sub_82CBA730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82cbb0c0
	sub_82CBB0C0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82cbb028
	sub_82CBB028(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cba798
	if (cr0.eq) goto loc_82CBA798;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CBA798:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82cbaf58
	sub_82CBAF58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cba7c0
	if (cr0.eq) goto loc_82CBA7C0;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CBA7C0:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82cbafc0
	sub_82CBAFC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cba7e8
	if (cr0.eq) goto loc_82CBA7E8;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CBA7E8:
	// bl 0x82cbb0e0
	sub_82CBB0E0(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// addi r30,r11,27456
	r30.s64 = r11.s64 + 27456;
	// addi r7,r8,-800
	ctx.r7.s64 = ctx.r8.s64 + -800;
	// mr r11,r29
	r11.u64 = r29.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(176) );
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,-800(r8)
	PPC_STORE_U32(ctx.r8.u32 + -800, ctx.r9.u32);
	// beq cr6,0x82cba82c
	if (cr6.eq) goto loc_82CBA82C;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r11,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r11.u32);
loc_82CBA82C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cc1808
	sub_82CC1808(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cba8a8
	if (cr6.eq) goto loc_82CBA8A8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r11,1
	r11.s64 = 1;
	// mulli r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 * 60;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// lhz r10,70(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 70);
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// beq 0x82cba86c
	if (cr0.eq) goto loc_82CBA86C;
	// mulli r10,r11,60
	ctx.r10.s64 = r11.s64 * 60;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
loc_82CBA86C:
	// lhz r10,154(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 154);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cba89c
	if (cr0.eq) goto loc_82CBA89C;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(168) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cba89c
	if (cr6.eq) goto loc_82CBA89C;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x82cba8ac
	goto loc_82CBA8AC;
loc_82CBA89C:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// b 0x82cba8ac
	goto loc_82CBA8AC;
loc_82CBA8A8:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CBA8AC:
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// bl 0x82cbb0b0
	sub_82CBB0B0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x82cbb090
	sub_82CBB090(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// bl 0x82cbb0a0
	sub_82CBB0A0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x82cba8e4
	sub_82CBA8E4(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CBA740) {
	__imp__sub_82CBA740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA8E4) {
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
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBA8E4) {
	__imp__sub_82CBA8E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBA908) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x82cbaa40
	if (!cr6.eq) goto loc_82CBAA40;
	// srawi r9,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r9.s64 = r30.s32 >> 2;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,400
	r31.s64 = 400;
	// subf. r28,r5,r30
	r28.s64 = r30.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r27,r11,-572
	r27.s64 = r11.s64 + -572;
	// addi r26,r9,-624
	r26.s64 = ctx.r9.s64 + -624;
	// bne 0x82cba964
	if (!cr0.eq) goto loc_82CBA964;
	// divw r11,r30,r4
	r11.s32 = r30.s32 / ctx.r4.s32;
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// subf. r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cba984
	if (!cr0.eq) goto loc_82CBA984;
loc_82CBA964:
	// addi r11,r30,1900
	r11.s64 = r30.s64 + 1900;
	// divw r9,r11,r31
	ctx.r9.s32 = r11.s32 / r31.s32;
	// mulli r9,r9,400
	ctx.r9.s64 = ctx.r9.s64 * 400;
	// subf. r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cba984
	if (cr0.eq) goto loc_82CBA984;
	// rlwinm r29,r6,2,0,29
	r29.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r27
	r11.u64 = r29.u64 + r27.u64;
	// b 0x82cba98c
	goto loc_82CBA98C;
loc_82CBA984:
	// rlwinm r29,r6,2,0,29
	r29.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r26
	r11.u64 = r29.u64 + r26.u64;
loc_82CBA98C:
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// addi r9,r30,299
	ctx.r9.s64 = r30.s64 + 299;
	// divw r6,r11,r4
	ctx.r6.s32 = r11.s32 / ctx.r4.s32;
	// divw r9,r9,r31
	ctx.r9.s32 = ctx.r9.s32 / r31.s32;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mulli r6,r30,365
	ctx.r6.s64 = r30.s64 * 365;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,-25563
	ctx.r9.s64 = ctx.r9.s64 + -25563;
	// divw r6,r9,r6
	ctx.r6.s32 = ctx.r9.s32 / ctx.r6.s32;
	// mulli r6,r6,7
	ctx.r6.s64 = ctx.r6.s64 * 7;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// mulli r6,r7,7
	ctx.r6.s64 = ctx.r7.s64 * 7;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// bgt cr6,0x82cba9f0
	if (cr6.gt) goto loc_82CBA9F0;
	// addi r11,r11,-7
	r11.s64 = r11.s64 + -7;
loc_82CBA9F0:
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// bne cr6,0x82cbaaa4
	if (!cr6.eq) goto loc_82CBAAA4;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82cbaa10
	if (!cr6.eq) goto loc_82CBAA10;
	// divw r9,r30,r4
	ctx.r9.s32 = r30.s32 / ctx.r4.s32;
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// subf. r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82cbaa2c
	if (!cr0.eq) goto loc_82CBAA2C;
loc_82CBAA10:
	// addi r9,r30,1900
	ctx.r9.s64 = r30.s64 + 1900;
	// divw r8,r9,r31
	ctx.r8.s32 = ctx.r9.s32 / r31.s32;
	// mulli r8,r8,400
	ctx.r8.s64 = ctx.r8.s64 * 400;
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cbaa2c
	if (cr0.eq) goto loc_82CBAA2C;
	// lwzx r9,r29,r27
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r27.u32);
	// b 0x82cbaa30
	goto loc_82CBAA30;
loc_82CBAA2C:
	// lwzx r9,r29,r26
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
loc_82CBAA30:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82cbaaa4
	if (!cr6.gt) goto loc_82CBAAA4;
	// addi r11,r11,-7
	r11.s64 = r11.s64 + -7;
	// b 0x82cbaaa4
	goto loc_82CBAAA4;
loc_82CBAA40:
	// srawi r11,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r11.s64 = r30.s32 >> 2;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cbaa68
	if (!cr0.eq) goto loc_82CBAA68;
	// li r11,100
	r11.s64 = 100;
	// divw r11,r30,r11
	r11.s32 = r30.s32 / r11.s32;
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// subf. r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cbaa8c
	if (!cr0.eq) goto loc_82CBAA8C;
loc_82CBAA68:
	// addi r11,r30,1900
	r11.s64 = r30.s64 + 1900;
	// li r8,400
	ctx.r8.s64 = 400;
	// divw r8,r11,r8
	ctx.r8.s32 = r11.s32 / ctx.r8.s32;
	// mulli r8,r8,400
	ctx.r8.s64 = ctx.r8.s64 * 400;
	// subf. r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbaa8c
	if (cr0.eq) goto loc_82CBAA8C;
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// addi r8,r8,-572
	ctx.r8.s64 = ctx.r8.s64 + -572;
	// b 0x82cbaa94
	goto loc_82CBAA94;
loc_82CBAA8C:
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// addi r8,r8,-624
	ctx.r8.s64 = ctx.r8.s64 + -624;
loc_82CBAA94:
	// rlwinm r11,r6,2,0,29
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_82CBAAA4:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(228) );
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(244) );
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r7,-31953
	ctx.r7.s64 = -2094071808;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x82cbaae8
	if (!cr6.eq) goto loc_82CBAAE8;
	// addi r8,r7,-800
	ctx.r8.s64 = ctx.r7.s64 + -800;
	// stw r30,-800(r7)
	PPC_STORE_U32(ctx.r7.u32 + -800, r30.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x82cbab74
	goto loc_82CBAB74;
loc_82CBAAE8:
	// addi r31,r7,-800
	r31.s64 = ctx.r7.s64 + -800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82cbafc0
	sub_82CBAFC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cbab1c
	if (cr0.eq) goto loc_82CBAB1C;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CBAB1C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bge 0x82cbab48
	if (!cr0.lt) goto loc_82CBAB48;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addis r11,r11,1318
	r11.s64 = r11.s64 + 86376448;
	// addi r11,r11,23552
	r11.s64 = r11.s64 + 23552;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x82cbab68
	goto loc_82CBAB68;
loc_82CBAB48:
	// lis r10,1318
	ctx.r10.s64 = 86376448;
	// ori r10,r10,23552
	ctx.r10.u64 = ctx.r10.u64 | 23552;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82cbab70
	if (cr6.lt) goto loc_82CBAB70;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_82CBAB68:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
loc_82CBAB70:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82CBAB74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CBA908) {
	__imp__sub_82CBA908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBAB80) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbaf58
	sub_82CBAF58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cbabc0
	if (cr0.eq) goto loc_82CBABC0;
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
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CBABC0:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cbabd4
	if (!cr6.eq) goto loc_82CBABD4;
loc_82CBABCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbae24
	goto loc_82CBAE24;
loc_82CBABD4:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// addi r28,r11,-800
	r28.s64 = r11.s64 + -800;
	// lwz r11,-800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-800) );
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// bne cr6,0x82cbabf8
	if (!cr6.eq) goto loc_82CBABF8;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beq cr6,0x82cbad80
	if (cr6.eq) goto loc_82CBAD80;
loc_82CBABF8:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r31,r11,27456
	r31.s64 = r11.s64 + 27456;
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbad24
	if (cr6.eq) goto loc_82CBAD24;
	// lhz r11,152(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 152);
	// lhz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 164);
	// lhz r29,162(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 162);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82cbac5c
	if (!cr0.eq) goto loc_82CBAC5C;
	// lhz r4,166(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 166);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r6,158(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 158);
	// lhz r11,154(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 154);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lhz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 160);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 156);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x82cba908
	sub_82CBA908(ctx, base);
	// b 0x82cbac90
	goto loc_82CBAC90;
loc_82CBAC5C:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r9,166(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 166);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r11,158(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 158);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 160);
	// lhz r6,154(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 154);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// bl 0x82cba908
	sub_82CBA908(ctx, base);
loc_82CBAC90:
	// lhz r11,68(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82cbace4
	if (!cr0.eq) goto loc_82CBACE4;
	// lhz r3,78(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 78);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r6,74(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 74);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r29,82(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// lhz r27,80(r31)
	r27.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lhz r11,70(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lhz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 76);
	// lhz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// bl 0x82cba908
	sub_82CBA908(ctx, base);
	// b 0x82cbad80
	goto loc_82CBAD80;
loc_82CBACE4:
	// lhz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r29,80(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r27,78(r31)
	r27.u64 = PPC_LOAD_U16(r31.u32 + 78);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,74(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 74);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 76);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lhz r6,70(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// bl 0x82cba908
	sub_82CBA908(ctx, base);
	// b 0x82cbad80
	goto loc_82CBAD80;
loc_82CBAD24:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cba908
	sub_82CBA908(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cba908
	sub_82CBA908(ctx, base);
loc_82CBAD80:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82cbadb8
	if (!cr6.lt) goto loc_82CBADB8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82cbabcc
	if (cr6.lt) goto loc_82CBABCC;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82cbabcc
	if (cr6.gt) goto loc_82CBABCC;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82cbadd8
	if (!cr6.gt) goto loc_82CBADD8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82cbadd8
	if (!cr6.lt) goto loc_82CBADD8;
	// b 0x82cbae20
	goto loc_82CBAE20;
loc_82CBADB8:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82cbae20
	if (cr6.lt) goto loc_82CBAE20;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82cbae20
	if (cr6.gt) goto loc_82CBAE20;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82cbadd8
	if (!cr6.gt) goto loc_82CBADD8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82cbabcc
	if (cr6.lt) goto loc_82CBABCC;
loc_82CBADD8:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mulli r11,r8,60
	r11.s64 = ctx.r8.s64 * 60;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// bne cr6,0x82cbae10
	if (!cr6.eq) goto loc_82CBAE10;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82cbae20
	if (!cr6.lt) goto loc_82CBAE20;
	// b 0x82cbabcc
	goto loc_82CBABCC;
loc_82CBAE10:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82cbae24
	if (!cr6.lt) goto loc_82CBAE24;
loc_82CBAE20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CBAE24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CBAB80) {
	__imp__sub_82CBAB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBAE38) {
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
	// lis r30,-31949
	r30.s64 = -2093809664;
	// lwz r11,27636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(27636) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cbae94
	if (!cr6.eq) goto loc_82CBAE94;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,27636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(27636) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cbae88
	if (!cr6.eq) goto loc_82CBAE88;
	// bl 0x82cba740
	sub_82CBA740(ctx, base);
	// lwz r11,27636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(27636) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,27636(r30)
	PPC_STORE_U32(r30.u32 + 27636, r11.u32);
loc_82CBAE88:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x82cbaeac
	sub_82CBAEAC(ctx, base);
loc_82CBAE94:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

PPC_WEAK_FUNC(sub_82CBAE38) {
	__imp__sub_82CBAE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBAEAC) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBAEAC) {
	__imp__sub_82CBAEAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBAED8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cbab80
	sub_82CBAB80(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x82cbaf34
	sub_82CBAF34(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

PPC_WEAK_FUNC(sub_82CBAED8) {
	__imp__sub_82CBAED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBAF34) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBAF34) {
	__imp__sub_82CBAF34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBAF58) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbaf9c
	if (!cr6.eq) goto loc_82CBAF9C;
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
	// b 0x82cbafac
	goto loc_82CBAFAC;
loc_82CBAF9C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-772(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-772) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CBAFAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBAF58) {
	__imp__sub_82CBAF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBAFC0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbb004
	if (!cr6.eq) goto loc_82CBB004;
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
	// b 0x82cbb014
	goto loc_82CBB014;
loc_82CBB004:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-768(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-768) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CBB014:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBAFC0) {
	__imp__sub_82CBAFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB028) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbb06c
	if (!cr6.eq) goto loc_82CBB06C;
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
	// b 0x82cbb07c
	goto loc_82CBB07C;
loc_82CBB06C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-776(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-776) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CBB07C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB028) {
	__imp__sub_82CBB028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r3,r11,-772
	ctx.r3.s64 = r11.s64 + -772;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB090) {
	__imp__sub_82CBB090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r3,r11,-768
	ctx.r3.s64 = r11.s64 + -768;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB0A0) {
	__imp__sub_82CBB0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r3,r11,-776
	ctx.r3.s64 = r11.s64 + -776;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB0B0) {
	__imp__sub_82CBB0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r3,r11,-632
	ctx.r3.s64 = r11.s64 + -632;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB0C0) {
	__imp__sub_82CBB0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-3232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3232) );
	// lwz r3,172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB0D0) {
	__imp__sub_82CBB0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-3232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3232) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB0E0) {
	__imp__sub_82CBB0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,26896
	ctx.r3.s64 = r11.s64 + 26896;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB0F0) {
	__imp__sub_82CBB0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB100) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = r11.u64 & 130;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cbb158
	if (!cr0.eq) goto loc_82CBB158;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_82CBB138:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CBB140:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82cbb2dc
	goto loc_82CBB2DC;
loc_82CBB158:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbb16c
	if (cr0.eq) goto loc_82CBB16C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x82cbb138
	goto loc_82CBB138;
loc_82CBB16C:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82cbb194
	if (cr0.eq) goto loc_82CBB194;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x82cbb238
	if (cr0.eq) goto loc_82CBB238;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_82CBB194:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cbb1f0
	if (!cr0.eq) goto loc_82CBB1F0;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82cbb1d8
	if (cr6.eq) goto loc_82CBB1D8;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82cbb1e8
	if (!cr6.eq) goto loc_82CBB1E8;
loc_82CBB1D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fd318
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cbb1f0
	if (!cr0.eq) goto loc_82CBB1F0;
loc_82CBB1E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb6d00
	sub_82CB6D00(ctx, base);
loc_82CBB1F0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbb2b4
	if (cr0.eq) goto loc_82CBB2B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subf. r30,r4,r10
	r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble 0x82cbb24c
	if (!cr0.gt) goto loc_82CBB24C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82caf9e0
	sub_82CAF9E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82cbb2a8
	goto loc_82CBB2A8;
loc_82CBB238:
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82cbb2dc
	goto loc_82CBB2DC;
loc_82CBB24C:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82cbb27c
	if (cr6.eq) goto loc_82CBB27C;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(r29.s32, -2, xer);
	// beq cr6,0x82cbb27c
	if (cr6.eq) goto loc_82CBB27C;
	// srawi r11,r29,5
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	r11.s64 = r29.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r29,6,21,25
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cbb284
	goto loc_82CBB284;
loc_82CBB27C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-2648
	r11.s64 = r11.s64 + -2648;
loc_82CBB284:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbb2a8
	if (cr0.eq) goto loc_82CBB2A8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cb6b70
	sub_82CB6B70(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x82cbb140
	if (cr6.eq) goto loc_82CBB140;
loc_82CBB2A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// b 0x82cbb2d0
	goto loc_82CBB2D0;
loc_82CBB2B4:
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r27.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,2
	r30.s64 = 2;
	// bl 0x82caf9e0
	sub_82CAF9E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82CBB2D0:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// bne cr6,0x82cbb140
	if (!cr6.eq) goto loc_82CBB140;
	// clrlwi r3,r27,16
	ctx.r3.u64 = r27.u32 & 0xFFFF;
loc_82CBB2DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CBB100) {
	__imp__sub_82CBB100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB2E8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpdi cr6,r26,-1
	cr6.compare<int64_t>(r26.s64, -1, xer);
	// beq cr6,0x82cbb360
	if (cr6.eq) goto loc_82CBB360;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x82cbb360
	if (cr6.eq) goto loc_82CBB360;
	// subf r30,r3,r29
	r30.s64 = r29.s64 - ctx.r3.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(r30.s64, 0, xer);
	// ble cr6,0x82cbb3fc
	if (!cr6.gt) goto loc_82CBB3FC;
	// bl 0x82239798
	sub_82239798(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x82238790
	sub_82238790(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82cbb370
	if (!cr0.eq) goto loc_82CBB370;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82CBB360:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
loc_82CBB368:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CBB370:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82cbb480
	sub_82CBB480(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82CBB384:
	// cmpdi cr6,r30,4096
	cr6.compare<int64_t>(r30.s64, 4096, xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bge cr6,0x82cbb394
	if (!cr6.lt) goto loc_82CBB394;
	// extsw r5,r30
	ctx.r5.s64 = r30.s32;
loc_82CBB394:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf788
	sub_82CAF788(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cbb3bc
	if (cr6.eq) goto loc_82CBB3BC;
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// subf r30,r11,r30
	r30.s64 = r30.s64 - r11.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(r30.s64, 0, xer);
	// bgt cr6,0x82cbb384
	if (cr6.gt) goto loc_82CBB384;
	// b 0x82cbb3dc
	goto loc_82CBB3DC;
loc_82CBB3BC:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x82cbb3d8
	if (!cr6.eq) goto loc_82CBB3D8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82CBB3D8:
	// li r27,-1
	r27.s64 = -1;
loc_82CBB3DC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cbb480
	sub_82CBB480(ctx, base);
	// bl 0x82239798
	sub_82239798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82239468
	sub_82239468(ctx, base);
	// b 0x82cbb454
	goto loc_82CBB454;
loc_82CBB3FC:
	// bge cr6,0x82cbb45c
	if (!cr6.lt) goto loc_82CBB45C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x82cbb360
	if (cr6.eq) goto loc_82CBB360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// bl 0x82cc14d0
	sub_82CC14D0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// neg r27,r11
	r27.s64 = -r11.s64;
	// cmpdi cr6,r27,-1
	cr6.compare<int64_t>(r27.s64, -1, xer);
	// bne cr6,0x82cbb45c
	if (!cr6.eq) goto loc_82CBB45C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82CBB454:
	// cmpdi cr6,r27,-1
	cr6.compare<int64_t>(r27.s64, -1, xer);
	// beq cr6,0x82cbb360
	if (cr6.eq) goto loc_82CBB360;
loc_82CBB45C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x82cbb360
	if (cr6.eq) goto loc_82CBB360;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbb368
	goto loc_82CBB368;
}

PPC_WEAK_FUNC(sub_82CBB2E8) {
	__imp__sub_82CBB2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,29632
	ctx.r9.s64 = ctx.r10.s64 + 29632;
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// cmpwi cr6,r4,16384
	cr6.compare<int32_t>(ctx.r4.s32, 16384, xer);
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x82cbb4c4
	if (cr6.eq) goto loc_82CBB4C4;
	// cmplwi cr6,r4,32768
	cr6.compare<uint32_t>(ctx.r4.u32, 32768, xer);
	// bne cr6,0x82cbb4ec
	if (!cr6.eq) goto loc_82CBB4EC;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// b 0x82cbb4ec
	goto loc_82CBB4EC;
loc_82CBB4C4:
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// li r5,-128
	ctx.r5.s64 = -128;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r6.u8);
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r11,40
	ctx.r10.s64 = r11.s64 + 40;
	// stb r9,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r9.u8);
loc_82CBB4EC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82cbb500
	if (!cr6.eq) goto loc_82CBB500;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
loc_82CBB500:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB480) {
	__imp__sub_82CBB480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB508) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbb54c
	if (!cr6.eq) goto loc_82CBB54C;
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
	// b 0x82cbb55c
	goto loc_82CBB55C;
loc_82CBB54C:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,27640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27640) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CBB55C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB508) {
	__imp__sub_82CBB508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,2408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2408) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB570) {
	__imp__sub_82CBB570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB580) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,27644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27644) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbb5ac
	if (cr6.eq) goto loc_82CBB5AC;
	// rlwinm r5,r5,0,3,1
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
loc_82CBB5AC:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82cbb5c8
	if (cr6.eq) goto loc_82CBB5C8;
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cbb5d0
	goto loc_82CBB5D0;
loc_82CBB5C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82CBB5D0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b263c
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cbb5ec
	if (!cr0.eq) goto loc_82CBB5EC;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82CBB5EC:
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

PPC_WEAK_FUNC(sub_82CBB580) {
	__imp__sub_82CBB580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB608) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b264c
	__imp__MmQueryAllocationSize(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBB608) {
	__imp__sub_82CBB608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x832b265c
	__imp__MmSetAddressProtect(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBB610) {
	__imp__sub_82CBB610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB61C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB61C) {
	__imp__sub_82CBB61C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB620) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b266c
	__imp__MmFreePhysicalMemory(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBB620) {
	__imp__sub_82CBB620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB630) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b267c
	__imp__MmQueryAddressProtect(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBB630) {
	__imp__sub_82CBB630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r3,27644(r11)
	PPC_STORE_U32(r11.u32 + 27644, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB638) {
	__imp__sub_82CBB638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB648) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x832b269c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbb6f8
	if (cr0.lt) goto loc_82CBB6F8;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x832b22dc
	__imp__XamShowMessageBoxUIEx(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82cbb6f0
	if (!cr6.eq) goto loc_82CBB6F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbc558
	sub_82CBC558(ctx, base);
loc_82CBB6F0:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
loc_82CBB6F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CBB648) {
	__imp__sub_82CBB648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,10952
	r11.s64 = r11.s64 + 10952;
loc_82CBB710:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bne cr6,0x82cbb768
	if (!cr6.eq) goto loc_82CBB768;
	// clrlwi. r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82cbb758
	if (cr0.eq) goto loc_82CBB758;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82CBB734:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82cbb758
	if (!cr6.lt) goto loc_82CBB758;
	// lhz r31,0(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// sth r31,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r31.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// blt cr6,0x82cbb734
	if (cr6.lt) goto loc_82CBB734;
loc_82CBB758:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u16);
	// b 0x82cbb770
	goto loc_82CBB770;
loc_82CBB768:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82CBB770:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// ble cr6,0x82cbb710
	if (!cr6.gt) goto loc_82CBB710;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBB700) {
	__imp__sub_82CBB700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBB788) {
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
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x832b26bc
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cbb94c
	if (cr0.eq) goto loc_82CBB94C;
	// bl 0x832b22fc
	__imp__XGetAVPack(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x82cbb94c
	if (cr6.eq) goto loc_82CBB94C;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82cbb94c
	if (cr6.eq) goto loc_82CBB94C;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82cbb94c
	if (cr6.eq) goto loc_82CBB94C;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x82cbb94c
	if (cr6.eq) goto loc_82CBB94C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832b26ac
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cbb94c
	if (!cr0.eq) goto loc_82CBB94C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// rlwinm r11,r11,0,16,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bne cr6,0x82cbb94c
	if (!cr6.eq) goto loc_82CBB94C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832b26ac
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cbb94c
	if (!cr0.eq) goto loc_82CBB94C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cbb83c
	if (!cr0.eq) goto loc_82CBB83C;
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cbb94c
	if (!cr0.eq) goto loc_82CBB94C;
loc_82CBB83C:
	// bl 0x832b22ec
	__imp__XGetLanguage(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, r30.u16);
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r11,15
	r11.s64 = 15;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(r31.u32, 10, xer);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// blt cr6,0x82cbb90c
	if (cr6.lt) goto loc_82CBB90C;
	// li r31,1
	r31.s64 = 1;
loc_82CBB90C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,2,0,29
	r31.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82cbb700
	sub_82CBB700(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82cbb700
	sub_82CBB700(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82cbb648
	sub_82CBB648(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_82CBB94C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
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

PPC_WEAK_FUNC(sub_82CBB788) {
	__imp__sub_82CBB788(ctx, base);
}

PPC_FUNC_IMPL(__imp___xstart) {
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
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,-1
	r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,29892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29892, r11.u32);
	// stw r10,29896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29896, ctx.r10.u32);
	// bl 0x82cc1bc0
	sub_82CC1BC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cc16c0
	sub_82CC16C0(ctx, base);
	// bl 0x82cbb788
	sub_82CBB788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cbb9c4
	if (cr0.eq) goto loc_82CBB9C4;
	// bl 0x832b230c
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CBB9C4:
	// bl 0x82cac798
	sub_82CAC798(ctx, base);
	// bl 0x82cc1a70
	sub_82CC1A70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cc1990
	sub_82CC1990(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,28360(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28360) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbbafc
	if (cr6.eq) goto loc_82CBBAFC;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x82cbb570
	sub_82CBB570(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cbbae0
	if (cr0.eq) goto loc_82CBBAE0;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_82CBBA10:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_82CBBA18:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cbba54
	if (cr0.eq) goto loc_82CBBA54;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82cbba30
	if (cr6.eq) goto loc_82CBBA30;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x82cbba54
	if (!cr6.eq) goto loc_82CBBA54;
loc_82CBBA30:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cbba18
	goto loc_82CBBA18;
loc_82CBBA54:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cbbacc
	if (cr0.eq) goto loc_82CBBACC;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_82CBBA78:
	// cmpwi cr6,r9,34
	cr6.compare<int32_t>(ctx.r9.s32, 34, xer);
	// beq cr6,0x82cbba90
	if (cr6.eq) goto loc_82CBBA90;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x82cbba9c
	goto loc_82CBBA9C;
loc_82CBBA90:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_82CBBA9C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// beq 0x82cbbacc
	if (cr0.eq) goto loc_82CBBACC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82cbba78
	if (!cr6.eq) goto loc_82CBBA78;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82cbbacc
	if (cr6.eq) goto loc_82CBBACC;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x82cbba78
	if (!cr6.eq) goto loc_82CBBA78;
loc_82CBBACC:
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbbadc
	if (cr0.eq) goto loc_82CBBADC;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// ble cr6,0x82cbba10
	if (!cr6.gt) goto loc_82CBBA10;
loc_82CBBADC:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
loc_82CBBAE0:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x82cbbb04
	goto loc_82CBBB04;
loc_82CBBAFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBB04:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822ea8c0
	sub_822EA8C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82ca97b8
	sub_82CA97B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,13624
	ctx.r3.s64 = r11.s64 + 13624;
	// bl 0x832b26cc
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x832b230c
	__imp__XamLoaderTerminateTitle(ctx, base);
}

PPC_WEAK_FUNC(_xstart) {
	__imp___xstart(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBB34) {
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
	// bl 0x82cbbed0
	sub_82CBBED0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBB34) {
	__imp__sub_82CBBB34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBB58) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b26dc
	__imp__DbgBreakPoint(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBBB58) {
	__imp__sub_82CBBB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x832b26ec
	__imp__NtProtectVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbbb94
	if (cr0.lt) goto loc_82CBBB94;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cbbb9c
	goto loc_82CBBB9C;
loc_82CBBB94:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBB60) {
	__imp__sub_82CBBB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832b26fc
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbbbd4
	if (cr0.lt) goto loc_82CBBBD4;
	// li r3,28
	ctx.r3.s64 = 28;
	// b 0x82cbbbdc
	goto loc_82CBBBDC;
loc_82CBBBD4:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBBDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBBB0) {
	__imp__sub_82CBBBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBBF0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,104
	r11.s64 = 104;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b270c
	__imp__MmQueryStatistics(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// subf r8,r8,r11
	ctx.r8.s64 = r11.s64 - ctx.r8.s64;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBBF0) {
	__imp__sub_82CBBBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBC70) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,2332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2332) );
	// bl 0x832b273c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbbcd4
	if (cr0.lt) goto loc_82CBBCD4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(r31.s32, 15, xer);
	// bne cr6,0x82cbbcb0
	if (!cr6.eq) goto loc_82CBBCB0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82cbbcbc
	goto loc_82CBBCBC;
loc_82CBBCB0:
	// cmpwi cr6,r31,-15
	cr6.compare<int32_t>(r31.s32, -15, xer);
	// bne cr6,0x82cbbcbc
	if (!cr6.eq) goto loc_82CBBCBC;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_82CBBCBC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b272c
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b271c
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cbbcdc
	goto loc_82CBBCDC;
loc_82CBBCD4:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBCDC:
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

PPC_WEAK_FUNC(sub_82CBBC70) {
	__imp__sub_82CBBC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832b274c
	__imp__NtSuspendThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbbd18
	if (!cr0.lt) goto loc_82CBBD18;
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cbbd1c
	goto loc_82CBBD1C;
loc_82CBBD18:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CBBD1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBCF0) {
	__imp__sub_82CBBCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82CBBD30) {
	__imp__sub_82CBBD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBD40) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r10,-17104
	ctx.r4.s64 = ctx.r10.s64 + -17104;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x832b275c
	__imp__NtQueueApcThread(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBD40) {
	__imp__sub_82CBBD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBD90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,2332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2332) );
	// bl 0x832b273c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbbde8
	if (cr0.lt) goto loc_82CBBDE8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbbdd4
	if (cr0.eq) goto loc_82CBBDD4;
	// lwz r11,320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(320) );
	// b 0x82cbbdd8
	goto loc_82CBBDD8;
loc_82CBBDD4:
	// li r11,259
	r11.s64 = 259;
loc_82CBBDD8:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x832b271c
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cbbdf0
	goto loc_82CBBDF0;
loc_82CBBDE8:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBDF0:
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

PPC_WEAK_FUNC(sub_82CBBD90) {
	__imp__sub_82CBBD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,29924(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29924) );
	// stw r11,29924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29924, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBE08) {
	__imp__sub_82CBBE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBE20) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// bge cr6,0x82cbbe7c
	if (!cr6.lt) goto loc_82CBBE7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2332) );
	// bl 0x832b273c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82cbbeac
	if (cr0.lt) goto loc_82CBBEAC;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// slw r4,r11,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// bl 0x832b276c
	__imp__KeSetAffinityThread(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b271c
	__imp__ObDereferenceObject(ctx, base);
	// b 0x82cbbe84
	goto loc_82CBBE84;
loc_82CBBE7C:
	// lis r31,-16384
	r31.s64 = -1073741824;
	// ori r31,r31,13
	r31.u64 = r31.u64 | 13;
loc_82CBBE84:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82cbbeac
	if (cr6.lt) goto loc_82CBBEAC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbbea4
	if (cr6.eq) goto loc_82CBBEA4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r3,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r3.s64 = 31 - r11.s64;
	// b 0x82cbbeb8
	goto loc_82CBBEB8;
loc_82CBBEA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbbeb8
	goto loc_82CBBEB8;
loc_82CBBEAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CBBEB8:
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

PPC_WEAK_FUNC(sub_82CBBE20) {
	__imp__sub_82CBBE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBED0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,2316(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2316) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbbf10
	if (cr6.eq) goto loc_82CBBF10;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cbbf14
	goto loc_82CBBF14;
loc_82CBBF10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBF14:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cbbf48
	if (!cr6.eq) goto loc_82CBBF48;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r10,29924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29924) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cbbf48
	if (cr6.eq) goto loc_82CBBF48;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x82cbbf4c
	if (cr6.eq) goto loc_82CBBF4C;
loc_82CBBF48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBF4C:
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

PPC_WEAK_FUNC(sub_82CBBED0) {
	__imp__sub_82CBBED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBF60) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-272) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbbf90
	if (cr0.lt) goto loc_82CBBF90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cbbf98
	goto loc_82CBBF98;
loc_82CBBF90:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBF98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBBF60) {
	__imp__sub_82CBBF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBBFA8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// li r3,251
	ctx.r3.s64 = 251;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x832b231c
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbbfec
	if (!cr0.lt) goto loc_82CBBFEC;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82cbc00c
	goto loc_82CBC00C;
loc_82CBBFEC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cbc008
	if (!cr6.eq) goto loc_82CBC008;
	// bl 0x82cc1c70
	sub_82CC1C70(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = r11.u64 & 1627;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x82cbc00c
	goto loc_82CBC00C;
loc_82CBC008:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82CBC00C:
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

PPC_WEAK_FUNC(sub_82CBBFA8) {
	__imp__sub_82CBBFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC020) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x832b231c
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbc074
	if (!cr0.lt) goto loc_82CBC074;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82cbc094
	goto loc_82CBC094;
loc_82CBC074:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cbc090
	if (!cr6.eq) goto loc_82CBC090;
	// bl 0x82cc1c70
	sub_82CC1C70(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = r11.u64 & 1627;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x82cbc094
	goto loc_82CBC094;
loc_82CBC090:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82CBC094:
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

PPC_WEAK_FUNC(sub_82CBC020) {
	__imp__sub_82CBC020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC0A8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82cbc020
	sub_82CBC020(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC0A8) {
	__imp__sub_82CBC0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC0B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x832b231c
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbc108
	if (!cr0.lt) goto loc_82CBC108;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82cbc128
	goto loc_82CBC128;
loc_82CBC108:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cbc124
	if (!cr6.eq) goto loc_82CBC124;
	// bl 0x82cc1c70
	sub_82CC1C70(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = r11.u64 & 1627;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x82cbc128
	goto loc_82CBC128;
loc_82CBC124:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82CBC128:
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

PPC_WEAK_FUNC(sub_82CBC0B0) {
	__imp__sub_82CBC0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC140) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cbc0b0
	sub_82CBC0B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC140) {
	__imp__sub_82CBC140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC148) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b232c
	__imp__XamUserGetName(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC148) {
	__imp__sub_82CBC148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC150) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b233c
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC150) {
	__imp__sub_82CBC150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC158) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b234c
	__imp__XamUserAreUsersFriends(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC158) {
	__imp__sub_82CBC158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC160) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x832b236c
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8201
	r11.s64 = 537460736;
	// ori r11,r11,27392
	r11.u64 = r11.u64 | 27392;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x82cbc1d8
	if (!cr6.lt) goto loc_82CBC1D8;
	// cmplwi cr6,r30,255
	cr6.compare<uint32_t>(r30.u32, 255, xer);
	// bne cr6,0x82cbc1c8
	if (!cr6.eq) goto loc_82CBC1C8;
	// li r31,0
	r31.s64 = 0;
loc_82CBC198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832b233c
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82cbc1b8
	if (cr6.eq) goto loc_82CBC1B8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82cbc198
	if (cr6.lt) goto loc_82CBC198;
	// b 0x82cbc1d8
	goto loc_82CBC1D8;
loc_82CBC1B8:
	// li r11,0
	r11.s64 = 0;
	// li r3,1245
	ctx.r3.s64 = 1245;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82cbc1e8
	goto loc_82CBC1E8;
loc_82CBC1C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b233c
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82cbc1b8
	if (cr6.eq) goto loc_82CBC1B8;
loc_82CBC1D8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b235c
	__imp__XamUserCheckPrivilege(ctx, base);
loc_82CBC1E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBC160) {
	__imp__sub_82CBC160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// b 0x832b237c
	__imp__XamReadTileToTexture(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC1F0) {
	__imp__sub_82CBC1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x832b236c
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	r11.s64 = 537526272;
	// ori r11,r11,16128
	r11.u64 = r11.u64 | 16128;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82cbc2b8
	if (cr6.lt) goto loc_82CBC2B8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,13652
	ctx.r3.s64 = r11.s64 + 13652;
	// bl 0x82cc1d70
	sub_82CC1D70(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82cbc2b8
	if (cr0.eq) goto loc_82CBC2B8;
	// li r4,765
	ctx.r4.s64 = 765;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82cc1d30
	sub_82CC1D30(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbc2b8
	if (cr0.eq) goto loc_82CBC2B8;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,254
	ctx.r6.s64 = 254;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cbc308
	goto loc_82CBC308;
loc_82CBC2B8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832b238c
	__imp__XamParseGamerTileKey(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cbc30c
	if (!cr0.eq) goto loc_82CBC30C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x82cbc2e4
	if (!cr6.eq) goto loc_82CBC2E4;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_82CBC2E4:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,254
	ctx.r6.s64 = 254;
	// clrldi r5,r11,32
	ctx.r5.u64 = r11.u64 & 0xFFFFFFFF;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x832b237c
	__imp__XamReadTileToTexture(ctx, base);
loc_82CBC308:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82CBC30C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82cbc31c
	if (cr6.eq) goto loc_82CBC31C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82cc1cf8
	sub_82CC1CF8(ctx, base);
loc_82CBC31C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CBC220) {
	__imp__sub_82CBC220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC328) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2720);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x82cbc360
	if (cr6.lt) goto loc_82CBC360;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f1,-16940(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16940);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82cbc3a4
	goto loc_82CBC3A4;
loc_82CBC360:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82cbc3a4
	if (!cr6.gt) goto loc_82CBC3A4;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2704);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x822955c0
	sub_822955C0(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfd f0,1224(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 1224);
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
loc_82CBC3A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBC328) {
	__imp__sub_82CBC328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC3B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82cc1c90
	sub_82CC1C90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cbc434
	if (!cr0.eq) goto loc_82CBC434;
	// rldicl r11,r30,16,48
	r11.u64 = rotl64(r30.u64, 16) & 0xFFFF;
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bne cr6,0x82cbc410
	if (!cr6.eq) goto loc_82CBC410;
	// rlwinm. r11,r11,0,24,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbc410
	if (cr0.eq) goto loc_82CBC410;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82cbc434
	goto loc_82CBC434;
loc_82CBC410:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832b239c
	__imp__XamUserCreateAchievementEnumerator(ctx, base);
loc_82CBC434:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CBC3B8) {
	__imp__sub_82CBC3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC440) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x832b23ac
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbc468
	if (cr0.lt) goto loc_82CBC468;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbc480
	goto loc_82CBC480;
loc_82CBC468:
	// rlwinm r11,r3,0,3,15
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82cbc480
	if (cr6.eq) goto loc_82CBC480;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82CBC480:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBC440) {
	__imp__sub_82CBC440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbc4a4
	if (!cr6.eq) goto loc_82CBC4A4;
	// b 0x82cc0758
	sub_82CC0758(ctx, base);
	return;
loc_82CBC4A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBC490) {
	__imp__sub_82CBC490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC4B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cbc4f4
	if (cr6.eq) goto loc_82CBC4F4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cc1df0
	sub_82CC1DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82cbc4f8
	goto loc_82CBC4F8;
loc_82CBC4F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CBC4F8:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b269c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbc534
	if (cr0.lt) goto loc_82CBC534;
	// lis r11,16384
	r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x82cbc528
	if (cr6.eq) goto loc_82CBC528;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBC528:
	// bl 0x82cc1c20
	sub_82CC1C20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82cbc53c
	goto loc_82CBC53C;
loc_82CBC534:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBC53C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82CBC4B8) {
	__imp__sub_82CBC4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC558) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// bne cr6,0x82cbc5c4
	if (!cr6.eq) goto loc_82CBC5C4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82cbc5a0
	if (cr6.eq) goto loc_82CBC5A0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbc5a0
	if (cr6.eq) goto loc_82CBC5A0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82196c58
	sub_82196C58(ctx, base);
	// b 0x82cbc5a4
	goto loc_82CBC5A4;
loc_82CBC5A0:
	// li r3,258
	ctx.r3.s64 = 258;
loc_82CBC5A4:
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x82cbc5b4
	if (!cr6.eq) goto loc_82CBC5B4;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x82cbc5d8
	goto loc_82CBC5D8;
loc_82CBC5B4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbc5c4
	if (cr6.eq) goto loc_82CBC5C4;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// b 0x82cbc5d8
	goto loc_82CBC5D8;
loc_82CBC5C4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82cbc5d4
	if (cr6.eq) goto loc_82CBC5D4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82CBC5D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
loc_82CBC5D8:
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

PPC_WEAK_FUNC(sub_82CBC558) {
	__imp__sub_82CBC558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC5F0) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x832b23bc
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC5F0) {
	__imp__sub_82CBC5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC5F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b23cc
	__imp__XamShowSigninUI(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC5F8) {
	__imp__sub_82CBC5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC600) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b23dc
	__imp__XamShowKeyboardUI(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC600) {
	__imp__sub_82CBC600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC608) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x832b23ec
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC608) {
	__imp__sub_82CBC608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC610) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832b23fc
	__imp__XamShowAchievementsUI(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC610) {
	__imp__sub_82CBC610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC618) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x832b240c
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC618) {
	__imp__sub_82CBC618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC628) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b241c
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC628) {
	__imp__sub_82CBC628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC630) {
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
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x832b242c
	__imp__XamShowMessageBoxUI(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBC630) {
	__imp__sub_82CBC630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC658) {
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
	// bl 0x832b243c
	__imp__XamShowDirtyDiscErrorUI(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd008
	sub_82CBD008(ctx, base);
}

PPC_WEAK_FUNC(sub_82CBC658) {
	__imp__sub_82CBC658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x82cc2028
	sub_82CC2028(ctx, base);
	// cmpwi cr6,r3,192
	cr6.compare<int32_t>(ctx.r3.s32, 192, xer);
	// li r3,192
	ctx.r3.s64 = 192;
	// beq cr6,0x82cbc69c
	if (cr6.eq) goto loc_82CBC69C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBC69C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBC678) {
	__imp__sub_82CBC678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC6B0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cc2028
	sub_82CC2028(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBC6B0) {
	__imp__sub_82CBC6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// rlwinm r25,r5,1,0,30
	r25.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r10,1,0,30
	r21.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r9,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r9.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r8,16417
	ctx.r8.s64 = 16417;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x832b27ac
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbc75c
	if (!cr0.lt) goto loc_82CBC75C;
loc_82CBC750:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbc994
	goto loc_82CBC994;
loc_82CBC75C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82cbc774
	if (!cr6.eq) goto loc_82CBC774;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82cbc7ac
	if (cr6.eq) goto loc_82CBC7AC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82cbc77c
	if (cr6.eq) goto loc_82CBC77C;
loc_82CBC774:
	// addi r27,r25,24
	r27.s64 = r25.s64 + 24;
	// b 0x82cbc780
	goto loc_82CBC780;
loc_82CBC77C:
	// li r27,284
	r27.s64 = 284;
loc_82CBC780:
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// bne 0x82cbc7b0
	if (!cr0.eq) goto loc_82CBC7B0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
loc_82CBC7A0:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x82cbc750
	goto loc_82CBC750;
loc_82CBC7AC:
	// lwz r27,92(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
loc_82CBC7B0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x82cbc7d0
	if (!cr6.eq) goto loc_82CBC7D0;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82cbc7c8
	if (!cr6.eq) goto loc_82CBC7C8;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82cbc814
	if (cr6.eq) goto loc_82CBC814;
loc_82CBC7C8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82cbc7d8
	if (cr6.eq) goto loc_82CBC7D8;
loc_82CBC7D0:
	// addi r30,r21,16
	r30.s64 = r21.s64 + 16;
	// b 0x82cbc7dc
	goto loc_82CBC7DC;
loc_82CBC7D8:
	// li r30,276
	r30.s64 = 276;
loc_82CBC7DC:
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// bne 0x82cbc818
	if (!cr0.eq) goto loc_82CBC818;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cbc7a0
	if (cr6.eq) goto loc_82CBC7A0;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
	// b 0x82cbc7a0
	goto loc_82CBC7A0;
loc_82CBC814:
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
loc_82CBC818:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cbc854
	if (cr6.eq) goto loc_82CBC854;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x832b279c
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbc854
	if (!cr0.lt) goto loc_82CBC854;
loc_82CBC848:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x82cbc97c
	goto loc_82CBC97C;
loc_82CBC854:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cbc87c
	if (cr6.eq) goto loc_82CBC87C;
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x832b279c
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbc848
	if (cr0.lt) goto loc_82CBC848;
loc_82CBC87C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82cbc8c4
	if (cr6.eq) goto loc_82CBC8C4;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// cmplw cr6,r5,r25
	cr6.compare<uint32_t>(ctx.r5.u32, r25.u32, xer);
	// blt cr6,0x82cbc8b0
	if (cr6.lt) goto loc_82CBC8B0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cbc97c
	goto loc_82CBC97C;
loc_82CBC8B0:
	// addi r4,r28,17
	ctx.r4.s64 = r28.s64 + 17;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// stbx r24,r26,r11
	PPC_STORE_U8(r26.u32 + r11.u32, r24.u8);
loc_82CBC8C4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82cbc8d4
	if (cr6.eq) goto loc_82CBC8D4;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_82CBC8D4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82cbc910
	if (cr6.eq) goto loc_82CBC910;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r5,r21
	cr6.compare<uint32_t>(ctx.r5.u32, r21.u32, xer);
	// blt cr6,0x82cbc8fc
	if (cr6.lt) goto loc_82CBC8FC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cbc97c
	goto loc_82CBC97C;
loc_82CBC8FC:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stbx r24,r11,r23
	PPC_STORE_U8(r11.u32 + r23.u32, r24.u8);
loc_82CBC910:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82cbc920
	if (cr6.eq) goto loc_82CBC920;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
loc_82CBC920:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82cbc930
	if (cr6.eq) goto loc_82CBC930;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r11,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r11.u32);
loc_82CBC930:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cbc974
	goto loc_82CBC974;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// lis r11,-32052
	r11.s64 = -2100559872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// addi r4,r11,-13936
	ctx.r4.s64 = r11.s64 + -13936;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// bl 0x82caf450
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwz r28,92(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// b 0x82cbc990
	goto loc_82CBC990;
loc_82CBC974:
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82CBC97C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,256
	r12.s64 = r31.s64 + 256;
	// bl 0x82cbc9c4
	sub_82CBC9C4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// b 0x82cbc994
	goto loc_82CBC994;
loc_82CBC990:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
loc_82CBC994:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82CBC6C0) {
	__imp__sub_82CBC6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC99C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwz r28,92(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// b 0x82cbc9e0
	goto loc_82CBC9E0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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
loc_82CBC9E0:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cbc9fc
	if (cr6.eq) goto loc_82CBC9FC;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
loc_82CBC9FC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cbca10
	if (cr6.eq) goto loc_82CBCA10;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
loc_82CBCA10:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-32) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBC99C) {
	__imp__sub_82CBC99C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBC9C4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cbc9fc
	if (cr6.eq) goto loc_82CBC9FC;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
loc_82CBC9FC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cbca10
	if (cr6.eq) goto loc_82CBCA10;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
loc_82CBCA10:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-32) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBC9C4) {
	__imp__sub_82CBC9C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCA2C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBCA2C) {
	__imp__sub_82CBCA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCA38) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r31,r10,27664
	r31.s64 = ctx.r10.s64 + 27664;
	// addi r30,r11,13704
	r30.s64 = r11.s64 + 13704;
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbca98
	if (cr6.eq) goto loc_82CBCA98;
	// li r11,0
	r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b282c
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b288c
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_82CBCA98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbcad4
	if (cr6.eq) goto loc_82CBCAD4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b282c
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b288c
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_82CBCAD4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbcb10
	if (cr6.eq) goto loc_82CBCB10;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b282c
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b288c
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_82CBCB10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_82CBCA38) {
	__imp__sub_82CBCA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCB28) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r31,r11,27648
	r31.s64 = r11.s64 + 27648;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbcbd8
	if (cr6.eq) goto loc_82CBCBD8;
	// bl 0x832b285c
	__imp__KeEnterCriticalRegion(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbcb70
	if (cr6.eq) goto loc_82CBCB70;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-452
	ctx.r3.s64 = ctx.r10.s64 + -452;
	// bl 0x832b28cc
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_82CBCB70:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r30,r11,-512
	r30.s64 = r11.s64 + -512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,2
	r11.s64 = 2;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r9,-484
	ctx.r3.s64 = ctx.r9.s64 + -484;
	// stw r11,27672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27672, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832b28bc
	__imp__KeSetEvent(ctx, base);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,-468
	r29.s64 = r11.s64 + -468;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x832b28ac
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b289c
	__imp__KeResetEvent(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x832b283c
	__imp__KeLeaveCriticalRegion(ctx, base);
	// b 0x82cbcbe8
	goto loc_82CBCBE8;
loc_82CBCBD8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82cbcbe8
	if (cr6.eq) goto loc_82CBCBE8;
	// bl 0x82cbca38
	sub_82CBCA38(ctx, base);
loc_82CBCBE8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CBCB28) {
	__imp__sub_82CBCB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCBF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cbcb28
	sub_82CBCB28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBCBF8) {
	__imp__sub_82CBCBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCC00) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// beq cr6,0x82cbcc80
	if (cr6.eq) goto loc_82CBCC80;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// beq cr6,0x82cbcc78
	if (cr6.eq) goto loc_82CBCC78;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// beq cr6,0x82cbcc70
	if (cr6.eq) goto loc_82CBCC70;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// beq cr6,0x82cbcc68
	if (cr6.eq) goto loc_82CBCC68;
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(r27.u32, 5, xer);
	// bne cr6,0x82cbcc54
	if (!cr6.eq) goto loc_82CBCC54;
	// rlwinm. r11,r28,0,1,1
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,4
	r30.s64 = 4;
	// bne 0x82cbcc84
	if (!cr0.eq) goto loc_82CBCC84;
loc_82CBCC54:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
loc_82CBCC60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cbcdec
	goto loc_82CBCDEC;
loc_82CBCC68:
	// li r30,3
	r30.s64 = 3;
	// b 0x82cbcc84
	goto loc_82CBCC84;
loc_82CBCC70:
	// li r30,1
	r30.s64 = 1;
	// b 0x82cbcc84
	goto loc_82CBCC84;
loc_82CBCC78:
	// li r30,5
	r30.s64 = 5;
	// b 0x82cbcc84
	goto loc_82CBCC84;
loc_82CBCC80:
	// li r30,2
	r30.s64 = 2;
loc_82CBCC84:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82cbccb0
	if (!cr6.gt) goto loc_82CBCCB0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82cbccb4
	if (cr6.eq) goto loc_82CBCCB4;
loc_82CBCCB0:
	// li r29,0
	r29.s64 = 0;
loc_82CBCCB4:
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	r11.u64 = (rotl32(r31.u32, 28) & 0x8000000) | (r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~r31.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// beq 0x82cbcd1c
	if (cr0.eq) goto loc_82CBCD1C;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// oris r28,r28,1
	r28.u64 = r28.u64 | 65536;
loc_82CBCD1C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbcd28
	if (!cr6.eq) goto loc_82CBCD28;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_82CBCD28:
	// lis r6,-31953
	ctx.r6.s64 = -2094071808;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// oris r4,r28,16
	ctx.r4.u64 = r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = r31.u64 & 32679;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r11,-272(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(-272) );
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x82cbcdb4
	if (!cr0.lt) goto loc_82CBCDB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,53
	r11.u64 = r11.u64 | 53;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82cbcd8c
	if (!cr6.eq) goto loc_82CBCD8C;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x82cbcdac
	goto loc_82CBCDAC;
loc_82CBCD8C:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,186
	r11.u64 = r11.u64 | 186;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82cbcc60
	if (!cr6.eq) goto loc_82CBCC60;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x82cbcdac
	if (!cr6.eq) goto loc_82CBCDAC;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82CBCDAC:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// b 0x82cbcc60
	goto loc_82CBCC60;
loc_82CBCDB4:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// bne cr6,0x82cbcdc8
	if (!cr6.eq) goto loc_82CBCDC8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82cbcdd8
	if (cr6.eq) goto loc_82CBCDD8;
loc_82CBCDC8:
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bne cr6,0x82cbcde0
	if (!cr6.eq) goto loc_82CBCDE0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82cbcde0
	if (!cr6.eq) goto loc_82CBCDE0;
loc_82CBCDD8:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82cbcde4
	goto loc_82CBCDE4;
loc_82CBCDE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBCDE4:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
loc_82CBCDEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CBCC00) {
	__imp__sub_82CBCC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCDF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cbce28
	if (cr6.eq) goto loc_82CBCE28;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82CBCE28:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cbcecc
	if (cr6.eq) goto loc_82CBCECC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,259
	r11.s64 = 259;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// clrlwi. r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bne 0x82cbce5c
	if (!cr0.eq) goto loc_82CBCE5C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82CBCE5C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-272) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbcea8
	if (cr0.lt) goto loc_82CBCEA8;
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// beq cr6,0x82cbcea8
	if (cr6.eq) goto loc_82CBCEA8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cbcea0
	if (cr6.eq) goto loc_82CBCEA0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CBCEA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cbcf74
	goto loc_82CBCF74;
loc_82CBCEA8:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,17
	r11.u64 = r11.u64 | 17;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82cbcf6c
	if (!cr6.eq) goto loc_82CBCF6C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cbcec4
	if (cr6.eq) goto loc_82CBCEC4;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82CBCEC4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82cbcf6c
	goto loc_82CBCF6C;
loc_82CBCECC:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-272) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// bne cr6,0x82cbcf20
	if (!cr6.eq) goto loc_82CBCF20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b22ac
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbcf38
	if (cr0.lt) goto loc_82CBCF38;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CBCF20:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cbcf38
	if (cr6.lt) goto loc_82CBCF38;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82cbcf74
	goto loc_82CBCF74;
loc_82CBCF38:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,17
	r11.u64 = r11.u64 | 17;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82cbcf54
	if (!cr6.eq) goto loc_82CBCF54;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82cbcf74
	goto loc_82CBCF74;
loc_82CBCF54:
	// rlwinm r11,r3,0,0,1
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cbcf6c
	if (!cr6.eq) goto loc_82CBCF6C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CBCF6C:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBCF74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBCDF8) {
	__imp__sub_82CBCDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCF80) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832b245c
	__imp__XMsgCancelIORequest(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBCF80) {
	__imp__sub_82CBCF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCFA8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832b246c
	__imp__XamEnumerate(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBCFA8) {
	__imp__sub_82CBCFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBCFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b28dc
	__imp__vswprintf(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBCFC0) {
	__imp__sub_82CBCFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbd090
	if (cr6.eq) goto loc_82CBD090;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,13832
	ctx.r10.s64 = ctx.r10.s64 + 13832;
loc_82CBD01C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82cbd040
	if (cr0.eq) goto loc_82CBD040;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cbd01c
	if (cr6.eq) goto loc_82CBD01C;
loc_82CBD040:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82cbd050
	if (!cr0.eq) goto loc_82CBD050;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x82cbd08c
	goto loc_82CBD08C;
loc_82CBD050:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,13812
	ctx.r10.s64 = ctx.r10.s64 + 13812;
loc_82CBD05C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82cbd080
	if (cr0.eq) goto loc_82CBD080;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cbd05c
	if (cr6.eq) goto loc_82CBD05C;
loc_82CBD080:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82cbd090
	if (!cr0.eq) goto loc_82CBD090;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
loc_82CBD08C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBD090:
	// b 0x832b247c
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD008) {
	__imp__sub_82CBD008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD098) {
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
	// bl 0x832b28ec
	__imp__NtYieldExecution(ctx, base);
	// lis r11,16384
	r11.s64 = 1073741824;
	// ori r11,r11,36
	r11.u64 = r11.u64 | 36;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD098) {
	__imp__sub_82CBD098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD0D0) {
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
	// bl 0x832b24ac
	__imp__XamUserGetSigninInfo(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbd0f0
	if (cr0.lt) goto loc_82CBD0F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbd108
	goto loc_82CBD108;
loc_82CBD0F0:
	// rlwinm r11,r3,0,3,15
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82cbd108
	if (cr6.eq) goto loc_82CBD108;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82CBD108:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD0D0) {
	__imp__sub_82CBD0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD118) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cbd184
	if (cr6.eq) goto loc_82CBD184;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbd184
	if (cr6.eq) goto loc_82CBD184;
	// andi. r11,r6,144
	r11.u64 = ctx.r6.u64 & 144;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,144
	cr6.compare<uint32_t>(r11.u32, 144, xer);
	// beq cr6,0x82cbd184
	if (cr6.eq) goto loc_82CBD184;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82cbd160
	if (!cr6.eq) goto loc_82CBD160;
	// rlwinm. r31,r6,0,24,24
	r31.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cbd160
	if (!cr0.eq) goto loc_82CBD160;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_82CBD160:
	// rlwinm. r11,r11,0,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbd174
	if (cr0.eq) goto loc_82CBD174;
	// clrlwi r11,r6,28
	r11.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82cbd184
	if (!cr6.eq) goto loc_82CBD184;
loc_82CBD174:
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x832b24bc
	__imp__XamContentCreateEx(ctx, base);
	// b 0x82cbd188
	goto loc_82CBD188;
loc_82CBD184:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82CBD188:
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

PPC_WEAK_FUNC(sub_82CBD118) {
	__imp__sub_82CBD118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD1A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b24cc
	__imp__XamContentClose(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD1A0) {
	__imp__sub_82CBD1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD1A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b24dc
	__imp__XamContentGetCreator(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD1A8) {
	__imp__sub_82CBD1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD1B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b24ec
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD1B0) {
	__imp__sub_82CBD1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD1B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b24fc
	__imp__XamContentGetDeviceState(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD1B8) {
	__imp__sub_82CBD1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,6,0,25
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r3,0
	ctx.r10.u64 = rotl32(ctx.r3.u32, 0);
	// addi r11,r11,4159
	r11.s64 = r11.s64 + 4159;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,1,0,18
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r9,170
	ctx.r9.s64 = 170;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r8,169
	r11.s64 = ctx.r8.s64 + 169;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82cbd200
	if (!cr6.gt) goto loc_82CBD200;
	// addi r10,r11,169
	ctx.r10.s64 = r11.s64 + 169;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// b 0x82cbd204
	goto loc_82CBD204;
loc_82CBD200:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CBD204:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82cbd218
	if (!cr6.gt) goto loc_82CBD218;
	// addi r7,r10,169
	ctx.r7.s64 = ctx.r10.s64 + 169;
	// divwu r9,r7,r9
	ctx.r9.u32 = ctx.r7.u32 / ctx.r9.u32;
	// b 0x82cbd21c
	goto loc_82CBD21C;
loc_82CBD218:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82CBD21C:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = rotl64(r11.u64, 12) & 0xFFFFFFFFFFFFF000;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD1C0) {
	__imp__sub_82CBD1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD240) {
	PPC_FUNC_PROLOGUE();
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
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82cbd118
	sub_82CBD118(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD240) {
	__imp__sub_82CBD240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD280) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x82cc8758
	sub_82CC8758(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD280) {
	__imp__sub_82CBD280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD290) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,65001
	cr6.compare<uint32_t>(ctx.r3.u32, 65001, xer);
	// bne cr6,0x82cbd2c8
	if (!cr6.eq) goto loc_82CBD2C8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82cc87c8
	sub_82CC87C8(ctx, base);
	// b 0x82cbd350
	goto loc_82CBD350;
loc_82CBD2C8:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82cbd2f8
	if (!cr6.eq) goto loc_82CBD2F8;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82CBD2D4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82cbd2d4
	if (!cr6.eq) goto loc_82CBD2D4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// b 0x82cbd2fc
	goto loc_82CBD2FC;
loc_82CBD2F8:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82CBD2FC:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82cbd30c
	if (!cr6.eq) goto loc_82CBD30C;
loc_82CBD304:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82cbd350
	goto loc_82CBD350;
loc_82CBD30C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82cbd344
	if (cr6.lt) goto loc_82CBD344;
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// blt cr6,0x82cbd344
	if (cr6.lt) goto loc_82CBD344;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832b28fc
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbd304
	if (!cr0.lt) goto loc_82CBD304;
	// bl 0x832b286c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82cbd348
	goto loc_82CBD348;
loc_82CBD344:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82CBD348:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBD350:
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

PPC_WEAK_FUNC(sub_82CBD290) {
	__imp__sub_82CBD290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832b290c
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbd3b4
	if (cr0.lt) goto loc_82CBD3B4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// b 0x82cbd3bc
	goto loc_82CBD3BC;
loc_82CBD3B4:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CBD3BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD368) {
	__imp__sub_82CBD368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82cc8a18
	sub_82CC8A18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD3D0) {
	__imp__sub_82CBD3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD3F0) {
	__imp__sub_82CBD3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD3F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// bge cr6,0x82cbd430
	if (!cr6.lt) goto loc_82CBD430;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cc8a10
	sub_82CC8A10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82CBD430:
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82cbd450
	if (!cr0.eq) goto loc_82CBD450;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82cbd484
	goto loc_82CBD484;
loc_82CBD450:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// bge cr6,0x82cbd470
	if (!cr6.lt) goto loc_82CBD470;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cc89c0
	sub_82CC89C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82CBD470:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82CBD484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CBD3F8) {
	__imp__sub_82CBD3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82cc8ae0
	sub_82CC8AE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CBD490) {
	__imp__sub_82CBD490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD4B0) {
	__imp__sub_82CBD4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD4B8) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82cbd4dc
	if (!cr6.eq) goto loc_82CBD4DC;
	// bl 0x82cc8a08
	sub_82CC8A08(ctx, base);
loc_82CBD4DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm. r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbd4f4
	if (cr0.eq) goto loc_82CBD4F4;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f5f18
	sub_821F5F18(ctx, base);
loc_82CBD4F4:
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

PPC_WEAK_FUNC(sub_82CBD4B8) {
	__imp__sub_82CBD4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD508) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// bge cr6,0x82cbd540
	if (!cr6.lt) goto loc_82CBD540;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cc8ad8
	sub_82CC8AD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82CBD540:
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82cbd560
	if (!cr0.eq) goto loc_82CBD560;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82cbd594
	goto loc_82CBD594;
loc_82CBD560:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// bge cr6,0x82cbd580
	if (!cr6.lt) goto loc_82CBD580;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cc8a90
	sub_82CC8A90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82CBD580:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82CBD594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CBD508) {
	__imp__sub_82CBD508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD5A0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cbd5cc
	if (cr6.eq) goto loc_82CBD5CC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CBD5CC:
	// cmplwi cr6,r3,65001
	cr6.compare<uint32_t>(ctx.r3.u32, 65001, xer);
	// bne cr6,0x82cbd5e8
	if (!cr6.eq) goto loc_82CBD5E8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cc8b50
	sub_82CC8B50(ctx, base);
	// b 0x82cbd658
	goto loc_82CBD658;
loc_82CBD5E8:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82cbd600
	if (!cr6.eq) goto loc_82CBD600;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// b 0x82cbd604
	goto loc_82CBD604;
loc_82CBD600:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82CBD604:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82cbd614
	if (!cr6.eq) goto loc_82CBD614;
loc_82CBD60C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82cbd658
	goto loc_82CBD658;
loc_82CBD614:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82cbd64c
	if (cr6.lt) goto loc_82CBD64C;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// blt cr6,0x82cbd64c
	if (cr6.lt) goto loc_82CBD64C;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x832b291c
	__imp__RtlUnicodeToMultiByteN(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbd60c
	if (!cr0.lt) goto loc_82CBD60C;
	// bl 0x832b286c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82cbd650
	goto loc_82CBD650;
loc_82CBD64C:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82CBD650:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBD658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBD5A0) {
	__imp__sub_82CBD5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD660) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b293c
	__imp__KeQuerySystemTime(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cc8c80
	sub_82CC8C80(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x832b292c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r9,126(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lhz r5,122(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// lhz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r6.u16);
	// sth r5,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r5.u16);
	// sth r4,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r4.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBD660) {
	__imp__sub_82CBD660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD6F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc1460
	sub_82CC1460(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cbd748
	if (cr0.eq) goto loc_82CBD748;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cbd72c
	if (cr6.eq) goto loc_82CBD72C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CBD72C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cbd74c
	if (!cr6.eq) goto loc_82CBD74C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// b 0x82cbd74c
	goto loc_82CBD74C;
loc_82CBD748:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CBD74C:
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

PPC_WEAK_FUNC(sub_82CBD6F8) {
	__imp__sub_82CBD6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD760) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b293c
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b292c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,96(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,106(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r6.u16);
	// sth r5,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r5.u16);
	// sth r4,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r4.u16);
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

PPC_WEAK_FUNC(sub_82CBD760) {
	__imp__sub_82CBD760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD7E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbd838
	if (!cr6.eq) goto loc_82CBD838;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,13652
	ctx.r3.s64 = r11.s64 + 13652;
	// bl 0x832b295c
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbd830
	if (cr0.lt) goto loc_82CBD830;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x832b294c
	__imp__XexGetProcedureAddress(ctx, base);
loc_82CBD830:
	// bl 0x832b286c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82cbd83c
	goto loc_82CBD83C;
loc_82CBD838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBD83C:
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

PPC_WEAK_FUNC(sub_82CBD7E0) {
	__imp__sub_82CBD7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD858) {
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
	// lis r31,-31953
	r31.s64 = -2094071808;
	// lwz r11,-396(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-396) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82cbd8d0
	if (!cr6.eq) goto loc_82CBD8D0;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-396(r31)
	PPC_STORE_U32(r31.u32 + -396, r11.u32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,2047
	ctx.r4.u64 = ctx.r4.u64 | 2047;
	// lwz r11,2288(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(2288) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// bl 0x832b27bc
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cbd8f0
	if (cr0.eq) goto loc_82CBD8F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// ble cr6,0x82cbd8e8
	if (!cr6.gt) goto loc_82CBD8E8;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cbd8e8
	if (!cr0.eq) goto loc_82CBD8E8;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,-396(r31)
	PPC_STORE_U32(r31.u32 + -396, ctx.r10.u32);
	// stw r11,28352(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28352, r11.u32);
loc_82CBD8D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBD8D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CBD8E8:
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82cbd8d4
	goto loc_82CBD8D4;
loc_82CBD8F0:
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82cbd8d4
	goto loc_82CBD8D4;
}

PPC_WEAK_FUNC(sub_82CBD858) {
	__imp__sub_82CBD858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD8F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x832b250c
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbd938
	if (cr0.lt) goto loc_82CBD938;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82cbd938
	if (!cr6.eq) goto loc_82CBD938;
	// li r31,1
	r31.s64 = 1;
loc_82CBD938:
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

PPC_WEAK_FUNC(sub_82CBD8F8) {
	__imp__sub_82CBD8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD958) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82cbd858
	sub_82CBD858(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cbd9c0
	if (!cr0.eq) goto loc_82CBD9C0;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,-396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-396) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cbd9c0
	if (cr6.eq) goto loc_82CBD9C0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r10,28352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28352) );
loc_82CBD99C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// beq cr6,0x82cbd9bc
	if (cr6.eq) goto loc_82CBD9BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cbd99c
	if (cr6.lt) goto loc_82CBD99C;
	// b 0x82cbd9c0
	goto loc_82CBD9C0;
loc_82CBD9BC:
	// li r30,1
	r30.s64 = 1;
loc_82CBD9C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

PPC_WEAK_FUNC(sub_82CBD958) {
	__imp__sub_82CBD958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBD9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cbdb18
	if (cr6.eq) goto loc_82CBDB18;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
	// bl 0x82cbd8f8
	sub_82CBD8F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cbda4c
	if (!cr0.eq) goto loc_82CBDA4C;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
	// bl 0x82cbd958
	sub_82CBD958(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cbda44
	if (cr0.eq) goto loc_82CBDA44;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// beq cr6,0x82cbda4c
	if (cr6.eq) goto loc_82CBDA4C;
loc_82CBDA44:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82cbdb1c
	goto loc_82CBDB1C;
loc_82CBDA4C:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r3,625
	ctx.r3.s64 = 625;
	// addi r30,r11,28344
	r30.s64 = r11.s64 + 28344;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cbd7e0
	sub_82CBD7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cbdb1c
	if (!cr0.eq) goto loc_82CBDB1C;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// bge cr6,0x82cbda84
	if (!cr6.lt) goto loc_82CBDA84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x832b23ac
	__imp__XamUserGetXUID(ctx, base);
	// b 0x82cbda88
	goto loc_82CBDA88;
loc_82CBDA84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBDA88:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cbdb10
	if (cr6.lt) goto loc_82CBDB10;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// std r8,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r8.u64);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// li r5,42
	ctx.r5.s64 = 42;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,772(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(772) );
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cbdb1c
	goto loc_82CBDB1C;
loc_82CBDB10:
	// li r3,1317
	ctx.r3.s64 = 1317;
	// b 0x82cbdb1c
	goto loc_82CBDB1C;
loc_82CBDB18:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82CBDB1C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82CBD9E0) {
	__imp__sub_82CBD9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBDB28) {
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cbdc30
	if (cr6.eq) goto loc_82CBDC30;
	// lwz r30,308(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cbd8f8
	sub_82CBD8F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cbdb74
	if (!cr0.eq) goto loc_82CBDB74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cbd958
	sub_82CBD958(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cbdc28
	if (cr0.eq) goto loc_82CBDC28;
loc_82CBDB74:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r3,624
	ctx.r3.s64 = 624;
	// addi r30,r11,28340
	r30.s64 = r11.s64 + 28340;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cbd7e0
	sub_82CBD7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cbdc34
	if (!cr0.eq) goto loc_82CBDC34;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// bge cr6,0x82cbdbac
	if (!cr6.lt) goto loc_82CBDBAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b23ac
	__imp__XamUserGetXUID(ctx, base);
	// b 0x82cbdbb0
	goto loc_82CBDBB0;
loc_82CBDBAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBDBB0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cbdc20
	if (cr6.lt) goto loc_82CBDC20;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// std r8,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r8.u64);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// li r5,42
	ctx.r5.s64 = 42;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cbdc34
	goto loc_82CBDC34;
loc_82CBDC20:
	// li r3,1317
	ctx.r3.s64 = 1317;
	// b 0x82cbdc34
	goto loc_82CBDC34;
loc_82CBDC28:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82cbdc34
	goto loc_82CBDC34;
loc_82CBDC30:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82CBDC34:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBDB28) {
	__imp__sub_82CBDB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBDC40) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,-1
	r11.s64 = -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// beq cr6,0x82cbdd00
	if (cr6.eq) goto loc_82CBDD00;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82cbdd00
	if (!cr6.eq) goto loc_82CBDD00;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82cbdd00
	if (!cr6.eq) goto loc_82CBDD00;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r3,633
	ctx.r3.s64 = 633;
	// addi r30,r11,28348
	r30.s64 = r11.s64 + 28348;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cbd7e0
	sub_82CBD7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cbdd04
	if (!cr0.eq) goto loc_82CBDD04;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// bge cr6,0x82cbdcb8
	if (!cr6.lt) goto loc_82CBDCB8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b23ac
	__imp__XamUserGetXUID(ctx, base);
	// b 0x82cbdcbc
	goto loc_82CBDCBC;
loc_82CBDCB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBDCBC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cbdcf8
	if (cr6.lt) goto loc_82CBDCF8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cbdd04
	if (cr6.eq) goto loc_82CBDD04;
	// li r11,312
	r11.s64 = 312;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82cbdd04
	goto loc_82CBDD04;
loc_82CBDCF8:
	// li r3,1317
	ctx.r3.s64 = 1317;
	// b 0x82cbdd04
	goto loc_82CBDD04;
loc_82CBDD00:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82CBDD04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CBDC40) {
	__imp__sub_82CBDC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBDD10) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// bl 0x832b251c
	__imp__XamAlloc(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82cbdd80
	if (cr0.lt) goto loc_82CBDD80;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82cbdd78
	if (cr6.eq) goto loc_82CBDD78;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82CBDD78:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82CBDD80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBDD10) {
	__imp__sub_82CBDD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBDD90) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cbdd10
	sub_82CBDD10(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82cbdefc
	if (cr0.lt) goto loc_82CBDEFC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82cbde10
	if (!cr6.eq) goto loc_82CBDE10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x832b269c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbde08
	if (cr0.lt) goto loc_82CBDE08;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// b 0x82cbde10
	goto loc_82CBDE10;
loc_82CBDE08:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
loc_82CBDE10:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82cbdee8
	if (cr6.lt) goto loc_82CBDEE8;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbde58
	if (cr6.eq) goto loc_82CBDE58;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,1924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1924) );
	// bl 0x832b273c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbde54
	if (cr0.lt) goto loc_82CBDE54;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// b 0x82cbde58
	goto loc_82CBDE58;
loc_82CBDE54:
	// oris r28,r3,4096
	r28.u64 = ctx.r3.u64 | 268435456;
loc_82CBDE58:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82cbded8
	if (cr6.lt) goto loc_82CBDED8;
	// li r11,997
	r11.s64 = 997;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x832b244c
	__imp__XamTaskSchedule(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82cbdeb8
	if (cr0.lt) goto loc_82CBDEB8;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82cbded0
	if (!cr6.eq) goto loc_82CBDED0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b253c
	__imp__XamGetOverlappedResult(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
	// b 0x82cbded0
	goto loc_82CBDED0;
loc_82CBDEB8:
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbded0
	if (cr6.eq) goto loc_82CBDED0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// bl 0x832b271c
	__imp__ObDereferenceObject(ctx, base);
loc_82CBDED0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x82cbdefc
	if (!cr6.lt) goto loc_82CBDEFC;
loc_82CBDED8:
	// li r11,1627
	r11.s64 = 1627;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bge cr6,0x82cbdefc
	if (!cr6.lt) goto loc_82CBDEFC;
loc_82CBDEE8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbdefc
	if (!cr6.eq) goto loc_82CBDEFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832b252c
	__imp__XamFree(ctx, base);
loc_82CBDEFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CBDD90) {
	__imp__sub_82CBDD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBDF08) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,512
	ctx.r9.s64 = 512;
	// lwz r30,12(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// std r29,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// addi r7,r31,24
	ctx.r7.s64 = r31.s64 + 24;
	// std r29,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r29.u64);
	// std r29,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r29.u64);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_82CBDF68:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x832b255c
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82cbdfd8
	if (cr0.lt) goto loc_82CBDFD8;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(448) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82cbd8f8
	sub_82CBD8F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cbdfa8
	if (!cr0.eq) goto loc_82CBDFA8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cbd958
	sub_82CBD958(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cbdf68
	if (cr0.eq) goto loc_82CBDF68;
loc_82CBDFA8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,308
	ctx.r5.s64 = 308;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,448(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(448) );
	// stw r10,308(r11)
	PPC_STORE_U32(r11.u32 + 308, ctx.r10.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbdfd8
	if (cr6.eq) goto loc_82CBDFD8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CBDFD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832b271c
	__imp__ObDereferenceObject(ctx, base);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbe008
	if (cr6.eq) goto loc_82CBE008;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bge cr6,0x82cbdffc
	if (!cr6.lt) goto loc_82CBDFFC;
	// li r4,1627
	ctx.r4.s64 = 1627;
loc_82CBDFFC:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b254c
	__imp__XMsgCompleteIORequest(ctx, base);
loc_82CBE008:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CBDF08) {
	__imp__sub_82CBDF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE018) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cbe134
	if (cr6.eq) goto loc_82CBE134;
	// cmplwi cr6,r5,312
	cr6.compare<uint32_t>(ctx.r5.u32, 312, xer);
	// bne cr6,0x82cbe134
	if (!cr6.eq) goto loc_82CBE134;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82cbe054
	if (cr6.eq) goto loc_82CBE054;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbe134
	if (!cr6.eq) goto loc_82CBE134;
loc_82CBE054:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832b256c
	__imp__XamGetPrivateEnumStructureFromHandle(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cbe138
	if (!cr0.eq) goto loc_82CBE138;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cbe130
	if (!cr6.eq) goto loc_82CBE130;
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// li r29,0
	r29.s64 = 0;
	// li r10,312
	ctx.r10.s64 = 312;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r9,-8440
	ctx.r3.s64 = ctx.r9.s64 + -8440;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// bl 0x82cbdd90
	sub_82CBDD90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82cbe0f8
	if (cr0.lt) goto loc_82CBE0F8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82cbe0e4
	if (cr6.eq) goto loc_82CBE0E4;
	// li r3,997
	ctx.r3.s64 = 997;
loc_82CBE0D8:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	r31.u64 = r11.u64 | 2147942400;
	// b 0x82cbe100
	goto loc_82CBE100;
loc_82CBE0E4:
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82cbe0d8
	if (cr0.gt) goto loc_82CBE0D8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82cbe100
	goto loc_82CBE100;
loc_82CBE0F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b271c
	__imp__ObDereferenceObject(ctx, base);
loc_82CBE100:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82cbe110
	if (cr6.lt) goto loc_82CBE110;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82cbe138
	goto loc_82CBE138;
loc_82CBE110:
	// rlwinm r11,r31,0,3,15
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cbe128
	if (!cr6.eq) goto loc_82CBE128;
	// clrlwi r3,r31,16
	ctx.r3.u64 = r31.u32 & 0xFFFF;
	// b 0x82cbe138
	goto loc_82CBE138;
loc_82CBE128:
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82cbe138
	goto loc_82CBE138;
loc_82CBE130:
	// bl 0x832b271c
	__imp__ObDereferenceObject(ctx, base);
loc_82CBE134:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82CBE138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBE018) {
	__imp__sub_82CBE018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r9,r5,25,7,31
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82cbe178
	if (!cr6.eq) goto loc_82CBE178;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cbe234
	if (cr6.eq) goto loc_82CBE234;
loc_82CBE164:
	// dcbzl r0,r11
	memset(base + ((r11.u32) & ~127), 0, 128);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bne 0x82cbe164
	if (!cr0.eq) goto loc_82CBE164;
	// b 0x82ca2c38
	return;
loc_82CBE178:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt cr6,0x82cbe188
	if (cr6.lt) goto loc_82CBE188;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CBE188:
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// vspltisb v0,4
	simd::store_i8(ctx.v0.u8, simd::set1_i8(int8_t(0x4)));
	// lvsl v13,r0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shift_table_entry(ctx.v13.u8, VectorShiftTableL, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lvsl v12,r0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shift_table_entry(ctx.v12.u8, VectorShiftTableL, temp.u32);
	// vslb v11,v12,v0
	simd::store_shifted_i8(ctx.v11, ctx.v12, ctx.v0);
	// vor v10,v13,v11
	simd::store_i8(ctx.v10.u8, simd::or_i8(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v11.u8)));
	// vspltb v0,v10,0
	simd::store_i8(ctx.v0.u8, simd::splat_byte(simd::load_i8(ctx.v10.u8), 0xF));
	// beq cr6,0x82cbe1c4
	if (cr6.eq) goto loc_82CBE1C4;
loc_82CBE1B0:
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r3
	memset(base + ((ctx.r8.u32 + ctx.r3.u32) & ~127), 0, 128);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cbe1b0
	if (cr6.lt) goto loc_82CBE1B0;
loc_82CBE1C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cbe234
	if (cr6.eq) goto loc_82CBE234;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
loc_82CBE1F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cbe208
	if (!cr6.lt) goto loc_82CBE208;
	// addi r29,r11,-32
	r29.s64 = r11.s64 + -32;
	// li r28,128
	r28.s64 = 128;
	// dcbzl r28,r29
	memset(base + ((r28.u32 + r29.u32) & ~127), 0, 128);
loc_82CBE208:
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stvx128 v0,r11,r30
	ea = (r11.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r31
	ea = (r11.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// blt cr6,0x82cbe1f0
	if (cr6.lt) goto loc_82CBE1F0;
loc_82CBE234:
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBE140) {
	__imp__sub_82CBE140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE238) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r10,76
	r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(76) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cbe3d4
	if (!cr6.eq) goto loc_82CBE3D4;
	// lwz r11,72(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(72) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82cbe2e0
	if (cr6.eq) goto loc_82CBE2E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cbe2e0
	if (cr6.eq) goto loc_82CBE2E0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbe310
	if (cr0.lt) goto loc_82CBE310;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// b 0x82cbe3a0
	goto loc_82CBE3A0;
loc_82CBE2E0:
	// lis r11,16
	r11.s64 = 1048576;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbe318
	if (!cr0.lt) goto loc_82CBE318;
loc_82CBE310:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbe3e0
	goto loc_82CBE3E0;
loc_82CBE318:
	// lis r11,1
	r11.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbe360
	if (!cr0.lt) goto loc_82CBE360;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82cbe310
	goto loc_82CBE310;
loc_82CBE360:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82CBE3A0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,76
	ctx.r10.s64 = ctx.r8.s64 + 76;
	// b 0x82cbe3c0
	goto loc_82CBE3C0;
loc_82CBE3B4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82CBE3C0:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cbe3b4
	if (cr6.lt) goto loc_82CBE3B4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
loc_82CBE3D4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CBE3E0:
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

PPC_WEAK_FUNC(sub_82CBE238) {
	__imp__sub_82CBE238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE3F8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbe49c
	if (cr6.eq) goto loc_82CBE49C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82CBE424:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bgt cr6,0x82cbe4e4
	if (cr6.gt) goto loc_82CBE4E4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// bne cr6,0x82cbe48c
	if (!cr6.eq) goto loc_82CBE48C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(76) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// ble cr6,0x82cbe490
	if (!cr6.gt) goto loc_82CBE490;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x82cbe490
	goto loc_82CBE490;
loc_82CBE48C:
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82CBE490:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbe424
	if (!cr6.eq) goto loc_82CBE424;
loc_82CBE49C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cbe238
	sub_82CBE238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cbe4dc
	if (cr0.eq) goto loc_82CBE4DC;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// blt cr6,0x82cbe4dc
	if (cr6.lt) goto loc_82CBE4DC;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_82CBE4DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82CBE4E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r9,r29,r30
	ctx.r9.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cbe49c
	if (!cr6.eq) goto loc_82CBE49C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82cbe4dc
	if (!cr6.gt) goto loc_82CBE4DC;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// b 0x82cbe4dc
	goto loc_82CBE4DC;
}

PPC_WEAK_FUNC(sub_82CBE3F8) {
	__imp__sub_82CBE3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r30,56
	r25.s64 = r30.s64 + 56;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// lwz r31,56(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cbe580
	if (cr6.eq) goto loc_82CBE580;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
loc_82CBE54C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cbe56c
	if (cr6.lt) goto loc_82CBE56C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cbe58c
	if (cr6.eq) goto loc_82CBE58C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x82cbe58c
	if (cr6.eq) goto loc_82CBE58C;
loc_82CBE56C:
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cbe54c
	if (!cr6.eq) goto loc_82CBE54C;
loc_82CBE580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBE584:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82CBE58C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,1412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1412) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82cbe5b4
	if (cr6.eq) goto loc_82CBE5B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cbe5d0
	goto loc_82CBE5D0;
loc_82CBE5B4:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_82CBE5D0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cbe580
	if (cr6.lt) goto loc_82CBE580;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82cbe5fc
	if (!cr6.eq) goto loc_82CBE5FC;
	// stw r26,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r26.u32);
loc_82CBE5FC:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbe62c
	if (cr0.eq) goto loc_82CBE62C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rotlwi r10,r10,4
	ctx.r10.u64 = rotl32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cbe698
	if (cr6.eq) goto loc_82CBE698;
loc_82CBE62C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82cbe63c
	if (!cr6.eq) goto loc_82CBE63C;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// b 0x82cbe648
	goto loc_82CBE648;
loc_82CBE63C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82CBE648:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cbe698
	if (!cr0.eq) goto loc_82CBE698;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
loc_82CBE658:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = rotl32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cbe68c
	if (!cr6.lt) goto loc_82CBE68C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cbe68c
	if (cr0.eq) goto loc_82CBE68C;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbe658
	if (cr0.eq) goto loc_82CBE658;
	// b 0x82cbe698
	goto loc_82CBE698;
loc_82CBE68C:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cbe580
	if (!cr6.eq) goto loc_82CBE580;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82CBE698:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x82cbe728
	if (!cr0.eq) goto loc_82CBE728;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cbe6e8
	if (!cr6.eq) goto loc_82CBE6E8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// b 0x82cbe6f4
	goto loc_82CBE6F4;
loc_82CBE6E8:
	// stb r26,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_82CBE6F4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(76) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r31,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r31.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x82cbe734
	goto loc_82CBE734;
loc_82CBE728:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
loc_82CBE734:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// bne 0x82cbe76c
	if (!cr0.eq) goto loc_82CBE76C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	r11.u64 = rotl32(ctx.r10.u32, 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
loc_82CBE76C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbe584
	if (!cr6.eq) goto loc_82CBE584;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// b 0x82cbe798
	goto loc_82CBE798;
loc_82CBE780:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cbe794
	if (cr6.lt) goto loc_82CBE794;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_82CBE794:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CBE798:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbe780
	if (!cr6.eq) goto loc_82CBE780;
	// b 0x82cbe584
	goto loc_82CBE584;
}

PPC_WEAK_FUNC(sub_82CBE518) {
	__imp__sub_82CBE518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE7A8) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cbe7ec
	if (!cr0.eq) goto loc_82CBE7EC;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82cbe7f0
	goto loc_82CBE7F0;
loc_82CBE7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBE7F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBE7A8) {
	__imp__sub_82CBE7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2be8
	// lbz r31,4(r4)
	r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// b 0x82cbe91c
	goto loc_82CBE91C;
loc_82CBE834:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// ble cr6,0x82cbe858
	if (!cr6.gt) goto loc_82CBE858;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	cr6.compare<uint32_t>(ctx.r5.u32, 61441, xer);
	// bne cr6,0x82cbe84c
	if (!cr6.eq) goto loc_82CBE84C;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_82CBE84C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// b 0x82cbe860
	goto loc_82CBE860;
loc_82CBE858:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r29.u8);
loc_82CBE860:
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r31.u8);
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// bge cr6,0x82cbe8c4
	if (!cr6.lt) goto loc_82CBE8C4;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82cbe8e8
	if (!cr6.eq) goto loc_82CBE8E8;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x82cbe8e8
	goto loc_82CBE8E8;
loc_82CBE8C4:
	// lwz r11,384(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(384) );
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// b 0x82cbe8e0
	goto loc_82CBE8E0;
loc_82CBE8D0:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82cbe8e8
	if (!cr6.gt) goto loc_82CBE8E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CBE8E0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82cbe8d0
	if (!cr6.eq) goto loc_82CBE8D0;
loc_82CBE8E8:
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r28,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82cbe930
	if (!cr6.lt) goto loc_82CBE930;
loc_82CBE91C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cbe834
	if (!cr6.eq) goto loc_82CBE834;
	// rlwinm. r11,r29,0,27,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cbe930
	if (!cr0.eq) goto loc_82CBE930;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_82CBE930:
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBE800) {
	__imp__sub_82CBE800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBE938) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cbea38
	if (cr6.eq) goto loc_82CBEA38;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// rlwinm. r11,r11,0,13,13
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbe984
	if (cr0.eq) goto loc_82CBE984;
	// bl 0x832b225c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82cbe984
	if (cr6.eq) goto loc_82CBE984;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// li r6,1278
	ctx.r6.s64 = 1278;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x832b297c
	__imp__KeBugCheckEx(ctx, base);
loc_82CBE984:
	// lwz r31,88(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(88) );
	// addi r30,r29,88
	r30.s64 = r29.s64 + 88;
	// li r28,0
	r28.s64 = 0;
	// b 0x82cbe9b8
	goto loc_82CBE9B8;
loc_82CBE994:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82CBE9B8:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bne cr6,0x82cbe994
	if (!cr6.eq) goto loc_82CBE994;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cbe9d0
	if (!cr0.eq) goto loc_82CBE9D0;
	// stw r28,1408(r29)
	PPC_STORE_U32(r29.u32 + 1408, r28.u32);
loc_82CBE9D0:
	// lwz r31,72(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// stw r28,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r28.u32);
	// b 0x82cbea00
	goto loc_82CBEA00;
loc_82CBE9DC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82CBEA00:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cbe9dc
	if (!cr6.eq) goto loc_82CBE9DC;
	// li r31,64
	r31.s64 = 64;
loc_82CBEA0C:
	// addi r11,r31,255
	r11.s64 = r31.s64 + 255;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// mr r31,r11
	r31.u64 = r11.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbea30
	if (cr6.eq) goto loc_82CBEA30;
	// bl 0x82cbe7a8
	sub_82CBE7A8(ctx, base);
loc_82CBEA30:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cbea0c
	if (!cr6.eq) goto loc_82CBEA0C;
loc_82CBEA38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CBE938) {
	__imp__sub_82CBE938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBEA48) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82cbea7c
	if (!cr6.gt) goto loc_82CBEA7C;
loc_82CBEA74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbefc0
	goto loc_82CBEFC0;
loc_82CBEA7C:
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// lbz r9,5(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rotlwi r10,r11,4
	ctx.r10.u64 = rotl32(r11.u32, 4);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// add r31,r10,r27
	r31.u64 = ctx.r10.u64 + r27.u64;
	// beq 0x82cbeb34
	if (cr0.eq) goto loc_82CBEB34;
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82cbe518
	sub_82CBE518(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82cbea74
	if (cr0.eq) goto loc_82CBEA74;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82239058
	sub_82239058(ctx, base);
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// lbz r28,5(r4)
	r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// bge cr6,0x82cbec04
	if (!cr6.lt) goto loc_82CBEC04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cbe800
	sub_82CBE800(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x82cbefc0
	goto loc_82CBEFC0;
loc_82CBEB34:
	// lbz r28,5(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cbea74
	if (!cr0.eq) goto loc_82CBEA74;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82cbea74
	if (cr6.lt) goto loc_82CBEA74;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cbebb4
	if (!cr6.eq) goto loc_82CBEBB4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cbebb4
	if (!cr6.eq) goto loc_82CBEBB4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82cbebb4
	if (!cr6.eq) goto loc_82CBEBB4;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82cbebb4
	if (!cr6.lt) goto loc_82CBEBB4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82CBEBB4:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbebf0
	if (cr0.eq) goto loc_82CBEBF0;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = rotl32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82cbebe0
	if (cr0.eq) goto loc_82CBEBE0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82cbebe0
	if (!cr6.gt) goto loc_82CBEBE0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82CBEBE0:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x832b298c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82CBEBF0:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_82CBEC04:
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lbz r9,6(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = rotl32(ctx.r10.u32, 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// subf r24,r9,r10
	r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bgt cr6,0x82cbec30
	if (cr6.gt) goto loc_82CBEC30;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82CBEC30:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = rotl64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbec68
	if (cr0.eq) goto loc_82CBEC68;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// rlwinm r11,r29,4,0,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = rotl32(ctx.r10.u32, 4);
	// add r9,r11,r27
	ctx.r9.u64 = r11.u64 + r27.u64;
	// add r11,r10,r27
	r11.u64 = ctx.r10.u64 + r27.u64;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// ld r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r10,-16(r9)
	PPC_STORE_U64(ctx.r9.u32 + -16, ctx.r10.u64);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,-8(r9)
	PPC_STORE_U64(ctx.r9.u32 + -8, r11.u64);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CBEC68:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbecc0
	if (!cr6.eq) goto loc_82CBECC0;
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r11,r10
	ctx.r8.u64 = r11.u64 | ctx.r10.u64;
	// subf r9,r23,r9
	ctx.r9.s64 = ctx.r9.s64 - r23.s64;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// stb r8,5(r27)
	PPC_STORE_U8(r27.u32 + 5, ctx.r8.u8);
	// stb r9,6(r27)
	PPC_STORE_U8(r27.u32 + 6, ctx.r9.u8);
	// sth r11,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r11.u16);
	// bne 0x82cbeca8
	if (!cr0.eq) goto loc_82CBECA8;
	// rlwinm r10,r11,4,12,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x82cbef8c
	goto loc_82CBEF8C;
loc_82CBECA8:
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r27,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r27.u32);
	// b 0x82cbef8c
	goto loc_82CBEF8C;
loc_82CBECC0:
	// rlwinm r11,r29,4,0,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// subf r10,r23,r11
	ctx.r10.s64 = r11.s64 - r23.s64;
	// sth r9,0(r27)
	PPC_STORE_U16(r27.u32 + 0, ctx.r9.u16);
	// rlwinm. r8,r28,0,27,27
	ctx.r8.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r10,6(r27)
	PPC_STORE_U8(r27.u32 + 6, ctx.r10.u8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// sth r9,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// beq 0x82cbed50
	if (cr0.eq) goto loc_82CBED50;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x82cbeda4
	if (cr6.lt) goto loc_82CBEDA4;
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(384) );
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x82cbed44
	goto loc_82CBED44;
loc_82CBED34:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82cbef54
	if (!cr6.gt) goto loc_82CBEF54;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CBED44:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82cbed34
	if (!cr6.eq) goto loc_82CBED34;
	// b 0x82cbef54
	goto loc_82CBEF54;
loc_82CBED50:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lbz r28,5(r29)
	r28.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbedd4
	if (cr0.eq) goto loc_82CBEDD4;
	// andi. r11,r10,239
	r11.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x82cbedac
	if (!cr6.lt) goto loc_82CBEDAC;
loc_82CBEDA4:
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x82cbeef4
	goto loc_82CBEEF4;
loc_82CBEDAC:
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(384) );
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x82cbedc8
	goto loc_82CBEDC8;
loc_82CBEDB8:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82cbef54
	if (!cr6.gt) goto loc_82CBEF54;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CBEDC8:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82cbedb8
	if (!cr6.eq) goto loc_82CBEDB8;
	// b 0x82cbef54
	goto loc_82CBEF54;
loc_82CBEDD4:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r9,r29,8
	ctx.r9.s64 = r29.s64 + 8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cbee34
	if (!cr6.eq) goto loc_82CBEE34;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cbee34
	if (!cr6.eq) goto loc_82CBEE34;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82cbee34
	if (!cr6.eq) goto loc_82CBEE34;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82cbee34
	if (!cr6.lt) goto loc_82CBEE34;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82CBEE34:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbee70
	if (cr0.eq) goto loc_82CBEE70;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = rotl32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82cbee60
	if (cr0.eq) goto loc_82CBEE60;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82cbee60
	if (!cr6.gt) goto loc_82CBEE60;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82CBEE60:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x832b298c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82CBEE70:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82cbef80
	if (cr6.gt) goto loc_82CBEF80;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r5,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r5.u16);
	// bne 0x82cbeec0
	if (!cr0.eq) goto loc_82CBEEC0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x82cbeed4
	goto loc_82CBEED4;
loc_82CBEEC0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_82CBEED4:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x82cbef30
	if (!cr6.lt) goto loc_82CBEF30;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_82CBEEF4:
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cbef54
	if (!cr6.eq) goto loc_82CBEF54;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x82cbef54
	goto loc_82CBEF54;
loc_82CBEF30:
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(384) );
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// b 0x82cbef4c
	goto loc_82CBEF4C;
loc_82CBEF3C:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82cbef54
	if (!cr6.gt) goto loc_82CBEF54;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CBEF4C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cbef3c
	if (!cr6.eq) goto loc_82CBEF3C;
loc_82CBEF54:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x82cbef8c
	goto loc_82CBEF8C;
loc_82CBEF80:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cbe800
	sub_82CBE800(ctx, base);
loc_82CBEF8C:
	// rlwinm. r11,r22,0,28,28
	r11.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbefb0
	if (cr0.eq) goto loc_82CBEFB0;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(r23.u32, r24.u32, xer);
	// ble cr6,0x82cbefb0
	if (!cr6.gt) goto loc_82CBEFB0;
	// add r11,r24,r27
	r11.u64 = r24.u64 + r27.u64;
	// subf r5,r24,r23
	ctx.r5.s64 = r23.s64 - r24.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CBEFB0:
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	r11.u64 = (rotl32(r22.u32, 28) & 0xE0) | (r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	PPC_STORE_U8(r27.u32 + 5, r11.u8);
loc_82CBEFC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82CBEA48) {
	__imp__sub_82CBEA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBEFC8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subf r10,r29,r27
	ctx.r10.s64 = r27.s64 - r29.s64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r31,87
	r11.s64 = r31.s64 + 87;
	// srawi r10,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// rlwinm r30,r11,0,0,27
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r26.s64 = temp.s64;
	// bne cr6,0x82cbf014
	if (!cr6.eq) goto loc_82CBF014;
	// lhz r22,0(r28)
	r22.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// b 0x82cbf018
	goto loc_82CBF018;
loc_82CBF014:
	// li r22,0
	r22.s64 = 0;
loc_82CBF018:
	// subf r10,r31,r30
	ctx.r10.s64 = r30.s64 - r31.s64;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// clrlwi r24,r10,16
	r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x82cbf080
	if (cr6.lt) goto loc_82CBF080;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x82cbf040
	if (cr6.lt) goto loc_82CBF040;
loc_82CBF038:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbf128
	goto loc_82CBF128;
loc_82CBF040:
	// subf r11,r8,r30
	r11.s64 = r30.s64 - ctx.r8.s64;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbf038
	if (cr0.lt) goto loc_82CBF038;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_82CBF080:
	// subf r11,r8,r27
	r11.s64 = r27.s64 - ctx.r8.s64;
	// sth r22,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = rotl64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r24.u16);
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// stb r25,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
	// addze. r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stb r7,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x82cbf0e8
	if (cr0.eq) goto loc_82CBF0E8;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cbe3f8
	sub_82CBE3F8(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
loc_82CBF0E8:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.s64 = ctx.r8.s64 - r30.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r31,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, r31.u32);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stb r25,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r25.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// bl 0x82cbe800
	sub_82CBE800(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CBF128:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82CBEFC8) {
	__imp__sub_82CBEFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBF130) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addis r11,r28,1
	r11.s64 = r28.s64 + 65536;
	// li r27,64
	r27.s64 = 64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r29,r11,16,16,31
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82CBF164:
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82cbf1e8
	if (cr6.eq) goto loc_82CBF1E8;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(48) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82cbf1f8
	if (cr6.gt) goto loc_82CBF1F8;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(28) );
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82cbf1f8
	if (cr6.gt) goto loc_82CBF1F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cbe518
	sub_82CBE518(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82cbf1f8
	if (cr0.eq) goto loc_82CBF1F8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82239058
	sub_82239058(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cbe800
	sub_82CBE800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82cbf364
	goto loc_82CBF364;
loc_82CBF1E8:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x82cbf1f8
	if (!cr6.eq) goto loc_82CBF1F8;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82CBF1F8:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x82cbf164
	if (cr6.lt) goto loc_82CBF164;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// beq cr6,0x82cbf360
	if (cr6.eq) goto loc_82CBF360;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbf360
	if (cr0.eq) goto loc_82CBF360;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addis r30,r28,1
	r30.s64 = r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82cbf244
	if (cr6.gt) goto loc_82CBF244;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82CBF244:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbf2b4
	if (!cr0.lt) goto loc_82CBF2B4;
loc_82CBF268:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82cbf2ac
	if (cr6.eq) goto loc_82CBF2AC;
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82cbf288
	if (!cr6.lt) goto loc_82CBF288;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_82CBF288:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbf268
	if (cr0.lt) goto loc_82CBF268;
loc_82CBF2AC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cbf360
	if (cr6.lt) goto loc_82CBF360;
loc_82CBF2B4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x82cbf2d8
	if (cr6.gt) goto loc_82CBF2D8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82CBF2D8:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82cbf348
	if (cr0.lt) goto loc_82CBF348;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r7
	ctx.r8.u64 = r11.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82cbefc8
	sub_82CBEFC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cbf334
	if (!cr0.eq) goto loc_82CBF334;
	// lis r30,-16384
	r30.s64 = -1073741824;
	// ori r30,r30,23
	r30.u64 = r30.u64 | 23;
loc_82CBF334:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82cbf348
	if (cr6.lt) goto loc_82CBF348;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// b 0x82cbf364
	goto loc_82CBF364;
loc_82CBF348:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82CBF360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBF364:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CBF130) {
	__imp__sub_82CBF130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBF370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,1412(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1412) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbf6b8
	if (!cr6.eq) goto loc_82CBF6B8;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r9
	ctx.r10.s64 = ctx.r9.s64 - r31.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	r23.u64 = r19.u64;
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r28
	r25.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bne cr6,0x82cbf3e4
	if (!cr6.eq) goto loc_82CBF3E4;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	r26.s64 = 4097;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82cbf400
	goto loc_82CBF400;
loc_82CBF3E4:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cbf400
	if (cr0.eq) goto loc_82CBF400;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// bne cr6,0x82cbf400
	if (!cr6.eq) goto loc_82CBF400;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	r23.s64 = r31.s64 - r11.s64;
loc_82CBF400:
	// rlwinm r11,r24,4,0,27
	r11.u64 = rotl64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	r20.u64 = r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// rlwinm r11,r10,0,0,15
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x82cbf434
	if (!cr6.eq) goto loc_82CBF434;
	// li r27,4097
	r27.s64 = 4097;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// b 0x82cbf44c
	goto loc_82CBF44C;
loc_82CBF434:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cbf44c
	if (!cr6.eq) goto loc_82CBF44C;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82cbf44c
	if (!cr0.eq) goto loc_82CBF44C;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
loc_82CBF44C:
	// rlwinm r22,r27,4,12,27
	r22.u64 = rotl64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// clrlwi r21,r27,16
	r21.u64 = r27.u32 & 0xFFFF;
	// subf r29,r22,r10
	r29.s64 = ctx.r10.s64 - r22.s64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// bgt cr6,0x82cbf468
	if (cr6.gt) goto loc_82CBF468;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82CBF468:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbf6b8
	if (cr6.eq) goto loc_82CBF6B8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82cbe238
	sub_82CBE238(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82cbf6b8
	if (cr0.eq) goto loc_82CBF6B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(24) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(24) );
	// stw r30,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r30.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r19.u32);
	// stw r19,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r19.u32);
	// blt 0x82cbf6b8
	if (cr0.lt) goto loc_82CBF6B8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82cbe3f8
	sub_82CBE3F8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(48) );
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	PPC_STORE_U32(r25.u32 + 48, ctx.r10.u32);
	// beq 0x82cbf5a0
	if (cr0.eq) goto loc_82CBF5A0;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r26.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x82cbf55c
	if (!cr6.lt) goto loc_82CBF55C;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cbf584
	if (!cr6.eq) goto loc_82CBF584;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x82cbf584
	goto loc_82CBF584;
loc_82CBF55C:
	// lwz r10,384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(384) );
	// addi r9,r28,384
	ctx.r9.s64 = r28.s64 + 384;
	// b 0x82cbf578
	goto loc_82CBF578;
loc_82CBF568:
	// lhz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x82cbf580
	if (!cr6.gt) goto loc_82CBF580;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
loc_82CBF578:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cbf568
	if (!cr6.eq) goto loc_82CBF568;
loc_82CBF580:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82CBF584:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82cbf5e4
	goto loc_82CBF5E4;
loc_82CBF5A0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82cbf5bc
	if (cr6.eq) goto loc_82CBF5BC;
	// lbz r11,5(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r23)
	PPC_STORE_U8(r23.u32 + 5, r11.u8);
	// stw r23,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r23.u32);
	// b 0x82cbf5e4
	goto loc_82CBF5E4;
loc_82CBF5BC:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(64) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cbf5e4
	if (cr6.lt) goto loc_82CBF5E4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cbf5e4
	if (!cr6.lt) goto loc_82CBF5E4;
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(40) );
	// stw r11,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r11.u32);
loc_82CBF5E4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82cbf6a8
	if (cr6.eq) goto loc_82CBF6A8;
	// add r11,r22,r29
	r11.u64 = r22.u64 + r29.u64;
	// sth r19,2(r29)
	PPC_STORE_U16(r29.u32 + 2, r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r21,128
	cr6.compare<uint32_t>(r21.u32, 128, xer);
	// stb r19,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r19.u8);
	// stb r10,4(r29)
	PPC_STORE_U8(r29.u32 + 4, ctx.r10.u8);
	// sth r27,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r27.u16);
	// sth r27,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r27.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82cbf65c
	if (!cr6.lt) goto loc_82CBF65C;
	// addi r11,r21,48
	r11.s64 = r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cbf680
	if (!cr6.eq) goto loc_82CBF680;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x82cbf680
	goto loc_82CBF680;
loc_82CBF65C:
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(384) );
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// b 0x82cbf678
	goto loc_82CBF678;
loc_82CBF668:
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r21,r9
	cr6.compare<uint32_t>(r21.u32, ctx.r9.u32, xer);
	// ble cr6,0x82cbf680
	if (!cr6.gt) goto loc_82CBF680;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82CBF678:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cbf668
	if (!cr6.eq) goto loc_82CBF668;
loc_82CBF680:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// add r11,r21,r11
	r11.u64 = r21.u64 + r11.u64;
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// b 0x82cbf6c8
	goto loc_82CBF6C8;
loc_82CBF6A8:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82cbf6c8
	if (cr6.eq) goto loc_82CBF6C8;
	// sth r19,2(r20)
	PPC_STORE_U16(r20.u32 + 2, r19.u16);
	// b 0x82cbf6c8
	goto loc_82CBF6C8;
loc_82CBF6B8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cbe800
	sub_82CBE800(ctx, base);
loc_82CBF6C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82CBF370) {
	__imp__sub_82CBF370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBF6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r24.u32);
	// li r22,0
	r22.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r29.u32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r5.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r6.u32);
	// stw r21,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r21.u32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r11,6
	r11.s64 = 6;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82CBF724:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82cbf724
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CBF724;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cbf79c
	if (cr6.eq) goto loc_82CBF79C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x82cbf760
	if (!cr6.eq) goto loc_82CBF760;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
loc_82CBF760:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cbf788
	goto loc_82CBF788;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r21,324(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(324) );
	// li r22,0
	r22.s64 = 0;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
	// lwz r29,300(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(300) );
	// lwz r24,292(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + int32_t(292) );
loc_82CBF788:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82cbf798
	if (!cr6.lt) goto loc_82CBF798;
loc_82CBF790:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbfc64
	goto loc_82CBFC64;
loc_82CBF798:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(316) );
loc_82CBF79C:
	// lis r23,-31921
	r23.s64 = -2091974656;
	// lwz r11,29920(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(29920) );
	// rlwinm. r11,r11,0,10,10
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbf7b0
	if (cr0.eq) goto loc_82CBF7B0;
	// ori r24,r24,128
	r24.u64 = r24.u64 | 128;
loc_82CBF7B0:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbf7c8
	if (!cr6.eq) goto loc_82CBF7C8;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-388) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82CBF7C8:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbf7e0
	if (!cr6.eq) goto loc_82CBF7E0;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-384) );
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_82CBF7E0:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbf7f8
	if (!cr6.eq) goto loc_82CBF7F8;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-376) );
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_82CBF7F8:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbf810
	if (!cr6.eq) goto loc_82CBF810;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-380) );
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_82CBF810:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbf828
	if (!cr6.eq) goto loc_82CBF828;
	// lis r11,32764
	r11.s64 = 2147221504;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_82CBF828:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbf840
	if (cr6.eq) goto loc_82CBF840;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cbf848
	if (!cr6.gt) goto loc_82CBF848;
loc_82CBF840:
	// lis r11,15
	r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
loc_82CBF848:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x82cbf8a0
	if (!cr6.eq) goto loc_82CBF8A0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// bne cr6,0x82cbf870
	if (!cr6.eq) goto loc_82CBF870;
	// lis r11,64
	r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r10,65535
	r27.u64 = ctx.r10.u64 | 65535;
	// b 0x82cbf880
	goto loc_82CBF880;
loc_82CBF870:
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
loc_82CBF878:
	// add r11,r5,r27
	r11.u64 = ctx.r5.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
loc_82CBF880:
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r25,1424
	r25.s64 = 1424;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne 0x82cbf8d8
	if (!cr0.eq) goto loc_82CBF8D8;
	// beq cr6,0x82cbf8cc
	if (cr6.eq) goto loc_82CBF8CC;
	// oris r24,r24,32768
	r24.u64 = r24.u64 | 2147483648;
	// b 0x82cbf8dc
	goto loc_82CBF8DC;
loc_82CBF8A0:
	// lis r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
	// add r11,r6,r27
	r11.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// bne cr6,0x82cbf878
	if (!cr6.eq) goto loc_82CBF878;
	// addis r11,r11,16
	r11.s64 = r11.s64 + 1048576;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82cbf880
	goto loc_82CBF880;
loc_82CBF8CC:
	// li r25,1452
	r25.s64 = 1452;
	// li r21,-1
	r21.s64 = -1;
	// b 0x82cbf8dc
	goto loc_82CBF8DC;
loc_82CBF8D8:
	// bne cr6,0x82cbf790
	if (!cr6.eq) goto loc_82CBF790;
loc_82CBF8DC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// beq cr6,0x82cbf9e4
	if (cr6.eq) goto loc_82CBF9E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbf938
	if (cr6.eq) goto loc_82CBF938;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cbf790
	if (cr6.eq) goto loc_82CBF790;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(160) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cbf790
	if (cr6.eq) goto loc_82CBF790;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82cbf790
	if (cr6.gt) goto loc_82CBF790;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = rotl64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82cbf790
	if (!cr0.eq) goto loc_82CBF790;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r28,r10,r29
	r28.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// b 0x82cbf9d4
	goto loc_82CBF9D4;
loc_82CBF938:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832b26fc
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbf790
	if (cr0.lt) goto loc_82CBF790;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82cbf790
	if (!cr6.eq) goto loc_82CBF790;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82cbf790
	if (cr6.eq) goto loc_82CBF790;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x82cbf9cc
	if (!cr6.eq) goto loc_82CBF9CC;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x832b26fc
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(316) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// blt 0x82cbf9d4
	if (cr0.lt) goto loc_82CBF9D4;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x82cbf9d4
	if (!cr6.eq) goto loc_82CBF9D4;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// b 0x82cbf9d4
	goto loc_82CBF9D4;
loc_82CBF9CC:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
loc_82CBF9D4:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x82cbfa30
	goto loc_82CBFA30;
loc_82CBF9E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbf790
	if (!cr6.eq) goto loc_82CBF790;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cbf790
	if (cr0.lt) goto loc_82CBF790;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(316) );
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbfa24
	if (!cr6.eq) goto loc_82CBFA24;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
loc_82CBFA24:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82CBFA30:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82cbfa90
	if (!cr6.eq) goto loc_82CBFA90;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cbfa84
	if (!cr0.lt) goto loc_82CBFA84;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82cbf790
	if (!cr6.eq) goto loc_82CBF790;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82cbf790
	goto loc_82CBF790;
loc_82CBFA84:
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(316) );
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
loc_82CBFA90:
	// addi r11,r10,1431
	r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r25,128
	ctx.r9.s64 = r25.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_82CBFAA4:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82cbfaa4
	if (!cr0.eq) goto loc_82CBFAA4;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r22.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,29920(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + int32_t(29920) );
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbfaec
	if (cr0.eq) goto loc_82CBFAEC;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r11,380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(380) );
	// addi r29,r11,1548
	r29.s64 = r11.s64 + 1548;
loc_82CBFAEC:
	// addi r11,r9,15
	r11.s64 = ctx.r9.s64 + 15;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r11,0,0,27
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r11,1
	r11.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = rotl64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	r12.s64 = 1610678272;
	// ori r12,r12,125
	r12.u64 = r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = r24.u64 & r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r24,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r24.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// sth r27,368(r11)
	PPC_STORE_U16(r11.u32 + 368, r27.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r22,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r22.u32);
	// bl 0x832b225c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,379(r11)
	PPC_STORE_U8(r11.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,384
	r11.s64 = r11.s64 + 384;
loc_82CBFB6C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82cbfb6c
	if (!cr0.eq) goto loc_82CBFB6C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, r11.u32);
	// bne cr6,0x82cbfba4
	if (!cr6.eq) goto loc_82CBFBA4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r21,r29
	r21.u64 = r29.u64;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_82CBFBA4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, r21.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(308) );
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// bl 0x82cbefc8
	sub_82CBEFC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cbf790
	if (cr0.eq) goto loc_82CBF790;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// rlwinm. r10,r24,0,15,15
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r22,56(r11)
	PPC_STORE_U16(r11.u32 + 56, r22.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// stw r10,1412(r11)
	PPC_STORE_U32(r11.u32 + 1412, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r9,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CBFC64:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82CBF6D8) {
	__imp__sub_82CBF6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBFC6C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CBFC6C) {
	__imp__sub_82CBFC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CBFC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r27.u32);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// li r19,0
	r19.s64 = 0;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r26.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// beq 0x82cbfcf0
	if (cr0.eq) goto loc_82CBFCF0;
	// bl 0x832b225c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82cbfcf0
	if (cr6.eq) goto loc_82CBFCF0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,3162
	ctx.r6.s64 = 3162;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(312) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x832b297c
	__imp__KeBugCheckEx(ctx, base);
loc_82CBFCF0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82cbfd00
	if (!cr6.eq) goto loc_82CBFD00;
loc_82CBFCF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc04c0
	goto loc_82CC04C0;
loc_82CBFD00:
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// or r23,r10,r30
	r23.u64 = ctx.r10.u64 | r30.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bgt cr6,0x82cbfcf8
	if (cr6.gt) goto loc_82CBFCF8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r22,1
	r22.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x82cbfd2c
	if (!cr6.eq) goto loc_82CBFD2C;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82CBFD2C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(80) );
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(84) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r24,r11,r8
	r24.u64 = r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// bne 0x82cbfd64
	if (!cr0.eq) goto loc_82CBFD64;
	// lwz r11,380(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(380) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cbfd64
	if (!cr6.eq) goto loc_82CBFD64;
	// lbz r11,-11(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbfd6c
	if (cr0.eq) goto loc_82CBFD6C;
loc_82CBFD64:
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_82CBFD6C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cbfd90
	if (!cr0.eq) goto loc_82CBFD90;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(1408) );
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	r23.u64 = r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_82CBFD90:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	r30.s64 = r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cc0494
	if (cr0.eq) goto loc_82CC0494;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// beq 0x82cbfdf8
	if (cr0.eq) goto loc_82CBFDF8;
	// addi r9,r24,32
	ctx.r9.s64 = r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-8) );
	// addi r10,r30,-32
	ctx.r10.s64 = r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	r24.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x82cbfe08
	goto loc_82CBFE08;
loc_82CBFDF8:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = rotl32(r11.u32, 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf r25,r10,r9
	r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82CBFE08:
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// rlwinm r28,r24,28,4,31
	r28.u64 = rotl64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bgt cr6,0x82cc0264
	if (cr6.gt) goto loc_82CC0264;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x82cbfe38
	if (!cr6.eq) goto loc_82CBFE38;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_82CBFE38:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cbfe54
	if (cr6.eq) goto loc_82CBFE54;
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x82cbfe94
	goto loc_82CBFE94;
loc_82CBFE54:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbfe8c
	if (cr0.eq) goto loc_82CBFE8C;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// add r11,r9,r30
	r11.u64 = ctx.r9.u64 + r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = r24.s64 - r26.s64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// b 0x82cbfe94
	goto loc_82CBFE94;
loc_82CBFE8C:
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_82CBFE94:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x82cbfeb4
	if (!cr6.gt) goto loc_82CBFEB4;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cbfeb4
	if (cr0.eq) goto loc_82CBFEB4;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CBFEB4:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82cc0460
	if (cr6.eq) goto loc_82CC0460;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbff18
	if (cr0.eq) goto loc_82CBFF18;
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0460
	if (cr0.lt) goto loc_82CC0460;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x82cc0460
	goto loc_82CC0460;
loc_82CBFF18:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// add r29,r10,r30
	r29.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// subf r28,r28,r11
	r28.s64 = r11.s64 - r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x82cbffcc
	if (cr0.eq) goto loc_82CBFFCC;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82cbff94
	if (!cr6.lt) goto loc_82CBFF94;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x82cc0008
	goto loc_82CC0008;
loc_82CBFF94:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(384) );
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
loc_82CBFFA0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82cc0040
	if (cr6.eq) goto loc_82CC0040;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82cc0040
	if (!cr6.gt) goto loc_82CC0040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cbffa0
	goto loc_82CBFFA0;
loc_82CBFFCC:
	// rlwinm r11,r28,4,0,27
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cc009c
	if (cr0.eq) goto loc_82CC009C;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82cc0064
	if (!cr6.lt) goto loc_82CC0064;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_82CC0008:
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cc0040
	if (!cr6.eq) goto loc_82CC0040;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
loc_82CC0040:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(48) );
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// b 0x82cc024c
	goto loc_82CC024C;
loc_82CC0064:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(384) );
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_82CC0070:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82cc0040
	if (cr6.eq) goto loc_82CC0040;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82cc0040
	if (!cr6.gt) goto loc_82CC0040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cc0070
	goto loc_82CC0070;
loc_82CC009C:
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cc0100
	if (!cr6.eq) goto loc_82CC0100;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc0100
	if (!cr6.eq) goto loc_82CC0100;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82cc0100
	if (!cr6.eq) goto loc_82CC0100;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82cc0100
	if (!cr6.lt) goto loc_82CC0100;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
loc_82CC0100:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cc0144
	if (cr0.eq) goto loc_82CC0144;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = rotl32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// beq 0x82cc0134
	if (cr0.eq) goto loc_82CC0134;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82cc0134
	if (!cr6.gt) goto loc_82CC0134;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
loc_82CC0134:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x832b298c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82CC0144:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(48) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82cc0254
	if (cr6.gt) goto loc_82CC0254;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cc0188
	if (!cr0.eq) goto loc_82CC0188;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x82cc019c
	goto loc_82CC019C;
loc_82CC0188:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r29.u32);
loc_82CC019C:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82cc01f4
	if (!cr6.lt) goto loc_82CC01F4;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cc022c
	if (!cr6.eq) goto loc_82CC022C;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// b 0x82cc022c
	goto loc_82CC022C;
loc_82CC01F4:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(384) );
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_82CC0200:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82cc022c
	if (cr6.eq) goto loc_82CC022C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82cc022c
	if (!cr6.gt) goto loc_82CC022C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cc0200
	goto loc_82CC0200;
loc_82CC022C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(48) );
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
loc_82CC024C:
	// stw r11,48(r21)
	PPC_STORE_U32(r21.u32 + 48, r11.u32);
	// b 0x82cc0460
	goto loc_82CC0460;
loc_82CC0254:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cbe800
	sub_82CBE800(ctx, base);
	// b 0x82cc0460
	goto loc_82CC0460;
loc_82CC0264:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82cc028c
	if (!cr6.eq) goto loc_82CC028C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cbea48
	sub_82CBEA48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cc0460
	if (!cr0.eq) goto loc_82CC0460;
loc_82CC028C:
	// rlwinm. r11,r23,0,27,27
	r11.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cc029c
	if (cr0.eq) goto loc_82CC029C;
	// stw r19,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r19.u32);
	// b 0x82cc0468
	goto loc_82CC0468;
loc_82CC029C:
	// rlwinm r23,r23,0,14,1
	r23.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cc0364
	if (cr0.eq) goto loc_82CC0364;
	// rlwinm r11,r23,0,23,19
	r11.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r23,r10,r11
	r23.u64 = ctx.r10.u64 | r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// beq 0x82cc02e0
	if (cr0.eq) goto loc_82CC02E0;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x82cc02f0
	goto loc_82CC02F0;
loc_82CC02E0:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = rotl32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_82CC02F0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cc031c
	if (cr0.eq) goto loc_82CC031C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cc031c
	if (!cr0.eq) goto loc_82CC031C;
	// rlwinm r11,r11,18,0,13
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_82CC031C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cc037c
	goto loc_82CC037C;
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// andi. r11,r11,253
	r11.u64 = r11.u64 & 253;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// li r19,0
	r19.s64 = 0;
	// lwz r26,364(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(364) );
	// li r22,1
	r22.s64 = 1;
	// lwz r20,356(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + int32_t(356) );
	// lwz r23,348(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + int32_t(348) );
	// lwz r27,340(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(340) );
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r24,80(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r25,92(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// b 0x82cc037c
	goto loc_82CC037C;
loc_82CC0364:
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cc037c
	if (cr0.eq) goto loc_82CC037C;
	// rlwinm r11,r11,18,0,13
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_82CC037C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82238790
	sub_82238790(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82cc0458
	if (cr0.eq) goto loc_82CC0458;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + -11);
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cc040c
	if (cr0.eq) goto loc_82CC040C;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cc03b8
	if (cr0.eq) goto loc_82CC03B8;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// b 0x82cc03c8
	goto loc_82CC03C8;
loc_82CC03B8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = rotl32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_82CC03C8:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cc0404
	if (cr0.eq) goto loc_82CC0404;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cc03e8
	if (cr0.eq) goto loc_82CC03E8;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x82cc03f8
	goto loc_82CC03F8;
loc_82CC03E8:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = rotl32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_82CC03F8:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82cc040c
	goto loc_82CC040C;
loc_82CC0404:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r19.u64);
loc_82CC040C:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// blt cr6,0x82cc041c
	if (cr6.lt) goto loc_82CC041C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_82CC041C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x82cc0448
	if (!cr6.gt) goto loc_82CC0448;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cc0448
	if (cr0.eq) goto loc_82CC0448;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CC0448:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82239468
	sub_82239468(ctx, base);
loc_82CC0458:
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
loc_82CC0460:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82cc0494
	if (!cr6.eq) goto loc_82CC0494;
loc_82CC0468:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cc0494
	if (cr0.eq) goto loc_82CC0494;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// bl 0x832b299c
	__imp__RtlRaiseException(ctx, base);
loc_82CC0494:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cc04b0
	goto loc_82CC04B0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
loc_82CC04B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x82cc04e8
	sub_82CC04E8(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(356) );
loc_82CC04C0:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82CBFC80) {
	__imp__sub_82CBFC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC04C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// b 0x82cc0500
	goto loc_82CC0500;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CC0500:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cc0514
	if (cr6.eq) goto loc_82CC0514;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1408) );
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82CC0514:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC04C8) {
	__imp__sub_82CC04C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC04E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cc0514
	if (cr6.eq) goto loc_82CC0514;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + int32_t(1408) );
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82CC0514:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC04E8) {
	__imp__sub_82CC04E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC052C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC052C) {
	__imp__sub_82CC052C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0554) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0554) {
	__imp__sub_82CC0554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0560) {
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
	// andi. r11,r3,5
	r11.u64 = ctx.r3.u64 & 5;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ori r3,r11,4096
	ctx.r3.u64 = r11.u64 | 4096;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cc059c
	if (!cr6.lt) goto loc_82CC059C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cc0598
	if (!cr6.eq) goto loc_82CC0598;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82cc05a8
	goto loc_82CC05A8;
loc_82CC0598:
	// lis r5,1
	ctx.r5.s64 = 65536;
loc_82CC059C:
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// ble cr6,0x82cc05a8
	if (!cr6.gt) goto loc_82CC05A8;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82CC05A8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbf6d8
	sub_82CBF6D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cc05c8
	if (!cr0.eq) goto loc_82CC05C8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82CC05C8:
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

PPC_WEAK_FUNC(sub_82CC0560) {
	__imp__sub_82CC0560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC05E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cbe938
	sub_82CBE938(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cc0600
	if (!cr0.eq) goto loc_82CC0600;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc060c
	goto loc_82CC060C;
loc_82CC0600:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC060C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC05E0) {
	__imp__sub_82CC05E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0620) {
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
	// bl 0x832b29ac
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_82CC0620) {
	__imp__sub_82CC0620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0658) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cc0694
	if (cr6.eq) goto loc_82CC0694;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cc1df0
	sub_82CC1DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82cc0698
	goto loc_82CC0698;
loc_82CC0694:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CC0698:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b29bc
	__imp__NtCreateSemaphore(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc06d0
	if (cr0.lt) goto loc_82CC06D0;
	// lis r11,16384
	r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x82cc06c4
	if (cr6.eq) goto loc_82CC06C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC06C4:
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82cc06d8
	goto loc_82CC06D8;
loc_82CC06D0:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC06D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82CC0658) {
	__imp__sub_82CC0658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC06F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832b29cc
	__imp__NtReleaseSemaphore(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0710
	if (cr0.lt) goto loc_82CC0710;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc0718
	goto loc_82CC0718;
loc_82CC0710:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC0718:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC06F0) {
	__imp__sub_82CC06F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0728) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc16c0
	sub_82CC16C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832b29dc
	__imp__ExTerminateThread(ctx, base);
}

PPC_WEAK_FUNC(sub_82CC0728) {
	__imp__sub_82CC0728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0750) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc1c20
	sub_82CC1C20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CC0750) {
	__imp__sub_82CC0750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0758) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc1c70
	sub_82CC1C70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CC0758) {
	__imp__sub_82CC0758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0760) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cc0790
	if (cr6.eq) goto loc_82CC0790;
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
loc_82CC0790:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cc0804
	if (cr6.eq) goto loc_82CC0804;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,259
	r11.s64 = 259;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// clrlwi. r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bne 0x82cc07c0
	if (!cr0.eq) goto loc_82CC07C0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82CC07C0:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b27dc
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82cc0878
	if (cr6.eq) goto loc_82CC0878;
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// beq cr6,0x82cc0878
	if (cr6.eq) goto loc_82CC0878;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cc07fc
	if (cr6.eq) goto loc_82CC07FC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CC07FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc0880
	goto loc_82CC0880;
loc_82CC0804:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b27dc
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// bne cr6,0x82cc0848
	if (!cr6.eq) goto loc_82CC0848;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832b22ac
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0860
	if (cr0.lt) goto loc_82CC0860;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CC0848:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82cc0860
	if (cr6.lt) goto loc_82CC0860;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82cc0880
	goto loc_82CC0880;
loc_82CC0860:
	// rlwinm r11,r3,0,0,1
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc0878
	if (!cr6.eq) goto loc_82CC0878;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CC0878:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC0880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CC0760) {
	__imp__sub_82CC0760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0888) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832b26ac
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cc08c8
	if (!cr0.lt) goto loc_82CC08C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x82cc08cc
	goto loc_82CC08CC;
loc_82CC08C8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82CC08CC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc08dc
	if (cr6.eq) goto loc_82CC08DC;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// ble cr6,0x82cc0908
	if (!cr6.gt) goto loc_82CC0908;
loc_82CC08DC:
	// bl 0x832b257c
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,0,16,23
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82cc0904
	if (!cr6.eq) goto loc_82CC0904;
	// cmplwi cr6,r3,257
	cr6.compare<uint32_t>(ctx.r3.u32, 257, xer);
	// bne cr6,0x82cc08fc
	if (!cr6.eq) goto loc_82CC08FC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82cc0908
	goto loc_82CC0908;
loc_82CC08FC:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82cc0908
	goto loc_82CC0908;
loc_82CC0904:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CC0908:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0888) {
	__imp__sub_82CC0888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r11,0
	r11.s64 = 0;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832b26ac
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0ab4
	if (cr0.lt) goto loc_82CC0AB4;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(r11.u32, 110, xer);
	// bgt cr6,0x82cc0ab4
	if (cr6.gt) goto loc_82CC0AB4;
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cmplwi cr6,r11,104
	cr6.compare<uint32_t>(r11.u32, 104, xer);
	// bgt cr6,0x82cc0ab4
	if (cr6.gt) goto loc_82CC0AB4;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,13848
	r12.s64 = r12.s64 + 13848;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = rotl64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32052
	r12.s64 = -2100559872;
	// addi r12,r12,2444
	r12.s64 = r12.s64 + 2444;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CC0994;
	case 1:
		goto loc_82CC098C;
	case 2:
		goto loc_82CC0AB4;
	case 3:
		goto loc_82CC099C;
	case 4:
		goto loc_82CC0AB4;
	case 5:
		goto loc_82CC0AB4;
	case 6:
		goto loc_82CC0AB4;
	case 7:
		goto loc_82CC0AB4;
	case 8:
		goto loc_82CC09A4;
	case 9:
		goto loc_82CC0AB4;
	case 10:
		goto loc_82CC0AB4;
	case 11:
		goto loc_82CC09AC;
	case 12:
		goto loc_82CC0AB4;
	case 13:
		goto loc_82CC0A94;
	case 14:
		goto loc_82CC09B4;
	case 15:
		goto loc_82CC09BC;
	case 16:
		goto loc_82CC09C4;
	case 17:
		goto loc_82CC0AB4;
	case 18:
		goto loc_82CC09CC;
	case 19:
		goto loc_82CC09EC;
	case 20:
		goto loc_82CC09D4;
	case 21:
		goto loc_82CC0AB4;
	case 22:
		goto loc_82CC0AB4;
	case 23:
		goto loc_82CC0AB4;
	case 24:
		goto loc_82CC0AB4;
	case 25:
		goto loc_82CC0AB4;
	case 26:
		goto loc_82CC0A84;
	case 27:
		goto loc_82CC09DC;
	case 28:
		goto loc_82CC0AB4;
	case 29:
		goto loc_82CC09E4;
	case 30:
		goto loc_82CC0AA4;
	case 31:
		goto loc_82CC0AB4;
	case 32:
		goto loc_82CC09F4;
	case 33:
		goto loc_82CC0AB4;
	case 34:
		goto loc_82CC09FC;
	case 35:
		goto loc_82CC0AB4;
	case 36:
		goto loc_82CC0AB4;
	case 37:
		goto loc_82CC0A04;
	case 38:
		goto loc_82CC0AB4;
	case 39:
		goto loc_82CC0A14;
	case 40:
		goto loc_82CC0AB4;
	case 41:
		goto loc_82CC0A0C;
	case 42:
		goto loc_82CC0AB4;
	case 43:
		goto loc_82CC0AB4;
	case 44:
		goto loc_82CC0AB4;
	case 45:
		goto loc_82CC0A1C;
	case 46:
		goto loc_82CC0AB4;
	case 47:
		goto loc_82CC0AB4;
	case 48:
		goto loc_82CC0A24;
	case 49:
		goto loc_82CC0AB4;
	case 50:
		goto loc_82CC0AB4;
	case 51:
		goto loc_82CC0A2C;
	case 52:
		goto loc_82CC0AB4;
	case 53:
		goto loc_82CC0AB4;
	case 54:
		goto loc_82CC0AB4;
	case 55:
		goto loc_82CC0AB4;
	case 56:
		goto loc_82CC0AB4;
	case 57:
		goto loc_82CC0AB4;
	case 58:
		goto loc_82CC0AB4;
	case 59:
		goto loc_82CC0AB4;
	case 60:
		goto loc_82CC0AB4;
	case 61:
		goto loc_82CC0AB4;
	case 62:
		goto loc_82CC0AB4;
	case 63:
		goto loc_82CC0AB4;
	case 64:
		goto loc_82CC0AB4;
	case 65:
		goto loc_82CC0AB4;
	case 66:
		goto loc_82CC0A34;
	case 67:
		goto loc_82CC0AB4;
	case 68:
		goto loc_82CC0AB4;
	case 69:
		goto loc_82CC0A3C;
	case 70:
		goto loc_82CC0A4C;
	case 71:
		goto loc_82CC0A44;
	case 72:
		goto loc_82CC0AB4;
	case 73:
		goto loc_82CC0AB4;
	case 74:
		goto loc_82CC0AB4;
	case 75:
		goto loc_82CC0AB4;
	case 76:
		goto loc_82CC0AB4;
	case 77:
		goto loc_82CC0A54;
	case 78:
		goto loc_82CC0AB4;
	case 79:
		goto loc_82CC0A5C;
	case 80:
		goto loc_82CC0AB4;
	case 81:
		goto loc_82CC0AB4;
	case 82:
		goto loc_82CC0AB4;
	case 83:
		goto loc_82CC0A64;
	case 84:
		goto loc_82CC0AB4;
	case 85:
		goto loc_82CC0A8C;
	case 86:
		goto loc_82CC0A6C;
	case 87:
		goto loc_82CC0AB4;
	case 88:
		goto loc_82CC0A74;
	case 89:
		goto loc_82CC0AB4;
	case 90:
		goto loc_82CC0AB4;
	case 91:
		goto loc_82CC0AB4;
	case 92:
		goto loc_82CC0AB4;
	case 93:
		goto loc_82CC0AB4;
	case 94:
		goto loc_82CC0AB4;
	case 95:
		goto loc_82CC0AB4;
	case 96:
		goto loc_82CC0A9C;
	case 97:
		goto loc_82CC0AB4;
	case 98:
		goto loc_82CC0AAC;
	case 99:
		goto loc_82CC0AB4;
	case 100:
		goto loc_82CC0AB4;
	case 101:
		goto loc_82CC0AB4;
	case 102:
		goto loc_82CC0AB4;
	case 103:
		goto loc_82CC0AB4;
	case 104:
		goto loc_82CC0A7C;
	default:
		__builtin_unreachable();
	}
loc_82CC098C:
	// li r11,1
	r11.s64 = 1;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0994:
	// li r11,2
	r11.s64 = 2;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC099C:
	// li r11,3
	r11.s64 = 3;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09A4:
	// li r11,4
	r11.s64 = 4;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09AC:
	// li r11,5
	r11.s64 = 5;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09B4:
	// li r11,6
	r11.s64 = 6;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09BC:
	// li r11,7
	r11.s64 = 7;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09C4:
	// li r11,8
	r11.s64 = 8;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09CC:
	// li r11,9
	r11.s64 = 9;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09D4:
	// li r11,10
	r11.s64 = 10;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09DC:
	// li r11,11
	r11.s64 = 11;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09E4:
	// li r11,12
	r11.s64 = 12;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09EC:
	// li r11,13
	r11.s64 = 13;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09F4:
	// li r11,14
	r11.s64 = 14;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC09FC:
	// li r11,15
	r11.s64 = 15;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A04:
	// li r11,16
	r11.s64 = 16;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A0C:
	// li r11,17
	r11.s64 = 17;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A14:
	// li r11,18
	r11.s64 = 18;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A1C:
	// li r11,19
	r11.s64 = 19;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A24:
	// li r11,20
	r11.s64 = 20;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A2C:
	// li r11,21
	r11.s64 = 21;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A34:
	// li r11,22
	r11.s64 = 22;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A3C:
	// li r11,23
	r11.s64 = 23;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A44:
	// li r11,24
	r11.s64 = 24;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A4C:
	// li r11,25
	r11.s64 = 25;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A54:
	// li r11,26
	r11.s64 = 26;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A5C:
	// li r11,27
	r11.s64 = 27;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A64:
	// li r11,37
	r11.s64 = 37;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A6C:
	// li r11,28
	r11.s64 = 28;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A74:
	// li r11,29
	r11.s64 = 29;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A7C:
	// li r11,30
	r11.s64 = 30;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A84:
	// li r11,31
	r11.s64 = 31;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A8C:
	// li r11,32
	r11.s64 = 32;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A94:
	// li r11,33
	r11.s64 = 33;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0A9C:
	// li r11,34
	r11.s64 = 34;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0AA4:
	// li r11,35
	r11.s64 = 35;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0AAC:
	// li r11,36
	r11.s64 = 36;
	// b 0x82cc0ab8
	goto loc_82CC0AB8;
loc_82CC0AB4:
	// li r11,0
	r11.s64 = 0;
loc_82CC0AB8:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cc0ac8
	if (cr0.eq) goto loc_82CC0AC8;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// ble cr6,0x82cc0b04
	if (!cr6.gt) goto loc_82CC0B04;
loc_82CC0AC8:
	// bl 0x832b257c
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,24,24,31
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82cc0af0
	if (!cr6.eq) goto loc_82CC0AF0;
	// addi r11,r3,-257
	r11.s64 = ctx.r3.s64 + -257;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// b 0x82cc0b04
	goto loc_82CC0B04;
loc_82CC0AF0:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,35
	r11.s64 = r11.s64 + 35;
loc_82CC0B04:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0918) {
	__imp__sub_82CC0918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0B18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// lhz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// lhz r11,14(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 14);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// sth r6,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// sth r5,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r5.u16);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r11.u16);
	// bl 0x832b29ec
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cc0b90
	if (!cr0.eq) goto loc_82CC0B90;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc0ba4
	goto loc_82CC0BA4;
loc_82CC0B90:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82CC0BA4:
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

PPC_WEAK_FUNC(sub_82CC0B18) {
	__imp__sub_82CC0B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,328
	ctx.r5.s64 = 328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc1fc8
	sub_82CC1FC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cc0bec
	if (!cr0.lt) goto loc_82CC0BEC;
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc0bfc
	goto loc_82CC0BFC;
loc_82CC0BEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc9e60
	sub_82CC9E60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CC0BFC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0BB8) {
	__imp__sub_82CC0BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0C10) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,328
	ctx.r5.s64 = 328;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cc1e48
	sub_82CC1E48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cc0c78
	if (!cr0.lt) goto loc_82CC0C78;
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc0c88
	goto loc_82CC0C88;
loc_82CC0C78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cc9e60
	sub_82CC9E60(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CC0C88:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0C10) {
	__imp__sub_82CC0C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x832b281c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0cd4
	if (cr0.lt) goto loc_82CC0CD4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// b 0x82cc0cdc
	goto loc_82CC0CDC;
loc_82CC0CD4:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC0CDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0CA0) {
	__imp__sub_82CC0CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0CF0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// rlwinm. r11,r5,0,16,16
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// beq 0x82cc0d34
	if (cr0.eq) goto loc_82CC0D34;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc0d34
	if (cr6.eq) goto loc_82CC0D34;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_82CC0D1C:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC0D24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82CC0D34:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x832b280c
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0d1c
	if (cr0.lt) goto loc_82CC0D1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc0d24
	goto loc_82CC0D24;
}

PPC_WEAK_FUNC(sub_82CC0CF0) {
	__imp__sub_82CC0CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r9,3416
	ctx.r9.s64 = ctx.r9.s64 + 3416;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82cc0dbc
	if (cr6.eq) goto loc_82CC0DBC;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82cc0d9c
	if (!cr6.gt) goto loc_82CC0D9C;
	// li r11,15
	r11.s64 = 15;
loc_82CC0D9C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cc0dc0
	if (cr6.eq) goto loc_82CC0DC0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca30e8
	sub_82CA30E8(ctx, base);
	// b 0x82cc0dc0
	goto loc_82CC0DC0;
loc_82CC0DBC:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82CC0DC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b299c
	__imp__RtlRaiseException(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0D58) {
	__imp__sub_82CC0D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r11,16417
	r11.s64 = 16417;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b27fc
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0e50
	if (cr0.lt) goto loc_82CC0E50;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc0e58
	goto loc_82CC0E58;
loc_82CC0E50:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC0E58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0DD8) {
	__imp__sub_82CC0DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0E68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,16448
	ctx.r8.s64 = 16448;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832b27ac
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0f00
	if (cr0.lt) goto loc_82CC0F00;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832b29fc
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x832b268c
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82cc0efc
	if (cr6.lt) goto loc_82CC0EFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc0f08
	goto loc_82CC0F08;
loc_82CC0EFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82CC0F00:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC0F08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0E68) {
	__imp__sub_82CC0E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0F20) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x832b21fc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832b290c
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc0fa4
	if (cr0.lt) goto loc_82CC0FA4;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// std r10,4(r31)
	PPC_STORE_U64(r31.u32 + 4, ctx.r10.u64);
	// std r9,12(r31)
	PPC_STORE_U64(r31.u32 + 12, ctx.r9.u64);
	// std r8,20(r31)
	PPC_STORE_U64(r31.u32 + 20, ctx.r8.u64);
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// b 0x82cc0fac
	goto loc_82CC0FAC;
loc_82CC0FA4:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC0FAC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC0F20) {
	__imp__sub_82CC0F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC0FC0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cc0ff0
	if (cr6.eq) goto loc_82CC0FF0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82cc0ff4
	goto loc_82CC0FF4;
loc_82CC0FF0:
	// extsw r30,r4
	r30.s64 = ctx.r4.s32;
loc_82CC0FF4:
	// lis r31,-31953
	r31.s64 = -2094071808;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82cc1080
	if (cr6.lt) goto loc_82CC1080;
	// beq cr6,0x82cc104c
	if (cr6.eq) goto loc_82CC104C;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x82cc104c
	if (!cr6.lt) goto loc_82CC104C;
	// lwz r11,-272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-272) );
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cc1040
	if (!cr0.lt) goto loc_82CC1040;
loc_82CC1038:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// b 0x82cc1124
	goto loc_82CC1124;
loc_82CC1040:
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_82CC1044:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x82cc1084
	goto loc_82CC1084;
loc_82CC104C:
	// lwz r11,-272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-272) );
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc1038
	if (cr0.lt) goto loc_82CC1038;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82cc1044
	goto loc_82CC1044;
loc_82CC1080:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82CC1084:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x82cc109c
	if (!cr6.lt) goto loc_82CC109C;
	// li r3,131
	ctx.r3.s64 = 131;
loc_82CC1094:
	// bl 0x82cc1c20
	sub_82CC1C20(ctx, base);
	// b 0x82cc1124
	goto loc_82CC1124;
loc_82CC109C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82cc10b8
	if (!cr6.eq) goto loc_82CC10B8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi. r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cc10b8
	if (cr0.eq) goto loc_82CC10B8;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82cc1094
	goto loc_82CC1094;
loc_82CC10B8:
	// lwz r11,-272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-272) );
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc1110
	if (cr0.lt) goto loc_82CC1110;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cc10f4
	if (cr6.eq) goto loc_82CC10F4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82CC10F4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82cc1108
	if (!cr6.eq) goto loc_82CC1108;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
loc_82CC1108:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// b 0x82cc1128
	goto loc_82CC1128;
loc_82CC1110:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cc1124
	if (cr6.eq) goto loc_82CC1124;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82CC1124:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CC1128:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CC0FC0) {
	__imp__sub_82CC0FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC1130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832b284c
	__imp__NtFlushBuffersFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82cc1154
	if (cr0.lt) goto loc_82CC1154;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc115c
	goto loc_82CC115C;
loc_82CC1154:
	// bl 0x82cc1c38
	sub_82CC1C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC115C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CC1130) {
	__imp__sub_82CC1130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CC1170) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31953
	r29.s64 = -2094071808;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r11,-272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-272) );
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r31,-16384
	r31.s64 = -1073741824;
	// rlwinm r11,r3,0,0,1
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82cc1280
	if (cr6.eq) goto loc_82CC1280;
	// lwz r11,-272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-272) );
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(232) );
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r3,0,0,1
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82cc1280
	if (cr6.eq) goto loc_82CC1280;
	// lwz r11,-272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-272) );
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r6,56
	ctx.r6.s64 = 56;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r3,0,0,1
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82cc1280
	if (cr6.eq) goto loc_82CC1280;
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,208(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(208) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(200) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r31,204(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(204) );
	// std r9,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r9.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// std r8,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r8.u64);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r7,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r7.u64);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cc1288
	goto loc_82CC1288;
loc_82CC1280:
	// bl 0x82cc1c18
	sub_82CC1C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC1288:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CC1170) {
	__imp__sub_82CC1170(ctx, base);
}

