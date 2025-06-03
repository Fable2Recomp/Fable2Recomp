#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82C39178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19924
	ctx.r3.s64 = r11.s64 + 19924;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C39178) {
	__imp__sub_82C39178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39188) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
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
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r7,-20648
	ctx.r4.s64 = ctx.r7.s64 + -20648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c39244
	if (cr6.eq) goto loc_82C39244;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19516
	ctx.r4.s64 = r11.s64 + -19516;
	// bne cr6,0x82c39264
	if (!cr6.eq) goto loc_82C39264;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3926c
	if (!cr6.eq) goto loc_82C3926C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19528
	ctx.r4.s64 = r11.s64 + -19528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c14d70
	sub_82C14D70(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c39250
	if (!cr6.eq) goto loc_82C39250;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82C39244:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C39250:
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// b 0x82c3926c
	goto loc_82C3926C;
loc_82C39264:
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
loc_82C3926C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// addi r4,r11,-19540
	ctx.r4.s64 = r11.s64 + -19540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C39188) {
	__imp__sub_82C39188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39298) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-15660
	ctx.r10.s64 = r11.s64 + -15660;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c23dd0
	sub_82C23DD0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r29,r28
	r29.u64 = r28.u64;
	// ble cr6,0x82c392f0
	if (!cr6.gt) goto loc_82C392F0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82C392D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c392d0
	if (cr6.lt) goto loc_82C392D0;
loc_82C392F0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// addi r10,r11,-16700
	ctx.r10.s64 = r11.s64 + -16700;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39318
	if (cr6.eq) goto loc_82C39318;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
loc_82C39318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C39298) {
	__imp__sub_82C39298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39320) {
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
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c39358
	if (cr6.eq) goto loc_82C39358;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C39358:
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

PPC_WEAK_FUNC(sub_82C39320) {
	__imp__sub_82C39320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39370) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c393e4
	if (cr6.eq) goto loc_82C393E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c39188
	sub_82C39188(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c393e4
	if (cr6.eq) goto loc_82C393E4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c393e8
	if (!cr6.eq) goto loc_82C393E8;
loc_82C393E4:
	// li r11,0
	r11.s64 = 0;
loc_82C393E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C39370) {
	__imp__sub_82C39370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39408) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c39458
	if (!cr6.eq) goto loc_82C39458;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39458
	if (cr6.eq) goto loc_82C39458;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15672
	ctx.r9.s64 = ctx.r10.s64 + -15672;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C39458:
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

PPC_WEAK_FUNC(sub_82C39408) {
	__imp__sub_82C39408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39470) {
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
	// bl 0x82c39098
	sub_82C39098(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C39470) {
	__imp__sub_82C39470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C394A0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,19924
	ctx.r4.s64 = ctx.r10.s64 + 19924;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c394ec
	if (!cr6.eq) goto loc_82C394EC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C394EC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82C394A0) {
	__imp__sub_82C394A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39510) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c39680
	if (cr6.lt) goto loc_82C39680;
	// bne cr6,0x82c397e8
	if (!cr6.eq) goto loc_82C397E8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c395c8
	if (cr6.lt) goto loc_82C395C8;
	// bne cr6,0x82c397e8
	if (!cr6.eq) goto loc_82C397E8;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// li r26,0
	r26.s64 = 0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c3988c
	if (!cr6.gt) goto loc_82C3988C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r26
	r31.u64 = r26.u64;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C39584:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82c39370
	sub_82C39370(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c397e8
	if (cr6.eq) goto loc_82C397E8;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82c39584
	if (cr6.lt) goto loc_82C39584;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
loc_82C395C8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r27,r11,6544
	r27.s64 = r11.s64 + 6544;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82c02b98
	sub_82C02B98(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// beq cr6,0x82c3988c
	if (cr6.eq) goto loc_82C3988C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82C39614:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39638
	if (cr6.eq) goto loc_82C39638;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x82c3963c
	goto loc_82C3963C;
loc_82C39638:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82C3963C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c39370
	sub_82C39370(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c397e8
	if (cr6.eq) goto loc_82C397E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82c39614
	if (cr6.lt) goto loc_82C39614;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
loc_82C39680:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c39744
	if (cr6.lt) goto loc_82C39744;
	// bne cr6,0x82c397e8
	if (!cr6.eq) goto loc_82C397E8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c397e8
	if (cr6.eq) goto loc_82C397E8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r26,0
	r26.s64 = 0;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3988c
	if (cr6.eq) goto loc_82C3988C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r26
	r31.u64 = r26.u64;
	// addi r30,r11,6544
	r30.s64 = r11.s64 + 6544;
loc_82C39700:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82c39370
	sub_82C39370(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c397e8
	if (cr6.eq) goto loc_82C397E8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c39700
	if (cr6.lt) goto loc_82C39700;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
loc_82C39744:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c397e8
	if (cr6.eq) goto loc_82C397E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c397f8
	if (!cr6.gt) goto loc_82C397F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r10,-20240
	r29.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r27,r9,-20272
	r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
loc_82C397E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
loc_82C397F8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3988c
	if (cr6.eq) goto loc_82C3988C;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// beq cr6,0x82c3988c
	if (cr6.eq) goto loc_82C3988C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
	// lfs f31,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82C3982C:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39850
	if (cr6.eq) goto loc_82C39850;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x82c39854
	goto loc_82C39854;
loc_82C39850:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82C39854:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c39370
	sub_82C39370(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c397e8
	if (cr6.eq) goto loc_82C397E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82c3982c
	if (cr6.lt) goto loc_82C3982C;
loc_82C3988C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82C39510) {
	__imp__sub_82C39510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C398A0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c398f4
	if (cr6.eq) goto loc_82C398F4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c398e0
	if (cr6.eq) goto loc_82C398E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_82C398E0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-23676
	ctx.r10.s64 = r11.s64 + -23676;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C398F4:
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

PPC_WEAK_FUNC(sub_82C398A0) {
	__imp__sub_82C398A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// b 0x82c398a0
	sub_82C398A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C39908) {
	__imp__sub_82C39908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C39920) {
	__imp__sub_82C39920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39928) {
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
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x82c3997c
	if (cr6.eq) goto loc_82C3997C;
	// li r29,0
	r29.s64 = 0;
loc_82C39948:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39968
	if (cr6.eq) goto loc_82C39968;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C39968:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82c39948
	if (!cr6.eq) goto loc_82C39948;
loc_82C3997C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C39928) {
	__imp__sub_82C39928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39988) {
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
	PPCRegister temp{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82c39a40
	if (!cr6.gt) goto loc_82C39A40;
loc_82C399B4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82c39a60
	if (!cr6.gt) goto loc_82C39A60;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c42828
	sub_82C42828(ctx, base);
	// srawi r11,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r11.s64 = r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r9,r27,r31
	ctx.r9.s64 = r31.s64 - r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = r26.s64 - r30.s64;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bge cr6,0x82c39a20
	if (!cr6.lt) goto loc_82C39A20;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c39988
	sub_82C39988(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82c39a30
	goto loc_82C39A30;
loc_82C39A20:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c39988
	sub_82C39988(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82C39A30:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x82c399b4
	if (cr6.gt) goto loc_82C399B4;
loc_82C39A40:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82c39a58
	if (!cr6.gt) goto loc_82C39A58;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c289e8
	sub_82C289E8(ctx, base);
loc_82C39A58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C39A60:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82c39a40
	if (!cr6.gt) goto loc_82C39A40;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x82c39a90
	if (!cr6.gt) goto loc_82C39A90;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c16d20
	sub_82C16D20(ctx, base);
loc_82C39A90:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c273a8
	sub_82C273A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C39988) {
	__imp__sub_82C39988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39AA8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-15672
	ctx.r9.s64 = r11.s64 + -15672;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39b1c
	if (cr6.eq) goto loc_82C39B1C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82C39B1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c00008
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C39AA8) {
	__imp__sub_82C39AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39B30) {
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
	// bl 0x82c39aa8
	sub_82C39AA8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c39b68
	if (cr6.eq) goto loc_82C39B68;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C39B68:
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

PPC_WEAK_FUNC(sub_82C39B30) {
	__imp__sub_82C39B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39B80) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-15656
	ctx.r9.s64 = r11.s64 + -15656;
	// addi r8,r10,-18484
	ctx.r8.s64 = ctx.r10.s64 + -18484;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82c474e0
	sub_82C474E0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r7,-18484
	ctx.r6.s64 = ctx.r7.s64 + -18484;
	// lis r5,-31949
	ctx.r5.s64 = -2093809664;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// lwz r11,19920(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(19920) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,19920(r5)
	PPC_STORE_U32(ctx.r5.u32 + 19920, r11.u32);
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

PPC_WEAK_FUNC(sub_82C39B80) {
	__imp__sub_82C39B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82C39C30) {
	__imp__sub_82C39C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39C48) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82c39cc8
	if (cr6.eq) goto loc_82C39CC8;
loc_82C39C68:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82c39cbc
	if (cr6.eq) goto loc_82C39CBC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c39c90
	if (cr6.eq) goto loc_82C39C90;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C39C90:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39cac
	if (cr6.eq) goto loc_82C39CAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C39CAC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82C39CBC:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82c39c68
	if (!cr6.eq) goto loc_82C39C68;
loc_82C39CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C39C48) {
	__imp__sub_82C39C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39CD0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82c39d54
	if (cr6.eq) goto loc_82C39D54;
loc_82C39CF0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82c39d44
	if (cr6.eq) goto loc_82C39D44;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c39d18
	if (cr6.eq) goto loc_82C39D18;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C39D18:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39d34
	if (cr6.eq) goto loc_82C39D34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C39D34:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82C39D44:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82c39cf0
	if (!cr6.eq) goto loc_82C39CF0;
loc_82C39D54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C39CD0) {
	__imp__sub_82C39CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39D60) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x82c39de4
	if (cr6.eq) goto loc_82C39DE4;
loc_82C39D80:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82c39ddc
	if (cr6.eq) goto loc_82C39DDC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c39db0
	if (cr6.eq) goto loc_82C39DB0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C39DB0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39dcc
	if (cr6.eq) goto loc_82C39DCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C39DCC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82C39DDC:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82c39d80
	if (!cr6.eq) goto loc_82C39D80;
loc_82C39DE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C39D60) {
	__imp__sub_82C39D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(v63,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx128 v62,r0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(v62,
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
	// vrlimi128 v62,v63,4,3
	simd::store_f32(v62.f32, simd::blend_f32<4>(simd::load_f32(v62.f32), simd::permute_f32<57>(simd::load_f32(v63.f32))));
	// lvlx128 v61,r0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v61,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx128 v60,r0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v60,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v60,v61,4,3
	simd::store_f32(v60.f32, simd::blend_f32<4>(simd::load_f32(v60.f32), simd::permute_f32<57>(simd::load_f32(v61.f32))));
	// vrlimi128 v60,v62,3,2
	simd::store_f32(v60.f32, simd::blend_f32<3>(simd::load_f32(v60.f32), simd::permute_f32<78>(simd::load_f32(v62.f32))));
	// stvx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v60), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C39DF0) {
	__imp__sub_82C39DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39E48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82c08c90
	sub_82C08C90(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-15604
	ctx.r9.s64 = r11.s64 + -15604;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r8,r10,-17000
	ctx.r8.s64 = ctx.r10.s64 + -17000;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r31,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r31.u32);
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19912(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(19912) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,19912(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19912, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C39E48) {
	__imp__sub_82C39E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39EC8) {
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// lis r30,-31949
	r30.s64 = -2093809664;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r29.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c39f68
	if (cr6.eq) goto loc_82C39F68;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c39f10
	if (cr6.eq) goto loc_82C39F10;
	// neg r11,r5
	r11.s64 = -ctx.r5.s64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
loc_82C39F10:
	// lwz r11,19916(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(19916) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,19916(r30)
	PPC_STORE_U32(r30.u32 + 19916, r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r10,19912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(19912) );
	// lwz r11,19916(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(19916) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82c39f6c
	if (!cr6.eq) goto loc_82C39F6C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r11,19916(r30)
	PPC_STORE_U32(r30.u32 + 19916, r11.u32);
	// b 0x82c39f6c
	goto loc_82C39F6C;
loc_82C39F68:
	// lwz r11,19916(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(19916) );
loc_82C39F6C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c39f8c
	if (!cr6.eq) goto loc_82C39F8C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c39f8c
	if (cr6.eq) goto loc_82C39F8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C39F8C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C39EC8) {
	__imp__sub_82C39EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C39FD0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(52) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(48) );
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
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

PPC_WEAK_FUNC(sub_82C39FD0) {
	__imp__sub_82C39FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A060) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r11,-15604
	ctx.r9.s64 = r11.s64 + -15604;
	// li r29,0
	r29.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r11,19912(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(19912) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,19912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19912, r11.u32);
	// bne 0x82c3a0a0
	if (!cr0.eq) goto loc_82C3A0A0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r11,19916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19916, r11.u32);
loc_82C3A0A0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r10,r11,-23676
	ctx.r10.s64 = r11.s64 + -23676;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a0cc
	if (cr6.eq) goto loc_82C3A0CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A0CC:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// bl 0x82c08c90
	sub_82C08C90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A060) {
	__imp__sub_82C3A060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A0E8) {
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
	// bl 0x82c3a060
	sub_82C3A060(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3a120
	if (cr6.eq) goto loc_82C3A120;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C3A120:
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

PPC_WEAK_FUNC(sub_82C3A0E8) {
	__imp__sub_82C3A0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c39d60
	sub_82C39D60(ctx, base);
	// subf r8,r31,r30
	ctx.r8.s64 = r30.s64 - r31.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r6,r29
	ctx.r3.s64 = r29.s64 - ctx.r6.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A138) {
	__imp__sub_82C3A138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A190) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82c3a1f0
	if (cr6.eq) goto loc_82C3A1F0;
loc_82C3A1B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c3a1e0
	if (cr6.eq) goto loc_82C3A1E0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82c3a1e0
	if (cr6.eq) goto loc_82C3A1E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A1E0:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82c3a1b0
	if (!cr6.eq) goto loc_82C3A1B0;
loc_82C3A1F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A190) {
	__imp__sub_82C3A190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A200) {
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
	// lbz r11,81(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3a228
	if (!cr6.eq) goto loc_82C3A228;
loc_82C3A220:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3a2b8
	goto loc_82C3A2B8;
loc_82C3A228:
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3a240
	if (!cr6.gt) goto loc_82C3A240;
	// twi 31,r0,22
loc_82C3A240:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3a254
	if (!cr6.gt) goto loc_82C3A254;
	// twi 31,r0,22
loc_82C3A254:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3a260
	if (cr6.eq) goto loc_82C3A260;
	// twi 31,r0,22
loc_82C3A260:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3a2b4
	if (cr6.eq) goto loc_82C3A2B4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a274
	if (cr6.lt) goto loc_82C3A274;
	// twi 31,r0,22
loc_82C3A274:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a29c
	if (cr6.eq) goto loc_82C3A29C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3a220
	if (cr6.eq) goto loc_82C3A220;
loc_82C3A29C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a2ac
	if (cr6.lt) goto loc_82C3A2AC;
	// twi 31,r0,22
loc_82C3A2AC:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82c3a240
	goto loc_82C3A240;
loc_82C3A2B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3A2B8:
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

PPC_WEAK_FUNC(sub_82C3A200) {
	__imp__sub_82C3A200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A2D0) {
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
	// lbz r11,81(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3a378
	if (!cr6.eq) goto loc_82C3A378;
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3a304
	if (!cr6.gt) goto loc_82C3A304;
	// twi 31,r0,22
loc_82C3A304:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3a318
	if (!cr6.gt) goto loc_82C3A318;
	// twi 31,r0,22
loc_82C3A318:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3a324
	if (cr6.eq) goto loc_82C3A324;
	// twi 31,r0,22
loc_82C3A324:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3a374
	if (cr6.eq) goto loc_82C3A374;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a338
	if (cr6.lt) goto loc_82C3A338;
	// twi 31,r0,22
loc_82C3A338:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a35c
	if (cr6.eq) goto loc_82C3A35C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A35C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a36c
	if (cr6.lt) goto loc_82C3A36C;
	// twi 31,r0,22
loc_82C3A36C:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82c3a304
	goto loc_82C3A304;
loc_82C3A374:
	// bl 0x82c08da8
	sub_82C08DA8(ctx, base);
loc_82C3A378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A2D0) {
	__imp__sub_82C3A2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A380) {
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
	// lbz r11,81(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3a424
	if (!cr6.eq) goto loc_82C3A424;
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3a3b4
	if (!cr6.gt) goto loc_82C3A3B4;
	// twi 31,r0,22
loc_82C3A3B4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3a3c8
	if (!cr6.gt) goto loc_82C3A3C8;
	// twi 31,r0,22
loc_82C3A3C8:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3a3d4
	if (cr6.eq) goto loc_82C3A3D4;
	// twi 31,r0,22
loc_82C3A3D4:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3a424
	if (cr6.eq) goto loc_82C3A424;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a3e8
	if (cr6.lt) goto loc_82C3A3E8;
	// twi 31,r0,22
loc_82C3A3E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a40c
	if (cr6.eq) goto loc_82C3A40C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A40C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a41c
	if (cr6.lt) goto loc_82C3A41C;
	// twi 31,r0,22
loc_82C3A41C:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82c3a3b4
	goto loc_82C3A3B4;
loc_82C3A424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A380) {
	__imp__sub_82C3A380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A430) {
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
	// li r11,1
	r11.s64 = 1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, r11.u8);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3a460
	if (!cr6.gt) goto loc_82C3A460;
	// twi 31,r0,22
loc_82C3A460:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3a474
	if (!cr6.gt) goto loc_82C3A474;
	// twi 31,r0,22
loc_82C3A474:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3a480
	if (cr6.eq) goto loc_82C3A480;
	// twi 31,r0,22
loc_82C3A480:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3a4cc
	if (cr6.eq) goto loc_82C3A4CC;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a494
	if (cr6.lt) goto loc_82C3A494;
	// twi 31,r0,22
loc_82C3A494:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a4b4
	if (cr6.eq) goto loc_82C3A4B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A4B4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a4c4
	if (cr6.lt) goto loc_82C3A4C4;
	// twi 31,r0,22
loc_82C3A4C4:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82c3a460
	goto loc_82C3A460;
loc_82C3A4CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A430) {
	__imp__sub_82C3A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A4D8) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82c50270
	sub_82C50270(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3a50c
	if (!cr6.gt) goto loc_82C3A50C;
	// twi 31,r0,22
loc_82C3A50C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3a520
	if (!cr6.gt) goto loc_82C3A520;
	// twi 31,r0,22
loc_82C3A520:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3a52c
	if (cr6.eq) goto loc_82C3A52C;
	// twi 31,r0,22
loc_82C3A52C:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3a578
	if (cr6.eq) goto loc_82C3A578;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a540
	if (cr6.lt) goto loc_82C3A540;
	// twi 31,r0,22
loc_82C3A540:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a560
	if (cr6.eq) goto loc_82C3A560;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A560:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a570
	if (cr6.lt) goto loc_82C3A570;
	// twi 31,r0,22
loc_82C3A570:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82c3a50c
	goto loc_82C3A50C;
loc_82C3A578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A4D8) {
	__imp__sub_82C3A4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A580) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82c505e8
	sub_82C505E8(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3a5b4
	if (!cr6.gt) goto loc_82C3A5B4;
	// twi 31,r0,22
loc_82C3A5B4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3a5c8
	if (!cr6.gt) goto loc_82C3A5C8;
	// twi 31,r0,22
loc_82C3A5C8:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3a5d4
	if (cr6.eq) goto loc_82C3A5D4;
	// twi 31,r0,22
loc_82C3A5D4:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3a620
	if (cr6.eq) goto loc_82C3A620;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a5e8
	if (cr6.lt) goto loc_82C3A5E8;
	// twi 31,r0,22
loc_82C3A5E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a608
	if (cr6.eq) goto loc_82C3A608;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A608:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3a618
	if (cr6.lt) goto loc_82C3A618;
	// twi 31,r0,22
loc_82C3A618:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82c3a5b4
	goto loc_82C3A5B4;
loc_82C3A620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A580) {
	__imp__sub_82C3A580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A628) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c3a684
	if (cr6.eq) goto loc_82C3A684;
loc_82C3A648:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c3a678
	if (cr6.eq) goto loc_82C3A678;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82c3a678
	if (cr6.eq) goto loc_82C3A678;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A678:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82c3a648
	if (!cr0.eq) goto loc_82C3A648;
loc_82C3A684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3A628) {
	__imp__sub_82C3A628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A690) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3a628
	sub_82C3A628(ctx, base);
	// rlwinm r11,r30,3,0,28
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
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

PPC_WEAK_FUNC(sub_82C3A690) {
	__imp__sub_82C3A690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A6F8) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r27.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// beq cr6,0x82c3a730
	if (cr6.eq) goto loc_82C3A730;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3a734
	if (cr6.eq) goto loc_82C3A734;
loc_82C3A730:
	// twi 31,r0,22
loc_82C3A734:
	// lwz r30,180(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r28,188(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82c3a7a0
	if (cr6.eq) goto loc_82C3A7A0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lwz r26,8(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c39cd0
	sub_82C39CD0(ctx, base);
	// subf r8,r28,r26
	ctx.r8.s64 = r26.s64 - r28.s64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c39928
	sub_82C39928(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82C3A7A0:
	// std r27,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r27.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C3A6F8) {
	__imp__sub_82C3A6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3A7B0) {
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
	// lwz r25,4(r6)
	r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82c3a7f4
	if (cr6.eq) goto loc_82C3A7F4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3A7F4:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c3a80c
	if (!cr6.eq) goto loc_82C3A80C;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// b 0x82c3a818
	goto loc_82C3A818;
loc_82C3A80C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
loc_82C3A818:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82c3aa60
	if (cr6.eq) goto loc_82C3AA60;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c3a830
	if (!cr6.eq) goto loc_82C3A830;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82c3a83c
	goto loc_82C3A83C;
loc_82C3A830:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r11.s64 = ctx.r10.s32 >> 3;
loc_82C3A83C:
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// bge cr6,0x82c3a858
	if (!cr6.lt) goto loc_82C3A858;
	// bl 0x82bf8e78
	sub_82BF8E78(ctx, base);
	// b 0x82c3aa60
	goto loc_82C3AA60;
loc_82C3A858:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c3a868
	if (!cr6.eq) goto loc_82C3A868;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82c3a874
	goto loc_82C3A874;
loc_82C3A868:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r7,r8,r11
	ctx.r7.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	r11.s64 = ctx.r7.s32 >> 3;
loc_82C3A874:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82c3a9b8
	if (!cr6.lt) goto loc_82C3A9B8;
	// rlwinm r11,r9,31,1,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r28,r26
	r28.u64 = r26.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c3a898
	if (cr6.lt) goto loc_82C3A898;
	// add r28,r11,r9
	r28.u64 = r11.u64 + ctx.r9.u64;
loc_82C3A898:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c3a8a8
	if (!cr6.eq) goto loc_82C3A8A8;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82c3a8b4
	goto loc_82C3A8B4;
loc_82C3A8A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r11.s64 = ctx.r10.s32 >> 3;
loc_82C3A8B4:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82c3a8e0
	if (!cr6.lt) goto loc_82C3A8E0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c3a8d0
	if (!cr6.eq) goto loc_82C3A8D0;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82c3a8dc
	goto loc_82C3A8DC;
loc_82C3A8D0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r11.s64 = ctx.r10.s32 >> 3;
loc_82C3A8DC:
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
loc_82C3A8E0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a87220
	sub_82A87220(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3a190
	sub_82C3A190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3a690
	sub_82C3A690(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r26,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r26.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3a190
	sub_82C3A190(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3a968
	if (!cr6.eq) goto loc_82C3A968;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82c3a974
	goto loc_82C3A974;
loc_82C3A968:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r11.s64 = ctx.r10.s32 >> 3;
loc_82C3A974:
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a998
	if (cr6.eq) goto loc_82C3A998;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82c39928
	sub_82C39928(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3A998:
	// rlwinm r11,r28,3,0,28
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x82c3aa60
	goto loc_82C3AA60;
loc_82C3A9B8:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r28,r27,3,0,28
	r28.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,188(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// bge cr6,0x82c3aa28
	if (!cr6.lt) goto loc_82C3AA28;
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3a190
	sub_82C3A190(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r10,r30,r4
	ctx.r10.s64 = ctx.r4.s64 - r30.s64;
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// subf r5,r9,r27
	ctx.r5.s64 = r27.s64 - ctx.r9.s64;
	// bl 0x82c3a690
	sub_82C3A690(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// b 0x82c3aa54
	goto loc_82C3AA54;
loc_82C3AA28:
	// subf r27,r28,r29
	r27.s64 = r29.s64 - r28.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3a190
	sub_82C3A190(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3a138
	sub_82C3A138(ctx, base);
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
loc_82C3AA54:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c39c48
	sub_82C39C48(ctx, base);
loc_82C3AA60:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82c3aa7c
	if (cr6.eq) goto loc_82C3AA7C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3AA7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82C3A7B0) {
	__imp__sub_82C3A7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3AA88) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,-15656
	ctx.r10.s64 = r11.s64 + -15656;
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3aabc
	if (cr6.eq) goto loc_82C3AABC;
	// bl 0x82c08d40
	sub_82C08D40(ctx, base);
	// stw r31,76(r28)
	PPC_STORE_U32(r28.u32 + 76, r31.u32);
loc_82C3AABC:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r30,r28,64
	r30.s64 = r28.s64 + 64;
	// lwz r11,19920(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(19920) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,19920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19920, r11.u32);
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(68) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3aaec
	if (cr6.eq) goto loc_82C3AAEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3AAEC:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r29,r28,48
	r29.s64 = r28.s64 + 48;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ab1c
	if (cr6.eq) goto loc_82C3AB1C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// bl 0x82c39928
	sub_82C39928(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3AB1C:
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// addi r30,r28,32
	r30.s64 = r28.s64 + 32;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(36) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ab50
	if (cr6.eq) goto loc_82C3AB50;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82c39928
	sub_82C39928(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3AB50:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r29,r28,16
	r29.s64 = r28.s64 + 16;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ab84
	if (cr6.eq) goto loc_82C3AB84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// bl 0x82c39928
	sub_82C39928(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3AB84:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// bl 0x82c502d8
	sub_82C502D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c00018
	sub_82C00018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3AA88) {
	__imp__sub_82C3AA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3ABA8) {
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
	// bl 0x82c3aa88
	sub_82C3AA88(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3abe0
	if (cr6.eq) goto loc_82C3ABE0;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C3ABE0:
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

PPC_WEAK_FUNC(sub_82C3ABA8) {
	__imp__sub_82C3ABA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3ABF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3ac28
	if (!cr6.eq) goto loc_82C3AC28;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82c3ac34
	goto loc_82C3AC34;
loc_82C3AC28:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
loc_82C3AC34:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c3ac84
	if (!cr6.lt) goto loc_82C3AC84;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3ac4c
	if (!cr6.eq) goto loc_82C3AC4C;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x82c3ac58
	goto loc_82C3AC58;
loc_82C3AC4C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_82C3AC58:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3ac68
	if (!cr6.gt) goto loc_82C3AC68;
	// twi 31,r0,22
loc_82C3AC68:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3a7b0
	sub_82C3A7B0(ctx, base);
	// b 0x82c3ad0c
	goto loc_82C3AD0C;
loc_82C3AC84:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ad0c
	if (cr6.eq) goto loc_82C3AD0C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82c3ad0c
	if (!cr6.lt) goto loc_82C3AD0C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3acac
	if (!cr6.gt) goto loc_82C3ACAC;
	// twi 31,r0,22
loc_82C3ACAC:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x82c3acc0
	if (!cr6.gt) goto loc_82C3ACC0;
	// twi 31,r0,22
loc_82C3ACC0:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82c3acf0
	if (cr6.gt) goto loc_82C3ACF0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82c3acf4
	if (!cr6.lt) goto loc_82C3ACF4;
loc_82C3ACF0:
	// twi 31,r0,22
loc_82C3ACF4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3a6f8
	sub_82C3A6F8(ctx, base);
loc_82C3AD0C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ad28
	if (cr6.eq) goto loc_82C3AD28;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3AD28:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

PPC_WEAK_FUNC(sub_82C3ABF8) {
	__imp__sub_82C3ABF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3AD48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x82c39098
	sub_82C39098(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c3ada4
	if (cr6.eq) goto loc_82C3ADA4;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ad8c
	if (cr6.eq) goto loc_82C3AD8C;
	// bl 0x82c39b80
	sub_82C39B80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82c3ad90
	goto loc_82C3AD90;
loc_82C3AD8C:
	// li r31,0
	r31.s64 = 0;
loc_82C3AD90:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82c3adb0
	if (!cr6.eq) goto loc_82C3ADB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82C3ADA0:
	// bl 0x82c32138
	sub_82C32138(ctx, base);
loc_82C3ADA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82C3ADB0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c38f78
	sub_82C38F78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ada0
	if (cr6.eq) goto loc_82C3ADA0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82c32138
	sub_82C32138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3AD48) {
	__imp__sub_82C3AD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3ADF0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ae48
	if (cr6.eq) goto loc_82C3AE48;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c39988
	sub_82C39988(ctx, base);
loc_82C3AE48:
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

PPC_WEAK_FUNC(sub_82C3ADF0) {
	__imp__sub_82C3ADF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3AE60) {
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
	PPCRegister f0{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// lbz r11,80(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ae9c
	if (cr6.eq) goto loc_82C3AE9C;
loc_82C3AE88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
loc_82C3AE9C:
	// lwz r11,64(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(64) );
	// addi r19,r21,72
	r19.s64 = r21.s64 + 72;
	// addi r23,r21,64
	r23.s64 = r21.s64 + 64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,72(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + int32_t(72) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3ae88
	if (cr6.eq) goto loc_82C3AE88;
	// li r25,0
	r25.s64 = 0;
	// addi r27,r21,16
	r27.s64 = r21.s64 + 16;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c3abf8
	sub_82C3ABF8(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r15,r21,32
	r15.s64 = r21.s64 + 32;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82c3abf8
	sub_82C3ABF8(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r24,r21,48
	r24.s64 = r21.s64 + 48;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82c3abf8
	sub_82C3ABF8(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// mr r28,r25
	r28.u64 = r25.u64;
	// li r16,1
	r16.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c3b278
	if (!cr6.gt) goto loc_82C3B278;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r11,24756
	ctx.r7.s64 = r11.s64 + 24756;
	// lfs f30,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f30.f64 = double(temp.f32);
	// mr r26,r25
	r26.u64 = r25.u64;
	// lfs f31,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f31.f64 = double(temp.f32);
	// mr r20,r25
	r20.u64 = r25.u64;
	// li r22,-1
	r22.s64 = -1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r17,4
	r17.s64 = 4;
	// li r18,36
	r18.s64 = 36;
	// addi r14,r10,-15748
	r14.s64 = ctx.r10.s64 + -15748;
loc_82C3AF6C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3af90
	if (cr6.eq) goto loc_82C3AF90;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82c39e48
	sub_82C39E48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82c3af94
	goto loc_82C3AF94;
loc_82C3AF90:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82C3AF94:
	// lwz r11,4(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3afb4
	if (cr6.eq) goto loc_82C3AFB4;
	// lwz r10,8(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3afb8
	if (cr6.lt) goto loc_82C3AFB8;
loc_82C3AFB4:
	// twi 31,r0,22
loc_82C3AFB8:
	// addic. r30,r29,20
	xer.ca = r29.u32 > 4294967275;
	r30.s64 = r29.s64 + 20;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r31,r26,r11
	r31.u64 = r26.u64 + r11.u64;
	// beq 0x82c3afd8
	if (cr0.eq) goto loc_82C3AFD8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3AFD8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3aff4
	if (cr6.eq) goto loc_82C3AFF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3AFF4:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x82c08ca0
	sub_82C08CA0(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(48) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r17.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// beq cr6,0x82c3b070
	if (cr6.eq) goto loc_82C3B070;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b074
	if (cr6.lt) goto loc_82C3B074;
loc_82C3B070:
	// twi 31,r0,22
loc_82C3B074:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r31,r26,r11
	r31.u64 = r26.u64 + r11.u64;
	// bl 0x82c0adf8
	sub_82C0ADF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b0ac
	if (cr6.eq) goto loc_82C3B0AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B0AC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b0d4
	if (cr6.eq) goto loc_82C3B0D4;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b0d8
	if (cr6.lt) goto loc_82C3B0D8;
loc_82C3B0D4:
	// twi 31,r0,22
loc_82C3B0D8:
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b260
	if (cr6.eq) goto loc_82C3B260;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b104
	if (cr6.eq) goto loc_82C3B104;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b108
	if (cr6.lt) goto loc_82C3B108;
loc_82C3B104:
	// twi 31,r0,22
loc_82C3B108:
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + r11.u64;
	// addi r3,r21,4
	ctx.r3.s64 = r21.s64 + 4;
	// bl 0x82c50198
	sub_82C50198(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3b134
	if (cr6.eq) goto loc_82C3B134;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82c3b138
	if (cr6.lt) goto loc_82C3B138;
loc_82C3B134:
	// twi 31,r0,22
loc_82C3B138:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lwzx r4,r26,r10
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b15c
	if (cr6.eq) goto loc_82C3B15C;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b160
	if (cr6.lt) goto loc_82C3B160;
loc_82C3B15C:
	// twi 31,r0,22
loc_82C3B160:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// add r31,r26,r11
	r31.u64 = r26.u64 + r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b1a0
	if (cr6.eq) goto loc_82C3B1A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B1A0:
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(r28.u32, 7, xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// bge cr6,0x82c3b260
	if (!cr6.lt) goto loc_82C3B260;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r4,r20,r11
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + r11.u32);
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8228a4c0
	sub_8228A4C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(332) );
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(56) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c3b260
	if (cr6.eq) goto loc_82C3B260;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// lfsx f12,r20,r14
	temp.u32 = PPC_LOAD_U32(r20.u32 + r14.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// fsel f11,f13,f30,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : f0.f64;
	// fsubs f10,f31,f11
	ctx.f10.f64 = static_cast<float>(f31.f64 - ctx.f11.f64);
	// fsel f9,f10,f11,f31
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : f31.f64;
	// fmuls f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82c3b244
	if (cr6.eq) goto loc_82C3B244;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b248
	if (cr6.lt) goto loc_82C3B248;
loc_82C3B244:
	// twi 31,r0,22
loc_82C3B248:
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B260:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82c3af6c
	if (cr6.lt) goto loc_82C3AF6C;
loc_82C3B278:
	// bl 0x82c08da8
	sub_82C08DA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r16,80(r21)
	PPC_STORE_U8(r21.u32 + 80, r16.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82C3AE60) {
	__imp__sub_82C3AE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B298) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3b57c
	if (!cr6.eq) goto loc_82C3B57C;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3b358
	if (!cr6.eq) goto loc_82C3B358;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c3b57c
	if (cr6.eq) goto loc_82C3B57C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82c3b5ac
	if (cr6.eq) goto loc_82C3B5AC;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// subf. r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne 0x82c3b58c
	if (!cr0.eq) goto loc_82C3B58C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82c08d40
	sub_82C08D40(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3ae60
	sub_82C3AE60(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3b358
	if (!cr6.eq) goto loc_82C3B358;
	// li r11,1
	r11.s64 = 1;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
loc_82C3B358:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c3b57c
	if (!cr6.gt) goto loc_82C3B57C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r26,r30
	r26.u64 = r30.u64;
	// lfs f30,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f30.f64 = double(temp.f32);
	// mr r25,r30
	r25.u64 = r30.u64;
	// lfs f31,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f31.f64 = double(temp.f32);
	// addi r23,r11,24756
	r23.s64 = r11.s64 + 24756;
	// addi r24,r10,-15748
	r24.s64 = ctx.r10.s64 + -15748;
loc_82C3B390:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b3b0
	if (cr6.eq) goto loc_82C3B3B0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b3b4
	if (cr6.lt) goto loc_82C3B3B4;
loc_82C3B3B0:
	// twi 31,r0,22
loc_82C3B3B4:
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b564
	if (cr6.eq) goto loc_82C3B564;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b3e0
	if (cr6.eq) goto loc_82C3B3E0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b3e4
	if (cr6.lt) goto loc_82C3B3E4;
loc_82C3B3E0:
	// twi 31,r0,22
loc_82C3B3E4:
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bge cr6,0x82c3b4b0
	if (!cr6.lt) goto loc_82C3B4B0;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b428
	if (cr6.eq) goto loc_82C3B428;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b42c
	if (cr6.lt) goto loc_82C3B42C;
loc_82C3B428:
	// twi 31,r0,22
loc_82C3B42C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3b450
	if (cr6.eq) goto loc_82C3B450;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82c3b454
	if (cr6.lt) goto loc_82C3B454;
loc_82C3B450:
	// twi 31,r0,22
loc_82C3B454:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwzx r30,r26,r10
	r30.u64 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b478
	if (cr6.eq) goto loc_82C3B478;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b47c
	if (cr6.lt) goto loc_82C3B47C;
loc_82C3B478:
	// twi 31,r0,22
loc_82C3B47C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// add r29,r26,r11
	r29.u64 = r26.u64 + r11.u64;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B4B0:
	// cmplwi cr6,r27,7
	cr6.compare<uint32_t>(r27.u32, 7, xer);
	// bge cr6,0x82c3b564
	if (!cr6.lt) goto loc_82C3B564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwzx r4,r25,r23
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8228a4c0
	sub_8228A4C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
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
	// beq cr6,0x82c3b564
	if (cr6.eq) goto loc_82C3B564;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// lfsx f12,r25,r24
	temp.u32 = PPC_LOAD_U32(r25.u32 + r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// fsel f11,f13,f30,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : f0.f64;
	// fsubs f10,f31,f11
	ctx.f10.f64 = static_cast<float>(f31.f64 - ctx.f11.f64);
	// fsel f9,f10,f11,f31
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : f31.f64;
	// fmuls f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82c3b548
	if (cr6.eq) goto loc_82C3B548;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3b54c
	if (cr6.lt) goto loc_82C3B54C;
loc_82C3B548:
	// twi 31,r0,22
loc_82C3B54C:
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B564:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82c3b390
	if (cr6.lt) goto loc_82C3B390;
loc_82C3B57C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
loc_82C3B58C:
	// bl 0x82c08ce8
	sub_82C08CE8(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + r11.u64;
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
loc_82C3B5AC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82C3B298) {
	__imp__sub_82C3B298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B5C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3b630
	if (cr6.lt) goto loc_82C3B630;
	// bne cr6,0x82c3b714
	if (!cr6.eq) goto loc_82C3B714;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3b688
	if (cr6.lt) goto loc_82C3B688;
	// bne cr6,0x82c3b714
	if (!cr6.eq) goto loc_82C3B714;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b738
	if (cr6.eq) goto loc_82C3B738;
	// b 0x82c3b650
	goto loc_82C3B650;
loc_82C3B630:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3b688
	if (cr6.lt) goto loc_82C3B688;
	// bne cr6,0x82c3b714
	if (!cr6.eq) goto loc_82C3B714;
loc_82C3B650:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c39510
	sub_82C39510(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c3b73c
	goto loc_82C3B73C;
loc_82C3B688:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c39510
	sub_82C39510(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b70c
	if (cr6.eq) goto loc_82C3B70C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82c1b998
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c3b71c
	if (cr6.eq) goto loc_82C3B71C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r10,-20180
	r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
loc_82C3B70C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C3B714:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3b73c
	goto loc_82C3B73C;
loc_82C3B71C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C3B738:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3B73C:
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

PPC_WEAK_FUNC(sub_82C3B5C8) {
	__imp__sub_82C3B5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82c3b5c8
	sub_82C3B5C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C3B758) {
	__imp__sub_82C3B758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19940
	ctx.r3.s64 = r11.s64 + 19940;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3B768) {
	__imp__sub_82C3B768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3b794
	if (cr6.eq) goto loc_82C3B794;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82c3b794
	if (!cr6.eq) goto loc_82C3B794;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19936
	ctx.r3.s64 = r11.s64 + 19936;
	// blr 
	return;
loc_82C3B794:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19932
	ctx.r3.s64 = r11.s64 + 19932;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3B778) {
	__imp__sub_82C3B778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B7A0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x82c3b844
	if (cr6.eq) goto loc_82C3B844;
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
loc_82C3B7C8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// beq cr6,0x82c3b82c
	if (cr6.eq) goto loc_82C3B82C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b800
	if (cr6.eq) goto loc_82C3B800;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B800:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b81c
	if (cr6.eq) goto loc_82C3B81C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B81C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-4) );
	// stw r10,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r10.u32);
loc_82C3B82C:
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bne cr6,0x82c3b7c8
	if (!cr6.eq) goto loc_82C3B7C8;
loc_82C3B844:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3B7A0) {
	__imp__sub_82C3B7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B850) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x82c3b914
	if (cr6.eq) goto loc_82C3B914;
	// addi r30,r28,20
	r30.s64 = r28.s64 + 20;
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
loc_82C3B878:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lfs f0,-16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -16, temp.u32);
	// lfs f13,-12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + -12, temp.u32);
	// lfs f12,-8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + -8, temp.u32);
	// beq cr6,0x82c3b8f4
	if (cr6.eq) goto loc_82C3B8F4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b8c8
	if (cr6.eq) goto loc_82C3B8C8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B8C8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b8e4
	if (cr6.eq) goto loc_82C3B8E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B8E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// stw r10,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r10.u32);
loc_82C3B8F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// bne cr6,0x82c3b878
	if (!cr6.eq) goto loc_82C3B878;
loc_82C3B914:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3B850) {
	__imp__sub_82C3B850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B920) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// beq cr6,0x82c3b9c4
	if (cr6.eq) goto loc_82C3B9C4;
	// addi r30,r28,8
	r30.s64 = r28.s64 + 8;
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
loc_82C3B948:
	// addi r29,r29,-12
	r29.s64 = r29.s64 + -12;
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// addi r28,r28,-12
	r28.s64 = r28.s64 + -12;
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82c3b9bc
	if (cr6.eq) goto loc_82C3B9BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3b990
	if (cr6.eq) goto loc_82C3B990;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B990:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b9ac
	if (cr6.eq) goto loc_82C3B9AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3B9AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// stw r10,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r10.u32);
loc_82C3B9BC:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bne cr6,0x82c3b948
	if (!cr6.eq) goto loc_82C3B948;
loc_82C3B9C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3B920) {
	__imp__sub_82C3B920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3B9D0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// beq cr6,0x82c3ba94
	if (cr6.eq) goto loc_82C3BA94;
	// addi r30,r28,20
	r30.s64 = r28.s64 + 20;
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
loc_82C3B9F8:
	// addi r29,r29,-28
	r29.s64 = r29.s64 + -28;
	// addi r28,r28,-28
	r28.s64 = r28.s64 + -28;
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// addi r30,r30,-28
	r30.s64 = r30.s64 + -28;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lfs f0,-16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -16, temp.u32);
	// lfs f13,-12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + -12, temp.u32);
	// lfs f12,-8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + -8, temp.u32);
	// beq cr6,0x82c3ba84
	if (cr6.eq) goto loc_82C3BA84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ba58
	if (cr6.eq) goto loc_82C3BA58;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3BA58:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ba74
	if (cr6.eq) goto loc_82C3BA74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3BA74:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// stw r10,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r10.u32);
loc_82C3BA84:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bne cr6,0x82c3b9f8
	if (!cr6.eq) goto loc_82C3B9F8;
loc_82C3BA94:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3B9D0) {
	__imp__sub_82C3B9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BAA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-15572
	ctx.r10.s64 = r11.s64 + -15572;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00140
	sub_82C00140(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3bae4
	if (cr6.eq) goto loc_82C3BAE4;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C3BAE4:
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

PPC_WEAK_FUNC(sub_82C3BAA0) {
	__imp__sub_82C3BAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BB00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82c3bb64
	if (cr6.eq) goto loc_82C3BB64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3BB64:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

PPC_WEAK_FUNC(sub_82C3BB00) {
	__imp__sub_82C3BB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BB88) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// beq cr6,0x82c3bc20
	if (cr6.eq) goto loc_82C3BC20;
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
loc_82C3BBB0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82c3bc10
	if (cr6.eq) goto loc_82C3BC10;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3bbe4
	if (cr6.eq) goto loc_82C3BBE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3BBE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bc00
	if (cr6.eq) goto loc_82C3BC00;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3BC00:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r10,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r10.u32);
loc_82C3BC10:
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bne cr6,0x82c3bbb0
	if (!cr6.eq) goto loc_82C3BBB0;
loc_82C3BC20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3BB88) {
	__imp__sub_82C3BB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BC28) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x82c3bce0
	if (cr6.eq) goto loc_82C3BCE0;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
loc_82C3BC50:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -16, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// beq cr6,0x82c3bcc8
	if (cr6.eq) goto loc_82C3BCC8;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3bc9c
	if (cr6.eq) goto loc_82C3BC9C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3BC9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bcb8
	if (cr6.eq) goto loc_82C3BCB8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3BCB8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// stw r10,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r10.u32);
loc_82C3BCC8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bne cr6,0x82c3bc50
	if (!cr6.eq) goto loc_82C3BC50;
loc_82C3BCE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3BC28) {
	__imp__sub_82C3BC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BCE8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19932
	ctx.r4.s64 = ctx.r10.s64 + 19932;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3bd28
	if (!cr6.eq) goto loc_82C3BD28;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C3BD28:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3BCE8) {
	__imp__sub_82C3BCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BD40) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19932
	ctx.r4.s64 = ctx.r10.s64 + 19932;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3bd90
	if (!cr6.eq) goto loc_82C3BD90;
loc_82C3BD78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C3BD90:
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40ec0
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3bd78
	if (cr6.eq) goto loc_82C3BD78;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_82C3BD40) {
	__imp__sub_82C3BD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BDD0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3be08
	if (cr6.eq) goto loc_82C3BE08;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-15572
	ctx.r10.s64 = r11.s64 + -15572;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C3BE08:
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

PPC_WEAK_FUNC(sub_82C3BDD0) {
	__imp__sub_82C3BDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BE20) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-16948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16948);
	f0.f64 = double(temp.f32);
	// lfs f13,2756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2756);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
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

PPC_WEAK_FUNC(sub_82C3BE20) {
	__imp__sub_82C3BE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19932
	ctx.r3.s64 = r11.s64 + 19932;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3BE78) {
	__imp__sub_82C3BE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BE88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-20648
	ctx.r4.s64 = r11.s64 + -20648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3bee0
	if (cr6.eq) goto loc_82C3BEE0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,-19400
	ctx.r4.s64 = r11.s64 + -19400;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c14d70
	sub_82C14D70(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3bee4
	if (!cr6.eq) goto loc_82C3BEE4;
loc_82C3BEE0:
	// li r29,0
	r29.s64 = 0;
loc_82C3BEE4:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,-9616
	ctx.r4.s64 = r11.s64 + -9616;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r10,30936
	ctx.r4.s64 = ctx.r10.s64 + 30936;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3BE88) {
	__imp__sub_82C3BE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BF18) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-16096
	ctx.r10.s64 = r11.s64 + -16096;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bf54
	if (cr6.eq) goto loc_82C3BF54;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82C3BF54:
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

PPC_WEAK_FUNC(sub_82C3BF18) {
	__imp__sub_82C3BF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3BF68) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3bfdc
	if (cr6.eq) goto loc_82C3BFDC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3be88
	sub_82C3BE88(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3bfdc
	if (cr6.eq) goto loc_82C3BFDC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3bfe0
	if (!cr6.eq) goto loc_82C3BFE0;
loc_82C3BFDC:
	// li r11,0
	r11.s64 = 0;
loc_82C3BFE0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C3BF68) {
	__imp__sub_82C3BF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19936
	ctx.r3.s64 = r11.s64 + 19936;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3C000) {
	__imp__sub_82C3C000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r7,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r7.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// beq 0x82c3c04c
	if (cr0.eq) goto loc_82C3C04C;
loc_82C3C034:
	// divw r10,r6,r11
	ctx.r10.s32 = ctx.r6.s32 / r11.s32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// subf. r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x82c3c034
	if (!cr0.eq) goto loc_82C3C034;
loc_82C3C04C:
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82c3c0d0
	if (!cr6.lt) goto loc_82C3C0D0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82c3c0d0
	if (!cr6.gt) goto loc_82C3C0D0;
	// rlwinm r11,r6,2,0,29
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
loc_82C3C068:
	// add r11,r9,r4
	r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c3c080
	if (!cr6.eq) goto loc_82C3C080;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82C3C080:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c3c0c0
	if (cr6.eq) goto loc_82C3C0C0;
loc_82C3C088:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// bge cr6,0x82c3c0ac
	if (!cr6.lt) goto loc_82C3C0AC;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// b 0x82c3c0b8
	goto loc_82C3C0B8;
loc_82C3C0AC:
	// subf r11,r10,r7
	r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_82C3C0B8:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c3c088
	if (!cr6.eq) goto loc_82C3C088;
loc_82C3C0C0:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bgt 0x82c3c068
	if (cr0.gt) goto loc_82C3C068;
loc_82C3C0D0:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3C010) {
	__imp__sub_82C3C010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C0E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-18640
	ctx.r4.s64 = r11.s64 + -18640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c1e0
	if (cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,-15500
	ctx.r4.s64 = r11.s64 + -15500;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c1e0
	if (cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,-18672
	ctx.r4.s64 = r11.s64 + -18672;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c1e0
	if (cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,-15512
	ctx.r4.s64 = r11.s64 + -15512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c14f38
	sub_82C14F38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c1e0
	if (cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,-19236
	ctx.r4.s64 = r11.s64 + -19236;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c1e0
	if (cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// addi r4,r11,-9616
	ctx.r4.s64 = r11.s64 + -9616;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c1e0
	if (cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// addi r4,r11,30936
	ctx.r4.s64 = r11.s64 + 30936;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3c1e4
	if (!cr6.eq) goto loc_82C3C1E4;
loc_82C3C1E0:
	// li r11,0
	r11.s64 = 0;
loc_82C3C1E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C3C0E0) {
	__imp__sub_82C3C0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C200) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3c274
	if (cr6.eq) goto loc_82C3C274;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3c0e0
	sub_82C3C0E0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3c274
	if (cr6.eq) goto loc_82C3C274;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3c278
	if (!cr6.eq) goto loc_82C3C278;
loc_82C3C274:
	// li r11,0
	r11.s64 = 0;
loc_82C3C278:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C3C200) {
	__imp__sub_82C3C200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// subf r11,r3,r5
	r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// ble cr6,0x82c3c454
	if (!cr6.gt) goto loc_82C3C454;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c3c2e0
	if (!cr6.lt) goto loc_82C3C2E0;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82C3C2E0:
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c3c300
	if (!cr6.lt) goto loc_82C3C300;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82C3C300:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c3c320
	if (!cr6.lt) goto loc_82C3C320;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82C3C320:
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - r11.s64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, xer);
	// bge cr6,0x82c3c344
	if (!cr6.lt) goto loc_82C3C344;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82C3C344:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// bge cr6,0x82c3c364
	if (!cr6.lt) goto loc_82C3C364;
	// stwx r9,r11,r4
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82C3C364:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// bge cr6,0x82c3c384
	if (!cr6.lt) goto loc_82C3C384;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82C3C384:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// subf r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r31,0(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, xer);
	// bge cr6,0x82c3c3ac
	if (!cr6.lt) goto loc_82C3C3AC;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82C3C3AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// bge cr6,0x82c3c3cc
	if (!cr6.lt) goto loc_82C3C3CC;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82C3C3CC:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x82c3c3ec
	if (!cr6.lt) goto loc_82C3C3EC;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82C3C3EC:
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c3c40c
	if (!cr6.lt) goto loc_82C3C40C;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82C3C40C:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c3c42c
	if (!cr6.lt) goto loc_82C3C42C;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_82C3C42C:
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c3c4b4
	if (!cr6.lt) goto loc_82C3C4B4;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82C3C454:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82c3c474
	if (!cr6.lt) goto loc_82C3C474;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82C3C474:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82c3c494
	if (!cr6.lt) goto loc_82C3C494;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_82C3C494:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82c3c4b4
	if (!cr6.lt) goto loc_82C3C4B4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82C3C4B4:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3C298) {
	__imp__sub_82C3C298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C4C0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c3c510
	if (!cr6.eq) goto loc_82C3C510;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c554
	if (cr6.eq) goto loc_82C3C554;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15536
	ctx.r9.s64 = ctx.r10.s64 + -15536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C3C510:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82c3c554
	if (!cr6.eq) goto loc_82C3C554;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c554
	if (cr6.eq) goto loc_82C3C554;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15524
	ctx.r9.s64 = ctx.r10.s64 + -15524;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C3C554:
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

PPC_WEAK_FUNC(sub_82C3C4C0) {
	__imp__sub_82C3C4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C568) {
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
	// bl 0x82c3bd40
	sub_82C3BD40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3c59c
	if (!cr6.eq) goto loc_82C3C59C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C3C59C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,19936
	ctx.r4.s64 = ctx.r10.s64 + 19936;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
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

PPC_WEAK_FUNC(sub_82C3C568) {
	__imp__sub_82C3C568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C5D8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,19932
	ctx.r4.s64 = ctx.r10.s64 + 19932;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3c624
	if (!cr6.eq) goto loc_82C3C624;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C3C624:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82C3C5D8) {
	__imp__sub_82C3C5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C648) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b920
	sub_82C3B920(ctx, base);
	// subf r8,r31,r30
	ctx.r8.s64 = r30.s64 - r31.s64;
	// li r7,12
	ctx.r7.s64 = 12;
	// divw r11,r8,r7
	r11.s32 = ctx.r8.s32 / ctx.r7.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r5,r29
	ctx.r3.s64 = r29.s64 - ctx.r5.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3C648) {
	__imp__sub_82C3C648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C6A8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b9d0
	sub_82C3B9D0(ctx, base);
	// subf r8,r31,r30
	ctx.r8.s64 = r30.s64 - r31.s64;
	// li r7,28
	ctx.r7.s64 = 28;
	// divw r6,r8,r7
	ctx.r6.s32 = ctx.r8.s32 / ctx.r7.s32;
	// mulli r5,r6,28
	ctx.r5.s64 = ctx.r6.s64 * 28;
	// subf r3,r5,r29
	ctx.r3.s64 = r29.s64 - ctx.r5.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3C6A8) {
	__imp__sub_82C3C6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3C700) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3c84c
	if (cr6.lt) goto loc_82C3C84C;
	// bne cr6,0x82c3c9ac
	if (!cr6.eq) goto loc_82C3C9AC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3c7ac
	if (cr6.lt) goto loc_82C3C7AC;
	// bne cr6,0x82c3c9ac
	if (!cr6.eq) goto loc_82C3C9AC;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c3ca30
	if (!cr6.gt) goto loc_82C3CA30;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C3C76C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82c3bf68
	sub_82C3BF68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c9ac
	if (cr6.eq) goto loc_82C3C9AC;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82c3c76c
	if (cr6.lt) goto loc_82C3C76C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3C7AC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r27,r11,6544
	r27.s64 = r11.s64 + 6544;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82c02b98
	sub_82C02B98(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c3ca30
	if (cr6.eq) goto loc_82C3CA30;
loc_82C3C7EC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c808
	if (cr6.eq) goto loc_82C3C808;
	// bl 0x82c3be20
	sub_82C3BE20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82c3c80c
	goto loc_82C3C80C;
loc_82C3C808:
	// li r31,0
	r31.s64 = 0;
loc_82C3C80C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c3bf68
	sub_82C3BF68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3c9ac
	if (cr6.eq) goto loc_82C3C9AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82c3c7ec
	if (cr6.lt) goto loc_82C3C7EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3C84C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3c908
	if (cr6.lt) goto loc_82C3C908;
	// bne cr6,0x82c3c9ac
	if (!cr6.eq) goto loc_82C3C9AC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c3c9ac
	if (cr6.eq) goto loc_82C3C9AC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ca30
	if (cr6.eq) goto loc_82C3CA30;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,6544
	r30.s64 = r11.s64 + 6544;
loc_82C3C8C8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82c3bf68
	sub_82C3BF68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3c9ac
	if (cr6.eq) goto loc_82C3C9AC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c3c8c8
	if (cr6.lt) goto loc_82C3C8C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3C908:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c3c9ac
	if (cr6.eq) goto loc_82C3C9AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c3c9b8
	if (!cr6.gt) goto loc_82C3C9B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r10,-20240
	r29.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r27,r9,-20272
	r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
loc_82C3C9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3C9B8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ca30
	if (cr6.eq) goto loc_82C3CA30;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C3C9D8:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c9f4
	if (cr6.eq) goto loc_82C3C9F4;
	// bl 0x82c3be20
	sub_82C3BE20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82c3c9f8
	goto loc_82C3C9F8;
loc_82C3C9F4:
	// li r31,0
	r31.s64 = 0;
loc_82C3C9F8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c3bf68
	sub_82C3BF68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3c9ac
	if (cr6.eq) goto loc_82C3C9AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82c3c9d8
	if (cr6.lt) goto loc_82C3C9D8;
loc_82C3CA30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C3C700) {
	__imp__sub_82C3C700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3CA40) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3cb78
	if (cr6.lt) goto loc_82C3CB78;
	// bne cr6,0x82c3ccd8
	if (!cr6.eq) goto loc_82C3CCD8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3caec
	if (cr6.lt) goto loc_82C3CAEC;
	// bne cr6,0x82c3ccd8
	if (!cr6.eq) goto loc_82C3CCD8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c3cd48
	if (!cr6.gt) goto loc_82C3CD48;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C3CAAC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c3c200
	sub_82C3C200(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3ccd8
	if (cr6.eq) goto loc_82C3CCD8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c3caac
	if (cr6.lt) goto loc_82C3CAAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3CAEC:
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r11,6544
	r26.s64 = r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82c02b98
	sub_82C02B98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c3cd48
	if (cr6.eq) goto loc_82C3CD48;
loc_82C3CB2C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3c200
	sub_82C3C200(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ccd8
	if (cr6.eq) goto loc_82C3CCD8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82c3cb2c
	if (cr6.lt) goto loc_82C3CB2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3CB78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3cc34
	if (cr6.lt) goto loc_82C3CC34;
	// bne cr6,0x82c3ccd8
	if (!cr6.eq) goto loc_82C3CCD8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c3ccd8
	if (cr6.eq) goto loc_82C3CCD8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3cd48
	if (cr6.eq) goto loc_82C3CD48;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C3CBF4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c3c200
	sub_82C3C200(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3ccd8
	if (cr6.eq) goto loc_82C3CCD8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82c3cbf4
	if (cr6.lt) goto loc_82C3CBF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3CC34:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c3ccd8
	if (cr6.eq) goto loc_82C3CCD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c3cce4
	if (!cr6.gt) goto loc_82C3CCE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r27,r9,-20272
	r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
loc_82C3CCD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C3CCE4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3cd48
	if (cr6.eq) goto loc_82C3CD48;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C3CD04:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3c200
	sub_82C3C200(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3ccd8
	if (cr6.eq) goto loc_82C3CCD8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c3cd04
	if (cr6.lt) goto loc_82C3CD04;
loc_82C3CD48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C3CA40) {
	__imp__sub_82C3CA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3CD58) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82c3cdc0
	if (cr6.eq) goto loc_82C3CDC0;
loc_82C3CD78:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c3cdb0
	if (cr6.eq) goto loc_82C3CDB0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82c3cdb0
	if (cr6.eq) goto loc_82C3CDB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3CDB0:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82c3cd78
	if (!cr6.eq) goto loc_82C3CD78;
loc_82C3CDC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3CD58) {
	__imp__sub_82C3CD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3CDD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82c3ce58
	if (cr6.eq) goto loc_82C3CE58;
loc_82C3CDF0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c3ce48
	if (cr6.eq) goto loc_82C3CE48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82c3ce40
	if (cr6.eq) goto loc_82C3CE40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3CE40:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_82C3CE48:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82c3cdf0
	if (!cr6.eq) goto loc_82C3CDF0;
loc_82C3CE58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3CDD0) {
	__imp__sub_82C3CDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3CE68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82c3cec0
	if (cr6.eq) goto loc_82C3CEC0;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// li r29,0
	r29.s64 = 0;
loc_82C3CE8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3cea8
	if (cr6.eq) goto loc_82C3CEA8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3CEA8:
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r29.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82c3ce8c
	if (!cr6.eq) goto loc_82C3CE8C;
loc_82C3CEC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3CE68) {
	__imp__sub_82C3CE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3CEC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82c3cf20
	if (cr6.eq) goto loc_82C3CF20;
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// li r29,0
	r29.s64 = 0;
loc_82C3CEEC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3cf08
	if (cr6.eq) goto loc_82C3CF08;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3CF08:
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r29.u32);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82c3ceec
	if (!cr6.eq) goto loc_82C3CEEC;
loc_82C3CF20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3CEC8) {
	__imp__sub_82C3CEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3CF28) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c3cf8c
	if (cr6.eq) goto loc_82C3CF8C;
loc_82C3CF48:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c3cf80
	if (cr6.eq) goto loc_82C3CF80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82c3cf80
	if (cr6.eq) goto loc_82C3CF80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3CF80:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x82c3cf48
	if (!cr0.eq) goto loc_82C3CF48;
loc_82C3CF8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3CF28) {
	__imp__sub_82C3CF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3CF98) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82c3d01c
	if (cr6.eq) goto loc_82C3D01C;
loc_82C3CFB8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c3d010
	if (cr6.eq) goto loc_82C3D010;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82c3d008
	if (cr6.eq) goto loc_82C3D008;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3D008:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82C3D010:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bne 0x82c3cfb8
	if (!cr0.eq) goto loc_82C3CFB8;
loc_82C3D01C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3CF98) {
	__imp__sub_82C3CF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D028) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16096
	ctx.r9.s64 = r11.s64 + -16096;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r8,-17212
	ctx.r7.s64 = ctx.r8.s64 + -17212;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_82C3D028) {
	__imp__sub_82C3D028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D090) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r27.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// beq cr6,0x82c3d0c8
	if (cr6.eq) goto loc_82C3D0C8;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3d0cc
	if (cr6.eq) goto loc_82C3D0CC;
loc_82C3D0C8:
	// twi 31,r0,22
loc_82C3D0CC:
	// lwz r30,180(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r28,188(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82c3d144
	if (cr6.eq) goto loc_82C3D144;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lwz r26,8(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b7a0
	sub_82C3B7A0(ctx, base);
	// subf r8,r28,r26
	ctx.r8.s64 = r26.s64 - r28.s64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r7,12
	ctx.r7.s64 = 12;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// divw r11,r8,r7
	r11.s32 = ctx.r8.s32 / ctx.r7.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3ce68
	sub_82C3CE68(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82C3D144:
	// std r27,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r27.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C3D090) {
	__imp__sub_82C3D090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D158) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r27.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// beq cr6,0x82c3d190
	if (cr6.eq) goto loc_82C3D190;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3d194
	if (cr6.eq) goto loc_82C3D194;
loc_82C3D190:
	// twi 31,r0,22
loc_82C3D194:
	// lwz r30,180(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r28,188(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82c3d204
	if (cr6.eq) goto loc_82C3D204;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lwz r26,8(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b850
	sub_82C3B850(ctx, base);
	// subf r8,r28,r26
	ctx.r8.s64 = r26.s64 - r28.s64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r7,28
	ctx.r7.s64 = 28;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// divw r3,r8,r7
	ctx.r3.s32 = ctx.r8.s32 / ctx.r7.s32;
	// mulli r11,r3,28
	r11.s64 = ctx.r3.s64 * 28;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3cec8
	sub_82C3CEC8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82C3D204:
	// std r27,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r27.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C3D158) {
	__imp__sub_82C3D158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D218) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cf28
	sub_82C3CF28(ctx, base);
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
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

PPC_WEAK_FUNC(sub_82C3D218) {
	__imp__sub_82C3D218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D288) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cf98
	sub_82C3CF98(ctx, base);
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
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

PPC_WEAK_FUNC(sub_82C3D288) {
	__imp__sub_82C3D288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D2F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-15536
	ctx.r9.s64 = r11.s64 + -15536;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-16696
	ctx.r6.s64 = ctx.r7.s64 + -16696;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c2fdc0
	sub_82C2FDC0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d364
	if (cr6.eq) goto loc_82C3D364;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82C3D364:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c00008
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3D2F0) {
	__imp__sub_82C3D2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D378) {
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
	// bl 0x82c3d2f0
	sub_82C3D2F0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3d3b0
	if (cr6.eq) goto loc_82C3D3B0;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C3D3B0:
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

PPC_WEAK_FUNC(sub_82C3D378) {
	__imp__sub_82C3D378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D3C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-15524
	ctx.r9.s64 = r11.s64 + -15524;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d43c
	if (cr6.eq) goto loc_82C3D43C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82C3D43C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c00008
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3D3C8) {
	__imp__sub_82C3D3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D450) {
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
	// bl 0x82c3d3c8
	sub_82C3D3C8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3d488
	if (cr6.eq) goto loc_82C3D488;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C3D488:
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

PPC_WEAK_FUNC(sub_82C3D450) {
	__imp__sub_82C3D450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D4A0) {
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
	// lis r11,5461
	r11.s64 = 357892096;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// ori r10,r11,21845
	ctx.r10.u64 = r11.u64 | 21845;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3d4d0
	if (!cr6.gt) goto loc_82C3D4D0;
	// bl 0x82bf8e78
	sub_82BF8E78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C3D4D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r27,12
	r27.s64 = 12;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3d4ec
	if (!cr6.eq) goto loc_82C3D4EC;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82c3d4f8
	goto loc_82C3D4F8;
loc_82C3D4EC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r9,r27
	r11.s32 = ctx.r9.s32 / r27.s32;
loc_82C3D4F8:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bge cr6,0x82c3d5a4
	if (!cr6.lt) goto loc_82C3D5A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c49908
	sub_82C49908(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x82c3d528
	if (!cr6.gt) goto loc_82C3D528;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82C3D528:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	sub_82C3CD58(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d578
	if (cr6.eq) goto loc_82C3D578;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// divw r29,r10,r27
	r29.s32 = ctx.r10.s32 / r27.s32;
	// bl 0x82c3ce68
	sub_82C3CE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3D578:
	// rlwinm r11,r29,1,0,30
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = r11.u64 + r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
loc_82C3D5A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3D4A0) {
	__imp__sub_82C3D4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D5B0) {
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
	// lis r11,2340
	r11.s64 = 153354240;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// ori r10,r11,37449
	ctx.r10.u64 = r11.u64 | 37449;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3d5e0
	if (!cr6.gt) goto loc_82C3D5E0;
	// bl 0x82bf8e78
	sub_82BF8E78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C3D5E0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r28,28
	r28.s64 = 28;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3d5fc
	if (!cr6.eq) goto loc_82C3D5FC;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82c3d608
	goto loc_82C3D608;
loc_82C3D5FC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r9,r28
	r11.s32 = ctx.r9.s32 / r28.s32;
loc_82C3D608:
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82c3d6a4
	if (!cr6.lt) goto loc_82C3D6A4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829fed20
	sub_829FED20(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x82c3d638
	if (!cr6.gt) goto loc_82C3D638;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82C3D638:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	sub_82C3CDD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d688
	if (cr6.eq) goto loc_82C3D688;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// divw r29,r10,r28
	r29.s32 = ctx.r10.s32 / r28.s32;
	// bl 0x82c3cec8
	sub_82C3CEC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3D688:
	// mulli r10,r27,28
	ctx.r10.s64 = r27.s64 * 28;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mulli r11,r29,28
	r11.s64 = r29.s64 * 28;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_82C3D6A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3D5B0) {
	__imp__sub_82C3D5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D6B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,8(r6)
	r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// beq cr6,0x82c3d6fc
	if (cr6.eq) goto loc_82C3D6FC;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3D6FC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r26,12
	r26.s64 = 12;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d718
	if (!cr6.eq) goto loc_82C3D718;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// b 0x82c3d724
	goto loc_82C3D724;
loc_82C3D718:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / r26.s32;
loc_82C3D724:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c3d98c
	if (cr6.eq) goto loc_82C3D98C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d73c
	if (!cr6.eq) goto loc_82C3D73C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3d748
	goto loc_82C3D748;
loc_82C3D73C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	r11.s32 = ctx.r9.s32 / r26.s32;
loc_82C3D748:
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// ori r9,r9,21845
	ctx.r9.u64 = ctx.r9.u64 | 21845;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bge cr6,0x82c3d764
	if (!cr6.lt) goto loc_82C3D764;
	// bl 0x82bf8e78
	sub_82BF8E78(ctx, base);
	// b 0x82c3d98c
	goto loc_82C3D98C;
loc_82C3D764:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d774
	if (!cr6.eq) goto loc_82C3D774;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3d780
	goto loc_82C3D780;
loc_82C3D774:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r7,r26
	r11.s32 = ctx.r7.s32 / r26.s32;
loc_82C3D780:
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82c3d8d4
	if (!cr6.lt) goto loc_82C3D8D4;
	// rlwinm r11,r8,31,1,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r27,r25
	r27.u64 = r25.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c3d7a4
	if (cr6.lt) goto loc_82C3D7A4;
	// add r27,r11,r8
	r27.u64 = r11.u64 + ctx.r8.u64;
loc_82C3D7A4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d7b4
	if (!cr6.eq) goto loc_82C3D7B4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3d7c0
	goto loc_82C3D7C0;
loc_82C3D7B4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	r11.s32 = ctx.r9.s32 / r26.s32;
loc_82C3D7C0:
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x82c3d7ec
	if (!cr6.lt) goto loc_82C3D7EC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d7dc
	if (!cr6.eq) goto loc_82C3D7DC;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3d7e8
	goto loc_82C3D7E8;
loc_82C3D7DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r10,r26
	r11.s32 = ctx.r10.s32 / r26.s32;
loc_82C3D7E8:
	// add r27,r11,r28
	r27.u64 = r11.u64 + r28.u64;
loc_82C3D7EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c49908
	sub_82C49908(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r29,204(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(204) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	sub_82C3CD58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3d218
	sub_82C3D218(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r25,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r25.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	sub_82C3CD58(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3d874
	if (!cr6.eq) goto loc_82C3D874;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3d880
	goto loc_82C3D880;
loc_82C3D874:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r10,r26
	r11.s32 = ctx.r10.s32 / r26.s32;
loc_82C3D880:
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d8a4
	if (cr6.eq) goto loc_82C3D8A4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82c3ce68
	sub_82C3CE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3D8A4:
	// rlwinm r11,r27,1,0,30
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// b 0x82c3d988
	goto loc_82C3D988;
loc_82C3D8D4:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r30,204(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(204) );
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// divw r10,r11,r26
	ctx.r10.s32 = r11.s32 / r26.s32;
	// rlwinm r11,r28,1,0,30
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + r11.u64;
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r25.u8);
	// bge cr6,0x82c3d94c
	if (!cr6.lt) goto loc_82C3D94C;
	// rlwinm r29,r9,2,0,29
	r29.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r5,r29,r30
	ctx.r5.u64 = r29.u64 + r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	sub_82C3CD58(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r8,r30,r4
	ctx.r8.s64 = ctx.r4.s64 - r30.s64;
	// divw r7,r8,r26
	ctx.r7.s32 = ctx.r8.s32 / r26.s32;
	// subf r5,r7,r28
	ctx.r5.s64 = r28.s64 - ctx.r7.s64;
	// bl 0x82c3d218
	sub_82C3D218(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// subf r4,r29,r11
	ctx.r4.s64 = r11.s64 - r29.s64;
	// b 0x82c3d97c
	goto loc_82C3D97C;
loc_82C3D94C:
	// rlwinm r28,r9,2,0,29
	r28.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r27,r28,r29
	r27.s64 = r29.s64 - r28.s64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	sub_82C3CD58(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3c648
	sub_82C3C648(ctx, base);
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
loc_82C3D97C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3bb88
	sub_82C3BB88(ctx, base);
loc_82C3D988:
	// lwz r24,96(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
loc_82C3D98C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82c3d9a8
	if (cr6.eq) goto loc_82C3D9A8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3D9A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82C3D6B0) {
	__imp__sub_82C3D6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3D9B0) {
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
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82c3bb00
	sub_82C3BB00(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r26,28
	r26.s64 = 28;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d9f0
	if (!cr6.eq) goto loc_82C3D9F0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// b 0x82c3d9fc
	goto loc_82C3D9FC;
loc_82C3D9F0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / r26.s32;
loc_82C3D9FC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82c3dc44
	if (cr6.eq) goto loc_82C3DC44;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3da14
	if (!cr6.eq) goto loc_82C3DA14;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3da20
	goto loc_82C3DA20;
loc_82C3DA14:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	r11.s32 = ctx.r9.s32 / r26.s32;
loc_82C3DA20:
	// lis r9,2340
	ctx.r9.s64 = 153354240;
	// ori r9,r9,37449
	ctx.r9.u64 = ctx.r9.u64 | 37449;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// bge cr6,0x82c3da3c
	if (!cr6.lt) goto loc_82C3DA3C;
	// bl 0x82bf8e78
	sub_82BF8E78(ctx, base);
	// b 0x82c3dc44
	goto loc_82C3DC44;
loc_82C3DA3C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3da4c
	if (!cr6.eq) goto loc_82C3DA4C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3da58
	goto loc_82C3DA58;
loc_82C3DA4C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r7,r26
	r11.s32 = ctx.r7.s32 / r26.s32;
loc_82C3DA58:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82c3db9c
	if (!cr6.lt) goto loc_82C3DB9C;
	// rlwinm r11,r8,31,1,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r28,r25
	r28.u64 = r25.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c3da7c
	if (cr6.lt) goto loc_82C3DA7C;
	// add r28,r11,r8
	r28.u64 = r11.u64 + ctx.r8.u64;
loc_82C3DA7C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3da8c
	if (!cr6.eq) goto loc_82C3DA8C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3da98
	goto loc_82C3DA98;
loc_82C3DA8C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	r11.s32 = ctx.r9.s32 / r26.s32;
loc_82C3DA98:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82c3dac4
	if (!cr6.lt) goto loc_82C3DAC4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3dab4
	if (!cr6.eq) goto loc_82C3DAB4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3dac0
	goto loc_82C3DAC0;
loc_82C3DAB4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r10,r26
	r11.s32 = ctx.r10.s32 / r26.s32;
loc_82C3DAC0:
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
loc_82C3DAC4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829fed20
	sub_829FED20(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r29,220(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	sub_82C3CDD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3d288
	sub_82C3D288(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r25,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r25.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	sub_82C3CDD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3db4c
	if (!cr6.eq) goto loc_82C3DB4C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82c3db58
	goto loc_82C3DB58;
loc_82C3DB4C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r10,r26
	r11.s32 = ctx.r10.s32 / r26.s32;
loc_82C3DB58:
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3db7c
	if (cr6.eq) goto loc_82C3DB7C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82c3cec8
	sub_82C3CEC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3DB7C:
	// mulli r11,r28,28
	r11.s64 = r28.s64 * 28;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mulli r10,r29,28
	ctx.r10.s64 = r29.s64 * 28;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x82c3dc44
	goto loc_82C3DC44;
loc_82C3DB9C:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r28,r27,28
	r28.s64 = r27.s64 * 28;
	// lwz r30,220(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// divw r10,r11,r26
	ctx.r10.s32 = r11.s32 / r26.s32;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// bge cr6,0x82c3dc0c
	if (!cr6.lt) goto loc_82C3DC0C;
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	sub_82C3CDD0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r10,r30,r4
	ctx.r10.s64 = ctx.r4.s64 - r30.s64;
	// divw r9,r10,r26
	ctx.r9.s32 = ctx.r10.s32 / r26.s32;
	// subf r5,r9,r27
	ctx.r5.s64 = r27.s64 - ctx.r9.s64;
	// bl 0x82c3d288
	sub_82C3D288(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// b 0x82c3dc38
	goto loc_82C3DC38;
loc_82C3DC0C:
	// subf r27,r28,r29
	r27.s64 = r29.s64 - r28.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	sub_82C3CDD0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3c6a8
	sub_82C3C6A8(ctx, base);
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
loc_82C3DC38:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3bc28
	sub_82C3BC28(ctx, base);
loc_82C3DC44:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3dc60
	if (cr6.eq) goto loc_82C3DC60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3DC60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82C3D9B0) {
	__imp__sub_82C3D9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3DC68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3dc98
	if (!cr6.eq) goto loc_82C3DC98;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x82c3dca4
	goto loc_82C3DCA4;
loc_82C3DC98:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DCA4:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c3dcf8
	if (!cr6.lt) goto loc_82C3DCF8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3dcbc
	if (!cr6.eq) goto loc_82C3DCBC;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x82c3dcc8
	goto loc_82C3DCC8;
loc_82C3DCBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DCC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3dcd8
	if (!cr6.gt) goto loc_82C3DCD8;
	// twi 31,r0,22
loc_82C3DCD8:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3d6b0
	sub_82C3D6B0(ctx, base);
	// b 0x82c3dd64
	goto loc_82C3DD64;
loc_82C3DCF8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3dd64
	if (cr6.eq) goto loc_82C3DD64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c3dd64
	if (!cr6.lt) goto loc_82C3DD64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3dd20
	if (!cr6.gt) goto loc_82C3DD20;
	// twi 31,r0,22
loc_82C3DD20:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x82c3dd34
	if (!cr6.gt) goto loc_82C3DD34;
	// twi 31,r0,22
loc_82C3DD34:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c49b70
	sub_82C49B70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82c3d090
	sub_82C3D090(ctx, base);
loc_82C3DD64:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3dd84
	if (cr6.eq) goto loc_82C3DD84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3DD84:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3DC68) {
	__imp__sub_82C3DC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3DD98) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3ddcc
	if (!cr6.eq) goto loc_82C3DDCC;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82c3ddd8
	goto loc_82C3DDD8;
loc_82C3DDCC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DDD8:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c3de28
	if (!cr6.lt) goto loc_82C3DE28;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3ddf0
	if (!cr6.eq) goto loc_82C3DDF0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x82c3ddfc
	goto loc_82C3DDFC;
loc_82C3DDF0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DDFC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3de0c
	if (!cr6.gt) goto loc_82C3DE0C;
	// twi 31,r0,22
loc_82C3DE0C:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3d9b0
	sub_82C3D9B0(ctx, base);
	// b 0x82c3deb0
	goto loc_82C3DEB0;
loc_82C3DE28:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3deb0
	if (cr6.eq) goto loc_82C3DEB0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c3deb0
	if (!cr6.lt) goto loc_82C3DEB0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3de50
	if (!cr6.gt) goto loc_82C3DE50;
	// twi 31,r0,22
loc_82C3DE50:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x82c3de64
	if (!cr6.gt) goto loc_82C3DE64;
	// twi 31,r0,22
loc_82C3DE64:
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82c3de94
	if (cr6.gt) goto loc_82C3DE94;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c3de98
	if (!cr6.lt) goto loc_82C3DE98;
loc_82C3DE94:
	// twi 31,r0,22
loc_82C3DE98:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3d158
	sub_82C3D158(ctx, base);
loc_82C3DEB0:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ded0
	if (cr6.eq) goto loc_82C3DED0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3DED0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

PPC_WEAK_FUNC(sub_82C3DD98) {
	__imp__sub_82C3DD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-15492
	ctx.r8.s64 = r11.s64 + -15492;
	// li r30,0
	r30.s64 = 0;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r5,r7,-18484
	ctx.r5.s64 = ctx.r7.s64 + -18484;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lfs f0,2720(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2720);
	f0.f64 = double(temp.f32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r6.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r5,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r5.u32);
	// bl 0x82c474e0
	sub_82C474E0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,3084(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// lvlx128 v63,r0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(v63,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r8,-18484
	ctx.r6.s64 = ctx.r8.s64 + -18484;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx128 v62,r0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(v62,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stw r6,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v62,v63,4,3
	simd::store_f32(v62.f32, simd::blend_f32<4>(simd::load_f32(v62.f32), simd::permute_f32<57>(simd::load_f32(v63.f32))));
	// lvlx128 v61,r0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(v61,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx128 v60,r0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(v60,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v60,v61,4,3
	simd::store_f32(v60.f32, simd::blend_f32<4>(simd::load_f32(v60.f32), simd::permute_f32<57>(simd::load_f32(v61.f32))));
	// vrlimi128 v60,v62,3,2
	simd::store_f32(v60.f32, simd::blend_f32<3>(simd::load_f32(v60.f32), simd::permute_f32<78>(simd::load_f32(v62.f32))));
	// stvx128 v60,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v60), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r30,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r30.u8);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stb r30,109(r31)
	PPC_STORE_U8(r31.u32 + 109, r30.u8);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// bl 0x82bfcb58
	sub_82BFCB58(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r5.u32);
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

PPC_WEAK_FUNC(sub_82C3DEF0) {
	__imp__sub_82C3DEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	uint32_t ea{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(36) );
	// li r10,80
	ctx.r10.s64 = 80;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lvx128 v63,r3,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v63), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3E008) {
	__imp__sub_82C3E008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca74fc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f25,f2
	f25.f64 = ctx.f2.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r31,-32246
	r31.s64 = -2113273856;
	// lfs f29,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f29.f64 = double(temp.f32);
	// lfs f27,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	f27.f64 = double(temp.f32);
	// lfs f28,3092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3092);
	f28.f64 = double(temp.f32);
loc_82C3E05C:
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * f28.f64));
	// fmsubs f30,f11,f27,f29
	f30.f64 = double(std::fma(float(ctx.f11.f64), float(f27.f64), -float(f29.f64)));
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fmuls f10,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f30.f64 * f30.f64));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 * f28.f64));
	// fmsubs f5,f6,f27,f29
	ctx.f5.f64 = double(std::fma(float(ctx.f6.f64), float(f27.f64), -float(f29.f64)));
	// fmadds f31,f5,f5,f10
	f31.f64 = double(std::fma(float(ctx.f5.f64), float(ctx.f5.f64), float(ctx.f10.f64)));
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x82c3e05c
	if (!cr6.lt) goto loc_82C3E05C;
	// lfs f0,-28496(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -28496);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82c3e05c
	if (!cr6.gt) goto loc_82C3E05C;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822050e0
	sub_822050E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c3e05c
	if (!cr6.eq) goto loc_82C3E05C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821f3c80
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,3168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3168);
	f0.f64 = double(temp.f32);
	// lfs f13,-28508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28508);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fdivs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 / f31.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(simd::sqrt_f32(float(ctx.f10.f64)));
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fdivs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// fmadds f1,f7,f25,f26
	ctx.f1.f64 = double(std::fma(float(ctx.f7.f64), float(f25.f64), float(f26.f64)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7548
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3E020) {
	__imp__sub_82C3E020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lfs f31,3092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3092);
	f31.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmsubs f6,f13,f7,f9
	ctx.f6.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f7.f64), -float(ctx.f9.f64)));
	// fadds f30,f6,f8
	f30.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lfs f5,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f0,f2
	f0.f64 = double(float(ctx.f2.f64));
	// fsubs f13,f4,f5
	ctx.f13.f64 = static_cast<float>(ctx.f4.f64 - ctx.f5.f64);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// fmadds f29,f13,f12,f5
	f29.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f12.f64), float(ctx.f5.f64)));
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f31,3084(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3084);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * f29.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvlx128 v63,r0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v63,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx128 v61,r0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(v61,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx128 v62,r0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(v62,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v63,v62,4,3
	simd::store_f32(v63.f32, simd::blend_f32<4>(simd::load_f32(v63.f32), simd::permute_f32<57>(simd::load_f32(v62.f32))));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * f29.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx128 v60,r0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(v60,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v60,v61,4,3
	simd::store_f32(v60.f32, simd::blend_f32<4>(simd::load_f32(v60.f32), simd::permute_f32<57>(simd::load_f32(v61.f32))));
	// vrlimi128 v63,v60,3,2
	simd::store_f32(v63.f32, simd::blend_f32<3>(simd::load_f32(v63.f32), simd::permute_f32<78>(simd::load_f32(v60.f32))));
	// stvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v63), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82C3E118) {
	__imp__sub_82C3E118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7508
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82c3e28c
	if (cr6.lt) goto loc_82C3E28C;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bgt cr6,0x82c3e28c
	if (cr6.gt) goto loc_82C3E28C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-28508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28508);
	f0.f64 = double(temp.f32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 96, temp.u32);
	// stfs f13,100(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 100, temp.u32);
	// stfs f12,104(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 104, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	// b 0x82ca2c38
	return;
loc_82C3E28C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82c3e2b8
	if (!cr6.eq) goto loc_82C3E2B8;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c3e2c4
	goto loc_82C3E2C4;
loc_82C3E2B8:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3E2C4:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lfs f2,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// li r10,80
	ctx.r10.s64 = 80;
	// lfs f1,40(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r29,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v63.f32, simd::sub_f32(simd::load_f32_aligned(v62.f32), simd::load_f32_aligned(v63.f32)));
	// vmsum3fp128 v61,v63,v63
	simd::store_f32_aligned(v61.f32, simd::dp_f32(simd::load_f32_aligned(v63.f32), simd::load_f32_aligned(v63.f32), 0xEF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v63), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v61), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// fsqrts f3,f0
	ctx.f3.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// bl 0x82c509a8
	sub_82C509A8(ctx, base);
	// lfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f30.f64 = double(temp.f32);
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(f30.f64 * f30.f64));
	// lfs f28,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f28.f64 = double(temp.f32);
	// lfs f13,40(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32246
	r30.s64 = -2113273856;
	// stfs f1,104(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 104, temp.u32);
	// fmadds f11,f28,f28,f12
	ctx.f11.f64 = double(std::fma(float(f28.f64), float(f28.f64), float(ctx.f12.f64)));
	// fsqrts f0,f11
	f0.f64 = double(simd::sqrt_f32(float(ctx.f11.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82c3e33c
	if (!cr6.gt) goto loc_82C3E33C;
	// lfs f12,-28496(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -28496);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x82c3e340
	if (cr6.gt) goto loc_82C3E340;
loc_82C3E33C:
	// li r11,1
	r11.s64 = 1;
loc_82C3E340:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3e374
	if (cr6.eq) goto loc_82C3E374;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-28508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28508);
	f0.f64 = double(temp.f32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 96, temp.u32);
	// stfs f13,100(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 100, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	// b 0x82ca2c38
	return;
loc_82C3E374:
	// fdivs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 / f0.f64));
	// bl 0x8227efe8
	sub_8227EFE8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r31,-32246
	r31.s64 = -2113273856;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r28,-32246
	r28.s64 = -2113273856;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,96(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r29.u32 + 96, temp.u32);
	// lfs f0,-28496(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -28496);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82c3e3e4
	if (cr6.gt) goto loc_82C3E3E4;
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82c3e3e4
	if (cr6.lt) goto loc_82C3E3E4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,-28504(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -28504);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,3084
	r11.s64 = r11.s64 + 3084;
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, f29.f64);
	// blt cr6,0x82c3e3d8
	if (cr6.lt) goto loc_82C3E3D8;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x82c3e428
	goto loc_82C3E428;
loc_82C3E3D8:
	// lfs f12,-28512(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28512);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f13,f12
	f31.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x82c3e428
	goto loc_82C3E428;
loc_82C3E3E4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,3084
	r11.s64 = r11.s64 + 3084;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, f29.f64);
	// blt cr6,0x82c3e408
	if (cr6.lt) goto loc_82C3E408;
	// fdivs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// bl 0x8227ee80
	sub_8227EE80(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// b 0x82c3e420
	goto loc_82C3E420;
loc_82C3E408:
	// fdivs f0,f12,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8227ee80
	sub_8227EE80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,-28512(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28512);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f11,f12
	f31.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
loc_82C3E420:
	// lfs f13,-28504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -28504);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28496(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -28496);
	f0.f64 = double(temp.f32);
loc_82C3E428:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x82c3e450
	if (cr6.gt) goto loc_82C3E450;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// blt cr6,0x82c3e450
	if (cr6.lt) goto loc_82C3E450;
	// fcmpu cr6,f28,f29
	cr6.compare(f28.f64, f29.f64);
	// bge cr6,0x82c3e480
	if (!cr6.lt) goto loc_82C3E480;
	// lfs f0,-28512(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28512);
	f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x82c3e480
	goto loc_82C3E480;
loc_82C3E450:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f29.f64);
	// blt cr6,0x82c3e468
	if (cr6.lt) goto loc_82C3E468;
	// fdivs f1,f28,f30
	ctx.f1.f64 = double(float(f28.f64 / f30.f64));
	// bl 0x8227ee80
	sub_8227EE80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// b 0x82c3e480
	goto loc_82C3E480;
loc_82C3E468:
	// fdivs f0,f28,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f28.f64 / f30.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8227ee80
	sub_8227EE80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,-28512(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28512);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
loc_82C3E480:
	// fadds f0,f13,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,100(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 100, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3E228) {
	__imp__sub_82C3E228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E498) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x821d5ba0
	sub_821D5BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc7f8
	sub_82BFC7F8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc810
	sub_82BFC810(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc8f0
	sub_82BFC8F0(ctx, base);
	// lbz r11,108(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3e4f0
	if (cr6.eq) goto loc_82C3E4F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc900
	sub_82BFC900(ctx, base);
loc_82C3E4F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e538
	if (cr6.eq) goto loc_82C3E538;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3E538:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82c3e55c
	if (cr6.eq) goto loc_82C3E55C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// bl 0x82c50130
	sub_82C50130(ctx, base);
loc_82C3E55C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3E498) {
	__imp__sub_82C3E498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E570) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82c3e020
	sub_82C3E020(ctx, base);
	// li r11,24
	r11.s64 = 24;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, f0.u32);
	// lfd f0,-28488(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28488);
	// lfs f13,104(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82c3e660
	if (cr6.lt) goto loc_82C3E660;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3e118
	sub_82C3E118(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d5ba0
	sub_821D5BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bfc7f8
	sub_82BFC7F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bfc810
	sub_82BFC810(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82bfc910
	sub_82BFC910(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e640
	if (cr6.eq) goto loc_82C3E640;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3E640:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x82c3e66c
	if (!cr6.eq) goto loc_82C3E66C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82289530
	sub_82289530(ctx, base);
loc_82C3E660:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
loc_82C3E66C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x82c50130
	sub_82C50130(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3E570) {
	__imp__sub_82C3E570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E6A8) {
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
	// lbz r11,109(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3e6d0
	if (!cr6.eq) goto loc_82C3E6D0;
loc_82C3E6C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82C3E6D0:
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3e6e8
	if (!cr6.gt) goto loc_82C3E6E8;
	// twi 31,r0,22
loc_82C3E6E8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3e6fc
	if (!cr6.gt) goto loc_82C3E6FC;
	// twi 31,r0,22
loc_82C3E6FC:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3e708
	if (cr6.eq) goto loc_82C3E708;
	// twi 31,r0,22
loc_82C3E708:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3e75c
	if (cr6.eq) goto loc_82C3E75C;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e71c
	if (cr6.lt) goto loc_82C3E71C;
	// twi 31,r0,22
loc_82C3E71C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e744
	if (cr6.eq) goto loc_82C3E744;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3e6c4
	if (cr6.eq) goto loc_82C3E6C4;
loc_82C3E744:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e754
	if (cr6.lt) goto loc_82C3E754;
	// twi 31,r0,22
loc_82C3E754:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82c3e6e8
	goto loc_82C3E6E8;
loc_82C3E75C:
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3e774
	if (!cr6.gt) goto loc_82C3E774;
	// twi 31,r0,22
loc_82C3E774:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3e788
	if (!cr6.gt) goto loc_82C3E788;
	// twi 31,r0,22
loc_82C3E788:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3e794
	if (cr6.eq) goto loc_82C3E794;
	// twi 31,r0,22
loc_82C3E794:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3e7e8
	if (cr6.eq) goto loc_82C3E7E8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e7a8
	if (cr6.lt) goto loc_82C3E7A8;
	// twi 31,r0,22
loc_82C3E7A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e7d0
	if (cr6.eq) goto loc_82C3E7D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3e6c4
	if (cr6.eq) goto loc_82C3E6C4;
loc_82C3E7D0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e7e0
	if (cr6.lt) goto loc_82C3E7E0;
	// twi 31,r0,22
loc_82C3E7E0:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// b 0x82c3e774
	goto loc_82C3E774;
loc_82C3E7E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3E6A8) {
	__imp__sub_82C3E6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E7F8) {
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
	// lbz r11,108(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3e8a4
	if (cr6.eq) goto loc_82C3E8A4;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3e830
	if (!cr6.gt) goto loc_82C3E830;
	// twi 31,r0,22
loc_82C3E830:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3e844
	if (!cr6.gt) goto loc_82C3E844;
	// twi 31,r0,22
loc_82C3E844:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3e850
	if (cr6.eq) goto loc_82C3E850;
	// twi 31,r0,22
loc_82C3E850:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3e89c
	if (cr6.eq) goto loc_82C3E89C;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e864
	if (cr6.lt) goto loc_82C3E864;
	// twi 31,r0,22
loc_82C3E864:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e884
	if (cr6.eq) goto loc_82C3E884;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3E884:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e894
	if (cr6.lt) goto loc_82C3E894;
	// twi 31,r0,22
loc_82C3E894:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82c3e830
	goto loc_82C3E830;
loc_82C3E89C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,108(r29)
	PPC_STORE_U8(r29.u32 + 108, r11.u8);
loc_82C3E8A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3E7F8) {
	__imp__sub_82C3E7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3E8B0) {
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
	// lbz r11,108(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3ea04
	if (!cr6.eq) goto loc_82C3EA04;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3e8e8
	if (!cr6.gt) goto loc_82C3E8E8;
	// twi 31,r0,22
loc_82C3E8E8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3e8fc
	if (!cr6.gt) goto loc_82C3E8FC;
	// twi 31,r0,22
loc_82C3E8FC:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3e908
	if (cr6.eq) goto loc_82C3E908;
	// twi 31,r0,22
loc_82C3E908:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3e954
	if (cr6.eq) goto loc_82C3E954;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e91c
	if (cr6.lt) goto loc_82C3E91C;
	// twi 31,r0,22
loc_82C3E91C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e93c
	if (cr6.eq) goto loc_82C3E93C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3E93C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e94c
	if (cr6.lt) goto loc_82C3E94C;
	// twi 31,r0,22
loc_82C3E94C:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82c3e8e8
	goto loc_82C3E8E8;
loc_82C3E954:
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3e96c
	if (!cr6.gt) goto loc_82C3E96C;
	// twi 31,r0,22
loc_82C3E96C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3e980
	if (!cr6.gt) goto loc_82C3E980;
	// twi 31,r0,22
loc_82C3E980:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3e98c
	if (cr6.eq) goto loc_82C3E98C;
	// twi 31,r0,22
loc_82C3E98C:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3e9fc
	if (cr6.eq) goto loc_82C3E9FC;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e9a0
	if (cr6.lt) goto loc_82C3E9A0;
	// twi 31,r0,22
loc_82C3E9A0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e9e4
	if (cr6.eq) goto loc_82C3E9E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3e9e4
	if (!cr6.eq) goto loc_82C3E9E4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3E9E4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3e9f4
	if (cr6.lt) goto loc_82C3E9F4;
	// twi 31,r0,22
loc_82C3E9F4:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// b 0x82c3e96c
	goto loc_82C3E96C;
loc_82C3E9FC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,108(r29)
	PPC_STORE_U8(r29.u32 + 108, r11.u8);
loc_82C3EA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3E8B0) {
	__imp__sub_82C3E8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3EA10) {
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
	// lbz r11,109(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3eb74
	if (!cr6.eq) goto loc_82C3EB74;
	// li r11,1
	r11.s64 = 1;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// stb r11,109(r29)
	PPC_STORE_U8(r29.u32 + 109, r11.u8);
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3ea4c
	if (!cr6.gt) goto loc_82C3EA4C;
	// twi 31,r0,22
loc_82C3EA4C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3ea60
	if (!cr6.gt) goto loc_82C3EA60;
	// twi 31,r0,22
loc_82C3EA60:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3ea6c
	if (cr6.eq) goto loc_82C3EA6C;
	// twi 31,r0,22
loc_82C3EA6C:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3ead4
	if (cr6.eq) goto loc_82C3EAD4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3ea80
	if (cr6.lt) goto loc_82C3EA80;
	// twi 31,r0,22
loc_82C3EA80:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3eabc
	if (cr6.eq) goto loc_82C3EABC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3eabc
	if (!cr6.eq) goto loc_82C3EABC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3EABC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3eacc
	if (cr6.lt) goto loc_82C3EACC;
	// twi 31,r0,22
loc_82C3EACC:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82c3ea4c
	goto loc_82C3EA4C;
loc_82C3EAD4:
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3eaec
	if (!cr6.gt) goto loc_82C3EAEC;
	// twi 31,r0,22
loc_82C3EAEC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3eb00
	if (!cr6.gt) goto loc_82C3EB00;
	// twi 31,r0,22
loc_82C3EB00:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3eb0c
	if (cr6.eq) goto loc_82C3EB0C;
	// twi 31,r0,22
loc_82C3EB0C:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3eb74
	if (cr6.eq) goto loc_82C3EB74;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3eb20
	if (cr6.lt) goto loc_82C3EB20;
	// twi 31,r0,22
loc_82C3EB20:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3eb5c
	if (cr6.eq) goto loc_82C3EB5C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3eb5c
	if (!cr6.eq) goto loc_82C3EB5C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3EB5C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3eb6c
	if (cr6.lt) goto loc_82C3EB6C;
	// twi 31,r0,22
loc_82C3EB6C:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// b 0x82c3eaec
	goto loc_82C3EAEC;
loc_82C3EB74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C3EA10) {
	__imp__sub_82C3EA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3EB80) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,109(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3ed54
	if (!cr6.eq) goto loc_82C3ED54;
	// li r11,1
	r11.s64 = 1;
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// stb r11,109(r28)
	PPC_STORE_U8(r28.u32 + 109, r11.u8);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3ebc0
	if (!cr6.gt) goto loc_82C3EBC0;
	// twi 31,r0,22
loc_82C3EBC0:
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r27,0
	r27.s64 = 0;
loc_82C3EBC8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// ble cr6,0x82c3ebdc
	if (!cr6.gt) goto loc_82C3EBDC;
	// twi 31,r0,22
loc_82C3EBDC:
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(r29.u32, r29.u32, xer);
	// beq cr6,0x82c3ebe8
	if (cr6.eq) goto loc_82C3EBE8;
	// twi 31,r0,22
loc_82C3EBE8:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82c3ec80
	if (cr6.eq) goto loc_82C3EC80;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3ebfc
	if (cr6.lt) goto loc_82C3EBFC;
	// twi 31,r0,22
loc_82C3EBFC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ec68
	if (cr6.eq) goto loc_82C3EC68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3ec68
	if (!cr6.eq) goto loc_82C3EC68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ec60
	if (cr6.eq) goto loc_82C3EC60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3EC60:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_82C3EC68:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3ec78
	if (cr6.lt) goto loc_82C3EC78;
	// twi 31,r0,22
loc_82C3EC78:
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// b 0x82c3ebc8
	goto loc_82C3EBC8;
loc_82C3EC80:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// addi r29,r28,20
	r29.s64 = r28.s64 + 20;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82c3ec98
	if (!cr6.gt) goto loc_82C3EC98;
	// twi 31,r0,22
loc_82C3EC98:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82C3EC9C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3ecb0
	if (!cr6.gt) goto loc_82C3ECB0;
	// twi 31,r0,22
loc_82C3ECB0:
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(r29.u32, r29.u32, xer);
	// beq cr6,0x82c3ecbc
	if (cr6.eq) goto loc_82C3ECBC;
	// twi 31,r0,22
loc_82C3ECBC:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3ed54
	if (cr6.eq) goto loc_82C3ED54;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82c3ecd0
	if (cr6.lt) goto loc_82C3ECD0;
	// twi 31,r0,22
loc_82C3ECD0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ed3c
	if (cr6.eq) goto loc_82C3ED3C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3ed3c
	if (!cr6.eq) goto loc_82C3ED3C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ed34
	if (cr6.eq) goto loc_82C3ED34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3ED34:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_82C3ED3C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82c3ed4c
	if (cr6.lt) goto loc_82C3ED4C;
	// twi 31,r0,22
loc_82C3ED4C:
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// b 0x82c3ec9c
	goto loc_82C3EC9C;
loc_82C3ED54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C3EB80) {
	__imp__sub_82C3EB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3ED60) {
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
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// bl 0x82c50270
	sub_82C50270(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3ed94
	if (!cr6.gt) goto loc_82C3ED94;
	// twi 31,r0,22
loc_82C3ED94:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3eda8
	if (!cr6.gt) goto loc_82C3EDA8;
	// twi 31,r0,22
loc_82C3EDA8:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3edb4
	if (cr6.eq) goto loc_82C3EDB4;
	// twi 31,r0,22
loc_82C3EDB4:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3ee00
	if (cr6.eq) goto loc_82C3EE00;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3edc8
	if (cr6.lt) goto loc_82C3EDC8;
	// twi 31,r0,22
loc_82C3EDC8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ede8
	if (cr6.eq) goto loc_82C3EDE8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3EDE8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3edf8
	if (cr6.lt) goto loc_82C3EDF8;
	// twi 31,r0,22
loc_82C3EDF8:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82c3ed94
	goto loc_82C3ED94;
loc_82C3EE00:
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3ee18
	if (!cr6.gt) goto loc_82C3EE18;
	// twi 31,r0,22
loc_82C3EE18:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3ee2c
	if (!cr6.gt) goto loc_82C3EE2C;
	// twi 31,r0,22
loc_82C3EE2C:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3ee38
	if (cr6.eq) goto loc_82C3EE38;
	// twi 31,r0,22
loc_82C3EE38:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3ee84
	if (cr6.eq) goto loc_82C3EE84;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3ee4c
	if (cr6.lt) goto loc_82C3EE4C;
	// twi 31,r0,22
loc_82C3EE4C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ee6c
	if (cr6.eq) goto loc_82C3EE6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3EE6C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3ee7c
	if (cr6.lt) goto loc_82C3EE7C;
	// twi 31,r0,22
loc_82C3EE7C:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// b 0x82c3ee18
	goto loc_82C3EE18;
loc_82C3EE84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3ED60) {
	__imp__sub_82C3ED60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3EE90) {
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
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// bl 0x82c505e8
	sub_82C505E8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3eec4
	if (!cr6.gt) goto loc_82C3EEC4;
	// twi 31,r0,22
loc_82C3EEC4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3eed8
	if (!cr6.gt) goto loc_82C3EED8;
	// twi 31,r0,22
loc_82C3EED8:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3eee4
	if (cr6.eq) goto loc_82C3EEE4;
	// twi 31,r0,22
loc_82C3EEE4:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3ef30
	if (cr6.eq) goto loc_82C3EF30;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3eef8
	if (cr6.lt) goto loc_82C3EEF8;
	// twi 31,r0,22
loc_82C3EEF8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ef18
	if (cr6.eq) goto loc_82C3EF18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3EF18:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3ef28
	if (cr6.lt) goto loc_82C3EF28;
	// twi 31,r0,22
loc_82C3EF28:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82c3eec4
	goto loc_82C3EEC4;
loc_82C3EF30:
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3ef48
	if (!cr6.gt) goto loc_82C3EF48;
	// twi 31,r0,22
loc_82C3EF48:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3ef5c
	if (!cr6.gt) goto loc_82C3EF5C;
	// twi 31,r0,22
loc_82C3EF5C:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3ef68
	if (cr6.eq) goto loc_82C3EF68;
	// twi 31,r0,22
loc_82C3EF68:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3efb4
	if (cr6.eq) goto loc_82C3EFB4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3ef7c
	if (cr6.lt) goto loc_82C3EF7C;
	// twi 31,r0,22
loc_82C3EF7C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ef9c
	if (cr6.eq) goto loc_82C3EF9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3EF9C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3efac
	if (cr6.lt) goto loc_82C3EFAC;
	// twi 31,r0,22
loc_82C3EFAC:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// b 0x82c3ef48
	goto loc_82C3EF48;
loc_82C3EFB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3EE90) {
	__imp__sub_82C3EE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3EFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82c3efec
	if (!cr6.gt) goto loc_82C3EFEC;
	// twi 31,r0,22
loc_82C3EFEC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3f000
	if (!cr6.gt) goto loc_82C3F000;
	// twi 31,r0,22
loc_82C3F000:
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(r30.u32, r30.u32, xer);
	// beq cr6,0x82c3f00c
	if (cr6.eq) goto loc_82C3F00C;
	// twi 31,r0,22
loc_82C3F00C:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3f094
	if (cr6.eq) goto loc_82C3F094;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3f020
	if (cr6.lt) goto loc_82C3F020;
	// twi 31,r0,22
loc_82C3F020:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f048
	if (cr6.eq) goto loc_82C3F048;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3f058
	if (cr6.eq) goto loc_82C3F058;
loc_82C3F048:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c3e498
	sub_82C3E498(ctx, base);
loc_82C3F058:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f07c
	if (cr6.eq) goto loc_82C3F07C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfs f1,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3F07C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82c3f08c
	if (cr6.lt) goto loc_82C3F08C;
	// twi 31,r0,22
loc_82C3F08C:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82c3efec
	goto loc_82C3EFEC;
loc_82C3F094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3EFC0) {
	__imp__sub_82C3EFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F0A0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,108(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3f1d8
	if (!cr6.eq) goto loc_82C3F1D8;
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// addi r28,r27,20
	r28.s64 = r27.s64 + 20;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3f0d8
	if (!cr6.gt) goto loc_82C3F0D8;
	// twi 31,r0,22
loc_82C3F0D8:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// ble cr6,0x82c3f0ec
	if (!cr6.gt) goto loc_82C3F0EC;
	// twi 31,r0,22
loc_82C3F0EC:
	// cmplw cr6,r28,r28
	cr6.compare<uint32_t>(r28.u32, r28.u32, xer);
	// beq cr6,0x82c3f0f8
	if (cr6.eq) goto loc_82C3F0F8;
	// twi 31,r0,22
loc_82C3F0F8:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82c3f1d8
	if (cr6.eq) goto loc_82C3F1D8;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3f10c
	if (cr6.lt) goto loc_82C3F10C;
	// twi 31,r0,22
loc_82C3F10C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// clrlwi r30,r9,24
	r30.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c3f148
	if (cr6.eq) goto loc_82C3F148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x82c3f14c
	goto loc_82C3F14C;
loc_82C3F148:
	// li r11,0
	r11.s64 = 0;
loc_82C3F14C:
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c3f180
	if (cr6.eq) goto loc_82C3F180;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3f180
	if (cr6.eq) goto loc_82C3F180;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lfs f1,104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3F180:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82c3f19c
	if (!cr6.gt) goto loc_82C3F19C;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(48) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// b 0x82c3f1c0
	goto loc_82C3F1C0;
loc_82C3F19C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c3f1b0
	if (cr6.eq) goto loc_82C3F1B0;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3f1c0
	if (!cr6.eq) goto loc_82C3F1C0;
loc_82C3F1B0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c3e570
	sub_82C3E570(ctx, base);
loc_82C3F1C0:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c3f1d0
	if (cr6.lt) goto loc_82C3F1D0;
	// twi 31,r0,22
loc_82C3F1D0:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// b 0x82c3f0d8
	goto loc_82C3F0D8;
loc_82C3F1D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C3F0A0) {
	__imp__sub_82C3F0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F1E0) {
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
	// lbz r11,109(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3f224
	if (!cr6.eq) goto loc_82C3F224;
	// bl 0x82c3e228
	sub_82C3E228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3efc0
	sub_82C3EFC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3f0a0
	sub_82C3F0A0(ctx, base);
loc_82C3F224:
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

PPC_WEAK_FUNC(sub_82C3F1E0) {
	__imp__sub_82C3F1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F240) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r28,56
	ctx.r3.s64 = r28.s64 + 56;
	// addi r10,r11,-15492
	ctx.r10.s64 = r11.s64 + -15492;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x82c502d8
	sub_82C502D8(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// addi r31,r28,20
	r31.s64 = r28.s64 + 20;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f28c
	if (cr6.eq) goto loc_82C3F28C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82c3cec8
	sub_82C3CEC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3F28C:
	// li r29,0
	r29.s64 = 0;
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f2c4
	if (cr6.eq) goto loc_82C3F2C4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82c3ce68
	sub_82C3CE68(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82C3F2C4:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// bl 0x82c00018
	sub_82C00018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3F240) {
	__imp__sub_82C3F240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F2E0) {
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
	// bl 0x82c3f240
	sub_82C3F240(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3f318
	if (cr6.eq) goto loc_82C3F318;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C3F318:
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

PPC_WEAK_FUNC(sub_82C3F2E0) {
	__imp__sub_82C3F2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F330) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3f364
	if (!cr6.eq) goto loc_82C3F364;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82c3f374
	goto loc_82C3F374;
loc_82C3F364:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r8,12
	ctx.r8.s64 = 12;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r7,r8
	r11.s32 = ctx.r7.s32 / ctx.r8.s32;
loc_82C3F374:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3dc68
	sub_82C3DC68(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82c3f3a0
	if (!cr6.gt) goto loc_82C3F3A0;
	// twi 31,r0,22
loc_82C3F3A0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r10,r11,-12
	ctx.r10.s64 = r11.s64 + -12;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82c3f3cc
	if (cr6.gt) goto loc_82C3F3CC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82c3f3d0
	if (!cr6.lt) goto loc_82C3F3D0;
loc_82C3F3CC:
	// twi 31,r0,22
loc_82C3F3D0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c3f3e8
	if (cr6.lt) goto loc_82C3F3E8;
	// twi 31,r0,22
loc_82C3F3E8:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
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

PPC_WEAK_FUNC(sub_82C3F330) {
	__imp__sub_82C3F330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c3f454
	if (!cr6.eq) goto loc_82C3F454;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82c3f464
	goto loc_82C3F464;
loc_82C3F454:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r8,28
	ctx.r8.s64 = 28;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r7,r8
	r11.s32 = ctx.r7.s32 / ctx.r8.s32;
loc_82C3F464:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3dd98
	sub_82C3DD98(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82c3f490
	if (!cr6.gt) goto loc_82C3F490;
	// twi 31,r0,22
loc_82C3F490:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r10,r11,-28
	ctx.r10.s64 = r11.s64 + -28;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82c3f4bc
	if (cr6.gt) goto loc_82C3F4BC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82c3f4c0
	if (!cr6.lt) goto loc_82C3F4C0;
loc_82C3F4BC:
	// twi 31,r0,22
loc_82C3F4C0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r31,r11,-28
	r31.s64 = r11.s64 + -28;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c3f4d8
	if (cr6.lt) goto loc_82C3F4D8;
	// twi 31,r0,22
loc_82C3F4D8:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f29,12(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// li r9,24
	ctx.r9.s64 = 24;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,3092(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3092);
	f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fctiwz f9,f10
	ctx.f9.u64 = uint64_t(int32_t(std::trunc(ctx.f10.f64)));
	// stfiwx f9,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.f9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f29,-48(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

PPC_WEAK_FUNC(sub_82C3F408) {
	__imp__sub_82C3F408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F540) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r10,r27,0,27,27
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// beq cr6,0x82c3f57c
	if (cr6.eq) goto loc_82C3F57C;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82c3f588
	goto loc_82C3F588;
loc_82C3F57C:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_82C3F588:
	// stfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3f5dc
	if (cr6.eq) goto loc_82C3F5DC;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
loc_82C3F5A8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c3f5d0
	if (!cr6.eq) goto loc_82C3F5D0;
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3f5cc
	if (cr6.eq) goto loc_82C3F5CC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c3f5d0
	goto loc_82C3F5D0;
loc_82C3F5CC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82C3F5D0:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82c3f5a8
	if (!cr0.eq) goto loc_82C3F5A8;
loc_82C3F5DC:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82c3d4a0
	sub_82C3D4A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82c3d5b0
	sub_82C3D5B0(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c3f66c
	if (!cr6.gt) goto loc_82C3F66C;
	// li r30,0
	r30.s64 = 0;
loc_82C3F604:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c3f658
	if (!cr6.eq) goto loc_82C3F658;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3f638
	if (cr6.eq) goto loc_82C3F638;
	// bl 0x82c3f330
	sub_82C3F330(ctx, base);
	// b 0x82c3f658
	goto loc_82C3F658;
loc_82C3F638:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lfs f3,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82c3f408
	sub_82C3F408(ctx, base);
loc_82C3F658:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c3f604
	if (cr6.lt) goto loc_82C3F604;
loc_82C3F66C:
	// rlwinm r11,r27,18,31,31
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 18) & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,109(r31)
	PPC_STORE_U8(r31.u32 + 109, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3F540) {
	__imp__sub_82C3F540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F688) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,16(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82c3bd40
	sub_82C3BD40(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c3f714
	if (cr6.eq) goto loc_82C3F714;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,19936
	ctx.r4.s64 = ctx.r10.s64 + 19936;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82c3f714
	if (cr6.eq) goto loc_82C3F714;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f6fc
	if (cr6.eq) goto loc_82C3F6FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82c3def0
	sub_82C3DEF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82c3f700
	goto loc_82C3F700;
loc_82C3F6FC:
	// li r31,0
	r31.s64 = 0;
loc_82C3F700:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82c3f720
	if (!cr6.eq) goto loc_82C3F720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82C3F710:
	// bl 0x82c32138
	sub_82C32138(ctx, base);
loc_82C3F714:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C3F720:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3f540
	sub_82C3F540(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3f710
	if (cr6.eq) goto loc_82C3F710;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82c32138
	sub_82C32138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C3F688) {
	__imp__sub_82C3F688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F760) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3f7c8
	if (cr6.lt) goto loc_82C3F7C8;
	// bne cr6,0x82c3f8ac
	if (!cr6.eq) goto loc_82C3F8AC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3f820
	if (cr6.lt) goto loc_82C3F820;
	// bne cr6,0x82c3f8ac
	if (!cr6.eq) goto loc_82C3F8AC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3f8d0
	if (cr6.eq) goto loc_82C3F8D0;
	// b 0x82c3f7e8
	goto loc_82C3F7E8;
loc_82C3F7C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3f820
	if (cr6.lt) goto loc_82C3F820;
	// bne cr6,0x82c3f8ac
	if (!cr6.eq) goto loc_82C3F8AC;
loc_82C3F7E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3c700
	sub_82C3C700(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c3f8d4
	goto loc_82C3F8D4;
loc_82C3F820:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c31b48
	sub_82C31B48(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3c700
	sub_82C3C700(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3f8a4
	if (cr6.eq) goto loc_82C3F8A4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-16696
	ctx.r9.s64 = ctx.r10.s64 + -16696;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82c1b998
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c3f8b4
	if (cr6.eq) goto loc_82C3F8B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r10,-20180
	r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c2fdc0
	sub_82C2FDC0(ctx, base);
loc_82C3F8A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2aaf8
	sub_82C2AAF8(ctx, base);
loc_82C3F8AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3f8d4
	goto loc_82C3F8D4;
loc_82C3F8B4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c2fdc0
	sub_82C2FDC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2aaf8
	sub_82C2AAF8(ctx, base);
loc_82C3F8D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3F8D4:
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

PPC_WEAK_FUNC(sub_82C3F760) {
	__imp__sub_82C3F760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3F8F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3f958
	if (cr6.lt) goto loc_82C3F958;
	// bne cr6,0x82c3fa3c
	if (!cr6.eq) goto loc_82C3FA3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3f9b0
	if (cr6.lt) goto loc_82C3F9B0;
	// bne cr6,0x82c3fa3c
	if (!cr6.eq) goto loc_82C3FA3C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3fa60
	if (cr6.eq) goto loc_82C3FA60;
	// b 0x82c3f978
	goto loc_82C3F978;
loc_82C3F958:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c3f9b0
	if (cr6.lt) goto loc_82C3F9B0;
	// bne cr6,0x82c3fa3c
	if (!cr6.eq) goto loc_82C3FA3C;
loc_82C3F978:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3ca40
	sub_82C3CA40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c3fa64
	goto loc_82C3FA64;
loc_82C3F9B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c3ca40
	sub_82C3CA40(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3fa34
	if (cr6.eq) goto loc_82C3FA34;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82c1b998
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c3fa44
	if (cr6.eq) goto loc_82C3FA44;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r10,-20180
	r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
loc_82C3FA34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C3FA3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3fa64
	goto loc_82C3FA64;
loc_82C3FA44:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C3FA60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3FA64:
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

PPC_WEAK_FUNC(sub_82C3F8F0) {
	__imp__sub_82C3F8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82c3f760
	sub_82C3F760(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C3FA80) {
	__imp__sub_82C3FA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82c3f8f0
	sub_82C3F8F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C3FA90) {
	__imp__sub_82C3FA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,48(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3fae4
	if (cr6.eq) goto loc_82C3FAE4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-28512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28512);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82c3facc
	if (cr6.lt) goto loc_82C3FACC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f0,f13,f1
	ctx.f1.f64 = -double(std::fma(float(f0.f64), float(ctx.f13.f64), -float(ctx.f1.f64)));
	// b 0x82c3fae4
	goto loc_82C3FAE4;
loc_82C3FACC:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82c3fae4
	if (!cr6.lt) goto loc_82C3FAE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(std::fma(float(f0.f64), float(ctx.f13.f64), float(ctx.f1.f64)));
loc_82C3FAE4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3FAA0) {
	__imp__sub_82C3FAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19948
	ctx.r3.s64 = r11.s64 + 19948;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3FB20) {
	__imp__sub_82C3FB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19944
	ctx.r3.s64 = r11.s64 + 19944;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3FB30) {
	__imp__sub_82C3FB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FB40) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-15412
	ctx.r10.s64 = r11.s64 + -15412;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00140
	sub_82C00140(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c3fb84
	if (cr6.eq) goto loc_82C3FB84;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C3FB84:
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

PPC_WEAK_FUNC(sub_82C3FB40) {
	__imp__sub_82C3FB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FBA0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-15372
	ctx.r8.s64 = ctx.r9.s64 + -15372;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r11.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x821882b0
	sub_821882B0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lfs f0,3056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lfs f13,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-15376(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15376);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f11,f0,f13
	ctx.f1.f64 = -double(std::fma(float(ctx.f11.f64), float(f0.f64), -float(ctx.f13.f64)));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x82c3faa0
	sub_82C3FAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bffea8
	sub_82BFFEA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3fc54
	if (cr6.eq) goto loc_82C3FC54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3FC54:
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

PPC_WEAK_FUNC(sub_82C3FBA0) {
	__imp__sub_82C3FBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82c3fc88
	if (!cr6.lt) goto loc_82C3FC88;
	// li r11,1
	r11.s64 = 1;
loc_82C3FC88:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82c3fcd8
	if (cr6.lt) goto loc_82C3FCD8;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c3fcc8
	if (cr6.eq) goto loc_82C3FCC8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
loc_82C3FCC8:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
loc_82C3FCD8:
	// fmuls f10,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f1,f0,f3
	ctx.f1.f64 = double(float(f0.f64 * ctx.f3.f64));
	// fmuls f13,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f10,f5,f0,f13
	ctx.f10.f64 = double(std::fma(float(ctx.f5.f64), float(f0.f64), float(ctx.f13.f64)));
	// fmadds f8,f12,f7,f8
	ctx.f8.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f7.f64), float(ctx.f8.f64)));
	// fmadds f7,f7,f11,f10
	ctx.f7.f64 = double(std::fma(float(ctx.f7.f64), float(ctx.f11.f64), float(ctx.f10.f64)));
	// fmadds f6,f6,f11,f8
	ctx.f6.f64 = double(std::fma(float(ctx.f6.f64), float(ctx.f11.f64), float(ctx.f8.f64)));
	// fadds f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f1,f5,f3,f6
	ctx.f1.f64 = double(std::fma(float(ctx.f5.f64), float(ctx.f3.f64), float(ctx.f6.f64)));
	// fadds f0,f1,f4
	f0.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3FC70) {
	__imp__sub_82C3FC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3FD50) {
	__imp__sub_82C3FD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-21232
	ctx.r4.s64 = ctx.r9.s64 + -21232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-21224
	r31.s64 = ctx.r8.s64 + -21224;
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82bff980
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r7,3200
	r28.s64 = ctx.r7.s64 + 3200;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r5,-15256
	ctx.r4.s64 = ctx.r5.s64 + -15256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-15272
	r31.s64 = r11.s64 + -15272;
	// lfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82bff980
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-15296
	ctx.r4.s64 = ctx.r9.s64 + -15296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-15320
	r31.s64 = ctx.r8.s64 + -15320;
	// lfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82bff980
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r6,-15336
	ctx.r4.s64 = ctx.r6.s64 + -15336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r5,-15352
	r31.s64 = ctx.r5.s64 + -15352;
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82bff980
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C3FD88) {
	__imp__sub_82C3FD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C3FF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7504
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f3
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f3.f64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82c3ffa8
	if (!cr6.lt) goto loc_82C3FFA8;
	// bl 0x82c3faa0
	sub_82C3FAA0(ctx, base);
	// b 0x82c401d8
	goto loc_82C401D8;
loc_82C3FFA8:
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40010
	if (cr6.eq) goto loc_82C40010;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-28512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28512);
	f0.f64 = double(temp.f32);
	// lfs f11,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82c3ffd4
	if (cr6.lt) goto loc_82C3FFD4;
	// fnmsubs f1,f0,f11,f1
	ctx.f1.f64 = -double(std::fma(float(f0.f64), float(ctx.f11.f64), -float(ctx.f1.f64)));
	// b 0x82c3ffe4
	goto loc_82C3FFE4;
loc_82C3FFD4:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82c3ffe4
	if (!cr6.lt) goto loc_82C3FFE4;
	// fmadds f1,f0,f11,f1
	ctx.f1.f64 = double(std::fma(float(f0.f64), float(ctx.f11.f64), float(ctx.f1.f64)));
loc_82C3FFE4:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = static_cast<float>(ctx.f1.f64 - ctx.f13.f64);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x82c3fffc
	if (cr6.lt) goto loc_82C3FFFC;
	// fmadds f0,f0,f11,f13
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f11.f64), float(ctx.f13.f64)));
	// b 0x82c4000c
	goto loc_82C4000C;
loc_82C3FFFC:
	// fneg f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82c40010
	if (!cr6.lt) goto loc_82C40010;
	// fnmsubs f0,f0,f11,f13
	f0.f64 = -double(std::fma(float(f0.f64), float(ctx.f11.f64), -float(ctx.f13.f64)));
loc_82C4000C:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_82C40010:
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 * f30.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f31.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f30,24(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,3232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3232);
	f0.f64 = double(temp.f32);
	// fmuls f10,f28,f30
	ctx.f10.f64 = double(float(f28.f64 * f30.f64));
	// fmuls f27,f10,f0
	f27.f64 = double(float(ctx.f10.f64 * f0.f64));
	// bl 0x8223bd98
	sub_8223BD98(ctx, base);
	// fmuls f1,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f28.f64 * f28.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f5,f27
	ctx.f5.f64 = f27.f64;
	// fmr f9,f28
	ctx.f9.f64 = f28.f64;
	// lfs f29,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f29.f64 = double(temp.f32);
	// fmr f6,f28
	ctx.f6.f64 = f28.f64;
	// lfs f0,-15356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15356);
	f0.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// stfs f29,148(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// fmr f10,f30
	ctx.f10.f64 = f30.f64;
	// fmr f11,f29
	ctx.f11.f64 = f29.f64;
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x8219d738
	sub_8219D738(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8227c9f8
	sub_8227C9F8(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lvx128 v63,r0,r6
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// lvx128 v62,r0,r5
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v61,r0,r4
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// lvx128 v60,r0,r3
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r7,r11,-28208
	ctx.r7.s64 = r11.s64 + -28208;
	// vmrghw128 v59,v63,v62
	simd::store_i32(v59.u32, simd::unpackhi_i32(simd::load_i32(v62.u32), simd::load_i32(v63.u32)));
	// fsubs f11,f13,f0
	ctx.f11.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// vmrghw128 v58,v61,v60
	simd::store_i32(v58.u32, simd::unpackhi_i32(simd::load_i32(v60.u32), simd::load_i32(v61.u32)));
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// vmrglw128 v57,v63,v62
	simd::store_i32(v57.u32, simd::unpacklo_i32(simd::load_i32(v62.u32), simd::load_i32(v63.u32)));
	// stfs f29,164(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// vmrglw128 v55,v61,v60
	simd::store_i32(v55.u32, simd::unpacklo_i32(simd::load_i32(v60.u32), simd::load_i32(v61.u32)));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvlx128 v56,r0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(v56,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx128 v54,r0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v54,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmrghw128 v53,v59,v58
	simd::store_i32(v53.u32, simd::unpackhi_i32(simd::load_i32(v58.u32), simd::load_i32(v59.u32)));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// vmrglw128 v52,v59,v58
	simd::store_i32(v52.u32, simd::unpacklo_i32(simd::load_i32(v58.u32), simd::load_i32(v59.u32)));
	// lvlx128 v50,r0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(v50,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vmrghw128 v51,v57,v55
	simd::store_i32(v51.u32, simd::unpackhi_i32(simd::load_i32(v55.u32), simd::load_i32(v57.u32)));
	// fsubs f9,f12,f10
	ctx.f9.f64 = static_cast<float>(ctx.f12.f64 - ctx.f10.f64);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// fnmsubs f7,f8,f0,f9
	ctx.f7.f64 = -double(std::fma(float(ctx.f8.f64), float(f0.f64), -float(ctx.f9.f64)));
	// lvx128 v49,r0,r6
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r11,r4,-28192
	r11.s64 = ctx.r4.s64 + -28192;
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lvlx128 v48,r0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(v48,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm128 v47,v49,v48,v0
	simd::store_i8(v47.u8, simd::permute_bytes(simd::load_i8(v49.u8), simd::load_i8(v48.u8), simd::load_i8(ctx.v0.u8)));
	// addi r10,r3,-28176
	ctx.r10.s64 = ctx.r3.s64 + -28176;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// vperm128 v46,v47,v50,v0
	simd::store_i8(v46.u8, simd::permute_bytes(simd::load_i8(v47.u8), simd::load_i8(v50.u8), simd::load_i8(ctx.v0.u8)));
	// vmrglw128 v45,v57,v55
	simd::store_i32(v45.u32, simd::unpacklo_i32(simd::load_i32(v55.u32), simd::load_i32(v57.u32)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r9,-28160
	ctx.r7.s64 = ctx.r9.s64 + -28160;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v44,v46,v56,v0
	simd::store_i8(v44.u8, simd::permute_bytes(simd::load_i8(v46.u8), simd::load_i8(v56.u8), simd::load_i8(ctx.v0.u8)));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vperm128 v43,v44,v54,v7
	simd::store_i8(v43.u8, simd::permute_bytes(simd::load_i8(v44.u8), simd::load_i8(v54.u8), simd::load_i8(ctx.v7.u8)));
	// vmsum4fp128 v42,v43,v45
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v42.f32, simd::dp_f32(simd::load_f32_aligned(v43.f32), simd::load_f32_aligned(v45.f32), 0xFF));
	// vmsum4fp128 v41,v43,v52
	simd::store_f32_aligned(v41.f32, simd::dp_f32(simd::load_f32_aligned(v43.f32), simd::load_f32_aligned(v52.f32), 0xFF));
	// vmsum4fp128 v40,v43,v51
	simd::store_f32_aligned(v40.f32, simd::dp_f32(simd::load_f32_aligned(v43.f32), simd::load_f32_aligned(v51.f32), 0xFF));
	// vmsum4fp128 v39,v43,v53
	simd::store_f32_aligned(v39.f32, simd::dp_f32(simd::load_f32_aligned(v43.f32), simd::load_f32_aligned(v53.f32), 0xFF));
	// vmrghw128 v38,v41,v42
	simd::store_i32(v38.u32, simd::unpackhi_i32(simd::load_i32(v42.u32), simd::load_i32(v41.u32)));
	// vmrghw128 v37,v39,v40
	simd::store_i32(v37.u32, simd::unpackhi_i32(simd::load_i32(v40.u32), simd::load_i32(v39.u32)));
	// vmrghw128 v36,v37,v38
	simd::store_i32(v36.u32, simd::unpackhi_i32(simd::load_i32(v38.u32), simd::load_i32(v37.u32)));
	// stvx128 v36,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v36), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f5,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f4,40(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
loc_82C401D8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7550
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C3FF70) {
	__imp__sub_82C3FF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C401F8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r10,r11,-15372
	ctx.r10.s64 = r11.s64 + -15372;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c4023c
	if (cr6.eq) goto loc_82C4023C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C4023C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82c00130
	sub_82C00130(ctx, base);
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

PPC_WEAK_FUNC(sub_82C401F8) {
	__imp__sub_82C401F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40268) {
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
	// bl 0x82c401f8
	sub_82C401F8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c402a0
	if (cr6.eq) goto loc_82C402A0;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C402A0:
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

PPC_WEAK_FUNC(sub_82C40268) {
	__imp__sub_82C40268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C402B8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19944
	ctx.r4.s64 = ctx.r10.s64 + 19944;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c40308
	if (!cr6.eq) goto loc_82C40308;
loc_82C402F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C40308:
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40ec0
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c402f0
	if (cr6.eq) goto loc_82C402F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_82C402B8) {
	__imp__sub_82C402B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40348) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19944
	ctx.r4.s64 = ctx.r10.s64 + 19944;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c40388
	if (!cr6.eq) goto loc_82C40388;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C40388:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C40348) {
	__imp__sub_82C40348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C403A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82c402b8
	sub_82C402B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c40434
	if (!cr6.eq) goto loc_82C40434;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-15240
	ctx.r4.s64 = ctx.r9.s64 + -15240;
	// li r5,213
	ctx.r5.s64 = 213;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C40434:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40450
	if (cr6.eq) goto loc_82C40450;
	// bl 0x82c3fba0
	sub_82C3FBA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82c40454
	goto loc_82C40454;
loc_82C40450:
	// li r31,0
	r31.s64 = 0;
loc_82C40454:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c4049c
	if (cr6.eq) goto loc_82C4049C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C4049C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C403A0) {
	__imp__sub_82C403A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C404A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
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
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7508
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40604
	if (cr6.eq) goto loc_82C40604;
	// bl 0x821882b0
	sub_821882B0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - r11.s64;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-30920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30920);
	f0.f64 = double(temp.f32);
	// frsp f31,f10
	f31.f64 = double(float(ctx.f10.f64));
	// lfs f29,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f29.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f30,3084(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3084);
	f30.f64 = double(temp.f32);
	// fadds f8,f31,f13
	ctx.f8.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82c40568
	if (!cr6.gt) goto loc_82C40568;
	// stfs f30,20(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f28,f29,f0
	f28.f64 = static_cast<float>(f29.f64 - f0.f64);
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,3092(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3092);
	f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f8,f9,f0,f28
	ctx.f8.f64 = double(std::fma(float(ctx.f9.f64), float(f0.f64), float(f28.f64)));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
loc_82C40568:
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3ff70
	sub_82C3FF70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82c3fc70
	sub_82C3FC70(ctx, base);
	// lbz r11,76(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c405d4
	if (cr6.eq) goto loc_82C405D4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,-28512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82c405bc
	if (cr6.lt) goto loc_82C405BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f12,f0
	f0.f64 = -double(std::fma(float(ctx.f13.f64), float(ctx.f12.f64), -float(f0.f64)));
	// b 0x82c405d4
	goto loc_82C405D4;
loc_82C405BC:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x82c405d4
	if (!cr6.lt) goto loc_82C405D4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f12.f64), float(f0.f64)));
loc_82C405D4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x82c40624
	if (!cr6.gt) goto loc_82C40624;
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, f29.f64);
	// blt cr6,0x82c405ec
	if (cr6.lt) goto loc_82C405EC;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
loc_82C405EC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C40604:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7554
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C40624:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x82c405ec
	goto loc_82C405EC;
}

PPC_WEAK_FUNC(sub_82C404A8) {
	__imp__sub_82C404A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40630) {
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
	// bl 0x82c402b8
	sub_82C402B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82C40630) {
	__imp__sub_82C40630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40658) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,19944
	ctx.r4.s64 = ctx.r10.s64 + 19944;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82C40658) {
	__imp__sub_82C40658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C406B0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c40750
	if (cr6.eq) goto loc_82C40750;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,-15040
	ctx.r4.s64 = r11.s64 + -15040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c40750
	if (cr6.eq) goto loc_82C40750;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,-15060
	ctx.r4.s64 = r11.s64 + -15060;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c40750
	if (cr6.eq) goto loc_82C40750;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,-15072
	ctx.r4.s64 = r11.s64 + -15072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c40754
	if (!cr6.eq) goto loc_82C40754;
loc_82C40750:
	// li r11,0
	r11.s64 = 0;
loc_82C40754:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C406B0) {
	__imp__sub_82C406B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40770) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c407e4
	if (cr6.eq) goto loc_82C407E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c406b0
	sub_82C406B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c407e4
	if (cr6.eq) goto loc_82C407E4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c407e8
	if (!cr6.eq) goto loc_82C407E8;
loc_82C407E4:
	// li r11,0
	r11.s64 = 0;
loc_82C407E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C40770) {
	__imp__sub_82C40770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40808) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40840
	if (cr6.eq) goto loc_82C40840;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-15412
	ctx.r10.s64 = r11.s64 + -15412;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C40840:
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

PPC_WEAK_FUNC(sub_82C40808) {
	__imp__sub_82C40808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40858) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c40990
	if (cr6.lt) goto loc_82C40990;
	// bne cr6,0x82c40af0
	if (!cr6.eq) goto loc_82C40AF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c40904
	if (cr6.lt) goto loc_82C40904;
	// bne cr6,0x82c40af0
	if (!cr6.eq) goto loc_82C40AF0;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c40b60
	if (!cr6.gt) goto loc_82C40B60;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C408C4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c40770
	sub_82C40770(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c40af0
	if (cr6.eq) goto loc_82C40AF0;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c408c4
	if (cr6.lt) goto loc_82C408C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C40904:
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r11,6544
	r26.s64 = r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82c02b98
	sub_82C02B98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c40b60
	if (cr6.eq) goto loc_82C40B60;
loc_82C40944:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40770
	sub_82C40770(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40af0
	if (cr6.eq) goto loc_82C40AF0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82c40944
	if (cr6.lt) goto loc_82C40944;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C40990:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c40a4c
	if (cr6.lt) goto loc_82C40A4C;
	// bne cr6,0x82c40af0
	if (!cr6.eq) goto loc_82C40AF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c40af0
	if (cr6.eq) goto loc_82C40AF0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40b60
	if (cr6.eq) goto loc_82C40B60;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C40A0C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c40770
	sub_82C40770(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c40af0
	if (cr6.eq) goto loc_82C40AF0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82c40a0c
	if (cr6.lt) goto loc_82C40A0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C40A4C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c40af0
	if (cr6.eq) goto loc_82C40AF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c40afc
	if (!cr6.gt) goto loc_82C40AFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r27,r9,-20272
	r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
loc_82C40AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C40AFC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40b60
	if (cr6.eq) goto loc_82C40B60;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C40B1C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40770
	sub_82C40770(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40af0
	if (cr6.eq) goto loc_82C40AF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c40b1c
	if (cr6.lt) goto loc_82C40B1C;
loc_82C40B60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C40858) {
	__imp__sub_82C40858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40B70) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40bb8
	if (cr6.eq) goto loc_82C40BB8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15084
	ctx.r9.s64 = ctx.r10.s64 + -15084;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C40BB8:
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

PPC_WEAK_FUNC(sub_82C40B70) {
	__imp__sub_82C40B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40BD0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16096
	ctx.r9.s64 = r11.s64 + -16096;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
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

PPC_WEAK_FUNC(sub_82C40BD0) {
	__imp__sub_82C40BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40C28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-15084
	ctx.r9.s64 = r11.s64 + -15084;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40c9c
	if (cr6.eq) goto loc_82C40C9C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82C40C9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c00008
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C40C28) {
	__imp__sub_82C40C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40CB0) {
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
	// bl 0x82c40c28
	sub_82C40C28(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40ce8
	if (cr6.eq) goto loc_82C40CE8;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C40CE8:
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

PPC_WEAK_FUNC(sub_82C40CB0) {
	__imp__sub_82C40CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40D00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c40d68
	if (cr6.lt) goto loc_82C40D68;
	// bne cr6,0x82c40e4c
	if (!cr6.eq) goto loc_82C40E4C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c40dc0
	if (cr6.lt) goto loc_82C40DC0;
	// bne cr6,0x82c40e4c
	if (!cr6.eq) goto loc_82C40E4C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40e70
	if (cr6.eq) goto loc_82C40E70;
	// b 0x82c40d88
	goto loc_82C40D88;
loc_82C40D68:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c40dc0
	if (cr6.lt) goto loc_82C40DC0;
	// bne cr6,0x82c40e4c
	if (!cr6.eq) goto loc_82C40E4C;
loc_82C40D88:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40858
	sub_82C40858(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c40e74
	goto loc_82C40E74;
loc_82C40DC0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40858
	sub_82C40858(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c40e44
	if (cr6.eq) goto loc_82C40E44;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82c1b998
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c40e54
	if (cr6.eq) goto loc_82C40E54;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r10,-20180
	r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
loc_82C40E44:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C40E4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c40e74
	goto loc_82C40E74;
loc_82C40E54:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C40E70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C40E74:
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

PPC_WEAK_FUNC(sub_82C40D00) {
	__imp__sub_82C40D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82c40d00
	sub_82C40D00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C40E90) {
	__imp__sub_82C40E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19956
	ctx.r3.s64 = r11.s64 + 19956;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C40EA0) {
	__imp__sub_82C40EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19952
	ctx.r3.s64 = r11.s64 + 19952;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C40EB0) {
	__imp__sub_82C40EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c40edc
	if (!cr6.eq) goto loc_82C40EDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C40EDC:
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x82c40f1c
	if (cr0.lt) goto loc_82C40F1C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
loc_82C40EEC:
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82c40f4c
	if (cr6.gt) goto loc_82C40F4C;
	// bge cr6,0x82c40f54
	if (!cr6.lt) goto loc_82C40F54;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
loc_82C40F14:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x82c40eec
	if (!cr6.gt) goto loc_82C40EEC;
loc_82C40F1C:
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x82c40f48
	if (cr6.lt) goto loc_82C40F48;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82C40F48:
	// blr 
	return;
loc_82C40F4C:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// b 0x82c40f14
	goto loc_82C40F14;
loc_82C40F54:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C40EC0) {
	__imp__sub_82C40EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-14908
	ctx.r4.s64 = r11.s64 + -14908;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,-14928
	r29.s64 = ctx.r10.s64 + -14928;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,3200
	ctx.r4.s64 = ctx.r9.s64 + 3200;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C40F68) {
	__imp__sub_82C40F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C40FF0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14944
	ctx.r10.s64 = r11.s64 + -14944;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00130
	sub_82C00130(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c41034
	if (cr6.eq) goto loc_82C41034;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C41034:
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

PPC_WEAK_FUNC(sub_82C40FF0) {
	__imp__sub_82C40FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41050) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14980
	ctx.r10.s64 = r11.s64 + -14980;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00140
	sub_82C00140(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c41094
	if (cr6.eq) goto loc_82C41094;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C41094:
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

PPC_WEAK_FUNC(sub_82C41050) {
	__imp__sub_82C41050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C410B0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c41134
	if (!cr6.eq) goto loc_82C41134;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c41134
	if (cr6.eq) goto loc_82C41134;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,4(r29)
	PPC_STORE_U8(r29.u32 + 4, ctx.r8.u8);
loc_82C41134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C410B0) {
	__imp__sub_82C410B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41140) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19952
	ctx.r4.s64 = ctx.r10.s64 + 19952;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c41190
	if (!cr6.eq) goto loc_82C41190;
loc_82C41178:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C41190:
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40ec0
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c41178
	if (cr6.eq) goto loc_82C41178;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_82C41140) {
	__imp__sub_82C41140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C411D0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82c41140
	sub_82C41140(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c41264
	if (!cr6.eq) goto loc_82C41264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14888
	ctx.r4.s64 = ctx.r9.s64 + -14888;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C41264:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C411D0) {
	__imp__sub_82C411D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41288) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19952
	ctx.r4.s64 = ctx.r10.s64 + 19952;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c412c8
	if (!cr6.eq) goto loc_82C412C8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C412C8:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C41288) {
	__imp__sub_82C41288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C412E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82c41140
	sub_82C41140(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c41374
	if (!cr6.eq) goto loc_82C41374;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14888
	ctx.r4.s64 = ctx.r9.s64 + -14888;
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C41374:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c413ac
	if (cr6.eq) goto loc_82C413AC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-14944
	ctx.r9.s64 = ctx.r10.s64 + -14944;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C413AC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C412E0) {
	__imp__sub_82C412E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C413C0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,19952
	ctx.r4.s64 = ctx.r10.s64 + 19952;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82C413C0) {
	__imp__sub_82C413C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41418) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c41478
	if (cr6.eq) goto loc_82C41478;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,-14760
	ctx.r4.s64 = r11.s64 + -14760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c4147c
	if (!cr6.eq) goto loc_82C4147C;
loc_82C41478:
	// li r11,0
	r11.s64 = 0;
loc_82C4147C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C41418) {
	__imp__sub_82C41418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41498) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c4150c
	if (cr6.eq) goto loc_82C4150C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c41418
	sub_82C41418(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c4150c
	if (cr6.eq) goto loc_82C4150C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c41510
	if (!cr6.eq) goto loc_82C41510;
loc_82C4150C:
	// li r11,0
	r11.s64 = 0;
loc_82C41510:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C41498) {
	__imp__sub_82C41498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41530) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c41568
	if (cr6.eq) goto loc_82C41568;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-14980
	ctx.r10.s64 = r11.s64 + -14980;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C41568:
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

PPC_WEAK_FUNC(sub_82C41530) {
	__imp__sub_82C41530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41580) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c416b8
	if (cr6.lt) goto loc_82C416B8;
	// bne cr6,0x82c41818
	if (!cr6.eq) goto loc_82C41818;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c4162c
	if (cr6.lt) goto loc_82C4162C;
	// bne cr6,0x82c41818
	if (!cr6.eq) goto loc_82C41818;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c41888
	if (!cr6.gt) goto loc_82C41888;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C415EC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c41498
	sub_82C41498(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c41818
	if (cr6.eq) goto loc_82C41818;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c415ec
	if (cr6.lt) goto loc_82C415EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C4162C:
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r11,6544
	r26.s64 = r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82c02b98
	sub_82C02B98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c41888
	if (cr6.eq) goto loc_82C41888;
loc_82C4166C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c41498
	sub_82C41498(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41818
	if (cr6.eq) goto loc_82C41818;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82c4166c
	if (cr6.lt) goto loc_82C4166C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C416B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c41774
	if (cr6.lt) goto loc_82C41774;
	// bne cr6,0x82c41818
	if (!cr6.eq) goto loc_82C41818;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c41818
	if (cr6.eq) goto loc_82C41818;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41888
	if (cr6.eq) goto loc_82C41888;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C41734:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c41498
	sub_82C41498(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c41818
	if (cr6.eq) goto loc_82C41818;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82c41734
	if (cr6.lt) goto loc_82C41734;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C41774:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c41818
	if (cr6.eq) goto loc_82C41818;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c41824
	if (!cr6.gt) goto loc_82C41824;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r27,r9,-20272
	r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
loc_82C41818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C41824:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41888
	if (cr6.eq) goto loc_82C41888;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C41844:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c41498
	sub_82C41498(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41818
	if (cr6.eq) goto loc_82C41818;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c41844
	if (cr6.lt) goto loc_82C41844;
loc_82C41888:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C41580) {
	__imp__sub_82C41580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41898) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c418e0
	if (cr6.eq) goto loc_82C418E0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-14772
	ctx.r9.s64 = ctx.r10.s64 + -14772;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C418E0:
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

PPC_WEAK_FUNC(sub_82C41898) {
	__imp__sub_82C41898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C418F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-14772
	ctx.r9.s64 = r11.s64 + -14772;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c4196c
	if (cr6.eq) goto loc_82C4196C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82C4196C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c00008
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C418F8) {
	__imp__sub_82C418F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41980) {
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
	// bl 0x82c418f8
	sub_82C418F8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c419b8
	if (cr6.eq) goto loc_82C419B8;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C419B8:
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

PPC_WEAK_FUNC(sub_82C41980) {
	__imp__sub_82C41980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C419D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c41a38
	if (cr6.lt) goto loc_82C41A38;
	// bne cr6,0x82c41b1c
	if (!cr6.eq) goto loc_82C41B1C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c41a90
	if (cr6.lt) goto loc_82C41A90;
	// bne cr6,0x82c41b1c
	if (!cr6.eq) goto loc_82C41B1C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41b40
	if (cr6.eq) goto loc_82C41B40;
	// b 0x82c41a58
	goto loc_82C41A58;
loc_82C41A38:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c41a90
	if (cr6.lt) goto loc_82C41A90;
	// bne cr6,0x82c41b1c
	if (!cr6.eq) goto loc_82C41B1C;
loc_82C41A58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c41580
	sub_82C41580(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c41b44
	goto loc_82C41B44;
loc_82C41A90:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c41580
	sub_82C41580(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41b14
	if (cr6.eq) goto loc_82C41B14;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82c1b998
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c41b24
	if (cr6.eq) goto loc_82C41B24;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r10,-20180
	r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
loc_82C41B14:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C41B1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c41b44
	goto loc_82C41B44;
loc_82C41B24:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C41B40:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C41B44:
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

PPC_WEAK_FUNC(sub_82C419D0) {
	__imp__sub_82C419D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82c419d0
	sub_82C419D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C41B60) {
	__imp__sub_82C41B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19964
	ctx.r3.s64 = r11.s64 + 19964;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C41B70) {
	__imp__sub_82C41B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19960
	ctx.r3.s64 = r11.s64 + 19960;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C41B80) {
	__imp__sub_82C41B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41B90) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14724
	ctx.r10.s64 = r11.s64 + -14724;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00140
	sub_82C00140(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c41bd4
	if (cr6.eq) goto loc_82C41BD4;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C41BD4:
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

PPC_WEAK_FUNC(sub_82C41B90) {
	__imp__sub_82C41B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41BF0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-14668
	ctx.r10.s64 = r11.s64 + -14668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// bl 0x82bffea8
	sub_82BFFEA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c41c54
	if (cr6.eq) goto loc_82C41C54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C41C54:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-14688
	ctx.r4.s64 = r11.s64 + -14688;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bffa40
	sub_82BFFA40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C41BF0) {
	__imp__sub_82C41BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-14588
	ctx.r4.s64 = ctx.r9.s64 + -14588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-14600
	r31.s64 = ctx.r8.s64 + -14600;
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82bff980
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r7,3200
	r28.s64 = ctx.r7.s64 + 3200;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r5,-14612
	ctx.r4.s64 = ctx.r5.s64 + -14612;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-14628
	r31.s64 = r11.s64 + -14628;
	// lwz r27,12(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-14640
	ctx.r4.s64 = ctx.r9.s64 + -14640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-14652
	r31.s64 = ctx.r8.s64 + -14652;
	// lbz r30,16(r30)
	r30.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff9d0
	sub_82BFF9D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C41CB0) {
	__imp__sub_82C41CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41E30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41ed8
	if (cr6.eq) goto loc_82C41ED8;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c41e94
	if (cr6.eq) goto loc_82C41E94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c41ed8
	if (!cr6.eq) goto loc_82C41ED8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// b 0x82c41ed8
	goto loc_82C41ED8;
loc_82C41E94:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c41ed8
	if (!cr6.eq) goto loc_82C41ED8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C41ED8:
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

PPC_WEAK_FUNC(sub_82C41E30) {
	__imp__sub_82C41E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41EF0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r10,r11,-14668
	ctx.r10.s64 = r11.s64 + -14668;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c41f34
	if (cr6.eq) goto loc_82C41F34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C41F34:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82c00130
	sub_82C00130(ctx, base);
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

PPC_WEAK_FUNC(sub_82C41EF0) {
	__imp__sub_82C41EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41F60) {
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
	// bl 0x82c41ef0
	sub_82C41EF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c41f98
	if (cr6.eq) goto loc_82C41F98;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C41F98:
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

PPC_WEAK_FUNC(sub_82C41F60) {
	__imp__sub_82C41F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C41FB0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19960
	ctx.r4.s64 = ctx.r10.s64 + 19960;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c42000
	if (!cr6.eq) goto loc_82C42000;
loc_82C41FE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C42000:
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40ec0
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c41fe8
	if (cr6.eq) goto loc_82C41FE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_82C41FB0) {
	__imp__sub_82C41FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42040) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82c41fb0
	sub_82C41FB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c420d4
	if (!cr6.eq) goto loc_82C420D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14576
	ctx.r4.s64 = ctx.r9.s64 + -14576;
	// li r5,159
	ctx.r5.s64 = 159;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C420D4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C42040) {
	__imp__sub_82C42040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C420F8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19960
	ctx.r4.s64 = ctx.r10.s64 + 19960;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c42138
	if (!cr6.eq) goto loc_82C42138;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C42138:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C420F8) {
	__imp__sub_82C420F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42150) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82c41fb0
	sub_82C41FB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c421e4
	if (!cr6.eq) goto loc_82C421E4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = r11.s64 + -15108;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r10,31240
	r30.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14576
	ctx.r4.s64 = ctx.r9.s64 + -14576;
	// li r5,183
	ctx.r5.s64 = 183;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C421E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c42288
	if (!cr6.eq) goto loc_82C42288;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-14452
	ctx.r4.s64 = r11.s64 + -14452;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r10,31240
	r29.s64 = ctx.r10.s64 + 31240;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14576
	ctx.r4.s64 = ctx.r9.s64 + -14576;
	// li r5,190
	ctx.r5.s64 = 190;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C42288:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c422a4
	if (cr6.eq) goto loc_82C422A4;
	// bl 0x82c41bf0
	sub_82C41BF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82c422a8
	goto loc_82C422A8;
loc_82C422A4:
	// li r31,0
	r31.s64 = 0;
loc_82C422A8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82bffb40
	sub_82BFFB40(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C42150) {
	__imp__sub_82C42150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C422F0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,19960
	ctx.r4.s64 = ctx.r10.s64 + 19960;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82C422F0) {
	__imp__sub_82C422F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42348) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c42408
	if (cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,-20580
	ctx.r4.s64 = r11.s64 + -20580;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c42408
	if (cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,-20592
	ctx.r4.s64 = r11.s64 + -20592;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c42408
	if (cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,-14416
	ctx.r4.s64 = r11.s64 + -14416;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c42408
	if (cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,-14760
	ctx.r4.s64 = r11.s64 + -14760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c4240c
	if (!cr6.eq) goto loc_82C4240C;
loc_82C42408:
	// li r11,0
	r11.s64 = 0;
loc_82C4240C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C42348) {
	__imp__sub_82C42348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42428) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c4249c
	if (cr6.eq) goto loc_82C4249C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c42348
	sub_82C42348(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c4249c
	if (cr6.eq) goto loc_82C4249C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c424a0
	if (!cr6.eq) goto loc_82C424A0;
loc_82C4249C:
	// li r11,0
	r11.s64 = 0;
loc_82C424A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C42428) {
	__imp__sub_82C42428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C424C0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c424f8
	if (cr6.eq) goto loc_82C424F8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-14724
	ctx.r10.s64 = r11.s64 + -14724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C424F8:
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

PPC_WEAK_FUNC(sub_82C424C0) {
	__imp__sub_82C424C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42510) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c42648
	if (cr6.lt) goto loc_82C42648;
	// bne cr6,0x82c427a8
	if (!cr6.eq) goto loc_82C427A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c425bc
	if (cr6.lt) goto loc_82C425BC;
	// bne cr6,0x82c427a8
	if (!cr6.eq) goto loc_82C427A8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c42818
	if (!cr6.gt) goto loc_82C42818;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C4257C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c42428
	sub_82C42428(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c427a8
	if (cr6.eq) goto loc_82C427A8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c4257c
	if (cr6.lt) goto loc_82C4257C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C425BC:
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r11,6544
	r26.s64 = r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82c02b98
	sub_82C02B98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c42818
	if (cr6.eq) goto loc_82C42818;
loc_82C425FC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c42428
	sub_82C42428(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c427a8
	if (cr6.eq) goto loc_82C427A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82c425fc
	if (cr6.lt) goto loc_82C425FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C42648:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c42704
	if (cr6.lt) goto loc_82C42704;
	// bne cr6,0x82c427a8
	if (!cr6.eq) goto loc_82C427A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c427a8
	if (cr6.eq) goto loc_82C427A8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c42818
	if (cr6.eq) goto loc_82C42818;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C426C4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c42428
	sub_82C42428(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c427a8
	if (cr6.eq) goto loc_82C427A8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82c426c4
	if (cr6.lt) goto loc_82C426C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C42704:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c427a8
	if (cr6.eq) goto loc_82C427A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c427b4
	if (!cr6.gt) goto loc_82C427B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r27,r9,-20272
	r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
loc_82C427A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C427B4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c42818
	if (cr6.eq) goto loc_82C42818;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C427D4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c42428
	sub_82C42428(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c427a8
	if (cr6.eq) goto loc_82C427A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c427d4
	if (cr6.lt) goto loc_82C427D4;
loc_82C42818:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C42510) {
	__imp__sub_82C42510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// addi r5,r29,-4
	ctx.r5.s64 = r29.s64 + -4;
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82c3c298
	sub_82C3C298(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x82c428b0
	if (!cr6.lt) goto loc_82C428B0;
loc_82C42878:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(-4) );
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x82c428b0
	if (cr6.lt) goto loc_82C428B0;
	// rotlwi r11,r7,0
	r11.u64 = rotl32(ctx.r7.u32, 0);
	// rotlwi r10,r6,0
	ctx.r10.u64 = rotl32(ctx.r6.u32, 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c428b0
	if (cr6.lt) goto loc_82C428B0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c42878
	if (cr6.lt) goto loc_82C42878;
loc_82C428B0:
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, xer);
	// bge cr6,0x82c428ec
	if (!cr6.lt) goto loc_82C428EC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
loc_82C428BC:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c428ec
	if (cr6.lt) goto loc_82C428EC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = rotl32(ctx.r9.u32, 0);
	// rotlwi r7,r7,0
	ctx.r7.u64 = rotl32(ctx.r7.u32, 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82c428ec
	if (cr6.lt) goto loc_82C428EC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, xer);
	// blt cr6,0x82c428bc
	if (cr6.lt) goto loc_82C428BC;
loc_82C428EC:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82C428F4:
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// bge cr6,0x82c42944
	if (!cr6.lt) goto loc_82C42944;
loc_82C428FC:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c42938
	if (cr6.lt) goto loc_82C42938;
	// rotlwi r9,r9,0
	ctx.r9.u64 = rotl32(ctx.r9.u32, 0);
	// rotlwi r4,r4,0
	ctx.r4.u64 = rotl32(ctx.r4.u32, 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x82c42944
	if (cr6.lt) goto loc_82C42944;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82C42938:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// blt cr6,0x82c428fc
	if (cr6.lt) goto loc_82C428FC;
loc_82C42944:
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, xer);
	// ble cr6,0x82c4299c
	if (!cr6.gt) goto loc_82C4299C;
loc_82C4294C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r11,r6,-4
	r11.s64 = ctx.r6.s64 + -4;
	// lwz r9,-4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(-4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// blt cr6,0x82c4298c
	if (cr6.lt) goto loc_82C4298C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = rotl32(ctx.r4.u32, 0);
	// rotlwi r9,r3,0
	ctx.r9.u64 = rotl32(ctx.r3.u32, 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c42998
	if (cr6.lt) goto loc_82C42998;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82C4298C:
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82c4294c
	if (cr6.lt) goto loc_82C4294C;
loc_82C42998:
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, xer);
loc_82C4299C:
	// bne cr6,0x82c429e8
	if (!cr6.eq) goto loc_82C429E8;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// beq cr6,0x82c42a40
	if (cr6.eq) goto loc_82C42A40;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x82c429c0
	if (cr6.eq) goto loc_82C429C0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82C429C0:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// b 0x82c428f4
	goto loc_82C428F4;
loc_82C429E8:
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bne cr6,0x82c42a28
	if (!cr6.eq) goto loc_82C42A28;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c42a10
	if (cr6.eq) goto loc_82C42A10;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82C42A10:
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// b 0x82c428f4
	goto loc_82C428F4;
loc_82C42A28:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// b 0x82c428f4
	goto loc_82C428F4;
loc_82C42A40:
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82C42828) {
	__imp__sub_82C42828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42A58) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c42aa0
	if (cr6.eq) goto loc_82C42AA0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-14428
	ctx.r9.s64 = ctx.r10.s64 + -14428;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C42AA0:
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

PPC_WEAK_FUNC(sub_82C42A58) {
	__imp__sub_82C42A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42AB8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-14428
	ctx.r9.s64 = r11.s64 + -14428;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c42b2c
	if (cr6.eq) goto loc_82C42B2C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82C42B2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c00008
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C42AB8) {
	__imp__sub_82C42AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42B40) {
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
	// bl 0x82c42ab8
	sub_82C42AB8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c42b78
	if (cr6.eq) goto loc_82C42B78;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C42B78:
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

PPC_WEAK_FUNC(sub_82C42B40) {
	__imp__sub_82C42B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42B90) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c42bf8
	if (cr6.lt) goto loc_82C42BF8;
	// bne cr6,0x82c42cdc
	if (!cr6.eq) goto loc_82C42CDC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c42c50
	if (cr6.lt) goto loc_82C42C50;
	// bne cr6,0x82c42cdc
	if (!cr6.eq) goto loc_82C42CDC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c42d00
	if (cr6.eq) goto loc_82C42D00;
	// b 0x82c42c18
	goto loc_82C42C18;
loc_82C42BF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c42c50
	if (cr6.lt) goto loc_82C42C50;
	// bne cr6,0x82c42cdc
	if (!cr6.eq) goto loc_82C42CDC;
loc_82C42C18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c42510
	sub_82C42510(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c42d04
	goto loc_82C42D04;
loc_82C42C50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c42510
	sub_82C42510(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c42cd4
	if (cr6.eq) goto loc_82C42CD4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82c1b998
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c42ce4
	if (cr6.eq) goto loc_82C42CE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r10,-20180
	r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
loc_82C42CD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C42CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c42d04
	goto loc_82C42D04;
loc_82C42CE4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C42D00:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C42D04:
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

PPC_WEAK_FUNC(sub_82C42B90) {
	__imp__sub_82C42B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82c42b90
	sub_82C42B90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C42D20) {
	__imp__sub_82C42D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-14612
	ctx.r4.s64 = r11.s64 + -14612;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,-14628
	r29.s64 = ctx.r10.s64 + -14628;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,3200
	ctx.r4.s64 = ctx.r9.s64 + 3200;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C42D30) {
	__imp__sub_82C42D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C42DB8) {
	__imp__sub_82C42DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42DC8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c42e14
	if (!cr6.eq) goto loc_82C42E14;
loc_82C42DF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82c42dc8
	sub_82C42DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c42df0
	if (cr6.eq) goto loc_82C42DF0;
loc_82C42E14:
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

PPC_WEAK_FUNC(sub_82C42DC8) {
	__imp__sub_82C42DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42E30) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r10,r11,-14364
	ctx.r10.s64 = r11.s64 + -14364;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c42e74
	if (cr6.eq) goto loc_82C42E74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C42E74:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82c00130
	sub_82C00130(ctx, base);
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

PPC_WEAK_FUNC(sub_82C42E30) {
	__imp__sub_82C42E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42EA0) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82c42dc8
	sub_82C42DC8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_82C42EA0) {
	__imp__sub_82C42EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42EF8) {
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
	// bl 0x82c42e30
	sub_82C42E30(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c42f30
	if (cr6.eq) goto loc_82C42F30;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C42F30:
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

PPC_WEAK_FUNC(sub_82C42EF8) {
	__imp__sub_82C42EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42F48) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c42f74
	if (cr6.eq) goto loc_82C42F74;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82C42F74:
	// addic. r10,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r10.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c42f80
	if (cr0.eq) goto loc_82C42F80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82C42F80:
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c42f8c
	if (cr0.eq) goto loc_82C42F8C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82C42F8C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_82C42F48) {
	__imp__sub_82C42F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C42FD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82c430c0
	if (cr6.eq) goto loc_82C430C0;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfd180
	sub_82BFD180(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x82c4302c
	if (cr6.lt) goto loc_82C4302C;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
loc_82C4302C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_82C43040:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c43054
	if (cr6.eq) goto loc_82C43054;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82c43058
	if (cr6.eq) goto loc_82C43058;
loc_82C43054:
	// twi 31,r0,22
loc_82C43058:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c430c0
	if (cr6.eq) goto loc_82C430C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c4306c
	if (!cr6.eq) goto loc_82C4306C;
	// twi 31,r0,22
loc_82C4306C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82c4307c
	if (!cr6.eq) goto loc_82C4307C;
	// twi 31,r0,22
loc_82C4307C:
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82c430b0
	if (!cr6.eq) goto loc_82C430B0;
	// ld r29,88(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8273f9d8
	sub_8273F9D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c11008
	sub_82C11008(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// b 0x82c43040
	goto loc_82C43040;
loc_82C430B0:
	// bl 0x8273f9d8
	sub_8273F9D8(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// b 0x82c43040
	goto loc_82C43040;
loc_82C430C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C42FD0) {
	__imp__sub_82C42FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C430C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c43174
	if (!cr6.eq) goto loc_82C43174;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c4313c
	if (cr6.eq) goto loc_82C4313C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82c42fd0
	sub_82C42FD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq cr6,0x82c4313c
	if (cr6.eq) goto loc_82C4313C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C4313C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c43174
	if (cr6.eq) goto loc_82C43174;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c43174
	if (!cr6.eq) goto loc_82C43174;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
loc_82C43174:
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

PPC_WEAK_FUNC(sub_82C430C8) {
	__imp__sub_82C430C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19972
	ctx.r3.s64 = r11.s64 + 19972;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C43188) {
	__imp__sub_82C43188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C43198) {
	__imp__sub_82C43198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C431A0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19968
	ctx.r4.s64 = ctx.r10.s64 + 19968;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c431f0
	if (!cr6.eq) goto loc_82C431F0;
loc_82C431D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C431F0:
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c40ec0
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c431d8
	if (cr6.eq) goto loc_82C431D8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_82C431A0) {
	__imp__sub_82C431A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43230) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82c431a0
	sub_82C431A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c432c4
	if (!cr6.eq) goto loc_82C432C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14312
	ctx.r4.s64 = ctx.r9.s64 + -14312;
	// li r5,174
	ctx.r5.s64 = 174;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C432C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C43230) {
	__imp__sub_82C43230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C432E8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19968
	ctx.r4.s64 = ctx.r10.s64 + 19968;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c43328
	if (!cr6.eq) goto loc_82C43328;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C43328:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C432E8) {
	__imp__sub_82C432E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43340) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,19968
	ctx.r4.s64 = ctx.r10.s64 + 19968;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
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

PPC_WEAK_FUNC(sub_82C43340) {
	__imp__sub_82C43340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19968
	ctx.r3.s64 = r11.s64 + 19968;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C43398) {
	__imp__sub_82C43398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C433A8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c43468
	if (cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,-20580
	ctx.r4.s64 = r11.s64 + -20580;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c43468
	if (cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,-20592
	ctx.r4.s64 = r11.s64 + -20592;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c43468
	if (cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,-14184
	ctx.r4.s64 = r11.s64 + -14184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c15068
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c43468
	if (cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,-14760
	ctx.r4.s64 = r11.s64 + -14760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c011e8
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c4346c
	if (!cr6.eq) goto loc_82C4346C;
loc_82C43468:
	// li r11,0
	r11.s64 = 0;
loc_82C4346C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C433A8) {
	__imp__sub_82C433A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43488) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c434fc
	if (cr6.eq) goto loc_82C434FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c433a8
	sub_82C433A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c434fc
	if (cr6.eq) goto loc_82C434FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c43500
	if (!cr6.eq) goto loc_82C43500;
loc_82C434FC:
	// li r11,0
	r11.s64 = 0;
loc_82C43500:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82C43488) {
	__imp__sub_82C43488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43520) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c43658
	if (cr6.lt) goto loc_82C43658;
	// bne cr6,0x82c437b8
	if (!cr6.eq) goto loc_82C437B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c435cc
	if (cr6.lt) goto loc_82C435CC;
	// bne cr6,0x82c437b8
	if (!cr6.eq) goto loc_82C437B8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82c43828
	if (!cr6.gt) goto loc_82C43828;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C4358C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c43488
	sub_82C43488(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c437b8
	if (cr6.eq) goto loc_82C437B8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c4358c
	if (cr6.lt) goto loc_82C4358C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C435CC:
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r11,6544
	r26.s64 = r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82c02b98
	sub_82C02B98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c43828
	if (cr6.eq) goto loc_82C43828;
loc_82C4360C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c43488
	sub_82C43488(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c437b8
	if (cr6.eq) goto loc_82C437B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82c4360c
	if (cr6.lt) goto loc_82C4360C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C43658:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c43714
	if (cr6.lt) goto loc_82C43714;
	// bne cr6,0x82c437b8
	if (!cr6.eq) goto loc_82C437B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c437b8
	if (cr6.eq) goto loc_82C437B8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c43828
	if (cr6.eq) goto loc_82C43828;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,6544
	r29.s64 = r11.s64 + 6544;
loc_82C436D4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82c43488
	sub_82C43488(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c437b8
	if (cr6.eq) goto loc_82C437B8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82c436d4
	if (cr6.lt) goto loc_82C436D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C43714:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c437b8
	if (cr6.eq) goto loc_82C437B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c437c4
	if (!cr6.gt) goto loc_82C437C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c01d60
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// addi r27,r9,-20272
	r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
loc_82C437B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C437C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21c90
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c43828
	if (cr6.eq) goto loc_82C43828;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,6544
	r28.s64 = r11.s64 + 6544;
loc_82C437E4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c43488
	sub_82C43488(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c437b8
	if (cr6.eq) goto loc_82C437B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c21e08
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82c437e4
	if (cr6.lt) goto loc_82C437E4;
loc_82C43828:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C43520) {
	__imp__sub_82C43520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43838) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c43880
	if (cr6.eq) goto loc_82C43880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-14196
	ctx.r9.s64 = ctx.r10.s64 + -14196;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C43880:
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

PPC_WEAK_FUNC(sub_82C43838) {
	__imp__sub_82C43838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43898) {
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
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cb448
	sub_825CB448(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c438dc
	if (cr6.eq) goto loc_82C438DC;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82c438e0
	if (cr6.eq) goto loc_82C438E0;
loc_82C438DC:
	// twi 31,r0,22
loc_82C438E0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c438f8
	if (!cr6.eq) goto loc_82C438F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82C438F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c43904
	if (!cr6.eq) goto loc_82C43904;
	// twi 31,r0,22
loc_82C43904:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82c43914
	if (!cr6.eq) goto loc_82C43914;
	// twi 31,r0,22
loc_82C43914:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C43898) {
	__imp__sub_82C43898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43930) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-14196
	ctx.r9.s64 = r11.s64 + -14196;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82c16c78
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c439a4
	if (cr6.eq) goto loc_82C439A4;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82C439A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c00008
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82C43930) {
	__imp__sub_82C43930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C439B8) {
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
	// bl 0x82c43930
	sub_82C43930(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c439f0
	if (cr6.eq) goto loc_82C439F0;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C439F0:
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

PPC_WEAK_FUNC(sub_82C439B8) {
	__imp__sub_82C439B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c43a74
	if (!cr6.eq) goto loc_82C43A74;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
loc_82C43A40:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// subfc r8,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c43a64
	if (cr6.eq) goto loc_82C43A64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// b 0x82c43a68
	goto loc_82C43A68;
loc_82C43A64:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82C43A68:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c43a40
	if (cr6.eq) goto loc_82C43A40;
loc_82C43A74:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c82a80
	sub_82C82A80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_82C43A08) {
	__imp__sub_82C43A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43AB8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82c431a0
	sub_82C431A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82c43b50
	if (!cr6.eq) goto loc_82C43B50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-14172
	ctx.r4.s64 = r11.s64 + -14172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,31240
	r30.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff848
	sub_82BFF848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// bl 0x82bffaa8
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14312
	ctx.r4.s64 = ctx.r9.s64 + -14312;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
loc_82C43B50:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r27,0
	r27.s64 = 0;
	// beq cr6,0x82c43b8c
	if (cr6.eq) goto loc_82C43B8C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-14364
	ctx.r10.s64 = r11.s64 + -14364;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// b 0x82c43b90
	goto loc_82C43B90;
loc_82C43B8C:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82C43B90:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c43bfc
	if (cr6.eq) goto loc_82C43BFC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82c43898
	sub_82C43898(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c43c68
	if (!cr6.eq) goto loc_82C43C68;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c43c10
	if (!cr6.eq) goto loc_82C43C10;
loc_82C43BF4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
loc_82C43BFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c32138
	sub_82C32138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
loc_82C43C10:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bffea8
	sub_82BFFEA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c0b768
	sub_82C0B768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c43bf4
	if (cr6.eq) goto loc_82C43BF4;
	// rotlwi r4,r11,0
	ctx.r4.u64 = rotl32(r11.u32, 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// bl 0x82bffb40
	sub_82BFFB40(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
loc_82C43C68:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82c43a08
	sub_82C43A08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c32138
	sub_82C32138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C43AB8) {
	__imp__sub_82C43AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43CA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r10,r11,-14348
	ctx.r10.s64 = r11.s64 + -14348;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c82dc0
	sub_82C82DC0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82c00140
	sub_82C00140(ctx, base);
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

PPC_WEAK_FUNC(sub_82C43CA0) {
	__imp__sub_82C43CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43D20) {
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
	// bl 0x82c43ca0
	sub_82C43CA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c43d58
	if (cr6.eq) goto loc_82C43D58;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C43D58:
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

PPC_WEAK_FUNC(sub_82C43D20) {
	__imp__sub_82C43D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43D70) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82c43dc0
	if (cr6.eq) goto loc_82C43DC0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r10,r11,-14348
	ctx.r10.s64 = r11.s64 + -14348;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c42f48
	sub_82C42F48(ctx, base);
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
loc_82C43DC0:
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_82C43D70) {
	__imp__sub_82C43D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43DD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c43e40
	if (cr6.lt) goto loc_82C43E40;
	// bne cr6,0x82c43f24
	if (!cr6.eq) goto loc_82C43F24;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c43e98
	if (cr6.lt) goto loc_82C43E98;
	// bne cr6,0x82c43f24
	if (!cr6.eq) goto loc_82C43F24;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c43f48
	if (cr6.eq) goto loc_82C43F48;
	// b 0x82c43e60
	goto loc_82C43E60;
loc_82C43E40:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82c43e98
	if (cr6.lt) goto loc_82C43E98;
	// bne cr6,0x82c43f24
	if (!cr6.eq) goto loc_82C43F24;
loc_82C43E60:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c43520
	sub_82C43520(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82c43f4c
	goto loc_82C43F4C;
loc_82C43E98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c43520
	sub_82C43520(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c43f1c
	if (cr6.eq) goto loc_82C43F1C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82c1b998
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c43f2c
	if (cr6.eq) goto loc_82C43F2C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r10,-20180
	r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bff7d8
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
loc_82C43F1C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C43F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c43f4c
	goto loc_82C43F4C;
loc_82C43F2C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c3adf0
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	sub_82C2D228(ctx, base);
loc_82C43F48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C43F4C:
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

PPC_WEAK_FUNC(sub_82C43DD8) {
	__imp__sub_82C43DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82c43dd8
	sub_82C43DD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82C43F68) {
	__imp__sub_82C43F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19976
	ctx.r3.s64 = r11.s64 + 19976;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C43F78) {
	__imp__sub_82C43F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43F88) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-14120
	ctx.r9.s64 = r11.s64 + -14120;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82c43fbc
	if (cr6.eq) goto loc_82C43FBC;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C43FBC:
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

PPC_WEAK_FUNC(sub_82C43F88) {
	__imp__sub_82C43F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C43FD0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c44008
	if (cr6.eq) goto loc_82C44008;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-14104
	ctx.r10.s64 = r11.s64 + -14104;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82C44008:
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

PPC_WEAK_FUNC(sub_82C43FD0) {
	__imp__sub_82C43FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44020) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r11,-13984
	ctx.r9.s64 = r11.s64 + -13984;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,19988(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(19988) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,19988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19988, r11.u32);
	// bne 0x82c44080
	if (!cr0.eq) goto loc_82C44080;
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lbz r11,19984(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 19984);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44080
	if (cr6.eq) goto loc_82C44080;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,24816
	ctx.r3.s64 = r11.s64 + 24816;
	// bl 0x82c08430
	sub_82C08430(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,19984(r31)
	PPC_STORE_U8(r31.u32 + 19984, r11.u8);
loc_82C44080:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-14068
	ctx.r10.s64 = r11.s64 + -14068;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82C44020) {
	__imp__sub_82C44020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C440A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19992
	ctx.r3.s64 = r11.s64 + 19992;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C440A8) {
	__imp__sub_82C440A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C440B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19996
	ctx.r3.s64 = r11.s64 + 19996;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C440B8) {
	__imp__sub_82C440B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C440C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82C440C8) {
	__imp__sub_82C440C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C440E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C440E4) {
	__imp__sub_82C440E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C440E8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// addi r24,r3,120
	r24.s64 = ctx.r3.s64 + 120;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44110
	if (cr6.eq) goto loc_82C44110;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c28
	return;
loc_82C44110:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c50a10
	sub_82C50A10(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c50a90
	sub_82C50A90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82c44178
	if (cr6.eq) goto loc_82C44178;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// li r25,3968
	r25.s64 = 3968;
	// li r26,8
	r26.s64 = 8;
loc_82C44144:
	// stw r27,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c50a28
	sub_82C50A28(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r26,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r26.u8);
	// divwu r10,r25,r11
	ctx.r10.u32 = r25.u32 / r11.u32;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// stw r10,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r10.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// blt cr6,0x82c44144
	if (cr6.lt) goto loc_82C44144;
loc_82C44178:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cd3380
	sub_82CD3380(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82C440E8) {
	__imp__sub_82C440E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C441B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82c50a88
	sub_82C50A88(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
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

PPC_WEAK_FUNC(sub_82C441B0) {
	__imp__sub_82C441B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C441F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82c50a90
	sub_82C50A90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
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

PPC_WEAK_FUNC(sub_82C441F0) {
	__imp__sub_82C441F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82c50aa8
	sub_82C50AA8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
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

PPC_WEAK_FUNC(sub_82C44230) {
	__imp__sub_82C44230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,186(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 186);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44284
	if (cr6.eq) goto loc_82C44284;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C44284:
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C44270) {
	__imp__sub_82C44270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(188) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C44298) {
	__imp__sub_82C44298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C442A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82C442A0) {
	__imp__sub_82C442A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C442BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82C442BC) {
	__imp__sub_82C442BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C442C0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C442F0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82c442f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C442F0;
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C44310:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82c44310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C44310;
	// addi r28,r24,8
	r28.s64 = r24.s64 + 8;
	// li r29,-1
	r29.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c50a10
	sub_82C50A10(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82c443a0
	if (cr6.eq) goto loc_82C443A0;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
loc_82C44340:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c50a28
	sub_82C50A28(ctx, base);
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,120(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(120) );
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stbx r8,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// bl 0x82cd3b20
	sub_82CD3B20(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bge cr6,0x82c4437c
	if (!cr6.lt) goto loc_82C4437C;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82C4437C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x82c44340
	if (cr6.lt) goto loc_82C44340;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82c443a0
	if (!cr6.eq) goto loc_82C443A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
loc_82C443A0:
	// lwz r10,172(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(172) );
	// mullw r11,r10,r29
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x82c443b4
	if (!cr6.lt) goto loc_82C443B4;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_82C443B4:
	// divwu. r30,r26,r10
	r30.u32 = r26.u32 / ctx.r10.u32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// beq 0x82c44428
	if (cr0.eq) goto loc_82C44428;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82C443C4:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82c44420
	if (cr6.eq) goto loc_82C44420;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_82C443D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// lhz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lbzx r3,r7,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// beq cr6,0x82c44410
	if (cr6.eq) goto loc_82C44410;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82C44410:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// blt cr6,0x82c443d4
	if (cr6.lt) goto loc_82C443D4;
loc_82C44420:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82c443c4
	if (!cr0.eq) goto loc_82C443C4;
loc_82C44428:
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82c44458
	if (cr6.eq) goto loc_82C44458;
loc_82C44434:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,120(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(120) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82cd3968
	sub_82CD3968(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x82c44434
	if (cr6.lt) goto loc_82C44434;
loc_82C44458:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82C442C0) {
	__imp__sub_82C442C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44468) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// bl 0x82cd3b20
	sub_82CD3B20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82c444ac
	if (!cr6.eq) goto loc_82C444AC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82C444AC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82c50a28
	sub_82C50A28(ctx, base);
	// rlwinm r27,r3,1,0,30
	r27.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r27,r28
	r11.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82c444cc
	if (!cr6.lt) goto loc_82C444CC;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82C444CC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822085d0
	sub_822085D0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divwu r5,r31,r27
	ctx.r5.u32 = r31.u32 / r27.u32;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82cd3968
	sub_82CD3968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82C44468) {
	__imp__sub_82C44468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44500) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82c50a10
	sub_82C50A10(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82C44500) {
	__imp__sub_82C44500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44538) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82c50a28
	sub_82C50A28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82C44538) {
	__imp__sub_82C44538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44570) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82c50aa8
	sub_82C50AA8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82C44570) {
	__imp__sub_82C44570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C445A8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-14068
	ctx.r9.s64 = r11.s64 + -14068;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82c445dc
	if (cr6.eq) goto loc_82C445DC;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C445DC:
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

PPC_WEAK_FUNC(sub_82C445A8) {
	__imp__sub_82C445A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C445F0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-14044
	ctx.r9.s64 = r11.s64 + -14044;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82c44624
	if (cr6.eq) goto loc_82C44624;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C44624:
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

PPC_WEAK_FUNC(sub_82C445F0) {
	__imp__sub_82C445F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44638) {
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
	// bl 0x82c44020
	sub_82C44020(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44670
	if (cr6.eq) goto loc_82C44670;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82C44670:
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

PPC_WEAK_FUNC(sub_82C44638) {
	__imp__sub_82C44638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44688) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82c44af0
	if (cr6.eq) goto loc_82C44AF0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// addi r22,r28,4
	r22.s64 = r28.s64 + 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82c44af0
	if (!cr6.eq) goto loc_82C44AF0;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b48e30
	sub_82B48E30(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c44af0
	if (cr6.eq) goto loc_82C44AF0;
	// li r25,0
	r25.s64 = 0;
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c44ad4
	if (cr6.lt) goto loc_82C44AD4;
	// lis r10,21065
	ctx.r10.s64 = 1380515840;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// ori r9,r10,17990
	ctx.r9.u64 = ctx.r10.u64 | 17990;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c44720
	if (!cr6.eq) goto loc_82C44720;
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x82c44734
	goto loc_82C44734;
loc_82C44720:
	// lis r10,21065
	ctx.r10.s64 = 1380515840;
	// ori r9,r10,18008
	ctx.r9.u64 = ctx.r10.u64 | 18008;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c44ad4
	if (!cr6.eq) goto loc_82C44AD4;
	// stw r25,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r25.u32);
loc_82C44734:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82c44768
	if (cr6.eq) goto loc_82C44768;
	// lbz r11,108(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// lbz r8,109(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_82C44768:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r23,108(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c44ad4
	if (cr6.lt) goto loc_82C44AD4;
	// lis r11,22337
	r11.s64 = 1463877632;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// ori r9,r11,22085
	ctx.r9.u64 = r11.u64 | 22085;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c44ad8
	if (!cr6.eq) goto loc_82C44AD8;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c44a84
	if (cr6.lt) goto loc_82C44A84;
loc_82C447E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rotlwi r27,r3,0
	r27.u64 = rotl32(ctx.r3.u32, 0);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82c4484c
	if (cr6.eq) goto loc_82C4484C;
	// lbz r11,111(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r10,109(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_82C4484C:
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bge cr6,0x82c44a10
	if (!cr6.lt) goto loc_82C44A10;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// bl 0x82b4d518
	sub_82B4D518(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// subf r5,r30,r6
	ctx.r5.s64 = ctx.r6.s64 - r30.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r30,r4,27,31,31
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// beq cr6,0x82c448cc
	if (cr6.eq) goto loc_82C448CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C448CC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c448e8
	if (cr6.eq) goto loc_82C448E8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C448E8:
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c512b8
	sub_82C512B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c44ad4
	if (cr6.eq) goto loc_82C44AD4;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44a10
	if (cr6.eq) goto loc_82C44A10;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c449c0
	if (cr6.eq) goto loc_82C449C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r29,108(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82b4e708
	sub_82B4E708(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c449c0
	if (cr6.eq) goto loc_82C449C0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c449a4
	if (cr6.eq) goto loc_82C449A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c51508
	sub_82C51508(ctx, base);
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82C449A4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c449c0
	if (cr6.eq) goto loc_82C449C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C449C0:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44a10
	if (cr6.eq) goto loc_82C44A10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c51490
	sub_82C51490(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44ad8
	if (cr6.eq) goto loc_82C44AD8;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c44ad4
	if (cr6.lt) goto loc_82C44AD4;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82C44A10:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// addi r10,r23,8
	ctx.r10.s64 = r23.s64 + 8;
	// add r9,r27,r11
	ctx.r9.u64 = r27.u64 + r11.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c44a84
	if (!cr6.lt) goto loc_82C44A84;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c44a54
	if (cr6.eq) goto loc_82C44A54;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrldi r4,r11,32
	ctx.r4.u64 = r11.u64 & 0xFFFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82c44ad4
	if (cr6.lt) goto loc_82C44AD4;
loc_82C44A54:
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82c447e4
	if (!cr6.lt) goto loc_82C447E4;
loc_82C44A84:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822f54c8
	sub_822F54C8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44ac8
	if (cr6.eq) goto loc_82C44AC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C44AC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c20
	return;
loc_82C44AD4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82C44AD8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c44af0
	if (cr6.eq) goto loc_82C44AF0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C44AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82C44688) {
	__imp__sub_82C44688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44B00) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c44b38
	if (cr6.eq) goto loc_82C44B38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_82C44B38:
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

PPC_WEAK_FUNC(sub_82C44B00) {
	__imp__sub_82C44B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44B50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82c44b78
	if (!cr6.eq) goto loc_82C44B78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C44B78:
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c44688
	sub_82C44688(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c44ba4
	if (!cr6.eq) goto loc_82C44BA4;
loc_82C44B90:
	// li r11,2
	r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82C44BA4:
	// bl 0x82bfcb58
	sub_82BFCB58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 56);
	// stb r10,187(r31)
	PPC_STORE_U8(r31.u32 + 187, ctx.r10.u8);
	// bl 0x82c50a88
	sub_82C50A88(ctx, base);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r29,124(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r9,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r9.u32);
	// bl 0x82b4d518
	sub_82B4D518(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,32(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(32) );
	// lwz r29,0(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r4,r5,r29
	ctx.r4.s64 = r29.s64 - ctx.r5.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stb r10,186(r31)
	PPC_STORE_U8(r31.u32 + 186, ctx.r10.u8);
	// beq cr6,0x82c44c24
	if (cr6.eq) goto loc_82C44C24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C44C24:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c44c40
	if (cr6.eq) goto loc_82C44C40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C44C40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c50a10
	sub_82C50A10(ctx, base);
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bgt cr6,0x82c44b90
	if (cr6.gt) goto loc_82C44B90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c50a70
	sub_82C50A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c50a58
	sub_82C50A58(ctx, base);
	// lbz r11,186(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 186);
	// li r27,1
	r27.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82c44c94
	if (!cr6.eq) goto loc_82C44C94;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c085c8
	sub_82C085C8(ctx, base);
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// bgt cr6,0x82c44c90
	if (cr6.gt) goto loc_82C44C90;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(r28.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c44c94
	if (!cr6.gt) goto loc_82C44C94;
loc_82C44C90:
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
loc_82C44C94:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// bl 0x82c085c8
	sub_82C085C8(ctx, base);
	// divwu r11,r3,r28
	r11.u32 = ctx.r3.u32 / r28.u32;
	// stw r3,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// subf. r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82c44b90
	if (!cr0.eq) goto loc_82C44B90;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r31,168
	ctx.r7.s64 = r31.s64 + 168;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r6,r31,164
	ctx.r6.s64 = r31.s64 + 164;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c50af8
	sub_82C50AF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c44b90
	if (cr6.eq) goto loc_82C44B90;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82C44B50) {
	__imp__sub_82C44B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44CF0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r31,r11,20000
	r31.s64 = r11.s64 + 20000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b458c0
	sub_82B458C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c44d2c
	if (cr6.eq) goto loc_82C44D2C;
loc_82C44D18:
	// bl 0x82c44b50
	sub_82C44B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b458c0
	sub_82B458C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c44d18
	if (!cr6.eq) goto loc_82C44D18;
loc_82C44D2C:
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

PPC_WEAK_FUNC(sub_82C44CF0) {
	__imp__sub_82C44CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82C44D40) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lbz r11,19984(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 19984);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82c44d78
	if (cr6.eq) goto loc_82C44D78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C44D78:
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-32060
	r11.s64 = -2101084160;
	// addi r9,r10,24816
	ctx.r9.s64 = ctx.r10.s64 + 24816;
	// addi r11,r11,19696
	r11.s64 = r11.s64 + 19696;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// bl 0x82c08530
	sub_82C08530(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,19984(r31)
	PPC_STORE_U8(r31.u32 + 19984, r11.u8);
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

PPC_WEAK_FUNC(sub_82C44D40) {
	__imp__sub_82C44D40(ctx, base);
}

